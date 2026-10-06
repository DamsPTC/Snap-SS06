/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101236b54; end: 101236c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101236b54(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  uVar1 = unaff_x20;
  func_0x000107c49aa0();
  if ((uVar1 & 1) == 0) {
    uVar1 = unaff_x20;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c49aa0();
      func_0x000107c61170();
      if ((uVar2 & 1) != 0) goto LAB_101236bd0;
    }
    uVar1 = unaff_x20;
    func_0x000107c4a094();
    if ((int)uVar1 == 0) {
      return;
    }
  }
LAB_101236bd0:
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112d6a6b8)) +
              0x78))();
  if (uVar1 != 0) {
    func_0x000107c41b34();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 101236c20; end: 101236c4f; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController viewDidDisappear:] */

void FUN_101236c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101236b54(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101236c50; end: 101236e5f;  */

void FUN_101236c50(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "dismiss()";
  func_0x0001000c10c0("dismiss()");
  func_0x000107c61180();
  puVar2 = &UNK_110396b90;
  func_0x000107c613fc(&UNK_110396b90,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x101237380;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110396c10;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101236e60; end: 101236f03; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101236e60(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d6a688) = 0;
  *(undefined8 *)(param_1 + _DAT_112d6a690) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlusSendFriendBuddyPassImplementation/PlusSendFriendBuddyPassViewController.swift"
                      ,0x51,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101236ed0);
  (*pcVar1)();
}



/* Entry: 101236f04; end: 101236fab; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101236f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101236f64) */
/* WARNING: Removing unreachable block (ram,0x000101236f44) */
/* WARNING: Removing unreachable block (ram,0x000101236f24) */
/* WARNING: Removing unreachable block (ram,0x000101236f84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101236f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6a6b8));
  return;
}



/* Entry: 101236fac; end: 101236fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101236fac(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112d6a6b8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112ed1370);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar4);
    puVar2 = &UNK_110396b90;
    func_0x000107c613fc(&UNK_110396b90,0x18,7);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618(lVar1);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    func_0x000107c61170(lVar1);
    pcStack_70 = FUN_101237138;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_110396be8;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 101236fd0; end: 101236ff7; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController cardTransitionWillBeginWithView:] */

void FUN_101236fd0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101236c50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101236ff8; end: 1012370ef; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101236ff8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + _DAT_112d6a690);
  if (lVar3 != 0) {
    FUN_101237300(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar3);
    uVar1 = param_5;
    func_0x000107c60118(param_5,lVar3);
    if ((uVar1 & 1) != 0) {
      lVar2 = lVar3;
      func_0x000107c3f42c(param_1,param_2,lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_3);
      return (uint)lVar2 ^ 1;
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
  }
  return 1;
}



/* Entry: 1012370f0; end: 101237113; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController cardToExpandTransition] */

void FUN_1012370f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101237114; end: 101237133;  */

void FUN_101237114(void)

{
  func_0x000107c61168(&PTR_PTR_1127bded8);
  return;
}



/* Entry: 101237134; end: 101237137; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController cardTransitionEndedWithView:transitionType:] */

void FUN_101237134(void)

{
  return;
}



/* Entry: 101237138; end: 1012371d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101237138(void)

{
  long lVar1;
  ulong *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = *(ulong **)(lVar1 + _DAT_112d6a6b8);
    func_0x000107c61174();
    func_0x000107c61170();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x78))();
    func_0x000107c61170(puVar2);
    if (lVar1 != 0) {
      func_0x000107c41b34(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1012371d8; end: 1012372ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012371d8(uint param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112d6a6b8);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    pcVar1 = *(code **)(lVar4 + _DAT_112ed1380);
    uVar2 = ((undefined8 *)(lVar4 + _DAT_112ed1380))[1];
    FUN_101237340(pcVar1,uVar2);
    func_0x000107c61170(lVar4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 & 1);
      func_0x000101237350(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 101237300; end: 10123733f;  */

void FUN_101237300(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101237340; end: 101237387;  */

void FUN_101237340(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101237388; end: 101237443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101237388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6a6f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a700) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a708) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a710) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a718) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a720) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101237444; end: 101237533; -[_TtC38StreakRemindersServiceV2Implementation38StreakRemindersServiceV2Implementation initWithCurrentUserId:snapchattersDataFetcher:groupsDataFetcher:displayNameProvider:nativeMessagingServices:conversationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101237444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6a6f8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112d6a700) = param_4;
  *(undefined8 *)(param_1 + _DAT_112d6a708) = param_5;
  *(undefined8 *)(param_1 + _DAT_112d6a710) = param_6;
  *(undefined8 *)(param_1 + _DAT_112d6a718) = param_7;
  *(undefined8 *)(param_1 + _DAT_112d6a720) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 101237534; end: 101237567;  */

