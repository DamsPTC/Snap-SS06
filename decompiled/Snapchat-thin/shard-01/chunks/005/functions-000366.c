/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011a8484; end: 1011a84cb; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a8484(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64098;
  func_0x000107c61428(param_1 + _DAT_112d64098,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a84cc; end: 1011a8523; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a84cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64098;
  func_0x000107c61428(param_1 + _DAT_112d64098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a8524; end: 1011a852b; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin itemType] */

undefined8 FUN_1011a8524(void)

{
  return 0x14;
}



/* Entry: 1011a852c; end: 1011a8533; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011a852c(void)

{
  return 2;
}



/* Entry: 1011a8534; end: 1011a85a7; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011a8534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011a8b94(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011a85a8; end: 1011a876b;  */

void FUN_1011a85a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar3 = param_3;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1011a8ee4();
  uVar5 = uVar3;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  func_0x0001011a8fb0();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59a80(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,0x800000010ef2ac90);
  func_0x000107c55204(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2acf0);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = &UNK_11038dac0;
  func_0x000107c613fc(&UNK_11038dac0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  pcStack_50 = FUN_1011a8d6c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038dad8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1011a876c; end: 1011a87bf;  */

void FUN_1011a876c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1011a87c0();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1011a87c0; end: 1011a88c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a87c0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64098;
  func_0x000107c61428(unaff_x20 + _DAT_112d64098,auStack_48,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x000107c5d184();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112d640a0);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (lVar3 != 0) {
      func_0x000100513914(0);
      func_0x000107c610f8();
      func_0x000107c615f4(lVar3,2);
      func_0x000107c61174();
      uVar2 = 0x17;
      func_0x000103c082bc(0x17,lVar3);
      func_0x000107c42c1c(lVar4);
      func_0x000107c615ec(lVar3,2);
      func_0x000107c61170(uVar2);
    }
  }
  else {
    func_0x000107c61170();
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1011a88c8; end: 1011a89cf; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011a88c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  puVar3 = &UNK_11038da98;
  func_0x000107c613fc(&UNK_11038da98,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uVar4 = 0;
  FUN_1011a4d50(0);
  func_0x000107c61174(param_1);
  uVar1 = 0x1011a8d90;
  func_0x0001000d5158(0x1011a8d90,puVar3,uVar4);
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



/* Entry: 1011a89d0; end: 1011a8a2f; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin init] */

void FUN_1011a89d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateAvatarChatActionMenuPlugin.CreateAvatarChatActionMenuPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a89fc);
  (*pcVar1)();
}



/* Entry: 1011a8a30; end: 1011a8b1b; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011a8a30(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d640a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d640a0));
  param_1 = param_1 + _DAT_112d64098;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011a8b1c; end: 1011a8b43; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin dismissPresentedView] */

void FUN_1011a8b1c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001011a8a78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011a8b44; end: 1011a8b93; -[_TtC32CreateAvatarChatActionMenuPlugin32CreateAvatarChatActionMenuPlugin bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_1011a8b44(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1011a8ca8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1011a8b94; end: 1011a8c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011a8b94(int param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d640a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar3,param_2,puVar4);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4a2c8();
    if (param_1 != 0) {
      lVar2 = lVar1;
      func_0x000107c41050();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c61170();
      }
    }
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar3,param_2,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1011a8ca0; end: 1011a8ca7;  */

void FUN_1011a8ca0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar3 = uVar6;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1011a8ee4();
  uVar5 = uVar3;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  func_0x0001011a8fb0();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59a80(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,0x800000010ef2ac90);
  func_0x000107c55204(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2acf0);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = &UNK_11038dac0;
  func_0x000107c613fc(&UNK_11038dac0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar6);
  pcStack_50 = FUN_1011a8d6c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038dad8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1011a8ca8; end: 1011a8d4b;  */

/* WARNING: Possible PIC construction at 0x0001011a8ce8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a8cec) */
/* WARNING: Removing unreachable block (ram,0x0001011a8d00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a8ca8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d640a0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1011a8d4c; end: 1011a8d6b;  */

void FUN_1011a8d4c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5338);
  return;
}



/* Entry: 1011a8d6c; end: 1011a8d93;  */

void FUN_1011a8d6c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1011a87c0();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011a8d94; end: 1011a8ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011a8d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  func_0x000107c613fc();
  uVar2 = param_3;
  func_0x000107c3e980();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_1011a8d4c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112d64098,0);
  *(undefined8 *)(lVar4 + _DAT_112d640a8) = uVar2;
  *(undefined8 *)(lVar4 + _DAT_112d640a0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_60,puVar1);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(plVar5);
  return unaff_x20;
}



/* Entry: 1011a8ea8; end: 1011a8ec3;  */

void FUN_1011a8ea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011a8ec4; end: 1011a8ee3;  */

void FUN_1011a8ec4(void)

{
  func_0x000107c61168(&PTR_PTR_112d64118);
  return;
}



/* Entry: 1011a8ee4; end: 1011a907f;  */

