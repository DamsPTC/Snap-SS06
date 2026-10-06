/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030c8f28; end: 1030c900f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030c8f28(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3a1c8);
  *(undefined **)(unaff_x20 + _DAT_112f3a1c8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3a1d0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f3a1d0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110609650;
  func_0x000107c613fc(&UNK_110609650,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1030c9014,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1030c9010; end: 1030c901b;  */

void FUN_1030c9010(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030c901c; end: 1030c907b; -[_TtC42AddFriendsCameraRollPickerScopeGraphBridge57SCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint init] */

void FUN_1030c901c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsCameraRollPickerScopeGraphBridge.SCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c9048);
  (*pcVar1)();
}



/* Entry: 1030c907c; end: 1030c90b3; -[_TtC42AddFriendsCameraRollPickerScopeGraphBridge57SCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c907c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f3a1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3a1c8));
  return;
}



/* Entry: 1030c90b4; end: 1030c90b7;  */

void FUN_1030c90b4(void)

{
  return;
}



/* Entry: 1030c90b8; end: 1030c90d7;  */

void FUN_1030c90b8(void)

{
  FUN_1030c8f28();
  return;
}



/* Entry: 1030c90d8; end: 1030c90f7;  */

void FUN_1030c90d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b48e0);
  return;
}



/* Entry: 1030c90f8; end: 1030c91c7;  */

undefined8 FUN_1030c90f8(void)

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
  
  func_0x000107c61428(0x112f3a200,&uStack_40,0x20,0);
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
    FUN_1030c91c8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1030c91c8; end: 1030c91e7;  */

void FUN_1030c91c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b49a8);
  return;
}



/* Entry: 1030c91e8; end: 1030c9253;  */

void FUN_1030c91e8(void)

{
  func_0x0001000285a8(0x112f3a208,&UNK_10db859c8);
  func_0x0001000823a8(0x1030c9228,0);
  return;
}



/* Entry: 1030c9254; end: 1030c928f; -[_TtC42AddFriendsCameraRollPickerScopeGraphBridge50AddFriendsCameraRollPickerScopeGraphBridgeServices init] */

void FUN_1030c9254(undefined8 param_1)

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



/* Entry: 1030c9290; end: 1030c92c3;  */

void FUN_1030c9290(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030c92c4; end: 1030c92cb;  */

undefined8 FUN_1030c92c4(void)

{
  return 0x1b;
}



/* Entry: 1030c92cc; end: 1030c9443;  */

void FUN_1030c92cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110609698;
  func_0x000107c613fc(&UNK_110609698,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030c9444,puVar1);
  return;
}



/* Entry: 1030c9444; end: 1030c944b;  */

void FUN_1030c9444(undefined8 *param_1)

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
  func_0x000107c61428(0x112f3a200,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f3a200,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110609730;
  func_0x000107c613fc(&UNK_110609730,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1030c94f8;
  func_0x00010058fa64(0x1030c94f8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030c944c; end: 1030c94a7;  */

void FUN_1030c944c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f3a200,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f3a200,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1030c94a8; end: 1030c94ff;  */

undefined ** FUN_1030c94a8(void)

{
  return &PTR_DAT_112f3a8a8;
}



/* Entry: 1030c9500; end: 1030c9547; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c9500(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a260;
  func_0x000107c61428(param_1 + _DAT_112f3a260,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030c9548; end: 1030c959f; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c9548(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a260;
  func_0x000107c61428(param_1 + _DAT_112f3a260,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030c95a0; end: 1030c95e7; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint addFriendsCameraRollPickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c95a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a268;
  func_0x000107c61428(param_1 + _DAT_112f3a268,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030c95e8; end: 1030c964b; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint setAddFriendsCameraRollPickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c95e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a268;
  func_0x000107c61428(param_1 + _DAT_112f3a268,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030c964c; end: 1030c977f;  */

/* WARNING: Possible PIC construction at 0x0001030c9704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c9720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c973c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c9708) */
/* WARNING: Removing unreachable block (ram,0x0001030c9724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c964c(void)

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
  func_0x000107c3d6d0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1030c8e80();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1030c90f8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c9780);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f3a190) = lVar5;
    *(long *)(lVar4 + _DAT_112f3a198) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1030c9780; end: 1030c97a7; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1030c9780(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030c964c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030c97a8; end: 1030c97eb; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_1030c97a8(undefined8 param_1)

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



/* Entry: 1030c97ec; end: 1030c9983;  */

void FUN_1030c97ec(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc7) || (param_3 != -0x7ffffffef0ee1240)) {
      uVar2 = 0xd000000000000039;
      func_0x000107c605b8(0xd000000000000039,0x800000010f11edc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AddFriendsCameraRollPickerScopeGraphBridge/SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x6c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c9984);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52484();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030c9984; end: 1030c9a2f; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1030c9984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030c97ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030c9a30; end: 1030c9a9b; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c9a30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3a260,0);
  *(undefined8 *)(param_1 + _DAT_112f3a268) = 0;
  *(undefined8 *)(param_1 + _DAT_112f3a270) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030c9a9c; end: 1030c9acf;  */

void FUN_1030c9a9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030c9ad0; end: 1030c9b17; -[SCAddFriendsCameraRollPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030c9afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c9b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c9ad0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3a260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3a268));
  return;
}



