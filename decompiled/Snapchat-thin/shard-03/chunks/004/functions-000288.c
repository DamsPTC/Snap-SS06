/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10288b950; end: 10288babb;  */

/* WARNING: Possible PIC construction at 0x00010288ba3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288ba4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288ba5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288ba6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288ba7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288ba8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010288ba80) */
/* WARNING: Removing unreachable block (ram,0x00010288ba70) */
/* WARNING: Removing unreachable block (ram,0x00010288ba60) */
/* WARNING: Removing unreachable block (ram,0x00010288ba50) */
/* WARNING: Removing unreachable block (ram,0x00010288ba40) */
/* WARNING: Removing unreachable block (ram,0x00010288ba90) */

void FUN_10288b950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11055d3f8;
  func_0x000107c613fc(&UNK_11055d3f8,0x78,7);
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
  uVar2 = 0x112ec6078;
  func_0x0001000285a8(0x112ec6078,&UNK_10dae7528);
  func_0x000107c613fc();
  pcVar3 = FUN_10288bbb4;
  func_0x0001000841fc(FUN_10288bbb4,puVar1,uVar2);
  func_0x000100084214("MessageActionMenuItemPluginRegistryServiceProvider",0x32,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10288babc; end: 10288bbb3;  */

void FUN_10288babc(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_1028912c4(param_3,param_4,param_5,param_6,param_7);
      pcVar2 = "AIRemixChatActionMenuPluginProvider";
      uVar3 = 0x23;
      param_8 = param_3;
    }
    else {
      FUN_10288cc5c(param_3,param_8,param_9,param_6,param_10);
      pcVar2 = "CreateSongChatActionMenuPluginProvider";
      uVar3 = 0x26;
      param_8 = param_3;
    }
  }
  else if (bVar1 == 2) {
    FUN_10288f538(param_8,param_11,param_12);
    pcVar2 = "PlusSnapModesUpsellActionMenuPluginProvider";
    uVar3 = 0x2b;
  }
  else {
    FUN_10288e390(param_8,param_11,param_6,param_13,param_3,param_14,param_15);
    pcVar2 = "RemixStickerChatActionMenuPluginProvider";
    uVar3 = 0x28;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_8;
  return;
}



/* Entry: 10288bbb4; end: 10288bbf3;  */