undefined1  [16] FUN_1011a8ee4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2ad80);
  uVar3 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010ef2ad50);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a8fb0);
  (*pcVar1)();
}



/* Entry: 1011a9080; end: 1011a908b; -[SCCreateAvatarChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9080(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64170;
  func_0x000107c61428(param_1 + _DAT_112d64170,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a908c; end: 1011a9097; -[SCCreateAvatarChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a908c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64170;
  func_0x000107c61428(param_1 + _DAT_112d64170,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a9098; end: 1011a90a3; -[SCCreateAvatarChatActionMenuPluginEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9098(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64178;
  func_0x000107c61428(param_1 + _DAT_112d64178,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a90a4; end: 1011a90e7;  */

void FUN_1011a90a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011a90e8; end: 1011a90f3; -[SCCreateAvatarChatActionMenuPluginEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a90e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64178;
  func_0x000107c61428(param_1 + _DAT_112d64178,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a90f4; end: 1011a9147;  */

void FUN_1011a90f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a9148; end: 1011a918f; -[SCCreateAvatarChatActionMenuPluginEntryPoint bitmojiAvatarBuilderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9148(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64180;
  func_0x000107c61428(param_1 + _DAT_112d64180,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011a9190; end: 1011a91f3; -[SCCreateAvatarChatActionMenuPluginEntryPoint setBitmojiAvatarBuilderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9190(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64180;
  func_0x000107c61428(param_1 + _DAT_112d64180,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011a91f4; end: 1011a9387;  */

/* WARNING: Possible PIC construction at 0x0001011a930c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a931c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a9364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a9320) */
/* WARNING: Removing unreachable block (ram,0x0001011a9310) */
/* WARNING: Removing unreachable block (ram,0x0001011a9368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a91f4(void)

{
  undefined *puVar1;
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
  lVar3 = unaff_x20;
  func_0x000107c3e974();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5d9b4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_1011a8ec4(0);
      func_0x000107c613fc();
      func_0x000107c3e980();
      func_0x000107c61180();
      lVar4 = 0;
      FUN_1011a8d4c();
      lVar5 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61614(lVar5 + _DAT_112d64098,0);
      *(long *)(lVar5 + _DAT_112d640a8) = unaff_x20;
      *(long *)(lVar5 + _DAT_112d640a0) = lVar3;
      puVar1 = PTR_s_init_1125d9248;
      lStack_60 = lVar5;
      lStack_58 = lVar4;
      func_0x000107c61174(lVar3);
      func_0x000107c61154(&lStack_60,puVar1);
      func_0x000107c4fba8(*(undefined8 *)(lVar2 + _DAT_112f14b58));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011a9388; end: 1011a93af; -[SCCreateAvatarChatActionMenuPluginEntryPoint begin] */

void FUN_1011a9388(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011a91f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011a93b0; end: 1011a93f3; -[SCCreateAvatarChatActionMenuPluginEntryPoint end] */

void FUN_1011a93b0(undefined8 param_1)

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



/* Entry: 1011a93f4; end: 1011a95f7;  */

void FUN_1011a93f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10d5260)) &&
           (func_0x000107c605b8(0xd000000000000020,0x800000010ef2ada0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CreateAvatarChatActionMenuPlugin/SCCreateAvatarChatActionMenuPluginEntryPoint.swift"
                              ,0x53,2,0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a95f8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52cb0();
        goto LAB_1011a9480;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a368();
  }
LAB_1011a9480:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011a95f8; end: 1011a96a3; -[SCCreateAvatarChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011a95f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011a93f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011a96a4; end: 1011a9723; -[SCCreateAvatarChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a96a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d64170,0);
  func_0x000107c61614(param_1 + _DAT_112d64178,0);
  *(undefined8 *)(param_1 + _DAT_112d64180) = 0;
  *(undefined8 *)(param_1 + _DAT_112d64188) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011a9724; end: 1011a9757;  */

void FUN_1011a9724(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011a9758; end: 1011a97af; -[SCCreateAvatarChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9758(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d64170);
  func_0x000107c61610(param_1 + _DAT_112d64178);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d64180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64188));
  return;
}



/* Entry: 1011a97b0; end: 1011a97cf;  */

void FUN_1011a97b0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5408);
  return;
}



/* Entry: 1011a97d0; end: 1011a98ff;  */

bool FUN_1011a97d0(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a98f0);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a98f4);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a98f8);
    (*pcVar1)();
  }
  lVar2 = (long)param_1 * 1000;
  if (SUB168(SEXT816((long)param_1) * SEXT816(1000),8) == lVar2 >> 0x3f) {
    func_0x000107c4ce20();
    func_0x000107c61180();
    lVar3 = param_2;
    func_0x000107c40c30();
    func_0x000107c61170(param_2);
    if (!SBORROW8(lVar2,lVar3)) {
      return lVar2 - lVar3 < 0x493e1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a9900);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a98fc);
  (*pcVar1)();
}



/* Entry: 1011a9900; end: 1011a991f; -[_TtC24EditChatActionMenuPlugin24EditChatActionMenuPlugin chatInputContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9900(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d641b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a9920; end: 1011a9933; -[_TtC24EditChatActionMenuPlugin24EditChatActionMenuPlugin setChatInputContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9920(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d641b8,param_3);
  return;
}



/* Entry: 1011a9934; end: 1011a9993; -[_TtC24EditChatActionMenuPlugin24EditChatActionMenuPlugin init] */

void FUN_1011a9934(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EditChatActionMenuPlugin.EditChatActionMenuPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a9960);
  (*pcVar1)();
}



/* Entry: 1011a9994; end: 1011a99db; -[_TtC24EditChatActionMenuPlugin24EditChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9994(long param_1)

{
  FUN_100ca601c(param_1 + _DAT_112d641b8);
  FUN_100ca601c(param_1 + _DAT_112d641c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d641c8));
  return;
}



/* Entry: 1011a99dc; end: 1011a99e3; -[_TtC24EditChatActionMenuPlugin24EditChatActionMenuPlugin itemType] */

undefined8 FUN_1011a99dc(void)

{
  return 0xd;
}



/* Entry: 1011a99e4; end: 1011a99eb; -[_TtC24EditChatActionMenuPlugin24EditChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011a99e4(void)

{
  return 0;
}



/* Entry: 1011a99ec; end: 1011a9bdb; -[_TtC24EditChatActionMenuPlugin24EditChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011a99ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x000107c4ce20();
  func_0x000107c61180();
  func_0x000107c49c9c();
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1011a9bdc; end: 1011a9ea3;  */

undefined * FUN_1011a9bdc(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar8 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return (undefined *)0x0;
  }
  uVar1 = param_1;
  FUN_1011a97d0();
  uVar2 = param_1;
  func_0x000107c4ce20();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c49c9c();
  func_0x000107c61170();
  if ((int)uVar3 == 0) {
    func_0x000107080f3c();
    func_0x000107c61180();
  }
  else {
    if ((uVar1 & 1) != 0) {
      uVar10 = 0;
      puVar9 = puVar8;
      puVar8 = (undefined1 *)0x0;
      goto LAB_1011a9cc4;
    }
    func_0x000107080f24();
    func_0x000107c61180();
  }
  if (uVar2 == 0) {
    uVar10 = 0;
    puVar9 = puVar8;
    puVar8 = (undefined1 *)0x0;
  }
  else {
    uVar10 = uVar2;
    func_0x000107c5faec();
    puVar9 = puVar8;
    func_0x000107c61170(uVar2);
  }
LAB_1011a9cc4:
  puVar4 = PTR_PTR_1126a5e70;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107080f0c();
  func_0x000107c61180();
  func_0x000107c59e18(puVar4);
  func_0x000107c61170(puVar5);
  if (puVar8 == (undefined1 *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar9 = puVar8;
    func_0x000107c5fadc(uVar10,puVar8);
    func_0x000107c6142c(puVar8);
  }
  func_0x000107c59a80(puVar4);
  func_0x000107c61170(uVar10);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
  }
  func_0x000107c592b0(puVar4);
  func_0x000107c61170(puVar5);
  if (((uVar1 & 1) == 0) || ((int)uVar3 == 0)) {
    func_0x000107c61170(param_3);
  }
  else {
    puVar5 = &UNK_11038dbb8;
    func_0x000107c613fc(&UNK_11038dbb8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_3);
    puVar6 = &UNK_11038dc08;
    func_0x000107c613fc(&UNK_11038dc08,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(ulong *)(puVar6 + 0x18) = param_1;
    *(undefined8 *)(puVar6 + 0x20) = param_2;
    pcStack_88 = FUN_1011aaa38;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11038dc20;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_80;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c56ea0(puVar4);
    func_0x000107c61170(param_3);
    func_0x000107c60bd0(ppuVar7);
  }
  return puVar4;
}



/* Entry: 1011a9ea4; end: 1011a9f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a9ea4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_3 + _DAT_112f14b88);
    puVar1 = PTR_PTR_1126b2950;
    func_0x000107c61168(PTR_PTR_1126b2950);
    func_0x000107c4cdac();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d641c8);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3f888();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c45314(uVar3);
    func_0x000107c61170(uVar3);
    FUN_1011aa00c(param_2,uVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1011a9f94; end: 1011aa00b; -[_TtC24EditChatActionMenuPlugin24EditChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011a9f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001011a9a90(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011aa00c; end: 1011aa833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011aa00c(ulong param_1,undefined *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined *puStack_d0;
  ulong uStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar5 = (undefined *)(unaff_x20 + _DAT_112d641b8);
  puVar6 = param_2;
  func_0x000107c61618();
  if (puVar5 == (undefined *)0x0) {
    return;
  }
  func_0x000108ef5474();
  func_0x000107c61180();
  uVar17 = param_1;
  func_0x000107c5c858();
  func_0x000107c61180();
  if (uVar17 == 0) {
    uVar19 = 0;
    puStack_d0 = (undefined *)0x0;
    lStack_78 = 0;
    bVar2 = true;
  }
  else {
    puVar6 = (undefined *)0x0;
    FUN_1011aaa60(0,0x112d64200,&PTR_PTR_1126d7ab0);
    uVar19 = uVar17;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar17);
    if (uVar19 >> 0x3e == 0) {
      uVar17 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar17 = uVar19 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar19) {
        uVar17 = uVar19;
      }
      func_0x000107c60480();
    }
    uStack_b8 = uVar19 & 0xffffffffffffff8;
    func_0x000107c61434(uVar19);
    if (uVar17 == 0) {
      puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar18 = 0;
      do {
        while( true ) {
          if ((uVar19 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uStack_b8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1011aa7f0);
              (*pcVar4)();
            }
            uVar7 = *(ulong *)(uVar19 + uVar18 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar18;
            FUN_1011aadcc(uVar18,uVar19);
          }
          uVar1 = uVar18 + 1;
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1011aa7ec);
            (*pcVar4)();
          }
          lStack_78 = 0;
          uVar8 = uVar7;
          func_0x000107c4051c();
          func_0x000107c61180();
          if (uVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1011aa830);
            (*pcVar4)();
          }
          puVar14 = &UNK_11038dcd0;
          func_0x000107c613fc(&UNK_11038dcd0,0x20,7);
          *(long **)(puVar14 + 0x10) = &lStack_78;
          *(ulong *)(puVar14 + 0x18) = uVar7;
          puVar6 = &UNK_11038dcf8;
          func_0x000107c613fc(&UNK_11038dcf8,0x20,7);
          *(code **)(puVar6 + 0x10) = FUN_1011aafbc;
          *(undefined **)(puVar6 + 0x18) = puVar14;
          puVar3 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_88 = FUN_1011aafc4;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = (code *)0x1011aa8c8;
          puStack_90 = &UNK_11038dd10;
          ppuVar9 = &puStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4(ppuVar9);
          puVar6 = puStack_80;
          func_0x000107c61174();
          func_0x000107c61574(puVar6);
          puVar16 = &UNK_11038dd48;
          func_0x000107c613fc(&UNK_11038dd48,0x20,7);
          *(long **)(puVar16 + 0x10) = &lStack_78;
          *(ulong *)(puVar16 + 0x18) = uVar7;
          puVar10 = &UNK_11038dd70;
          puVar6 = (undefined *)0x20;
          func_0x000107c613fc(&UNK_11038dd70,0x20,7);
          *(code **)(puVar10 + 0x10) = FUN_1011aafe4;
          *(undefined **)(puVar10 + 0x18) = puVar16;
          pcStack_88 = (code *)0x1011ab004;
          puStack_a8 = puVar3;
          uStack_a0 = 0x42000000;
          pcStack_98 = (code *)0x1011aa8c8;
          puStack_90 = &UNK_11038dd88;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          puVar10 = puStack_80;
          func_0x000107c61174(uVar7);
          func_0x000107c61574(puVar10);
          func_0x000107c4c62c(uVar8);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61170(uVar7);
          func_0x000107c61574(puVar16);
          func_0x000107c61574(puVar14);
          func_0x000107c61170(uVar8);
          lVar12 = lStack_78;
          if (lStack_78 != 0) break;
          uVar18 = uVar18 + 1;
          if (uVar1 == uVar17) goto LAB_1011aa3b4;
        }
        puVar14 = puStack_d0;
        func_0x000107c61550();
        if ((((int)puVar14 == 0) || ((long)puStack_d0 < 0)) ||
           (puVar14 = puStack_d0, ((ulong)puStack_d0 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_d0 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puStack_d0 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_d0) {
              puVar6 = puStack_d0;
            }
            func_0x000107c60480();
          }
          puVar6 = puVar6 + 1;
          puVar14 = (undefined *)0x0;
          FUN_1011aaaa0(0,puVar6,1,puStack_d0);
        }
        uVar7 = (ulong)puVar14 & 0xffffffffffffff8;
        uVar18 = *(ulong *)(uVar7 + 0x10);
        puVar16 = (undefined *)(uVar18 + 1);
        puStack_d0 = puVar14;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar18) {
          puStack_d0 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
          puVar6 = puVar16;
          FUN_1011aaaa0(puStack_d0,puVar16,1,puVar14);
          uVar7 = (ulong)puStack_d0 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar7 + 0x10) = puVar16;
        *(long *)(uVar7 + uVar18 * 8 + 0x20) = lVar12;
        uVar18 = uVar1;
      } while (uVar1 != uVar17);
    }
LAB_1011aa3b4:
    func_0x000107c6142c(uVar19);
    lStack_78 = 0;
    if (uVar19 == 0) {
      bVar2 = true;
    }
    else {
      if (uVar19 >> 0x3e == 0) {
        uVar17 = *(ulong *)(uStack_b8 + 0x10);
      }
      else {
        uVar17 = uVar19;
        if (-1 < (long)uVar19) {
          uVar17 = uStack_b8;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar19);
      if (uVar17 != 0) {
        uVar18 = 0;
        do {
          if ((uVar19 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uStack_b8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1011aa7f8);
              (*pcVar4)();
            }
            uVar7 = *(ulong *)(uVar19 + uVar18 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar18;
            FUN_1011aadcc(uVar18,uVar19);
          }
          uVar1 = uVar18 + 1;
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1011aa7f4);
            (*pcVar4)();
          }
          uVar8 = uVar7;
          func_0x000107c4051c();
          func_0x000107c61180();
          if (uVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1011aa834);
            (*pcVar4)();
          }
          puVar14 = &UNK_11038dc58;
          func_0x000107c613fc(&UNK_11038dc58,0x18,7);
          *(long **)(puVar14 + 0x10) = &lStack_78;
          puVar16 = &UNK_11038dc80;
          puVar6 = (undefined *)0x20;
          func_0x000107c613fc(&UNK_11038dc80,0x20,7);
          *(code **)(puVar16 + 0x10) = FUN_1011aaf90;
          *(undefined **)(puVar16 + 0x18) = puVar14;
          pcStack_88 = FUN_1011aaf9c;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_1011aa9c0;
          puStack_90 = &UNK_11038dc98;
          ppuVar9 = &puStack_a8;
          puStack_80 = puVar16;
          func_0x000107c60bc4(ppuVar9);
          func_0x000107c61574(puStack_80);
          func_0x000107c4c62c(uVar8);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61170(uVar7);
          func_0x000107c61574(puVar14);
          func_0x000107c61170(uVar8);
          uVar18 = uVar18 + 1;
        } while (uVar1 != uVar17);
      }
      func_0x000107c6142c(uVar19);
      bVar2 = false;
    }
  }
  lVar12 = 0;
  func_0x0001008cd514();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar13 = lVar12;
    func_0x000107c5ce94();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar13 != 0) {
      lVar12 = lVar13;
      func_0x00010657d94c(lVar13);
      func_0x000107c61180();
      uVar17 = param_1;
      func_0x000107c5c82c();
      func_0x000107c61180();
      if (uVar17 == 0) {
        uVar18 = 0;
        puVar16 = (undefined *)0x0;
        puVar14 = puVar6;
      }
      else {
        uVar18 = uVar17;
        func_0x000107c5faec();
        puVar14 = puVar6;
        func_0x000107c61170(uVar17);
        puVar16 = puVar6;
      }
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61174(lVar12);
      func_0x000107c5af88(puVar6);
      func_0x000107c61180();
      if (puVar16 == (undefined *)0x0) {
        uVar18 = 0;
        if (!bVar2) goto LAB_1011aa638;
LAB_1011aa628:
        uVar17 = 0;
      }
      else {
        puVar14 = puVar16;
        func_0x000107c5fadc(uVar18,puVar16);
        func_0x000107c6142c(puVar16);
        if (bVar2) goto LAB_1011aa628;
LAB_1011aa638:
        puVar14 = (undefined *)0x0;
        FUN_1011aaa60(0,0x112d64200,&PTR_PTR_1126d7ab0);
        uVar17 = uVar19;
        func_0x000107c5fc48(uVar19,puVar14);
        func_0x000107c6142c(uVar19);
      }
      puVar16 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x000107c61168();
      func_0x000107c3e368();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(uVar17);
      if (puVar16 == (undefined *)0x0) {
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar12);
        func_0x000107c615e8(puVar5);
        func_0x000107c615e8(param_2);
        func_0x000107c6142c(puStack_d0);
        return;
      }
      func_0x000107c61174(puVar16);
      func_0x000107c40258();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar14);
        if (puStack_d0 == (undefined *)0x0) goto LAB_1011aa764;
LAB_1011aa6e4:
        lVar20 = lStack_78;
        uVar15 = 0;
        FUN_1011aaa60(0,0x112d641f8,&PTR_PTR_1126cfd70);
        puVar6 = puStack_d0;
        func_0x000107c5fc48(puStack_d0,uVar15);
        func_0x000107c6142c(puStack_d0);
      }
      else {
        if (puStack_d0 != (undefined *)0x0) goto LAB_1011aa6e4;
LAB_1011aa764:
        puVar6 = (undefined *)0x0;
        lVar20 = lStack_78;
      }
      func_0x000107c543ec(lVar20,puVar5);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(puVar5);
      puVar5 = param_2;
      goto LAB_1011aa7c0;
    }
  }
  func_0x000107c615e8(param_2);
  func_0x000107c6142c(puStack_d0);
  func_0x000107c6142c(uVar19);
LAB_1011aa7c0:
  func_0x000107c615e8(puVar5);
  return;
}



/* Entry: 1011aa834; end: 1011aa9bf;  */

/* WARNING: Possible PIC construction at 0x0001011aa8a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011aa8ac) */

void FUN_1011aa834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c4f888(param_5);
  puVar1 = PTR_PTR_1126cfd70;
  func_0x000107c610f8(PTR_PTR_1126cfd70);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c49234(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1011aa9c0; end: 1011aa9df;  */

void FUN_1011aa9c0(long param_1)

{
  (**(code **)(param_1 + 0x20))();
  return;
}



/* Entry: 1011aa9e0; end: 1011aa9ff;  */

void FUN_1011aa9e0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b54d8);
  return;
}