/* Entry: 1030c9b18; end: 1030c9b37;  */

void FUN_1030c9b18(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4a58);
  return;
}



/* Entry: 1030c9b38; end: 1030c9b7f; -[SCSCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c9b38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a2a0;
  func_0x000107c61428(param_1 + _DAT_112f3a2a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030c9b80; end: 1030c9bd7; -[SCSCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c9b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a2a0;
  func_0x000107c61428(param_1 + _DAT_112f3a2a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030c9bd8; end: 1030c9caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c9bd8(undefined8 param_1,long param_2)

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
    FUN_1030c90d8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f3a1c8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c9cb0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f3a1d0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f3a2a8);
    *(long **)(unaff_x20 + _DAT_112f3a2a8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1030c9cb0; end: 1030c9cd7; -[SCSCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint begin] */

void FUN_1030c9cb0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030c9bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030c9cd8; end: 1030c9e4f;  */

/* WARNING: Possible PIC construction at 0x0001030c9d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c9dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c9d44) */
/* WARNING: Removing unreachable block (ram,0x0001030c9ddc) */
/* WARNING: Removing unreachable block (ram,0x0001030c9df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c9cd8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f3a2a8);
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



/* Entry: 1030c9e50; end: 1030c9e57;  */

void FUN_1030c9e50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030c9e58; end: 1030c9e8b; -[SCSCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint end] */

void FUN_1030c9e58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030c9cd8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030c9e8c; end: 1030c9fab;  */

void FUN_1030c9e8c(long param_1,long param_2,long param_3)

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
                        "AddFriendsCameraRollPickerScopeGraphBridge/SCSCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint.swift"
                        ,0x6c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c9fac);
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



/* Entry: 1030c9fac; end: 1030ca057; -[SCSCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1030c9fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030c9e8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030ca058; end: 1030ca0b7; -[SCSCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ca058(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3a2a0,0);
  *(undefined8 *)(param_1 + _DAT_112f3a2a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030ca0b8; end: 1030ca0eb;  */

void FUN_1030ca0b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030ca0ec; end: 1030ca123; -[SCSCAddFriendsCameraRollPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ca0ec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3a2a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3a2a8));
  return;
}



/* Entry: 1030ca124; end: 1030ca143;  */

void FUN_1030ca124(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4b20);
  return;
}



/* Entry: 1030ca144; end: 1030ca18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ca144(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3a2e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030ca190; end: 1030ca267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030ca190(void)

{
  undefined *puVar1;
  undefined8 in_x4;
  long in_x5;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  if (in_x5 == 0) {
    in_x4 = 0;
  }
  else {
    func_0x000107c5fadc(in_x4,in_x5);
  }
  puVar1 = PTR_PTR_1126ab868;
  func_0x000107c610f8();
  func_0x000107c48f80();
  func_0x000107c61170(in_x4);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c615e8(apuStack_68[0]);
  return puVar1;
}



/* Entry: 1030ca268; end: 1030ca35f; -[_TtC16SCScanScopeProxy19SCScanScopeServices buildWithUIContainer:queryObservable:bridgingConfiguration:source:sourceId:delegate:] */

void FUN_1030ca268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1030ca190(param_3,param_4,param_5,param_6,param_7,param_2,param_8);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030ca360; end: 1030ca38f;  */

void FUN_1030ca360(void)

