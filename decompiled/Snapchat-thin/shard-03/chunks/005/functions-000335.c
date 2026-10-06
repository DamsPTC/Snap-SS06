/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10295e83c; end: 10295e863; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10295e83c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10295e708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10295e864; end: 10295e8a7; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint end] */

void FUN_10295e864(undefined8 param_1)

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



/* Entry: 10295e8a8; end: 10295ea3f;  */

void FUN_10295e8a8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0f30db0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f0cf250,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PlusSubscribeScopeGraphBridge/SCPlusSubscribeScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10295ea40);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5759c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10295ea40; end: 10295eaeb; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10295ea40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10295e8a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10295eaec; end: 10295eb57; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295eaec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecf300,0);
  *(undefined8 *)(param_1 + _DAT_112ecf308) = 0;
  *(undefined8 *)(param_1 + _DAT_112ecf310) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10295eb58; end: 10295eb8b;  */

void FUN_10295eb58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10295eb8c; end: 10295ebd3; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010295ebb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010295ebbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295eb8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecf300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf308));
  return;
}



/* Entry: 10295ebd4; end: 10295ebf3;  */

void FUN_10295ebd4(void)

{
  func_0x000107c61168(&PTR_PTR_112873040);
  return;
}



/* Entry: 10295ebf4; end: 10295ec3b; -[SCPlusSubscribeScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295ebf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecf340;
  func_0x000107c61428(param_1 + _DAT_112ecf340,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10295ec3c; end: 10295ec93; -[SCPlusSubscribeScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295ec3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecf340;
  func_0x000107c61428(param_1 + _DAT_112ecf340,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10295ec94; end: 10295ed6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295ec94(undefined8 param_1,long param_2)

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
    FUN_10295e194();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ecf268) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10295ed6c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ecf270);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ecf348);
    *(long **)(unaff_x20 + _DAT_112ecf348) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10295ed6c; end: 10295ed93; -[SCPlusSubscribeScopedServicesSaberEntryPoint begin] */

void FUN_10295ed6c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10295ec94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10295ed94; end: 10295ef0b;  */

/* WARNING: Possible PIC construction at 0x00010295edfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295ee94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010295ee00) */
/* WARNING: Removing unreachable block (ram,0x00010295ee98) */
/* WARNING: Removing unreachable block (ram,0x00010295eeb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295ed94(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecf348);
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



/* Entry: 10295ef0c; end: 10295ef13;  */

void FUN_10295ef0c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10295ef14; end: 10295ef47; -[SCPlusSubscribeScopedServicesSaberEntryPoint end] */

void FUN_10295ef14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10295ed94();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10295ef48; end: 10295f067;  */

void FUN_10295ef48(long param_1,long param_2,long param_3)

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
                        "PlusSubscribeScopeGraphBridge/SCPlusSubscribeScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10295f068);
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



/* Entry: 10295f068; end: 10295f113; -[SCPlusSubscribeScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10295f068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10295ef48(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10295f114; end: 10295f173; -[SCPlusSubscribeScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295f114(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecf340,0);
  *(undefined8 *)(param_1 + _DAT_112ecf348) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10295f174; end: 10295f1a7;  */

void FUN_10295f174(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10295f1a8; end: 10295f1df; -[SCPlusSubscribeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295f1a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecf340);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf348));
  return;
}



/* Entry: 10295f1e0; end: 10295f1ff;  */

void FUN_10295f1e0(void)

{
  func_0x000107c61168(&PTR_PTR_112873108);
  return;
}



/* Entry: 10295f200; end: 10295f217; -[_TtC19PreviewPageLauncher24PreviewPageLaunchHandler payloadClass] */

void FUN_10295f200(void)

