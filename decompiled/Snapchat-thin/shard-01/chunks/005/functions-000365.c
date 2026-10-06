/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011a440c; end: 1011a444f; -[SCChatDeepLinkProcessorPluginEntryPoint end] */

void FUN_1011a440c(undefined8 param_1)

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



/* Entry: 1011a4450; end: 1011a4727;  */

void FUN_1011a4450(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000019;
    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e1f90)) ||
       (func_0x000107c605b8(0xd000000000000019,0x800000010ef1e070,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561b0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
        uVar2 = 0xd000000000000013;
        func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10e5ad0)) ||
             (func_0x000107c605b8(0xd000000000000014,0x800000010ef1a530,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c571c8();
          }
          else {
            uVar2 = 0xd00000000000001b;
            if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d6a90)) &&
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "ChatDeepLinkProcessorPluginImplementation/SCChatDeepLinkProcessorPluginEntryPoint.swift"
                                  ,0x57,2,0x36,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a4728);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5666c();
          }
          goto LAB_1011a44dc;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c594bc();
    }
  }
LAB_1011a44dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011a4728; end: 1011a47d3; -[SCChatDeepLinkProcessorPluginEntryPoint setValue:forIvarName:] */

void FUN_1011a4728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011a4450(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011a47d4; end: 1011a4883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a47d4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d63cf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63cf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63d00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63d08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63d10,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d63d18) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011a4884; end: 1011a48a3; -[SCChatDeepLinkProcessorPluginEntryPoint init] */

void FUN_1011a4884(void)

{
  FUN_1011a47d4();
  return;
}



/* Entry: 1011a48a4; end: 1011a48d7;  */

void FUN_1011a48a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011a48d8; end: 1011a494f; -[SCChatDeepLinkProcessorPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a48d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d63cf0);
  func_0x000107c61610(param_1 + _DAT_112d63cf8);
  func_0x000107c61610(param_1 + _DAT_112d63d00);
  func_0x000107c61610(param_1 + _DAT_112d63d08);
  func_0x000107c61610(param_1 + _DAT_112d63d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63d18));
  return;
}



/* Entry: 1011a4950; end: 1011a496f;  */

void FUN_1011a4950(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4f30);
  return;
}



/* Entry: 1011a4970; end: 1011a49d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4970(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d63d48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d63d50) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011a49d4; end: 1011a49db; -[_TtC29ChatReplyChatActionMenuPlugin29ChatReplyChatActionMenuPlugin itemType] */

undefined8 FUN_1011a49d4(void)

{
  return 0xc;
}



/* Entry: 1011a49dc; end: 1011a49e3; -[_TtC29ChatReplyChatActionMenuPlugin29ChatReplyChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011a49dc(void)

{
  return 0;
}



/* Entry: 1011a49e4; end: 1011a4a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a49e4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112d63d50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c3f3f0();
    func_0x000107c615e8(uVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  lVar3 = param_1;
  func_0x000107c5d0f0();
  if (((0xf < lVar3) && (lVar3 != 0x10)) && (lVar3 == 0x24)) {
    func_0x000107c4a534(param_1);
  }
  return;
}



/* Entry: 1011a4a94; end: 1011a4d47; -[_TtC29ChatReplyChatActionMenuPlugin29ChatReplyChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_1011a49e4();
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1011a4d48; end: 1011a4d4f;  */

void FUN_1011a4d48(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar5 = &puStack_70;
  uVar8 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar3 = uVar7;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1011a5204();
  uVar6 = uVar3;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a9a0);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = &UNK_11038d400;
  func_0x000107c613fc(&UNK_11038d400,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar7);
  puVar4 = &UNK_11038d428;
  func_0x000107c613fc(&UNK_11038d428,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  pcStack_50 = FUN_1011a509c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038d440;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar5);
  *param_1 = puVar1;
  return;
}



/* Entry: 1011a4d50; end: 1011a4d93;  */

void FUN_1011a4d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3bed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a5e70;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d3bed0 = puVar1;
  return;
}