void FUN_101237534(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101237568; end: 1012375e3; -[_TtC38StreakRemindersServiceV2Implementation38StreakRemindersServiceV2Implementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101237598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012375b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123759c) */
/* WARNING: Removing unreachable block (ram,0x0001012375bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101237568(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6a6f8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6a700));
  return;
}



/* Entry: 1012375e4; end: 1012377db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012375e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_110396d20;
  func_0x000107c613fc(&UNK_110396d20,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110396d48;
  func_0x000107c613fc(&UNK_110396d48,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar3 = &UNK_110396d70;
  func_0x000107c613fc(&UNK_110396d70,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar5 = PTR_PTR_1126b3570;
  func_0x000107c610f8(PTR_PTR_1126b3570);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1012377dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x1012382b8;
  puStack_78 = &UNK_110396d88;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  pcStack_70 = FUN_101237f84;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1011adf84;
  puStack_78 = &UNK_110396db0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c48b58(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  lVar8 = *(long *)(unaff_x20 + _DAT_112d6a718);
  func_0x000107c4d48c();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar9 != 0) {
    lVar8 = lVar9;
    func_0x000107c44174();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    if (lVar8 != 0) {
      func_0x000107c4b690(lVar8);
      func_0x000107c61170(lVar8);
    }
  }
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 1012377dc; end: 101237f83;  */

/* WARNING: Possible PIC construction at 0x000101237a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101237e8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101237e74) */
/* WARNING: Removing unreachable block (ram,0x000101237cf4) */
/* WARNING: Removing unreachable block (ram,0x000101237c9c) */
/* WARNING: Removing unreachable block (ram,0x000101237cf8) */
/* WARNING: Removing unreachable block (ram,0x000101237c80) */
/* WARNING: Removing unreachable block (ram,0x000101237b40) */
/* WARNING: Removing unreachable block (ram,0x000101237ca8) */
/* WARNING: Removing unreachable block (ram,0x000101237b48) */
/* WARNING: Removing unreachable block (ram,0x000101237cdc) */
/* WARNING: Removing unreachable block (ram,0x000101237ba8) */
/* WARNING: Removing unreachable block (ram,0x000101237b08) */
/* WARNING: Removing unreachable block (ram,0x000101237cd4) */
/* WARNING: Removing unreachable block (ram,0x000101237d1c) */
/* WARNING: Removing unreachable block (ram,0x000101237d2c) */
/* WARNING: Removing unreachable block (ram,0x000101237d40) */
/* WARNING: Removing unreachable block (ram,0x000101237d50) */
/* WARNING: Removing unreachable block (ram,0x000101237d54) */
/* WARNING: Removing unreachable block (ram,0x000101237d60) */
/* WARNING: Removing unreachable block (ram,0x000101237de4) */
/* WARNING: Removing unreachable block (ram,0x000101237dec) */
/* WARNING: Removing unreachable block (ram,0x000101237d6c) */
/* WARNING: Removing unreachable block (ram,0x000101237d74) */
/* WARNING: Removing unreachable block (ram,0x000101237d58) */
/* WARNING: Removing unreachable block (ram,0x000101237d8c) */
/* WARNING: Removing unreachable block (ram,0x000101237dc0) */
/* WARNING: Removing unreachable block (ram,0x000101237da0) */
/* WARNING: Removing unreachable block (ram,0x000101237dbc) */
/* WARNING: Removing unreachable block (ram,0x000101237af0) */
/* WARNING: Removing unreachable block (ram,0x000101237d0c) */
/* WARNING: Removing unreachable block (ram,0x000101237adc) */
/* WARNING: Removing unreachable block (ram,0x000101237a40) */
/* WARNING: Removing unreachable block (ram,0x000101237a1c) */
/* WARNING: Removing unreachable block (ram,0x000101237e90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012377dc(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auStack_c0 [80];
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    func_0x000107c5fadc(0xd000000000000026,0x800000010d92dce0);
    uVar11 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010ef30530);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar11);
    return;
  }
  lVar12 = *(long *)(unaff_x20 + 0x18);
  uVar11 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar11 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = param_1;
    if (-1 < (long)param_1) {
      uVar10 = uVar11;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar10 != 0) {
    uVar14 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101237ecc);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar14;
        FUN_1012387f0(uVar14,param_1);
      }
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101237ec8);
        (*pcVar2)();
      }
      puVar8 = auStack_c0;
      func_0x000107c61428(lVar12 + 0x10,puVar8,0,0);
      uVar4 = lVar12 + 0x10;
      func_0x000107c61618();
      if (uVar4 != 0) {
        uVar10 = uVar3;
        func_0x000107c5c0d8();
        func_0x000107c61180();
        uVar11 = uVar4;
        if (uVar10 == 0) goto code_r0x000107c61170;
        uVar14 = uVar10;
        func_0x000107c40808();
        if ((int)uVar14 < 1) {
          func_0x000107c61170(uVar10);
          goto code_r0x000107c61170;
        }
        uVar11 = uVar3;
        func_0x000107c40690();
        func_0x000107c61180();
        puVar9 = puVar8;
        if (uVar11 == 0) {
          func_0x000107c5faec();
          puVar9 = puVar8;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
        }
        func_0x000107c5faec();
        func_0x000107c40808(uVar10);
        func_0x000107c49ea0();
        if ((int)uVar3 == 0) goto code_r0x000107c61170;
        lVar12 = *(long *)(uVar4 + _DAT_112d6a708);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar12 != 0) {
          lVar5 = *(long *)(uVar4 + _DAT_112d6a710);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar5 != 0) {
            uVar13 = *(undefined8 *)(uVar4 + _DAT_112d6a6f8 + 8);
            func_0x0001000285a8(0x112d67db0,&UNK_10d92beb8);
            FUN_101239060(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
            func_0x000107c61434(uVar13);
            func_0x000107c5ffdc();
            func_0x000107c43114(lVar12);
            func_0x000107c61180();
            goto code_r0x000107c61170;
          }
          func_0x000107c615e8(lVar12);
        }
        func_0x000107c6142c(puVar9);
        uVar11 = uVar10;
        goto code_r0x000107c61170;
      }
      func_0x000107c61170(uVar3);
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar10);
  }
  func_0x0001000285a8(0x112d6a758,&UNK_10d92dd28);
  puVar6 = puVar7;
  func_0x00010488813c(puVar7);
  func_0x000107c6142c(puVar7);
  puVar7 = &UNK_110396e38;
  func_0x000107c613fc(&UNK_110396e38,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar13;
  func_0x000107c61174(uVar13);
  func_0x00010075a04c(0,1,FUN_1012389b4,puVar7);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 101237f84; end: 1012380bb;  */

void FUN_101237f84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x2a);
  func_0x000107c5fb78(0xd000000000000028,0x800000010ef30500);
  uVar2 = 0;
  uStack_48 = param_1;
  FUN_1011df8bc(0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_38;
  uVar2 = uStack_40;
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010d92dce0);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  puVar5 = puVar4;
  func_0x000107c5ed2c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c43b70(uVar6);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1012380bc; end: 1012380ef; -[_TtC38StreakRemindersServiceV2Implementation38StreakRemindersServiceV2Implementation getConversationsWithStreakReminders] */