/* Entry: 1011aaa00; end: 1011aaa07;  */

undefined * FUN_1011aaa00(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar9 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar9,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return (undefined *)0x0;
  }
  uVar2 = param_1;
  FUN_1011a97d0();
  uVar3 = param_1;
  func_0x000107c4ce20();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c49c9c();
  func_0x000107c61170();
  if ((int)uVar4 == 0) {
    func_0x000107080f3c();
    func_0x000107c61180();
  }
  else {
    if ((uVar2 & 1) != 0) {
      uVar11 = 0;
      puVar10 = puVar9;
      puVar9 = (undefined1 *)0x0;
      goto LAB_1011a9cc4;
    }
    func_0x000107080f24();
    func_0x000107c61180();
  }
  if (uVar3 == 0) {
    uVar11 = 0;
    puVar10 = puVar9;
    puVar9 = (undefined1 *)0x0;
  }
  else {
    uVar11 = uVar3;
    func_0x000107c5faec();
    puVar10 = puVar9;
    func_0x000107c61170(uVar3);
  }
LAB_1011a9cc4:
  puVar5 = PTR_PTR_1126a5e70;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000107080f0c();
  func_0x000107c61180();
  func_0x000107c59e18(puVar5);
  func_0x000107c61170(puVar6);
  if (puVar9 == (undefined1 *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = puVar9;
    func_0x000107c5fadc(uVar11,puVar9);
    func_0x000107c6142c(puVar9);
  }
  func_0x000107c59a80(puVar5);
  func_0x000107c61170(uVar11);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar5);
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar10);
  }
  func_0x000107c592b0(puVar5);
  func_0x000107c61170(puVar6);
  if (((uVar2 & 1) == 0) || ((int)uVar4 == 0)) {
    func_0x000107c61170(lVar1);
  }
  else {
    puVar6 = &UNK_11038dbb8;
    func_0x000107c613fc(&UNK_11038dbb8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar1);
    puVar7 = &UNK_11038dc08;
    func_0x000107c613fc(&UNK_11038dc08,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(ulong *)(puVar7 + 0x18) = param_1;
    *(undefined8 *)(puVar7 + 0x20) = param_2;
    pcStack_88 = FUN_1011aaa38;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11038dc20;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_80;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar6);
    func_0x000107c56ea0(puVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c60bd0(ppuVar8);
  }
  return puVar5;
}



