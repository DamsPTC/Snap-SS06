/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036fa444; end: 1036fa4e3;  */

void FUN_1036fa444(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036fa4e4; end: 1036fa503;  */

void FUN_1036fa4e4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1036fa504; end: 1036fa58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036fa504(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f89da0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f89da8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036fa58c);
  (*pcVar2)();
}



/* Entry: 1036fa58c; end: 1036fa673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036fa58c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f89da0);
  *(undefined **)(unaff_x20 + _DAT_112f89da0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f89da8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f89da8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110685e70;
  func_0x000107c613fc(&UNK_110685e70,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1036fa678,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1036fa674; end: 1036fa67f;  */

void FUN_1036fa674(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036fa680; end: 1036fa6df; -[_TtC32TopicViewerMusicScopeGraphBridge47SCTopicViewerMusicScopedServicesSaberEntryPoint init] */

void FUN_1036fa680(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerMusicScopeGraphBridge.SCTopicViewerMusicScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fa6ac);
  (*pcVar1)();
}



/* Entry: 1036fa6e0; end: 1036fa717; -[_TtC32TopicViewerMusicScopeGraphBridge47SCTopicViewerMusicScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fa6e0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f89da8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89da0));
  return;
}



/* Entry: 1036fa718; end: 1036fa71b;  */

void FUN_1036fa718(void)

{
  return;
}



/* Entry: 1036fa71c; end: 1036fa73b;  */

void FUN_1036fa71c(void)

{
  FUN_1036fa58c();
  return;
}



/* Entry: 1036fa73c; end: 1036fa75b;  */

void FUN_1036fa73c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5168);
  return;
}



/* Entry: 1036fa75c; end: 1036fa82b;  */

undefined8 FUN_1036fa75c(void)

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
  
  func_0x000107c61428(0x112f89dd8,&uStack_40,0x20,0);
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
    FUN_1036fa82c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1036fa82c; end: 1036fa84b;  */

void FUN_1036fa82c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5230);
  return;
}



/* Entry: 1036fa84c; end: 1036fa987;  */

void FUN_1036fa84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f89de0,&UNK_10dbff3e8);
  puVar1 = &UNK_110685eb8;
  func_0x000107c613fc(&UNK_110685eb8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1036fa988,puVar1);
  return;
}



/* Entry: 1036fa988; end: 1036fa993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fa988(undefined8 *param_1)

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
  FUN_1036fa82c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f89de8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f89df0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f89df8) = uVar7;
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



/* Entry: 1036fa994; end: 1036faa07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fa994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f89de8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f89df0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f89df8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036faa08; end: 1036faa67; -[_TtC32TopicViewerMusicScopeGraphBridge40TopicViewerMusicScopeGraphBridgeServices init] */

void FUN_1036faa08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerMusicScopeGraphBridge.TopicViewerMusicScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036faa34);
  (*pcVar1)();
}



/* Entry: 1036faa68; end: 1036fabbb; -[_TtC32TopicViewerMusicScopeGraphBridge40TopicViewerMusicScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036faa84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036faa88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036faa68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f89de8));
  return;
}



/* Entry: 1036fabbc; end: 1036fabc3;  */

undefined8 FUN_1036fabbc(void)

{
  return 0x1b;
}



/* Entry: 1036fabc4; end: 1036fad3b;  */

void FUN_1036fabc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110685ee0;
  func_0x000107c613fc(&UNK_110685ee0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1036fad3c,puVar1);
  return;
}



/* Entry: 1036fad3c; end: 1036fad43;  */