void FUN_10288bbb4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10288babc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10288bbf4; end: 10288bc3b; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288bbf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6080;
  func_0x000107c61428(param_1 + _DAT_112ec6080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10288bc3c; end: 10288bc93; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288bc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6080;
  func_0x000107c61428(param_1 + _DAT_112ec6080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288bc94; end: 10288bc9b; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin itemType] */

undefined8 FUN_10288bc94(void)

{
  return 0xe;
}



/* Entry: 10288bc9c; end: 10288bca3; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_10288bc9c(void)

{
  return 0;
}



/* Entry: 10288bca4; end: 10288bd97; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288bca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  cVar1 = *(char *)(param_4 + _DAT_112f14ba8);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  if ((cVar1 == '\x01') && (lVar4 = param_4, FUN_10288c3f0(param_3), lVar4 != 0)) {
    func_0x000107c6142c(lVar4);
  }
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10288bd98; end: 10288bee3;  */

undefined * FUN_10288bd98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  
  uVar1 = 0x112d3bec8;
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x0001000b637c(param_1,uVar1);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  func_0x0001000b637c(param_2);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(param_2);
  uVar1 = uVar2;
  func_0x0001006c733c(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar2);
  puVar3 = &UNK_11055d4a8;
  func_0x000107c613fc(&UNK_11055d4a8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11055d4d0;
  func_0x000107c613fc(&UNK_11055d4d0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10288c85c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar2 = 0;
  func_0x00010288cc04(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  pcVar5 = FUN_10288c864;
  func_0x0001000d5158(FUN_10288c864,puVar4,uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar5);
  return puVar4;
}



/* Entry: 10288bee4; end: 10288c133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10288bee4(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((*(char *)(param_2 + _DAT_112f14ba8) == '\x01') &&
       (lVar6 = param_2, FUN_10288c3f0(param_1), lVar6 != 0)) {
      func_0x000107c6142c(lVar6);
      puVar1 = PTR_PTR_1126a5e70;
      func_0x000107c610f8(PTR_PTR_1126a5e70);
      func_0x000107c453e4();
      puVar2 = puVar1;
      FUN_10288cf88();
      lVar7 = lVar6;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar6);
      func_0x000107c59e18(puVar1);
      func_0x000107c61170(puVar2);
      puVar2 = PTR_PTR_1126c2cb0;
      func_0x000107c61168();
      func_0x000107c44f9c();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar7);
      }
      func_0x000107c592b0(puVar1);
      func_0x000107c61170(puVar2);
      uVar3 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010f0c49d0);
      func_0x000107c520f0(puVar1);
      func_0x000107c61170(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c59a2c(puVar1);
      func_0x000107c61170(puVar2);
      puVar2 = &UNK_11055d4a8;
      func_0x000107c613fc(&UNK_11055d4a8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_3);
      puVar4 = &UNK_11055d4f8;
      func_0x000107c613fc(&UNK_11055d4f8,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar2;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = param_2;
      pcStack_68 = FUN_10288cbb4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11055d510;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar2 = puStack_60;
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar2);
      func_0x000107c56ea0(puVar1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_3);
      return puVar1;
    }
    func_0x000107c61170(param_3);
  }
  return (undefined *)0x0;
}



/* Entry: 10288c134; end: 10288c1a3;  */

void FUN_10288c134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10288c1a4(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10288c1a4; end: 10288c377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288c1a4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  FUN_10288c3f0();
  lVar2 = _DAT_112ec6080;
  if (param_2 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112ec6080,auStack_78,0,0);
    lVar2 = unaff_x20 + lVar2;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5d184();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar4 = *(long *)(unaff_x20 + _DAT_112ec6098);
      func_0x000107c4ce08();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec60a8);
      func_0x000107c4c1c4();
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec6088);
      *(undefined8 *)(unaff_x20 + _DAT_112ec6088) = uVar5;
      func_0x000107c615f0();
      func_0x000107c615e8(uVar9);
      lVar6 = lVar4;
      func_0x000107c40674(lVar4);
      func_0x000107c61180();
      lVar8 = param_2;
      func_0x000107c5fadc(param_1);
      func_0x000107c6142c(param_2);
      lVar2 = lVar4;
      func_0x000107c4cde0();
      func_0x000107c61180();
      lVar7 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = *(long *)(unaff_x20 + _DAT_112ec6090);
      lVar1 = ((long *)(unaff_x20 + _DAT_112ec6090))[1];
      if (lVar7 != lVar2 || lVar8 != lVar1) {
        func_0x000107c605b8(lVar7,lVar8,lVar2,lVar1,0);
      }
      func_0x000107c6142c(lVar8);
      func_0x000107c4efb4(uVar5);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 10288c378; end: 10288c3ef; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_10288c378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10288bd98(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10288c3f0; end: 10288c85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10288c3f0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  
  ppuVar9 = &puStack_b0;
  ppuVar10 = &puStack_b0;
  ppuVar6 = &puStack_b0;
  ppuVar3 = *(undefined ***)(unaff_x20 + _DAT_112ec6098);
  uVar14 = param_2;
  func_0x000107c4ce08(ppuVar3,param_2,param_1);
  func_0x000107c61180();
  ppuVar4 = ppuVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (ppuVar4 == (undefined **)0x0) {
    func_0x000107c615e8(ppuVar3);
  }
  else {
    ppuVar5 = ppuVar4;
    func_0x000107c404a8();
    if ((int)ppuVar5 == 0x18) {
      ppuVar5 = ppuVar4;
      func_0x000107c3ec0c();
      func_0x000107c61180();
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar8 = ppuVar5;
        func_0x000107c5bd00();
        if (((int)ppuVar8 == 4) &&
           (ppuVar8 = ppuVar5, func_0x000107c44af4(), ((ulong)ppuVar8 & 1) == 0)) {
          ppuVar8 = ppuVar3;
          func_0x000107c4cde0();
          func_0x000107c61180();
          ppuVar7 = ppuVar8;
          func_0x000107c5faec();
          uVar16 = uVar14;
          func_0x000107c61170(ppuVar8);
          ppuVar8 = &PTR____CFConstantStringClassReference_110e12b58;
          func_0x000107c5faec();
          if (ppuVar7 == ppuVar8 && uVar14 == uVar16) {
            func_0x000107c6142c(uVar14);
            func_0x000107c6142c(uVar16);
          }
          else {
            func_0x000107c605b8(ppuVar7,uVar14,ppuVar8,uVar16,0);
            func_0x000107c6142c(uVar14);
            func_0x000107c6142c(uVar16);
            if (((ulong)ppuVar7 & 1) == 0) goto LAB_10288c54c;
          }
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          ppuStack_80 = (undefined **)0x0;
          uStack_78 = 0;
          uVar15 = *(undefined8 *)(param_2 + _DAT_112f14b98);
          pcStack_90 = FUN_10288c894;
          puStack_88 = (undefined *)0x0;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_10006eb60;
          puStack_98 = &UNK_11055d538;
          func_0x000107c60bc4(&puStack_b0);
          func_0x000107c61574(puStack_88);
          pcStack_90 = FUN_10288c894;
          puStack_88 = (undefined *)0x0;
          puStack_b0 = puVar1;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_1011a7a34;
          puStack_98 = &UNK_11055d560;
          func_0x000107c60bc4(&puStack_b0);
          func_0x000107c61574(puStack_88);
          puVar11 = &UNK_11055d598;
          func_0x000107c613fc(&UNK_11055d598,0x18,7);
          *(undefined ****)(puVar11 + 0x10) = &ppuStack_80;
          puVar12 = &UNK_11055d5c0;
          func_0x000107c613fc(&UNK_11055d5c0,0x20,7);
          *(undefined8 *)(puVar12 + 0x10) = 0x10288cbdc;
          *(undefined **)(puVar12 + 0x18) = puVar11;
          pcStack_90 = FUN_10288cbe4;
          puStack_b0 = puVar1;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_1011a64f8;
          puStack_98 = &UNK_11055d5d8;
          puStack_88 = puVar12;
          func_0x000107c60bc4(&puStack_b0);
          func_0x000107c61574(puStack_88);
          func_0x000107c4c640(uVar15);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c60bd0(ppuVar9);
          uVar14 = uStack_78;
          ppuVar6 = ppuStack_80;
          if (uStack_78 == 0) {
LAB_10288c818:
            func_0x000107c615e8(ppuVar3);
            func_0x000107c61170(ppuVar5);
            func_0x000107c61170(ppuVar4);
          }
          else {
            uVar16 = (ulong)ppuStack_80 & 0xffffffffffff;
            if ((uStack_78 & 0x2000000000000000) != 0) {
              uVar16 = uStack_78 >> 0x38 & 0xf;
            }
            if (uVar16 == 0) goto LAB_10288c818;
            uVar16 = *(ulong *)(unaff_x20 + _DAT_112ec60a0);
            func_0x000107c61434();
            func_0x000107c5c734();
            func_0x000107c61180();
            if (uVar16 == 0) {
              func_0x000107c6142c(uVar14);
              goto LAB_10288c818;
            }
            uVar13 = uVar16;
            func_0x000107c4a078();
            func_0x000107c615e8(uVar16);
            func_0x000107c615e8(ppuVar3);
            func_0x000107c61170(ppuVar5);
            func_0x000107c61170(ppuVar4);
            uVar16 = uStack_78;
            if ((uVar13 & 1) != 0) {
              func_0x000107c61574(puVar11);
              func_0x000107c6142c(uVar16);
              goto LAB_10288c578;
            }
            func_0x000107c6142c(uVar14);
          }
          uVar14 = uStack_78;
          func_0x000107c61574(puVar11);
          func_0x000107c6142c(uVar14);
          goto LAB_10288c570;
        }
LAB_10288c54c:
        func_0x000107c61170(ppuVar5);
      }
    }
    else if ((int)ppuVar5 == 2) {
      ppuVar6 = ppuVar4;
      func_0x000107c5c82c();
      func_0x000107c61180();
      if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10288c858);
        (*pcVar2)();
      }
      ppuVar10 = ppuVar6;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar6);
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar6 = ppuVar10;
        func_0x000107c5faec();
        func_0x000107c61170(ppuVar10);
        uVar16 = (ulong)ppuVar6 & 0xffffffffffff;
        if ((uVar14 & 0x2000000000000000) != 0) {
          uVar16 = uVar14 >> 0x38 & 0xf;
        }
        if (uVar16 != 0) {
          ppuVar10 = ppuVar4;
          func_0x000107c5c82c();
          func_0x000107c61180();
          if (ppuVar10 == (undefined **)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10288c85c);
            (*pcVar2)();
          }
          ppuVar9 = ppuVar10;
          FUN_10288ca64();
          func_0x000107c61170(ppuVar10);
          func_0x000107c615e8(ppuVar3);
          func_0x000107c61170(ppuVar4);
          if (((ulong)ppuVar9 & 1) == 0) goto LAB_10288c578;
          func_0x000107c6142c(uVar14);
          goto LAB_10288c570;
        }
        func_0x000107c6142c(uVar14);
      }
    }
    func_0x000107c615e8(ppuVar3);
    func_0x000107c61170(ppuVar4);
  }