void FUN_1012380bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1012375e4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012380f0; end: 10123824b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012380f0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6a720);
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101238248);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c3cfbc();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  if (lVar4 != 0) {
    uVar5 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar6 = &UNK_110396de8;
    func_0x000107c613fc(&UNK_110396de8,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar2;
    *(undefined8 *)(puVar6 + 0x18) = param_1;
    *(undefined8 *)(puVar6 + 0x20) = param_2;
    pcStack_60 = FUN_101238344;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ab47f8;
    puStack_68 = &UNK_110396e00;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c61174(puVar2);
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar6);
    func_0x000107c4d0c8(lVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10123824c);
  (*pcVar1)();
}



/* Entry: 10123824c; end: 101238327; -[_TtC38StreakRemindersServiceV2Implementation38StreakRemindersServiceV2Implementation setStreakReminderForConversationWithConversationId:shouldRemind:] */

void FUN_10123824c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1012380f0(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101238328; end: 101238343;  */

void FUN_101238328(long param_1,long param_2)

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



/* Entry: 101238344; end: 10123849b;  */

/* WARNING: Possible PIC construction at 0x000101238450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123846c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101238454) */
/* WARNING: Removing unreachable block (ram,0x000101238470) */

void FUN_101238344(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((param_1 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c602fc(0x35);
    func_0x000107c5fb78(0xd000000000000033,0x800000010ef304c0);
    func_0x000107c5fb78(uVar4,uVar1);
    puVar3 = (undefined *)0x0;
    func_0x000107c5fadc(0xd000000000000026,0x800000010d92dce0);
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
  }
  else {
    puVar3 = PTR_PTR_1126b15a8;
    func_0x000107c61168();
    func_0x000107c5d1f4();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10123849c);
      (*pcVar2)();
    }
    func_0x000107c43b74(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10123849c; end: 1012384bb;  */

void FUN_10123849c(void)

{
  func_0x000107c61168(&PTR_PTR_1127bdfd8);
  return;
}



/* Entry: 1012384bc; end: 1012385e3;  */

ulong FUN_1012384bc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012385e4);
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
  FUN_1012385e4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012385e0);
      (*pcVar1)();
    }
    FUN_101238664(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1012385e4; end: 101238663;  */

undefined * FUN_1012385e4(undefined *param_1,undefined *param_2)

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
    FUN_101238788();
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



/* Entry: 101238664; end: 101238787;  */

long FUN_101238664(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101238784);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101238788);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d6a758;
        func_0x0001000285a8(0x112d6a758,&UNK_10d92dd28);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d6a758;
      func_0x0001000285a8(0x112d6a758,&UNK_10d92dd28);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101238780);
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



/* Entry: 101238788; end: 1012387ef;  */

/* WARNING: Possible PIC construction at 0x0001012387b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012387bc) */
/* WARNING: Removing unreachable block (ram,0x0001012387c0) */

