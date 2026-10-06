/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030c5544; end: 1030c5613;  */

undefined8 FUN_1030c5544(void)

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
  
  func_0x000107c61428(0x112f39df0,&uStack_40,0x20,0);
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
    FUN_1030c5614();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1030c5614; end: 1030c5633;  */

void FUN_1030c5614(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4460);
  return;
}



/* Entry: 1030c5634; end: 1030c569f;  */

void FUN_1030c5634(void)

{
  func_0x0001000285a8(0x112f39df8,&UNK_10db85058);
  func_0x0001000823a8(0x1030c5674,0);
  return;
}



/* Entry: 1030c56a0; end: 1030c56db; -[_TtC43AdAttachmentPresenterPluginScopeGraphBridge51AdAttachmentPresenterPluginScopeGraphBridgeServices init] */

void FUN_1030c56a0(undefined8 param_1)

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



/* Entry: 1030c56dc; end: 1030c570f;  */

void FUN_1030c56dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030c5710; end: 1030c5717;  */

undefined8 FUN_1030c5710(void)

{
  return 0x1b;
}



/* Entry: 1030c5718; end: 1030c588f;  */

void FUN_1030c5718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110608f88;
  func_0x000107c613fc(&UNK_110608f88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030c5890,puVar1);
  return;
}



/* Entry: 1030c5890; end: 1030c5897;  */

void FUN_1030c5890(undefined8 *param_1)

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
  func_0x000107c61428(0x112f39df0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f39df0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110609020;
  func_0x000107c613fc(&UNK_110609020,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1030c5944;
  func_0x00010058fa64(0x1030c5944,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030c5898; end: 1030c58f3;  */

void FUN_1030c5898(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f39df0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f39df0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1030c58f4; end: 1030c594b;  */

undefined ** FUN_1030c58f4(void)

{
  return &PTR_DAT_1130664d8;
}



/* Entry: 1030c594c; end: 1030c5993; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c594c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f39e50;
  func_0x000107c61428(param_1 + _DAT_112f39e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030c5994; end: 1030c59eb; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c5994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f39e50;
  func_0x000107c61428(param_1 + _DAT_112f39e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030c59ec; end: 1030c5a33; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint adAttachmentPresenterPluginScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c59ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f39e58;
  func_0x000107c61428(param_1 + _DAT_112f39e58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030c5a34; end: 1030c5a97; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint setAdAttachmentPresenterPluginScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c5a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f39e58;
  func_0x000107c61428(param_1 + _DAT_112f39e58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030c5a98; end: 1030c5bcb;  */

/* WARNING: Possible PIC construction at 0x0001030c5b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c5b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c5b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c5b54) */
/* WARNING: Removing unreachable block (ram,0x0001030c5b70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c5a98(void)

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
  func_0x000107c3d260();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1030c52cc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1030c5544();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c5bcc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f39d80) = lVar5;
    *(long *)(lVar4 + _DAT_112f39d88) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1030c5bcc; end: 1030c5bf3; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1030c5bcc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030c5a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030c5bf4; end: 1030c5c37; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint end] */

void FUN_1030c5bf4(undefined8 param_1)

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



/* Entry: 1030c5c38; end: 1030c5dcf;  */

void FUN_1030c5c38(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc6) || (param_3 != -0x7ffffffef0ee1920)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000003a,0x800000010f11e6e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdAttachmentPresenterPluginScopeGraphBridge/SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x6e,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c5dd0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52278();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030c5dd0; end: 1030c5e7b; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1030c5dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030c5c38(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030c5e7c; end: 1030c5ee7; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c5e7c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f39e50,0);
  *(undefined8 *)(param_1 + _DAT_112f39e58) = 0;
  *(undefined8 *)(param_1 + _DAT_112f39e60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030c5ee8; end: 1030c5f1b;  */

void FUN_1030c5ee8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030c5f1c; end: 1030c5f63; -[SCAdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030c5f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c5f4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c5f1c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f39e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f39e58));
  return;
}



/* Entry: 1030c5f64; end: 1030c5f83;  */

void FUN_1030c5f64(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4510);
  return;
}



/* Entry: 1030c5f84; end: 1030c5fcb; -[SCAdAttachmentPresenterPluginScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c5f84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f39e90;
  func_0x000107c61428(param_1 + _DAT_112f39e90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030c5fcc; end: 1030c6023; -[SCAdAttachmentPresenterPluginScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c5fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f39e90;
  func_0x000107c61428(param_1 + _DAT_112f39e90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030c6024; end: 1030c60fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6024(undefined8 param_1,long param_2)

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
    FUN_1030c5524();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f39db8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c60fc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f39dc0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f39e98);
    *(long **)(unaff_x20 + _DAT_112f39e98) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1030c60fc; end: 1030c6123; -[SCAdAttachmentPresenterPluginScopedServicesSaberEntryPoint begin] */

void FUN_1030c60fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030c6024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030c6124; end: 1030c629b;  */

/* WARNING: Possible PIC construction at 0x0001030c618c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c6224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c6190) */
/* WARNING: Removing unreachable block (ram,0x0001030c6228) */
/* WARNING: Removing unreachable block (ram,0x0001030c6240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6124(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f39e98);
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



/* Entry: 1030c629c; end: 1030c62a3;  */

void FUN_1030c629c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030c62a4; end: 1030c62d7; -[SCAdAttachmentPresenterPluginScopedServicesSaberEntryPoint end] */

void FUN_1030c62a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030c6124();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030c62d8; end: 1030c63f7;  */

void FUN_1030c62d8(long param_1,long param_2,long param_3)

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
                        "AdAttachmentPresenterPluginScopeGraphBridge/SCAdAttachmentPresenterPluginScopedServicesSaberEntryPoint.swift"
                        ,0x6c,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c63f8);
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



/* Entry: 1030c63f8; end: 1030c64a3; -[SCAdAttachmentPresenterPluginScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1030c63f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030c62d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030c64a4; end: 1030c6503; -[SCAdAttachmentPresenterPluginScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c64a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f39e90,0);
  *(undefined8 *)(param_1 + _DAT_112f39e98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030c6504; end: 1030c6537;  */

void FUN_1030c6504(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030c6538; end: 1030c656f; -[SCAdAttachmentPresenterPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6538(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f39e90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f39e98));
  return;
}



/* Entry: 1030c6570; end: 1030c658f;  */

void FUN_1030c6570(void)

{
  func_0x000107c61168(&PTR_PTR_1128b45d8);
  return;
}



/* Entry: 1030c6590; end: 1030c65db;  */

void FUN_1030c6590(undefined8 param_1)

{
  func_0x0001000285a8(0x112f39ec8,&UNK_10db85240);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1030c6644,param_1);
  return;
}