/* Entry: 1011a4d94; end: 1011a4edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4d94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar5 = param_2;
    func_0x000107c40258(param_2);
    func_0x000107c61180();
    uVar1 = uVar5;
    func_0x000107c5faec();
    puVar4 = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c3dc7c(param_2);
    func_0x000107c61180();
    uVar5 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    func_0x000104523880(0);
    func_0x000107c610f8();
    func_0x000107c61434(puVar3);
    func_0x000107c61434(puVar4);
    func_0x000104523374(uVar1,puVar3,0,uVar5,puVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112d63d48);
    puVar2 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar3);
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1011a4edc; end: 1011a4fe3; -[_TtC29ChatReplyChatActionMenuPlugin29ChatReplyChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011a4edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001000b637c(param_3);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_11038d3d8;
  func_0x000107c613fc(&UNK_11038d3d8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uVar4 = 0;
  FUN_1011a4d50(0);
  func_0x000107c61174(param_1);
  uVar1 = 0x1011a50c0;
  func_0x0001000d5158(0x1011a50c0,puVar3,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1011a4fe4; end: 1011a5043; -[_TtC29ChatReplyChatActionMenuPlugin29ChatReplyChatActionMenuPlugin init] */

void FUN_1011a4fe4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReplyChatActionMenuPlugin.ChatReplyChatActionMenuPlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a5010);
  (*pcVar1)();
}



/* Entry: 1011a5044; end: 1011a507b; -[_TtC29ChatReplyChatActionMenuPlugin29ChatReplyChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011a5060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a5064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a5044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d63d48));
  return;
}



/* Entry: 1011a507c; end: 1011a509b;  */

void FUN_1011a507c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5010);
  return;
}



/* Entry: 1011a509c; end: 1011a50c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a509c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar5 = auStack_58;
  func_0x000107c61428(lVar1 + 0x10,puVar5,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = uVar7;
    func_0x000107c40258(uVar7);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c3dc7c(uVar7);
    func_0x000107c61180();
    uVar2 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    func_0x000104523880(0);
    func_0x000107c610f8();
    func_0x000107c61434(puVar5);
    func_0x000107c61434(puVar6);
    func_0x000104523374(uVar3,puVar5,0,uVar2,puVar6);
    uVar7 = *(undefined8 *)(lVar1 + _DAT_112d63d48);
    puVar4 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c4d664(uVar7);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1011a50c4; end: 1011a51c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011a50c4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130835c0);
  func_0x000107c61174();
  uVar2 = param_3;
  func_0x000107c4cdcc();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_1011a507c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d63d48) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112d63d50) = uVar2;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(plVar5);
  return unaff_x20;
}



/* Entry: 1011a51c8; end: 1011a51e3;  */

void FUN_1011a51c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011a51e4; end: 1011a5203;  */

void FUN_1011a51e4(void)

{
  func_0x000107c61168(&PTR_PTR_112d63dc0);
  return;
}



/* Entry: 1011a5204; end: 1011a52cf;  */

undefined1  [16] FUN_1011a5204(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2a9d0);
  uVar3 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef2a9f0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a52d0);
  (*pcVar1)();
}



/* Entry: 1011a52d0; end: 1011a52db; -[SCChatReplyChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a52d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63e18;
  func_0x000107c61428(param_1 + _DAT_112d63e18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a52dc; end: 1011a52e7; -[SCChatReplyChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a52dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63e18;
  func_0x000107c61428(param_1 + _DAT_112d63e18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a52e8; end: 1011a52f3; -[SCChatReplyChatActionMenuPluginEntryPoint chatScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a52e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63e20;
  func_0x000107c61428(param_1 + _DAT_112d63e20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a52f4; end: 1011a52ff; -[SCChatReplyChatActionMenuPluginEntryPoint setChatScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a52f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63e20;
  func_0x000107c61428(param_1 + _DAT_112d63e20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a5300; end: 1011a530b; -[SCChatReplyChatActionMenuPluginEntryPoint messageRenderingPluginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a5300(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63e28;
  func_0x000107c61428(param_1 + _DAT_112d63e28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a530c; end: 1011a534f;  */