void FUN_101238788(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d6a768;
    plVar5 = (long *)&UNK_10d92dd30;
  }
  else {
    puVar3 = (ulong *)0x112d6a758;
    plVar5 = (long *)&UNK_10d92dd28;
    unaff_x30 = 0x1012387bc;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1012387f0; end: 1012389b3;  */

ulong FUN_1012387f0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012388d4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012388d8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126da928;
    func_0x000107c61168(PTR_PTR_1126da928);
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
    puVar4 = PTR_PTR_1126da928;
    func_0x000107c61168(PTR_PTR_1126da928);
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
  FUN_101239060(0,0x112d6a750,&PTR_PTR_1126da928);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012389b4);
  (*pcVar2)();
}



/* Entry: 1012389b4; end: 101238a33;  */

void FUN_1012389b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *param_1;
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c5ed2c(uVar3);
    func_0x000107c43b70(uVar2);
  }
  else {
    uVar1 = 0;
    FUN_101239060(0,0x112d6a760,&PTR_PTR_1126a6740);
    func_0x000107c5fc48(uVar3,uVar1);
    func_0x000107c43b74(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101238a34; end: 101238cf3;  */

/* WARNING: Possible PIC construction at 0x000101238bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101238bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101238bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101238cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101238bd4) */
/* WARNING: Removing unreachable block (ram,0x000101238bc0) */
/* WARNING: Removing unreachable block (ram,0x000101238bb0) */
/* WARNING: Removing unreachable block (ram,0x000101238cb8) */

void FUN_101238a34(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  if (param_1 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar3,uVar1);
    lVar4 = -0x2fffffffffffffdd;
    func_0x000107c5fadc(0xd000000000000026,0x800000010d92dce0);
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef30550);
    func_0x000107c6142c(0x800000010ef30550);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c61174();
    func_0x00010901d7c4();
    func_0x000107c61180();
    if (param_1 == 0) {
      param_1 = param_2;
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c();
    }
    FUN_1012023c8();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x10) = 1;
    puVar2 = PTR_PTR_1126b1440;
    func_0x000107c610f8();
    func_0x000107c48444();
    *(undefined **)(param_1 + 0x20) = puVar2;
    func_0x000107c5c0e4(uVar5);
    puVar2 = PTR_PTR_1126a6740;
    func_0x000107c610f8(PTR_PTR_1126a6740);
    func_0x000107c5fadc(uVar3,uVar1);
    uVar3 = 0;
    FUN_101239060(0,0x112d67d90,&PTR_PTR_1126b1440);
    lVar4 = param_1;
    func_0x000107c5fc48(param_1,uVar3);
    func_0x000107c61574(param_1);
    func_0x000107c46174(uVar6,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 101238cf4; end: 10123905f;  */

void FUN_101238cf4(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puStack_90;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar14 = (undefined *)*param_2;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c4ca98(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c41050(uVar10);
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c5fadc(uVar7,uVar1);
  puVar6 = puVar14;
  puVar16 = puVar4;
  func_0x000108ef2dc8(0x3feccccccccccccd,puVar14,puVar4,uVar10,uVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  if (puVar6 == (undefined *)0x0) {
    puStack_90 = (undefined *)0x0;
    puVar16 = (undefined *)0xe000000000000000;
  }
  else {
    puStack_90 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
  }
  func_0x000107c5fadc(uVar7,uVar1);
  func_0x000108ef2144(puVar14,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar14 != (undefined *)0x0) {
    uVar10 = 0x112d64d20;
    func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
    puVar6 = puVar14;
    func_0x000107c5fc54(puVar14,uVar10);
    func_0x000107c61170(puVar14);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar14 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar14 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101202450(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101239060);
      (*pcVar3)();
    }
    puVar15 = (undefined *)0x0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar17 = *(undefined **)(puVar6 + (long)puVar15 * 8 + 0x20);
        func_0x000107c615f0(puVar17);
      }
      else {
        puVar17 = puVar15;
        func_0x0001011be488(puVar15,puVar6);
      }
      puVar8 = PTR_PTR_1126b1440;
      func_0x000107c610f8();
      func_0x000107c47db0();
      func_0x000107c615e8(puVar17);
      uVar2 = *(ulong *)(puVar13 + 0x10);
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar2) {
        func_0x000101202450(1 < *(ulong *)(puVar13 + 0x18),uVar2 + 1,1);
      }
      puVar15 = puVar15 + 1;
      *(ulong *)(puVar13 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar13 + uVar2 * 8 + 0x20) = puVar8;
    } while (puVar14 != puVar15);
    func_0x000107c6142c(puVar6);
  }
  func_0x000107c5c0e4(uVar12);
  puVar6 = PTR_PTR_1126a6740;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar9,uVar11);
  func_0x000107c5fadc(puStack_90,puVar16);
  func_0x000107c6142c(puVar16);
  uVar10 = 0;
  FUN_101239060(0,0x112d67d90,&PTR_PTR_1126b1440);
  puVar16 = puVar13;
  func_0x000107c5fc48(puVar13,uVar10);
  func_0x000107c6142c(puVar13);
  func_0x000107c46174(uVar18);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puStack_90);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar4);
  *param_1 = puVar6;
  return;
}



/* Entry: 101239060; end: 10123909f;  */