{
  func_0x000100371b5c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030ca390; end: 1030ca3bf; -[_TtC16SCScanScopeProxy19SCScanScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ca390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3a2e0));
  return;
}



/* Entry: 1030ca3c0; end: 1030ca42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ca3c0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1030ca7b4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f3a330) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1030ca42c; end: 1030ca497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ca42c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3a330) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030ca498; end: 1030ca4f7; -[_TtC56AddFriendsRecentlyActionPageScopedFactoryServiceProvider44SCAddFriendsRecentlyActionPageScopedServices init] */

void FUN_1030ca498(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsRecentlyActionPageScopedFactoryServiceProvider.SCAddFriendsRecentlyActionPageScopedServices"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ca4c4);
  (*pcVar1)();
}



/* Entry: 1030ca4f8; end: 1030ca507; -[_TtC56AddFriendsRecentlyActionPageScopedFactoryServiceProvider44SCAddFriendsRecentlyActionPageScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ca4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3a330));
  return;
}



/* Entry: 1030ca508; end: 1030ca573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ca508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110609a20;
  func_0x000107c613fc(&UNK_110609a20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1030ca890,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030ca574; end: 1030ca60f;  */

void FUN_1030ca574(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110609930;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110609930;
  return;
}



/* Entry: 1030ca610; end: 1030ca647;  */

void FUN_1030ca610(long *param_1)

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



/* Entry: 1030ca648; end: 1030ca64f;  */

undefined8 FUN_1030ca648(void)

{
  return 0x1b;
}



/* Entry: 1030ca650; end: 1030ca783;  */

void FUN_1030ca650(undefined8 *param_1)

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
  puVar1 = &UNK_110609a48;
  func_0x000107c613fc(&UNK_110609a48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030ca868;
  func_0x00010058fa64(FUN_1030ca868,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030ca784; end: 1030ca7b3;  */

undefined ** FUN_1030ca784(void)

{
  return &PTR_DAT_112f3a6c8;
}



/* Entry: 1030ca7b4; end: 1030ca7d3;  */

void FUN_1030ca7b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4ca0);
  return;
}



/* Entry: 1030ca7d4; end: 1030ca823;  */

undefined1  [16] FUN_1030ca7d4(void)

{
  return ZEXT816(0x110609980);
}



/* Entry: 1030ca824; end: 1030ca867;  */

void FUN_1030ca824(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f3a398 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126acc00;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f3a398 = puVar1;
  return;
}



/* Entry: 1030ca868; end: 1030ca88f;  */

