/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021b5684; end: 1021b58db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b5684(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = *(long *)(lStack_68 + _DAT_113021f38);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x00010098a0cc(0);
    puVar3 = (undefined *)0x2;
    func_0x00010098a590();
    lVar1 = lVar2;
    func_0x000107c3ebc0();
    func_0x000107c61170();
    if (((int)lVar1 != 0) && (FUN_1021b53bc(), puVar3 != (undefined *)0x0)) {
      puVar8 = PTR_PTR_1126ae6b8;
      func_0x000107c61168();
      puVar4 = puVar8;
      FUN_1021b5a78();
      puVar5 = puVar4;
      uVar9 = param_2;
      FUN_1021b5a78();
      puVar6 = puVar5;
      uVar10 = uVar9;
      FUN_1021b5a78();
      puVar7 = PTR_PTR_1126aeaf0;
      func_0x000107c610f8(PTR_PTR_1126aeaf0);
      func_0x000107c5fadc(puVar4,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c5fadc(puVar5,uVar9);
      func_0x000107c6142c(uVar9);
      func_0x000107c5fadc(puVar6,uVar10);
      func_0x000107c6142c(uVar10);
      func_0x000107c48db4(puVar7);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      puVar4 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c4e01c();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c4a8a4(puVar8);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar4);
      goto LAB_1021b58b0;
    }
    func_0x000107c615e8(lVar2);
  }
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar8);
  func_0x000107c61180();
LAB_1021b58b0:
  func_0x000107c61170(puVar3);
  return puVar8;
}



/* Entry: 1021b58dc; end: 1021b593f; -[_TtC28FriendingFindFriendsSettings36FindFriendsSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b5920: Changing call to branch */

void FUN_1021b58dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = param_3;
  FUN_1021b53bc();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
  }
  else {
    FUN_1021b45f4(param_3);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b5940; end: 1021b599f; -[_TtC28FriendingFindFriendsSettings36FindFriendsSettingsRowProviderPlugin init] */

void FUN_1021b5940(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingFindFriendsSettings.FindFriendsSettingsRowProviderPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b596c);
  (*pcVar1)();
}



/* Entry: 1021b59a0; end: 1021b5a27; -[_TtC28FriendingFindFriendsSettings36FindFriendsSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b59a0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e601e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e601f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60208));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e601f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60200));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60210));
  if (*(long *)(param_1 + _DAT_112e601e0) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021b5a28; end: 1021b5a37;  */

undefined1  [16] FUN_1021b5a28(void)

{
  return ZEXT816(0x1104db308);
}



/* Entry: 1021b5a38; end: 1021b5a57;  */

void FUN_1021b5a38(void)

{
  func_0x000107c61168(&PTR_PTR_112824980);
  return;
}



/* Entry: 1021b5a58; end: 1021b5a77;  */

void FUN_1021b5a58(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021b5a78; end: 1021b5b3f;  */

undefined1  [16] FUN_1021b5a78(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6c7469745f776f72;
  func_0x000107c5fadc(0x6c7469745f776f72,0xe900000000000065);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f06b330);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b5b40);
  (*pcVar1)();
}



/* Entry: 1021b5b40; end: 1021b5c9f;  */

void FUN_1021b5b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104db3a8;
  func_0x000107c613fc(&UNK_1104db3a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1021b5ca0,puVar1);
  return;
}



/* Entry: 1021b5ca0; end: 1021b5cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b5ca0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1021b6834();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e60240) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e60248) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e60250) = 0;
  *(long *)(lVar5 + _DAT_112e60258) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e60260) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e60268) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1021b5cac; end: 1021b5e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b5cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e60240) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60248) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60250) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60258) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60260) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e60268) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021b5e2c; end: 1021b5fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b5e2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_112e60250;
  ppuVar6 = &puStack_80;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60250);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeae0;
    func_0x000107c61168(PTR_PTR_1126aeae0);
    func_0x000107c5e2b8();
    func_0x000107c61180();
    puVar4 = puVar3;
    FUN_1021b6898();
    puVar5 = PTR_PTR_1126aeaf0;
    func_0x000107c610f8(PTR_PTR_1126aeaf0);
    func_0x000107c5fadc(puVar4,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c48dac(puVar5);
    func_0x000107c61170(puVar4);
    puVar2 = &UNK_1104db3f0;
    func_0x000107c613fc(&UNK_1104db3f0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar4 = PTR_PTR_1126aeae8;
    func_0x000107c610f8();
    pcStack_60 = FUN_1021b6854;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ea3124;
    puStack_68 = &UNK_1104db408;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c6157c(puVar2);
    func_0x000107c48560();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c60bd0(ppuVar6);
    puVar3 = puStack_58;
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar7);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 1021b5fd8; end: 1021b6047;  */