void FUN_101239060(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012390a0; end: 1012390b7;  */

void FUN_1012390a0(long param_1,long param_2)

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



/* Entry: 1012390b8; end: 1012390f3;  */

void FUN_1012390b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1012390f4; end: 101239217;  */

void FUN_1012390f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_110396f58;
  func_0x000107c613fc(&UNK_110396f58,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  pcStack_50 = FUN_1012392b8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1012392c0;
  puStack_58 = &UNK_110396f70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar3 = PTR_PTR_1126a6748;
  func_0x000107c610f8(PTR_PTR_1126a6748);
  func_0x000107c47de4();
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101239218; end: 1012392b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239218(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = 0;
  FUN_101239a28();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d6a828);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d6a830);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d6a838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_112d6a820) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1012392b8; end: 1012392bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012392b8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = 0;
  FUN_101239a28();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d6a828);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d6a830);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d6a838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_112d6a820) = uVar5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1012392c0; end: 1012392f7;  */

void FUN_1012392c0(long param_1)

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



/* Entry: 1012392f8; end: 101239313;  */

void FUN_1012392f8(long param_1,long param_2)

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



/* Entry: 101239314; end: 10123933f;  */

void FUN_101239314(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101239340; end: 10123935f;  */

void FUN_101239340(void)

{
  FUN_1012390f4();
  return;
}



/* Entry: 101239360; end: 101239367;  */

undefined8 FUN_101239360(void)

{
  return 0;
}



/* Entry: 101239368; end: 101239387;  */

void FUN_101239368(void)

{
  func_0x000107c61168(&PTR_PTR_112d6a7b8);
  return;
}



/* Entry: 101239388; end: 10123942f; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logDeletion] */

/* WARNING: Possible PIC construction at 0x0001012393d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123940c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012393dc) */
/* WARNING: Removing unreachable block (ram,0x00010123942c) */
/* WARNING: Removing unreachable block (ram,0x0001012393e0) */
/* WARNING: Removing unreachable block (ram,0x000101239410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239388(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a820);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e4ec();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101239430; end: 1012394d7; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logOnboardingAccepted] */

/* WARNING: Possible PIC construction at 0x000101239480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012394b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101239484) */
/* WARNING: Removing unreachable block (ram,0x0001012394d4) */
/* WARNING: Removing unreachable block (ram,0x000101239488) */
/* WARNING: Removing unreachable block (ram,0x0001012394b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239430(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a820);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e4ec();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012394d8; end: 10123957f; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logOnboardingDeclined] */

/* WARNING: Possible PIC construction at 0x000101239528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123955c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123952c) */
/* WARNING: Removing unreachable block (ram,0x00010123957c) */
/* WARNING: Removing unreachable block (ram,0x000101239530) */
/* WARNING: Removing unreachable block (ram,0x000101239560) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012394d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a820);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e4ec();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101239580; end: 101239627; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logTranscriptionSuccess] */

/* WARNING: Possible PIC construction at 0x0001012395d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101239604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012395d4) */
/* WARNING: Removing unreachable block (ram,0x000101239624) */
/* WARNING: Removing unreachable block (ram,0x0001012395d8) */
/* WARNING: Removing unreachable block (ram,0x000101239608) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239580(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a820);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e4ec();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101239628; end: 1012396cf; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logTranscriptionFailure] */

/* WARNING: Possible PIC construction at 0x000101239678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012396ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123967c) */
/* WARNING: Removing unreachable block (ram,0x0001012396cc) */
/* WARNING: Removing unreachable block (ram,0x000101239680) */
/* WARNING: Removing unreachable block (ram,0x0001012396b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239628(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a820);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e4ec();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012396d0; end: 10123970b; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logEditOpenLatencyStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012396d0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  func_0x000107c61174();
  func_0x000107c6071c();
  puVar1 = (undefined8 *)(param_2 + _DAT_112d6a828);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10123970c; end: 1012397e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123970c(double param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  double dVar6;
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112d6a828);
  if (*(char *)(pdVar1 + 1) != '\x01') {
    dVar6 = *pdVar1;
    func_0x000107c6071c();
    lVar3 = *(long *)(unaff_x20 + _DAT_112d6a820);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c3e4ec();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012397e4);
        (*pcVar2)();
      }
      puVar5 = PTR_PTR_1126b36e8;
      func_0x000107c61168(PTR_PTR_1126b36e8);
      func_0x000107c42408();
      func_0x000107c61180();
      func_0x000107c3d8dc(param_1 - dVar6,lVar4,param_3,puVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar5);
    }
    *pdVar1 = 0.0;
    *(undefined1 *)(pdVar1 + 1) = 1;
  }
  return;
}



/* Entry: 1012397e4; end: 10123980b; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logEditOpenLatencyEnd] */

void FUN_1012397e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10123970c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10123980c; end: 101239847; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logRenderLatencyStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123980c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  func_0x000107c61174();
  func_0x000107c6071c();
  puVar1 = (undefined8 *)(param_2 + _DAT_112d6a830);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101239848; end: 101239877; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logRenderLatencyEnd] */