/* Entry: 1011aaa08; end: 1011aaa37;  */

void FUN_1011aaa08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011aaa38; end: 1011aaa5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011aaa38(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(lVar6 + _DAT_112f14b88);
    puVar3 = PTR_PTR_1126b2950;
    func_0x000107c61168(PTR_PTR_1126b2950);
    func_0x000107c4cdac();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112d641c8);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c3f888();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c45314(uVar5);
    func_0x000107c61170(uVar5);
    FUN_1011aa00c(uVar1,uVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1011aaa60; end: 1011aaa9f;  */

void FUN_1011aaa60(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011aaaa0; end: 1011aabc7;  */

ulong FUN_1011aaaa0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011aabc8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1011aabc8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011aabc4);
      (*pcVar1)();
    }
    FUN_1011aac48(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1011aabc8; end: 1011aac47;  */

undefined * FUN_1011aabc8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1011aad60();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1011aac48; end: 1011aad5f;  */

long FUN_1011aac48(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011aad5c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011aad60);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1011aaa60(0,0x112d641f8,&PTR_PTR_1126cfd70);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1011aaa60(0,0x112d641f8,&PTR_PTR_1126cfd70);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011aad58);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1011aad60; end: 1011aadcb;  */

void FUN_1011aad60(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1011aaa60(0,0x112d641f8,&PTR_PTR_1126cfd70);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d64208;
  plVar5 = (long *)&UNK_10d9298b0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1011aadcc; end: 1011aaf8f;  */

ulong FUN_1011aadcc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011aaeb0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011aaeb4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d7ab0;
    func_0x000107c61168(PTR_PTR_1126d7ab0);
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
    puVar4 = PTR_PTR_1126d7ab0;
    func_0x000107c61168(PTR_PTR_1126d7ab0);
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
  FUN_1011aaa60(0,0x112d64200,&PTR_PTR_1126d7ab0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011aaf90);
  (*pcVar2)();
}