void FUN_1011a530c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011a5350; end: 1011a535b; -[SCChatReplyChatActionMenuPluginEntryPoint setMessageRenderingPluginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a5350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63e28;
  func_0x000107c61428(param_1 + _DAT_112d63e28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a535c; end: 1011a53af;  */

void FUN_1011a535c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a53b0; end: 1011a552f;  */

/* WARNING: Possible PIC construction at 0x0001011a54b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a54c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a550c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a54c8) */
/* WARNING: Removing unreachable block (ram,0x0001011a54b8) */
/* WARNING: Removing unreachable block (ram,0x0001011a5510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a53b0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f920();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4cdd0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_1011a51e4(0);
      func_0x000107c613fc();
      uVar3 = *(undefined8 *)(lVar2 + _DAT_1130835c0);
      func_0x000107c61174();
      func_0x000107c4cdcc();
      func_0x000107c61180();
      lVar4 = 0;
      FUN_1011a507c();
      lVar2 = lVar4;
      func_0x000107c610f8();
      *(undefined8 *)(lVar2 + _DAT_112d63d48) = uVar3;
      *(long *)(lVar2 + _DAT_112d63d50) = unaff_x20;
      lStack_60 = lVar2;
      lStack_58 = lVar4;
      func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
      func_0x000107c4fba8(*(undefined8 *)(lVar1 + _DAT_112f14b58));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011a5530; end: 1011a5557; -[SCChatReplyChatActionMenuPluginEntryPoint begin] */

void FUN_1011a5530(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011a53b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011a5558; end: 1011a559b; -[SCChatReplyChatActionMenuPluginEntryPoint end] */

void FUN_1011a5558(undefined8 param_1)

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



/* Entry: 1011a559c; end: 1011a57ab;  */

void FUN_1011a559c(long param_1,long param_2,long param_3)

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
    uVar2 = 0x706f635374616863;
    if (((param_2 == 0x706f635374616863) && (param_3 == -0x16ffffffffffff9b)) ||
       (func_0x000107c605b8(0x706f635374616863,0xe900000000000065,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c533bc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef10d55e0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001e,0x800000010ef2aa20,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ChatReplyChatActionMenuPlugin/SCChatReplyChatActionMenuPluginEntryPoint.swift"
                              ,0x4d,2,0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a57ac);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56648();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011a57ac; end: 1011a5857; -[SCChatReplyChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011a57ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011a559c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011a5858; end: 1011a58df; -[SCChatReplyChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a5858(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d63e18,0);
  func_0x000107c61614(param_1 + _DAT_112d63e20,0);
  func_0x000107c61614(param_1 + _DAT_112d63e28,0);
  *(undefined8 *)(param_1 + _DAT_112d63e30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011a58e0; end: 1011a5913;  */

void FUN_1011a58e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011a5914; end: 1011a596b; -[SCChatReplyChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a5914(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d63e18);
  func_0x000107c61610(param_1 + _DAT_112d63e20);
  func_0x000107c61610(param_1 + _DAT_112d63e28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63e30));
  return;
}



/* Entry: 1011a596c; end: 1011a598b;  */

void FUN_1011a596c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b50d8);
  return;
}



/* Entry: 1011a598c; end: 1011a5a9f;  */

void FUN_1011a598c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2ab10);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  puVar5 = puVar3;
  func_0x000107c4f7c0();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar5 != (undefined *)0x0) {
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a5aa0);
  (*pcVar1)();
}



/* Entry: 1011a5aa0; end: 1011a5aa7; -[_TtC24CopyChatActionMenuPlugin24CopyChatActionMenuPlugin itemType] */

undefined8 FUN_1011a5aa0(void)

{
  return 6;
}



/* Entry: 1011a5aa8; end: 1011a5aaf; -[_TtC24CopyChatActionMenuPlugin24CopyChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011a5aa8(void)

{
  return 2;
}



/* Entry: 1011a5ab0; end: 1011a5d33; -[_TtC24CopyChatActionMenuPlugin24CopyChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011a5ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011a7368(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011a5d34; end: 1011a60c7;  */

undefined ** FUN_1011a5d34(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0;
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0;
  pcStack_98 = FUN_1011a656c;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10006eb60;
  puStack_a0 = &UNK_11038d5b0;
  ppuVar2 = &puStack_b8;
  func_0x000107c60bc4(ppuVar2);
  func_0x000107c61574(puStack_90);
  puVar3 = &UNK_11038d5e8;
  func_0x000107c613fc(&UNK_11038d5e8,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_78;
  puVar4 = &UNK_11038d610;
  func_0x000107c613fc(&UNK_11038d610,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1011a77ac;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_98 = (code *)0x1011a7a3c;
  puStack_b8 = puVar12;
  uStack_b0 = 0x42000000;
  puStack_a8 = (undefined *)0x1011a7a34;
  puStack_a0 = &UNK_11038d628;
  ppuVar5 = &puStack_b8;
  puStack_90 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_90;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11038d660;
  func_0x000107c613fc(&UNK_11038d660,0x18,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_88;
  puVar7 = &UNK_11038d688;
  uVar14 = 0x20;
  func_0x000107c613fc(&UNK_11038d688,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1011a77b8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_98 = FUN_1011a77c0;
  puStack_b8 = puVar12;
  uStack_b0 = 0x42000000;
  puStack_a8 = (undefined *)0x1011a64f8;
  puStack_a0 = &UNK_11038d6a0;
  ppuVar8 = &puStack_b8;
  puStack_90 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar12 = puStack_90;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar12);
  func_0x000107c4c640(param_2);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar2);
  puVar12 = puStack_80;
  uVar11 = uStack_88;
  if (puStack_80 == (undefined *)0x0) {
    uVar14 = param_1;
    uVar10 = uStack_78;
    func_0x0001011a743c();
    uVar11 = uVar14;
    FUN_1011a75bc();
    FUN_1011a65f4(param_1,uVar14);
    puVar12 = &UNK_11038d6d8;
    func_0x000107c613fc(&UNK_11038d6d8,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = uVar11;
    *(undefined8 *)(puVar12 + 0x18) = uVar10;
    uVar11 = 0x112d63ea0;
    func_0x0001000285a8(0x112d63ea0,&UNK_10d9296e0);
    ppuVar2 = (undefined **)0x1011a77e0;
    func_0x0001000bfde0(0x1011a77e0,puVar12,uVar11);
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar12);
    func_0x000107c61170(uVar14);
  }
  else {
    puVar9 = puStack_80;
    func_0x000107c61434();
    FUN_1011a7c00();
    uVar10 = 0x112d63ef0;
    func_0x0001000285a8(0x112d63ef0,&UNK_10d9296f0);
    puStack_a8 = (undefined *)uVar11;
    puStack_a0 = puVar12;
    ppuVar2 = &puStack_b8;
    puStack_b8 = puVar9;
    uStack_b0 = uVar14;
    func_0x000100854cb0(ppuVar2,uVar10);
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(uVar14);
  }
  func_0x000107c6142c(puStack_80);
  uVar13 = 0;
  func_0x000107c61544(0,"",0x74,0x6e,0x30,1);
  func_0x000107c61574(puVar3);
  if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a60c0);
    (*pcVar1)();
  }
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x74,0x6f,0x14,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a60c4);
    (*pcVar1)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x74,0x70,0x19,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return ppuVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a60c8);
  (*pcVar1)();
}



