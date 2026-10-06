/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027b4a60; end: 1027b4a83;  */

void FUN_1027b4a60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11054d610;
  func_0x0001000285a8(0x112ebf3f0,&UNK_10dadc468);
  func_0x000107c613fc(&UNK_11054d610,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027b4b08,puVar1);
  return;
}



/* Entry: 1027b4a84; end: 1027b4b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b4a84(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1027b4a40();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebf3f8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ebf400) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027b4b08; end: 1027b4b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b4b08(undefined8 *param_1)

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
  FUN_1027b4a40();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ebf3f8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ebf400) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1027b4b10; end: 1027b4b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b4b10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebf3f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebf400) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b4b74; end: 1027b4bd3; -[_TtC37CancelMenuActionSheetScopeGraphBridge45CancelMenuActionSheetScopeGraphBridgeServices init] */

void FUN_1027b4b74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CancelMenuActionSheetScopeGraphBridge.CancelMenuActionSheetScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b4ba0);
  (*pcVar1)();
}



/* Entry: 1027b4bd4; end: 1027b4c4b; -[_TtC37CancelMenuActionSheetScopeGraphBridge45CancelMenuActionSheetScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027b4bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b4bf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b4bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebf3f8));
  return;
}



/* Entry: 1027b4c4c; end: 1027b4c57;  */

void FUN_1027b4c4c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027b5048,param_1);
  return;
}



/* Entry: 1027b4c58; end: 1027b4ce3;  */

void FUN_1027b4c58(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027b5050,0);
  return;
}



/* Entry: 1027b4ce4; end: 1027b4cef;  */

void FUN_1027b4ce4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027b4d48,param_1);
  return;
}



/* Entry: 1027b4cf0; end: 1027b4d47;  */

void FUN_1027b4cf0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1027b4d48; end: 1027b4d7b;  */