LAB_10288c570:
  ppuVar6 = (undefined **)0x0;
  uVar14 = 0;
LAB_10288c578:
  auVar17._8_8_ = uVar14;
  auVar17._0_8_ = ppuVar6;
  return auVar17;
}



/* Entry: 10288c85c; end: 10288c863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10288c85c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((*(char *)(param_2 + _DAT_112f14ba8) == '\x01') &&
       (lVar7 = param_2, FUN_10288c3f0(param_1), lVar7 != 0)) {
      func_0x000107c6142c(lVar7);
      puVar2 = PTR_PTR_1126a5e70;
      func_0x000107c610f8(PTR_PTR_1126a5e70);
      func_0x000107c453e4();
      puVar3 = puVar2;
      FUN_10288cf88();
      lVar8 = lVar7;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar7);
      func_0x000107c59e18(puVar2);
      func_0x000107c61170(puVar3);
      puVar3 = PTR_PTR_1126c2cb0;
      func_0x000107c61168();
      func_0x000107c44f9c();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar8);
      }
      func_0x000107c592b0(puVar2);
      func_0x000107c61170(puVar3);
      uVar4 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010f0c49d0);
      func_0x000107c520f0(puVar2);
      func_0x000107c61170(uVar4);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c59a2c(puVar2);
      func_0x000107c61170(puVar3);
      puVar3 = &UNK_11055d4a8;
      func_0x000107c613fc(&UNK_11055d4a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar1);
      puVar5 = &UNK_11055d4f8;
      func_0x000107c613fc(&UNK_11055d4f8,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar3;
      *(undefined8 *)(puVar5 + 0x18) = param_1;
      *(long *)(puVar5 + 0x20) = param_2;
      pcStack_68 = FUN_10288cbb4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11055d510;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar3 = puStack_60;
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c56ea0(puVar2);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar1);
      return puVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return (undefined *)0x0;
}



/* Entry: 10288c864; end: 10288c893;  */

void FUN_10288c864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10288c894; end: 10288c89b;  */

void FUN_10288c894(void)

{
  return;
}



/* Entry: 10288c89c; end: 10288c903;  */

void FUN_10288c89c(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (param_2 != 0) {
      lVar2 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      goto LAB_10288c8ec;
    }
  }
  lVar2 = 0;
  lVar3 = 0;
LAB_10288c8ec:
  lVar1 = param_3[1];
  *param_3 = lVar2;
  param_3[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 10288c904; end: 10288c963; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin init] */

void FUN_10288c904(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateSongChatActionMenuPlugin.CreateSongChatActionMenuPlugin",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10288c930);
  (*pcVar1)();
}



/* Entry: 10288c964; end: 10288c9df; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10288c964(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec6090 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec6098));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec60a0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec60a8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec6088));
  param_1 = param_1 + _DAT_112ec6080;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10288c9e0; end: 10288c9ff;  */

void FUN_10288c9e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128684d0);
  return;
}



/* Entry: 10288ca00; end: 10288ca63; -[_TtC30CreateSongChatActionMenuPlugin30CreateSongChatActionMenuPlugin dismissPresentedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288ca00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112ec6088;
  lVar2 = *(long *)(param_1 + _DAT_112ec6088);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
    uVar3 = 0;
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c42008(lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
  }
  *(undefined8 *)(param_1 + lVar1) = 0;
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 10288ca64; end: 10288cbb3;  */

undefined8 FUN_10288ca64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c3e380();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10288cbb4);
    (*pcVar3)();
  }
  func_0x000107c600f4(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(param_1);
  func_0x000107c5ed4c(auStack_70);
  if (lStack_58 != 0) {
    uVar5 = 0;
    func_0x00010288cc04(0,0x112d9fb30,&PTR_PTR_1126cfd98);
    puVar1 = PTR___sypN_11034f1a8;
    do {
      puVar6 = &uStack_78;
      func_0x000107c6147c(puVar6,auStack_70,puVar1 + 8,uVar5,6);
      uVar2 = uStack_78;
      if (((ulong)puVar6 & 1) != 0) {
        uVar7 = uStack_78;
        func_0x000107c3e358();
        func_0x000107c61170(uVar2);
        if ((int)uVar7 - 3U < 2) {
          uVar5 = 1;
          goto LAB_10288cb80;
        }
      }
      func_0x000107c5ed4c(auStack_70);
    } while (lStack_58 != 0);
  }
  uVar5 = 0;
LAB_10288cb80:
  (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  return uVar5;
}



/* Entry: 10288cbb4; end: 10288cbe3;  */

void FUN_10288cbb4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10288c1a4(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10288cbe4; end: 10288cc43;  */

void FUN_10288cbe4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10288cc44; end: 10288cc5b;  */

void FUN_10288cc44(long param_1,long param_2)

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



/* Entry: 10288cc5c; end: 10288cf67;  */

void FUN_10288cc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec60d8,&UNK_10dae7550);
  puVar1 = &UNK_11055d610;
  func_0x000107c613fc(&UNK_11055d610,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_10288cf68,puVar1);
  return;
}