/* Entry: 1011a60c8; end: 1011a6353;  */

undefined * FUN_1011a60c8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR_PTR_1126a5e70;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  if (param_4 != 0) {
    func_0x000107c61434(param_4);
    lVar3 = param_3;
    func_0x000107c5fb5c(param_3,param_4);
    if (lVar3 < 1) {
      func_0x000107c6142c(param_4);
    }
    else {
      uVar6 = 0;
      if (param_2 != 0) {
        func_0x000107c5fadc(param_1,param_2);
        uVar6 = param_1;
      }
      func_0x000107c59e18(puVar2);
      func_0x000107c61170(uVar6);
      uVar4 = 0xd000000000000011;
      func_0x000107c5fadc(0xd000000000000011,0x800000010ef2aad0);
      lVar3 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61538();
      lVar5 = lVar3;
      func_0x0001001830b8();
      func_0x000100ab5dc4(lVar3 + 0x20);
      lVar3 = lVar5;
      func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar5);
      uVar6 = uVar4;
      lVar5 = lVar3;
      func_0x000108543d00(uVar4,lVar3);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c5edb4(lVar9,uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c5ed70();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
      (**(code **)(lVar10 + 8))(lVar9,lVar1);
      func_0x000107c55204(puVar2);
      func_0x000107c61170(uVar6);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c59a2c(puVar2);
      func_0x000107c61170(puVar7);
      puVar7 = &UNK_11038d570;
      func_0x000107c613fc(&UNK_11038d570,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(long *)(puVar7 + 0x18) = param_4;
      pcStack_70 = FUN_1011a7788;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11038d588;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_68);
      func_0x000107c56ea0(puVar2);
      func_0x000107c60bd0(ppuVar8);
    }
  }
  return puVar2;
}



/* Entry: 1011a6354; end: 1011a63bf;  */

/* WARNING: Possible PIC construction at 0x0001011a63a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a63ac) */

void FUN_1011a6354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  func_0x000107c43d80();
  func_0x000107c61180();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59a00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011a63c0; end: 1011a63ef;  */