void FUN_1027b4d48(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1027b4d7c; end: 1027b4da7;  */

undefined8 FUN_1027b4d7c(void)

{
  return 0x1b;
}



/* Entry: 1027b4da8; end: 1027b4e27;  */

void FUN_1027b4da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1027b4e28; end: 1027b4f1f;  */

void FUN_1027b4e28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ebf3e8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ebf3e8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11054d750;
  func_0x000107c613fc(&UNK_11054d750,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1027b5040;
  func_0x00010058fa64(0x1027b5040,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b4f20; end: 1027b4f4b;  */

void FUN_1027b4f20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027b4f4c; end: 1027b4f53;  */

void FUN_1027b4f4c(undefined8 *param_1)

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
  func_0x000107c61428(0x112ebf3e8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ebf3e8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11054d750;
  func_0x000107c613fc(&UNK_11054d750,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1027b5040;
  func_0x00010058fa64(0x1027b5040,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b4f54; end: 1027b4faf;  */

void FUN_1027b4f54(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ebf3e8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ebf3e8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1027b4fb0; end: 1027b5053;  */

undefined ** FUN_1027b4fb0(void)

{
  return &PTR_DAT_113066898;
}



/* Entry: 1027b5054; end: 1027b509b; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5054(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf458;
  func_0x000107c61428(param_1 + _DAT_112ebf458,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027b509c; end: 1027b50f3; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b509c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf458;
  func_0x000107c61428(param_1 + _DAT_112ebf458,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027b50f4; end: 1027b513b; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint sCFriendActionSheetScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b50f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf460;
  func_0x000107c61428(param_1 + _DAT_112ebf460,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027b513c; end: 1027b5147; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint setSCFriendActionSheetScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b513c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf460;
  func_0x000107c61428(param_1 + _DAT_112ebf460,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027b5148; end: 1027b518f; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint sCGroupActionSheetScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5148(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf468;
  func_0x000107c61428(param_1 + _DAT_112ebf468,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027b5190; end: 1027b519b; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint setSCGroupActionSheetScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5190(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf468;
  func_0x000107c61428(param_1 + _DAT_112ebf468,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027b519c; end: 1027b51e3; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint cancelMenuActionSheetScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b519c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf470;
  func_0x000107c61428(param_1 + _DAT_112ebf470,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027b51e4; end: 1027b51ef; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint setCancelMenuActionSheetScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b51e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf470;
  func_0x000107c61428(param_1 + _DAT_112ebf470,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027b51f0; end: 1027b524f;  */

void FUN_1027b51f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1027b5250; end: 1027b5487;  */

/* WARNING: Possible PIC construction at 0x0001027b53bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b53cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b53e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b53f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b5414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b545c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b53fc) */
/* WARNING: Removing unreachable block (ram,0x0001027b53ec) */
/* WARNING: Removing unreachable block (ram,0x0001027b53d0) */
/* WARNING: Removing unreachable block (ram,0x0001027b53c0) */
/* WARNING: Removing unreachable block (ram,0x0001027b5460) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5250(void)

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
  func_0x000107c50d80();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50de4();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c3f4b8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_1027b46f8();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_1027b4970();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1027b5488);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112ebf378) = lVar5;
        *(long *)(lVar4 + _DAT_112ebf380) = unaff_x20;
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



/* Entry: 1027b5488; end: 1027b54af; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1027b5488(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027b5250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027b54b0; end: 1027b54f3; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint end] */

void FUN_1027b54b0(undefined8 param_1)

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



/* Entry: 1027b54f4; end: 1027b5763;  */

void FUN_1027b54f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0fad680)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f052980,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0fa2330)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001e,0x800000010f05dcd0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f430a0)) &&
               (func_0x000107c605b8(0xd000000000000034,0x800000010f0bcf60,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "CancelMenuActionSheetScopeGraphBridge/SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x62,2,0x39,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b5764);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5316c();
            goto LAB_1027b5580;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5838c();
        goto LAB_1027b5580;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58328();
  }
LAB_1027b5580:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027b5764; end: 1027b580f; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1027b5764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027b54f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027b5810; end: 1027b5893; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5810(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ebf458,0);
  *(undefined8 *)(param_1 + _DAT_112ebf460) = 0;
  *(undefined8 *)(param_1 + _DAT_112ebf468) = 0;
  *(undefined8 *)(param_1 + _DAT_112ebf470) = 0;
  *(undefined8 *)(param_1 + _DAT_112ebf478) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b5894; end: 1027b58c7;  */

void FUN_1027b5894(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027b58c8; end: 1027b592f; -[SCCancelMenuActionSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027b58f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b5914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b58f8) */
/* WARNING: Removing unreachable block (ram,0x0001027b5918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b58c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ebf458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf460));
  return;
}



/* Entry: 1027b5930; end: 1027b594f;  */

void FUN_1027b5930(void)

{
  func_0x000107c61168(&PTR_PTR_112862230);
  return;
}



/* Entry: 1027b5950; end: 1027b5997; -[SCSCCancelMenuActionSheetScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5950(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf4a8;
  func_0x000107c61428(param_1 + _DAT_112ebf4a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027b5998; end: 1027b59ef; -[SCSCCancelMenuActionSheetScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf4a8;
  func_0x000107c61428(param_1 + _DAT_112ebf4a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027b59f0; end: 1027b5ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b59f0(undefined8 param_1,long param_2)

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
    FUN_1027b4950();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ebf3b0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027b5ac8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ebf3b8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ebf4b0);
    *(long **)(unaff_x20 + _DAT_112ebf4b0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1027b5ac8; end: 1027b5aef; -[SCSCCancelMenuActionSheetScopedServicesSaberEntryPoint begin] */

void FUN_1027b5ac8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027b59f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027b5af0; end: 1027b5c67;  */

/* WARNING: Possible PIC construction at 0x0001027b5b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b5bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b5b5c) */
/* WARNING: Removing unreachable block (ram,0x0001027b5bf4) */
/* WARNING: Removing unreachable block (ram,0x0001027b5c0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5af0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebf4b0);
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



/* Entry: 1027b5c68; end: 1027b5c6f;  */

void FUN_1027b5c68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027b5c70; end: 1027b5ca3; -[SCSCCancelMenuActionSheetScopedServicesSaberEntryPoint end] */

void FUN_1027b5c70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027b5af0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027b5ca4; end: 1027b5dc3;  */

void FUN_1027b5ca4(long param_1,long param_2,long param_3)

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
                        "CancelMenuActionSheetScopeGraphBridge/SCSCCancelMenuActionSheetScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b5dc4);
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



/* Entry: 1027b5dc4; end: 1027b5e6f; -[SCSCCancelMenuActionSheetScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1027b5dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027b5ca4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027b5e70; end: 1027b5ecf; -[SCSCCancelMenuActionSheetScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5e70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ebf4a8,0);
  *(undefined8 *)(param_1 + _DAT_112ebf4b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b5ed0; end: 1027b5f03;  */

void FUN_1027b5ed0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027b5f04; end: 1027b5f3b; -[SCSCCancelMenuActionSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5f04(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ebf4a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf4b0));
  return;
}



/* Entry: 1027b5f3c; end: 1027b5f5b;  */

void FUN_1027b5f3c(void)

{
  func_0x000107c61168(&PTR_PTR_112862308);
  return;
}



/* Entry: 1027b5f5c; end: 1027b5fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5f5c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1027b6350();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ebf4e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1027b5fc8; end: 1027b6033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b5fc8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebf4e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b6034; end: 1027b6093; -[_TtC48ChatCustomizationHubScopedFactoryServiceProvider34ChatCustomizationHubScopedServices init] */

void FUN_1027b6034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubScopedFactoryServiceProvider.ChatCustomizationHubScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b6060);
  (*pcVar1)();
}



/* Entry: 1027b6094; end: 1027b60a3; -[_TtC48ChatCustomizationHubScopedFactoryServiceProvider34ChatCustomizationHubScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b6094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebf4e8));
  return;
}



/* Entry: 1027b60a4; end: 1027b610f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b60a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11054d968;
  func_0x000107c613fc(&UNK_11054d968,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1027b63e8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1027b6110; end: 1027b61ab;  */

void FUN_1027b6110(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11054d878;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11054d878;
  return;
}



/* Entry: 1027b61ac; end: 1027b61e3;  */

void FUN_1027b61ac(long *param_1)

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



/* Entry: 1027b61e4; end: 1027b61eb;  */

undefined8 FUN_1027b61e4(void)

{
  return 0x1b;
}



/* Entry: 1027b61ec; end: 1027b631f;  */

void FUN_1027b61ec(undefined8 *param_1)

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
  puVar1 = &UNK_11054d990;
  func_0x000107c613fc(&UNK_11054d990,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027b63c0;
  func_0x00010058fa64(FUN_1027b63c0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b6320; end: 1027b634f;  */

undefined ** FUN_1027b6320(void)

{
  return &PTR_DAT_113066580;
}



/* Entry: 1027b6350; end: 1027b636f;  */

void FUN_1027b6350(void)

{
  func_0x000107c61168(&PTR_PTR_1128623c8);
  return;
}



/* Entry: 1027b6370; end: 1027b63bf;  */

undefined1  [16] FUN_1027b6370(void)

{
  return ZEXT816(0x11054d8c8);
}



/* Entry: 1027b63c0; end: 1027b63e7;  */

void FUN_1027b63c0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1027b63e8; end: 1027b63eb;  */

void FUN_1027b63e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1027b63ec; end: 1027b665b;  */

/* WARNING: Possible PIC construction at 0x0001027b656c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b657c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b658c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b659c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b65ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b65bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b65cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b65dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b65ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b65fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b660c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b661c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b662c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b6620) */
/* WARNING: Removing unreachable block (ram,0x0001027b6610) */
/* WARNING: Removing unreachable block (ram,0x0001027b6600) */
/* WARNING: Removing unreachable block (ram,0x0001027b65f0) */
/* WARNING: Removing unreachable block (ram,0x0001027b65e0) */
/* WARNING: Removing unreachable block (ram,0x0001027b65d0) */
/* WARNING: Removing unreachable block (ram,0x0001027b65c0) */
/* WARNING: Removing unreachable block (ram,0x0001027b65b0) */
/* WARNING: Removing unreachable block (ram,0x0001027b65a0) */
/* WARNING: Removing unreachable block (ram,0x0001027b6590) */
/* WARNING: Removing unreachable block (ram,0x0001027b6580) */
/* WARNING: Removing unreachable block (ram,0x0001027b6570) */
/* WARNING: Removing unreachable block (ram,0x0001027b6630) */

void FUN_1027b63ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11054da18;
  func_0x000107c613fc(&UNK_11054da18,0xe8,7);
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
  uVar2 = 0x112ebf558;
  func_0x0001000285a8(0x112ebf558,&UNK_10dadc9b8);
  func_0x000107c613fc();
  pcVar3 = FUN_1027b6e38;
  func_0x0001000841fc(FUN_1027b6e38,puVar1,uVar2);
  func_0x000100084214(&UNK_10dadc980,0x30,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027b665c; end: 1027b6677;  */

void FUN_1027b665c(void)

{
  long unaff_x20;
  
  FUN_1027b63ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1027b6678; end: 1027b6e37;  */

void FUN_1027b6678(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

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
  undefined *puVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_70 [2];
  
  uVar18 = *param_2;
  func_0x0001000285a8(0x112ebf560,&UNK_10dadc9c0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar18;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1027ba15c();
  pcVar3 = "PlusSubscribeScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_1027ba1a8();
  pcVar4 = "SCGenerativeContentReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCGenerativeContentReportScopeExposerSubjectServiceProvider",0x3b,2);
  FUN_1027ba1f4();
  pcVar5 = "SCSafetyReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSafetyReportScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1027ba240();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar6 = puVar2;
  FUN_1027ba19c();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  pcVar7 = pcVar3;
  FUN_1027ba1e8();
  func_0x000100082720("SCGenerativeContentReportScopeExposerObservableServiceProvider",0x3e,2);
  pcVar8 = pcVar4;
  FUN_1027ba234();
  func_0x000100082720("SCSafetyReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar9 = pcVar5;
  FUN_1027ba2cc();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_1027b61ac;
  func_0x0001000823a8(FUN_1027b61ac,0);
  func_0x000100082720("ChatCustomizationHubScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ebf568,&UNK_10dadc9d0);
  puVar11 = &UNK_11054da40;
  func_0x000107c613fc(&UNK_11054da40,0x70,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_3;
  *(undefined8 *)(puVar11 + 0x20) = param_4;
  *(undefined8 *)(puVar11 + 0x28) = param_5;
  *(undefined8 *)(puVar11 + 0x30) = param_6;
  *(undefined8 *)(puVar11 + 0x38) = param_7;
  *(undefined8 *)(puVar11 + 0x40) = param_8;
  *(undefined8 *)(puVar11 + 0x48) = param_9;
  *(undefined8 *)(puVar11 + 0x50) = param_10;
  *(char **)(puVar11 + 0x58) = pcVar9;
  *(undefined8 **)(puVar11 + 0x60) = puVar6;
  *(char **)(puVar11 + 0x68) = pcVar7;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar7);
  uVar18 = 0x1027b6ea4;
  func_0x0001000823a8(0x1027b6ea4,puVar11);
  func_0x000100082720("SCGenerativeChatWallpapersServiceProviderWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ebf570,&UNK_10dadc9d8);
  func_0x000107c6157c(uVar18);
  pcVar12 = FUN_1027b6ee0;
  func_0x0001000823a8(FUN_1027b6ee0,uVar18);
  func_0x000100082720("SCGenerativeChatWallpapersServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ebf578,&UNK_10dadc9e0);
  puVar11 = &UNK_11054da68;
  func_0x000107c613fc(&UNK_11054da68,0xe8,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_11;
  *(undefined8 *)(puVar11 + 0x20) = param_12;
  *(undefined8 *)(puVar11 + 0x28) = param_13;
  *(undefined8 *)(puVar11 + 0x30) = param_14;
  *(undefined8 *)(puVar11 + 0x38) = param_15;
  *(undefined8 *)(puVar11 + 0x40) = param_16;
  *(undefined8 *)(puVar11 + 0x48) = param_17;
  *(undefined8 *)(puVar11 + 0x50) = param_3;
  *(undefined8 *)(puVar11 + 0x58) = param_18;
  *(undefined8 *)(puVar11 + 0x60) = param_19;
  *(undefined8 *)(puVar11 + 0x68) = param_20;
  *(code **)(puVar11 + 0x70) = pcVar12;
  *(undefined8 *)(puVar11 + 0x78) = param_21;
  *(undefined8 *)(puVar11 + 0x80) = param_22;
  *(undefined8 *)(puVar11 + 0x88) = param_23;
  *(undefined8 *)(puVar11 + 0x90) = param_24;
  *(undefined8 *)(puVar11 + 0x98) = param_10;
  *(undefined8 *)(puVar11 + 0xa0) = param_9;
  *(undefined8 *)(puVar11 + 0xa8) = param_25;
  *(undefined8 *)(puVar11 + 0xb0) = param_26;
  *(undefined8 *)(puVar11 + 0xb8) = param_27;
  *(undefined8 *)(puVar11 + 0xc0) = param_28;
  *(undefined8 *)(puVar11 + 200) = param_29;
  *(undefined8 *)(puVar11 + 0xd0) = param_5;
  *(undefined8 **)(puVar11 + 0xd8) = puVar6;
  *(char **)(puVar11 + 0xe0) = pcVar8;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(pcVar8);
  pcVar13 = FUN_1027b6fdc;
  func_0x0001000823a8(FUN_1027b6fdc,puVar11);
  func_0x000100082720("ChatCustomizationHubEntryPointWrapperServiceProvider",0x34,2);
  puVar14 = puVar2;
  FUN_1027b9ca0(puVar2,pcVar12,pcVar3,pcVar4,pcVar5);
  func_0x000100082720("ChatCustomizationHubScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112ebf580,&UNK_10dadc9e8);
  puVar11 = &UNK_11054da90;
  func_0x000107c613fc(&UNK_11054da90,0x38,7);
  *(code **)(puVar11 + 0x10) = pcVar13;
  *(undefined8 **)(puVar11 + 0x18) = puVar1;
  *(undefined8 **)(puVar11 + 0x20) = puVar14;
  *(code **)(puVar11 + 0x28) = pcVar10;
  *(undefined8 *)(puVar11 + 0x30) = uVar18;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(pcVar10);
  pcVar15 = FUN_1027b7048;
  func_0x0001000823a8(FUN_1027b7048,puVar11);
  func_0x000100082720("ChatCustomizationHubScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112ebf4f0,&UNK_10dadc740);
  func_0x000107c6157c(pcVar15);
  uVar16 = 0x1027b7058;
  func_0x0001000823a8(0x1027b7058,pcVar15);
  func_0x000100082720("ChatCustomizationHubScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ebf4e0,&UNK_10dadc730);
  func_0x000107c6157c(uVar16);
  uVar17 = 0x1027b7060;
  func_0x0001000823a8(0x1027b7060,uVar16);
  func_0x000100082720("ChatCustomizationHubScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar11 = &UNK_11054dab8;
  func_0x000107c613fc(&UNK_11054dab8,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar17;
  *(code **)(puVar11 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar17 = 0x1027b7068;
  func_0x0001000823a8(0x1027b7068,puVar11);
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
  func_0x000107c61574(uVar18);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(uVar16);
  func_0x000100082720("ChatCustomizationHubScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar17;
  return;
}



/* Entry: 1027b6e38; end: 1027b6edf;  */

void FUN_1027b6e38(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1027b6678(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1027b6ee0; end: 1027b6ee7;  */

void FUN_1027b6ee0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b6ee8; end: 1027b6fdb;  */

void FUN_1027b6ee8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027b6fdc; end: 1027b6fe7;  */

void FUN_1027b6fdc(void)

{
  long unaff_x20;
  
  FUN_1027b7070(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1027b6fe8; end: 1027b7047;  */

void FUN_1027b6fe8(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
             *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1027b7048; end: 1027b706f;  */

void FUN_1027b7048(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar5 = &UNK_11074cba0;
  ppuVar8 = &PTR_DAT_113066580;
  uVar9 = uVar2;
  func_0x0001000a3aa4();
  func_0x000107c6157c(uVar1);
  uVar6 = 0x112ebf848;
  func_0x0001000285a8(0x112ebf848,&UNK_10dadcde8);
  func_0x0001000a6ee8(&UNK_11054db10,
                      "ChatCustomizationHubEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1027b948c,uVar1,uVar6,&UNK_11054db10,&PTR_DAT_112ebf588);
  func_0x000107c61574(uVar1);
  puVar7 = &UNK_11054dc00;
  func_0x000107c613fc(&UNK_11054dc00,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x0001000a6ee8(&UNK_11054df50,
                      "ChatCustomizationHubScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_1027b94b8,puVar7,uVar6,&UNK_11054df50,&PTR_DAT_112ebf9d0);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11054dc28;
  func_0x000107c613fc(&UNK_11054dc28,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_11054d908,
                      "ChatCustomizationHubScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1027b95a0,puVar7,uVar6,&UNK_11054d908,&PTR_DAT_112ebf4f8);
  func_0x000107c61574(puVar7);
  func_0x000107c6157c(uVar10);
  func_0x0001000a6ee8(&UNK_11054dbb0,
                      "SCGenerativeChatWallpapersServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4c,2,FUN_1027b962c,uVar10,uVar6,&UNK_11054dbb0,&PTR_DAT_112ebf720);
  func_0x000107c61574(uVar10);
  uVar6 = 0x112ebf850;
  func_0x0001000285a8(0x112ebf850,&UNK_10dadcdf0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar5,ppuVar8,uVar9,uVar6);
  func_0x0001000a7f38("ChatCustomizationHubScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = puVar5;
  return;
}



/* Entry: 1027b7070; end: 1027b7e4f;  */

void FUN_1027b7070(long *param_1,long param_2)

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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  FUN_1027b8018();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  *(undefined8 *)(param_2 + 200) = uStack_118;
  *(undefined8 *)(param_2 + 0xd0) = uStack_120;
  *(undefined8 *)(param_2 + 0xd8) = uStack_128;
  *(undefined8 *)(param_2 + 0xe0) = uStack_130;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
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
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174();
  uVar17 = uStack_f8;
  func_0x000107c61174();
  uVar18 = uStack_100;
  func_0x000107c61174();
  uVar19 = uStack_108;
  func_0x000107c61174();
  uVar20 = uStack_110;
  func_0x000107c61174();
  uVar21 = uStack_118;
  func_0x000107c61174();
  uVar22 = uStack_120;
  func_0x000107c61174();
  uVar23 = uStack_128;
  func_0x000107c61174();
  uVar24 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar27 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x18) = puVar27;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar28 = uStack_140;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar25 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x20) = puVar25;
  FUN_1027c0d80();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar26;
  func_0x0001027bc1b0(uVar26,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                      uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,
                      uVar23,uVar24,puVar27,puVar25);
  *(undefined8 *)(param_2 + 0x10) = uVar28;
  func_0x000107c61174();
  FUN_1027bc4d0();
  func_0x000107c61170(uVar26);
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
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61574(uStack_138);
  func_0x000107c61574(uStack_140);
  func_0x000107c61170(uVar28);
  *param_1 = param_2;
  return;
}



/* Entry: 1027b7e50; end: 1027b7f5b;  */

void FUN_1027b7e50(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1027b7f5c; end: 1027b7f63;  */

undefined8 FUN_1027b7f5c(void)

{
  return 0x1b;
}



/* Entry: 1027b7f64; end: 1027b7fe7;  */

void FUN_1027b7f64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027b8058,param_2,FUN_1027b805c,param_2,0x1027b8084,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027b7fe8; end: 1027b8017;  */

undefined ** FUN_1027b7fe8(void)

{
  return &PTR_DAT_113066580;
}



/* Entry: 1027b8018; end: 1027b8037;  */

void FUN_1027b8018(void)

{
  func_0x000107c61168(&PTR_PTR_112ebf5f0);
  return;
}



/* Entry: 1027b8038; end: 1027b805b;  */

undefined1  [16] FUN_1027b8038(void)

{
  return ZEXT816(0x11054db10);
}



/* Entry: 1027b805c; end: 1027b80af;  */

void FUN_1027b805c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027b80b0; end: 1027b8fa3;  */

void FUN_1027b80b0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  FUN_1027b91a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar11 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar9;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar11 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar9;
  func_0x0001000285a8(0x112e01b58,&UNK_10da8e210);
  func_0x000107c610f8();
  uVar11 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x28) = puVar9;
  puVar9 = PTR_PTR_1126aaf30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0bd320);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef20360);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef20410);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0bd340);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  uVar11 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  func_0x000107c61574(uStack_c8);
  *(undefined8 *)(param_2 + 0x70) = uVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 1027b8fa4; end: 1027b903f;  */

void FUN_1027b8fa4(void)

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
  return;
}



/* Entry: 1027b9040; end: 1027b9093;  */

void FUN_1027b9040(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b9094; end: 1027b909b;  */

undefined8 FUN_1027b9094(void)

{
  return 0x1b;
}



/* Entry: 1027b909c; end: 1027b911f;  */

void FUN_1027b909c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1027b91f0,param_2,FUN_1027b91f4,param_2,FUN_1027b921c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027b9120; end: 1027b916f;  */

undefined8 FUN_1027b9120(void)

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



/* Entry: 1027b9170; end: 1027b919f;  */

undefined ** FUN_1027b9170(void)

{
  return &PTR_DAT_113066580;
}



/* Entry: 1027b91a0; end: 1027b91bf;  */

void FUN_1027b91a0(void)

{
  func_0x000107c61168(&PTR_PTR_112ebf788);
  return;
}



/* Entry: 1027b91c0; end: 1027b91f3;  */

undefined1  [16] FUN_1027b91c0(void)

{
  return ZEXT816(0x11054db90);
}



/* Entry: 1027b91f4; end: 1027b921b;  */

void FUN_1027b91f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027b921c; end: 1027b9223;  */

undefined8 FUN_1027b921c(void)

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



/* Entry: 1027b9224; end: 1027b948b;  */

void FUN_1027b9224(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cba0;
  ppuVar4 = &PTR_DAT_113066580;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112ebf848;
  func_0x0001000285a8(0x112ebf848,&UNK_10dadcde8);
  func_0x0001000a6ee8(&UNK_11054db10,
                      "ChatCustomizationHubEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1027b948c,param_2,uVar2,&UNK_11054db10,&PTR_DAT_112ebf588);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_11054dc00;
  func_0x000107c613fc(&UNK_11054dc00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11054df50,
                      "ChatCustomizationHubScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_1027b94b8,puVar3,uVar2,&UNK_11054df50,&PTR_DAT_112ebf9d0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11054dc28;
  func_0x000107c613fc(&UNK_11054dc28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_11054d908,
                      "ChatCustomizationHubScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1027b95a0,puVar3,uVar2,&UNK_11054d908,&PTR_DAT_112ebf4f8);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_11054dbb0,
                      "SCGenerativeChatWallpapersServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4c,2,FUN_1027b962c,param_6,uVar2,&UNK_11054dbb0,&PTR_DAT_112ebf720);
  func_0x000107c61574(param_6);
  uVar2 = 0x112ebf850;
  func_0x0001000285a8(0x112ebf850,&UNK_10dadcdf0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("ChatCustomizationHubScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = puVar1;
  return;
}



/* Entry: 1027b948c; end: 1027b94b7;  */

void FUN_1027b948c(void)

{
  FUN_1027b95a8();
  return;
}



/* Entry: 1027b94b8; end: 1027b94f7;  */

void FUN_1027b94b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1027ba36c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ChatCustomizationHubScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b94f8; end: 1027b959f;  */

void FUN_1027b94f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054dc50;
  func_0x000107c613fc(&UNK_11054dc50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1027b968c;
  func_0x0001000823a8(FUN_1027b968c,puVar1);
  func_0x000100082720("ChatCustomizationHubScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1027b95a0; end: 1027b95a7;  */

void FUN_1027b95a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11054dc50;
  func_0x000107c613fc(&UNK_11054dc50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1027b968c;
  func_0x0001000823a8(FUN_1027b968c,puVar3);
  func_0x000100082720("ChatCustomizationHubScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1027b95a8; end: 1027b962b;  */

void FUN_1027b95a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1027b962c; end: 1027b9657;  */

void FUN_1027b962c(void)

{
  FUN_1027b95a8();
  return;
}



/* Entry: 1027b9658; end: 1027b965f;  */

void FUN_1027b9658(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  func_0x0001005d8744(1,0x1027b91f0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027b9660; end: 1027b968b;  */

void FUN_1027b9660(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


