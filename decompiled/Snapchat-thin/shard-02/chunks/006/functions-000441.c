/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fef6d4; end: 101fef6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fef6d4(undefined8 *param_1)

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
  FUN_101fef60c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e4dfd0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e4dfd8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 101fef6dc; end: 101fef73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fef6dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4dfd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4dfd8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fef740; end: 101fef79f; -[_TtC35CustomStoryCreationScopeGraphBridge43CustomStoryCreationScopeGraphBridgeServices init] */

void FUN_101fef740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryCreationScopeGraphBridge.CustomStoryCreationScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fef76c);
  (*pcVar1)();
}



/* Entry: 101fef7a0; end: 101fef817; -[_TtC35CustomStoryCreationScopeGraphBridge43CustomStoryCreationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fef7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fef7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fef7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4dfd0));
  return;
}



/* Entry: 101fef818; end: 101fef823;  */

void FUN_101fef818(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fefc14,param_1);
  return;
}



/* Entry: 101fef824; end: 101fef8af;  */

void FUN_101fef824(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fefc1c,0);
  return;
}



/* Entry: 101fef8b0; end: 101fef8bb;  */

void FUN_101fef8b0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fef914,param_1);
  return;
}



/* Entry: 101fef8bc; end: 101fef913;  */

void FUN_101fef8bc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 101fef914; end: 101fef947;  */