/* Entry: 1030c65dc; end: 1030c6643;  */

void FUN_1030c65dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1030c6a9c();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1030c688c();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030c6644; end: 1030c664b;  */

void FUN_1030c6644(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1030c6a9c();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1030c688c();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030c664c; end: 1030c66b3;  */

undefined8 FUN_1030c664c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1030c688c(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 1030c66b4; end: 1030c66d7;  */

void FUN_1030c66b4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030c66d8; end: 1030c688b;  */

ulong FUN_1030c66d8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c67c0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c67c4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112f38638;
    func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112f38638;
    func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000026,0x800000010f11e800);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c688c);
  (*pcVar2)();
}



/* Entry: 1030c688c; end: 1030c6a7b;  */

long FUN_1030c688c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  long lStack_68;
  
  func_0x0001048575f8();
  puVar3 = &UNK_10db85318;
  func_0x000107c614e0(&UNK_10db85318);
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c6a28);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c6157c(uVar9);
        }
        else {
          uVar9 = uVar8;
          FUN_1030c66d8(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c6a24);
          (*pcVar2)();
        }
        uVar11 = uVar8 + 1;
        uStack_70 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&lStack_68,&uStack_70,puVar3);
        func_0x000107c61578(uVar9,2);
        lVar1 = lStack_68;
        if (lStack_68 == 0) break;
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          func_0x0001030aab34(0,puVar4 + 1,1,puVar6);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          func_0x0001030aab34(puVar6,uVar8 + 1,1,puVar5);
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
        *(long *)(uVar9 + uVar8 * 8 + 0x20) = lVar1;
        uVar8 = uVar11;
        if (uVar11 == uVar7) goto LAB_1030c6a44;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar7);
  }
LAB_1030c6a44:
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Entry: 1030c6a7c; end: 1030c6a9b;  */

undefined1  [16] FUN_1030c6a7c(void)

{
  return ZEXT816(0x110609128);
}



/* Entry: 1030c6a9c; end: 1030c6abb;  */

void FUN_1030c6a9c(void)

{
  func_0x000107c61168(&PTR_PTR_112f39f28);
  return;
}