void FUN_101239848(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012398b4(&DAT_112d6a830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101239878; end: 1012398b3; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logTranscriptionLatencyStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239878(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  func_0x000107c61174();
  func_0x000107c6071c();
  puVar1 = (undefined8 *)(param_2 + _DAT_112d6a838);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1012398b4; end: 101239987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012398b4(double param_1,long *param_2,undefined8 param_3)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  double dVar6;
  
  pdVar1 = (double *)(unaff_x20 + *param_2);
  if (*(char *)(pdVar1 + 1) != '\x01') {
    dVar6 = *pdVar1;
    func_0x000107c6071c();
    lVar3 = *(long *)(unaff_x20 + _DAT_112d6a820);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c3e4ec();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101239988);
        (*pcVar2)();
      }
      puVar5 = PTR_PTR_1126b36e8;
      func_0x000107c61168(PTR_PTR_1126b36e8);
      func_0x000107c500dc();
      func_0x000107c61180();
      func_0x000107c3d8dc(param_1 - dVar6,lVar4,param_3,puVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar5);
    }
    *pdVar1 = 0.0;
    *(undefined1 *)(pdVar1 + 1) = 1;
  }
  return;
}



/* Entry: 101239988; end: 1012399b7; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger logTranscriptionLatencyEnd] */

void FUN_101239988(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012398b4(&DAT_112d6a838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012399b8; end: 101239a17; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger init] */

void FUN_1012399b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAutoCaptionsLoggingServicesImpl.AutoCaptionsPerformanceLogger",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012399e4);
  (*pcVar1)();
}



/* Entry: 101239a18; end: 101239a27; -[_TtC33SCAutoCaptionsLoggingServicesImpl29AutoCaptionsPerformanceLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6a820));
  return;
}



/* Entry: 101239a28; end: 101239a47;  */

void FUN_101239a28(void)

{
  func_0x000107c61168(&PTR_PTR_1127be0c0);
  return;
}



/* Entry: 101239a48; end: 101239a8f; -[SCAutoCaptionsLoggingServicesEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239a48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a868;
  func_0x000107c61428(param_1 + _DAT_112d6a868,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101239a90; end: 101239ae7; -[SCAutoCaptionsLoggingServicesEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a868;
  func_0x000107c61428(param_1 + _DAT_112d6a868,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101239ae8; end: 101239b2f; -[SCAutoCaptionsLoggingServicesEntryPoint autoCaptionsLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239ae8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a870;
  func_0x000107c61428(param_1 + _DAT_112d6a870,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101239b30; end: 101239b93; -[SCAutoCaptionsLoggingServicesEntryPoint setAutoCaptionsLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a870;
  func_0x000107c61428(param_1 + _DAT_112d6a870,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101239b94; end: 101239c77;  */

/* WARNING: Possible PIC construction at 0x000101239c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101239c20) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_101239b94(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c444a8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c3e4b8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = 0;
    FUN_101239368();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    *(long *)(lVar2 + 0x18) = unaff_x20;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(unaff_x20);
    FUN_1012390f4();
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101239c78; end: 101239c9f; -[SCAutoCaptionsLoggingServicesEntryPoint begin] */

void FUN_101239c78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101239b94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101239ca0; end: 101239ce3; -[SCAutoCaptionsLoggingServicesEntryPoint end] */

void FUN_101239ca0(undefined8 param_1)

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



/* Entry: 101239ce4; end: 101239e7b;  */

void FUN_101239ce4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e3fc0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef1c040,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef10cfa40)) &&
         (func_0x000107c605b8(0xd000000000000022,0x800000010ef305c0,param_2,param_3,0),
         (uVar2 & 1) == 0)) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCAutoCaptionsLoggingServicesImpl/SCAutoCaptionsLoggingServicesEntryPoint.swift"
                            ,0x4f,2,0x28,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101239e7c);
        (*pcVar1)();
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52a64();
      goto LAB_101239de4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c54f40();
LAB_101239de4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101239e7c; end: 101239f27; -[SCAutoCaptionsLoggingServicesEntryPoint setValue:forIvarName:] */

void FUN_101239e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101239ce4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101239f28; end: 101239f93; -[SCAutoCaptionsLoggingServicesEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239f28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6a868,0);
  *(undefined8 *)(param_1 + _DAT_112d6a870) = 0;
  *(undefined8 *)(param_1 + _DAT_112d6a878) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101239f94; end: 101239fc7;  */

void FUN_101239f94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101239fc8; end: 10123a00f; -[SCAutoCaptionsLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101239fc8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6a868);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a870));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6a878));
  return;
}



/* Entry: 10123a010; end: 10123a02f;  */

void FUN_10123a010(void)

{
  func_0x000107c61168(&PTR_PTR_1127be198);
  return;
}



/* Entry: 10123a030; end: 10123a04f; -[AutoCaptionsHelperServices audioAssetExtractorObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123a030(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6a8b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123a050; end: 10123a1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10123a050(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_10102283c(param_1,unaff_x20 + _DAT_112d6a8a8);
  *(undefined8 *)(unaff_x20 + _DAT_112d6a8b0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 10123a1d8; end: 10123a237; -[AutoCaptionsHelperServices init] */