void FUN_1011a63c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1011a60c8(uVar1,param_2[1],param_2[2],param_2[3]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011a63f0; end: 1011a656b; -[_TtC24CopyChatActionMenuPlugin24CopyChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011a63f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001011a5b28(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011a656c; end: 1011a656f;  */

void FUN_1011a656c(void)

{
  return;
}



/* Entry: 1011a6570; end: 1011a65f3;  */

void FUN_1011a6570(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = param_2;
  lVar3 = param_2;
  func_0x000107c4f90c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5c82c();
    func_0x000107c61180();
    lVar2 = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  lVar1 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  lVar2 = param_3[1];
  *param_3 = lVar1;
  param_3[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1011a65f4; end: 1011a68a3;  */

undefined ** FUN_1011a65f4(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  
  puVar2 = param_1;
  lVar7 = param_2;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    puVar8 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    if (param_2 != 0) {
      ppuStack_78 = (undefined **)0x0;
      func_0x000107c61174();
      lVar3 = param_2;
      func_0x000107c4051c();
      func_0x000107c61180();
      puVar2 = &UNK_11038d700;
      func_0x000107c613fc(&UNK_11038d700,0x30,7);
      *(long *)(puVar2 + 0x10) = param_2;
      *(undefined **)(puVar2 + 0x18) = puVar8;
      *(long *)(puVar2 + 0x20) = lVar7;
      *(undefined ****)(puVar2 + 0x28) = &ppuStack_78;
      puVar8 = &UNK_11038d728;
      func_0x000107c613fc(&UNK_11038d728,0x20,7);
      *(code **)(puVar8 + 0x10) = FUN_1011a7818;
      *(undefined **)(puVar8 + 0x18) = puVar2;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = (code *)0x1011a7a40;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_a0 = 0x42000000;
      pcStack_98 = (code *)0x1011a7a38;
      puStack_90 = &UNK_11038d740;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar6);
      puVar8 = puStack_80;
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar8);
      puVar8 = &UNK_11038d520;
      func_0x000107c613fc(&UNK_11038d520,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar4 = &UNK_11038d778;
      func_0x000107c613fc(&UNK_11038d778,0x28,7);
      *(undefined ****)(puVar4 + 0x10) = &ppuStack_78;
      *(undefined **)(puVar4 + 0x18) = puVar8;
      *(undefined **)(puVar4 + 0x20) = param_1;
      puVar8 = &UNK_11038d7a0;
      func_0x000107c613fc(&UNK_11038d7a0,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x1011a7824;
      *(undefined **)(puVar8 + 0x18) = puVar4;
      pcStack_88 = FUN_1011a7830;
      puStack_a8 = puVar1;
      lStack_a0 = 0x42000000;
      pcStack_98 = FUN_1011a68f0;
      puStack_90 = &UNK_11038d7b8;
      ppuVar5 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar5);
      puVar8 = puStack_80;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar8);
      func_0x000107c4c6a0(lVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar3);
      ppuVar6 = ppuStack_78;
      if (ppuStack_78 == (undefined **)0x0) {
        func_0x0001000285a8(0x112d63ef8,&UNK_10dae35f0);
        puStack_a8 = (undefined *)0x0;
        lStack_a0 = 0;
        ppuVar6 = &puStack_a8;
        func_0x000100854cb0(ppuVar6);
      }
      else {
        func_0x000107c6157c(ppuStack_78);
      }
      func_0x000107c61170(param_2);
      ppuVar5 = ppuStack_78;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(ppuVar5);
      return ppuVar6;
    }
  }
  func_0x0001000285a8(0x112d63ef8,&UNK_10dae35f0);
  ppuVar6 = &puStack_a8;
  puStack_a8 = puVar8;
  lStack_a0 = lVar7;
  func_0x000100854cb0(ppuVar6);
  func_0x000107c6142c(lVar7);
  return ppuVar6;
}



/* Entry: 1011a68a4; end: 1011a68ef;  */

void FUN_1011a68a4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_2;
  if (param_1 == 1) {
    func_0x0001011a7d98();
  }
  else {
    if (param_1 != 0) {
      return;
    }
    func_0x0001011a7ccc();
  }
  lVar2 = param_2[1];
  *param_2 = param_1;
  param_2[1] = (long)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1011a68f0; end: 1011a6dbb;  */

void FUN_1011a68f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5edb4(puVar3,param_2);
  (*pcVar1)(puVar3,param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 1011a6dbc; end: 1011a6eef;  */

void FUN_1011a6dbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_80;
  uVar7 = *param_2;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar4 = &UNK_11038d7f0;
  func_0x000107c613fc(&UNK_11038d7f0,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_50;
  puVar5 = &UNK_11038d818;
  func_0x000107c613fc(&UNK_11038d818,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1011a7850;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_60 = FUN_1011a7858;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1011a6f3c;
  puStack_68 = &UNK_11038d830;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uVar7);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_48;
  uVar7 = uStack_50;
  func_0x000107c61574(puVar4);
  *param_1 = uVar7;
  param_1[1] = uVar2;
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x74,0xdc,0x2b,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011a6ef0);
  (*pcVar3)();
}



/* Entry: 1011a6ef0; end: 1011a6f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a6ef0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11301afe8);
    uVar1 = ((undefined8 *)(param_1 + _DAT_11301afe8))[1];
    func_0x000107c61434();
  }
  uVar2 = param_2[1];
  *param_2 = uVar3;
  param_2[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1011a6f3c; end: 1011a6f7b;  */

void FUN_1011a6f3c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1011a6f7c; end: 1011a6fdb; -[_TtC24CopyChatActionMenuPlugin24CopyChatActionMenuPlugin init] */

void FUN_1011a6f7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CopyChatActionMenuPlugin.CopyChatActionMenuPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a6fa8);
  (*pcVar1)();
}