/* Entry: 1011aaf90; end: 1011aaf9b;  */

void FUN_1011aaf90(undefined8 param_1)

{
  long unaff_x20;
  
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1011aaf9c; end: 1011aafbb;  */

void FUN_1011aaf9c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011aafbc; end: 1011aafc3;  */

/* WARNING: Possible PIC construction at 0x0001011aa8a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011aa8ac) */

void FUN_1011aafbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c4f888(*(undefined8 *)(unaff_x20 + 0x18),param_2,param_3,
                      *(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = PTR_PTR_1126cfd70;
  func_0x000107c610f8(PTR_PTR_1126cfd70);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c49234(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1011aafc4; end: 1011aafe3;  */

void FUN_1011aafc4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011aafe4; end: 1011ab007;  */

/* WARNING: Possible PIC construction at 0x0001011aa9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011aa9a4) */

void FUN_1011aafe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c4f888(*(undefined8 *)(unaff_x20 + 0x18),param_2,param_3,
                      *(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = PTR_PTR_1126cfd70;
  func_0x000107c610f8(PTR_PTR_1126cfd70);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c49234(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1011ab008; end: 1011ab107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011ab008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_1011aa9e0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112d641b8,0);
  func_0x000107c61614(lVar3 + _DAT_112d641c0,0);
  *(undefined8 *)(lVar3 + _DAT_112d641c8) = uVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  return unaff_x20;
}



/* Entry: 1011ab108; end: 1011ab123;  */

void FUN_1011ab108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011ab124; end: 1011ab1f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab124(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_1011aa9e0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c61614(lVar2 + _DAT_112d641b8,0);
  func_0x000107c61614(lVar2 + _DAT_112d641c0,0);
  *(undefined8 *)(lVar2 + _DAT_112d641c8) = param_2;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(plVar3);
  return;
}



/* Entry: 1011ab1f8; end: 1011ab217;  */

void FUN_1011ab1f8(void)

{
  func_0x000107c61168(&PTR_PTR_112d64250);
  return;
}



/* Entry: 1011ab218; end: 1011ab223; -[SCEditChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab218(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d642a8;
  func_0x000107c61428(param_1 + _DAT_112d642a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ab224; end: 1011ab22f; -[SCEditChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab224(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d642a8;
  func_0x000107c61428(param_1 + _DAT_112d642a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ab230; end: 1011ab23b; -[SCEditChatActionMenuPluginEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d642b0;
  func_0x000107c61428(param_1 + _DAT_112d642b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ab23c; end: 1011ab27f;  */

void FUN_1011ab23c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011ab280; end: 1011ab28b; -[SCEditChatActionMenuPluginEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d642b0;
  func_0x000107c61428(param_1 + _DAT_112d642b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ab28c; end: 1011ab2df;  */

void FUN_1011ab28c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ab2e0; end: 1011ab3a3; -[SCEditChatActionMenuPluginEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001011ab350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ab370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ab354) */
/* WARNING: Removing unreachable block (ram,0x0001011ab374) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1011ab2e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c444a8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      FUN_1011ab1f8(0);
      func_0x000107c613fc();
      FUN_1011ab124(lVar1,lVar2);
      param_1 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011ab3a4; end: 1011ab3e7; -[SCEditChatActionMenuPluginEntryPoint end] */

void FUN_1011ab3a4(undefined8 param_1)

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



/* Entry: 1011ab3e8; end: 1011ab57f;  */

void FUN_1011ab3e8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e3fc0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef1c040,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "EditChatActionMenuPlugin/SCEditChatActionMenuPluginEntryPoint.swift",
                            0x43,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ab580);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54f40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011ab580; end: 1011ab62b; -[SCEditChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011ab580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011ab3e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011ab62c; end: 1011ab69f; -[SCEditChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab62c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d642a8,0);
  func_0x000107c61614(param_1 + _DAT_112d642b0,0);
  *(undefined8 *)(param_1 + _DAT_112d642b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011ab6a0; end: 1011ab6d3;  */

void FUN_1011ab6a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011ab6d4; end: 1011ab71b; -[SCEditChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab6d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d642a8);
  func_0x000107c61610(param_1 + _DAT_112d642b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d642b8));
  return;
}



/* Entry: 1011ab71c; end: 1011ab73b;  */

void FUN_1011ab71c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b55a8);
  return;
}



/* Entry: 1011ab73c; end: 1011ab75b; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab73c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d642f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ab75c; end: 1011ab76f; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab75c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d642f8,param_3);
  return;
}



/* Entry: 1011ab770; end: 1011ab7cf; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin init] */

void FUN_1011ab770(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EraseChatActionMenuPlugin.EraseChatActionMenuPlugin",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ab79c);
  (*pcVar1)();
}



/* Entry: 1011ab7d0; end: 1011ab827; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ab7d0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d642e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d642f0));
  FUN_100e47454(param_1 + _DAT_112d642f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64300));
  return;
}



/* Entry: 1011ab828; end: 1011ab82f; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin itemType] */

undefined8 FUN_1011ab828(void)

{
  return 8;
}



/* Entry: 1011ab830; end: 1011ab837; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011ab830(void)

{
  return 1;
}



/* Entry: 1011ab838; end: 1011ab8eb; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011ab838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  func_0x000107c3f3a0();
  if ((int)uVar1 != 0) {
    FUN_1011ae03c();
  }
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar2,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1011ab8ec; end: 1011aba9b;  */

undefined * FUN_1011ab8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_2;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1011ae1c8();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
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
  puVar2 = &UNK_11038deb8;
  func_0x000107c613fc(&UNK_11038deb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar3 = &UNK_11038dee0;
  func_0x000107c613fc(&UNK_11038dee0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uStack_50 = 0x1011ac2cc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100e46924;
  puStack_58 = &UNK_11038def8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea4(puVar1);
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 1011aba9c; end: 1011abbf3;  */

undefined * FUN_1011aba9c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  ppuVar4 = &puStack_70;
  puVar5 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar5,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_70 = puVar3;
    func_0x000104888f7c(&puStack_70);
    func_0x000107c61170(puVar3);
    func_0x000103edf0bc();
    func_0x000107c61574(ppuVar4);
  }
  else {
    puVar1 = param_2;
    func_0x000107c40258(param_2);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(puVar1);
    puVar1 = param_2;
    func_0x000107c40674(param_2);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
    func_0x000107c4a4a4(param_2);
    FUN_1011abbf4(puVar3,puVar5,puVar2,puVar6,param_2,param_3);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar6);
  }
  return puVar3;
}



/* Entry: 1011abbf4; end: 1011abeb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ****
FUN_1011abbf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  long unaff_x20;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  
  lVar3 = unaff_x20 + _DAT_112d642f8;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar3;
    func_0x000107c5d184();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112d642e8);
  lVar3 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    if (lVar5 != 0) {
      uStack_61 = 0;
      uVar8 = *(undefined8 *)(param_6 + _DAT_112f14b88);
      puVar1 = &UNK_11038df30;
      func_0x000107c613fc(&UNK_11038df30,0x18,7);
      *(undefined1 **)(puVar1 + 0x10) = &uStack_61;
      puVar2 = &UNK_11038df58;
      func_0x000107c613fc(&UNK_11038df58,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x1011ac2f4;
      *(undefined **)(puVar2 + 0x18) = puVar1;
      uStack_78 = 0x1011ac304;
      pppuStack_98 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_1011ac670;
      puStack_80 = &UNK_11038df70;
      ppppuVar6 = &pppuStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppppuVar6);
      func_0x000107c61574(puStack_70);
      func_0x000107c4c6d0(uVar8);
      func_0x000107c60bd0(ppppuVar6);
      lVar3 = *(long *)(unaff_x20 + _DAT_112d642f0 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 8))(param_1,param_2,param_3,param_4,uStack_61,param_5 & 1);
      func_0x000107c42c1c(lVar7);
      func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
      func_0x000107c613fc();
      lVar3 = 0;
      func_0x00010095c380();
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d64300);
      *(long *)(unaff_x20 + _DAT_112d64300) = lVar3;
      func_0x000107c6157c();
      func_0x000107c61574(uVar8);
      ppppuVar6 = *(undefined8 *****)(lVar3 + 0x10);
      ppppuVar4 = ppppuVar6;
      func_0x000107c6157c(ppppuVar6);
      func_0x000103edf0bc();
      func_0x000107c61574(puVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61574(lVar3);
      goto LAB_1011abe84;
    }
  }
  else {
    func_0x000107c61170();
  }
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppppuVar6 = &pppuStack_98;
  pppuStack_98 = ppppuVar4;
  func_0x000104888f7c(ppppuVar6);
  func_0x000107c61170(ppppuVar4);
  func_0x000103edf0bc();
LAB_1011abe84:
  func_0x000107c61574(ppppuVar6);
  func_0x000107c615e8(lVar5);
  return ppppuVar4;
}



/* Entry: 1011abeb4; end: 1011ac037; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011abeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001000b637c(param_3);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  uVar2 = param_4;
  func_0x0001000b637c(param_4);
  uVar5 = uVar2;
  func_0x0001006c733c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar5);
  puVar3 = &UNK_11038de68;
  func_0x000107c613fc(&UNK_11038de68,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11038de90;
  func_0x000107c613fc(&UNK_11038de90,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1011ac2bc;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar5 = 0;
  FUN_1011a4d50(0);
  func_0x000107c61174(param_1);
  uVar1 = 0x1011ac2c4;
  func_0x0001000d5158(0x1011ac2c4,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1011ac038; end: 1011ac0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ac038(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d642e8);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5d17c();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c41864(lVar2,param_2,0);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d64300);
  *(undefined8 *)(unaff_x20 + _DAT_112d64300) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 1011ac0e4; end: 1011ac10b; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin dismissPresentedView] */

void FUN_1011ac0e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011ac038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011ac10c; end: 1011ac10f; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin eraseMessageScopeWillDisplayAlertView:] */

void FUN_1011ac10c(void)

{
  return;
}