void FUN_10123a1d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AutoCaptionsHelperServices.AutoCaptionsHelperServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10123a204);
  (*pcVar1)();
}



/* Entry: 10123a238; end: 10123a26f; -[AutoCaptionsHelperServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123a238(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d6a8a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d6a8b0));
  return;
}



/* Entry: 10123a270; end: 10123a28f;  */

void FUN_10123a270(void)

{
  func_0x000107c61168(&PTR_PTR_1127be260);
  return;
}



/* Entry: 10123a290; end: 10123a2d7;  */

void FUN_10123a290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10123a2d8; end: 10123a753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123a2d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar11 = &puStack_90;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar9 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar9 != 0) {
    lVar3 = lVar9;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar4 = 0;
      FUN_10123b124();
      lVar5 = lVar4;
      func_0x000107c610f8();
      *(undefined8 *)(lVar5 + _DAT_112d6a9e8) = 0;
      lVar9 = lVar5 + _DAT_112d6a9f0;
      *(undefined8 *)(lVar9 + 8) = 0;
      func_0x000107c61614(lVar9,0);
      *(undefined8 *)(lVar5 + _DAT_112d6a9f8) = uVar2;
      *(long *)(lVar5 + _DAT_112d6aa00) = lVar3;
      *(undefined ***)(lVar9 + 8) = &PTR_DAT_1103971f0;
      func_0x000107c61604();
      *(undefined8 *)(lVar5 + _DAT_112d6aa08) = uVar1;
      puVar7 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_60 = lVar5;
      lStack_58 = lVar4;
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar1);
      func_0x000107c615f0(lVar3);
      plVar6 = &lStack_60;
      func_0x000107c61154(plVar6,puVar7,0,0);
      puVar7 = &UNK_110397110;
      func_0x000107c613fc(&UNK_110397110,0x18,7);
      func_0x000107c61644(puVar7 + 0x10);
      puVar8 = &UNK_110397138;
      func_0x000107c613fc(&UNK_110397138,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long **)(puVar8 + 0x18) = plVar6;
      func_0x000107c61580(puVar7,2);
      func_0x000107c61174();
      FUN_10123b378();
      lVar9 = *(long *)((long)plVar6 + _DAT_112d6a9e8);
      if (lVar9 == 0) {
        func_0x00010123a570(puVar7,plVar6);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(plVar6);
        func_0x000107c61578(puVar7,2);
        func_0x000107c61574(puVar8);
      }
      else {
        func_0x000107c61174();
        func_0x000107c61574(puVar7);
        puVar10 = &UNK_110397160;
        func_0x000107c613fc(&UNK_110397160,0x20,7);
        *(undefined8 *)(puVar10 + 0x10) = 0x10123a9b8;
        *(undefined **)(puVar10 + 0x18) = puVar8;
        uStack_70 = 0x10123a9c0;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f6b44;
        puStack_78 = &UNK_110397178;
        puStack_68 = puVar10;
        func_0x000107c60bc4(&puStack_90);
        puVar10 = puStack_68;
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(puVar10);
        func_0x000107c5e078(lVar9);
        func_0x000107c615e8(lVar3);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(plVar6);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61574(puVar7);
        func_0x000107c61170(lVar9);
      }
    }
  }
  return;
}



/* Entry: 10123a754; end: 10123a873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10123a754(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined **)(unaff_x20 + 0x30) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c4358c(puVar3);
  }
  else {
    puVar4 = &UNK_1103971b0;
    func_0x000107c613fc(&UNK_1103971b0,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112d6a9b0);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0x10123a9e4;
    puVar1[1] = puVar4;
    func_0x000107c61174(puVar3);
    func_0x000107c61174();
    func_0x00010058d43c(uVar5,uVar2);
    func_0x000107c42018(*(undefined8 *)(lVar6 + _DAT_112d6a9a0));
    func_0x000107c61170(lVar6);
  }
  lVar6 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c3e3c0();
    func_0x000107c615e8(lVar6);
  }
  puVar4 = puVar3;
  func_0x000107c4f3ec(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 10123a874; end: 10123a8b7;  */