{
  FUN_102aeda04(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10295f218; end: 10295f21b; -[_TtC19PreviewPageLauncher24PreviewPageLaunchHandler setPayloadClass:] */

void FUN_10295f218(void)

{
  return;
}



/* Entry: 10295f21c; end: 10295f42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295f21c(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long alStack_88 [3];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100672b50(param_1,&puStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&puStack_70);
  }
  else {
    uVar1 = 0;
    FUN_102aeda04(0);
    plVar2 = alStack_88;
    func_0x000107c6147c(plVar2,&puStack_70,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x000100083b20(&puStack_70);
      lVar3 = _DAT_112eecf48;
      uVar5 = *(undefined8 *)(alStack_88[0] + _DAT_112eecf38);
      uVar1 = *(undefined8 *)(alStack_88[0] + _DAT_112eecf40);
      func_0x000107c61428(alStack_88[0] + _DAT_112eecf48,alStack_88,0,0);
      lVar3 = alStack_88[0] + lVar3;
      func_0x000107c61618(lVar3);
      func_0x000107c615f0(uVar1);
      func_0x000107c615f0(uVar5);
      puVar4 = puStack_70;
      func_0x000107c3ed40();
      func_0x000107c61180();
      func_0x000107c61170(puStack_70);
      func_0x000107c615e8(uVar5);
      func_0x000107c615e8(uVar1);
      func_0x000107c615e8(lVar3);
      if (param_2 == (code *)0x0) {
        func_0x000107c61170(alStack_88[0]);
        func_0x000107c61170(puVar4);
        return;
      }
      uVar1 = 0;
      func_0x0001022ddcf4();
      puStack_70 = puVar4;
      lStack_58 = uVar1;
      func_0x000107c61174(puVar4);
      (*param_2)(0,&puStack_70);
      func_0x000107c61170(alStack_88[0]);
      goto LAB_10295f3f0;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c466bc();
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  lStack_58 = 0;
  uStack_60 = 0;
  (*param_2)();
LAB_10295f3f0:
  func_0x000107c61170(puVar4);
  func_0x00010006e7f4(&puStack_70);
  return;
}



/* Entry: 10295f42c; end: 10295f4fb; -[_TtC19PreviewPageLauncher24PreviewPageLaunchHandler launchWithPayload:completion:] */

void FUN_10295f42c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105728c0;
    func_0x000107c613fc(&UNK_1105728c0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_10295f58c;
  }
  FUN_10295f21c(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 10295f4fc; end: 10295f55b; -[_TtC19PreviewPageLauncher24PreviewPageLaunchHandler init] */

void FUN_10295f4fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewPageLauncher.PreviewPageLaunchHandler",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295f528);
  (*pcVar1)();
}



/* Entry: 10295f55c; end: 10295f56b; -[_TtC19PreviewPageLauncher24PreviewPageLaunchHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295f55c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecf378));
  return;
}



/* Entry: 10295f56c; end: 10295f58b;  */

void FUN_10295f56c(void)

{
  func_0x000107c61168(&PTR_PTR_1128731c8);
  return;
}



/* Entry: 10295f58c; end: 10295f593;  */

void FUN_10295f58c(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 10295f594; end: 10295f5f3; -[_TtC19PreviewPageLauncher23PreviewPageLaunchPlugin init] */

void FUN_10295f594(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewPageLauncher.PreviewPageLaunchPlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295f5c0);
  (*pcVar1)();
}



/* Entry: 10295f5f4; end: 10295f603; -[_TtC19PreviewPageLauncher23PreviewPageLaunchPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295f5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf3a8));
  return;
}



/* Entry: 10295f604; end: 10295f693; -[_TtC19PreviewPageLauncher23PreviewPageLaunchPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295f604(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ecf3a8);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10295f694; end: 10295f697; -[_TtC19PreviewPageLauncher23PreviewPageLaunchPlugin setNativePayloadHandlers:] */

void FUN_10295f694(void)

{
  return;
}



/* Entry: 10295f698; end: 10295f6e3;  */

void FUN_10295f698(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10295f780,param_1);
  return;
}



/* Entry: 10295f6e4; end: 10295f77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295f6e4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  pplVar7 = &plStack_50;
  lVar2 = 0;
  FUN_10295f56c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ecf378) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_40;
  func_0x000107c61154(plVar4,puVar1);
  plVar5 = plVar4;
  FUN_10295f788();
  plVar6 = plVar5;
  func_0x000107c610f8();
  *(long **)((long)plVar6 + _DAT_112ecf3a8) = plVar4;
  plStack_50 = plVar6;
  plStack_48 = plVar5;
  func_0x000107c61154(&plStack_50,PTR_s_init_1125d9248);
  *param_1 = pplVar7;
  return;
}



/* Entry: 10295f780; end: 10295f787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295f780(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  undefined8 unaff_x20;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  pplVar7 = &plStack_50;
  lVar2 = 0;
  FUN_10295f56c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ecf378) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c();
  plVar4 = &lStack_40;
  func_0x000107c61154(plVar4,puVar1);
  plVar5 = plVar4;
  FUN_10295f788();
  plVar6 = plVar5;
  func_0x000107c610f8();
  *(long **)((long)plVar6 + _DAT_112ecf3a8) = plVar4;
  plStack_50 = plVar6;
  plStack_48 = plVar5;
  func_0x000107c61154(&plStack_50,PTR_s_init_1125d9248);
  *param_1 = pplVar7;
  return;
}



/* Entry: 10295f788; end: 10295f7a7;  */

void FUN_10295f788(void)

{
  func_0x000107c61168(&PTR_PTR_112873288);
  return;
}



/* Entry: 10295f7a8; end: 10295f7b7;  */

undefined1  [16] FUN_10295f7a8(void)

{
  return ZEXT816(0x1105728e8);
}



/* Entry: 10295f7b8; end: 10295fa67;  */

/* WARNING: Possible PIC construction at 0x00010295f958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295f9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295fa08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295fa18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295fa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295fa38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010295fa2c) */
/* WARNING: Removing unreachable block (ram,0x00010295fa1c) */
/* WARNING: Removing unreachable block (ram,0x00010295fa0c) */
/* WARNING: Removing unreachable block (ram,0x00010295f9fc) */
/* WARNING: Removing unreachable block (ram,0x00010295f9ec) */
/* WARNING: Removing unreachable block (ram,0x00010295f9dc) */
/* WARNING: Removing unreachable block (ram,0x00010295f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010295f9bc) */
/* WARNING: Removing unreachable block (ram,0x00010295f9ac) */
/* WARNING: Removing unreachable block (ram,0x00010295f99c) */
/* WARNING: Removing unreachable block (ram,0x00010295f98c) */
/* WARNING: Removing unreachable block (ram,0x00010295f97c) */
/* WARNING: Removing unreachable block (ram,0x00010295f96c) */
/* WARNING: Removing unreachable block (ram,0x00010295f95c) */
/* WARNING: Removing unreachable block (ram,0x00010295fa3c) */

void FUN_10295f7b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105729f8;
  func_0x000107c613fc(&UNK_1105729f8,0x108,7);
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
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  uVar2 = 0x112ecf3e0;
  func_0x0001000285a8(0x112ecf3e0,&UNK_10daf59d0);
  func_0x000107c613fc();
  uVar3 = 0x10295fe40;
  func_0x0001000841fc(0x10295fe40,puVar1,uVar2);
  func_0x000100084214(&UNK_10daf59a0,0x2e,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10295fa68; end: 10295facb;  */

void FUN_10295fa68(void)

{
  long unaff_x20;
  
  FUN_10295f7b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100));
  return;
}