void FUN_1036fad3c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f89dd8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f89dd8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110685fb8;
  func_0x000107c613fc(&UNK_110685fb8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1036fae10;
  func_0x00010058fa64(0x1036fae10,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036fad44; end: 1036fad9f;  */

void FUN_1036fad44(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f89dd8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f89dd8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1036fada0; end: 1036fae17;  */

undefined ** FUN_1036fada0(void)

{
  return &PTR_DAT_112fef990;
}



/* Entry: 1036fae18; end: 1036fae5f; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fae18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89e50;
  func_0x000107c61428(param_1 + _DAT_112f89e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036fae60; end: 1036faeb7; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fae60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89e50;
  func_0x000107c61428(param_1 + _DAT_112f89e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036faeb8; end: 1036faeff; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint sCMusicCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036faeb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89e58;
  func_0x000107c61428(param_1 + _DAT_112f89e58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036faf00; end: 1036faf0b; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint setSCMusicCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036faf00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89e58;
  func_0x000107c61428(param_1 + _DAT_112f89e58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036faf0c; end: 1036faf53; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint topicViewerMusicScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036faf0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89e60;
  func_0x000107c61428(param_1 + _DAT_112f89e60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036faf54; end: 1036faf5f; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint setTopicViewerMusicScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036faf54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89e60;
  func_0x000107c61428(param_1 + _DAT_112f89e60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036faf60; end: 1036fafbf;  */

void FUN_1036faf60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1036fafc0; end: 1036fb17b;  */

/* WARNING: Possible PIC construction at 0x0001036fb0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036fb0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036fb10c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036fb150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036fb110) */
/* WARNING: Removing unreachable block (ram,0x0001036fb100) */
/* WARNING: Removing unreachable block (ram,0x0001036fb0dc) */
/* WARNING: Removing unreachable block (ram,0x0001036fb154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fafc0(void)

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
  func_0x000107c510c8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5cc58();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1036fa28c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1036fa75c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fb17c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f89bc8) = lVar5;
      *(long *)(lVar3 + _DAT_112f89bd0) = unaff_x20;
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



/* Entry: 1036fb17c; end: 1036fb1a3; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1036fb17c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036fafc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036fb1a4; end: 1036fb1e7; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint end] */

void FUN_1036fb1a4(undefined8 param_1)

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



/* Entry: 1036fb1e8; end: 1036fb3eb;  */

void FUN_1036fb1e8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0f892a0)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010f076d60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0ea2dd0)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f15d230,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "TopicViewerMusicScopeGraphBridge/SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x58,2,0x3c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fb3ec);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59f1c();
        goto LAB_1036fb274;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58670();
  }
LAB_1036fb274:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036fb3ec; end: 1036fb497; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1036fb3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036fb1e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036fb498; end: 1036fb50f; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fb498(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f89e50,0);
  *(undefined8 *)(param_1 + _DAT_112f89e58) = 0;
  *(undefined8 *)(param_1 + _DAT_112f89e60) = 0;
  *(undefined8 *)(param_1 + _DAT_112f89e68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036fb510; end: 1036fb543;  */

void FUN_1036fb510(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036fb544; end: 1036fb59b; -[SCTopicViewerMusicScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036fb570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036fb574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fb544(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f89e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89e58));
  return;
}



/* Entry: 1036fb59c; end: 1036fb5bb;  */

void FUN_1036fb59c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5300);
  return;
}



/* Entry: 1036fb5bc; end: 1036fb5c7; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fb5bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89e98;
  func_0x000107c61428(param_1 + _DAT_112f89e98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036fb5c8; end: 1036fb5d3; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fb5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89e98;
  func_0x000107c61428(param_1 + _DAT_112f89e98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036fb5d4; end: 1036fb5df; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider topicViewerMusicScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fb5d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89ea0;
  func_0x000107c61428(param_1 + _DAT_112f89ea0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036fb5e0; end: 1036fb623;  */

void FUN_1036fb5e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1036fb624; end: 1036fb62f; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider setTopicViewerMusicScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fb624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89ea0;
  func_0x000107c61428(param_1 + _DAT_112f89ea0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036fb630; end: 1036fb683;  */

void FUN_1036fb630(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036fb684; end: 1036fb897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036fb684(void)

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
    func_0x000107c5cc54();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001036fa33c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f89de8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f89ea8);
      *(long *)(unaff_x20 + _DAT_112f89ea8) = lVar4;
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
                      "TopicViewerMusicScopeGraphBridge/SCMusicTopicViewerCTAProviderServiceSaberServiceProvider.swift"
                      ,0x5f,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fb7b0);
  (*pcVar1)();
}



/* Entry: 1036fb898; end: 1036fb8cb; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider provide] */

void FUN_1036fb898(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036fb684();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036fb8cc; end: 1036fb8ff; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider __safeProvide] */

void FUN_1036fb8cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036fb7b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036fb900; end: 1036fb943; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider end] */

void FUN_1036fb900(undefined8 param_1)

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



/* Entry: 1036fb944; end: 1036fbadb;  */