/* Entry: 1030c6abc; end: 1030c6b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6abc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036611c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f39f90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1030c6b28; end: 1030c6b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6b28(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036611c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f39f90) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1030c6b30; end: 1030c6b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6b30(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f39f90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030c6b7c; end: 1030c6cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1030c6b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100365f00(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x00010418b4d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  uStack_78 = param_1;
  func_0x00010008a7c8(&uStack_68,&uStack_78);
  func_0x000100083b20(&uStack_78);
  func_0x000107c61574(uStack_68);
  uVar2 = uStack_78;
  uVar1 = uStack_78;
  func_0x000107c614f0(uStack_78);
  (**(code **)(lStack_70 + 0x10))();
  func_0x000107c615e8(uVar2);
  func_0x000100083b20(&lStack_80);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  uVar2 = *(undefined8 *)(lStack_80 + 0x10);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(lStack_80);
  return uVar2;
}



/* Entry: 1030c6cc4; end: 1030c6dc3; -[_TtC35AdAttachmentPresenterPluginRegistry40AdAttachmentPresenterPluginScopeServices buildWithAttachment:uiContainer:context:delegate:disableInternalBrowserPresenter:useSwiftPresenters:autoTriggered:] */

void FUN_1030c6cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1030c6b7c(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  uVar2 = 0x112f38a58;
  func_0x0001000285a8(0x112f38a58,&UNK_10db84230);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1030c6dc4; end: 1030c6e23; -[_TtC35AdAttachmentPresenterPluginRegistry40AdAttachmentPresenterPluginScopeServices init] */

void FUN_1030c6dc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAttachmentPresenterPluginRegistry.AdAttachmentPresenterPluginScopeServices"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c6df0);
  (*pcVar1)();
}



/* Entry: 1030c6e24; end: 1030c6e33; -[_TtC35AdAttachmentPresenterPluginRegistry40AdAttachmentPresenterPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f39f90));
  return;
}



/* Entry: 1030c6e34; end: 1030c6e53;  */

void FUN_1030c6e34(void)

{
  FUN_1030c6b7c();
  return;
}



/* Entry: 1030c6e54; end: 1030c6e63;  */

undefined1  [16] FUN_1030c6e54(void)

{
  return ZEXT816(0x110609188);
}



/* Entry: 1030c6e64; end: 1030c6ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6e64(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1030c7258();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f39fc8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1030c6ed0; end: 1030c6f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6ed0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f39fc8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030c6f3c; end: 1030c6f9b; -[_TtC54AddFriendsCameraRollPickerScopedFactoryServiceProvider42SCAddFriendsCameraRollPickerScopedServices init] */

void FUN_1030c6f3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsCameraRollPickerScopedFactoryServiceProvider.SCAddFriendsCameraRollPickerScopedServices"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c6f68);
  (*pcVar1)();
}



/* Entry: 1030c6f9c; end: 1030c6fab; -[_TtC54AddFriendsCameraRollPickerScopedFactoryServiceProvider42SCAddFriendsCameraRollPickerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f39fc8));
  return;
}



/* Entry: 1030c6fac; end: 1030c7017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c6fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110609368;
  func_0x000107c613fc(&UNK_110609368,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1030c7334,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030c7018; end: 1030c70b3;  */

void FUN_1030c7018(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110609278;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110609278;
  return;
}



/* Entry: 1030c70b4; end: 1030c70eb;  */

void FUN_1030c70b4(long *param_1)

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



/* Entry: 1030c70ec; end: 1030c70f3;  */

undefined8 FUN_1030c70ec(void)

{
  return 0x1b;
}



/* Entry: 1030c70f4; end: 1030c7227;  */

void FUN_1030c70f4(undefined8 *param_1)

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
  puVar1 = &UNK_110609390;
  func_0x000107c613fc(&UNK_110609390,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030c730c;
  func_0x00010058fa64(FUN_1030c730c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030c7228; end: 1030c7257;  */

undefined ** FUN_1030c7228(void)

{
  return &PTR_DAT_112f3a8a8;
}



/* Entry: 1030c7258; end: 1030c7277;  */

void FUN_1030c7258(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4758);
  return;
}



/* Entry: 1030c7278; end: 1030c72c7;  */

undefined1  [16] FUN_1030c7278(void)

{
  return ZEXT816(0x1106092c8);
}



/* Entry: 1030c72c8; end: 1030c730b;  */

void FUN_1030c72c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f3a030 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126acbf0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f3a030 = puVar1;
  return;
}



/* Entry: 1030c730c; end: 1030c7333;  */

void FUN_1030c730c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1030c7334; end: 1030c7337;  */

