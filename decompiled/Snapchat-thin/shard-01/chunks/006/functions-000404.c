/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10124cb0c; end: 10124cb13; -[_TtC24MyProfile3Implementation21SharingActionHandlers handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_10124cb0c(void)

{
  return 0;
}



/* Entry: 10124cb14; end: 10124cb5f; -[_TtC24MyProfile3Implementation21SharingActionHandlers shareSheetDismissedWithShareDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124cb14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6b398);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10124cb60; end: 10124cbd7; -[_TtC24MyProfile3Implementation21SharingActionHandlers qrCodeCardPageDidDismiss] */

/* WARNING: Possible PIC construction at 0x00010124cb9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010124cba0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124cb60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6b3a0);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000103a94398();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10124cbd8; end: 10124cc0b;  */

void FUN_10124cbd8(long param_1,long param_2)

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



/* Entry: 10124cc0c; end: 10124cc2b;  */

void FUN_10124cc0c(void)

{
  func_0x000107c61168(&PTR_PTR_1127bf430);
  return;
}



/* Entry: 10124cc2c; end: 10124cc43;  */

void FUN_10124cc2c(long param_1,long param_2)

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



/* Entry: 10124cc44; end: 10124cd6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10124cc44(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = unaff_x20 + _DAT_112d6b408;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000100672b50(param_1,auStack_70);
    if (lStack_58 == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      func_0x0001006732c8(auStack_70,lStack_58);
      lVar4 = *(long *)(lStack_58 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
      puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar4 + 0x10))(puVar2);
      puVar3 = puVar2;
      func_0x000107c605b0(puVar2,lStack_58);
      (**(code **)(lVar4 + 8))(puVar2,lStack_58);
      func_0x000100183ab8(auStack_70);
    }
    lVar4 = lVar1;
    func_0x000107c445ac(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(puVar3);
  }
  return lVar4;
}



/* Entry: 10124cd6c; end: 10124ce33; -[_TtC24MyProfile3Implementation27MyProfile3PageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

uint FUN_10124cd6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10124cc44(&uStack_50,param_4,param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10124ce34; end: 10124ce87; -[_TtC24MyProfile3Implementation27MyProfile3PageActionHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124ce34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6b408,0);
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10124ce88; end: 10124cebb;  */

void FUN_10124ce88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10124cebc; end: 10124cecb; -[_TtC24MyProfile3Implementation27MyProfile3PageActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10124cebc(long param_1)

{
  param_1 = param_1 + _DAT_112d6b408;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10124cecc; end: 10124ceeb;  */

void FUN_10124cecc(void)

{
  func_0x000107c61168(&PTR_PTR_1127bf620);
  return;
}



/* Entry: 10124ceec; end: 10124cf53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124ceec(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d6b408;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b43e0;
    func_0x000107c61168(PTR_PTR_1126b43e0);
    lVar3 = lVar1;
    func_0x000107c6148c(lVar1,puVar2);
    if (lVar3 != 0) {
      func_0x000107c3dd30();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10124cf54; end: 10124d06f; -[_TtC24MyProfile3Implementation23JoinedStoryStreamBridge observeLivePublicStoryWithBusinessProfileId:onChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124cf54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c60bc4();
  puVar2 = &UNK_110398040;
  func_0x000107c613fc(&UNK_110398040,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d6b438);
  pcStack_50 = FUN_10124d16c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10124d190;
  puStack_58 = &UNK_110398058;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4da6c(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10124d070; end: 10124d0cb;  */

void FUN_10124d070(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10105686c(0);
  func_0x000107c5fc48(param_2,uVar1);
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10124d0cc; end: 10124d0db; -[_TtC24MyProfile3Implementation23JoinedStoryStreamBridge tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124d0cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d6b438),PTR_s_tearDown_112678508);
  return;
}



/* Entry: 10124d0dc; end: 10124d13b; -[_TtC24MyProfile3Implementation23JoinedStoryStreamBridge init] */

void FUN_10124d0dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Implementation.JoinedStoryStreamBridge",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10124d108);
  (*pcVar1)();
}



/* Entry: 10124d13c; end: 10124d14b; -[_TtC24MyProfile3Implementation23JoinedStoryStreamBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124d13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6b438));
  return;
}



/* Entry: 10124d14c; end: 10124d16b;  */

void FUN_10124d14c(void)

{
  func_0x000107c61168(&PTR_PTR_1127bf6d8);
  return;
}



/* Entry: 10124d16c; end: 10124d18f;  */

void FUN_10124d16c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_10105686c(0);
  func_0x000107c5fc48(param_2,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10124d190; end: 10124d21f;  */

void FUN_10124d190(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_101251784(0,0x112d56e50,&PTR_PTR_1126cc4e0);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10124d220; end: 10124d22f;  */

void FUN_10124d220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10124d230; end: 10124d483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124d230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uStack_90 = param_4;
  uStack_88 = param_5;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_112d6b478) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6b480) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6b4c8) = 0;
  lVar2 = _DAT_112d6b488;
  func_0x0001000285a8(0x112d6b768,&UNK_10d92e9f8);
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _DAT_112d6b490;
  (**(code **)(lVar6 + 0x68))
            (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar3);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000004f;
  func_0x000107c5fadc(0xd00000000000004f,0x800000010ef31870);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar6 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d6b498;
  lVar3 = 0;
  func_0x0001012512f0();
  func_0x000107c613fc();
  *(undefined1 *)(lVar3 + 0x10) = 0;
  *(long *)(unaff_x20 + lVar2) = lVar3;
  *(undefined **)(unaff_x20 + _DAT_112d6b4a0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112d6b4a8) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112d6b4b0) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112d6b4d0) = 0;
  lVar2 = _DAT_112d6b4b8;
  func_0x000100078e94();
  func_0x000107c61180();
  *(long *)(unaff_x20 + lVar2) = lVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6b468);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6b470);
  *puVar1 = uStack_90;
  puVar1[1] = uStack_88;
  *(undefined8 *)(unaff_x20 + _DAT_112d6b4c0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10124d484; end: 10124d5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124d484(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  func_0x000107c614f0();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d6b490);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d6b488);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6b498);
  puVar1 = &UNK_1103989c8;
  func_0x000107c613fc(&UNK_1103989c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  pcStack_60 = FUN_101251884;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103989e0;
  ppuVar2 = &puStack_80;
  puStack_58 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_58;
  func_0x000107c61580(uVar4,2);
  func_0x000107c61580(uVar3,2);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10124d5b8; end: 10124d5db; -[_TtC24MyProfile3Implementation31LocalStoryStoreObservableBridge dealloc] */

void FUN_10124d5b8(void)

{
  func_0x000107c61174();
  FUN_10124d484();
  return;
}



/* Entry: 10124d5dc; end: 10124d6ab; -[_TtC24MyProfile3Implementation31LocalStoryStoreObservableBridge .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010124d620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010124d624) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124d5dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6b468 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6b470 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d6b478));
  return;
}



/* Entry: 10124d6ac; end: 10124d7cf;  */

void FUN_10124d6ac(long param_1,code *param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10124d7d0; end: 10124da53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124d7d0(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar6 = &puStack_80;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6b490);
  lVar2 = 0;
  func_0x000101251330();
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x7a) = 0;
  *(undefined8 *)(lVar2 + 0x72) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar8;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  if (param_3 != 0) {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d6b4b8);
      puVar4 = &UNK_110398090;
      func_0x000107c613fc(&UNK_110398090,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_1103986d0;
      func_0x000107c613fc(&UNK_1103986d0,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(ulong *)(puVar5 + 0x18) = param_2;
      *(ulong *)(puVar5 + 0x20) = param_3;
      *(long *)(puVar5 + 0x28) = lVar2;
      pcStack_60 = FUN_1012516ec;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1103986e8;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c61174(uVar8);
      func_0x000107c6157c(param_1);
      func_0x000107c61434(param_3);
      func_0x000107c6157c(lVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c4e590(uVar9);
      func_0x000107c60bd0(ppuVar3);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      pcVar7 = FUN_1012516f8;
      goto LAB_10124da28;
    }
  }
  puVar4 = &UNK_110398658;
  func_0x000107c613fc(&UNK_110398658,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,lVar2);
  puVar5 = &UNK_110398680;
  func_0x000107c613fc(&UNK_110398680,0x19,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  puVar5[0x18] = 0;
  pcStack_60 = (code *)0x1012516b8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110398698;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(uVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  pcVar7 = FUN_1012516c4;
LAB_10124da28:
  func_0x0001000b6d50(pcVar7,lVar2);
  return;
}



/* Entry: 10124da54; end: 10124db73; -[_TtC24MyProfile3Implementation31LocalStoryStoreObservableBridge observeLivePublicStoryWithBusinessProfileId:] */

void FUN_10124da54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = &UNK_110398090;
  func_0x000107c613fc(&UNK_110398090,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110398630;
  func_0x000107c613fc(&UNK_110398630,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(long *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x0001000285a8(0x112d6b760,&UNK_10d92e9f0);
  func_0x000107c613fc();
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_1);
  uVar3 = 0x1012516ac;
  func_0x0001000b64ac(0x1012516ac,puVar2);
  uVar4 = uVar3;
  func_0x0001004575f0();
  func_0x000107c61574(uVar3);
  uVar3 = uVar4;
  func_0x000107c5cb24(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10124db74; end: 10124e107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124db74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112d6b480;
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + _DAT_112d6b480);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (**(code **)(param_1 + _DAT_112d6b470))();
    uVar12 = *(ulong *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar1;
    lVar2 = lVar1;
    func_0x000107c61174();
    func_0x000107c61170();
    lVar3 = _DAT_112d6b478;
    if (lVar1 == 0) {
      uVar11 = *(ulong *)(param_1 + _DAT_112d6b478);
      uVar9 = uVar11;
      if (uVar11 == 0) {
        (**(code **)(param_1 + _DAT_112d6b468))();
        uVar10 = *(undefined8 *)(param_1 + lVar3);
        *(ulong *)(param_1 + lVar3) = uVar12;
        func_0x000107c615f0();
        func_0x000107c615e8(uVar10);
        uVar9 = uVar12;
        if (uVar12 == 0) {
          uVar10 = *(undefined8 *)(param_4 + 0x10);
          puVar6 = &UNK_110398658;
          func_0x000107c613fc(&UNK_110398658,0x18,7);
          func_0x000107c61644(puVar6 + 0x10,param_4);
          puVar7 = &UNK_110398748;
          func_0x000107c613fc(&UNK_110398748,0x19,7);
          *(undefined **)(puVar7 + 0x10) = puVar6;
          puVar7[0x18] = 1;
          pcStack_88 = (code *)0x1012519c8;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = (code *)&UNK_1000f6b44;
          puStack_90 = &UNK_110398760;
          ppuVar8 = &puStack_a8;
          puStack_80 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_80);
          func_0x000107c4e524(uVar10);
          func_0x000107c60bd0(ppuVar8);
          goto LAB_10124e0fc;
        }
      }
      uVar12 = uVar9;
      func_0x000107c61150(uVar9,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_observeLivePublicStoryWithBusine_112615d60);
      if ((uVar12 & 1) == 0) {
        uVar10 = *(undefined8 *)(param_4 + 0x10);
        puVar6 = &UNK_110398658;
        func_0x000107c613fc(&UNK_110398658,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,param_4);
        puVar7 = &UNK_110398798;
        func_0x000107c613fc(&UNK_110398798,0x19,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        puVar7[0x18] = 1;
        pcStack_88 = (code *)0x1012519cc;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = (code *)&UNK_1000f6b44;
        puStack_90 = &UNK_1103987b0;
        ppuVar8 = &puStack_a8;
        puStack_80 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        puVar6 = puStack_80;
        func_0x000107c615f0(uVar11);
        func_0x000107c61574(puVar6);
        func_0x000107c4e524(uVar10);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(uVar9);
        return;
      }
      uVar12 = uVar9;
      func_0x000107c61150(uVar9,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_observeLivePublicStoryWithBusine_112615d60);
      if ((uVar12 & 1) == 0) {
        func_0x000107c615f0(uVar11);
        func_0x000107c615e8(uVar9);
LAB_10124e0fc:
        func_0x000107c61170(param_1);
        return;
      }
      puVar7 = &UNK_110398658;
      puVar4 = puVar7;
      func_0x000107c613fc(&UNK_110398658,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,param_4);
      func_0x000107c613fc(&UNK_110398658,0x18,7);
      func_0x000107c61644(puVar7 + 0x10,param_4);
      func_0x000107c615f0(uVar11);
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(puVar7);
      func_0x000107c5fadc(param_2,param_3);
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = (code *)0x101251728;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_100f11160;
      puStack_90 = &UNK_1103987d8;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar4;
      func_0x000107c60bc4(ppuVar8);
      pcStack_b8 = FUN_101251730;
      puStack_d8 = puVar6;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000f6b44;
      puStack_c0 = &UNK_110398800;
      ppuVar5 = &puStack_d8;
      puStack_b0 = puVar7;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c4da70(uVar9);
      func_0x000107c615e8(uVar9);
      func_0x000107c61170(param_1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(param_2);
      func_0x000107c61574(puStack_b0);
      puVar6 = puStack_80;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar7);
      goto LAB_10124dd94;
    }
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  func_0x000107c5fadc(param_2,param_3);
  puVar6 = &UNK_110398658;
  func_0x000107c613fc(&UNK_110398658,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,param_4);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_101251760;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10124d190;
  puStack_90 = &UNK_110398828;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_80);
  lVar3 = lVar2;
  func_0x000107c4da6c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(param_2);
  puVar6 = &UNK_110398860;
  func_0x000107c613fc(&UNK_110398860,0x18,7);
  *(long *)(puVar6 + 0x10) = lVar3;
  uVar10 = *(undefined8 *)(param_4 + 0x10);
  puVar7 = &UNK_110398888;
  func_0x000107c613fc(&UNK_110398888,0x28,7);
  *(long *)(puVar7 + 0x10) = param_4;
  *(undefined8 *)(puVar7 + 0x18) = 0x101251768;
  *(undefined **)(puVar7 + 0x20) = puVar6;
  pcStack_88 = (code *)0x101251778;
  puStack_a8 = puVar4;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_1103988a0;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_80;
  func_0x000107c615f0(lVar3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c4e524(uVar10);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(lVar3);
LAB_10124dd94:
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 10124e108; end: 10124e423;  */

void FUN_10124e108(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x000107c4aa58();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lStack_c8 = 0;
      puStack_b0 = (undefined1 *)0x0;
      puVar9 = puVar7;
    }
    else {
      lStack_c8 = lVar1;
      func_0x000107c5faec();
      puVar9 = puVar7;
      func_0x000107c61170(lVar1);
      puStack_b0 = puVar7;
    }
    lVar1 = param_1;
    func_0x000107c4f5e8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lStack_d0 = 0;
      puStack_b8 = (undefined1 *)0x0;
      puVar7 = puVar9;
    }
    else {
      lStack_d0 = lVar1;
      func_0x000107c5faec();
      puVar7 = puVar9;
      func_0x000107c61170(lVar1);
      puStack_b8 = puVar9;
    }
    lVar1 = param_1;
    func_0x000107c4f5ec();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar10 = 0;
      puStack_c0 = (undefined1 *)0x0;
      puVar9 = puVar7;
    }
    else {
      lVar10 = lVar1;
      func_0x000107c5faec();
      puVar9 = puVar7;
      func_0x000107c61170(lVar1);
      puStack_c0 = puVar7;
    }
    lVar1 = param_1;
    func_0x000107c4f5f4();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c4f5f0();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lStack_e0 = 0;
      puVar9 = (undefined1 *)0x0;
    }
    else {
      lStack_e0 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    lVar2 = param_1;
    func_0x000107c4f618();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar2;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar2);
    }
    lVar2 = param_1;
    func_0x000107c4f61c();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c4ec00();
    func_0x000107c5d72c();
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    puVar4 = &UNK_110398658;
    func_0x000107c613fc(&UNK_110398658,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,param_3);
    puVar5 = &UNK_1103988d8;
    func_0x000107c613fc(&UNK_1103988d8,0x78,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    puVar5[0x18] = (char)lVar3;
    puVar5[0x19] = (char)param_1;
    *(long *)(puVar5 + 0x20) = lStack_c8;
    *(undefined1 **)(puVar5 + 0x28) = puStack_b0;
    *(long *)(puVar5 + 0x30) = lStack_d0;
    *(undefined1 **)(puVar5 + 0x38) = puStack_b8;
    *(long *)(puVar5 + 0x40) = lVar10;
    *(undefined1 **)(puVar5 + 0x48) = puStack_c0;
    *(long *)(puVar5 + 0x50) = lVar1;
    *(long *)(puVar5 + 0x58) = lStack_e0;
    *(undefined1 **)(puVar5 + 0x60) = puVar9;
    *(long *)(puVar5 + 0x68) = lVar11;
    *(long *)(puVar5 + 0x70) = lVar2;
    pcStack_88 = FUN_1012517c4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1103988f0;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_80;
    func_0x000107c61434(lVar11);
    func_0x000107c61174(lVar2);
    func_0x000107c61434(puStack_b0);
    func_0x000107c61434(puStack_b8);
    func_0x000107c61434(puStack_c0);
    func_0x000107c61174(lVar1);
    func_0x000107c61434(puVar9);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(param_3);
    func_0x000107c6142c(puStack_b0);
    func_0x000107c6142c(puStack_b8);
    func_0x000107c6142c(puStack_c0);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(lVar11);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10124e424; end: 10124e53f;  */

void FUN_10124e424(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    puVar1 = &UNK_110398658;
    func_0x000107c613fc(&UNK_110398658,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_3);
    puVar2 = &UNK_110398950;
    func_0x000107c613fc(&UNK_110398950,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    pcStack_68 = FUN_10125184c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110398968;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_60;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10124e540; end: 10124e5eb;  */

void FUN_10124e540(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    FUN_10124e5ec(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10124e5ec; end: 10124e763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124e5ec(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d6b490);
  lVar1 = 0;
  func_0x000101251310();
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d6b4b8);
  puVar2 = &UNK_110398090;
  func_0x000107c613fc(&UNK_110398090,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110398388;
  func_0x000107c613fc(&UNK_110398388,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,lVar1);
  puVar4 = &UNK_1103983b0;
  func_0x000107c613fc(&UNK_1103983b0,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_50 = 0x1012515e4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103983c8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(uVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(FUN_1012515ec,lVar1);
  return;
}



/* Entry: 10124e764; end: 10124e82b; -[_TtC24MyProfile3Implementation31LocalStoryStoreObservableBridge observeOwnedStoryState] */

void FUN_10124e764(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110398090;
  func_0x000107c613fc(&UNK_110398090,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x0001000285a8(0x112d6b758,&UNK_10d92e9e8);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  pcVar2 = FUN_1012515dc;
  func_0x0001000b64ac(FUN_1012515dc,puVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar2);
  pcVar2 = pcVar3;
  func_0x000107c5cb24(pcVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 10124e82c; end: 10124ed0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124e82c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  ppuVar7 = &puStack_d0;
  ppuVar8 = &puStack_d0;
  ppuVar9 = &puStack_d0;
  ppuVar10 = &puStack_d0;
  ppuVar11 = &puStack_d0;
  ppuVar14 = &puStack_d0;
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  uVar2 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_a0,0,0);
  uVar3 = param_2 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_112d6b478;
  if (uVar3 == 0) {
LAB_10124e8bc:
    func_0x000107c61170(uVar2);
  }
  else {
    uVar15 = *(ulong *)(uVar2 + _DAT_112d6b478);
    uVar4 = uVar15;
    if (uVar15 == 0) {
      uVar4 = uVar3;
      (**(code **)(uVar2 + _DAT_112d6b468))();
      uVar16 = *(undefined8 *)(uVar2 + lVar1);
      *(ulong *)(uVar2 + lVar1) = uVar4;
      func_0x000107c615f0();
      func_0x000107c615e8(uVar16);
      if (uVar4 == 0) {
        uVar16 = *(undefined8 *)(uVar3 + 0x10);
        puVar12 = &UNK_110398388;
        func_0x000107c613fc(&UNK_110398388,0x18,7);
        func_0x000107c61644(puVar12 + 0x10,uVar3);
        puVar13 = &UNK_110398428;
        func_0x000107c613fc(&UNK_110398428,0x19,7);
        *(undefined **)(puVar13 + 0x10) = puVar12;
        puVar13[0x18] = 1;
        pcStack_b0 = (code *)0x10125161c;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_1000f6b44;
        puStack_b8 = &UNK_110398440;
        puStack_a8 = puVar13;
        func_0x000107c60bc4(&puStack_d0);
        func_0x000107c61574(puStack_a8);
        func_0x000107c4e524(uVar16);
        func_0x000107c60bd0(ppuVar14);
        func_0x000107c61170(uVar2);
        func_0x000107c61574(uVar3);
        return;
      }
    }
    uVar5 = uVar4;
    func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_observeOwnedStoryState_112615dd0);
    if ((uVar5 & 1) == 0) {
      func_0x000107c615f0(uVar15);
    }
    else {
      uVar5 = uVar4;
      func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_observeOwnedStoryState_112615dd0);
      func_0x000107c615f0(uVar15);
      if ((uVar5 & 1) != 0) {
        uVar15 = uVar4;
        func_0x000107c4da90();
        func_0x000107c61180();
        if (uVar15 != 0) {
          puVar12 = &UNK_110398388;
          puVar6 = puVar12;
          func_0x000107c613fc(&UNK_110398388,0x18,7);
          func_0x000107c61644(puVar6 + 0x10,uVar3);
          puVar13 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_b0 = (code *)0x101251628;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0x42000000;
          puStack_c0 = (undefined *)0x1012519d4;
          puStack_b8 = &UNK_1103984b8;
          puStack_a8 = puVar6;
          func_0x000107c60bc4(&puStack_d0);
          puVar6 = puStack_a8;
          func_0x000107c6157c(uVar3);
          func_0x000107c61574(puVar6);
          puVar6 = puVar12;
          func_0x000107c613fc(&UNK_110398388,0x18,7);
          func_0x000107c61644(puVar6 + 0x10,uVar3);
          pcStack_b0 = (code *)0x101251630;
          puStack_d0 = puVar13;
          uStack_c8 = 0x42000000;
          puStack_c0 = (undefined *)0x1012519d0;
          puStack_b8 = &UNK_1103984e0;
          puStack_a8 = puVar6;
          func_0x000107c60bc4(&puStack_d0);
          func_0x000107c61574(puStack_a8);
          func_0x000107c613fc(&UNK_110398388,0x18,7);
          func_0x000107c61644(puVar12 + 0x10,uVar3);
          func_0x000107c61574(uVar3);
          pcStack_b0 = FUN_101251638;
          puStack_d0 = puVar13;
          uStack_c8 = 0x42000000;
          puStack_c0 = &UNK_1000f6b44;
          puStack_b8 = &UNK_110398508;
          puStack_a8 = puVar12;
          func_0x000107c60bc4(&puStack_d0);
          func_0x000107c61574(puStack_a8);
          uVar5 = uVar15;
          func_0x000107c5c34c();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c60bd0(ppuVar7);
          uVar16 = *(undefined8 *)(uVar3 + 0x10);
          puVar12 = &UNK_110398540;
          func_0x000107c613fc(&UNK_110398540,0x20,7);
          *(ulong *)(puVar12 + 0x10) = uVar3;
          *(ulong *)(puVar12 + 0x18) = uVar5;
          pcStack_b0 = FUN_101251668;
          puStack_d0 = puVar13;
          uStack_c8 = 0x42000000;
          puStack_c0 = &UNK_1000f6b44;
          puStack_b8 = &UNK_110398558;
          puStack_a8 = puVar12;
          func_0x000107c60bc4(&puStack_d0);
          puVar12 = puStack_a8;
          func_0x000107c6157c(uVar3);
          func_0x000107c61174(uVar5);
          func_0x000107c61574(puVar12);
          func_0x000107c4e524(uVar16);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(uVar3);
          func_0x000107c615e8(uVar4);
          func_0x000107c61170(uVar15);
          uVar2 = uVar5;
          goto LAB_10124e8bc;
        }
      }
    }
    uVar16 = *(undefined8 *)(uVar3 + 0x10);
    puVar12 = &UNK_110398388;
    func_0x000107c613fc(&UNK_110398388,0x18,7);
    func_0x000107c61644(puVar12 + 0x10,uVar3);
    puVar13 = &UNK_110398478;
    func_0x000107c613fc(&UNK_110398478,0x19,7);
    *(undefined **)(puVar13 + 0x10) = puVar12;
    puVar13[0x18] = 1;
    pcStack_b0 = (code *)0x1012519c4;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_110398490;
    puStack_a8 = puVar13;
    func_0x000107c60bc4(&puStack_d0);
    func_0x000107c61574(puStack_a8);
    func_0x000107c4e524(uVar16);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(uVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 10124ed0c; end: 10124ee1f;  */

void FUN_10124ed0c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    puVar1 = &UNK_110398388;
    func_0x000107c613fc(&UNK_110398388,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    puVar2 = &UNK_1103985e0;
    func_0x000107c613fc(&UNK_1103985e0,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    pcStack_68 = FUN_1012516a4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1103985f8;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_60;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10124ee20; end: 10124ef4f;  */

void FUN_10124ee20(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar1 = &UNK_110398388;
    func_0x000107c613fc(&UNK_110398388,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    uStack_58 = 0x1012519d8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1103985a8;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10124ef50; end: 10124f02f;  */

void FUN_10124ef50(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c613fc(param_2,0x18,7);
    func_0x000107c61644(param_2 + 0x10,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    ppuVar1 = &puStack_88;
    uStack_70 = param_4;
    uStack_68 = param_3;
    lStack_60 = param_2;
    func_0x000107c60bc4(ppuVar1);
    func_0x000107c61574(lStack_60);
    func_0x000107c4e524(uVar2);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10124f030; end: 10124f1c3;  */

void FUN_10124f030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_3;
  uStack_40 = param_2;
  lStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  lVar1 = lStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10124f1c4; end: 10124f6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124f1c4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  uVar2 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  if ((*(byte *)(uVar2 + _DAT_112d6b4c8) & 1) != 0) {
    func_0x000107c61170();
    return;
  }
  *(undefined1 *)(uVar2 + _DAT_112d6b4c8) = 1;
  lVar1 = _DAT_112d6b478;
  uVar10 = *(ulong *)(uVar2 + _DAT_112d6b478);
  uVar3 = uVar10;
  if (uVar10 == 0) {
    uVar3 = uVar2;
    (**(code **)(uVar2 + _DAT_112d6b468))();
    uVar11 = *(undefined8 *)(uVar2 + lVar1);
    *(ulong *)(uVar2 + lVar1) = uVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar11);
    if (uVar3 == 0) {
      puVar6 = &UNK_1103980e0;
      func_0x000107c613fc(&UNK_1103980e0,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = 0x5f676e697373696d;
      *(undefined8 *)(puVar6 + 0x18) = 0xed000065726f7473;
      uVar11 = *(undefined8 *)(uVar2 + _DAT_112d6b490);
      puVar7 = &UNK_110398090;
      func_0x000107c613fc(&UNK_110398090,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,uVar2);
      puVar8 = &UNK_110398108;
      func_0x000107c613fc(&UNK_110398108,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(undefined8 *)(puVar8 + 0x18) = 0x101251374;
      *(undefined **)(puVar8 + 0x20) = puVar6;
      uStack_88 = 0x10125137c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110398120;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_80;
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(uVar11);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(uVar2);
      goto LAB_10124f6bc;
    }
  }
  uVar4 = uVar3;
  func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_observeSpotlightPostingProgressW_112615e50);
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar3;
    func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_observeSpotlightPostingProgressW_112615e50);
    if ((uVar4 & 1) == 0) {
      func_0x000107c615f0(uVar10);
    }
    else {
      puVar6 = &UNK_110398090;
      puVar8 = puVar6;
      func_0x000107c613fc(&UNK_110398090,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,uVar2);
      func_0x000107c613fc(&UNK_110398090,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar2);
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x101251388;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110398210;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      uStack_b8 = 0x101251390;
      puStack_d8 = puVar7;
      uStack_d0 = 0x42000000;
      pcStack_c8 = FUN_10124f6e0;
      puStack_c0 = &UNK_110398238;
      ppuVar5 = &puStack_d8;
      puStack_b0 = puVar6;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c615f0(uVar10);
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar6);
      func_0x000107c4dab0(uVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puStack_b0);
      puVar7 = puStack_80;
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
    }
    uVar11 = *(undefined8 *)(uVar2 + _DAT_112d6b490);
    puVar6 = &UNK_110398090;
    func_0x000107c613fc(&UNK_110398090,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,uVar2);
    puVar7 = &UNK_1103981d0;
    func_0x000107c613fc(&UNK_1103981d0,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(code **)(puVar7 + 0x18) = FUN_10125001c;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    uStack_88 = 0x1012519e4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1103981e8;
    ppuVar9 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_80);
    func_0x000107c4e524(uVar11);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar3);
    return;
  }
  puVar6 = &UNK_110398158;
  func_0x000107c613fc(&UNK_110398158,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0xd000000000000013;
  *(undefined8 *)(puVar6 + 0x18) = 0x800000010ef31850;
  uVar11 = *(undefined8 *)(uVar2 + _DAT_112d6b490);
  puVar7 = &UNK_110398090;
  func_0x000107c613fc(&UNK_110398090,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,uVar2);
  puVar8 = &UNK_110398180;
  func_0x000107c613fc(&UNK_110398180,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined8 *)(puVar8 + 0x18) = 0x1012519c0;
  *(undefined **)(puVar8 + 0x20) = puVar6;
  uStack_88 = 0x1012519e0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110398198;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar7 = puStack_80;
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c4e524(uVar11);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
LAB_10124f6bc:
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 10124f6e0; end: 10124f757;  */

void FUN_10124f6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,uVar3,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10124f758; end: 10124f867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124f758(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112d6b490);
    puVar1 = &UNK_110398090;
    func_0x000107c613fc(&UNK_110398090,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    puVar2 = &UNK_1103982e8;
    func_0x000107c613fc(&UNK_1103982e8,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(code **)(puVar2 + 0x18) = FUN_10124f868;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    uStack_58 = 0x1012519ec;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110398300;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10124f868; end: 10124f887;  */

void FUN_10124f868(void)

{
  FUN_10124f888();
  return;
}



/* Entry: 10124f888; end: 10124fb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124f888(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *apuStack_78 [3];
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)&pcStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_80 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (lVar9 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12_01;
  uStack_88 = *(undefined8 *)(unaff_x20 + _DAT_112d6b490);
  func_0x000107c3e208();
  func_0x000107c5eec4(lVar8);
  pcStack_90 = *(code **)(lVar12 + 0x10);
  (*pcStack_90)(lVar7,lVar8,lVar3);
  lVar1 = _DAT_112d6b4a0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6b4a0,apuStack_78,0x21,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar1);
  uVar4 = uVar10;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + lVar1) = uVar10;
  uVar6 = uVar10;
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
    FUN_1012744bc(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    *(ulong *)(unaff_x20 + lVar1) = uVar6;
  }
  uVar4 = *(ulong *)(uVar6 + 0x10);
  uVar10 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_1012744bc(uVar10,uVar4 + 1,1,uVar6);
  }
  *(ulong *)(uVar10 + 0x10) = uVar4 + 1;
  (**(code **)(lVar12 + 0x20))
            (uVar10 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)) +
             *(long *)(lVar12 + 0x48) * uVar4,lVar7,lVar3);
  *(ulong *)(unaff_x20 + lVar1) = uVar10;
  func_0x000107c614a8(apuStack_78);
  pcVar2 = pcStack_90;
  (*pcStack_90)(lVar9,lVar8,lVar3);
  func_0x000107c61428(unaff_x20 + _DAT_112d6b4a8,apuStack_78,0x21,0);
  lVar1 = lStack_80;
  FUN_10125e704(lStack_80,lVar9);
  func_0x000107c614a8(apuStack_78);
  pcVar11 = *(code **)(lVar12 + 8);
  (*pcVar11)(lVar1,lVar3);
  (*pcVar2)(lVar9,lVar8,lVar3);
  func_0x000107c61428(unaff_x20 + _DAT_112d6b4b0,apuStack_78,0x21,0);
  FUN_10125e704(lVar1,lVar9);
  func_0x000107c614a8(apuStack_78);
  (*pcVar11)(lVar1,lVar3);
  FUN_1012502e0(lVar8);
  func_0x000107c3e208(uStack_88);
  puVar5 = PTR_PTR_1126a6788;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c55340();
  func_0x000107c55210(puVar5);
  apuStack_78[0] = puVar5;
  func_0x000100087c34(apuStack_78);
  func_0x000107c61170(puVar5);
  (*pcVar11)(lVar8,lVar3);
  return;
}



/* Entry: 10124fb70; end: 10124fcdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124fb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    puVar1 = &UNK_110398270;
    func_0x000107c613fc(&UNK_110398270,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    uVar5 = *(undefined8 *)(param_4 + _DAT_112d6b490);
    puVar2 = &UNK_110398090;
    func_0x000107c613fc(&UNK_110398090,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_4);
    puVar3 = &UNK_110398298;
    func_0x000107c613fc(&UNK_110398298,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = 0x101251398;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    uStack_78 = 0x1012519e8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103982b0;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_70;
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_4);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 10124fcdc; end: 10124fd67;  */

void FUN_10124fcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  uVar1 = 0;
  FUN_101251784(0,0x112d44bc0,&PTR_PTR_1126e1b70);
  auStack_50[0] = param_4;
  uStack_38 = uVar1;
  func_0x000107c61174(param_4);
  FUN_10124fd68(param_2,param_3,auStack_50);
  FUN_10125156c(auStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 10124fd68; end: 10125001b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124fd68(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d3bc20;
  uStack_a0 = param_1;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_a0 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d6b490);
  func_0x000107c3e208(uVar7);
  lVar2 = _DAT_112d6b4a0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6b4a0,auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    (**(code **)(lVar5 + 0x10))
              (lVar9,lVar6 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)),lVar3);
    func_0x000107c61428(unaff_x20 + lVar2,auStack_90,0x21,0);
    if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10125001c);
      (*pcVar1)();
    }
    FUN_1012514b0(0,1);
    func_0x000107c614a8(auStack_90);
    func_0x000107c61428(unaff_x20 + _DAT_112d6b4a8,auStack_90,0x21,0);
    FUN_101274b5c(lVar8,lVar9);
    func_0x000107c614a8(auStack_90);
    FUN_10125156c(lVar8,0x112d3bc20,&UNK_10d904ef0);
    func_0x000107c61428(unaff_x20 + _DAT_112d6b4b0,auStack_90,0x21,0);
    FUN_101274b5c(lVar8,lVar9);
    func_0x000107c614a8(auStack_90);
    FUN_10125156c(lVar8,0x112d3bc20,&UNK_10d904ef0);
    (**(code **)(lVar5 + 8))(lVar9,lVar3);
  }
  func_0x000107c61428(unaff_x20 + _DAT_112d6b4b0,auStack_90,0,0);
  func_0x000107c3e208(uVar7);
  puVar4 = PTR_PTR_1126a6788;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c55340();
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = uStack_a0;
    func_0x000107c5fadc(uStack_a0,param_2);
  }
  func_0x000107c55210(puVar4);
  func_0x000107c61170(uVar7);
  FUN_101250630(param_3,puVar4);
  puStack_98 = puVar4;
  func_0x000100087c34(&puStack_98);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10125001c; end: 1012500c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125001c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6b490);
  func_0x000107c3e208(uVar2);
  if ((*(byte *)(param_1 + _DAT_112d6b4d0) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112d6b4d0) = 1;
    func_0x000107c3e208(uVar2);
    puVar1 = PTR_PTR_1126a6788;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c55340();
    func_0x000107c55210(puVar1,param_2,0);
    puStack_38 = puVar1;
    func_0x000100087c34(&puStack_38);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1012500c4; end: 101250253;  */

uint FUN_1012500c4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar4 = *param_1;
  uVar3 = *param_2;
  uVar1 = uVar4;
  func_0x000107c452bc();
  uVar7 = uVar3;
  func_0x000107c452bc();
  if ((int)uVar1 == (int)uVar7) {
    uVar1 = uVar4;
    func_0x000107c452bc();
    func_0x000107c44fcc();
    func_0x000107c61180();
    uVar7 = uVar4;
    if ((uVar1 & 1) == 0) {
      if (uVar4 == 0) {
        uVar7 = 0;
        puVar5 = (ulong *)0x0;
        puVar2 = param_2;
      }
      else {
        func_0x000107c5faec();
        puVar2 = param_2;
        func_0x000107c61170(uVar4);
        puVar5 = param_2;
      }
      func_0x000107c44fcc();
      func_0x000107c61180();
      if (uVar3 == 0) {
        if (puVar5 == (ulong *)0x0) goto LAB_10125024c;
      }
      else {
        uVar1 = uVar3;
        func_0x000107c5faec();
        func_0x000107c61170(uVar3);
        if (puVar5 == (ulong *)0x0) {
          if (puVar2 != (ulong *)0x0) {
            uVar6 = 0;
            goto LAB_10125022c;
          }
LAB_10125024c:
          uVar6 = 1;
          goto LAB_101250234;
        }
        if (puVar2 != (ulong *)0x0) goto LAB_1012501cc;
      }
LAB_1012501f0:
      puVar2 = puVar5;
      uVar6 = 0;
    }
    else {
      if (uVar4 == 0) goto LAB_1012500fc;
      func_0x000107c5faec();
      puVar2 = param_2;
      func_0x000107c61170(uVar4);
      func_0x000107c44fcc();
      func_0x000107c61180();
      puVar5 = param_2;
      if (uVar3 == 0) goto LAB_1012501f0;
      uVar1 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
LAB_1012501cc:
      if ((uVar7 == uVar1) && (puVar5 == puVar2)) {
        func_0x000107c6142c(puVar5);
        uVar6 = 1;
      }
      else {
        func_0x000107c605b8(uVar7,puVar5,uVar1,puVar2,0);
        uVar6 = (uint)uVar7;
        func_0x000107c6142c(puVar5);
      }
    }
LAB_10125022c:
    func_0x000107c6142c(puVar2);
  }
  else {
LAB_1012500fc:
    uVar6 = 0;
  }
LAB_101250234:
  return uVar6 & 1;
}



/* Entry: 101250254; end: 1012502df; -[_TtC24MyProfile3Implementation31LocalStoryStoreObservableBridge observeSpotlightPostingProgress] */

void FUN_101250254(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010124f0bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012502e0; end: 10125062f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012502e0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  long lStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  uStack_e8 = param_1;
  func_0x000107c5f7fc();
  lStack_c0 = *(long *)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar9 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_c8 = lVar9;
  func_0x000107c5f824();
  lStack_d8 = *(long *)(lVar2 + -8);
  lStack_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_e0 = lVar9;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar2 + -8);
  lVar17 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f83c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar14 - extraout_x12;
  lVar11 = *(long *)(unaff_x20 + _DAT_112d6b490);
  func_0x000107c3e208(lVar11);
  dVar18 = *(double *)(unaff_x20 + _DAT_112d6b4c0);
  if (0.0 < dVar18) {
    func_0x000107c4f7c0();
    func_0x000107c61180();
    lStack_f0 = lVar11;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101250630);
      (*pcVar1)();
    }
    func_0x000107c5f830(lVar14);
    func_0x000107c5f85c(lVar16,dVar18,lVar14);
    pcStack_f8 = *(code **)(lVar13 + 8);
    lStack_100 = lVar3;
    (*pcStack_f8)(lVar14,lVar3);
    puVar4 = &UNK_110398090;
    func_0x000107c613fc(&UNK_110398090,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    (**(code **)(lVar15 + 0x10))(lVar9,uStack_e8,lVar2);
    uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar12 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
    puVar5 = &UNK_110398338;
    func_0x000107c613fc(&UNK_110398338,uVar12 + lVar17,uVar10 | 7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    (**(code **)(lVar15 + 0x20))(puVar5 + uVar12,lVar9,lVar2);
    pcStack_88 = FUN_1012515ac;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_110398350;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puVar4;
    func_0x000107c6157c(puVar4);
    lVar3 = lStack_e0;
    func_0x000107c5f808(lStack_e0);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar7 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = uVar7;
    func_0x0001001c7f30();
    lVar9 = lStack_b8;
    lVar11 = lStack_c8;
    func_0x000107c60264(lStack_c8,&puStack_b0,uVar7,uVar8,lStack_b8,puVar5);
    lVar2 = lStack_f0;
    func_0x000107c5ffc8(lVar16,lVar3,lVar11,ppuVar6);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar2);
    (**(code **)(lStack_c0 + 8))(lVar11,lVar9);
    (**(code **)(lStack_d8 + 8))(lVar3,lStack_d0);
    (*pcStack_f8)(lVar16,lStack_100);
    puVar5 = puStack_80;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 101250630; end: 1012506f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101250630(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112d6b490));
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_10125156c(auStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar1 = 0;
    FUN_101251784(0,0x112d44bc0,&PTR_PTR_1126e1b70);
    puVar2 = &uStack_58;
    func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x000107c59cec(param_2);
      func_0x000107c61170(uStack_58);
    }
  }
  return;
}



/* Entry: 1012506f4; end: 10125074f;  */

void FUN_1012506f4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101250750(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101250750; end: 10125090b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101250750(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined *apuStack_98 [3];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d6b490);
  func_0x000107c3e208(uVar4);
  lVar1 = _DAT_112d6b4a8;
  func_0x000107c61428(unaff_x20 + _DAT_112d6b4a8,auStack_68,0,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61434(uVar5);
  uVar2 = param_1;
  FUN_10125e030(param_1,uVar5);
  func_0x000107c6142c(uVar5);
  lVar1 = _DAT_112d6b4b0;
  if ((uVar2 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112d6b4b0,auStack_80,0,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61434(uVar5);
    uVar2 = param_1;
    FUN_10125e030(param_1,uVar5);
    func_0x000107c6142c(uVar5);
    if ((uVar2 & 1) != 0) {
      func_0x000107c61428(unaff_x20 + lVar1,apuStack_98,0x21,0);
      FUN_101274b5c(auStack_a0 + -extraout_x8,param_1);
      func_0x000107c614a8(apuStack_98);
      FUN_10125156c(auStack_a0 + -extraout_x8,0x112d3bc20,&UNK_10d904ef0);
      func_0x000107c3e208(uVar4);
      puVar3 = PTR_PTR_1126a6788;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c55340();
      func_0x000107c55210(puVar3);
      apuStack_98[0] = puVar3;
      func_0x000100087c34(apuStack_98);
      func_0x000107c61170(puVar3);
    }
  }
  return;
}



/* Entry: 10125090c; end: 1012509a7;  */

void FUN_10125090c(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c4218c(*(long *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012509a8; end: 101250a87;  */

void FUN_1012509a8(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      puVar1 = PTR_PTR_1126ce600;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c55008();
      func_0x000107c54c2c(puVar1);
      func_0x000107c54c30(puVar1);
      func_0x000107c572cc(0,puVar1);
      puStack_50 = puVar1;
      func_0x000100087f6c(&puStack_50);
      func_0x000107c61170(puVar1);
      if ((param_2 & 1) != 0) {
        func_0x000107c6157c(*(undefined8 *)(param_1 + 0x18));
        func_0x000100c7f554();
        func_0x000107c61574(param_1);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101250a88; end: 101250b73;  */

void FUN_101250a88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uStack_40 = param_2;
      func_0x000107c6157c(uVar1);
      func_0x000100087f6c(&uStack_40);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101250b74; end: 101250ba7;  */

void FUN_101250b74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101250ba8; end: 101250c57;  */

/* WARNING: Possible PIC construction at 0x000101250be4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101250be8) */

void FUN_101250ba8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    pcVar1 = *(code **)(param_1 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (pcVar1 != (code *)0x0) {
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 101250c58; end: 101250d77;  */

void FUN_101250c58(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      func_0x000107c3e208(*(undefined8 *)(param_1 + 0x10));
      puVar1 = PTR_PTR_1126ce638;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c55a74();
      func_0x000107c57a04(puVar1);
      func_0x000107c57a08(puVar1);
      func_0x000107c57a10(puVar1);
      func_0x000107c57a0c(puVar1);
      func_0x000107c57a2c(puVar1);
      func_0x000107c57a30(puVar1);
      func_0x000107c57638(puVar1);
      func_0x000107c5a21c(puVar1);
      puStack_50 = puVar1;
      func_0x000100087f6c(&puStack_50);
      func_0x000107c61170(puVar1);
      if ((param_2 & 1) != 0) {
        func_0x000107c6157c(*(undefined8 *)(param_1 + 0x18));
        func_0x000100c7f554();
        func_0x000107c61574(param_1);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101250d78; end: 101251137;  */

void FUN_101250d78(long param_1,byte param_2,byte param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(byte *)(param_1 + 0x80) = param_2 & 1;
      *(byte *)(param_1 + 0x81) = param_3 & 1;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = param_4;
      *(undefined8 *)(param_1 + 0x30) = param_5;
      func_0x000107c61434(param_5);
      func_0x000107c6142c(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = param_6;
      *(undefined8 *)(param_1 + 0x40) = param_7;
      func_0x000107c61434(param_7);
      func_0x000107c6142c(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = param_8;
      *(undefined8 *)(param_1 + 0x50) = param_9;
      func_0x000107c61434(param_9);
      func_0x000107c6142c(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = param_10;
      func_0x000107c61174(param_10);
      func_0x000107c61170(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = param_11;
      *(undefined8 *)(param_1 + 0x68) = param_12;
      func_0x000107c61434();
      func_0x000107c6142c(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = param_13;
      func_0x000107c61434();
      func_0x000107c6142c(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = param_14;
      func_0x000107c61174();
      func_0x000107c61170(uVar1);
      func_0x000101250eec();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101251138; end: 10125119b;  */

void FUN_101251138(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(undefined2 *)(param_1 + 0x80) = 1;
      func_0x000101250eec();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10125119c; end: 101251223;  */

void FUN_10125119c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = param_2;
      *(undefined8 *)(param_1 + 0x30) = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c6142c(uVar1);
      func_0x000101250eec();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101251224; end: 1012512a3;  */

void FUN_101251224(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1012512a4; end: 10125134f; -[_TtC24MyProfile3Implementation31LocalStoryStoreObservableBridge init] */

void FUN_1012512a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Implementation.LocalStoryStoreObservableBridge",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012512d0);
  (*pcVar1)();
}



/* Entry: 101251350; end: 1012513a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101251350(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  uVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  if ((*(byte *)(uVar2 + _DAT_112d6b4c8) & 1) != 0) {
    func_0x000107c61170();
    return;
  }
  *(undefined1 *)(uVar2 + _DAT_112d6b4c8) = 1;
  lVar1 = _DAT_112d6b478;
  uVar10 = *(ulong *)(uVar2 + _DAT_112d6b478);
  uVar3 = uVar10;
  if (uVar10 == 0) {
    uVar3 = uVar2;
    (**(code **)(uVar2 + _DAT_112d6b468))();
    uVar11 = *(undefined8 *)(uVar2 + lVar1);
    *(ulong *)(uVar2 + lVar1) = uVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar11);
    if (uVar3 == 0) {
      puVar6 = &UNK_1103980e0;
      func_0x000107c613fc(&UNK_1103980e0,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = 0x5f676e697373696d;
      *(undefined8 *)(puVar6 + 0x18) = 0xed000065726f7473;
      uVar11 = *(undefined8 *)(uVar2 + _DAT_112d6b490);
      puVar7 = &UNK_110398090;
      func_0x000107c613fc(&UNK_110398090,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,uVar2);
      puVar8 = &UNK_110398108;
      func_0x000107c613fc(&UNK_110398108,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(undefined8 *)(puVar8 + 0x18) = 0x101251374;
      *(undefined **)(puVar8 + 0x20) = puVar6;
      uStack_88 = 0x10125137c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110398120;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_80;
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(uVar11);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(uVar2);
      goto LAB_10124f6bc;
    }
  }
  uVar4 = uVar3;
  func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_observeSpotlightPostingProgressW_112615e50);
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar3;
    func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_observeSpotlightPostingProgressW_112615e50);
    if ((uVar4 & 1) == 0) {
      func_0x000107c615f0(uVar10);
    }
    else {
      puVar6 = &UNK_110398090;
      puVar8 = puVar6;
      func_0x000107c613fc(&UNK_110398090,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,uVar2);
      func_0x000107c613fc(&UNK_110398090,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar2);
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x101251388;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110398210;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      uStack_b8 = 0x101251390;
      puStack_d8 = puVar7;
      uStack_d0 = 0x42000000;
      pcStack_c8 = FUN_10124f6e0;
      puStack_c0 = &UNK_110398238;
      ppuVar5 = &puStack_d8;
      puStack_b0 = puVar6;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c615f0(uVar10);
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar6);
      func_0x000107c4dab0(uVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puStack_b0);
      puVar7 = puStack_80;
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
    }
    uVar11 = *(undefined8 *)(uVar2 + _DAT_112d6b490);
    puVar6 = &UNK_110398090;
    func_0x000107c613fc(&UNK_110398090,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,uVar2);
    puVar7 = &UNK_1103981d0;
    func_0x000107c613fc(&UNK_1103981d0,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(code **)(puVar7 + 0x18) = FUN_10125001c;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    uStack_88 = 0x1012519e4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1103981e8;
    ppuVar9 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_80);
    func_0x000107c4e524(uVar11);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar3);
    return;
  }
  puVar6 = &UNK_110398158;
  func_0x000107c613fc(&UNK_110398158,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0xd000000000000013;
  *(undefined8 *)(puVar6 + 0x18) = 0x800000010ef31850;
  uVar11 = *(undefined8 *)(uVar2 + _DAT_112d6b490);
  puVar7 = &UNK_110398090;
  func_0x000107c613fc(&UNK_110398090,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,uVar2);
  puVar8 = &UNK_110398180;
  func_0x000107c613fc(&UNK_110398180,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined8 *)(puVar8 + 0x18) = 0x1012519c0;
  *(undefined **)(puVar8 + 0x20) = puVar6;
  uStack_88 = 0x1012519e0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110398198;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar7 = puStack_80;
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c4e524(uVar11);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
LAB_10124f6bc:
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 1012513a4; end: 1012514af;  */

void FUN_1012513a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *unaff_x20;
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012514a0);
    (*pcVar3)();
  }
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = lVar8 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  lVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  lVar7 = lVar1 + lVar9 * param_1;
  func_0x000107c61408(lVar7,lVar2,lVar4);
  lVar4 = param_3 - lVar2;
  if (SBORROW8(param_3,lVar2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012514a4);
    (*pcVar3)();
  }
  if (lVar4 != 0) {
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012514a8);
      (*pcVar3)();
    }
    uVar6 = lVar7 + lVar9 * param_3;
    uVar5 = lVar1 + lVar9 * param_2;
    if (uVar6 < uVar5 || uVar5 + (*(long *)(lVar8 + 0x10) - param_2) * lVar9 <= uVar6) {
      func_0x000107c61414();
    }
    else if (uVar6 != uVar5) {
      func_0x000107c61410();
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012514ac);
      (*pcVar3)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (0 < lVar9 * param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012514b0);
    (*pcVar3)();
  }
  return;
}



/* Entry: 1012514b0; end: 10125156b;  */

void FUN_1012514b0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10125155c);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101251560);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101251564);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1012744bc();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1012513a4(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10125156c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101251568);
  (*pcVar2)();
}



/* Entry: 10125156c; end: 1012515ab;  */

undefined8 FUN_10125156c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1012515ac; end: 1012515db;  */

void FUN_1012515ac(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101250750(unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012515dc; end: 1012515eb;  */

void FUN_1012515dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    FUN_10124e5ec(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012515ec; end: 101251613;  */

void FUN_1012515ec(void)

{
  FUN_10124f030();
  return;
}



/* Entry: 101251614; end: 101251637;  */

void FUN_101251614(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x20) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c4218c(*(long *)(unaff_x20 + 0x28));
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101251638; end: 101251667;  */

void FUN_101251638(void)

{
  FUN_10124ef50();
  return;
}



/* Entry: 101251668; end: 101251677;  */

void FUN_101251668(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(char *)(lVar1 + 0x20) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_dispose_1125bf4f8);
    return;
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 101251678; end: 1012516a3;  */

void FUN_101251678(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012516a4; end: 1012516c3;  */

void FUN_1012516a4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      uStack_40 = uVar1;
      func_0x000107c6157c(uVar3);
      func_0x000100087f6c(&uStack_40);
      func_0x000107c61574(uVar3);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1012516c4; end: 1012516eb;  */

void FUN_1012516c4(void)

{
  FUN_10124f030();
  return;
}



/* Entry: 1012516ec; end: 1012516f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012516ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar5 = _DAT_112d6b480;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar2 + _DAT_112d6b480);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    (**(code **)(lVar2 + _DAT_112d6b470))();
    uVar15 = *(ulong *)(lVar2 + lVar5);
    *(long *)(lVar2 + lVar5) = lVar3;
    lVar4 = lVar3;
    func_0x000107c61174();
    func_0x000107c61170();
    lVar5 = _DAT_112d6b478;
    if (lVar3 == 0) {
      uVar14 = *(ulong *)(lVar2 + _DAT_112d6b478);
      uVar12 = uVar14;
      if (uVar14 == 0) {
        (**(code **)(lVar2 + _DAT_112d6b468))();
        uVar16 = *(undefined8 *)(lVar2 + lVar5);
        *(ulong *)(lVar2 + lVar5) = uVar15;
        func_0x000107c615f0();
        func_0x000107c615e8(uVar16);
        uVar12 = uVar15;
        if (uVar15 == 0) {
          uVar13 = *(undefined8 *)(lVar1 + 0x10);
          puVar9 = &UNK_110398658;
          func_0x000107c613fc(&UNK_110398658,0x18,7);
          func_0x000107c61644(puVar9 + 0x10,lVar1);
          puVar10 = &UNK_110398748;
          func_0x000107c613fc(&UNK_110398748,0x19,7);
          *(undefined **)(puVar10 + 0x10) = puVar9;
          puVar10[0x18] = 1;
          pcStack_88 = (code *)0x1012519c8;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = (code *)&UNK_1000f6b44;
          puStack_90 = &UNK_110398760;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          func_0x000107c61574(puStack_80);
          func_0x000107c4e524(uVar13);
          func_0x000107c60bd0(ppuVar11);
          goto LAB_10124e0fc;
        }
      }
      uVar15 = uVar12;
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_observeLivePublicStoryWithBusine_112615d60);
      if ((uVar15 & 1) == 0) {
        uVar13 = *(undefined8 *)(lVar1 + 0x10);
        puVar9 = &UNK_110398658;
        func_0x000107c613fc(&UNK_110398658,0x18,7);
        func_0x000107c61644(puVar9 + 0x10,lVar1);
        puVar10 = &UNK_110398798;
        func_0x000107c613fc(&UNK_110398798,0x19,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        puVar10[0x18] = 1;
        pcStack_88 = (code *)0x1012519cc;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = (code *)&UNK_1000f6b44;
        puStack_90 = &UNK_1103987b0;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar9 = puStack_80;
        func_0x000107c615f0(uVar14);
        func_0x000107c61574(puVar9);
        func_0x000107c4e524(uVar13);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(uVar12);
        return;
      }
      uVar15 = uVar12;
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_observeLivePublicStoryWithBusine_112615d60);
      if ((uVar15 & 1) == 0) {
        func_0x000107c615f0(uVar14);
        func_0x000107c615e8(uVar12);
LAB_10124e0fc:
        func_0x000107c61170(lVar2);
        return;
      }
      puVar10 = &UNK_110398658;
      puVar6 = puVar10;
      func_0x000107c613fc(&UNK_110398658,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,lVar1);
      func_0x000107c613fc(&UNK_110398658,0x18,7);
      func_0x000107c61644(puVar10 + 0x10,lVar1);
      func_0x000107c615f0(uVar14);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar10);
      func_0x000107c5fadc(uVar7,uVar13);
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = (code *)0x101251728;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_100f11160;
      puStack_90 = &UNK_1103987d8;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar6;
      func_0x000107c60bc4(ppuVar11);
      pcStack_b8 = FUN_101251730;
      puStack_d8 = puVar9;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000f6b44;
      puStack_c0 = &UNK_110398800;
      ppuVar8 = &puStack_d8;
      puStack_b0 = puVar10;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c4da70(uVar12);
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(lVar2);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(uVar7);
      func_0x000107c61574(puStack_b0);
      puVar9 = puStack_80;
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar10);
      goto LAB_10124dd94;
    }
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  func_0x000107c5fadc(uVar7,uVar13);
  puVar9 = &UNK_110398658;
  func_0x000107c613fc(&UNK_110398658,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_101251760;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10124d190;
  puStack_90 = &UNK_110398828;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61574(puStack_80);
  lVar5 = lVar4;
  func_0x000107c4da6c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar7);
  puVar9 = &UNK_110398860;
  func_0x000107c613fc(&UNK_110398860,0x18,7);
  *(long *)(puVar9 + 0x10) = lVar5;
  uVar13 = *(undefined8 *)(lVar1 + 0x10);
  puVar10 = &UNK_110398888;
  func_0x000107c613fc(&UNK_110398888,0x28,7);
  *(long *)(puVar10 + 0x10) = lVar1;
  *(undefined8 *)(puVar10 + 0x18) = 0x101251768;
  *(undefined **)(puVar10 + 0x20) = puVar9;
  pcStack_88 = (code *)0x101251778;
  puStack_a8 = puVar6;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_1103988a0;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar10 = puStack_80;
  func_0x000107c615f0(lVar5);
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c4e524(uVar13);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c615e8(lVar5);
LAB_10124dd94:
  func_0x000107c61574(puVar9);
  return;
}



/* Entry: 1012516f8; end: 10125171f;  */

void FUN_1012516f8(void)

{
  FUN_10124f030();
  return;
}



/* Entry: 101251720; end: 10125172f;  */

/* WARNING: Possible PIC construction at 0x000101250be4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101250be8) */

void FUN_101251720(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x20) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    pcVar1 = *(code **)(unaff_x20 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    if (pcVar1 != (code *)0x0) {
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 101251730; end: 10125175f;  */

void FUN_101251730(void)

{
  FUN_10124ef50();
  return;
}



/* Entry: 101251760; end: 101251783;  */

void FUN_101251760(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar8 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c4aa58();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lStack_c8 = 0;
      puStack_b0 = (undefined1 *)0x0;
      puVar10 = puVar8;
    }
    else {
      lStack_c8 = lVar2;
      func_0x000107c5faec();
      puVar10 = puVar8;
      func_0x000107c61170(lVar2);
      puStack_b0 = puVar8;
    }
    lVar2 = param_1;
    func_0x000107c4f5e8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lStack_d0 = 0;
      puStack_b8 = (undefined1 *)0x0;
      puVar8 = puVar10;
    }
    else {
      lStack_d0 = lVar2;
      func_0x000107c5faec();
      puVar8 = puVar10;
      func_0x000107c61170(lVar2);
      puStack_b8 = puVar10;
    }
    lVar2 = param_1;
    func_0x000107c4f5ec();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar11 = 0;
      puStack_c0 = (undefined1 *)0x0;
      puVar10 = puVar8;
    }
    else {
      lVar11 = lVar2;
      func_0x000107c5faec();
      puVar10 = puVar8;
      func_0x000107c61170(lVar2);
      puStack_c0 = puVar8;
    }
    lVar2 = param_1;
    func_0x000107c4f5f4();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c4f5f0();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lStack_e0 = 0;
      puVar10 = (undefined1 *)0x0;
    }
    else {
      lStack_e0 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    lVar3 = param_1;
    func_0x000107c4f618();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar3;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar3);
    }
    lVar3 = param_1;
    func_0x000107c4f61c();
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c4ec00();
    func_0x000107c5d72c();
    uVar9 = *(undefined8 *)(lVar1 + 0x10);
    puVar5 = &UNK_110398658;
    func_0x000107c613fc(&UNK_110398658,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar1);
    puVar6 = &UNK_1103988d8;
    func_0x000107c613fc(&UNK_1103988d8,0x78,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    puVar6[0x18] = (char)lVar4;
    puVar6[0x19] = (char)param_1;
    *(long *)(puVar6 + 0x20) = lStack_c8;
    *(undefined1 **)(puVar6 + 0x28) = puStack_b0;
    *(long *)(puVar6 + 0x30) = lStack_d0;
    *(undefined1 **)(puVar6 + 0x38) = puStack_b8;
    *(long *)(puVar6 + 0x40) = lVar11;
    *(undefined1 **)(puVar6 + 0x48) = puStack_c0;
    *(long *)(puVar6 + 0x50) = lVar2;
    *(long *)(puVar6 + 0x58) = lStack_e0;
    *(undefined1 **)(puVar6 + 0x60) = puVar10;
    *(long *)(puVar6 + 0x68) = lVar12;
    *(long *)(puVar6 + 0x70) = lVar3;
    pcStack_88 = FUN_1012517c4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1103988f0;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_80;
    func_0x000107c61434(lVar12);
    func_0x000107c61174(lVar3);
    func_0x000107c61434(puStack_b0);
    func_0x000107c61434(puStack_b8);
    func_0x000107c61434(puStack_c0);
    func_0x000107c61174(lVar2);
    func_0x000107c61434(puVar10);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(puStack_b0);
    func_0x000107c6142c(puStack_b8);
    func_0x000107c6142c(puStack_c0);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(lVar12);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101251784; end: 1012517c3;  */

void FUN_101251784(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012517c4; end: 10125180b;  */

void FUN_1012517c4(void)

{
  long unaff_x20;
  
  FUN_101250d78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x19),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10125180c; end: 101251813;  */

void FUN_10125180c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x20) & 1) == 0) {
      *(undefined2 *)(lVar1 + 0x80) = 1;
      func_0x000101250eec();
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101251814; end: 10125184b;  */

void FUN_101251814(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10125184c; end: 101251857;  */

void FUN_10125184c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      *(undefined2 *)(lVar2 + 0x80) = 0;
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 *)(lVar2 + 0x28) = uVar1;
      *(undefined8 *)(lVar2 + 0x30) = uVar3;
      func_0x000107c61434(uVar3);
      func_0x000107c6142c(uVar4);
      func_0x000101250eec();
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101251858; end: 101251883;  */

void FUN_101251858(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101251884; end: 1012518b7;  */

void FUN_101251884(void)

{
  long unaff_x20;
  
  if ((*(byte *)(*(long *)(unaff_x20 + 0x10) + 0x10) & 1) == 0) {
    *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x10) = 1;
    func_0x0001048872ac();
  }
  return;
}



/* Entry: 1012518b8; end: 1012519ef;  */

void FUN_1012518b8(long param_1,long param_2)

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



/* Entry: 1012519f0; end: 101251b0f;  */

void FUN_1012519f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6b770,&UNK_10d92ea00);
  puVar1 = &UNK_110398a18;
  func_0x000107c613fc(&UNK_110398a18,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101251b10,puVar1);
  return;
}



/* Entry: 101251b10; end: 101251b1b;  */

void FUN_101251b10(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101251dd8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_50;
  *(undefined8 *)(lVar1 + 0x18) = uStack_48;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 101251b1c; end: 101251b5f;  */

void FUN_101251b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101251b60; end: 101251d93;  */

undefined * FUN_101251b60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126a6790;
  func_0x000107c610f8(PTR_PTR_1126a6790);
  func_0x000107c453e4();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = lVar4;
  func_0x000107c4141c();
  func_0x000107c61180();
  lVar2 = lVar5;
  func_0x000107c3ff98();
  func_0x000107c61180();
  func_0x000107c615e8(lVar5);
  lVar5 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar5 != 0) {
    func_0x000107c4141c(lVar4);
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c41424();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar5;
    func_0x000107c40034(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(lVar2);
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar5 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar5;
      func_0x000107c509b4(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
    }
    puVar3 = PTR_PTR_1126b3f20;
    func_0x000107c610f8();
    func_0x000107c48430();
    func_0x000107c615e8(lVar2);
    if (puVar3 != (undefined *)0x0) {
      if (param_1 == 0) {
        lVar5 = 0;
      }
      else {
        puStack_48 = PTR_DAT_11269cb40;
        lVar5 = param_1;
        func_0x000107c61494(param_1,1,&puStack_48);
        if (lVar5 != 0) {
          func_0x000107c61174(param_1);
        }
      }
      func_0x000107c61174(puVar3);
      func_0x000107c561c0();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar5);
      func_0x000107c569fc(puVar1);
      lVar5 = lVar4;
      func_0x000107c5cb24(lVar4);
      func_0x000107c61180();
      func_0x000107c53e9c(puVar1);
      func_0x000107c61170(lVar5);
      FUN_101260630();
      func_0x000107c571d8(puVar1);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar3);
      lVar4 = lVar5;
    }
    func_0x000107c61170(lVar4);
  }
  return puVar1;
}



/* Entry: 101251d94; end: 101251dc7;  */

void FUN_101251d94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101251dc8; end: 101251dd7;  */

undefined1  [16] FUN_101251dc8(void)

{
  return ZEXT816(0x110398a40);
}



/* Entry: 101251dd8; end: 101251df7;  */

void FUN_101251dd8(void)

{
  func_0x000107c61168(&PTR_PTR_112d6b7b8);
  return;
}



/* Entry: 101251df8; end: 101251f37;  */

void FUN_101251df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6b828,&UNK_10d92eaa0);
  puVar1 = &UNK_110398a60;
  func_0x000107c613fc(&UNK_110398a60,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_101251f38,puVar1);
  return;
}