void FUN_1036fb944(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0ea2ce0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f15d320,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "TopicViewerMusicScopeGraphBridge/SCMusicTopicViewerCTAProviderServiceSaberServiceProvider.swift"
                            ,0x5f,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fbadc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59f18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036fbadc; end: 1036fbb87; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_1036fbadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036fb944(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036fbb88; end: 1036fbbfb; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fbb88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f89e98,0);
  func_0x000107c61614(param_1 + _DAT_112f89ea0,0);
  *(undefined8 *)(param_1 + _DAT_112f89ea8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036fbbfc; end: 1036fbc2f;  */

void FUN_1036fbbfc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036fbc30; end: 1036fbc77; -[SCMusicTopicViewerCTAProviderServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fbc30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f89e98);
  func_0x000107c61610(param_1 + _DAT_112f89ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f89ea8));
  return;
}



/* Entry: 1036fbc78; end: 1036fbc97;  */

void FUN_1036fbc78(void)

{
  func_0x000107c61168(&PTR_PTR_112f89ef0);
  return;
}



/* Entry: 1036fbc98; end: 1036fbca3; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fbc98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89f58;
  func_0x000107c61428(param_1 + _DAT_112f89f58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036fbca4; end: 1036fbcaf; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fbca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89f58;
  func_0x000107c61428(param_1 + _DAT_112f89f58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036fbcb0; end: 1036fbcbb; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider topicViewerMusicScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fbcb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89f60;
  func_0x000107c61428(param_1 + _DAT_112f89f60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036fbcbc; end: 1036fbcff;  */

void FUN_1036fbcbc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1036fbd00; end: 1036fbd0b; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider setTopicViewerMusicScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fbd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89f60;
  func_0x000107c61428(param_1 + _DAT_112f89f60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036fbd0c; end: 1036fbd5f;  */

void FUN_1036fbd0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036fbd60; end: 1036fbf73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036fbd60(void)

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
    func_0x000107c5cc54();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001036fa468();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f89df0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f89f68);
      *(long *)(unaff_x20 + _DAT_112f89f68) = lVar4;
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
                      "TopicViewerMusicScopeGraphBridge/SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider.swift"
                      ,99,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fbe8c);
  (*pcVar1)();
}



/* Entry: 1036fbf74; end: 1036fbfa7; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider provide] */

void FUN_1036fbf74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036fbd60();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036fbfa8; end: 1036fbfdb; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider __safeProvide] */

void FUN_1036fbfa8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036fbe8c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036fbfdc; end: 1036fc01f; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider end] */

void FUN_1036fbfdc(undefined8 param_1)

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



/* Entry: 1036fc020; end: 1036fc1b7;  */

void FUN_1036fc020(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0ea2ce0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f15d320,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "TopicViewerMusicScopeGraphBridge/SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider.swift"
                            ,99,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fc1b8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59f18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036fc1b8; end: 1036fc263; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_1036fc1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036fc020(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036fc264; end: 1036fc2d7; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fc264(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f89f58,0);
  func_0x000107c61614(param_1 + _DAT_112f89f60,0);
  *(undefined8 *)(param_1 + _DAT_112f89f68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036fc2d8; end: 1036fc30b;  */

void FUN_1036fc2d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036fc30c; end: 1036fc353; -[SCMusicTopicViewerCameraPresenterServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fc30c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f89f58);
  func_0x000107c61610(param_1 + _DAT_112f89f60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f89f68));
  return;
}



/* Entry: 1036fc354; end: 1036fc373;  */

void FUN_1036fc354(void)

{
  func_0x000107c61168(&PTR_PTR_112f89fb0);
  return;
}



/* Entry: 1036fc374; end: 1036fc3bb; -[SCSCTopicViewerMusicScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fc374(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a018;
  func_0x000107c61428(param_1 + _DAT_112f8a018,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036fc3bc; end: 1036fc413; -[SCSCTopicViewerMusicScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fc3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a018;
  func_0x000107c61428(param_1 + _DAT_112f8a018,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036fc414; end: 1036fc4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fc414(undefined8 param_1,long param_2)

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
    FUN_1036fa73c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f89da0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036fc4ec);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f89da8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f8a020);
    *(long **)(unaff_x20 + _DAT_112f8a020) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1036fc4ec; end: 1036fc513; -[SCSCTopicViewerMusicScopedServicesSaberEntryPoint begin] */

void FUN_1036fc4ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036fc414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036fc514; end: 1036fc68b;  */

/* WARNING: Possible PIC construction at 0x0001036fc57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036fc614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036fc580) */
/* WARNING: Removing unreachable block (ram,0x0001036fc618) */
/* WARNING: Removing unreachable block (ram,0x0001036fc630) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fc514(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f8a020);
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



/* Entry: 1036fc68c; end: 1036fc693;  */

void FUN_1036fc68c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036fc694; end: 1036fc6c7; -[SCSCTopicViewerMusicScopedServicesSaberEntryPoint end] */

void FUN_1036fc694(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036fc514();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036fc6c8; end: 1036fc7e7;  */

void FUN_1036fc6c8(long param_1,long param_2,long param_3)

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
                        "TopicViewerMusicScopeGraphBridge/SCSCTopicViewerMusicScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x34,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fc7e8);
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



/* Entry: 1036fc7e8; end: 1036fc893; -[SCSCTopicViewerMusicScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1036fc7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036fc6c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036fc894; end: 1036fc8f3; -[SCSCTopicViewerMusicScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fc894(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f8a018,0);
  *(undefined8 *)(param_1 + _DAT_112f8a020) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036fc8f4; end: 1036fc927;  */

void FUN_1036fc8f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036fc928; end: 1036fc95f; -[SCSCTopicViewerMusicScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fc928(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f8a018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8a020));
  return;
}



/* Entry: 1036fc960; end: 1036fc97f;  */

void FUN_1036fc960(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5460);
  return;
}