/* Entry: 10295facc; end: 10295fadb;  */

undefined1  [16] FUN_10295facc(void)

{
  return ZEXT816(0x1105729d8);
}



/* Entry: 10295fadc; end: 10295fd2b;  */

void FUN_10295fadc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 auStack_70 [2];
  
  uVar6 = *param_2;
  func_0x0001000285a8(0x112ecf3e8,&UNK_10daf59d8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar6;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102960300();
  func_0x000100082720("AdProfileActionPluginBuilderServiceProvider",0x2b,2);
  FUN_102964f08(in_stack_00000058,in_stack_00000060,in_stack_00000068,in_stack_00000070,
                in_stack_00000078,in_stack_00000080,in_stack_00000088,in_stack_00000090,
                in_stack_00000098,in_stack_000000a0,puVar1,in_stack_000000a8,in_stack_000000b0,
                in_stack_000000b8,in_stack_00000030,in_stack_00000038,in_stack_00000040,
                in_stack_00000048,in_stack_00000050);
  func_0x000100082720("SCMapFriendActionSheetBuilderServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112ecf3f0,&UNK_10daf59e0);
  puVar3 = &UNK_110572a20;
  func_0x000107c613fc(&UNK_110572a20,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = in_stack_00000058;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(in_stack_00000058);
  pcVar4 = FUN_10295feb8;
  func_0x0001000823a8(FUN_10295feb8,puVar3);
  func_0x000100082720("FriendActionPluginRegistryServiceProvider",0x29,2);
  pcVar5 = pcVar4;
  FUN_102965a7c();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(in_stack_00000058);
  func_0x000107c61574(pcVar4);
  func_0x000100082720("FriendActionPluginProviderEntryPointProvider",0x2c,2);
  *param_1 = pcVar5;
  return;
}



/* Entry: 10295fd2c; end: 10295feb7;  */

void FUN_10295fd2c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10295feb8; end: 10295febf;  */

void FUN_10295feb8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10295fefc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000a7f38("FriendActionPluginRegistryServiceProvider",0x29,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10295fec0; end: 10295fefb;  */

void FUN_10295fec0(undefined8 *param_1,undefined8 param_2)

{
  FUN_10295fefc();
  func_0x0001000a7f38("FriendActionPluginRegistryServiceProvider",0x29,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10295fefc; end: 10296017f;  */

void FUN_10295fefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  puVar1 = &UNK_110573440;
  ppuVar3 = &PTR_DAT_112ecfa28;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ecf3f8;
  func_0x0001000285a8(0x112ecf3f8,&UNK_10daf59e8);
  func_0x0001000a6ee8(&UNK_110572de0,"AdCTAProfileActionPluginKey",0x1b,2,FUN_102960180,param_1,
                      uVar2,&UNK_110572de0,&PTR_DAT_112ecf560);
  func_0x000107c61574(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000a6ee8(&UNK_1105732a8,"MapFriendActionSheetPluginKey",0x1d,2,0x1029601c0,param_2,
                      uVar2,&UNK_1105732a8,&PTR_DAT_112ecf980);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000a6ee8(&UNK_110572e20,"NotInterestedAdProfileActionPluginKey",0x25,2,0x102960200,
                      param_1,uVar2,&UNK_110572e20,&PTR_DAT_112ecf588);
  func_0x000107c61574(param_1);
  func_0x000107c6157c(param_1);
  func_0x0001000a6ee8(&UNK_110572ee0,"PlusSubscribeAdProfileActionPluginKey",0x25,2,0x102960240,
                      param_1,uVar2,&UNK_110572ee0,&PTR_DAT_112ecf600);
  func_0x000107c61574(param_1);
  func_0x000107c6157c(param_1);
  func_0x0001000a6ee8(&UNK_110572e60,"ReportAdProfileActionPluginKey",0x1e,2,0x102960280,param_1,
                      uVar2,&UNK_110572e60,&PTR_DAT_112ecf5b0);
  func_0x000107c61574(param_1);
  func_0x000107c6157c(param_1);
  func_0x0001000a6ee8(&UNK_110572ea0,"WhyAmISeeingThisAdProfileActionPluginKey",0x28,2,0x1029602c0,
                      param_1,uVar2,&UNK_110572ea0,&PTR_DAT_112ecf5d8);
  func_0x000107c61574(param_1);
  uVar2 = 0x112ecf400;
  func_0x0001000285a8(0x112ecf400,&UNK_10daf59f0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar3,param_3,uVar2);
  return;
}



/* Entry: 102960180; end: 1029602ff;  */

void FUN_102960180(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001029623cc();
  func_0x000100082720("AdCTAProfileActionPluginProvider",0x20,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102960300; end: 102960667;  */

void FUN_102960300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecf408,&UNK_10daf5a00);
  puVar1 = &UNK_110572af0;
  func_0x000107c613fc(&UNK_110572af0,0xa8,7);
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
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000823a8(FUN_102960668,puVar1);
  return;
}



/* Entry: 102960668; end: 1029606b3;  */

void FUN_102960668(void)

{
  long unaff_x20;
  
  func_0x0001029604b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1029606b4; end: 102960793;  */

void FUN_1029606b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0xb0) = 1;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  return;
}



/* Entry: 102960794; end: 1029608cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102960794(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0xa8);
  lVar3 = *(long *)(unaff_x20 + 0xb0);
  lVar6 = lVar1;
  lVar5 = lVar3;
  if (lVar3 == 1) {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ecfa48);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar6 = 0;
      param_2 = 0;
    }
    else {
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(long *)(unaff_x20 + 0xa8) = lVar6;
    *(long *)(unaff_x20 + 0xb0) = param_2;
    func_0x000107c61434(param_2);
    func_0x0001007742d4(uVar2,uVar4);
    lVar5 = param_2;
  }
  func_0x0001007742e8(lVar1,lVar3);
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = lVar6;
  return auVar7;
}



/* Entry: 1029608cc; end: 102961e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1029608cc(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong auStack_a0 [5];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = (long)auStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112dbe3d8;
  puVar8 = &UNK_10d979340;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar6 - extraout_x8_00;
  uVar2 = 0;
  func_0x000103e07278();
  lVar1 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  puVar9 = (ulong *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_102960794();
  if (puVar8 == (undefined *)0x0) {
    return 0;
  }
  auStack_a0[1] = lVar6;
  auStack_a0[2] = uVar2;
  auStack_a0[3] = uVar3;
  func_0x000100083b20(&lStack_78);
  lVar6 = lStack_78;
  lVar4 = lStack_78;
  func_0x000107c43a80();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_78);
  lVar6 = lStack_78;
  auStack_a0[4] = *(undefined8 *)(lStack_78 + _DAT_113010968);
  func_0x000107c6157c();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_68);
  uVar11 = *(undefined8 *)(lStack_68 + _DAT_113011448);
  func_0x000107c6157c(uVar11);
  func_0x000107c61170(lStack_68);
  func_0x0001000d224c(&lStack_78);
  func_0x000107c61574(uVar11);
  if (lVar5 != 0) {
    func_0x000107c615f0(lVar5);
    uVar3 = auStack_a0[3];
    func_0x000107c5fadc(auStack_a0[3],puVar8);
    lVar6 = lVar5;
    func_0x000107c43aa0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar3);
    if (lVar6 != 0) {
      lVar4 = lVar6;
      func_0x000107c3d15c();
      func_0x000107c61180();
      lVar7 = lVar4;
      FUN_10296221c();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar6);
      if (lVar7 != 0) {
        func_0x000107c6142c(puVar8);
        func_0x000107c615e8(lStack_78);
        func_0x000107c61574(auStack_a0[4]);
        func_0x000107c615e8(lVar5);
        return lVar7;
      }
    }
  }
  func_0x000107c614f0(lStack_78);
  (**(code **)(lStack_70 + 8))(lVar10);
  uVar3 = auStack_a0[2];
  lVar6 = lVar10;
  (**(code **)(lVar1 + 0x30))(lVar10,1,auStack_a0[2]);
  if ((int)lVar6 == 1) {
    func_0x000107c6142c(puVar8);
    func_0x000107c615e8(lStack_78);
    func_0x000107c61574(auStack_a0[4]);
    func_0x000107c615e8(lVar5);
    func_0x00010207ff48(lVar10);
LAB_102960b78:
    uVar2 = 0;
  }
  else {
    func_0x00010205f36c(lVar10,puVar9);
    uVar2 = *puVar9;
    if ((uVar2 == auStack_a0[3]) && (puVar8 == (undefined *)puVar9[1])) {
      func_0x000107c6142c(puVar8);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c6142c(puVar8);
      if ((uVar2 & 1) == 0) {
        func_0x000107c615e8(lStack_78);
        func_0x000107c61574(auStack_a0[4]);
        func_0x000107c615e8(lVar5);
        func_0x00010207ff90(puVar9);
        goto LAB_102960b78;
      }
    }
    uVar2 = auStack_a0[1];
    func_0x000101681be8((long)puVar9 + (long)*(int *)(uVar3 + 0x14),auStack_a0[1]);
    func_0x0001047c0984(0);
    func_0x000107c610f8();
    func_0x0001047b952c(uVar2);
    func_0x000107c615e8(lStack_78);
    func_0x000107c61574(auStack_a0[4]);
    func_0x000107c615e8(lVar5);
    func_0x00010207ff90(puVar9);
  }
  return uVar2;
}



/* Entry: 102961ea0; end: 102961f3b;  */

void FUN_102961ea0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000008;
  undefined8 uStack_38;
  
  if (param_2 >> 0x3c < 0xf) {
    func_0x0001000d224c(&uStack_38);
    func_0x000107c5ee20(param_1,param_2);
    uVar2 = uStack_38;
    func_0x000107c4e36c();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = *in_stack_00000008;
  *in_stack_00000008 = uVar2;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102961f3c; end: 102962017;  */

void FUN_102961f3c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x0001007742d4(*(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000102962058(*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 102962018; end: 102962077;  */

void FUN_102962018(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1029635c8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102962078; end: 1029620e7;  */

void FUN_102962078(void)

{
  func_0x000107c61168(&PTR_PTR_112ecf450);
  return;
}



/* Entry: 1029620e8; end: 1029620ef;  */

void FUN_1029620e8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1029620f0; end: 10296213b;  */

undefined8 * FUN_1029620f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 10296213c; end: 102962177;  */

undefined8 * FUN_10296213c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 102962178; end: 10296221b;  */

int FUN_102962178(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10296221c; end: 102962347;  */

undefined8 FUN_10296221c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  if (param_1 != 0) {
    func_0x000107c406e0();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar3 = &UNK_110572d40;
      func_0x000107c613fc(&UNK_110572d40,0x20,7);
      *(undefined8 **)(puVar3 + 0x10) = &uStack_48;
      *(undefined8 *)(puVar3 + 0x18) = param_2;
      puVar1 = &UNK_110572d68;
      func_0x000107c613fc(&UNK_110572d68,0x20,7);
      pcVar5 = FUN_102962348;
      *(code **)(puVar1 + 0x10) = FUN_102962348;
      *(undefined **)(puVar1 + 0x18) = puVar3;
      pcStack_58 = FUN_102962374;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_10206b664;
      puStack_60 = &UNK_110572d80;
      ppuVar2 = &puStack_78;
      puStack_50 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_50;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c4c5a4(param_1);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(param_1);
      uVar4 = uStack_48;
      goto LAB_102962320;
    }
  }
  uVar4 = 0;
  pcVar5 = (code *)0x0;
  puVar3 = (undefined *)0x0;
LAB_102962320:
  func_0x00010206be4c(pcVar5,puVar3);
  return uVar4;
}



/* Entry: 102962348; end: 102962373;  */

void FUN_102962348(void)

{
  FUN_102961ea0();
  return;
}



/* Entry: 102962374; end: 1029623a3;  */

void FUN_102962374(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029623a4; end: 1029623d7;  */

void FUN_1029623a4(long param_1,long param_2)

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



/* Entry: 1029623d8; end: 1029623f7;  */

void FUN_1029623d8(void)

{
  func_0x0001029624e0();
  return;
}



/* Entry: 1029623f8; end: 102962403;  */

void FUN_1029623f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecf558,&UNK_10daf5b80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102962404,param_1);
  return;
}



/* Entry: 102962404; end: 102962423;  */

void FUN_102962404(void)

{
  func_0x0001029624e0();
  return;
}



/* Entry: 102962424; end: 10296242f;  */

void FUN_102962424(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecf558,&UNK_10daf5b80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102962430,param_1);
  return;
}



/* Entry: 102962430; end: 10296244f;  */

void FUN_102962430(void)

{
  func_0x0001029624e0();
  return;
}



/* Entry: 102962450; end: 10296245b;  */

void FUN_102962450(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecf558,&UNK_10daf5b80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10296245c,param_1);
  return;
}



/* Entry: 10296245c; end: 10296247b;  */

void FUN_10296245c(void)

{
  func_0x0001029624e0();
  return;
}



/* Entry: 10296247c; end: 102962487;  */

void FUN_10296247c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecf558,&UNK_10daf5b80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102962534,param_1);
  return;
}



/* Entry: 102962488; end: 102962533;  */

void FUN_102962488(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112ecf558,&UNK_10daf5b80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102962534; end: 102962553;  */

void FUN_102962534(void)

{
  func_0x0001029624e0();
  return;
}



/* Entry: 102962554; end: 102962693;  */

void FUN_102962554(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110572da8;
  return;
}



/* Entry: 102962694; end: 1029626a3; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102962694(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ecf670);
}



/* Entry: 1029626a4; end: 1029626b3; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin setPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029626a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112ecf670) = param_3;
  return;
}



/* Entry: 1029626b4; end: 1029626c3; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin prominentActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029626b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf678));
  return;
}



/* Entry: 1029626c4; end: 1029626f7; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin setProminentActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029626c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf678);
  *(undefined8 *)(param_1 + _DAT_112ecf678) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029626f8; end: 102962707; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin actionSheetCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029626f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf680));
  return;
}



/* Entry: 102962708; end: 10296273b; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin setActionSheetCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102962708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf680);
  *(undefined8 *)(param_1 + _DAT_112ecf680) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10296273c; end: 102962bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296273c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  uVar14 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112ecf628) + _DAT_113815208);
  if (uVar14 != 0) {
    uVar13 = uVar14 & 0xffffffffffffff8;
    if (uVar14 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar2 = uVar14;
      if (-1 < (long)uVar14) {
        uVar2 = uVar13;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102962bb8);
          (*pcVar1)();
        }
        puVar3 = *(undefined **)(uVar14 + 0x20);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61434(uVar14);
        puVar3 = (undefined *)0x0;
        func_0x000100e471e4(0,uVar14);
        func_0x000107c6142c(uVar14);
      }
      func_0x000103bfb8b0(0);
      puVar4 = puVar3;
      func_0x000107c5cc0c();
      func_0x000107c61180();
      puVar5 = puVar3;
      func_0x000107c3ec40();
      func_0x000107c61180();
      puVar6 = puVar4;
      puVar9 = puVar5;
      func_0x000103bfab18();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c61170(puVar3);
      }
      else {
        puStack_80 = puVar6;
        puStack_78 = puVar9;
        func_0x000100e8b654();
        puVar4 = PTR___sSSN_11034da80;
        func_0x000107c601f8(PTR___sSSN_11034da80,puVar5);
        func_0x000107c6142c(puVar9);
        puVar6 = PTR_PTR_1126aec40;
        func_0x000107c61168();
        func_0x000107c3ee98();
        func_0x000107c61180();
        func_0x000107c61174();
        func_0x000107c5a050();
        func_0x000107c59a2c(puVar6);
        func_0x000107c5fadc(puVar4,puVar5);
        func_0x000107c6142c(puVar5);
        func_0x000107c59e1c(puVar6);
        func_0x000107c61170(puVar4);
        func_0x000107c544f8(puVar6);
        func_0x000107c55528(puVar6);
        uVar7 = 0xd000000000000012;
        func_0x000107c5fadc(0xd000000000000012,0x800000010f0cf6a0);
        func_0x000107c520f4(puVar6);
        func_0x000107c61170(uVar7);
        puVar4 = &UNK_110572f30;
        func_0x000107c613fc(&UNK_110572f30,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        pcStack_60 = FUN_10296340c;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_78 = (undefined *)0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_110572f48;
        puStack_58 = puVar4;
        func_0x000107c60bc4(&puStack_80);
        func_0x000107c61574(puStack_58);
        func_0x000107c56ea0(puVar6);
        func_0x000107c60bd0(ppuVar8);
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x000107c453e4();
        func_0x000107c3d89c();
        puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168();
        puVar9 = puVar5;
        func_0x0001008478a8();
        func_0x000107c613fc();
        *(undefined8 *)(puVar9 + 0x18) = 9;
        *(undefined8 *)(puVar9 + 0x10) = 4;
        puVar10 = puVar6;
        func_0x000107c3f75c();
        func_0x000107c61180();
        puVar11 = puVar4;
        func_0x000107c3f75c(puVar4);
        func_0x000107c61180();
        puVar12 = puVar10;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
        *(undefined **)(puVar9 + 0x20) = puVar12;
        puVar10 = puVar6;
        func_0x000107c3f764();
        func_0x000107c61180();
        puVar11 = puVar4;
        func_0x000107c3f764(puVar4);
        func_0x000107c61180();
        puVar12 = puVar10;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
        *(undefined **)(puVar9 + 0x28) = puVar12;
        puVar10 = puVar6;
        func_0x000107c5e308();
        func_0x000107c61180();
        func_0x000107c5e308(puVar4);
        func_0x000107c61180();
        puVar11 = puVar10;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar4);
        *(undefined **)(puVar9 + 0x30) = puVar11;
        puVar4 = puVar6;
        func_0x000107c44d9c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        puVar10 = puVar4;
        func_0x000107c40290(0x4042000000000000);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        *(undefined **)(puVar9 + 0x38) = puVar10;
        uVar7 = 0;
        func_0x000100847984(0);
        puVar4 = puVar9;
        func_0x000107c5fc48(puVar9,uVar7);
        func_0x000107c61574(puVar9);
        func_0x000107c3d048(puVar5);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar4);
      }
    }
  }
  return;
}



/* Entry: 102962bb8; end: 102962c0b;  */

void FUN_102962bb8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102962c0c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102962c0c; end: 10296309f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102962c0c(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined *puVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  lVar16 = *(long *)(unaff_x20 + _DAT_112ecf628);
  if (*(int *)(lVar16 + _DAT_113815200) == 0x16) {
    func_0x0001000d224c(&lStack_b8);
    lVar3 = lStack_b8;
    func_0x000107c614f0(lStack_b8);
    puStack_a8 = (undefined *)0xd000000000000045;
    uStack_a0 = 0x800000010efb4800;
    puStack_98 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff00);
    (**(code **)(lStack_b0 + 8))
              (&uStack_78,&puStack_a8,&UNK_1107383c8,&PTR_DAT_11304a4b0,lVar3,lStack_b0);
    uVar14 = uStack_78 & 0xff;
    func_0x000107c615e8(lStack_b8);
  }
  else {
    uVar14 = 0;
  }
  uVar17 = *(ulong *)(lVar16 + _DAT_113815208);
  if (uVar17 != 0) {
    uVar15 = uVar17 & 0xffffffffffffff8;
    if (uVar17 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar4 = uVar17;
      if (-1 < (long)uVar17) {
        uVar4 = uVar15;
      }
      func_0x000107c60480();
    }
    if ((long)uVar14 < (long)uVar4) {
      if ((uVar17 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029630a0);
          (*pcVar2)();
        }
        uVar14 = *(ulong *)(uVar17 + uVar14 * 8 + 0x20);
        func_0x000107c61174(uVar14);
      }
      else {
        func_0x000107c61434(uVar17);
        func_0x000100e471e4(uVar14,uVar17);
        func_0x000107c6142c(uVar17);
      }
      func_0x0001000d224c(&puStack_a8);
      puVar7 = puStack_a8;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ecf660);
      func_0x000107c5c734(uVar5);
      func_0x000107c61180();
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ecf640);
      func_0x000107c5c734(uVar6);
      func_0x000107c61180();
      uVar17 = uVar14;
      func_0x000107c3e2ec(uVar14);
      func_0x000107c61180();
      func_0x000107c615e8(puVar7);
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(uVar6);
      lStack_b8 = 0;
      uStack_78 = 0;
      puVar7 = &UNK_110572f80;
      func_0x000107c613fc(&UNK_110572f80,0x18,7);
      *(long **)(puVar7 + 0x10) = &lStack_b8;
      puVar8 = &UNK_110572fa8;
      func_0x000107c613fc(&UNK_110572fa8,0x20,7);
      *(code **)(puVar8 + 0x10) = FUN_102963430;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = (code *)0x10296345c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_102062118;
      puStack_90 = &UNK_110572fc0;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c61574(puStack_80);
      puVar8 = &UNK_110572ff8;
      func_0x000107c613fc(&UNK_110572ff8,0x18,7);
      *(ulong **)(puVar8 + 0x10) = &uStack_78;
      puVar10 = &UNK_110573020;
      func_0x000107c613fc(&UNK_110573020,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = 0x10296347c;
      *(undefined **)(puVar10 + 0x18) = puVar8;
      pcStack_88 = (code *)0x1029634c8;
      puStack_a8 = puVar1;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100e27b38;
      puStack_90 = &UNK_110573038;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61574(puStack_80);
      func_0x000107c4c754(uVar17);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar9);
      if (lStack_b8 == 0) {
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar17);
      }
      else {
        lVar16 = lStack_b8;
        func_0x000107c61174();
        pcVar12 = "handleTap()";
        func_0x0001000c10c0("handleTap()");
        func_0x000107c61180();
        puVar10 = &UNK_110572f30;
        func_0x000107c613fc(&UNK_110572f30,0x18,7);
        func_0x000107c61614(puVar10 + 0x10);
        puVar13 = &UNK_110573070;
        func_0x000107c613fc(&UNK_110573070,0x20,7);
        *(undefined **)(puVar13 + 0x10) = puVar10;
        *(long *)(puVar13 + 0x18) = lVar16;
        pcStack_88 = FUN_1029634a8;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_110573088;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar13;
        func_0x000107c60bc4(ppuVar9);
        puVar10 = puStack_80;
        func_0x000107c61174(lVar16);
        func_0x000107c61574(puVar10);
        func_0x000107c4e590(pcVar12);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar17);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(lVar16);
        func_0x000107c615e8(pcVar12);
      }
      func_0x000107c614ac(uStack_78);
      lVar16 = lStack_b8;
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(lVar16);
    }
  }
  return;
}



