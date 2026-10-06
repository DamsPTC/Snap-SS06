/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029cba90; end: 1029cbaaf;  */

void FUN_1029cba90(void)

{
  func_0x000107c61168(&PTR_PTR_11287a330);
  return;
}



/* Entry: 1029cbab0; end: 1029cbb7f;  */

undefined8 FUN_1029cbab0(void)

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
  
  func_0x000107c61428(0x112ed4d60,&uStack_40,0x20,0);
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
    FUN_1029cbb80();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029cbb80; end: 1029cbb9f;  */

void FUN_1029cbb80(void)

{
  func_0x000107c61168(&PTR_PTR_11287a3f8);
  return;
}



/* Entry: 1029cbba0; end: 1029cbbbb;  */

void FUN_1029cbba0(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed4d68,&UNK_10dafe288);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029cbc28,param_1);
  return;
}



/* Entry: 1029cbbbc; end: 1029cbc27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cbbbc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1029cbb80();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed4d70) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1029cbc28; end: 1029cbc2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cbc28(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1029cbb80();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed4d70) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1029cbc30; end: 1029cbc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cbc30(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed4d70) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029cbc7c; end: 1029cbcdb; -[_TtC33ShortcutsCarouselScopeGraphBridge41ShortcutsCarouselScopeGraphBridgeServices init] */

void FUN_1029cbc7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShortcutsCarouselScopeGraphBridge.ShortcutsCarouselScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029cbca8);
  (*pcVar1)();
}



/* Entry: 1029cbcdc; end: 1029cbceb; -[_TtC33ShortcutsCarouselScopeGraphBridge41ShortcutsCarouselScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cbcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed4d70));
  return;
}



/* Entry: 1029cbcec; end: 1029cbd77;  */

void FUN_1029cbcec(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1029cbd2c,0);
  return;
}



/* Entry: 1029cbd78; end: 1029cbd93;  */

void FUN_1029cbd78(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029cbde4,param_1);
  return;
}



/* Entry: 1029cbd94; end: 1029cbde3;  */

void FUN_1029cbd94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1029cbde4; end: 1029cbe17;  */

void FUN_1029cbde4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029cbe18; end: 1029cbe1f;  */

undefined8 FUN_1029cbe18(void)

{
  return 0x1b;
}



/* Entry: 1029cbe20; end: 1029cbf97;  */

void FUN_1029cbe20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057e100;
  func_0x000107c613fc(&UNK_11057e100,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029cbf98,puVar1);
  return;
}



/* Entry: 1029cbf98; end: 1029cbf9f;  */