/* Entry: 1036fc980; end: 1036fcb83;  */

long FUN_1036fc980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1106860c0;
  func_0x000107c613fc(&UNK_1106860c0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  uVar2 = 0x112f8a050;
  func_0x0001000285a8(0x112f8a050,&UNK_10dbff690);
  func_0x000107c613fc();
  pcVar3 = FUN_1036fcb84;
  func_0x0001000bdd8c(FUN_1036fcb84,puVar1,uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 1036fcb84; end: 1036fcb8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fcb84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)
           (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130746f8) + _DAT_1130748b0) +
           _DAT_1130749c0);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c42e1c(uStack_48);
  func_0x000107c615e8(uStack_48);
  FUN_10370464c(0);
  func_0x000107c613fc();
  uVar3 = uVar1;
  FUN_1037040d0(uVar1,uVar4,uVar2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1036fcb90; end: 1036fcbc3;  */

void FUN_1036fcb90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036fcbc4; end: 1036fcc27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fcbc4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_1036ff874();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a650) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1036fcc28; end: 1036fcc2f;  */

void FUN_1036fcc28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036fcc30; end: 1036fcc53;  */

void FUN_1036fcc30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036fcc54; end: 1036fccc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fcc54(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_1036ff874();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a650) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1036fccc8; end: 1036fcd43;  */

void FUN_1036fccc8(undefined8 param_1)

{
  if (lRam0000000112f8a080 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e776aec);
  return;
}



/* Entry: 1036fcd44; end: 1036fcd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fcd44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)
           (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130746f8) + _DAT_1130748b0) +
           _DAT_1130749c0);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c42e1c(uStack_48);
  func_0x000107c615e8(uStack_48);
  FUN_10370464c(0);
  func_0x000107c613fc();
  uVar3 = uVar1;
  FUN_1037040d0(uVar1,uVar4,uVar2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1036fcd48; end: 1036fce83;  */

long FUN_1036fcd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110686128;
  func_0x000107c613fc(&UNK_110686128,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  uVar2 = 0x112f8a128;
  func_0x0001000285a8(0x112f8a128,&UNK_10dbff6f0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036fcf7c;
  func_0x0001000bdd8c(FUN_1036fcf7c,puVar1,uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 1036fce84; end: 1036fcf7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fce84(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_113074700);
  uVar1 = ((undefined8 *)(param_2 + _DAT_113074700))[1];
  puVar2 = PTR_PTR_1126ad4e8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c47880();
  func_0x000107c61170(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 1036fcf7c; end: 1036fcf87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fcf7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113074700);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  puVar3 = PTR_PTR_1126ad4e8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c47880();
  func_0x000107c61170(uVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 1036fcf88; end: 1036fcfbb;  */

void FUN_1036fcf88(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036fcfbc; end: 1036fd01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fcfbc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_1036ff904();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a680) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1036fd020; end: 1036fd027;  */

void FUN_1036fd020(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036fd028; end: 1036fd0c7;  */

void FUN_1036fd028(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036fd0c8; end: 1036fd13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd0c8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_1036ff904();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a680) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}