/* Entry: 1029630a0; end: 10296323b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029630a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar7,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ecf630;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112ecf630);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61170();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(uVar4);
    }
    uVar8 = *(undefined8 *)(param_1 + _DAT_112ecf638);
    uVar4 = uVar8;
    func_0x000107c614f0(uVar8);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ecf650);
    func_0x000107c615f0(uVar8);
    func_0x000107c4d060(uVar3);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112ecf668);
    func_0x000103c011c4(uVar5);
    uVar6 = 0;
    func_0x0001041bb580(0);
    func_0x000107c610f8();
    func_0x0001041bb40c(uVar5,puVar7,uVar6);
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    func_0x00010418bb88(param_2,uVar3,uVar5,param_1,uVar4);
    func_0x000107c615e8(uVar8);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c42c1c(*(undefined8 *)(param_1 + lVar1));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10296323c; end: 10296329b; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin init] */

void FUN_10296323c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProfileActionPlugins.AdCTAProfileActionPlugin",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102963268);
  (*pcVar1)();
}



/* Entry: 10296329c; end: 102963353; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029632b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029632e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029632ec) */
/* WARNING: Removing unreachable block (ram,0x0001029632bc) */
/* WARNING: Removing unreachable block (ram,0x00010296332c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296329c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf628));
  return;
}



/* Entry: 102963354; end: 102963373;  */