void FUN_1029cbf98(undefined8 *param_1)

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
  func_0x000107c61428(0x112ed4d60,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed4d60,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11057e1d8;
  func_0x000107c613fc(&UNK_11057e1d8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029cc06c;
  func_0x00010058fa64(0x1029cc06c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029cbfa0; end: 1029cbffb;  */

void FUN_1029cbfa0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed4d60,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed4d60,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029cbffc; end: 1029cc073;  */

undefined ** FUN_1029cbffc(void)

{
  return &PTR_DAT_112fb4b10;
}



/* Entry: 1029cc074; end: 1029cc0bb; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc074(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed4dc8;
  func_0x000107c61428(param_1 + _DAT_112ed4dc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029cc0bc; end: 1029cc113; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc0bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed4dc8;
  func_0x000107c61428(param_1 + _DAT_112ed4dc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029cc114; end: 1029cc15b; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint sCSendToListsEditScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc114(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed4dd0;
  func_0x000107c61428(param_1 + _DAT_112ed4dd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029cc15c; end: 1029cc167; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint setSCSendToListsEditScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed4dd0;
  func_0x000107c61428(param_1 + _DAT_112ed4dd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029cc168; end: 1029cc1af; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint shortcutsCarouselScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc168(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed4dd8;
  func_0x000107c61428(param_1 + _DAT_112ed4dd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029cc1b0; end: 1029cc1bb; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint setShortcutsCarouselScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed4dd8;
  func_0x000107c61428(param_1 + _DAT_112ed4dd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029cc1bc; end: 1029cc21b;  */

void FUN_1029cc1bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1029cc21c; end: 1029cc3d7;  */

/* WARNING: Possible PIC construction at 0x0001029cc334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cc358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cc368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cc3ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cc36c) */
/* WARNING: Removing unreachable block (ram,0x0001029cc35c) */
/* WARNING: Removing unreachable block (ram,0x0001029cc338) */
/* WARNING: Removing unreachable block (ram,0x0001029cc3b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc21c(void)

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
  func_0x000107c51298();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5ab14();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1029cb838();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1029cbab0();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029cc3d8);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ed4cf0) = lVar5;
      *(long *)(lVar3 + _DAT_112ed4cf8) = unaff_x20;
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



/* Entry: 1029cc3d8; end: 1029cc3ff; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029cc3d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029cc21c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029cc400; end: 1029cc443; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029cc400(undefined8 param_1)

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



/* Entry: 1029cc444; end: 1029cc647;  */

void FUN_1029cc444(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0faa3a0)) {
      uVar2 = 0xd00000000000001d;
      func_0x000107c605b8(0xd00000000000001d,0x800000010f055c60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0f2a4f0)) &&
           (func_0x000107c605b8(0xd000000000000030,0x800000010f0d5b10,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ShortcutsCarouselScopeGraphBridge/SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5a,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029cc648);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5912c();
        goto LAB_1029cc4d0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58840();
  }
LAB_1029cc4d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029cc648; end: 1029cc6f3; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029cc648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029cc444(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029cc6f4; end: 1029cc76b; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc6f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed4dc8,0);
  *(undefined8 *)(param_1 + _DAT_112ed4dd0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed4dd8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed4de0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029cc76c; end: 1029cc79f;  */

void FUN_1029cc76c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029cc7a0; end: 1029cc7f7; -[SCShortcutsCarouselScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029cc7cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cc7d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc7a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed4dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed4dd0));
  return;
}



/* Entry: 1029cc7f8; end: 1029cc817;  */

void FUN_1029cc7f8(void)

{
  func_0x000107c61168(&PTR_PTR_11287a4b8);
  return;
}



/* Entry: 1029cc818; end: 1029cc85f; -[SCShortcutsCarouselScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc818(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed4e10;
  func_0x000107c61428(param_1 + _DAT_112ed4e10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029cc860; end: 1029cc8b7; -[SCShortcutsCarouselScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc860(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed4e10;
  func_0x000107c61428(param_1 + _DAT_112ed4e10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029cc8b8; end: 1029cc98f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc8b8(undefined8 param_1,long param_2)

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
    FUN_1029cba90();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed4d28) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029cc990);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed4d30);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed4e18);
    *(long **)(unaff_x20 + _DAT_112ed4e18) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029cc990; end: 1029cc9b7; -[SCShortcutsCarouselScopedServicesSaberEntryPoint begin] */

void FUN_1029cc990(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029cc8b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029cc9b8; end: 1029ccb2f;  */

/* WARNING: Possible PIC construction at 0x0001029cca20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ccab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cca24) */
/* WARNING: Removing unreachable block (ram,0x0001029ccabc) */
/* WARNING: Removing unreachable block (ram,0x0001029ccad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cc9b8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed4e18);
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



/* Entry: 1029ccb30; end: 1029ccb37;  */

void FUN_1029ccb30(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029ccb38; end: 1029ccb6b; -[SCShortcutsCarouselScopedServicesSaberEntryPoint end] */

void FUN_1029ccb38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029cc9b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029ccb6c; end: 1029ccc8b;  */

void FUN_1029ccb6c(long param_1,long param_2,long param_3)

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
                        "ShortcutsCarouselScopeGraphBridge/SCShortcutsCarouselScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ccc8c);
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



/* Entry: 1029ccc8c; end: 1029ccd37; -[SCShortcutsCarouselScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029ccc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029ccb6c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029ccd38; end: 1029ccd97; -[SCShortcutsCarouselScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ccd38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed4e10,0);
  *(undefined8 *)(param_1 + _DAT_112ed4e18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029ccd98; end: 1029ccdcb;  */

void FUN_1029ccd98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029ccdcc; end: 1029cce03; -[SCShortcutsCarouselScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ccdcc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed4e10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed4e18));
  return;
}



/* Entry: 1029cce04; end: 1029cce23;  */

void FUN_1029cce04(void)

{
  func_0x000107c61168(&PTR_PTR_11287a588);
  return;
}



/* Entry: 1029cce24; end: 1029cd803;  */

/* WARNING: Possible PIC construction at 0x0001029ccfe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cd088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cd01c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ccfec) */
/* WARNING: Removing unreachable block (ram,0x0001029cd020) */
/* WARNING: Removing unreachable block (ram,0x0001029ccff0) */
/* WARNING: Removing unreachable block (ram,0x0001029cd004) */
/* WARNING: Removing unreachable block (ram,0x0001029cd054) */
/* WARNING: Removing unreachable block (ram,0x0001029cd058) */
/* WARNING: Removing unreachable block (ram,0x0001029cd08c) */
/* WARNING: Removing unreachable block (ram,0x0001029cd0a8) */
/* WARNING: Removing unreachable block (ram,0x0001029cd0d4) */
/* WARNING: Removing unreachable block (ram,0x0001029cd120) */
/* WARNING: Removing unreachable block (ram,0x0001029cd060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cce24(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112ed4e68);
  uVar7 = *puVar1;
  uVar5 = puVar1[1];
  if (param_2 == 0) {
    if (uVar5 == 0) {
      return;
    }
  }
  else {
    uVar9 = param_2;
    if ((uVar5 != 0) &&
       ((param_1 == uVar7 && param_2 == uVar5 ||
        (uVar6 = param_1, func_0x000107c605b8(param_1,param_2,uVar7,uVar5,0), (uVar6 & 1) != 0)))) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112ed4ea0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5fadc(param_1);
      func_0x000107c5ab08(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_1);
      uVar9 = param_2;
    }
    uVar7 = *puVar1;
    uVar5 = puVar1[1];
    param_2 = uVar9;
  }
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112ed4e78);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar5);
  uVar9 = uVar5;
  if (uVar5 != 0) {
    if (uVar6 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar8 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar8 != 0) {
      uVar9 = 0;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029cd068);
          (*pcVar2)();
        }
        uVar9 = *(ulong *)(uVar6 + 0x20);
        func_0x000107c61174();
        uVar6 = param_2;
      }
      else {
        func_0x00010208dfe4();
      }
      func_0x000107c5aaf0();
      func_0x000107c61180();
      uVar8 = uVar9;
      func_0x000107c5aaf8();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      uVar4 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      uVar9 = uVar6;
      if (uVar4 != uVar7 || uVar5 != uVar6) {
        func_0x000107c605b8(uVar4,uVar6,uVar7,uVar5,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar9);
  return;
}



/* Entry: 1029cd804; end: 1029cd883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029cd804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c5ab18(param_3);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126c76a8;
  func_0x000107c610f8(PTR_PTR_1126c76a8);
  func_0x000107c49420();
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1029cd884; end: 1029cd927;  */

void FUN_1029cd884(long param_1)

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



/* Entry: 1029cd928; end: 1029cdf37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cd928(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar11 = &puStack_90;
  lVar13 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed4e90) + _DAT_112fb4af8);
  if (lVar13 != 0) {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    func_0x000107c61174(lVar13);
    lVar14 = lVar13;
    func_0x0001000b637c();
    pcVar1 = "subscribeToRecipientSelectionChanges()";
    func_0x0001000c10c0("subscribeToRecipientSelectionChanges()");
    func_0x000107c61180();
    pcVar2 = pcVar1;
    func_0x000100471e0c();
    func_0x000107c615e8(pcVar1);
    func_0x000107c61574(lVar14);
    uVar6 = 0x112ed4f20;
    func_0x0001000285a8(0x112ed4f20,&UNK_10dafe560);
    pcVar3 = FUN_1029cdf38;
    func_0x0001000d5158(FUN_1029cdf38,0,uVar6);
    func_0x000107c61574(pcVar2);
    puVar4 = &UNK_11057e360;
    func_0x000107c613fc(&UNK_11057e360,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcVar5 = FUN_1029d3588;
    puVar9 = puVar4;
    (**(code **)(*(long *)pcVar3 + 0x60))(FUN_1029d3588);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(pcVar3);
    pcVar3 = pcVar5;
    func_0x000107c614f0(pcVar5);
    (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112ed4e48),pcVar3,puVar9);
    func_0x000107c615e8(pcVar5);
    func_0x000107c61170(lVar13);
  }
  lVar13 = *(long *)(unaff_x20 + _DAT_112ed4eb8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 == 0) {
    lVar14 = 0;
  }
  else {
    uVar6 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f0d5c10);
    lVar14 = lVar13;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar13);
    func_0x000107c61170(uVar6);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ed4e60);
  *(long *)(unaff_x20 + _DAT_112ed4e60) = lVar14;
  func_0x000107c615e8(uVar6);
  lVar13 = *(long *)(unaff_x20 + _DAT_112ed4ea0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 == 0) goto LAB_1029cde1c;
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  lVar14 = lVar13;
  func_0x000107c5ab04(lVar13);
  func_0x000107c61180();
  lVar7 = lVar14;
  func_0x0001000b637c();
  func_0x000107c61170(lVar14);
  uVar6 = 0x112e97bd8;
  func_0x0001000285a8(0x112e97bd8,&UNK_10daa3040);
  uVar12 = 0x1029cdf4c;
  func_0x0001000d5158(0x1029cdf4c,0,uVar6);
  func_0x000107c61574(lVar7);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ed4ea8);
  puVar4 = &UNK_11057e588;
  func_0x000107c613fc(&UNK_11057e588,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  func_0x0001000285a8(0x112ed4f10,&UNK_10dafe538);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar6);
  pcVar3 = FUN_1029d1440;
  func_0x0001000b64ac(FUN_1029d1440,puVar4);
  uVar6 = uVar12;
  func_0x0001006c733c(uVar12);
  pcVar1 = "subscribeToShortcutsObservable()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar8 = (long *)pcVar1;
  func_0x000100471e0c();
  func_0x000107c615e8(pcVar1);
  func_0x000107c61574(uVar6);
  puVar4 = &UNK_11057e360;
  func_0x000107c613fc(&UNK_11057e360,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar9 = &UNK_11057e5b0;
  func_0x000107c613fc(&UNK_11057e5b0,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_1029d1508;
  *(undefined **)(puVar9 + 0x18) = puVar4;
  pcVar5 = FUN_1029d1bd8;
  puVar4 = puVar9;
  (**(code **)(*plVar8 + 0x60))(FUN_1029d1bd8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(plVar8);
  pcVar10 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112ed4e48),pcVar10,puVar4);
  func_0x000107c615e8(pcVar5);
  if (*(char *)(unaff_x20 + _DAT_112ed4e98 + 0x14) == '\x01') {
    lVar14 = *(long *)(unaff_x20 + _DAT_112ed4e60);
    if (lVar14 == 0) goto LAB_1029cde00;
    puVar4 = &UNK_11057e360;
    func_0x000107c613fc(&UNK_11057e360,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_70 = FUN_1029d1c00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11057e5c8;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c615f0(lVar14);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(lVar14);
    func_0x000107c61574(pcVar3);
    func_0x000107c61574(uVar12);
    func_0x000107c615e8(lVar13);
    func_0x000107c60bd0(ppuVar11);
    lVar13 = lVar14;
  }
  else {
LAB_1029cde00:
    func_0x000107c61574(pcVar3);
    func_0x000107c61574(uVar12);
  }
  func_0x000107c615e8(lVar13);
LAB_1029cde1c:
  func_0x0001000285a8(0x112ed4f08,&UNK_10dafe528);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ed4e90) + _DAT_112fb4ad8);
  func_0x000107c61174(uVar12);
  uVar6 = uVar12;
  func_0x0001000b637c();
  func_0x000107c61170(uVar12);
  pcVar1 = "subscribeToActionObservable()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar8 = (long *)pcVar1;
  func_0x000100471e0c();
  func_0x000107c615e8(pcVar1);
  func_0x000107c61574(uVar6);
  puVar4 = &UNK_11057e360;
  func_0x000107c613fc(&UNK_11057e360,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uVar6 = 0x1029d1040;
  puVar9 = puVar4;
  (**(code **)(*plVar8 + 0x60))(0x1029d1040);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(plVar8);
  uVar12 = uVar6;
  func_0x000107c614f0(uVar6);
  (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112ed4e48),uVar12,puVar9);
  func_0x000107c615e8(uVar6);
  return;
}



/* Entry: 1029cdf38; end: 1029cdf5f;  */

void FUN_1029cdf38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_1029d365c(0,0x112ed4f28,&PTR_PTR_1126b5470);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029cdf60; end: 1029cdfab;  */

void FUN_1029cdf60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_1029d365c(0);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029cdfac; end: 1029cea03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cdfac(ulong param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  long unaff_x20;
  long lVar28;
  ulong uVar29;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_e0 [24];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112ed4e78);
  *(ulong *)(unaff_x20 + _DAT_112ed4e78) = param_1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar27);
  lVar28 = *(long *)(unaff_x20 + _DAT_112ed4e80);
  if (param_1 >> 0x3e == 0) {
    uVar29 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar29 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar29 = param_1;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar29 != 0) {
    func_0x000107c61434(lVar28);
    FUN_1029cfa08(0,uVar29 & ((long)uVar29 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar29 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1029cea04);
      (*pcVar4)();
    }
    uVar5 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1029ce9e8);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar5;
        func_0x00010208dfe4();
      }
      uVar7 = uVar6;
      func_0x000107c5aaf0();
      func_0x000107c61180();
      uStack_88 = 0;
      lStack_80 = 0;
      uStack_98 = 0;
      lStack_90 = 0;
      uVar8 = uVar7;
      func_0x000107c51b68();
      func_0x000107c61180();
      puVar9 = &UNK_11057e678;
      func_0x000107c613fc(&UNK_11057e678,0x18,7);
      *(undefined8 **)(puVar9 + 0x10) = &uStack_88;
      puVar10 = &UNK_11057e6a0;
      func_0x000107c613fc(&UNK_11057e6a0,0x20,7);
      *(code **)(puVar10 + 0x10) = FUN_1029d2a04;
      *(undefined **)(puVar10 + 0x18) = puVar9;
      puVar16 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a8 = (code *)0x1029d2a34;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      puStack_b8 = &UNK_100de6bdc;
      puStack_b0 = &UNK_11057e6b8;
      ppuVar11 = &puStack_c8;
      puStack_a0 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      puVar12 = puStack_a0;
      func_0x000107c6157c(puVar10);
      func_0x000107c61574(puVar12);
      puVar12 = &UNK_11057e6f0;
      func_0x000107c613fc(&UNK_11057e6f0,0x18,7);
      *(undefined8 **)(puVar12 + 0x10) = &uStack_98;
      puVar13 = &UNK_11057e718;
      uVar22 = 0x20;
      func_0x000107c613fc(&UNK_11057e718,0x20,7);
      *(undefined8 *)(puVar13 + 0x10) = 0x1029d2a54;
      *(undefined **)(puVar13 + 0x18) = puVar12;
      pcStack_a8 = (code *)0x1029d375c;
      puStack_c8 = puVar16;
      uStack_c0 = 0x42000000;
      puStack_b8 = &UNK_100de58f0;
      puStack_b0 = &UNK_11057e730;
      ppuVar14 = &puStack_c8;
      puStack_a0 = puVar13;
      func_0x000107c60bc4(ppuVar14);
      puVar16 = puStack_a0;
      func_0x000107c6157c(puVar13);
      func_0x000107c61574(puVar16);
      func_0x000107c4c608(uVar8);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(uVar8);
      uVar8 = uVar7;
      func_0x000107c5aaf8();
      func_0x000107c61180();
      uVar27 = uVar22;
      if (uVar8 == 0) {
        func_0x000107c5faec();
        uVar27 = uVar22;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar22);
      }
      uVar15 = uVar7;
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (uVar15 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar27);
      }
      func_0x000107c4a684(uVar7);
      puVar16 = PTR_PTR_1126aa7e8;
      func_0x000107c610f8();
      func_0x000107c47470();
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar8);
      lVar3 = lStack_80;
      uVar27 = uStack_88;
      if (lStack_80 == 0) {
        uVar27 = 0;
      }
      else {
        func_0x000107c61434(lStack_80);
        func_0x000107c5fadc(uVar27,lVar3);
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c54028(puVar16);
      func_0x000107c61170(uVar27);
      lVar3 = lStack_90;
      uVar27 = uStack_98;
      if (lStack_90 == 0) {
        uVar27 = 0;
      }
      else {
        func_0x000107c61434(lStack_90);
        func_0x000107c5fadc(uVar27,lVar3);
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c58d8c(puVar16);
      func_0x000107c61170(uVar27);
      puVar17 = PTR_PTR_1126aa7f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar8 = uVar7;
      func_0x000107c44f7c();
      func_0x000107c61180();
      if (uVar8 == 0) {
        pcStack_138 = (code *)0x0;
        uStack_130 = 0;
        puStack_120 = (undefined *)0x0;
        puStack_118 = (undefined *)0x0;
        uVar27 = 0;
        puStack_128 = (undefined *)0x0;
      }
      else {
        puStack_120 = &UNK_11057e7e0;
        func_0x000107c613fc(&UNK_11057e7e0,0x18,7);
        *(undefined **)(puStack_120 + 0x10) = puVar17;
        puVar18 = &UNK_11057e808;
        func_0x000107c613fc(&UNK_11057e808,0x20,7);
        *(code **)(puVar18 + 0x10) = FUN_1029d2e58;
        *(undefined **)(puVar18 + 0x18) = puStack_120;
        puVar21 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_a8 = (code *)0x1029d2e8c;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_101769670;
        puStack_b0 = &UNK_11057e820;
        ppuVar11 = &puStack_c8;
        puStack_a0 = puVar18;
        func_0x000107c60bc4(ppuVar11);
        puVar18 = puStack_a0;
        puVar19 = puVar17;
        func_0x000107c61174();
        func_0x000107c61574(puVar18);
        puStack_118 = &UNK_11057e858;
        func_0x000107c613fc(&UNK_11057e858,0x18,7);
        *(undefined **)(puStack_118 + 0x10) = puVar19;
        puVar18 = &UNK_11057e880;
        func_0x000107c613fc(&UNK_11057e880,0x20,7);
        *(undefined8 *)(puVar18 + 0x10) = 0x1029d2eac;
        *(undefined **)(puVar18 + 0x18) = puStack_118;
        pcStack_a8 = (code *)0x1029d3760;
        puStack_c8 = puVar21;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_100de6bdc;
        puStack_b0 = &UNK_11057e898;
        ppuVar14 = &puStack_c8;
        puStack_a0 = puVar18;
        func_0x000107c60bc4(ppuVar14);
        puVar18 = puStack_a0;
        func_0x000107c61174();
        func_0x000107c61574(puVar18);
        puStack_128 = &UNK_11057e8d0;
        func_0x000107c613fc(&UNK_11057e8d0,0x18,7);
        *(undefined **)(puStack_128 + 0x10) = puVar19;
        puVar18 = &UNK_11057e8f8;
        func_0x000107c613fc(&UNK_11057e8f8,0x20,7);
        *(undefined8 *)(puVar18 + 0x10) = 0x1029d2ee0;
        *(undefined **)(puVar18 + 0x18) = puStack_128;
        pcStack_a8 = (code *)0x1029d3764;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_100de6bdc;
        puStack_b0 = &UNK_11057e910;
        ppuVar20 = &puStack_c8;
        puStack_a0 = puVar18;
        func_0x000107c60bc4(ppuVar20);
        puVar18 = puStack_a0;
        func_0x000107c61174(puVar19);
        func_0x000107c61574(puVar18);
        func_0x000107c4c66c(uVar8);
        func_0x000107c60bd0(ppuVar20);
        func_0x000107c60bd0(ppuVar14);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(uVar8);
        pcStack_138 = FUN_1029d2e58;
        uStack_130 = 0x1029d2eac;
        uVar27 = 0x1029d2ee0;
      }
      func_0x000107c551e8(puVar16);
      puVar21 = PTR_PTR_1126aa7e0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar18 = &UNK_11057e768;
      uVar23 = 0x18;
      func_0x000107c613fc(&UNK_11057e768,0x18,7);
      *(undefined8 *)(puVar18 + 0x10) = 0;
      uVar8 = uVar7;
      func_0x000107c5aaf8();
      func_0x000107c61180();
      uVar15 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      if (*(long *)(lVar28 + 0x10) == 0) {
LAB_1029ce700:
        func_0x000107c6142c(uVar23);
      }
      else {
        func_0x000107c61434(lVar28);
        uVar8 = uVar23;
        func_0x000100029284();
        if ((uVar8 & 1) == 0) {
          func_0x000107c6142c(lVar28);
          goto LAB_1029ce700;
        }
        uVar22 = *(undefined8 *)(*(long *)(lVar28 + 0x38) + uVar15 * 8);
        func_0x000107c61174();
        func_0x000107c6142c(lVar28);
        func_0x000107c6142c(uVar23);
        puVar19 = &UNK_11057e790;
        func_0x000107c613fc(&UNK_11057e790,0x28,7);
        *(undefined **)(puVar19 + 0x10) = puVar18;
        *(undefined **)(puVar19 + 0x18) = puVar21;
        *(ulong *)(puVar19 + 0x20) = uVar6;
        pcStack_a8 = FUN_1029d2a84;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_10208ddac;
        puStack_b0 = &UNK_11057e7a8;
        ppuVar11 = &puStack_c8;
        puStack_a0 = puVar19;
        func_0x000107c60bc4(ppuVar11);
        puVar19 = puStack_a0;
        func_0x000107c6157c(puVar18);
        func_0x000107c61174(puVar21);
        func_0x000107c61174(uVar6);
        func_0x000107c61574(puVar19);
        func_0x000107c4c6bc(uVar22);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(uVar22);
      }
      func_0x000107c61428(puVar18 + 0x10,auStack_e0,0,0);
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d4();
      func_0x000107c52b98(puVar21);
      func_0x000107c61170(puVar19);
      func_0x000107c61174(puVar21);
      func_0x000107c52ba4(puVar16);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar21);
      func_0x000107c61170(puVar21);
      func_0x000107c61170(uVar7);
      func_0x000107c61574(puVar18);
      func_0x000107c6142c(lStack_90);
      lVar3 = lStack_80;
      func_0x000107c61574(puVar9);
      func_0x000107c6142c(lVar3);
      puVar9 = puVar10;
      func_0x000107c61544(puVar10,"",0x6a,0x16e,0x49,1);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar12);
      if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1029ce9e0);
        (*pcVar4)();
      }
      puVar9 = puVar13;
      func_0x000107c61544(puVar13,"",0x6a,0x170,0x1e,1);
      func_0x000107c61574(puVar13);
      func_0x000100d15e60(pcStack_138,puStack_120);
      func_0x000100d15e60(uStack_130,puStack_118);
      func_0x000100d15e60(uVar27,puStack_128);
      if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1029ce9e4);
        (*pcVar4)();
      }
      func_0x000107c61170(uVar6);
      uVar6 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar6) {
        FUN_1029cfa08(1 < *(ulong *)(puVar2 + 0x18),uVar6 + 1,1);
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar6 + 1;
      *(undefined **)(puVar2 + uVar6 * 8 + 0x20) = puVar16;
    } while (uVar29 != uVar5);
    func_0x000107c6142c(lVar28);
  }
  pbVar1 = (byte *)(unaff_x20 + _DAT_112ed4e98);
  uVar25 = 0x100;
  if ((pbVar1[1] & 1) == 0) {
    uVar25 = 0;
  }
  uVar24 = 0x10000;
  if ((pbVar1[2] & 1) == 0) {
    uVar24 = 0;
  }
  uVar26 = 0x1000000;
  if ((pbVar1[3] & 1) == 0) {
    uVar26 = 0;
  }
  uVar29 = 0x100;
  if ((pbVar1[0x11] & 1) == 0) {
    uVar29 = 0;
  }
  uVar5 = 0x10000;
  if ((pbVar1[0x12] & 1) == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x1000000;
  if ((pbVar1[0x13] & 1) == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x100000000;
  if ((pbVar1[0x14] & 1) == 0) {
    uVar7 = 0;
  }
  puVar9 = puVar2;
  FUN_1029d0264(puVar2,uVar25 | *pbVar1 & 1 | uVar24 | uVar26,*(undefined8 *)(pbVar1 + 8),
                uVar29 | (ulong)pbVar1[0x10] & 1 | uVar5 | uVar6 | uVar7);
  func_0x000107c6142c(puVar2);
  uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112ed4eb0);
  func_0x000107c5c734(uVar27);
  func_0x000107c61180();
  func_0x000107c5a3d0(puVar9);
  func_0x000107c615e8(uVar27);
  lVar28 = *(long *)(unaff_x20 + _DAT_112ed4e50);
  if (lVar28 != 0) {
    func_0x000107c61174();
    func_0x000107c5a588();
    func_0x000107c61170(lVar28);
  }
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 1029cea04; end: 1029cebc3;  */

undefined * FUN_1029cea04(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar2 = PTR___sypN_11034f1a8;
    puVar1 = PTR___syXlN_11034f1a0;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1029cebc4);
      (*pcVar3)();
    }
    puVar6 = puStack_58;
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c615f0();
        func_0x000107c6147c(auStack_78,&uStack_80,puVar1 + 8,puVar2 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar4 = uVar7;
        func_0x00010125fef0(uVar7,param_1);
        uStack_80 = uVar4;
        func_0x000107c6147c(auStack_78,&uStack_80,puVar1 + 8,puVar2 + 8,7);
        uVar4 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar4 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar4 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar4 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1029cebc4; end: 1029ceca3;  */

void FUN_1029cebc4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x21;
  undefined *puStack_38;
  
  puVar3 = *(undefined **)(param_1 + 0x10);
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar1 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar1 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar1 = param_2;
    }
    func_0x000107c60480();
  }
  if ((long)puVar3 <= (long)puVar1) {
    puVar1 = puVar3;
  }
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0x112e550f8;
    func_0x0001000285a8(0x112e550f8,&UNK_10da57230);
    func_0x000107c60498(puVar1,uVar2);
    puStack_38 = puVar1;
  }
  FUN_1029d0450(param_1,param_2,1,&puStack_38);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_1);
  if (unaff_x21 != 0) {
    func_0x000107c61574(puStack_38);
  }
  return;
}