void FUN_1021b5fd8(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c61174(param_1);
      FUN_1021b6048();
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1021b6048; end: 1021b633b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b6048(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar9 = &puStack_d0;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (param_1 != (undefined *)0x0) {
    func_0x000100083b20(&puStack_a0);
    puVar3 = puStack_a0;
    puVar2 = puStack_a0;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      if (puVar2 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126aead0;
        func_0x000107c610f8();
        func_0x000107c47994();
        puVar3 = &UNK_1104db3f0;
        puVar5 = puVar3;
        func_0x000107c613fc(&UNK_1104db3f0,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        puVar6 = &UNK_1104db440;
        func_0x000107c613fc(&UNK_1104db440,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        func_0x000107c613fc(&UNK_1104db3f0,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        puVar7 = PTR_PTR_1126aa0e0;
        func_0x000107c610f8(PTR_PTR_1126aa0e0);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x1021b6878;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_1104db458;
        ppuVar8 = &puStack_a0;
        puStack_78 = puVar6;
        func_0x000107c60bc4(ppuVar8);
        uStack_b0 = 0x1021b6880;
        puStack_d0 = puVar1;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_100c75f50;
        puStack_b8 = &UNK_1104db480;
        puStack_a8 = puVar3;
        func_0x000107c60bc4(&puStack_d0);
        func_0x000107c6157c(puVar5);
        func_0x000107c61174(puVar4);
        func_0x000107c6157c(puVar3);
        func_0x000107c47c18(puVar7);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61574(puStack_a8);
        puVar6 = puStack_78;
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar6);
        puVar3 = PTR_PTR_1126aa0e8;
        func_0x000107c610f8(PTR_PTR_1126aa0e8);
        func_0x000107c453e4();
        puVar6 = PTR_PTR_1126aa0f0;
        func_0x000107c610f8(PTR_PTR_1126aa0f0);
        func_0x000107c49520();
        func_0x000107c61170(puVar3);
        puVar3 = PTR_PTR_1126afcd0;
        func_0x000107c610f8();
        func_0x000107c49460();
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e60240);
        *(undefined **)(unaff_x20 + _DAT_112e60240) = puVar3;
        func_0x000107c61174();
        func_0x000107c61170(uVar10);
        func_0x000107c3e2c0(puVar4);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        param_1 = puVar3;
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1021b633c; end: 1021b638f; -[_TtC21MutualFriendsSettings38MutualFriendsSettingsRowProviderPlugin sectionRow] */

void FUN_1021b633c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b5e2c();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b6390; end: 1021b63c3; -[_TtC21MutualFriendsSettings38MutualFriendsSettingsRowProviderPlugin rowViewModel] */

void FUN_1021b6390(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b63c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021b63c4; end: 1021b64f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b63c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  puVar2 = *(undefined **)(lStack_38 + _DAT_113021f38);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c4415c();
    func_0x000107c61180();
    cVar1 = puVar2[_DAT_113021bc0];
    func_0x000107c61170();
    if (cVar1 == '\x01') {
      FUN_1021b5e2c();
      puVar4 = puVar2;
      func_0x000107c5093c();
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      goto LAB_1021b64d4;
    }
    func_0x000107c615e8(puVar3);
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar4,param_2,puVar2);
  func_0x000107c61180();
LAB_1021b64d4:
  func_0x000107c61170(puVar2);
  return puVar4;
}



/* Entry: 1021b64f4; end: 1021b6553; -[_TtC21MutualFriendsSettings38MutualFriendsSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b6534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b6538) */

void FUN_1021b64f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021b5e2c();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b6554; end: 1021b65cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b6554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41864(param_2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e60240);
    *(undefined8 *)(param_1 + _DAT_112e60240) = 0;
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1021b65cc; end: 1021b674b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b65cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar6,param_1,param_2);
  puVar2 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar6);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar5,puVar6,lVar1);
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      lVar3 = param_3;
      func_0x0001021b5d44();
      uVar7 = *(undefined8 *)(param_3 + _DAT_112e60240);
      uVar4 = uVar7;
      func_0x000107c61174(uVar7);
      func_0x0001033934dc(lVar5,uVar7);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar4);
    }
    (**(code **)(lVar8 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 1021b674c; end: 1021b67ab; -[_TtC21MutualFriendsSettings38MutualFriendsSettingsRowProviderPlugin init] */

void FUN_1021b674c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsSettings.MutualFriendsSettingsRowProviderPlugin",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b6778);
  (*pcVar1)();
}



/* Entry: 1021b67ac; end: 1021b67bb;  */

undefined1  [16] FUN_1021b67ac(void)

{
  return ZEXT816(0x1104db3d0);
}



/* Entry: 1021b67bc; end: 1021b6833; -[_TtC21MutualFriendsSettings38MutualFriendsSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021b6808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b680c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b67bc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60258));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60260));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60268));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60240));
  return;
}



/* Entry: 1021b6834; end: 1021b6853;  */

void FUN_1021b6834(void)

{
  func_0x000107c61168(&PTR_PTR_112824a70);
  return;
}



/* Entry: 1021b6854; end: 1021b6897;  */

void FUN_1021b6854(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1021b6048();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1021b6898; end: 1021b6adf;  */

undefined1  [16] FUN_1021b6898(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe8;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f06b390);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f06b3b0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b6964);
  (*pcVar1)();
}



/* Entry: 1021b6ae0; end: 1021b6be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b6ae0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112e60298;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60298);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    uVar5 = uStack_48;
    uVar3 = uStack_48;
    func_0x000107c4f80c(uStack_48);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000100083b20(&uStack_48);
    uVar5 = uStack_48;
    func_0x000107c4f808(uStack_48);
    func_0x000107c61180();
    func_0x000107c61170(uStack_48);
    puVar4 = PTR_PTR_1126aa0f8;
    func_0x000107c610f8();
    func_0x000107c4821c();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 1021b6be4; end: 1021b6c37; -[_TtC29QuickAddPrivacySettingsPlugin40QuickAddPrivacySettingsRowProviderPlugin sectionRow] */

void FUN_1021b6be4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b6ae0();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b6c38; end: 1021b6c6b; -[_TtC29QuickAddPrivacySettingsPlugin40QuickAddPrivacySettingsRowProviderPlugin rowViewModel] */

void FUN_1021b6c38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b6c6c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021b6c6c; end: 1021b6da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b6c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  puVar1 = *(undefined **)(lStack_38 + _DAT_113021f38);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    func_0x00010098a0cc(0);
    uVar3 = 2;
    func_0x00010098a590(2);
    puVar1 = puVar2;
    func_0x000107c3ebc0(puVar2,param_2,uVar3);
    func_0x000107c61170(uVar3);
    if ((int)puVar1 != 0) {
      puVar4 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar1 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c4d73c();
      func_0x000107c61180();
      func_0x000107c4a8a4(puVar4,param_2,puVar1);
      func_0x000107c61180();
      func_0x000107c615e8(puVar2);
      goto LAB_1021b6d84;
    }
    func_0x000107c615e8(puVar2);
    puVar1 = puVar2;
  }
  FUN_1021b6ae0();
  puVar4 = puVar1;
  func_0x000107c5093c();
  func_0x000107c61180();
LAB_1021b6d84:
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 1021b6da4; end: 1021b6e03; -[_TtC29QuickAddPrivacySettingsPlugin40QuickAddPrivacySettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b6de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b6de8) */

void FUN_1021b6da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021b6ae0();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b6e04; end: 1021b6e37;  */

void FUN_1021b6e04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021b6e38; end: 1021b6e47;  */

undefined1  [16] FUN_1021b6e38(void)

{
  return ZEXT816(0x1104db560);
}