/* Entry: 10288cf68; end: 10288cf87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288cf68(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar8 = &lStack_80;
  func_0x000100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),uVar9,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar3 = uStack_58;
  uVar2 = uStack_58;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c43d28();
    func_0x000107c61180();
    func_0x000107c615e8(uVar3);
    uVar3 = uVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = uVar3;
    func_0x000107c5bcc0();
    func_0x000107c61170(uVar3);
    if ((uVar2 | 2) == 3) {
      func_0x000100083b20(&uStack_58);
      uVar4 = *(undefined8 *)(uStack_58 + _DAT_113083f78);
      func_0x000107c61174();
      func_0x000107c61170(uStack_58);
      uVar5 = uVar4;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar4 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      func_0x000100083b20(&lStack_60);
      uVar10 = *(undefined8 *)(lStack_60 + _DAT_11301aef0);
      func_0x000107c615f0(uVar10);
      func_0x000107c61170(lStack_60);
      func_0x000100083b20(&lStack_68);
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_1130404b8);
      func_0x000107c61174();
      func_0x000107c61170(lStack_68);
      func_0x000100083b20(&uStack_70);
      lVar6 = 0;
      FUN_10288c9e0();
      lVar7 = lVar6;
      func_0x000107c610f8();
      *(undefined8 *)(lVar7 + _DAT_112ec6088) = 0;
      func_0x000107c61614(lVar7 + _DAT_112ec6080,0);
      puVar1 = (undefined8 *)(lVar7 + _DAT_112ec6090);
      *puVar1 = uVar4;
      puVar1[1] = uVar9;
      *(undefined8 *)(lVar7 + _DAT_112ec6098) = uVar10;
      *(undefined8 *)(lVar7 + _DAT_112ec60a0) = uVar5;
      *(undefined8 *)(lVar7 + _DAT_112ec60a8) = uStack_70;
      lStack_80 = lVar7;
      lStack_78 = lVar6;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      goto LAB_10288cf48;
    }
  }
  plVar8 = (long *)0x0;
LAB_10288cf48:
  *param_1 = plVar8;
  return;
}



/* Entry: 10288cf88; end: 10288d053;  */

undefined1  [16] FUN_10288cf88(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0c4a00);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0c4a20);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10288d054);
  (*pcVar1)();
}



/* Entry: 10288d054; end: 10288d05f; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin presentationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d054(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec60e0;
  func_0x000107c61428(param_1 + _DAT_112ec60e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10288d060; end: 10288d06b; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin setPresentationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d060(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec60e0;
  func_0x000107c61428(param_1 + _DAT_112ec60e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288d06c; end: 10288d077; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d06c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec60e8;
  func_0x000107c61428(param_1 + _DAT_112ec60e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10288d078; end: 10288d083; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec60e8;
  func_0x000107c61428(param_1 + _DAT_112ec60e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288d084; end: 10288d08f; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d084(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec60f0;
  func_0x000107c61428(param_1 + _DAT_112ec60f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10288d090; end: 10288d0d3;  */

void FUN_10288d090(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10288d0d4; end: 10288d0df; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec60f0;
  func_0x000107c61428(param_1 + _DAT_112ec60f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288d0e0; end: 10288d133;  */

void FUN_10288d0e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288d134; end: 10288d25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ec60e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec60e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec60f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec60f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6100) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6108) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6110) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6118) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6120) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ec6128);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6130) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10288d25c; end: 10288d263; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin itemType] */

undefined8 FUN_10288d25c(void)

{
  return 0x1c;
}



/* Entry: 10288d264; end: 10288d26b; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_10288d264(void)

{
  return 0;
}



/* Entry: 10288d26c; end: 10288d417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10288d26c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec6110);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4fe00();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar3;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar3);
    if (lVar1 == 3) {
      lVar1 = 1;
    }
    else if (lVar1 == 1) {
      lVar1 = lVar2;
      func_0x000107c4fe08(lVar2);
    }
    else {
      lVar1 = 0;
    }
    func_0x000107c615e8(lVar2);
  }
  return lVar1;
}



/* Entry: 10288d418; end: 10288d48b; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_10288d418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10288e0bc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10288d48c; end: 10288d657;  */