void FUN_1030c7334(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030c7338; end: 1030c747f;  */

/* WARNING: Possible PIC construction at 0x0001030c7410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c7420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c7430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c7440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c7450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c7444) */
/* WARNING: Removing unreachable block (ram,0x0001030c7434) */
/* WARNING: Removing unreachable block (ram,0x0001030c7424) */
/* WARNING: Removing unreachable block (ram,0x0001030c7414) */
/* WARNING: Removing unreachable block (ram,0x0001030c7454) */

void FUN_1030c7338(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110609418;
  func_0x000107c613fc(&UNK_110609418,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  uVar2 = 0x112f3a040;
  func_0x0001000285a8(0x112f3a040,&UNK_10db85720);
  func_0x000107c613fc();
  uVar3 = 0x1030c78f8;
  func_0x0001000841fc(0x1030c78f8,puVar1,uVar2);
  func_0x000100084214(&UNK_10db856e0,0x38,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1030c7480; end: 1030c74bb;  */

void FUN_1030c7480(void)

{
  long unaff_x20;
  
  FUN_1030c7338(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1030c74bc; end: 1030c74cb;  */

undefined1  [16] FUN_1030c74bc(void)

{
  return ZEXT816(0x1106093f8);
}



/* Entry: 1030c74cc; end: 1030c7883;  */

void FUN_1030c74cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f3a048,&UNK_10db85728);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1030c91e8();
  func_0x000100082720("AddFriendsCameraRollPickerScopeGraphBridgeServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f3a050,&UNK_10db85730);
  puVar3 = &UNK_110609440;
  func_0x000107c613fc(&UNK_110609440,0x70,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  *(undefined8 *)(puVar3 + 0x58) = param_11;
  *(undefined8 *)(puVar3 + 0x60) = param_12;
  *(undefined8 *)(puVar3 + 0x68) = param_13;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(param_13);
  uVar8 = 0x1030c7934;
  func_0x0001000823a8(0x1030c7934,puVar3);
  func_0x000100082720("SCAddFriendsCameraRollPickerEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1030c70b4;
  func_0x0001000823a8(FUN_1030c70b4,0);
  func_0x000100082720("SCAddFriendsCameraRollPickerScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f3a058,&UNK_10db85740);
  puVar3 = &UNK_110609468;
  func_0x000107c613fc(&UNK_110609468,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1030c7970;
  func_0x0001000823a8(FUN_1030c7970,puVar3);
  func_0x000100082720("SCAddFriendsCameraRollPickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112f39fd0,&UNK_10db85460);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1030c797c;
  func_0x0001000823a8(0x1030c797c,pcVar5);
  func_0x000100082720("SCAddFriendsCameraRollPickerScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f39fc0,&UNK_10db85450);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1030c7984;
  func_0x0001000823a8(0x1030c7984,uVar6);
  func_0x000100082720("SCAddFriendsCameraRollPickerScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110609490;
  func_0x000107c613fc(&UNK_110609490,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1030c798c;
  func_0x0001000823a8(0x1030c798c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCAddFriendsCameraRollPickerScopeEntryPointProvider",0x33,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1030c7884; end: 1030c796f;  */

void FUN_1030c7884(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030c7970; end: 1030c7993;  */

void FUN_1030c7970(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030c89a4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCAddFriendsCameraRollPickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030c7994; end: 1030c8753;  */

void FUN_1030c7994(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  FUN_1030c88f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  puVar1 = PTR_PTR_1126acbf8;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f11eae0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f088050);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc7090);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f00d710);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7130);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar15);
  uVar14 = 0x767265536e616373;
  func_0x000107c5fadc(0x767265536e616373,0xec00000073656369);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  *param_1 = param_2;
  return;
}



/* Entry: 1030c8754; end: 1030c87e7;  */

void FUN_1030c8754(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1030c87e8; end: 1030c87ef;  */

undefined8 FUN_1030c87e8(void)

{
  return 0x1b;
}



/* Entry: 1030c87f0; end: 1030c8873;  */

void FUN_1030c87f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1030c8934,param_2,FUN_1030c8938,param_2,FUN_1030c8960,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030c8874; end: 1030c88c3;  */

undefined8 FUN_1030c8874(void)

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



/* Entry: 1030c88c4; end: 1030c88f3;  */

undefined ** FUN_1030c88c4(void)

{
  return &PTR_DAT_112f3a8a8;
}



/* Entry: 1030c88f4; end: 1030c8913;  */

void FUN_1030c88f4(void)

{
  func_0x000107c61168(&PTR_PTR_112f3a0c8);
  return;
}



/* Entry: 1030c8914; end: 1030c8937;  */

undefined1  [16] FUN_1030c8914(void)

{
  return ZEXT816(0x1106094e8);
}



/* Entry: 1030c8938; end: 1030c895f;  */

void FUN_1030c8938(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030c8960; end: 1030c8967;  */

undefined8 FUN_1030c8960(void)

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



/* Entry: 1030c8968; end: 1030c89a3;  */

void FUN_1030c8968(undefined8 *param_1,undefined8 param_2)

{
  FUN_1030c89a4();
  func_0x0001000a7f38("SCAddFriendsCameraRollPickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1030c89a4; end: 1030c8b8f;  */

void FUN_1030c89a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11060a3a8;
  ppuVar4 = &PTR_DAT_112f3a8a8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110609538;
  func_0x000107c613fc(&UNK_110609538,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f3a180;
  func_0x0001000285a8(0x112f3a180,&UNK_10db858e0);
  func_0x0001000a6ee8(&UNK_1106096f0,
                      "AddFriendsCameraRollPickerScopeGraphBridgeScopeInitializationPluginKey",0x46,
                      2,FUN_1030c8b90,puVar2,uVar3,&UNK_1106096f0,&PTR_DAT_112f3a210);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106094e8,
                      "SCAddFriendsCameraRollPickerEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_1030c8c44,param_3,uVar3,&UNK_1106094e8,&PTR_DAT_112f3a060);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110609560;
  func_0x000107c613fc(&UNK_110609560,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110609308,
                      "SCAddFriendsCameraRollPickerScopedServicesScopeInitializationPluginKey",0x46,
                      2,FUN_1030c8cf4,puVar2,uVar3,&UNK_110609308,&PTR_DAT_112f39fd8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f3a188;
  func_0x0001000285a8(0x112f3a188,&UNK_10db858e8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1030c8b90; end: 1030c8bcf;  */

void FUN_1030c8b90(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030c92cc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AddFriendsCameraRollPickerScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030c8bd0; end: 1030c8c43;  */

void FUN_1030c8bd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1030c8d30;
  func_0x0001000823a8(0x1030c8d30,param_3);
  func_0x000100082720("SCAddFriendsCameraRollPickerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030c8c44; end: 1030c8c4b;  */

void FUN_1030c8c44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1030c8d30;
  func_0x0001000823a8();
  func_0x000100082720("SCAddFriendsCameraRollPickerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030c8c4c; end: 1030c8cf3;  */

void FUN_1030c8c4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110609588;
  func_0x000107c613fc(&UNK_110609588,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1030c8d28;
  func_0x0001000823a8(FUN_1030c8d28,puVar1);
  func_0x000100082720("SCAddFriendsCameraRollPickerScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1030c8cf4; end: 1030c8cfb;  */

void FUN_1030c8cf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110609588;
  func_0x000107c613fc(&UNK_110609588,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1030c8d28;
  func_0x0001000823a8(FUN_1030c8d28,puVar3);
  func_0x000100082720("SCAddFriendsCameraRollPickerScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1030c8cfc; end: 1030c8d27;  */

void FUN_1030c8cfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030c8d28; end: 1030c8d37;  */

void FUN_1030c8d28(undefined8 *param_1)

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
  puVar1 = &UNK_110609390;
  func_0x000107c613fc(&UNK_110609390,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030c730c;
  func_0x00010058fa64(FUN_1030c730c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030c8d38; end: 1030c8dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030c8d38(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1030c90f8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f3a190) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f3a198) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c8dc0);
  (*pcVar1)();
}



/* Entry: 1030c8dc0; end: 1030c8e1f; -[_TtC42AddFriendsCameraRollPickerScopeGraphBridge57AddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030c8dc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsCameraRollPickerScopeGraphBridge.AddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c8dec);
  (*pcVar1)();
}



/* Entry: 1030c8e20; end: 1030c8e57; -[_TtC42AddFriendsCameraRollPickerScopeGraphBridge57AddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030c8e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c8e40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c8e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3a190));
  return;
}



/* Entry: 1030c8e58; end: 1030c8e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c8e58(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f3a198),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f3a190));
  return;
}



/* Entry: 1030c8e80; end: 1030c8e9f;  */

void FUN_1030c8e80(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4818);
  return;
}



/* Entry: 1030c8ea0; end: 1030c8f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030c8ea0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3a1c8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f3a1d0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c8f28);
  (*pcVar2)();
}