/* Entry: 1021b6e48; end: 1021b6e8f; -[_TtC29QuickAddPrivacySettingsPlugin40QuickAddPrivacySettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b6e48(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e602a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e602a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60298));
  return;
}



/* Entry: 1021b6e90; end: 1021b6eaf;  */

void FUN_1021b6e90(void)

{
  func_0x000107c61168(&PTR_PTR_112824b58);
  return;
}



/* Entry: 1021b6eb0; end: 1021b7003;  */

void FUN_1021b6eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104db600;
  func_0x000107c613fc(&UNK_1104db600,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1021b7004,puVar1);
  return;
}



/* Entry: 1021b7004; end: 1021b700f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b7004(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1021b7e64();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e602d8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e602e0) = 0;
  *(long *)(lVar5 + _DAT_112e602e8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e602f0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e602f8) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1021b7010; end: 1021b70ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b7010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e602d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e602e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e602e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e602f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e602f8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021b7100; end: 1021b73db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b7100(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  func_0x000100083b20(&puStack_80);
  puVar1 = puStack_80;
  uVar11 = *(undefined8 *)(puStack_80 + _DAT_112fc8a28);
  func_0x000107c6157c(uVar11);
  func_0x000107c61170(puVar1);
  func_0x0001000d224c(&puStack_80);
  func_0x000107c61574(uVar11);
  puVar1 = puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar4 = puStack_80;
  puVar3 = puStack_80;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000100083b20(&puStack_80);
  puVar4 = puStack_80;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  if (puVar4 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dbfa50,&UNK_10d97b760);
    puVar5 = puVar4;
    func_0x0001000bda74();
    func_0x000107c61170(puVar4);
    uVar11 = 0;
    func_0x0001021b82d8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    uVar6 = 0;
    func_0x00010335b138(0);
    func_0x000107c613fc();
    func_0x00010335a850(puVar5,uVar11,uVar6);
    puVar7 = PTR_PTR_1126aeae0;
    func_0x000107c61168(PTR_PTR_1126aeae0);
    func_0x000107c5e2b8();
    func_0x000107c61180();
    puVar4 = puVar7;
    FUN_1021baab4();
    puVar8 = PTR_PTR_1126aeaf0;
    func_0x000107c610f8(PTR_PTR_1126aeaf0);
    func_0x000107c5fadc(puVar4,uVar11);
    func_0x000107c6142c(uVar11);
    func_0x000107c48dac(puVar8);
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_1104db738;
    func_0x000107c613fc(&UNK_1104db738,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    puVar9 = &UNK_1104db760;
    func_0x000107c613fc(&UNK_1104db760,0x38,7);
    *(undefined **)(puVar9 + 0x10) = puVar4;
    *(undefined8 *)(puVar9 + 0x20) = uStack_78;
    *(undefined **)(puVar9 + 0x18) = puVar1;
    *(undefined **)(puVar9 + 0x28) = puVar5;
    *(undefined **)(puVar9 + 0x30) = puVar3;
    puVar3 = PTR_PTR_1126aeae8;
    func_0x000107c610f8(PTR_PTR_1126aeae8);
    pcStack_60 = FUN_1021b8210;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ea3124;
    puStack_68 = &UNK_1104db778;
    ppuVar10 = &puStack_80;
    puStack_58 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c6157c(puVar4);
    func_0x000107c48560(puVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c60bd0(ppuVar10);
    puVar1 = puStack_58;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021b73dc);
  (*pcVar2)();
}



/* Entry: 1021b73dc; end: 1021b7553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b73dc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174();
      lVar1 = param_1;
      func_0x000107c5d17c();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(param_2 + _DAT_112e602d8);
      *(long *)(param_2 + _DAT_112e602d8) = lVar1;
      func_0x000107c615e8(uVar5);
      uVar5 = param_3;
      FUN_1021b7554(param_3,param_4);
      pcVar2 = "rowProvider";
      func_0x0001000c10c0("rowProvider");
      func_0x000107c61180();
      puVar3 = &UNK_1104db7b0;
      func_0x000107c613fc(&UNK_1104db7b0,0x38,7);
      *(undefined8 *)(puVar3 + 0x10) = param_3;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      *(undefined8 *)(puVar3 + 0x20) = param_5;
      *(undefined8 *)(puVar3 + 0x28) = param_6;
      *(long *)(puVar3 + 0x30) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c615f0(param_3);
      func_0x000107c6157c(param_5);
      func_0x000107c61174(param_6);
      pcVar4 = pcVar2;
      func_0x00010488a220(pcVar2,1,FUN_1021b8220,puVar3);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61574(uVar5);
      func_0x000107c615e8(pcVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(pcVar4);
    }
  }
  return;
}



/* Entry: 1021b7554; end: 1021b769f;  */