void FUN_102963354(void)

{
  func_0x000107c61168(&PTR_PTR_112873348);
  return;
}



/* Entry: 102963374; end: 102963377; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin adAttachmentHandlerViewWillFullyAppear:] */

void FUN_102963374(void)

{
  return;
}



/* Entry: 102963378; end: 10296337b; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin adAttachmentHandlerViewDidFullyAppear:] */

void FUN_102963378(void)

{
  return;
}



/* Entry: 10296337c; end: 10296337f; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_10296337c(void)

{
  return;
}



/* Entry: 102963380; end: 102963383; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_102963380(void)

{
  return;
}



/* Entry: 102963384; end: 102963387; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin adAttachmentHandlerDidPresent:] */

void FUN_102963384(void)

{
  return;
}



/* Entry: 102963388; end: 10296340b; -[_TtC22AdProfileActionPlugins24AdCTAProfileActionPlugin adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x0001029633c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029633e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029633c8) */
/* WARNING: Removing unreachable block (ram,0x0001029633e4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963388(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10296340c; end: 10296342f;  */

void FUN_10296340c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102962c0c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102963430; end: 1029634a7;  */

void FUN_102963430(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029634a8; end: 1029634cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029634a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar9 = auStack_78;
  func_0x000107c61428(lVar2 + 0x10,puVar9,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ecf630;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ecf630);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000107c61174(uVar4);
      uVar5 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar5);
    }
    uVar10 = *(undefined8 *)(lVar2 + _DAT_112ecf638);
    uVar5 = uVar10;
    func_0x000107c614f0(uVar10);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112ecf650);
    func_0x000107c615f0(uVar10);
    func_0x000107c4d060(uVar4);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112ecf668);
    func_0x000103c011c4(uVar6);
    uVar7 = 0;
    func_0x0001041bb580(0);
    func_0x000107c610f8();
    func_0x0001041bb40c(uVar6,puVar9,uVar7);
    lVar3 = lVar2;
    func_0x000107c61174(lVar2);
    func_0x00010418bb88(uVar8,uVar4,uVar6,lVar2,uVar5);
    func_0x000107c615e8(uVar10);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + lVar1));
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029634cc; end: 1029634db; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029634cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ecf6f0);
}



/* Entry: 1029634dc; end: 1029634eb; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin setPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029634dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112ecf6f0) = param_3;
  return;
}



/* Entry: 1029634ec; end: 1029634fb; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin prominentActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029634ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf6f8));
  return;
}