void FUN_10288d48c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar7 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  lVar5 = param_3;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_10288e87c();
  lVar6 = lVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11055d780;
  func_0x000107c613fc(&UNK_11055d780,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar3 = &UNK_11055d7a8;
  func_0x000107c613fc(&UNK_11055d7a8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  pcStack_68 = FUN_10288e368;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_11055d7c0;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 10288d658; end: 10288d6b3;  */

void FUN_10288d658(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10288d6b4(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10288d6b4; end: 10288d873;  */

/* WARNING: Possible PIC construction at 0x00010288d704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288d740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288d754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288d790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288dad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288db94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288dba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288da78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288dda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288d824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288dc08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288dcf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288dd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010288dcf4) */
/* WARNING: Removing unreachable block (ram,0x00010288d828) */
/* WARNING: Removing unreachable block (ram,0x00010288d82c) */
/* WARNING: Removing unreachable block (ram,0x00010288d85c) */
/* WARNING: Removing unreachable block (ram,0x00010288dbd0) */
/* WARNING: Removing unreachable block (ram,0x00010288dc14) */
/* WARNING: Removing unreachable block (ram,0x00010288dc0c) */
/* WARNING: Removing unreachable block (ram,0x00010288dc3c) */
/* WARNING: Removing unreachable block (ram,0x00010288dc08) */
/* WARNING: Removing unreachable block (ram,0x00010288ddac) */
/* WARNING: Removing unreachable block (ram,0x00010288da7c) */
/* WARNING: Removing unreachable block (ram,0x00010288dba8) */
/* WARNING: Removing unreachable block (ram,0x00010288db98) */
/* WARNING: Removing unreachable block (ram,0x00010288dad8) */
/* WARNING: Removing unreachable block (ram,0x00010288db70) */
/* WARNING: Removing unreachable block (ram,0x00010288db84) */
/* WARNING: Removing unreachable block (ram,0x00010288d794) */
/* WARNING: Removing unreachable block (ram,0x00010288d798) */
/* WARNING: Removing unreachable block (ram,0x00010288d7c8) */
/* WARNING: Removing unreachable block (ram,0x00010288d974) */
/* WARNING: Removing unreachable block (ram,0x00010288d9d8) */
/* WARNING: Removing unreachable block (ram,0x00010288da68) */
/* WARNING: Removing unreachable block (ram,0x00010288dbb0) */
/* WARNING: Removing unreachable block (ram,0x00010288da00) */
/* WARNING: Removing unreachable block (ram,0x00010288da70) */
/* WARNING: Removing unreachable block (ram,0x00010288da34) */
/* WARNING: Removing unreachable block (ram,0x00010288da88) */
/* WARNING: Removing unreachable block (ram,0x00010288da5c) */
/* WARNING: Removing unreachable block (ram,0x00010288da8c) */
/* WARNING: Removing unreachable block (ram,0x00010288d9b8) */
/* WARNING: Removing unreachable block (ram,0x00010288d758) */
/* WARNING: Removing unreachable block (ram,0x00010288d7fc) */
/* WARNING: Removing unreachable block (ram,0x00010288d760) */
/* WARNING: Removing unreachable block (ram,0x00010288d768) */
/* WARNING: Removing unreachable block (ram,0x00010288d744) */
/* WARNING: Removing unreachable block (ram,0x00010288d708) */
/* WARNING: Removing unreachable block (ram,0x00010288d7e4) */
/* WARNING: Removing unreachable block (ram,0x00010288dd30) */
/* WARNING: Removing unreachable block (ram,0x00010288ddd4) */
/* WARNING: Removing unreachable block (ram,0x00010288dd5c) */
/* WARNING: Removing unreachable block (ram,0x00010288d70c) */
/* WARNING: Removing unreachable block (ram,0x00010288dd10) */
/* WARNING: Removing unreachable block (ram,0x00010288dd18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d6b4(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec6110);
  func_0x000107c42e5c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10288d874; end: 10288d973; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_10288d874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001000b637c(param_3);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_11055d780;
  func_0x000107c613fc(&UNK_11055d780,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  uVar4 = 0;
  func_0x0001011a4d50(0);
  uVar1 = 0x10288e38c;
  func_0x0001000bfde0(0x10288e38c,puVar3,uVar4);
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



/* Entry: 10288d974; end: 10288dbcf;  */

/* WARNING: Possible PIC construction at 0x00010288dad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288db94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288dba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288da78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010288dba8) */
/* WARNING: Removing unreachable block (ram,0x00010288db98) */
/* WARNING: Removing unreachable block (ram,0x00010288dad8) */
/* WARNING: Removing unreachable block (ram,0x00010288db70) */
/* WARNING: Removing unreachable block (ram,0x00010288db84) */
/* WARNING: Removing unreachable block (ram,0x00010288da7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288d974(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112ec60f8);
  func_0x000107c5194c();
  func_0x000107c61180();
  lVar1 = _DAT_112ec60e8;
  if (lVar4 == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112ec60e8,auStack_78,0,0);
    lVar1 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar1 == 0) {
      FUN_10288dd30();
      return;
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec6118);
    func_0x000107c4ce08();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c40e28();
    func_0x000107c61180();
    if (lVar4 == 0) {
      FUN_10288dd30();
    }
    else {
      puStack_80 = PTR_DAT_11269cb90;
      lVar3 = lVar1;
      func_0x000107c61494(lVar1,1,&puStack_80);
      if (lVar3 != 0) {
        func_0x000107c4e2ec();
      }
      func_0x000103b96ecc(0);
      func_0x000107c61174(lVar1);
      func_0x000103b96c00(lVar4);
      func_0x000107c4cde0(lVar2);
      func_0x000107c61180();
      func_0x000107c5faec();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10288dbd0; end: 10288dd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288dbd0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112ec6100);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  lVar2 = _DAT_112ec60f0;
  if (lVar1 == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112ec60f0,auStack_58,0,0);
    lVar2 = unaff_x20 + lVar2;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5d184();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      uVar3 = 0;
      func_0x00010439c014(0);
      func_0x000107c610f8();
      uVar4 = 0x17;
      func_0x00010439b9d8(uVar3,0x17,0,0,0,0x54414843,0xe400000000000000,0x41,0);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ec6108);
      func_0x00010439a550(0);
      uVar3 = 0;
      func_0x0001043998c4(0);
      func_0x000107c3eda8(uVar6);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c42c1c(lVar5);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar6);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
  FUN_10288dd30();
  return;
}



/* Entry: 10288dd30; end: 10288dde3;  */

/* WARNING: Possible PIC construction at 0x00010288dda8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010288ddac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288dd30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec6120);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar3 = puVar2;
    func_0x00010288e948();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c409d8(puVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10288dde4; end: 10288de43; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin init] */

void FUN_10288dde4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixStickerChatActionMenuPlugin.RemixStickerChatActionMenuPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10288de10);
  (*pcVar1)();
}



/* Entry: 10288de44; end: 10288df9f; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288de44(long param_1)

{
  func_0x000100d0c868(param_1 + _DAT_112ec60e0);
  func_0x000107c61610(param_1 + _DAT_112ec60e8);
  func_0x000100d0c868(param_1 + _DAT_112ec60f0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec60f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec6100));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec6108));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec6110));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec6118));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec6120));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec6128 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec6130));
  return;
}



/* Entry: 10288dfa0; end: 10288dfc7; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin dismissPresentedView] */

void FUN_10288dfa0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010288df10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10288dfc8; end: 10288e037; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin modularStickerCutoutScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288dfc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61174();
  func_0x00010288df10();
  lVar1 = _DAT_112ec60e0;
  func_0x000107c61428(param_1 + _DAT_112ec60e0,auStack_38,0,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42860();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10288e038; end: 10288e0bb; -[_TtC32RemixStickerChatActionMenuPlugin32RemixStickerChatActionMenuPlugin plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x00010288e074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288e090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010288e078) */
/* WARNING: Removing unreachable block (ram,0x00010288e094) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288e038(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10288e0bc; end: 10288e33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10288e0bc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_48;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec6118);
  func_0x000107c4ce08(uVar2,param_2,param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c40e28();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c4a764();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10288e330);
      (*pcVar1)();
    }
    uVar5 = uVar4;
    func_0x000107c42924();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10288e334);
      (*pcVar1)();
    }
    uVar4 = uVar5;
    func_0x000107c42930();
    func_0x000107c61170();
    if (((int)uVar4 == 3) && (FUN_10288d26c(), (uVar5 & 1) != 0)) {
      uVar4 = uVar3;
      func_0x000107c4a764();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10288e338);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      func_0x000107c42924();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10288e33c);
        (*pcVar1)();
      }
      uVar4 = uVar5;
      func_0x000107c410dc();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10288e340);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      func_0x00010288d344();
      func_0x000107c61170(uVar4);
      if ((uVar5 & 1) == 0) {
        func_0x0001000d224c(&puStack_48);
        if (puStack_48 != (undefined *)0x0) {
          puVar6 = puStack_48;
          func_0x000107c4a290(puStack_48,param_2,uVar3,0,3);
          func_0x000107c61180();
          func_0x000107c615e8(puStack_48);
          func_0x000107c615e8(uVar2);
          func_0x000107c61170(uVar3);
          return puVar6;
        }
        puVar6 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c451b0(puVar6,param_2,puVar7);
      }
      else {
        puVar6 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c451b0(puVar6,param_2,puVar7);
      }
      func_0x000107c61180();
      func_0x000107c615e8(uVar2);
      func_0x000107c61170(uVar3);
      goto LAB_10288e258;
    }
    func_0x000107c61170(uVar3);
  }
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar6,param_2,puVar7);
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
LAB_10288e258:
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 10288e340; end: 10288e347;  */

void FUN_10288e340(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar7 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  lVar3 = unaff_x20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_10288e87c();
  lVar6 = lVar3;
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar3);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11055d780;
  func_0x000107c613fc(&UNK_11055d780,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  puVar4 = &UNK_11055d7a8;
  func_0x000107c613fc(&UNK_11055d7a8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  pcStack_68 = FUN_10288e368;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_11055d7c0;
  ppuVar5 = &puStack_88;
  puStack_60 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar2 = puStack_60;
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar5);
  *param_1 = puVar1;
  return;
}



/* Entry: 10288e348; end: 10288e367;  */

void FUN_10288e348(void)

{
  func_0x000107c61168(&PTR_PTR_1128685b8);
  return;
}



/* Entry: 10288e368; end: 10288e38f;  */

void FUN_10288e368(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10288d6b4(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10288e390; end: 10288e857;  */

void FUN_10288e390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec60d8,&UNK_10dae7550);
  puVar1 = &UNK_11055d7f8;
  func_0x000107c613fc(&UNK_11055d7f8,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_8;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_10288e858,puVar1);
  return;
}



/* Entry: 10288e858; end: 10288e87b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288e858(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  uVar3 = uStack_68;
  uVar2 = uStack_68;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c4fe00();
    func_0x000107c61180();
    func_0x000107c615e8(uVar3);
    uVar3 = uVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = uVar3;
    func_0x000107c5bcc0();
    func_0x000107c61170(uVar3);
    if ((uVar2 | 2) == 3) {
      func_0x000100083b20(&uStack_68);
      uVar3 = uStack_68;
      uVar4 = 0x112ec6160;
      func_0x0001000285a8(0x112ec6160,&UNK_10dae75f0);
      func_0x000107c610f8();
      func_0x00010017da58(uVar3,uVar4);
      puVar5 = PTR_PTR_1126a73e0;
      func_0x000107c610f8();
      func_0x000107c4907c();
      func_0x000107c61170(uVar3);
      func_0x000100083b20(&uStack_68);
      uVar3 = uStack_68;
      uVar4 = 0x112e5e838;
      func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
      func_0x000107c610f8();
      func_0x00010017da58(uVar3);
      puVar6 = PTR_PTR_1126a73e0;
      func_0x000107c610f8();
      func_0x000107c4907c();
      func_0x000107c61170(uVar3);
      func_0x000100083b20(&uStack_68);
      func_0x000100083b20(&uStack_70);
      func_0x000100083b20(&lStack_78);
      uVar14 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
      func_0x000107c615f0(uVar14);
      func_0x000107c61170(lStack_78);
      func_0x000100083b20(&uStack_80);
      uVar7 = uStack_80;
      func_0x000107c4d80c();
      func_0x000107c61180();
      func_0x000107c61170(uStack_80);
      func_0x000100083b20(&lStack_88);
      uVar8 = *(undefined8 *)(lStack_88 + _DAT_113083f78);
      func_0x000107c61174();
      func_0x000107c61170(lStack_88);
      uVar9 = uVar8;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      uVar8 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      func_0x0001000285a8(0x112d64520,&UNK_10d929a60);
      func_0x000100083b20(&uStack_90);
      uVar9 = uStack_90;
      func_0x000107c5d91c();
      func_0x000107c61180();
      func_0x000107c61170(uStack_90);
      uVar10 = uVar9;
      func_0x0001000bda74();
      func_0x000107c61170(uVar9);
      lVar11 = 0;
      FUN_10288e348();
      lVar12 = lVar11;
      func_0x000107c610f8();
      func_0x000107c61614(lVar12 + _DAT_112ec60e0,0);
      func_0x000107c61614(lVar12 + _DAT_112ec60e8,0);
      func_0x000107c61614(lVar12 + _DAT_112ec60f0,0);
      *(undefined **)(lVar12 + _DAT_112ec60f8) = puVar5;
      *(undefined **)(lVar12 + _DAT_112ec6100) = puVar6;
      *(ulong *)(lVar12 + _DAT_112ec6108) = uStack_68;
      *(undefined8 *)(lVar12 + _DAT_112ec6110) = uStack_70;
      *(undefined8 *)(lVar12 + _DAT_112ec6118) = uVar14;
      *(undefined8 *)(lVar12 + _DAT_112ec6120) = uVar7;
      puVar1 = (undefined8 *)(lVar12 + _DAT_112ec6128);
      *puVar1 = uVar8;
      puVar1[1] = uVar4;
      *(undefined8 *)(lVar12 + _DAT_112ec6130) = uVar10;
      plVar13 = &lStack_a0;
      lStack_a0 = lVar12;
      lStack_98 = lVar11;
      func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
      goto LAB_10288e834;
    }
  }
  plVar13 = (long *)0x0;
LAB_10288e834:
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 10288e87c; end: 10288eb17;  */

undefined1  [16] FUN_10288e87c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0c4af0);
  uVar3 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f0c4ac0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10288e948);
  (*pcVar1)();
}