void FUN_10123a874(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10123a8b8; end: 10123a93b;  */

void FUN_10123a8b8(void)

{
  FUN_10123a2d8();
  return;
}



/* Entry: 10123a93c; end: 10123a9b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123a93c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d6a9b0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61174();
    func_0x00010058d43c(uVar2,uVar3);
    func_0x000107c42018(*(undefined8 *)(lVar4 + _DAT_112d6a9a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 10123a9b4; end: 10123a9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123a9b4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d6a9b0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61174();
    func_0x00010058d43c(uVar2,uVar3);
    func_0x000107c42018(*(undefined8 *)(lVar4 + _DAT_112d6a9a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 10123a9ec; end: 10123aa0b;  */

void FUN_10123a9ec(void)

{
  func_0x000107c61168(&PTR_PTR_112d6a920);
  return;
}



/* Entry: 10123aa0c; end: 10123aa6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10123aa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  func_0x000107c610f8();
  uVar6 = param_3;
  func_0x000107c614f0(param_3);
  puVar4 = auStack_60;
  lVar3 = unaff_x20 + _DAT_112d6a9b8;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0,param_3,unaff_x20,uVar6);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6a9b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a9a8) = param_2;
  puVar2 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c48e84();
  *(undefined **)(unaff_x20 + _DAT_112d6a9a0) = puVar2;
  *(undefined8 *)(lVar3 + 8) = param_4;
  func_0x000107c61604(lVar3,param_3);
  FUN_10123aee4();
  lStack_58 = lVar3;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  lVar3 = _DAT_112d6a9a0;
  uVar6 = *(undefined8 *)(puVar4 + _DAT_112d6a9a0);
  puVar5 = puVar4;
  func_0x000107c61174();
  func_0x000107c5a074(uVar6);
  func_0x000107c52684(*(undefined8 *)(puVar4 + lVar3));
  func_0x000107c5a070(*(undefined8 *)(puVar4 + lVar3));
  func_0x000107c5a06c(*(undefined8 *)(puVar4 + lVar3));
  func_0x000107c5a05c(*(undefined8 *)(puVar4 + lVar3));
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar5;
}



/* Entry: 10123aa70; end: 10123aa97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123aa70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c10c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(unaff_x20 + _DAT_112d6a9a0),
             PTR_s_presentInUIContainer_withPullBar_112620be8,
             *(undefined8 *)(unaff_x20 + _DAT_112d6a9a8),0,8);
  return;
}



/* Entry: 10123aa98; end: 10123aaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123aa98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6a9b0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100b64c10();
  func_0x00010058d43c(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112d6a9a0),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 10123aaec; end: 10123ab47; -[_TtC19AudioEffectsFeature25AudioEffectsTrayContainer init] */

void FUN_10123aaec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AudioEffectsFeature.AudioEffectsTrayContainer",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10123ab18);
  (*pcVar1)();
}



/* Entry: 10123ab48; end: 10123aba3; -[_TtC19AudioEffectsFeature25AudioEffectsTrayContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123ab48(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6a9a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a9a0));
  FUN_10123afc4(param_1 + _DAT_112d6a9b8);
  if (*(long *)(param_1 + _DAT_112d6a9b0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d6a9b0))[1]);
    return;
  }
  return;
}



/* Entry: 10123aba4; end: 10123acdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123aba4(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar6 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    pcVar2 = *(code **)(lVar6 + _DAT_112d6a9b0);
    uVar3 = ((undefined8 *)(lVar6 + _DAT_112d6a9b0))[1];
    func_0x000100b64c10(pcVar2,uVar3);
    func_0x000107c61170(lVar6);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      func_0x00010058d43c(pcVar2,uVar3);
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  lVar6 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    puVar1 = (undefined8 *)(lVar6 + _DAT_112d6a9b0);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar3,uVar4);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112d6a9b8;
    lVar5 = lVar6;
    func_0x000107c61618();
    lVar6 = *(long *)(lVar6 + 8);
    func_0x000107c61170(param_1);
    if (lVar5 != 0) {
      func_0x000107c614f0(lVar5);
      (**(code **)(lVar6 + 8))();
      func_0x000107c615e8(lVar5);
    }
  }
  return;
}



/* Entry: 10123ace0; end: 10123ad33; -[_TtC19AudioEffectsFeature25AudioEffectsTrayContainer tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x00010123ad1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123ad20) */

void FUN_10123ace0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10123af04(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10123ad34; end: 10123ad4f; -[_TtC19AudioEffectsFeature25AudioEffectsTrayContainer tray:heightForPosition:] */

undefined8 FUN_10123ad34(void)

{
  long in_x3;
  undefined8 uVar1;
  
  uVar1 = 0x4073400000000000;
  if (in_x3 != 8) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10123ad50; end: 10123ad93; -[_TtC19AudioEffectsFeature25AudioEffectsTrayContainer defaultShakeToReportProjectName] */

void FUN_10123ad50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070160();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10123ad94; end: 10123aee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10123ad94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar3 = param_4 + _DAT_112d6a9b8;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  puVar1 = (undefined8 *)(param_4 + _DAT_112d6a9b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_4 + _DAT_112d6a9a8) = param_2;
  puVar2 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c48e84();
  *(undefined **)(param_4 + _DAT_112d6a9a0) = puVar2;
  *(undefined8 *)(lVar3 + 8) = param_6;
  func_0x000107c61604(lVar3,param_3);
  FUN_10123aee4();
  lStack_60 = param_4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  lVar3 = _DAT_112d6a9a0;
  uVar6 = *(undefined8 *)((long)plVar4 + _DAT_112d6a9a0);
  puVar5 = (undefined1 *)plVar4;
  func_0x000107c61174();
  func_0x000107c5a074(uVar6);
  func_0x000107c52684(*(undefined8 *)((long)plVar4 + lVar3));
  func_0x000107c5a070(*(undefined8 *)((long)plVar4 + lVar3));
  func_0x000107c5a06c(*(undefined8 *)((long)plVar4 + lVar3));
  func_0x000107c5a05c(*(undefined8 *)((long)plVar4 + lVar3));
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar5;
}