/* Entry: 1011a6fdc; end: 1011a7013; -[_TtC24CopyChatActionMenuPlugin24CopyChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011a6ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a6ffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a6fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63e60));
  return;
}



/* Entry: 1011a7014; end: 1011a7033;  */

void FUN_1011a7014(void)

{
  func_0x000107c61168(&PTR_PTR_1127b51a8);
  return;
}



/* Entry: 1011a7034; end: 1011a703b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a7034(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d63ef0,&UNK_10d9296f0);
    func_0x000104886440();
  }
  else {
    FUN_1011a5d34(param_1,*(undefined8 *)(param_2 + _DAT_112f14b98));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011a703c; end: 1011a7063;  */

void FUN_1011a703c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 1011a7064; end: 1011a7227;  */

ulong FUN_1011a7064(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a7148);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a714c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c6ab0;
    func_0x000107c61168(PTR_PTR_1126c6ab0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c6ab0;
    func_0x000107c61168(PTR_PTR_1126c6ab0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001011a794c(0,0x112d63f08,&PTR_PTR_1126c6ab0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a7228);
  (*pcVar2)();
}



/* Entry: 1011a7228; end: 1011a7367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1011a7228(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_41;
  
  uStack_41 = 0;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112f14b98);
  puVar4 = &UNK_11038d958;
  func_0x000107c613fc(&UNK_11038d958,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_41;
  puVar5 = &UNK_11038d980;
  func_0x000107c613fc(&UNK_11038d980,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1011a798c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x1011a7a30;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x1011a64f8;
  puStack_60 = &UNK_11038d998;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c640(uVar7);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_41;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x74,0x5d,0x19,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011a7368);
  (*pcVar3)();
}



/* Entry: 1011a7368; end: 1011a75bb;  */

undefined * FUN_1011a7368(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = param_2;
  FUN_1011a7228();
  if ((param_2 & 1) == 0) {
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb5c(lVar1,uVar4);
      func_0x000107c6142c(uVar4);
    }
  }
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 1011a75bc; end: 1011a7787;  */

undefined1  [16] FUN_1011a75bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  code *pcVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar3 = param_1;
  FUN_1011a7c00();
  lStack_70 = lVar3;
  uStack_68 = param_2;
  if (param_1 == 0) {
    pcVar8 = (code *)0x0;
    pcVar10 = (code *)0x0;
    puVar9 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c4051c(param_1);
    func_0x000107c61180();
    puVar4 = &UNK_11038d868;
    func_0x000107c613fc(&UNK_11038d868,0x18,7);
    *(long **)(puVar4 + 0x10) = &lStack_70;
    puVar9 = &UNK_11038d890;
    func_0x000107c613fc(&UNK_11038d890,0x20,7);
    pcVar8 = FUN_1011a7918;
    *(code **)(puVar9 + 0x10) = FUN_1011a7918;
    *(undefined **)(puVar9 + 0x18) = puVar4;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x1011a7a44;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x1011a7a38;
    puStack_88 = &UNK_11038d8a8;
    puStack_78 = puVar9;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    puVar9 = &UNK_11038d8e0;
    func_0x000107c613fc(&UNK_11038d8e0,0x18,7);
    *(long **)(puVar9 + 0x10) = &lStack_70;
    puVar6 = &UNK_11038d908;
    func_0x000107c613fc(&UNK_11038d908,0x20,7);
    pcVar10 = FUN_1011a7920;
    *(code **)(puVar6 + 0x10) = FUN_1011a7920;
    *(undefined **)(puVar6 + 0x18) = puVar9;
    uStack_80 = 0x1011a7a2c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1011a68f0;
    puStack_88 = &UNK_11038d920;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c4c6a0(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(param_1);
  }
  uVar2 = uStack_68;
  lVar3 = lStack_70;
  FUN_100ca5ecc(pcVar8,puVar4);
  FUN_100ca5ecc(pcVar10,puVar9);
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = lVar3;
  return auVar11;
}



/* Entry: 1011a7788; end: 1011a77bf;  */

/* WARNING: Possible PIC construction at 0x0001011a63a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a63ac) */

void FUN_1011a7788(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  func_0x000107c43d80();
  func_0x000107c61180();
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c59a00(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1011a77c0; end: 1011a7817;  */

void FUN_1011a77c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011a7818; end: 1011a782f;  */

void FUN_1011a7818(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar8 = *(ulong *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x28);
  puVar5 = &uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_1 < 2) {
    uVar7 = uVar3;
    uVar10 = uVar6;
    func_0x000107c4f888();
    if (SCARRY8(uVar3,uVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a6b18);
      (*pcVar2)();
    }
    uVar11 = uVar8;
    func_0x000107c5fb5c(uVar8,uVar6);
    if ((long)(uVar3 + uVar7) <= (long)uVar11) {
      func_0x000107c61434(uVar6);
      uVar9 = uVar6;
      FUN_1011a7878(uVar3,uVar8,uVar6);
      func_0x000107c6142c(uVar6);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a6b1c);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c601a8(uVar3,uVar7,uVar8,uVar3,uVar8,uVar9,uVar10);
      uVar11 = uVar8;
      if (((uint)uVar7 & 0xff) != 1) {
        uVar11 = uVar4;
      }
      if (uVar11 >> 0xe < uVar3 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a6b20);
        (*pcVar2)();
      }
      uVar7 = uVar3;
      func_0x000107c601b8(uVar3,uVar11,uVar3,uVar8,uVar9,uVar10);
      func_0x000107c6142c(uVar10);
      func_0x000107c5fb2c(uVar3,uVar11,uVar7,uVar8);
      func_0x000107c6142c(uVar8);
      uStack_60 = uVar3;
      uStack_58 = uVar11;
      goto LAB_1011a6ac0;
    }
  }
  uVar11 = 0;
LAB_1011a6ac0:
  func_0x0001000285a8(0x112d63ef8,&UNK_10dae35f0);
  func_0x000100854cb0();
  func_0x000107c6142c(uVar11);
  uVar6 = *puVar1;
  *puVar1 = puVar5;
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1011a7830; end: 1011a784f;  */

void FUN_1011a7830(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011a7850; end: 1011a7857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a7850(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11301afe8);
    uVar1 = ((undefined8 *)(param_1 + _DAT_11301afe8))[1];
    func_0x000107c61434();
  }
  uVar3 = puVar2[1];
  *puVar2 = uVar4;
  puVar2[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1011a7858; end: 1011a7877;  */

void FUN_1011a7858(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011a7878; end: 1011a7917;  */

void FUN_1011a7878(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011a7914);
    (*pcVar3)();
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  uVar5 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar6 = 7;
  if (uVar5 == 0) {
    uVar6 = 0xb;
  }
  uVar6 = uVar6 | uVar1 << 0x10;
  uVar4 = 0xf;
  func_0x000107c5fb68(0xf,param_1,uVar6,param_2,param_3);
  uVar2 = uVar6;
  if (((uint)param_1 & 0xff) != 1) {
    uVar2 = uVar4;
  }
  if (uVar2 >> 0xe <= uVar1 << 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb7a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_11034db08)(uVar2,uVar6,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011a7918);
  (*pcVar3)();
}



/* Entry: 1011a7918; end: 1011a791f;  */

void FUN_1011a7918(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  plVar1 = plVar2;
  if (param_1 == 1) {
    func_0x0001011a7d98();
  }
  else {
    if (param_1 != 0) {
      return;
    }
    func_0x0001011a7ccc();
  }
  lVar3 = plVar2[1];
  *plVar2 = param_1;
  plVar2[1] = (long)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 1011a7920; end: 1011a798b;  */

void FUN_1011a7920(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x0001011a7e64();
  uVar1 = puVar2[1];
  *puVar2 = param_1;
  puVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1011a798c; end: 1011a7993;  */

void FUN_1011a798c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 != 0) {
    lVar1 = param_2;
    lVar3 = param_2;
    func_0x000107c4f90c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5c82c();
      func_0x000107c61180();
      lVar1 = param_2;
      if (param_2 == 0) {
        return;
      }
    }
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    func_0x000107c5fb5c(lVar2,lVar3);
    func_0x000107c6142c(lVar3);
    *(bool *)uVar4 = 0 < lVar2;
  }
  return;
}



/* Entry: 1011a7994; end: 1011a79e3;  */

void FUN_1011a7994(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d63f10 != 0) {
    return;
  }
  puVar1 = &UNK_11038d9d0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d63f10 = param_1;
  return;
}