/* Entry: 10288eb18; end: 10288eb5f; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288eb18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6168;
  func_0x000107c61428(param_1 + _DAT_112ec6168,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10288eb60; end: 10288ebb7; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288eb60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6168;
  func_0x000107c61428(param_1 + _DAT_112ec6168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288ebb8; end: 10288ec4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288ebb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ec6168,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec6170) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6178) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6180) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10288ec4c; end: 10288ec53; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin itemType] */

undefined8 FUN_10288ec4c(void)

{
  return 0x19;
}



/* Entry: 10288ec54; end: 10288ec5b; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_10288ec54(void)

{
  return 0;
}



/* Entry: 10288ec5c; end: 10288eccf; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_10288ec5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10288f3f8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10288ecd0; end: 10288eed3;  */

void FUN_10288ecd0(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  uVar8 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar4 = param_3;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_10288f70c();
  uVar7 = uVar4;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = uVar8;
  func_0x000107c4a120();
  if ((uVar3 & 1) == 0) {
    func_0x000107c4a3b8();
  }
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  uVar4 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0c4b60);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar4);
  puVar2 = &UNK_11055d8f0;
  func_0x000107c613fc(&UNK_11055d8f0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar5 = &UNK_11055d918;
  func_0x000107c613fc(&UNK_11055d918,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(ulong *)(puVar5 + 0x18) = uVar8;
  pcStack_50 = FUN_10288f4d0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11055d930;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar6);
  *param_1 = puVar1;
  return;
}