undefined8 FUN_1021b7554(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  func_0x0001000285a8(0x112e60340,&UNK_10da684a0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x000107c614f0(param_1);
  (**(code **)(param_2 + 0x10))();
  puVar2 = &UNK_1104db7d8;
  func_0x000107c613fc(&UNK_1104db7d8,0x20,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(lVar1);
  uVar3 = 0;
  func_0x000100775264(0,1,FUN_1021b8318,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104db800;
  func_0x000107c613fc(&UNK_1104db800,0x20,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(lVar1);
  func_0x000104888fc0(0,1,FUN_1021b8330,puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 1021b76a0; end: 1021b79ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b76a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_100 [24];
  long lStack_e8;
  long lStack_e0;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar8 = auStack_100;
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_90 = *(undefined1 *)(param_1 + 4);
  lVar2 = 0;
  func_0x00010335b138();
  ppuStack_b8 = &PTR_DAT_110642370;
  auStack_d8[0] = param_4;
  lStack_c0 = lVar2;
  func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
  func_0x000107c6157c(param_4);
  func_0x0001000bda74();
  lVar3 = 0;
  FUN_1021ba7a8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar7 = (undefined8 *)(lVar4 + _DAT_112e60360);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_112e60368) = 0;
  lVar2 = _DAT_112e60370;
  lVar5 = lVar4;
  func_0x0001021b8634();
  *(long *)(lVar4 + lVar2) = lVar5;
  lVar2 = _DAT_112e60378;
  func_0x0001021b870c();
  *(long *)(lVar4 + lVar2) = lVar5;
  *(undefined **)(lVar4 + _DAT_112e60358) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(lVar4 + _DAT_112e603a0) = 0;
  puVar7 = (undefined8 *)(lVar4 + _DAT_112e60388);
  *puVar7 = param_2;
  puVar7[1] = param_3;
  FUN_1021b8240(auStack_d8,lVar4 + _DAT_112e60390);
  *(undefined8 *)(lVar4 + _DAT_112e60398) = param_5;
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  puVar7 = (undefined8 *)(lVar4 + _DAT_112e60380);
  puVar7[1] = uStack_78;
  *puVar7 = uStack_80;
  puVar7[3] = uStack_68;
  puVar7[2] = uStack_70;
  *(undefined1 *)(puVar7 + 4) = *(undefined1 *)(param_1 + 4);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_5);
  func_0x000100402194(&uStack_80,auStack_100);
  func_0x000100402194(&uStack_70,auStack_100);
  plVar6 = &lStack_e8;
  lStack_e8 = lVar4;
  lStack_e0 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  puVar7 = &uStack_b0;
  FUN_1021b87e0();
  lVar2 = _DAT_112e60358;
  func_0x000107c61428((long)plVar6 + _DAT_112e60358,auStack_100,0x21,0);
  FUN_1021b7ee0();
  uVar9 = *(ulong *)((long)plVar6 + lVar2);
  uVar10 = uVar9 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar10 + 0x10);
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_1021b7f50(uVar9,uVar1 + 1,1);
    uVar10 = uVar9 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
  *(undefined8 **)(uVar10 + uVar1 * 8 + 0x20) = puVar7;
  *(ulong *)((long)plVar6 + lVar2) = uVar9;
  func_0x000107c614a8();
  if (lStack_c0 != 0) {
    func_0x0001021b8a4c();
    func_0x000107c61428((long)plVar6 + lVar2,auStack_100,0x21,0);
    FUN_1021b7ee0();
    uVar9 = *(ulong *)((long)plVar6 + lVar2);
    uVar10 = uVar9 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar10 + 0x10);
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_1021b7f50(uVar9,uVar1 + 1,1);
      uVar10 = uVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
    *(undefined1 **)(uVar10 + uVar1 * 8 + 0x20) = puVar8;
    *(ulong *)((long)plVar6 + lVar2) = uVar9;
    func_0x000107c614a8(auStack_100);
    FUN_1021b8cac();
  }
  func_0x000107c61574(param_5);
  func_0x0001021b8290(auStack_d8);
  func_0x000107c5d17c(param_6);
  func_0x000107c61180();
  func_0x000107c3e2c0();
  func_0x000107c61170(plVar6);
  func_0x000107c615e8(param_6);
  return;
}



/* Entry: 1021b79ac; end: 1021b79ff; -[_TtC20GameActivitySettings37GameActivitySettingsRowProviderPlugin sectionRow] */

void FUN_1021b79ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001021b709c();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b7a00; end: 1021b7a53; -[_TtC20GameActivitySettings37GameActivitySettingsRowProviderPlugin rowViewModel] */

void FUN_1021b7a00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001021b709c();
  uVar2 = uVar1;
  func_0x000107c5093c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b7a54; end: 1021b7ab3; -[_TtC20GameActivitySettings37GameActivitySettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b7a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b7a98) */

void FUN_1021b7a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001021b709c();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b7ab4; end: 1021b7bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b7ab4(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c614f0();
  lVar4 = *(long *)(unaff_x20 + _DAT_112e602d8);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    pcVar1 = "deinit";
    func_0x0001000c10c0("deinit");
    func_0x000107c61180();
    puVar2 = &UNK_1104db628;
    func_0x000107c613fc(&UNK_1104db628,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar4;
    pcStack_60 = FUN_1021b7ddc;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104db640;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c615f0(lVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e590(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar4);
    func_0x000107c615e8(pcVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021b7bc8; end: 1021b7beb; -[_TtC20GameActivitySettings37GameActivitySettingsRowProviderPlugin dealloc] */

void FUN_1021b7bc8(void)

{
  func_0x000107c61174();
  FUN_1021b7ab4();
  return;
}



/* Entry: 1021b7bec; end: 1021b7c53; -[_TtC20GameActivitySettings37GameActivitySettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b7bec(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e602f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e602f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e602e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e602d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e602e0));
  return;
}



/* Entry: 1021b7c54; end: 1021b7ccb;  */

void FUN_1021b7c54(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *param_1;
  func_0x0001021bad18();
  puVar2 = param_1;
  uVar3 = param_2;
  func_0x0001021bade4();
  puStack_68 = param_1;
  uStack_60 = param_2;
  puStack_58 = puVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar1;
  func_0x000100b60084(&puStack_68);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1021b7ccc; end: 1021b7ddb;  */

void FUN_1021b7ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x48);
  func_0x000107c5fb78(0xd000000000000046,0x800000010f06b470);
  uVar1 = 0x112d393f0;
  uStack_38 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_38,&uStack_60,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_58;
  uVar3 = uStack_60;
  func_0x0001007d6c6c(3,uStack_60,uStack_58,param_3,&PTR_DAT_1104db668);
  func_0x000107c6142c();
  func_0x0001021bad18();
  uVar2 = uVar1;
  uVar4 = uVar3;
  func_0x0001021bade4();
  uStack_40 = 2;
  uStack_60 = uVar1;
  uStack_58 = uVar3;
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  func_0x000100b60084(&uStack_60);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1021b7ddc; end: 1021b7e03;  */

void FUN_1021b7ddc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1021b7e04; end: 1021b7e2f; -[_TtC20GameActivitySettings37GameActivitySettingsRowProviderPlugin init] */

void FUN_1021b7e04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GameActivitySettings.GameActivitySettingsRowProviderPlugin",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b7e30);
  (*pcVar1)();
}



/* Entry: 1021b7e30; end: 1021b7e63;  */

void FUN_1021b7e30(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001021b7e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1021b7e64; end: 1021b7e83;  */

void FUN_1021b7e64(void)

{
  func_0x000107c61168(&PTR_PTR_112824c28);
  return;
}



/* Entry: 1021b7e84; end: 1021b7edf;  */

int FUN_1021b7e84(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1021b7ee0; end: 1021b7f4f;  */

void FUN_1021b7ee0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1021b7f50(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1021b7f50; end: 1021b8077;  */

ulong FUN_1021b7f50(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b8078);
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
  FUN_1021b8078(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b8074);
      (*pcVar1)();
    }
    FUN_1021b80f8(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1021b8078; end: 1021b80f7;  */

undefined * FUN_1021b8078(undefined *param_1,undefined *param_2)

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
    FUN_1021ba0c8();
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



/* Entry: 1021b80f8; end: 1021b820f;  */

long FUN_1021b80f8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021b820c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1021b8210);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001021b82d8(0,0x112e60338,&PTR_PTR_1126c4e80);
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
      func_0x0001021b82d8(0,0x112e60338,&PTR_PTR_1126c4e80);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021b8208);
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



/* Entry: 1021b8210; end: 1021b821f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b8210(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174();
      lVar5 = param_1;
      func_0x000107c5d17c();
      func_0x000107c61180();
      uVar10 = *(undefined8 *)(lVar4 + _DAT_112e602d8);
      *(long *)(lVar4 + _DAT_112e602d8) = lVar5;
      func_0x000107c615e8(uVar10);
      uVar10 = uVar2;
      FUN_1021b7554(uVar2,uVar1);
      pcVar6 = "rowProvider";
      func_0x0001000c10c0("rowProvider");
      func_0x000107c61180();
      puVar7 = &UNK_1104db7b0;
      func_0x000107c613fc(&UNK_1104db7b0,0x38,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar2;
      *(undefined8 *)(puVar7 + 0x18) = uVar1;
      *(undefined8 *)(puVar7 + 0x20) = uVar3;
      *(undefined8 *)(puVar7 + 0x28) = uVar9;
      *(long *)(puVar7 + 0x30) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c615f0(uVar2);
      func_0x000107c6157c(uVar3);
      func_0x000107c61174(uVar9);
      pcVar8 = pcVar6;
      func_0x00010488a220(pcVar6,1,FUN_1021b8220,puVar7);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61574(uVar10);
      func_0x000107c615e8(pcVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(pcVar8);
    }
  }
  return;
}



/* Entry: 1021b8220; end: 1021b823f;  */

void FUN_1021b8220(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1021b76a0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1021b8240; end: 1021b8317;  */

undefined8 FUN_1021b8240(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e60330;
  func_0x0001000285a8(0x112e60330,&UNK_10dbb3c50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1021b8318; end: 1021b832f;  */

void FUN_1021b8318(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1021b7c54(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1021b8330; end: 1021b835f;  */

void FUN_1021b8330(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x48,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5fb78(0xd000000000000046,0x800000010f06b470);
  uVar1 = 0x112d393f0;
  uStack_38 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_38,&uStack_60,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_58;
  uVar3 = uStack_60;
  func_0x0001007d6c6c(3,uStack_60,uStack_58,uVar2,&PTR_DAT_1104db668);
  func_0x000107c6142c();
  func_0x0001021bad18();
  uVar2 = uVar1;
  uVar4 = uVar3;
  func_0x0001021bade4();
  uStack_40 = 2;
  uStack_60 = uVar1;
  uStack_58 = uVar3;
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  func_0x000100b60084(&uStack_60);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1021b8360; end: 1021b83a3;  */

void FUN_1021b8360(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1021b83a4; end: 1021b83ab;  */

void FUN_1021b83a4(long param_1,long param_2)

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



/* Entry: 1021b83ac; end: 1021b8423;  */

undefined8
FUN_1021b83ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_1021ba328(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_4);
  return uVar1;
}



/* Entry: 1021b8424; end: 1021b84b3;  */

void FUN_1021b8424(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = -0x2fffffffffffffe8;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f06b6b0);
  uVar3 = 0;
  lVar2 = lVar1;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
    uVar3 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  lRam0000000112e603e0 = lVar1;
  uRam0000000112e603e8 = uVar3;
  return;
}



/* Entry: 1021b84b4; end: 1021b84ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1021b84b4(void)

{
  undefined1 (*pauVar1) [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112e60360);
  if (pauVar1[1][0] == '\x01') {
    *(undefined8 *)(*pauVar1 + 8) = 0xf;
    *(undefined8 *)*pauVar1 = 0;
    pauVar1[1][0] = 0;
    return ZEXT816(0xf) << 0x40;
  }
  return *pauVar1;
}



/* Entry: 1021b84f0; end: 1021b87df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021b84f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e60368;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e60368);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x0001021b8554();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1021b87e0; end: 1021b8cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1021b87e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar4 = _DAT_112e60370;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e60370);
  func_0x000107c61174(uVar6);
  func_0x000107c56c24();
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  puVar7 = &UNK_1104db898;
  func_0x000107c613fc(&UNK_1104db898,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1021ba874;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1104db928;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_78;
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c59bc4(uVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar6);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000107c438d4();
    func_0x000107c61170(lVar9);
    uVar6 = *param_4;
    uVar1 = param_4[1];
    uVar11 = param_4[2];
    uVar2 = param_4[3];
    uVar12 = *(undefined8 *)(unaff_x20 + lVar4);
    puVar7 = &UNK_1104db898;
    func_0x000107c613fc(&UNK_1104db898,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar10 = PTR_PTR_1126c4e80;
    func_0x000107c610f8(PTR_PTR_1126c4e80);
    func_0x000107c61174();
    func_0x000107c6157c(puVar7);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c5fadc(uVar11,uVar2);
    pcStack_80 = (code *)0x1021ba8bc;
    puStack_a0 = puVar3;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1021ba090;
    puStack_88 = &UNK_1104db950;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    func_0x000107c47624(param_3,0x7fefffffffffffff,puVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar11);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1021b8a4c);
  (*pcVar5)();
}



/* Entry: 1021b8cac; end: 1021b8d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b8cac(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  FUN_1021b8240(unaff_x20 + _DAT_112e60390,auStack_58);
  if (lStack_40 == 0) {
    func_0x0001021b8290(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    lVar1 = lStack_40;
    (**(code **)(lStack_38 + 8))(lStack_40,lStack_38);
    pcVar2 = "loadMatchmakingOptInStatus()";
    func_0x0001000c10c0("loadMatchmakingOptInStatus()");
    func_0x000107c61180();
    puVar3 = &UNK_1104db898;
    func_0x000107c613fc(&UNK_1104db898,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    func_0x00010075a04c(pcVar2,1,FUN_1021ba808,puVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(pcVar2);
    func_0x000107c61574(puVar3);
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 1021b8d9c; end: 1021b8dc3; -[_TtC20GameActivitySettings34GameActivitySettingsViewController initWithCoder:] */

void FUN_1021b8d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1021ba5b4();
  return;
}



/* Entry: 1021b8dc4; end: 1021b8ea7;  */

/* WARNING: Possible PIC construction at 0x0001021b8e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b8e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b8e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b8f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b8fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b9070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b90c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b90e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b9130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b9150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b91b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b91d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b921c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b91d4) */
/* WARNING: Removing unreachable block (ram,0x0001021b91b4) */
/* WARNING: Removing unreachable block (ram,0x0001021b9154) */
/* WARNING: Removing unreachable block (ram,0x0001021b9260) */
/* WARNING: Removing unreachable block (ram,0x0001021b9188) */
/* WARNING: Removing unreachable block (ram,0x0001021b9134) */
/* WARNING: Removing unreachable block (ram,0x0001021b90e4) */
/* WARNING: Removing unreachable block (ram,0x0001021b925c) */
/* WARNING: Removing unreachable block (ram,0x0001021b9118) */
/* WARNING: Removing unreachable block (ram,0x0001021b90c4) */
/* WARNING: Removing unreachable block (ram,0x0001021b9074) */
/* WARNING: Removing unreachable block (ram,0x0001021b9258) */
/* WARNING: Removing unreachable block (ram,0x0001021b90a8) */
/* WARNING: Removing unreachable block (ram,0x0001021b8fd8) */
/* WARNING: Removing unreachable block (ram,0x0001021b8f94) */
/* WARNING: Removing unreachable block (ram,0x0001021b9254) */
/* WARNING: Removing unreachable block (ram,0x0001021b8fc4) */
/* WARNING: Removing unreachable block (ram,0x0001021b8e94) */
/* WARNING: Removing unreachable block (ram,0x0001021b8f04) */
/* WARNING: Removing unreachable block (ram,0x0001021b923c) */
/* WARNING: Removing unreachable block (ram,0x0001021b8f30) */
/* WARNING: Removing unreachable block (ram,0x0001021b8e68) */
/* WARNING: Removing unreachable block (ram,0x0001021b8e20) */
/* WARNING: Removing unreachable block (ram,0x0001021b9220) */

void FUN_1021b8dc4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b8ea8);
  (*pcVar1)();
}



/* Entry: 1021b8ea8; end: 1021b8f03; -[_TtC20GameActivitySettings34GameActivitySettingsViewController viewDidLoad] */

void FUN_1021b8ea8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1021b8dc4();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021b8f04; end: 1021b93c7;  */

/* WARNING: Possible PIC construction at 0x0001021b8f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b8fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b9070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b90c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b90e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b9130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b9150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b91b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b91d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b921c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b91d4) */
/* WARNING: Removing unreachable block (ram,0x0001021b91b4) */
/* WARNING: Removing unreachable block (ram,0x0001021b9154) */
/* WARNING: Removing unreachable block (ram,0x0001021b9260) */
/* WARNING: Removing unreachable block (ram,0x0001021b9188) */
/* WARNING: Removing unreachable block (ram,0x0001021b9134) */
/* WARNING: Removing unreachable block (ram,0x0001021b90e4) */
/* WARNING: Removing unreachable block (ram,0x0001021b925c) */
/* WARNING: Removing unreachable block (ram,0x0001021b9118) */
/* WARNING: Removing unreachable block (ram,0x0001021b90c4) */
/* WARNING: Removing unreachable block (ram,0x0001021b9074) */
/* WARNING: Removing unreachable block (ram,0x0001021b9258) */
/* WARNING: Removing unreachable block (ram,0x0001021b90a8) */
/* WARNING: Removing unreachable block (ram,0x0001021b8fd8) */
/* WARNING: Removing unreachable block (ram,0x0001021b8f94) */
/* WARNING: Removing unreachable block (ram,0x0001021b9254) */
/* WARNING: Removing unreachable block (ram,0x0001021b8fc4) */
/* WARNING: Removing unreachable block (ram,0x0001021b9220) */

void FUN_1021b8f04(void)

{
  long unaff_x20;
  
  func_0x000107c44c68();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    FUN_1021b84f0();
    FUN_1021ba7c8(0,0x112d366c8,&PTR_PTR_1126b5a18);
    func_0x000107c614e8();
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f06b500);
    func_0x000107c4fbd4(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
  return;
}



/* Entry: 1021b93c8; end: 1021b941f;  */

void FUN_1021b93c8(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1021b9420; end: 1021b955f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b9420(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e60378);
  func_0x000107c4a118();
  FUN_1021b8240(unaff_x20 + _DAT_112e60390,auStack_68);
  if (lStack_50 == 0) {
    func_0x0001021b8290(auStack_68);
  }
  else {
    func_0x0001000a8868(auStack_68,lStack_50);
    uVar3 = uVar2;
    (**(code **)(lStack_48 + 0x10))(uVar2,lStack_50,lStack_48);
    pcVar4 = "matchmakingTapAction()";
    func_0x0001000c10c0("matchmakingTapAction()");
    func_0x000107c61180();
    puVar5 = &UNK_1104db898;
    func_0x000107c613fc(&UNK_1104db898,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_1104db910;
    func_0x000107c613fc(&UNK_1104db910,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    puVar6[0x18] = (char)uVar2;
    *(long *)(puVar6 + 0x20) = lVar1;
    func_0x00010075a04c(pcVar4,1,FUN_1021ba864,puVar6);
    func_0x000107c61574(uVar3);
    func_0x000107c615e8(pcVar4);
    func_0x000107c61574(puVar6);
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 1021b9560; end: 1021b9667;  */

long FUN_1021b9560(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_1021b84f0();
    func_0x000107c61170(param_1);
    lVar2 = lVar1;
    func_0x000107c5ce94(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 1021b9668; end: 1021b9917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b9668(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar8 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (cVar1 == '\x01') {
    lStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c614b0(uVar8);
    func_0x000107c602fc(0x39);
    func_0x000107c5fb78(0xd00000000000002d,0x800000010f06b650);
    bVar4 = (param_3 & 1) == 0;
    uVar5 = 0x65757274;
    if (bVar4) {
      uVar5 = 0x65736c6166;
    }
    uVar7 = 0xe400000000000000;
    if (bVar4) {
      uVar7 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar5,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c5fb78(0x3a726f727265202c,0xe800000000000000);
    uVar5 = 0x112d393f0;
    uStack_70 = uVar8;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_70,&lStack_68,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar5 = uStack_60;
    func_0x0001007d6c6c(3,lStack_68,uStack_60,param_4,&PTR_DAT_1104db868);
    func_0x000107c6142c(uVar5);
    func_0x000107c56c24(*(undefined8 *)(param_2 + _DAT_112e60378));
    if (lRam0000000112e603d8 != -1) {
      func_0x000107c61568(0x112e603d8,FUN_1021b8424);
    }
    lVar2 = lRam0000000112e603e8;
    uVar5 = uRam0000000112e603e0;
    if (lRam0000000112e603e8 != 0) {
      uVar7 = *(undefined8 *)(param_2 + _DAT_112e60398);
      func_0x000107c6157c(uVar7);
      func_0x0001000d224c(&lStack_68);
      func_0x000107c61574(uVar7);
      lVar3 = lStack_68;
      if (lStack_68 != 0) {
        puVar6 = PTR_PTR_1126afde0;
        func_0x000107c61168(PTR_PTR_1126afde0);
        func_0x000107c5fadc(uVar5,lVar2);
        uVar7 = 0xd000000000000026;
        func_0x000107c5fadc(0xd000000000000026,0x800000010f06b680);
        func_0x000107c409d8(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar7);
        func_0x000107c61174(puVar6);
        func_0x000107c5c2e0(lVar3);
        func_0x000100fc38ac(uVar8,1);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        goto LAB_1021b98e0;
      }
    }
    func_0x000100fc38ac(uVar8,1);
  }
LAB_1021b98e0:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1021b9918; end: 1021b9bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b9918(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  uVar8 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (cVar1 == '\x01') {
    lStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c614b0(uVar8);
    func_0x000107c602fc(0x2d);
    func_0x000107c5fb78(0xd000000000000021,0x800000010f06b6f0);
    bVar4 = (param_3 & 1) == 0;
    uVar5 = 0x65757274;
    if (bVar4) {
      uVar5 = 0x65736c6166;
    }
    uVar7 = 0xe400000000000000;
    if (bVar4) {
      uVar7 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar5,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c5fb78(0x3a726f727265202c,0xe800000000000000);
    uVar5 = 0x112d393f0;
    uStack_80 = uVar8;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_80,&lStack_78,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar5 = uStack_70;
    func_0x0001007d6c6c(3,lStack_78,uStack_70,param_4,&PTR_DAT_1104db868);
    func_0x000107c6142c(uVar5);
    func_0x000107c56c24(*(undefined8 *)(param_2 + _DAT_112e60370));
    if (lRam0000000112e603d8 != -1) {
      func_0x000107c61568(0x112e603d8,FUN_1021b8424);
    }
    lVar2 = lRam0000000112e603e8;
    uVar5 = uRam0000000112e603e0;
    if (lRam0000000112e603e8 != 0) {
      uVar7 = *(undefined8 *)(param_2 + _DAT_112e60398);
      func_0x000107c6157c(uVar7);
      func_0x0001000d224c(&lStack_78);
      func_0x000107c61574(uVar7);
      lVar3 = lStack_78;
      if (lStack_78 != 0) {
        puVar6 = PTR_PTR_1126afde0;
        func_0x000107c61168(PTR_PTR_1126afde0);
        func_0x000107c5fadc(uVar5,lVar2);
        uVar7 = 0xd000000000000022;
        func_0x000107c5fadc(0xd000000000000022,0x800000010f06b720);
        func_0x000107c409d8(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar7);
        func_0x000107c61174(puVar6);
        func_0x000107c5c2e0(lVar3);
        func_0x000100fc38ac(uVar8,1);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        goto LAB_1021b9b94;
      }
    }
    func_0x000100fc38ac(uVar8,1);
  }
LAB_1021b9b94:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1021b9bd0; end: 1021b9bfb; -[_TtC20GameActivitySettings34GameActivitySettingsViewController initWithNibName:bundle:] */

void FUN_1021b9bd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GameActivitySettings.GameActivitySettingsViewController",0x37,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b9bfc);
  (*pcVar1)();
}



/* Entry: 1021b9bfc; end: 1021b9c5b; -[_TtC20GameActivitySettings34GameActivitySettingsViewController initWithNibName:bundle:transitionType:] */

void FUN_1021b9bfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GameActivitySettings.GameActivitySettingsViewController",0x37,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b9c28);
  (*pcVar1)();
}



/* Entry: 1021b9c5c; end: 1021b9d03; -[_TtC20GameActivitySettings34GameActivitySettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b9c5c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e60368));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e60370));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e60378));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e60358));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e60380 + 8);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e60380 + 0x18));
  func_0x000107c6142c(uVar1);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e60388));
  func_0x0001021b8290(param_1 + _DAT_112e60390);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e60398));
  return;
}



/* Entry: 1021b9d04; end: 1021b9d0b; -[_TtC20GameActivitySettings34GameActivitySettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_1021b9d04(void)

{
  return 1;
}



/* Entry: 1021b9d0c; end: 1021b9d73; -[_TtC20GameActivitySettings34GameActivitySettingsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b9d0c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = _DAT_112e60358;
  func_0x000107c61428(param_1 + _DAT_112e60358,auStack_38,0,0);
  uVar3 = *(ulong *)(param_1 + lVar2);
  if (uVar3 >> 0x3e != 0) {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    func_0x000107c60480(uVar1);
  }
  return;
}



/* Entry: 1021b9d74; end: 1021b9ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b9d74(undefined *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f06b500);
  uVar4 = uVar3;
  func_0x000107c5efd4();
  func_0x000107c417dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  puVar6 = PTR_PTR_1126b5a18;
  func_0x000107c61168(PTR_PTR_1126b5a18);
  puVar5 = param_1;
  func_0x000107c6148c(param_1,puVar6);
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
    puVar6 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    func_0x000107c610f8(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar6;
  }
  puVar6 = puVar5;
  func_0x000107c5efec();
  lVar1 = _DAT_112e60358;
  func_0x000107c61428(unaff_x20 + _DAT_112e60358,auStack_58,0x20,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar1);
  if ((uVar7 & 0xc000000000000001) == 0) {
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021b9ed4);
      (*pcVar2)();
    }
    if (*(undefined **)((uVar7 & 0xffffffffffffff8) + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021b9ed8);
      (*pcVar2)();
    }
    puVar6 = *(undefined **)(uVar7 + (long)puVar6 * 8 + 0x20);
    func_0x000107c61174(puVar6);
  }
  else {
    func_0x0001021ba164(puVar6);
  }
  func_0x000107c614a8(auStack_58);
  func_0x000107c40198(puVar5);
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1021b9ed8; end: 1021b9f9f; -[_TtC20GameActivitySettings34GameActivitySettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_1021b9ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1021b9d74(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b9fa0; end: 1021ba06b; -[_TtC20GameActivitySettings34GameActivitySettingsViewController tableView:heightForRowAtIndexPath:] */

undefined8
FUN_1021b9fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_1021ba674(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return param_1;
}



/* Entry: 1021ba06c; end: 1021ba08f;  */

void FUN_1021ba06c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001021ba07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1021ba090; end: 1021ba0c7;  */

void FUN_1021ba090(long param_1)

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



/* Entry: 1021ba0c8; end: 1021ba0eb;  */

void FUN_1021ba0c8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e603d0;
  plVar5 = (long *)&UNK_10da68530;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021ba7c8(0,0x112e60338,&PTR_PTR_1126c4e80);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1021ba0ec; end: 1021ba327;  */

void FUN_1021ba0ec(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021ba7c8(0,param_1,param_2);
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



/* Entry: 1021ba328; end: 1021ba5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1021ba328(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e60360);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60368) = 0;
  lVar3 = _DAT_112e60370;
  func_0x0001021b8634();
  *(long *)(unaff_x20 + lVar3) = lVar4;
  lVar3 = _DAT_112e60378;
  func_0x0001021b870c();
  *(long *)(unaff_x20 + lVar3) = lVar4;
  *(undefined **)(unaff_x20 + _DAT_112e60358) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112e603a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e60388);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1021b8240(param_3,unaff_x20 + _DAT_112e60390);
  *(undefined8 *)(unaff_x20 + _DAT_112e60398) = param_4;
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_68 = param_5[3];
  uStack_70 = param_5[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e60380);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  puVar1[3] = uStack_68;
  puVar1[2] = uStack_70;
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_5 + 4);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_4);
  func_0x000100402194(&uStack_60,auStack_98);
  func_0x000100402194(&uStack_70,auStack_98);
  puVar5 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  FUN_1021b87e0();
  func_0x000100bcb1dc(&uStack_60);
  func_0x000100bcb1dc(&uStack_70);
  lVar3 = _DAT_112e60358;
  func_0x000107c61428(puVar5 + _DAT_112e60358,auStack_98,0x21,0);
  FUN_1021b7ee0();
  uVar7 = *(ulong *)(puVar5 + lVar3);
  uVar8 = uVar7 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar8 + 0x10);
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar2) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_1021b7f50(uVar7,uVar2 + 1,1);
    uVar8 = uVar7 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar2 + 1;
  *(undefined8 **)(uVar8 + uVar2 * 8 + 0x20) = param_5;
  *(ulong *)(puVar5 + lVar3) = uVar7;
  puVar6 = auStack_98;
  func_0x000107c614a8();
  if (*(long *)(param_3 + 0x18) != 0) {
    func_0x0001021b8a4c();
    func_0x000107c61428(puVar5 + lVar3,auStack_98,0x21,0);
    FUN_1021b7ee0();
    uVar7 = *(ulong *)(puVar5 + lVar3);
    uVar8 = uVar7 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar8 + 0x10);
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_1021b7f50(uVar7,uVar2 + 1,1);
      uVar8 = uVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar8 + 0x10) = uVar2 + 1;
    *(undefined1 **)(uVar8 + uVar2 * 8 + 0x20) = puVar6;
    *(ulong *)(puVar5 + lVar3) = uVar7;
    func_0x000107c614a8(auStack_98);
    FUN_1021b8cac();
  }
  func_0x000107c61170(puVar5);
  func_0x0001021b8290(param_3);
  return puVar5;
}



/* Entry: 1021ba5b4; end: 1021ba673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ba5b4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e60360);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60368) = 0;
  lVar2 = _DAT_112e60370;
  func_0x0001021b8634();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112e60378;
  func_0x0001021b870c();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  *(undefined **)(unaff_x20 + _DAT_112e60358) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112e603a0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "GameActivitySettings/GameActivitySettingsViewController.swift",0x3d,2,0x5d,0)
  ;
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1021ba674);
  (*pcVar3)();
}



/* Entry: 1021ba674; end: 1021ba7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021ba674(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c5efec();
  lVar1 = _DAT_112e60358;
  func_0x000107c61428(unaff_x20 + _DAT_112e60358,auStack_58,0,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar3 = uVar5;
    }
    func_0x000107c60480();
  }
  uVar6 = 0;
  if (param_1 < (long)uVar3) {
    func_0x000107c5efec(0);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_70,0x20,0);
    uVar5 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar5 & 0xc000000000000001) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1021ba7a4);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1021ba7a8);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar5 + uVar3 * 8 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      func_0x0001021ba164(uVar3);
    }
    puVar4 = PTR_PTR_1126b5a18;
    func_0x000107c61168(PTR_PTR_1126b5a18);
    func_0x000107c614a8(auStack_70);
    FUN_1021b84b4();
    func_0x000107c40070(puVar4);
    func_0x000107c61170(uVar3);
  }
  return uVar6;
}



/* Entry: 1021ba7a8; end: 1021ba7c7;  */

void FUN_1021ba7a8(void)

{
  func_0x000107c61168(&PTR_PTR_112824d08);
  return;
}



/* Entry: 1021ba7c8; end: 1021ba807;  */

void FUN_1021ba7c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1021ba808; end: 1021ba80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ba808(long param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)(param_1 + 8);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (cVar1 != '\x01') {
      func_0x000107c56c24(*(undefined8 *)(lVar2 + _DAT_112e60378));
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1021ba810; end: 1021ba82f;  */

void FUN_1021ba810(void)

{
  FUN_1021b93c8();
  return;
}