/* Entry: 1011a79e4; end: 1011a7a47;  */

void FUN_1011a79e4(long param_1,long param_2)

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



/* Entry: 1011a7a48; end: 1011a7aa7;  */

undefined8 FUN_1011a7a48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1011a7ac4(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1011a7aa8; end: 1011a7ac3;  */

void FUN_1011a7aa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011a7ac4; end: 1011a7bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a7ac4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  func_0x0001000285a8(0x112d63fb0,&UNK_10d929768);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301af98);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d63fb8,&UNK_10d929770);
  func_0x000107c613fc();
  pcVar3 = FUN_1011a598c;
  func_0x0001000bdd8c(FUN_1011a598c,0);
  lVar4 = 0;
  FUN_1011a7014();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d63e60) = uVar2;
  *(code **)(lVar5 + _DAT_112d63e68) = pcVar3;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 1011a7be0; end: 1011a7bff;  */

void FUN_1011a7be0(void)

{
  func_0x000107c61168(&PTR_PTR_112d63f58);
  return;
}



/* Entry: 1011a7c00; end: 1011a7f2f;  */

undefined1  [16] FUN_1011a7c00(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef2ab40);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef2ab60);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a7ccc);
  (*pcVar1)();
}



/* Entry: 1011a7f30; end: 1011a7f5f;  */