/* Entry: 10288eed4; end: 10288ef2f;  */

void FUN_10288eed4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10288ef30(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10288ef30; end: 10288f0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288ef30(ulong param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_112ec6168;
  iVar2 = (int)param_1;
  puVar7 = auStack_58;
  func_0x000107c61428(unaff_x20 + _DAT_112ec6168,puVar7,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar3;
    func_0x000107c5d184();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_112ec6178);
  lVar3 = lVar9;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    if (lVar8 != 0) {
      func_0x000107c615f0(lVar8);
      func_0x000107c4a120();
      if ((param_1 & 1) == 0) {
        func_0x000107c4a3b8();
        lVar3 = 2;
        if (iVar2 == 0) {
          lVar3 = 0;
        }
      }
      else {
        lVar3 = 1;
      }
      func_0x000107c311e8();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10288f0d8);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x00010439c014(0);
      func_0x000107c610f8();
      uVar5 = 0x17;
      func_0x00010439b9d8(0x17,0,0,0,lVar4,puVar7,0x3a,0);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ec6180);
      func_0x000107c3eda8(uVar6);
      func_0x000107c61180();
      func_0x000107c42c1c(lVar9);
      func_0x000107c615ec(lVar8,2);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
    }
  }
  else {
    func_0x000107c61170();
    func_0x000107c615e8(lVar8);
  }
  return;
}



/* Entry: 10288f0d8; end: 10288f1ef; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_10288f0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x0001000b637c(param_3);
  uVar1 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar3);
  puVar2 = &UNK_11055d8c8;
  func_0x000107c613fc(&UNK_11055d8c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uVar3 = 0;
  FUN_10288f4f4(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  func_0x000107c61174(param_1);
  pcVar4 = FUN_10288f534;
  func_0x0001000d5158(FUN_10288f534,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10288f1f0; end: 10288f24f; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin init] */

void FUN_10288f1f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusSnapModesUpsellActionMenuPlugin.PlusSnapModesUpsellActionMenuPlugin",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10288f21c);
  (*pcVar1)();
}



/* Entry: 10288f250; end: 10288f2a7; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10288f250(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec6170));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec6178));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec6180));
  param_1 = param_1 + _DAT_112ec6168;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10288f2a8; end: 10288f32b; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x00010288f2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288f300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010288f2e8) */
/* WARNING: Removing unreachable block (ram,0x00010288f304) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f2a8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10288f32c; end: 10288f3cf;  */

/* WARNING: Possible PIC construction at 0x00010288f36c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010288f370) */
/* WARNING: Removing unreachable block (ram,0x00010288f384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f32c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec6178);
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



/* Entry: 10288f3d0; end: 10288f3f7; -[_TtC35PlusSnapModesUpsellActionMenuPlugin35PlusSnapModesUpsellActionMenuPlugin dismissPresentedView] */

void FUN_10288f3d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10288f32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10288f3f8; end: 10288f4a7;  */

undefined * FUN_10288f3f8(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  func_0x000107c4a120();
  if (((param_1 & 1) != 0) || (uVar1 = uVar4, func_0x000107c4a3b8(), uVar1 != 0)) {
    func_0x000107c4a4a4();
    if (uVar4 != 0) {
      func_0x00010288ea14();
      goto LAB_10288f43c;
    }
  }
  uVar4 = 0;
LAB_10288f43c:
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  FUN_10288f4f4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = (ulong)(uVar4 & 1);
  func_0x000107c6010c(uVar3);
  func_0x000107c451b0(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  return puVar2;
}



/* Entry: 10288f4a8; end: 10288f4af;  */

void FUN_10288f4a8(undefined8 *param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar6 = &puStack_70;
  uVar9 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar4 = uVar8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_10288f70c();
  uVar7 = uVar4;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = uVar9;
  func_0x000107c4a120();
  if ((uVar3 & 1) == 0) {
    func_0x000107c4a3b8();
  }
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  uVar4 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0c4b60);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar4);
  puVar2 = &UNK_11055d8f0;
  func_0x000107c613fc(&UNK_11055d8f0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar8);
  puVar5 = &UNK_11055d918;
  func_0x000107c613fc(&UNK_11055d918,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(ulong *)(puVar5 + 0x18) = uVar9;
  pcStack_50 = FUN_10288f4d0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11055d930;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar6);
  *param_1 = puVar1;
  return;
}



/* Entry: 10288f4b0; end: 10288f4cf;  */

void FUN_10288f4b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128686c8);
  return;
}



/* Entry: 10288f4d0; end: 10288f4f3;  */

void FUN_10288f4d0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10288ef30(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10288f4f4; end: 10288f533;  */

void FUN_10288f4f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10288f534; end: 10288f537;  */

void FUN_10288f534(undefined8 *param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar6 = &puStack_70;
  uVar9 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar4 = uVar8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_10288f70c();
  uVar7 = uVar4;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = uVar9;
  func_0x000107c4a120();
  if ((uVar3 & 1) == 0) {
    func_0x000107c4a3b8();
  }
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  uVar4 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0c4b60);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar4);
  puVar2 = &UNK_11055d8f0;
  func_0x000107c613fc(&UNK_11055d8f0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar8);
  puVar5 = &UNK_11055d918;
  func_0x000107c613fc(&UNK_11055d918,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(ulong *)(puVar5 + 0x18) = uVar9;
  pcStack_50 = FUN_10288f4d0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11055d930;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar6);
  *param_1 = puVar1;
  return;
}