void FUN_1030ca868(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1030ca890; end: 1030ca893;  */

void FUN_1030ca890(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030ca894; end: 1030caa13;  */

/* WARNING: Possible PIC construction at 0x0001030ca98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ca99c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ca9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ca9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ca9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ca9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ca9ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ca9e0) */
/* WARNING: Removing unreachable block (ram,0x0001030ca9d0) */
/* WARNING: Removing unreachable block (ram,0x0001030ca9c0) */
/* WARNING: Removing unreachable block (ram,0x0001030ca9b0) */
/* WARNING: Removing unreachable block (ram,0x0001030ca9a0) */
/* WARNING: Removing unreachable block (ram,0x0001030ca990) */
/* WARNING: Removing unreachable block (ram,0x0001030ca9f0) */

void FUN_1030ca894(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110609ad0;
  func_0x000107c613fc(&UNK_110609ad0,0x80,7);
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
  uVar2 = 0x112f3a3a8;
  func_0x0001000285a8(0x112f3a3a8,&UNK_10db85f60);
  func_0x000107c613fc();
  uVar3 = 0x1030cb074;
  func_0x0001000841fc(0x1030cb074,puVar1,uVar2);
  func_0x000100084214(&UNK_10db85f20,0x3a,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1030caa14; end: 1030caa4f;  */

void FUN_1030caa14(void)

{
  long unaff_x20;
  
  FUN_1030ca894(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1030caa50; end: 1030caa5f;  */

undefined1  [16] FUN_1030caa50(void)

{
  return ZEXT816(0x110609ab0);
}



/* Entry: 1030caa60; end: 1030cafe7;  */

void FUN_1030caa60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_70 [2];
  
  uVar16 = *param_2;
  func_0x0001000285a8(0x112f3a3b0,&UNK_10db85f68);
  puVar1 = auStack_70;
  auStack_70[0] = uVar16;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001030cd698();
  pcVar3 = "SCChatCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatCameraScopeExposerSubjectServiceProvider",0x2e,2);
  func_0x0001030cd718();
  pcVar4 = "SCChatScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatScopeExposerSubjectServiceProvider",0x28,2);
  FUN_1030cd764();
  pcVar5 = "SCFriendActionSheetScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendActionSheetScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1030cd7b0();
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  puVar6 = puVar2;
  FUN_1030cd6d8();
  func_0x000100082720("SCChatCameraScopeExposerObservableServiceProvider",0x31,2);
  pcVar7 = pcVar3;
  FUN_1030cd758();
  func_0x000100082720("SCChatScopeExposerObservableServiceProvider",0x2b,2);
  pcVar8 = pcVar4;
  FUN_1030cd7a4();
  func_0x000100082720("SCFriendActionSheetScopeExposerObservableServiceProvider",0x38,2);
  pcVar9 = pcVar5;
  FUN_1030cd83c();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_1030ca610;
  func_0x0001000823a8(FUN_1030ca610,0);
  func_0x000100082720("SCAddFriendsRecentlyActionPageScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  puVar11 = puVar2;
  FUN_1030cd3e8(puVar2,pcVar3,pcVar4,pcVar5);
  func_0x000100082720("AddFriendsRecentlyActionPageScopeGraphBridgeServicesServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f3a3b8,&UNK_10db85f80);
  puVar12 = &UNK_110609af8;
  func_0x000107c613fc(&UNK_110609af8,0xa8,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar1;
  *(undefined8 *)(puVar12 + 0x18) = param_3;
  *(undefined8 *)(puVar12 + 0x20) = param_4;
  *(undefined8 *)(puVar12 + 0x28) = param_5;
  *(undefined8 *)(puVar12 + 0x30) = param_6;
  *(undefined8 *)(puVar12 + 0x38) = param_7;
  *(undefined8 *)(puVar12 + 0x40) = param_8;
  *(undefined8 *)(puVar12 + 0x48) = param_9;
  *(undefined8 *)(puVar12 + 0x50) = param_10;
  *(undefined8 *)(puVar12 + 0x58) = param_11;
  *(undefined8 *)(puVar12 + 0x60) = param_12;
  *(undefined8 *)(puVar12 + 0x68) = param_13;
  *(undefined8 *)(puVar12 + 0x70) = param_14;
  *(undefined8 *)(puVar12 + 0x78) = param_15;
  *(undefined8 *)(puVar12 + 0x80) = param_16;
  *(char **)(puVar12 + 0x88) = pcVar9;
  *(undefined8 **)(puVar12 + 0x90) = puVar6;
  *(char **)(puVar12 + 0x98) = pcVar7;
  *(char **)(puVar12 + 0xa0) = pcVar8;
  func_0x000107c6157c();
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
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar8);
  uVar16 = 0x1030cb0bc;
  func_0x0001000823a8(0x1030cb0bc,puVar12);
  func_0x000100082720("SCAddFriendsRecentlyActionPageEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f3a3c0,&UNK_10db85f70);
  puVar12 = &UNK_110609b20;
  func_0x000107c613fc(&UNK_110609b20,0x30,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar1;
  *(undefined8 **)(puVar12 + 0x18) = puVar11;
  *(undefined8 *)(puVar12 + 0x20) = uVar16;
  *(code **)(puVar12 + 0x28) = pcVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(pcVar10);
  pcVar13 = FUN_1030cb108;
  func_0x0001000823a8(FUN_1030cb108,puVar12);
  func_0x000100082720("SCAddFriendsRecentlyActionPageScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112f3a338,&UNK_10db85ca0);
  func_0x000107c6157c(pcVar13);
  uVar14 = 0x1030cb114;
  func_0x0001000823a8(0x1030cb114,pcVar13);
  func_0x000100082720("SCAddFriendsRecentlyActionPageScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f3a328,&UNK_10db85c90);
  func_0x000107c6157c(uVar14);
  uVar15 = 0x1030cb11c;
  func_0x0001000823a8(0x1030cb11c,uVar14);
  func_0x000100082720("SCAddFriendsRecentlyActionPageScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar12 = &UNK_110609b48;
  func_0x000107c613fc(&UNK_110609b48,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar15;
  *(code **)(puVar12 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar15 = 0x1030cb124;
  func_0x0001000823a8(0x1030cb124,puVar12);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(uVar14);
  func_0x000100082720("SCAddFriendsRecentlyActionPageScopeEntryPointProvider",0x35,2);
  *param_1 = uVar15;
  return;
}



/* Entry: 1030cafe8; end: 1030cb107;  */

void FUN_1030cafe8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030cb108; end: 1030cb12b;  */

void FUN_1030cb108(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030cca94(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCAddFriendsRecentlyActionPageScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030cb12c; end: 1030cc80b;  */

void FUN_1030cb12c(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  FUN_1030cc9e4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  *(undefined8 *)(param_2 + 0x70) = uStack_b0;
  *(undefined8 *)(param_2 + 0x78) = uStack_b8;
  *(undefined8 *)(param_2 + 0x80) = uStack_c0;
  *(undefined8 *)(param_2 + 0x88) = uStack_c8;
  *(undefined8 *)(param_2 + 0x90) = uStack_d0;
  *(undefined8 *)(param_2 + 0x98) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e0;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174(uStack_c8);
  uVar12 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174(uStack_e0);
  uVar17 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  func_0x0001003b3b80();
  puVar15 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x18) = puVar15;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar17 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x20) = puVar15;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar17 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x28) = puVar15;
  func_0x0001000285a8(0x112e4cce0,&UNK_10da46da0);
  func_0x000107c610f8();
  uVar17 = uStack_100;
  func_0x000107c6157c(uStack_100);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x30) = puVar15;
  puVar15 = PTR_PTR_1126acc08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar15;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f11f180);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effecb0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2e280);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0702c0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0x53656761726f7473;
  func_0x000107c5fadc(0x53656761726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef226b0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar19);
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar19);
  uVar17 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1a6f0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar19);
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef35990);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c3e740(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar1);
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
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61574(uStack_e8);
  func_0x000107c61574(uStack_f0);
  func_0x000107c61574(uStack_f8);
  func_0x000107c61574(uStack_100);
  *param_1 = param_2;
  return;
}



/* Entry: 1030cc80c; end: 1030cc8d7;  */

void FUN_1030cc80c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1030cc8d8; end: 1030cc8df;  */

undefined8 FUN_1030cc8d8(void)

{
  return 0x1b;
}



/* Entry: 1030cc8e0; end: 1030cc963;  */

void FUN_1030cc8e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1030cca24,param_2,FUN_1030cca28,param_2,FUN_1030cca50,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030cc964; end: 1030cc9b3;  */

undefined8 FUN_1030cc964(void)

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



/* Entry: 1030cc9b4; end: 1030cc9e3;  */

undefined ** FUN_1030cc9b4(void)

{
  return &PTR_DAT_112f3a6c8;
}



/* Entry: 1030cc9e4; end: 1030cca03;  */

void FUN_1030cc9e4(void)

{
  func_0x000107c61168(&PTR_PTR_112f3a430);
  return;
}



/* Entry: 1030cca04; end: 1030cca27;  */

undefined1  [16] FUN_1030cca04(void)

{
  return ZEXT816(0x110609ba0);
}



/* Entry: 1030cca28; end: 1030cca4f;  */

void FUN_1030cca28(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030cca50; end: 1030cca57;  */

undefined8 FUN_1030cca50(void)

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



/* Entry: 1030cca58; end: 1030cca93;  */

void FUN_1030cca58(undefined8 *param_1,undefined8 param_2)

{
  FUN_1030cca94();
  func_0x0001000a7f38("SCAddFriendsRecentlyActionPageScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1030cca94; end: 1030ccc7f;  */

void FUN_1030cca94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11060a020;
  ppuVar4 = &PTR_DAT_112f3a6c8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110609bf0;
  func_0x000107c613fc(&UNK_110609bf0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f3a520;
  func_0x0001000285a8(0x112f3a520,&UNK_10db86168);
  func_0x0001000a6ee8(&UNK_110609ef8,
                      "AddFriendsRecentlyActionPageScopeGraphBridgeScopeInitializationPluginKey",
                      0x48,2,FUN_1030ccc80,puVar2,uVar3,&UNK_110609ef8,&PTR_DAT_112f3a5d0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110609ba0,
                      "SCAddFriendsRecentlyActionPageEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_1030ccd34,param_3,uVar3,&UNK_110609ba0,&PTR_DAT_112f3a3c8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110609c18;
  func_0x000107c613fc(&UNK_110609c18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106099c0,
                      "SCAddFriendsRecentlyActionPageScopedServicesScopeInitializationPluginKey",
                      0x48,2,FUN_1030ccde4,puVar2,uVar3,&UNK_1106099c0,&PTR_DAT_112f3a340);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f3a528;
  func_0x0001000285a8(0x112f3a528,&UNK_10db86170);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1030ccc80; end: 1030cccbf;  */

void FUN_1030ccc80(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030cd8a8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AddFriendsRecentlyActionPageScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030cccc0; end: 1030ccd33;  */

void FUN_1030cccc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1030cce20;
  func_0x0001000823a8(0x1030cce20,param_3);
  func_0x000100082720("SCAddFriendsRecentlyActionPageEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030ccd34; end: 1030ccd3b;  */

void FUN_1030ccd34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1030cce20;
  func_0x0001000823a8();
  func_0x000100082720("SCAddFriendsRecentlyActionPageEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030ccd3c; end: 1030ccde3;  */

void FUN_1030ccd3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110609c40;
  func_0x000107c613fc(&UNK_110609c40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1030cce18;
  func_0x0001000823a8(FUN_1030cce18,puVar1);
  func_0x000100082720("SCAddFriendsRecentlyActionPageScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1030ccde4; end: 1030ccdeb;  */

void FUN_1030ccde4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110609c40;
  func_0x000107c613fc(&UNK_110609c40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1030cce18;
  func_0x0001000823a8(FUN_1030cce18,puVar3);
  func_0x000100082720("SCAddFriendsRecentlyActionPageScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1030ccdec; end: 1030cce17;  */

void FUN_1030ccdec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030cce18; end: 1030cce27;  */

void FUN_1030cce18(undefined8 *param_1)

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
  puVar1 = &UNK_110609a48;
  func_0x000107c613fc(&UNK_110609a48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030ca868;
  func_0x00010058fa64(FUN_1030ca868,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030cce28; end: 1030ccfbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1030cce28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  FUN_1030cd2f8();
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
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112f3a530) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f3a538) = param_6;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030ccfc0);
  (*pcVar2)();
}



/* Entry: 1030ccfc0; end: 1030cd01f; -[_TtC44AddFriendsRecentlyActionPageScopeGraphBridge59AddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030ccfc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsRecentlyActionPageScopeGraphBridge.AddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ccfec);
  (*pcVar1)();
}



/* Entry: 1030cd020; end: 1030cd057; -[_TtC44AddFriendsRecentlyActionPageScopeGraphBridge59AddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030cd03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030cd040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cd020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3a530));
  return;
}



/* Entry: 1030cd058; end: 1030cd07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cd058(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f3a538),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f3a530));
  return;
}



/* Entry: 1030cd080; end: 1030cd09f;  */

void FUN_1030cd080(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4d60);
  return;
}



/* Entry: 1030cd0a0; end: 1030cd127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030cd0a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3a568) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f3a570);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030cd128);
  (*pcVar2)();
}



/* Entry: 1030cd128; end: 1030cd20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030cd128(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3a568);
  *(undefined **)(unaff_x20 + _DAT_112f3a568) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3a570);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f3a570))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110609d30;
  func_0x000107c613fc(&UNK_110609d30,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1030cd214,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1030cd210; end: 1030cd21b;  */

void FUN_1030cd210(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030cd21c; end: 1030cd27b; -[_TtC44AddFriendsRecentlyActionPageScopeGraphBridge59SCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint init] */

void FUN_1030cd21c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsRecentlyActionPageScopeGraphBridge.SCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030cd248);
  (*pcVar1)();
}



/* Entry: 1030cd27c; end: 1030cd2b3; -[_TtC44AddFriendsRecentlyActionPageScopeGraphBridge59SCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cd27c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f3a570));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3a568));
  return;
}



/* Entry: 1030cd2b4; end: 1030cd2b7;  */

void FUN_1030cd2b4(void)

{
  return;
}



/* Entry: 1030cd2b8; end: 1030cd2d7;  */

void FUN_1030cd2b8(void)

{
  FUN_1030cd128();
  return;
}