/* Entry: 1029ceca4; end: 1029cee03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ceca4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed4e68);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  FUN_1029cce24(uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  if (param_2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ed4ed0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c41dac(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar4);
    }
  }
  lVar2 = _DAT_112fb4ad0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ed4e90);
  func_0x000107c61428(lVar3 + _DAT_112fb4ad0,auStack_68,0,0);
  lVar3 = lVar3 + lVar2;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = 0;
    if (param_2 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      uVar4 = param_1;
    }
    uVar5 = 0;
    if (param_4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar5 = param_3;
    }
    func_0x000107c3f67c(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 1029cee04; end: 1029cee37;  */

void FUN_1029cee04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029cee38; end: 1029cefaf; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029cef2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cef4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cef30) */
/* WARNING: Removing unreachable block (ram,0x0001029cef50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cee38(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4e90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4ea0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed4ea8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4eb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4eb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4ec0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4ec8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4ed0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4ed8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed4e48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4e98 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4e50));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed4e60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ed4e68 + 8))
  ;
  return;
}



/* Entry: 1029cefb0; end: 1029cefd3; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint onPillSelectedWithIdentifier:name:] */

/* WARNING: Possible PIC construction at 0x0001029cf1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cf1c8) */

void FUN_1029cefb0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_1029cefd4(param_3,uVar1,param_4,param_2,"onPillSelected(withIdentifier:name:)",&UNK_11057e388,
                FUN_1029d0034,&UNK_11057e3a0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029cefd4; end: 1029cf0f3;  */

void FUN_1029cefd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x0001000c10c0(param_5);
  func_0x000107c61180();
  puVar2 = &UNK_11057e360;
  func_0x000107c613fc(&UNK_11057e360,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(param_6,0x38,7);
  *(undefined **)(param_6 + 0x10) = puVar2;
  *(undefined8 *)(param_6 + 0x18) = param_1;
  *(undefined8 *)(param_6 + 0x20) = param_2;
  *(undefined8 *)(param_6 + 0x28) = param_3;
  *(undefined8 *)(param_6 + 0x30) = param_4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  uStack_78 = param_8;
  uStack_70 = param_7;
  lStack_68 = param_6;
  func_0x000107c60bc4(&puStack_90);
  lVar1 = lStack_68;
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(param_5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(param_5);
  return;
}



/* Entry: 1029cf0f4; end: 1029cf117; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint onPillSelectedDoubleTapWithIdentifier:name:] */

/* WARNING: Possible PIC construction at 0x0001029cf1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cf1c8) */

void FUN_1029cf0f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_1029cefd4(param_3,uVar1,param_4,param_2,"onPillSelectedDoubleTap(withIdentifier:name:)",
                &UNK_11057e3d8,FUN_1029d00e8,&UNK_11057e3f0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029cf118; end: 1029cf1e7;  */

/* WARNING: Possible PIC construction at 0x0001029cf1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cf1c8) */

void FUN_1029cf118(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_1029cefd4(param_3,uVar1,param_4,param_2,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029cf1e8; end: 1029cf283; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint onPillLongPressedWithIsContextual:identifier:name:] */

/* WARNING: Possible PIC construction at 0x0001029cf258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cf25c) */

void FUN_1029cf1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_5 != 0) {
    func_0x000107c5faec(param_5);
    uVar2 = param_2;
  }
  func_0x000107c61174(param_1);
  FUN_1029d0698(param_3,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1029cf284; end: 1029cf34f;  */

void FUN_1029cf284(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "onResetPicker()";
  func_0x0001000c10c0("onResetPicker()");
  func_0x000107c61180();
  puVar2 = &UNK_11057e360;
  func_0x000107c613fc(&UNK_11057e360,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_1029d07a0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11057e418;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1029cf350; end: 1029cf377; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint onResetPicker] */

void FUN_1029cf350(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029cf284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029cf378; end: 1029cf4bf;  */

/* WARNING: Possible PIC construction at 0x0001029cf48c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cf490) */
/* WARNING: Removing unreachable block (ram,0x0001029cf4bc) */
/* WARNING: Removing unreachable block (ram,0x0001029cf3f0) */
/* WARNING: Removing unreachable block (ram,0x0001029cf3dc) */
/* WARNING: Removing unreachable block (ram,0x0001029cf404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cf378(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ed4e90) + _DAT_112fb4ac0);
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed4e90) + _DAT_112fb4ac8);
  if (lVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3beb8;
  }
  else if (lVar3 == 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3bf58;
  }
  else if (lVar3 == 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3bef8;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3beb8;
  }
  func_0x000107c61174();
  func_0x000107c615f0(uVar4);
  func_0x000107c5fb14(ppuVar1);
  puVar2 = PTR_PTR_1126c27f8;
  func_0x000107c610f8(PTR_PTR_1126c27f8);
  func_0x000107c5fadc(ppuVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48f28(puVar2);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1029cf4c0; end: 1029cf4e7; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint onEditSelected] */

void FUN_1029cf4c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029cf378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029cf4e8; end: 1029cf74f;  */

/* WARNING: Possible PIC construction at 0x0001029cf544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cf648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cf728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cf64c) */
/* WARNING: Removing unreachable block (ram,0x0001029cf72c) */
/* WARNING: Removing unreachable block (ram,0x0001029cf74c) */
/* WARNING: Removing unreachable block (ram,0x0001029cf5ac) */
/* WARNING: Removing unreachable block (ram,0x0001029cf598) */
/* WARNING: Removing unreachable block (ram,0x0001029cf5c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cf4e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (*(char *)(unaff_x20 + _DAT_112ed4e98 + 0x13) == '\x01') {
    ppuVar1 = *(undefined ***)(unaff_x20 + _DAT_112ed4ec0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar2 = ppuVar1;
      func_0x000107c51bf8();
      if (((ulong)ppuVar2 & 1) == 0) {
        func_0x000107c58db0(ppuVar1);
        pcVar4 = "onCreateSelected()";
        func_0x0001000c10c0("onCreateSelected()");
        func_0x000107c61180();
        puVar3 = &UNK_11057e360;
        func_0x000107c613fc(&UNK_11057e360,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        pcStack_50 = FUN_1029d0860;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1000f6b44;
        puStack_58 = &UNK_11057e440;
        puStack_48 = puVar3;
        func_0x000107c60bc4(&puStack_70);
        func_0x000107c61574(puStack_48);
        func_0x000107c4e524(pcVar4);
        func_0x000107c60bd0(ppuVar5);
      }
      goto code_r0x000107c61170;
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ed4e90) + _DAT_112fb4ac0);
  lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed4e90) + _DAT_112fb4ac8);
  if (lVar6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3be98;
  }
  else if (lVar6 == 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3bf38;
  }
  else if (lVar6 == 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3bef8;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3beb8;
  }
  func_0x000107c61174();
  func_0x000107c615f0(uVar7);
  func_0x000107c5fb14(ppuVar1);
  puVar3 = PTR_PTR_1126c27f8;
  func_0x000107c610f8(PTR_PTR_1126c27f8);
  func_0x000107c5fadc(ppuVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48f28(puVar3);
  func_0x000107c615e8(uVar7);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1029cf750; end: 1029cf777; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint onCreateSelected] */

void FUN_1029cf750(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029cf4e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029cf778; end: 1029cf7cb; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint onScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cf778(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ed4ed0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c41cf4();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029cf7cc; end: 1029cf7d3; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1029cf7cc(void)

{
  return 0;
}



/* Entry: 1029cf7d4; end: 1029cf7df; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint pushToValdiMarshaller:] */

undefined8 FUN_1029cf7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c76c0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x000106080050();
  func_0x00010607ffd8();
  return param_3;
}



/* Entry: 1029cf7e0; end: 1029cf92f; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint listsEditWorkflowDidFinish] */

/* WARNING: Possible PIC construction at 0x0001029cf81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029cf838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cf820) */
/* WARNING: Removing unreachable block (ram,0x0001029cf83c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cf7e0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1029cf930; end: 1029cf98b; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint listsEditWorkflowDidDeleteList:] */

void FUN_1029cf930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x0001029cf864(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029cf98c; end: 1029cf98f; -[_TtC31ShortcutsCarouselImplementation27ShortcutsCarouselEntryPoint listsEditWorkflowDidUpdateListName:newListName:] */

void FUN_1029cf98c(void)

{
  return;
}



/* Entry: 1029cf990; end: 1029cfa07;  */

void FUN_1029cf990(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1029d365c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1029cfa08; end: 1029cfa7f;  */

void FUN_1029cfa08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1029cfa80();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1029cfa80; end: 1029cfd3b;  */

undefined *
FUN_1029cfa80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029cfbcc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_1029cf990(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1029d365c(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1029cfd3c; end: 1029cffd7;  */

void FUN_1029cfd3c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e550f8;
  func_0x0001000285a8(0x112e550f8,&UNK_10da57230);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1029cffa4:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1029cffd4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1029cffa4;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1029cffd8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1029cffd8; end: 1029cffff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029cffd8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5ab18(uVar2);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126c76a8;
  func_0x000107c610f8(PTR_PTR_1126c76a8);
  func_0x000107c49420();
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 1029d0000; end: 1029d0033;  */

void FUN_1029d0000(void)

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



/* Entry: 1029d0034; end: 1029d00b3;  */

void FUN_1029d0034(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1029ceca4(uVar2,uVar1,uVar3,uVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1029d00b4; end: 1029d00e7;  */

void FUN_1029d00b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029d00e8; end: 1029d0263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d00e8(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(ulong *)(unaff_x20 + 0x18);
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  if (uVar1 == 0) {
LAB_1029d0178:
    FUN_1029ceca4(uVar9,uVar1,lVar7,lVar8);
  }
  else {
    uVar6 = ((ulong *)(lVar3 + _DAT_112ed4e68))[1];
    if ((uVar6 == 0) ||
       ((uVar5 = *(ulong *)(lVar3 + _DAT_112ed4e68), uVar9 != uVar5 || uVar1 != uVar6 &&
        (uVar4 = uVar9, func_0x000107c605b8(uVar9,uVar1,uVar5,uVar6,0), (uVar4 & 1) == 0))))
    goto LAB_1029d0178;
  }
  lVar2 = _DAT_112fb4ad0;
  lVar10 = *(long *)(lVar3 + _DAT_112ed4e90);
  func_0x000107c61428(lVar10 + _DAT_112fb4ad0,auStack_80,0,0);
  lVar10 = lVar10 + lVar2;
  func_0x000107c61618();
  if (lVar10 == 0) goto LAB_1029d0240;
  if (uVar1 == 0) {
    uVar9 = 0;
    if (lVar8 != 0) goto LAB_1029d01e4;
LAB_1029d0200:
    lVar7 = 0;
  }
  else {
    func_0x000107c5fadc(uVar9,uVar1);
    if (lVar8 == 0) goto LAB_1029d0200;
LAB_1029d01e4:
    func_0x000107c5fadc(lVar7,lVar8);
  }
  func_0x000107c3f66c(lVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(lVar10);
  func_0x000107c61170(lVar3);
  lVar3 = lVar7;
LAB_1029d0240:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1029d0264; end: 1029d044f;  */

undefined * FUN_1029d0264(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126abc58;
  func_0x000107c610f8(PTR_PTR_1126abc58);
  uVar2 = 0;
  FUN_1029d365c(0,0x112e97c10,&PTR_PTR_1126aa7e8);
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c47478(puVar1);
  func_0x000107c61170(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54510(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54498(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5449c(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c544c0(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c53ec8(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54178(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54b1c(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5510c(puVar1);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 1029d0450; end: 1029d0697;  */

void FUN_1029d0450(long param_1,ulong param_2,uint param_3,long *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  
  uVar12 = *(ulong *)(param_1 + 0x10);
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  if (uVar12 != 0) {
    uVar17 = 0;
    uVar13 = param_2 & 0xffffffffffffff8;
    uVar2 = uVar13;
    if (0x7fffffffffffffff < param_2) {
      uVar2 = param_2;
    }
    puVar16 = (ulong *)(param_1 + 0x28);
    do {
      uVar3 = puVar16[-1];
      uVar4 = *puVar16;
      if (param_2 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar13 + 0x10);
      }
      else {
        uVar7 = uVar2;
        func_0x000107c60480();
      }
      if (uVar17 == uVar7) break;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar13 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1029d0684);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(param_2 + uVar17 * 8 + 0x20);
        func_0x000107c61434(uVar4);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61434(uVar4);
        uVar7 = uVar17;
        FUN_10241a5b0(uVar17,param_2);
      }
      lVar14 = *param_4;
      uVar8 = uVar3;
      uVar9 = uVar4;
      func_0x000100029284();
      lVar10 = *(long *)(lVar14 + 0x10);
      uVar11 = (ulong)~(uint)uVar9 & 1;
      lVar15 = lVar10 + uVar11;
      if (SCARRY8(lVar10,uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1029d0680);
        (*pcVar5)();
      }
      if (*(long *)(lVar14 + 0x18) < lVar15) {
        FUN_1029cfd3c(lVar15,param_3 & 1);
        uVar8 = uVar3;
        uVar11 = uVar4;
        func_0x000100029284();
        if (((uint)uVar9 & 1) != ((uint)uVar11 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1029d0698);
          (*pcVar5)();
        }
      }
      else if ((param_3 & 1) == 0) {
        func_0x0001029cfbcc();
      }
      lVar15 = *param_4;
      if ((uVar9 & 1) == 0) {
        lVar10 = lVar15 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        *(ulong *)(*(long *)(lVar15 + 0x38) + uVar8 * 8) = uVar7;
        if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1029d0688);
          (*pcVar5)();
        }
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        uVar6 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 8);
        *(ulong *)(*(long *)(lVar15 + 0x38) + uVar8 * 8) = uVar7;
        func_0x000107c61170(uVar6);
      }
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 2;
      param_3 = 1;
    } while (uVar12 != uVar17);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 1029d0698; end: 1029d079f;  */

void FUN_1029d0698(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if ((param_1 & 1) == 0) {
    pcVar1 = "onPillLongPressed(withIsContextual:identifier:name:)";
    func_0x0001000c10c0("onPillLongPressed(withIsContextual:identifier:name:)");
    func_0x000107c61180();
    puVar2 = &UNK_11057e360;
    func_0x000107c613fc(&UNK_11057e360,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_11057e538;
    func_0x000107c613fc(&UNK_11057e538,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    uStack_50 = 0x1029d0ec8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11057e550;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1029d07a0; end: 1029d085f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d07a0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + _DAT_112ed4e68);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1029cce24(uVar2,uVar3);
    func_0x000107c6142c(uVar3);
    lVar4 = _DAT_112fb4ad0;
    lVar6 = *(long *)(lVar5 + _DAT_112ed4e90);
    func_0x000107c61428(lVar6 + _DAT_112fb4ad0,auStack_60,0,0);
    lVar6 = lVar6 + lVar4;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x000107c3f678();
      func_0x000107c615e8(lVar6);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1029d0860; end: 1029d0bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d0860(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = 0x79616b6f;
    func_0x000107c5fadc(0x79616b6f,0xe400000000000000);
    lVar9 = lVar4;
    func_0x000107c312f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d0bb4);
      (*pcVar2)();
    }
    uVar10 = 0x6f54646e65534353;
    puVar5 = &UNK_11057e360;
    func_0x000107c613fc(&UNK_11057e360,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar3);
    pcStack_70 = FUN_1029d0d3c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100de205c;
    puStack_78 = &UNK_11057e500;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar7 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c6157c(puVar5);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar9);
    puVar1 = puStack_68;
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar1);
    lVar4 = -0x2fffffffffffffe6;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010f0d5d00);
    uVar11 = uVar10;
    func_0x000107c5fadc(0x6f54646e65534353,0xed0000737473694c);
    lVar9 = lVar4;
    uVar12 = uVar11;
    func_0x0001000f6108(lVar4,uVar11,0);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar11);
    if (lVar9 == 0) {
      lVar4 = 0;
      uVar12 = 0;
    }
    else {
      lVar4 = lVar9;
      func_0x000107c5faec(lVar9);
      func_0x000107c61170(lVar9);
    }
    lVar9 = -0x2fffffffffffffe0;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f0d5d20);
    func_0x000107c5fadc(0x6f54646e65534353,0xed0000737473694c);
    lVar8 = lVar9;
    uVar11 = uVar10;
    func_0x0001000f6108(lVar9,uVar10,0);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar10);
    if (lVar8 == 0) {
      lVar9 = 0;
      uVar11 = 0;
    }
    else {
      lVar9 = lVar8;
      func_0x000107c5faec(lVar8);
      func_0x000107c61170(lVar8);
    }
    lVar8 = 0x112d360a8;
    FUN_1029cf990(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x20) = puVar7;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar7);
    func_0x000100fe8774(lVar4,uVar12,lVar9,uVar11,lVar8);
    func_0x000107c3e2c0(*(undefined8 *)(*(long *)(lVar3 + _DAT_112ed4e90) + _DAT_112fb4ac0));
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1029d0bb4; end: 1029d0bd3;  */

void FUN_1029d0bb4(void)

{
  func_0x000107c61168(&PTR_PTR_11287a648);
  return;
}



/* Entry: 1029d0bd4; end: 1029d0bdf;  */

undefined8 * FUN_1029d0bd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1029d0be0; end: 1029d0c13;  */

undefined8 * FUN_1029d0be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1029d0c14; end: 1029d0c67;  */

undefined8 * FUN_1029d0c14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1029d0c68; end: 1029d0ca3;  */

undefined8 * FUN_1029d0c68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1029d0ca4; end: 1029d0d3b;  */

int FUN_1029d0ca4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1029d0d3c; end: 1029d140f;  */

/* WARNING: Removing unreachable block (ram,0x0001029d0ec4) */
/* WARNING: Removing unreachable block (ram,0x0001029d0de8) */
/* WARNING: Removing unreachable block (ram,0x0001029d0dd4) */
/* WARNING: Removing unreachable block (ram,0x0001029d0dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d0d3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c420a8(param_1,param_2,1,0);
  puVar4 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar4,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar1 + _DAT_112ed4e90) + _DAT_112fb4ac0);
    lVar5 = *(long *)(*(long *)(lVar1 + _DAT_112ed4e90) + _DAT_112fb4ac8);
    if (lVar5 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e3be98;
    }
    else if (lVar5 == 1) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e3bf38;
    }
    else if (lVar5 == 2) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e3bef8;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e3beb8;
    }
    func_0x000107c61174();
    func_0x000107c615f0(uVar6);
    func_0x000107c5fb14(ppuVar2);
    puVar3 = PTR_PTR_1126c27f8;
    func_0x000107c610f8(PTR_PTR_1126c27f8);
    func_0x000107c5fadc(ppuVar2,puVar4);
    func_0x000107c6142c(puVar4);
    func_0x000107c48f28(puVar3);
    func_0x000107c61170(ppuVar2);
    func_0x000107c615e8(uVar6);
    func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112ed4ed8));
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029d1410; end: 1029d143f;  */

void FUN_1029d1410(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1029d1440; end: 1029d1507;  */

void FUN_1029d1440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  pcStack_40 = FUN_1029d3560;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10120ce44;
  puStack_48 = &UNK_11057ec30;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4427c(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1029d1508; end: 1029d1bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d1508(undefined8 param_1,ulong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_c0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  uVar23 = param_2 >> 0x3e;
  if (uVar23 == 0) {
    uVar19 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar19 = param_2;
    }
    func_0x000107c60480();
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar19 != 0) {
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001029cfa44(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d1bd8);
      (*pcVar2)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      puVar22 = (undefined8 *)(param_2 + 0x20);
      do {
        puVar13 = puStack_90;
        uVar6 = *puVar22;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        uVar21 = *(ulong *)(puVar13 + 0x10);
        puStack_90 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar21) {
          func_0x0001029cfa44(1 < *(ulong *)(puVar13 + 0x18),uVar21 + 1,1);
        }
        *(ulong *)(puStack_90 + 0x10) = uVar21 + 1;
        *(undefined8 *)(puStack_90 + uVar21 * 8 + 0x20) = uVar6;
        uVar19 = uVar19 - 1;
        puVar13 = puStack_90;
        puVar22 = puVar22 + 1;
      } while (uVar19 != 0);
    }
    else {
      uVar21 = 0;
      do {
        puVar13 = puStack_90;
        uVar4 = uVar21;
        func_0x00010208dfe4(uVar21,param_2);
        uVar5 = uVar4;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        func_0x000107c615e8(uVar4);
        uVar4 = *(ulong *)(puVar13 + 0x10);
        puStack_90 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
          func_0x0001029cfa44(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
        }
        uVar21 = uVar21 + 1;
        *(ulong *)(puStack_90 + 0x10) = uVar4 + 1;
        *(ulong *)(puStack_90 + uVar4 * 8 + 0x20) = uVar5;
        puVar13 = puStack_90;
      } while (uVar19 != uVar21);
    }
  }
  lVar20 = *(long *)(lVar3 + _DAT_112ed4ed0);
  lVar17 = lVar20;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar17 != 0) {
    uVar6 = 0;
    FUN_1029d365c(0,0x112e97c20,&PTR_PTR_1126b1498);
    puVar7 = puVar13;
    func_0x000107c5fc48(puVar13,uVar6);
    func_0x000107c41c7c(lVar17);
    func_0x000107c615e8(lVar17);
    func_0x000107c61170(puVar7);
  }
  lVar17 = _DAT_112ed4e50;
  if (*(long *)(lVar3 + _DAT_112ed4e50) == 0) {
    if (uVar23 == 0) {
      uVar19 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar19 = param_2 & 0xffffffffffffff8;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar19 = param_2;
      }
      func_0x000107c60480();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
    if (uVar19 != 0) {
      pbVar1 = (byte *)(lVar3 + _DAT_112ed4e98);
      uVar15 = 0x100;
      if ((pbVar1[1] & 1) == 0) {
        uVar15 = 0;
      }
      uVar14 = 0x10000;
      if ((pbVar1[2] & 1) == 0) {
        uVar14 = 0;
      }
      uVar16 = 0x1000000;
      if ((pbVar1[3] & 1) == 0) {
        uVar16 = 0;
      }
      uVar19 = 0x100;
      if ((pbVar1[0x11] & 1) == 0) {
        uVar19 = 0;
      }
      uVar21 = 0x10000;
      if ((pbVar1[0x12] & 1) == 0) {
        uVar21 = 0;
      }
      uVar4 = 0x1000000;
      if ((pbVar1[0x13] & 1) == 0) {
        uVar4 = 0;
      }
      uVar5 = 0x100000000;
      if ((pbVar1[0x14] & 1) == 0) {
        uVar5 = 0;
      }
      FUN_1029d0264(puVar7,uVar15 | *pbVar1 & 1 | uVar14 | uVar16,*(undefined8 *)(pbVar1 + 8),
                    uVar19 | (ulong)pbVar1[0x10] & 1 | uVar21 | uVar4 | uVar5);
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112ed4eb0);
      func_0x000107c5c734(uVar6);
      func_0x000107c61180();
      func_0x000107c5a3d0(puVar7);
      func_0x000107c615e8(uVar6);
      puVar8 = PTR_PTR_1126abc60;
      func_0x000107c610f8();
      func_0x000107c49520();
      func_0x000107c61170(puVar7);
      uVar6 = *(undefined8 *)(lVar3 + lVar17);
      *(undefined **)(lVar3 + lVar17) = puVar8;
      func_0x000107c61174();
      func_0x000107c61170(uVar6);
      puVar7 = puVar8;
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (puVar7 != (undefined *)0x0) {
        puVar9 = &UNK_11057eba0;
        func_0x000107c613fc(&UNK_11057eba0,0x18,7);
        func_0x000107c61614(puVar9 + 0x10,puVar7);
        puVar10 = &UNK_11057e360;
        func_0x000107c613fc(&UNK_11057e360,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,lVar3);
        puVar11 = &UNK_11057ebc8;
        func_0x000107c613fc(&UNK_11057ebc8,0x20,7);
        *(undefined **)(puVar11 + 0x10) = puVar9;
        *(undefined **)(puVar11 + 0x18) = puVar10;
        pcStack_70 = FUN_1029d3410;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f6b44;
        puStack_78 = &UNK_11057ebe0;
        ppuVar12 = &puStack_90;
        puStack_68 = puVar11;
        func_0x000107c60bc4(ppuVar12);
        puVar10 = puStack_68;
        func_0x000107c6157c(puVar9);
        func_0x000107c61574(puVar10);
        func_0x000107c4dc58(puVar7);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61574(puVar9);
        func_0x000107c615e8(puVar7);
      }
      func_0x000107c61170(puVar8);
    }
  }
  FUN_1029cdfac(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar20 != 0) {
    uVar6 = 0;
    FUN_1029d365c(0,0x112e97c20,&PTR_PTR_1126b1498);
    puVar7 = puVar13;
    func_0x000107c5fc48(puVar13,uVar6);
    func_0x000107c41c90(lVar20);
    func_0x000107c615e8(lVar20);
    func_0x000107c61170(puVar7);
  }
  lVar20 = _DAT_112fb4ad0;
  lVar17 = *(long *)(lVar3 + _DAT_112ed4e90);
  func_0x000107c61428(lVar17 + _DAT_112fb4ad0,auStack_a8,0,0);
  lVar17 = lVar17 + lVar20;
  func_0x000107c61618();
  if (lVar17 == 0) {
    func_0x000107c6142c(puVar13);
  }
  else {
    uVar6 = 0;
    FUN_1029d365c(0,0x112e97c20,&PTR_PTR_1126b1498);
    puVar7 = puVar13;
    func_0x000107c5fc48(puVar13,uVar6);
    func_0x000107c6142c(puVar13);
    func_0x000107c3f680(lVar17);
    func_0x000107c615e8(lVar17);
    func_0x000107c61170(puVar7);
  }
  if (uVar23 == 0) {
    uVar23 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar23 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar23 = param_2;
    }
    func_0x000107c60480();
  }
  if (((uVar23 != 0) && ((*(byte *)(lVar3 + _DAT_112ed4e58) & 1) == 0)) &&
     (lVar17 = *(long *)(lVar3 + _DAT_112ed4e50), lVar17 != 0)) {
    *(undefined1 *)(lVar3 + _DAT_112ed4e58) = 1;
    lVar18 = *(long *)(lVar3 + _DAT_112ed4ed0);
    func_0x000107c61174();
    lVar20 = lVar18;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar20 != 0) {
      func_0x000107c41aac();
      func_0x000107c615e8(lVar20);
    }
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar18 != 0) {
      func_0x000107c41a04();
      func_0x000107c615e8(lVar18);
    }
    lVar20 = lVar17;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar20 == 0) {
      func_0x000107c61170(lVar17);
    }
    else {
      puVar13 = &UNK_11057e360;
      func_0x000107c613fc(&UNK_11057e360,0x18,7);
      func_0x000107c61614(puVar13 + 0x10,lVar3);
      pcStack_70 = FUN_1029d3184;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000b0c7c;
      puStack_78 = &UNK_11057eb68;
      ppuVar12 = &puStack_90;
      puStack_68 = puVar13;
      func_0x000107c60bc4(ppuVar12);
      func_0x000107c61574(puStack_68);
      func_0x000107c5e080(lVar20);
      func_0x000107c61170(lVar17);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c615e8(lVar20);
    }
  }
  func_0x000107c61170(lVar3);
  return;
}