/* Entry: 10288f538; end: 10288f6ef;  */

void FUN_10288f538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec60d8,&UNK_10dae7550);
  puVar1 = &UNK_11055d968;
  func_0x000107c613fc(&UNK_11055d968,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10288f6f0,puVar1);
  return;
}



/* Entry: 10288f6f0; end: 10288f70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f6f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar6 = &lStack_60;
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uStack_48;
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar4 = 0;
  FUN_10288f4b0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112ec6168,0);
  *(undefined8 *)(lVar5 + _DAT_112ec6170) = uStack_48;
  *(undefined **)(lVar5 + _DAT_112ec6178) = puVar3;
  *(undefined8 *)(lVar5 + _DAT_112ec6180) = uStack_50;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 10288f70c; end: 10288f7d7;  */

undefined1  [16] FUN_10288f70c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffde;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0c4b90);
  uVar3 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0c4bc0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10288f7d8);
  (*pcVar1)();
}



/* Entry: 10288f7d8; end: 10288f7e3; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f7d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec61b0;
  func_0x000107c61428(param_1 + _DAT_112ec61b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10288f7e4; end: 10288f7ef; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f7e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec61b0;
  func_0x000107c61428(param_1 + _DAT_112ec61b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288f7f0; end: 10288f7fb; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin presentationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f7f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec61b8;
  func_0x000107c61428(param_1 + _DAT_112ec61b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10288f7fc; end: 10288f807; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin setPresentationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec61b8;
  func_0x000107c61428(param_1 + _DAT_112ec61b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288f808; end: 10288f813; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f808(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec61c0;
  func_0x000107c61428(param_1 + _DAT_112ec61c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10288f814; end: 10288f857;  */

void FUN_10288f814(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10288f858; end: 10288f863; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec61c0;
  func_0x000107c61428(param_1 + _DAT_112ec61c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288f864; end: 10288f8b7;  */

void FUN_10288f864(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10288f8b8; end: 10288f9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288f8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ec61b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec61b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec61c0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec61c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec61d0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ec61d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec61e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec61e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec61f0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ec61f8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10288f9bc; end: 10288f9c3; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin itemType] */

undefined8 FUN_10288f9bc(void)

{
  return 0x1b;
}



/* Entry: 10288f9c4; end: 10288f9cb; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_10288f9c4(void)

{
  return 0;
}



/* Entry: 10288f9cc; end: 10288fbbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10288f9cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  int iVar7;
  
  iVar7 = (int)*(undefined8 *)(unaff_x20 + _DAT_112ec61f0);
  uVar2 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f0c4c90);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((iVar7 == 0) || (*(long *)(param_2 + _DAT_112f14ba0) == 6)) {
    return 0;
  }
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112ec61f8);
  func_0x000107c4ce08();
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c4ca8c();
  func_0x000107c61180();
  if (uVar6 != 0) {
    uVar2 = 0;
    FUN_102891254(0,0x112d64e68,&PTR_PTR_1126b4628);
    uVar4 = uVar6;
    func_0x000107c5fc54(uVar6,uVar2);
    func_0x000107c61170(uVar6);
    if (uVar4 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar6 = uVar4;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar4);
    if (uVar6 == 1) {
      uVar6 = uVar3;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar6 != 0) {
        uVar4 = uVar6;
        func_0x000107c4ca5c();
        func_0x000107c61170(uVar6);
        if ((uVar4 == 0) && (uVar6 = uVar3, func_0x000107c4a4a4(), (int)uVar6 != 0)) {
          uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec61d8);
          uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec61d8))[1];
          uVar5 = uVar2;
          func_0x000107c5fadc(uVar2,uVar1);
          uVar6 = uVar3;
          func_0x000107c4a128();
          func_0x000107c61170(uVar5);
          if ((uVar6 & 1) == 0) {
            func_0x000107c5fadc(uVar2,uVar1);
            uVar6 = uVar3;
            func_0x000107c4a390(uVar3);
            func_0x000107c61170(uVar2);
          }
          else {
            uVar6 = 1;
          }
          goto LAB_10288fb5c;
        }
      }
    }
  }
  uVar6 = 0;
LAB_10288fb5c:
  func_0x000107c615e8(uVar3);
  return uVar6;
}



/* Entry: 10288fbc0; end: 10288fc8b; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_10288fbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10288f9cc(param_3,param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1);
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



/* Entry: 10288fc8c; end: 10288fe1f;  */

code * FUN_10288fc8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  
  uVar1 = 0x112d3bec8;
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x0001000b637c(param_1,uVar1);
  uVar1 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(param_1);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  func_0x0001000b637c(param_2);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(param_2);
  uVar3 = uVar2;
  func_0x0001006c733c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  puVar4 = &UNK_11055da58;
  func_0x000107c613fc(&UNK_11055da58,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11055da80;
  func_0x000107c613fc(&UNK_11055da80,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10288ff3c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uVar1 = 0x112ec6200;
  func_0x0001000285a8(0x112ec6200,&UNK_10dae7660);
  pcVar6 = FUN_102890294;
  func_0x00010068b194(FUN_102890294,puVar5,uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar5);
  uVar1 = 0;
  FUN_102891254(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  pcVar7 = FUN_1028902bc;
  func_0x0001000d5158(FUN_1028902bc,0,uVar1);
  func_0x000107c61574(pcVar6);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar7);
  return pcVar6;
}



/* Entry: 10288fe20; end: 10288ff3b;  */

void FUN_10288fe20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    func_0x0001000285a8(0x112ec6230,&UNK_10dae7690);
    uStack_60 = 0;
    func_0x000100854cb0(&uStack_60);
  }
  else {
    uVar1 = param_1;
    FUN_10288ff44(param_1);
    puVar2 = &UNK_11055daa8;
    func_0x000107c613fc(&UNK_11055daa8,0x28,7);
    *(long *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    uVar3 = 0x112ec6200;
    func_0x0001000285a8(0x112ec6200,&UNK_10dae7660);
    func_0x0001000bfde0(FUN_102890f24,puVar2,uVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(puVar2);
  }
  return;
}