void FUN_1011a7f30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011a7f60; end: 1011a7f6b; -[SCCopyChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a7f60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64058;
  func_0x000107c61428(param_1 + _DAT_112d64058,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a7f6c; end: 1011a7f77; -[SCCopyChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a7f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64058;
  func_0x000107c61428(param_1 + _DAT_112d64058,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a7f78; end: 1011a7f83; -[SCCopyChatActionMenuPluginEntryPoint urlPreviewServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a7f78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64060;
  func_0x000107c61428(param_1 + _DAT_112d64060,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a7f84; end: 1011a7fc7;  */

void FUN_1011a7f84(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011a7fc8; end: 1011a7fd3; -[SCCopyChatActionMenuPluginEntryPoint setUrlPreviewServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a7fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64060;
  func_0x000107c61428(param_1 + _DAT_112d64060,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a7fd4; end: 1011a8027;  */

void FUN_1011a7fd4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a8028; end: 1011a80eb; -[SCCopyChatActionMenuPluginEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001011a8098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a80b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a809c) */
/* WARNING: Removing unreachable block (ram,0x0001011a80bc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1011a8028(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c5d7f8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      FUN_1011a7be0(0);
      func_0x000107c613fc();
      FUN_1011a7ac4(lVar1,lVar2);
      param_1 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011a80ec; end: 1011a812f; -[SCCopyChatActionMenuPluginEntryPoint end] */

void FUN_1011a80ec(undefined8 param_1)

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



/* Entry: 1011a8130; end: 1011a82c7;  */

void FUN_1011a8130(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10dfae0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef20520,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CopyChatActionMenuPlugin/SCCopyChatActionMenuPluginEntryPoint.swift",
                            0x43,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a82c8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a27c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011a82c8; end: 1011a8373; -[SCCopyChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011a82c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011a8130(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011a8374; end: 1011a83e7; -[SCCopyChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a8374(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d64058,0);
  func_0x000107c61614(param_1 + _DAT_112d64060,0);
  *(undefined8 *)(param_1 + _DAT_112d64068) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011a83e8; end: 1011a841b;  */

void FUN_1011a83e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011a841c; end: 1011a8463; -[SCCopyChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a841c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d64058);
  func_0x000107c61610(param_1 + _DAT_112d64060);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64068));
  return;
}



/* Entry: 1011a8464; end: 1011a8483;  */

void FUN_1011a8464(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5270);
  return;
}