void FUN_101fef914(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101fef948; end: 101fef973;  */

undefined8 FUN_101fef948(void)

{
  return 0x1b;
}



/* Entry: 101fef974; end: 101fef9f3;  */

void FUN_101fef974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 101fef9f4; end: 101fefaeb;  */

void FUN_101fef9f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e4dfc0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4dfc0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b8320;
  func_0x000107c613fc(&UNK_1104b8320,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fefc0c;
  func_0x00010058fa64(0x101fefc0c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fefaec; end: 101fefb17;  */

void FUN_101fefaec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fefb18; end: 101fefb1f;  */

void FUN_101fefb18(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4dfc0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4dfc0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b8320;
  func_0x000107c613fc(&UNK_1104b8320,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fefc0c;
  func_0x00010058fa64(0x101fefc0c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fefb20; end: 101fefb7b;  */

void FUN_101fefb20(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4dfc0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4dfc0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101fefb7c; end: 101fefc1f;  */

undefined ** FUN_101fefb7c(void)

{
  return &PTR_DAT_112ff1898;
}



/* Entry: 101fefc20; end: 101fefc67; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefc20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e030;
  func_0x000107c61428(param_1 + _DAT_112e4e030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fefc68; end: 101fefcbf; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefc68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e030;
  func_0x000107c61428(param_1 + _DAT_112e4e030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fefcc0; end: 101fefd07; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint sCRecipientPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefcc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e038;
  func_0x000107c61428(param_1 + _DAT_112e4e038,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fefd08; end: 101fefd13; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint setSCRecipientPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e038;
  func_0x000107c61428(param_1 + _DAT_112e4e038,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fefd14; end: 101fefd5b; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefd14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e040;
  func_0x000107c61428(param_1 + _DAT_112e4e040,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fefd5c; end: 101fefd67; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e040;
  func_0x000107c61428(param_1 + _DAT_112e4e040,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fefd68; end: 101fefdaf; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint customStoryCreationScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefd68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e048;
  func_0x000107c61428(param_1 + _DAT_112e4e048,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fefdb0; end: 101fefdbb; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint setCustomStoryCreationScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefdb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e048;
  func_0x000107c61428(param_1 + _DAT_112e4e048,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fefdbc; end: 101fefe1b;  */

void FUN_101fefdbc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101fefe1c; end: 101ff0053;  */

/* WARNING: Possible PIC construction at 0x000101feff88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101feff98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101feffb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101feffc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101feffe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ff0028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101feffc8) */
/* WARNING: Removing unreachable block (ram,0x000101feffb8) */
/* WARNING: Removing unreachable block (ram,0x000101feff9c) */
/* WARNING: Removing unreachable block (ram,0x000101feff8c) */
/* WARNING: Removing unreachable block (ram,0x000101ff002c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fefe1c(void)

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
  func_0x000107c5121c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c5e1d0();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c41110();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_101fef2c4();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_101fef53c();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ff0054);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e4df50) = lVar5;
        *(long *)(lVar4 + _DAT_112e4df58) = unaff_x20;
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



/* Entry: 101ff0054; end: 101ff007b; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101ff0054(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fefe1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ff007c; end: 101ff00bf; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint end] */

void FUN_101ff007c(undefined8 param_1)

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



/* Entry: 101ff00c0; end: 101ff032f;  */

void FUN_101ff00c0(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000001d;
    if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef1006030)) ||
       (func_0x000107c605b8(0xd00000000000001d,0x800000010eff9fd0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c587c4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0facd90)) &&
             (func_0x000107c605b8(0xd000000000000032,0x800000010f053270,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "CustomStoryCreationScopeGraphBridge/SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x5e,2,0x38,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff0330);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53d48();
          goto LAB_101ff014c;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a68c();
    }
  }
LAB_101ff014c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101ff0330; end: 101ff03db; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101ff0330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ff00c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ff03dc; end: 101ff045f; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff03dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4e030,0);
  *(undefined8 *)(param_1 + _DAT_112e4e038) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4e040) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4e048) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4e050) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ff0460; end: 101ff0493;  */

void FUN_101ff0460(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ff0494; end: 101ff04fb; -[SCCustomStoryCreationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ff04c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ff04e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ff04c4) */
/* WARNING: Removing unreachable block (ram,0x000101ff04e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff0494(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4e030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e038));
  return;
}



/* Entry: 101ff04fc; end: 101ff051b;  */

void FUN_101ff04fc(void)

{
  func_0x000107c61168(&PTR_PTR_112814318);
  return;
}



/* Entry: 101ff051c; end: 101ff0563; -[SCSCCustomStoryCreationScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff051c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e080;
  func_0x000107c61428(param_1 + _DAT_112e4e080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ff0564; end: 101ff05bb; -[SCSCCustomStoryCreationScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff0564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e080;
  func_0x000107c61428(param_1 + _DAT_112e4e080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ff05bc; end: 101ff0693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff05bc(undefined8 param_1,long param_2)

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
    FUN_101fef51c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4df88) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ff0694);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4df90);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4e088);
    *(long **)(unaff_x20 + _DAT_112e4e088) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101ff0694; end: 101ff06bb; -[SCSCCustomStoryCreationScopedServicesSaberEntryPoint begin] */

void FUN_101ff0694(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ff05bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ff06bc; end: 101ff0833;  */

/* WARNING: Possible PIC construction at 0x000101ff0724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ff07bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ff0728) */
/* WARNING: Removing unreachable block (ram,0x000101ff07c0) */
/* WARNING: Removing unreachable block (ram,0x000101ff07d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff06bc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4e088);
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



/* Entry: 101ff0834; end: 101ff083b;  */

void FUN_101ff0834(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ff083c; end: 101ff086f; -[SCSCCustomStoryCreationScopedServicesSaberEntryPoint end] */

void FUN_101ff083c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ff06bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ff0870; end: 101ff098f;  */

void FUN_101ff0870(long param_1,long param_2,long param_3)

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
                        "CustomStoryCreationScopeGraphBridge/SCSCCustomStoryCreationScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff0990);
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



/* Entry: 101ff0990; end: 101ff0a3b; -[SCSCCustomStoryCreationScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101ff0990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ff0870(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ff0a3c; end: 101ff0a9b; -[SCSCCustomStoryCreationScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff0a3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4e080,0);
  *(undefined8 *)(param_1 + _DAT_112e4e088) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ff0a9c; end: 101ff0acf;  */

void FUN_101ff0a9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ff0ad0; end: 101ff0b07; -[SCSCCustomStoryCreationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff0ad0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4e080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e088));
  return;
}



/* Entry: 101ff0b08; end: 101ff0b27;  */

void FUN_101ff0b08(void)

{
  func_0x000107c61168(&PTR_PTR_1128143f0);
  return;
}



/* Entry: 101ff0b28; end: 101ff0b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff0b28(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101ff0f1c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4e0c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101ff0b94; end: 101ff0bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff0b94(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4e0c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ff0c00; end: 101ff0c5f; -[_TtC56CustomStoryMemberActionSheetScopedFactoryServiceProvider44SCCustomStoryMemberActionSheetScopedServices init] */

void FUN_101ff0c00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMemberActionSheetScopedFactoryServiceProvider.SCCustomStoryMemberActionSheetScopedServices"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff0c2c);
  (*pcVar1)();
}



/* Entry: 101ff0c60; end: 101ff0c6f; -[_TtC56CustomStoryMemberActionSheetScopedFactoryServiceProvider44SCCustomStoryMemberActionSheetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff0c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4e0c0));
  return;
}



/* Entry: 101ff0c70; end: 101ff0cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff0c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b8538;
  func_0x000107c613fc(&UNK_1104b8538,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101ff0fb4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101ff0cdc; end: 101ff0d77;  */

void FUN_101ff0cdc(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b8448;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b8448;
  return;
}



/* Entry: 101ff0d78; end: 101ff0daf;  */

void FUN_101ff0d78(long *param_1)

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



/* Entry: 101ff0db0; end: 101ff0db7;  */

undefined8 FUN_101ff0db0(void)

{
  return 0x1b;
}



/* Entry: 101ff0db8; end: 101ff0eeb;  */

void FUN_101ff0db8(undefined8 *param_1)

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
  puVar1 = &UNK_1104b8560;
  func_0x000107c613fc(&UNK_1104b8560,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ff0f8c;
  func_0x00010058fa64(FUN_101ff0f8c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ff0eec; end: 101ff0f1b;  */

undefined ** FUN_101ff0eec(void)

{
  return &PTR_DAT_112f20e38;
}



/* Entry: 101ff0f1c; end: 101ff0f3b;  */

void FUN_101ff0f1c(void)

{
  func_0x000107c61168(&PTR_PTR_1128144b0);
  return;
}



/* Entry: 101ff0f3c; end: 101ff0f8b;  */

undefined1  [16] FUN_101ff0f3c(void)

{
  return ZEXT816(0x1104b8498);
}



/* Entry: 101ff0f8c; end: 101ff0fb3;  */

void FUN_101ff0f8c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101ff0fb4; end: 101ff0fc7;  */

void FUN_101ff0fb4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ff0fc8; end: 101ff130f;  */

void FUN_101ff0fc8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e4e138,&UNK_10da497e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101ff25f0();
  func_0x000100082720("CustomStoryMemberActionSheetScopeGraphBridgeServicesServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e4e140,&UNK_10da497f0);
  puVar3 = &UNK_1104b8610;
  func_0x000107c613fc(&UNK_1104b8610,0x48,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar8 = 0x101ff1320;
  func_0x0001000823a8(0x101ff1320,puVar3);
  func_0x000100082720("SCCustomStoryMemberActionSheetEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101ff0d78;
  func_0x0001000823a8(FUN_101ff0d78,0);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e4e148,&UNK_10da49800);
  puVar3 = &UNK_1104b8638;
  func_0x000107c613fc(&UNK_1104b8638,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101ff1334;
  func_0x0001000823a8(0x101ff1334,puVar3);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112e4e0c8,&UNK_10da49520);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101ff1340;
  func_0x0001000823a8(0x101ff1340,uVar5);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e4e0b8,&UNK_10da49510);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101ff1348;
  func_0x0001000823a8(0x101ff1348,uVar6);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104b8660;
  func_0x000107c613fc(&UNK_1104b8660,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101ff1350;
  func_0x0001000823a8(0x101ff1350,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopeEntryPointProvider",0x35,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101ff1310; end: 101ff1357;  */

void FUN_101ff1310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e4e138,&UNK_10da497e8);
  puVar3 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_101ff25f0();
  func_0x000100082720("CustomStoryMemberActionSheetScopeGraphBridgeServicesServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e4e140,&UNK_10da497f0);
  puVar5 = &UNK_1104b8610;
  func_0x000107c613fc(&UNK_1104b8610,0x48,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  uVar6 = 0x101ff1320;
  func_0x0001000823a8(0x101ff1320,puVar5);
  func_0x000100082720("SCCustomStoryMemberActionSheetEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_101ff0d78;
  func_0x0001000823a8(FUN_101ff0d78,0);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e4e148,&UNK_10da49800);
  puVar5 = &UNK_1104b8638;
  func_0x000107c613fc(&UNK_1104b8638,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(code **)(puVar5 + 0x28) = pcVar7;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x101ff1334;
  func_0x0001000823a8(0x101ff1334,puVar5);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112e4e0c8,&UNK_10da49520);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101ff1340;
  func_0x0001000823a8(0x101ff1340,uVar8);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e4e0b8,&UNK_10da49510);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x101ff1348;
  func_0x0001000823a8(0x101ff1348,uVar9);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104b8660;
  func_0x000107c613fc(&UNK_1104b8660,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  uVar10 = 0x101ff1350;
  func_0x0001000823a8(0x101ff1350,puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopeEntryPointProvider",0x35,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 101ff1358; end: 101ff1b83;  */

void FUN_101ff1358(long *param_1,long param_2)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_101ff1cfc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a9d78;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0535e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar9 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = param_2;
  return;
}



/* Entry: 101ff1b84; end: 101ff1bef;  */

void FUN_101ff1b84(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101ff1bf0; end: 101ff1bf7;  */

undefined8 FUN_101ff1bf0(void)

{
  return 0x1b;
}



/* Entry: 101ff1bf8; end: 101ff1c7b;  */

void FUN_101ff1bf8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101ff1d3c,param_2,FUN_101ff1d40,param_2,FUN_101ff1d68,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101ff1c7c; end: 101ff1ccb;  */

undefined8 FUN_101ff1c7c(void)

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



/* Entry: 101ff1ccc; end: 101ff1cfb;  */

void FUN_101ff1ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104b8678;
  return;
}



/* Entry: 101ff1cfc; end: 101ff1d1b;  */

void FUN_101ff1cfc(void)

{
  func_0x000107c61168(&PTR_PTR_112e4e1b8);
  return;
}



/* Entry: 101ff1d1c; end: 101ff1d3f;  */

undefined1  [16] FUN_101ff1d1c(void)

{
  return ZEXT816(0x1104b86b8);
}



/* Entry: 101ff1d40; end: 101ff1d67;  */

void FUN_101ff1d40(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ff1d68; end: 101ff1d6f;  */

undefined8 FUN_101ff1d68(void)

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



/* Entry: 101ff1d70; end: 101ff1dab;  */

void FUN_101ff1d70(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ff1dac();
  func_0x0001000a7f38("SCCustomStoryMemberActionSheetScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101ff1dac; end: 101ff1f97;  */

void FUN_101ff1dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105dd040;
  ppuVar4 = &PTR_DAT_112f20e38;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b8708;
  func_0x000107c613fc(&UNK_1104b8708,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4e248;
  func_0x0001000285a8(0x112e4e248,&UNK_10da49988);
  func_0x0001000a6ee8(&UNK_1104b88c0,
                      "CustomStoryMemberActionSheetScopeGraphBridgeScopeInitializationPluginKey",
                      0x48,2,FUN_101ff1f98,puVar2,uVar3,&UNK_1104b88c0,&PTR_DAT_112e4e2d8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b86b8,
                      "SCCustomStoryMemberActionSheetEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_101ff204c,param_3,uVar3,&UNK_1104b86b8,&PTR_DAT_112e4e150);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104b8730;
  func_0x000107c613fc(&UNK_1104b8730,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b84d8,
                      "SCCustomStoryMemberActionSheetScopedServicesScopeInitializationPluginKey",
                      0x48,2,FUN_101ff20fc,puVar2,uVar3,&UNK_1104b84d8,&PTR_DAT_112e4e0d0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4e250;
  func_0x0001000285a8(0x112e4e250,&UNK_10da49990);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101ff1f98; end: 101ff1fd7;  */

void FUN_101ff1f98(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101ff26d4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CustomStoryMemberActionSheetScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ff1fd8; end: 101ff204b;  */

void FUN_101ff1fd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101ff2138;
  func_0x0001000823a8(0x101ff2138,param_3);
  func_0x000100082720("SCCustomStoryMemberActionSheetEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ff204c; end: 101ff2053;  */

void FUN_101ff204c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101ff2138;
  func_0x0001000823a8();
  func_0x000100082720("SCCustomStoryMemberActionSheetEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ff2054; end: 101ff20fb;  */

void FUN_101ff2054(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b8758;
  func_0x000107c613fc(&UNK_1104b8758,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101ff2130;
  func_0x0001000823a8(FUN_101ff2130,puVar1);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101ff20fc; end: 101ff2103;  */

void FUN_101ff20fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b8758;
  func_0x000107c613fc(&UNK_1104b8758,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101ff2130;
  func_0x0001000823a8(FUN_101ff2130,puVar3);
  func_0x000100082720("SCCustomStoryMemberActionSheetScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101ff2104; end: 101ff212f;  */

void FUN_101ff2104(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ff2130; end: 101ff213f;  */

void FUN_101ff2130(undefined8 *param_1)

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
  puVar1 = &UNK_1104b8560;
  func_0x000107c613fc(&UNK_1104b8560,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ff0f8c;
  func_0x00010058fa64(FUN_101ff0f8c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ff2140; end: 101ff21c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ff2140(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101ff2500();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e4e258) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4e260) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff21c8);
  (*pcVar1)();
}



/* Entry: 101ff21c8; end: 101ff2227; -[_TtC44CustomStoryMemberActionSheetScopeGraphBridge59CustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint init] */

void FUN_101ff21c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMemberActionSheetScopeGraphBridge.CustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff21f4);
  (*pcVar1)();
}



/* Entry: 101ff2228; end: 101ff225f; -[_TtC44CustomStoryMemberActionSheetScopeGraphBridge59CustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ff2244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ff2248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e258));
  return;
}



/* Entry: 101ff2260; end: 101ff2287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2260(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4e260),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4e258));
  return;
}



/* Entry: 101ff2288; end: 101ff22a7;  */

void FUN_101ff2288(void)

{
  func_0x000107c61168(&PTR_PTR_112814570);
  return;
}



/* Entry: 101ff22a8; end: 101ff232f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ff22a8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4e290) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4e298);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ff2330);
  (*pcVar2)();
}



/* Entry: 101ff2330; end: 101ff2417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ff2330(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4e290);
  *(undefined **)(unaff_x20 + _DAT_112e4e290) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4e298);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4e298))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b8820;
  func_0x000107c613fc(&UNK_1104b8820,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101ff241c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101ff2418; end: 101ff2423;  */

void FUN_101ff2418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ff2424; end: 101ff2483; -[_TtC44CustomStoryMemberActionSheetScopeGraphBridge59SCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint init] */

void FUN_101ff2424(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMemberActionSheetScopeGraphBridge.SCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff2450);
  (*pcVar1)();
}



/* Entry: 101ff2484; end: 101ff24bb; -[_TtC44CustomStoryMemberActionSheetScopeGraphBridge59SCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2484(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4e298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e290));
  return;
}



/* Entry: 101ff24bc; end: 101ff24bf;  */

void FUN_101ff24bc(void)

{
  return;
}



/* Entry: 101ff24c0; end: 101ff24df;  */

void FUN_101ff24c0(void)

{
  FUN_101ff2330();
  return;
}



/* Entry: 101ff24e0; end: 101ff24ff;  */

void FUN_101ff24e0(void)

{
  func_0x000107c61168(&PTR_PTR_112814638);
  return;
}



/* Entry: 101ff2500; end: 101ff25cf;  */

undefined8 FUN_101ff2500(void)

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
  
  func_0x000107c61428(0x112e4e2c8,&uStack_40,0x20,0);
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
    FUN_101ff25d0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101ff25d0; end: 101ff25ef;  */

void FUN_101ff25d0(void)

{
  func_0x000107c61168(&PTR_PTR_112814700);
  return;
}



/* Entry: 101ff25f0; end: 101ff265b;  */

void FUN_101ff25f0(void)

{
  func_0x0001000285a8(0x112e4e2d0,&UNK_10da49a78);
  func_0x0001000823a8(0x101ff2630,0);
  return;
}



/* Entry: 101ff265c; end: 101ff2697; -[_TtC44CustomStoryMemberActionSheetScopeGraphBridge52CustomStoryMemberActionSheetScopeGraphBridgeServices init] */

void FUN_101ff265c(undefined8 param_1)

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



/* Entry: 101ff2698; end: 101ff26cb;  */

void FUN_101ff2698(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


