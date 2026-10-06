/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10103d028; end: 10103d047; -[SCSnapEditorStickerPluginEntryPoint init] */

void FUN_10103d028(void)

{
  FUN_10103ce90();
  return;
}



/* Entry: 10103d048; end: 10103d07b;  */

void FUN_10103d048(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10103d07c; end: 10103d1b3; -[SCSnapEditorStickerPluginEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010103d198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010103d19c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103d07c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d55eb0);
  func_0x000107c61610(param_1 + _DAT_112d55eb8);
  func_0x000107c61610(param_1 + _DAT_112d55ec0);
  func_0x000107c61610(param_1 + _DAT_112d55ec8);
  func_0x000107c61610(param_1 + _DAT_112d55ed0);
  func_0x000107c61610(param_1 + _DAT_112d55ed8);
  func_0x000107c61610(param_1 + _DAT_112d55ee0);
  func_0x000107c61610(param_1 + _DAT_112d55ee8);
  func_0x000107c61610(param_1 + _DAT_112d55ef0);
  func_0x000107c61610(param_1 + _DAT_112d55ef8);
  func_0x000107c61610(param_1 + _DAT_112d55f00);
  func_0x000107c61610(param_1 + _DAT_112d55f08);
  func_0x000107c61610(param_1 + _DAT_112d55f10);
  func_0x000107c61610(param_1 + _DAT_112d55f18);
  func_0x000107c61610(param_1 + _DAT_112d55f20);
  func_0x000107c61610(param_1 + _DAT_112d55f28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55f30));
  return;
}



/* Entry: 10103d1b4; end: 10103d1d3;  */

void FUN_10103d1b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a9ac0);
  return;
}



/* Entry: 10103d1d4; end: 10103d48b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10103d1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined8 param_12,
             undefined8 param_13)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_90 [8];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_1137ff168;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d55f68) = param_5;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d55f70);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d55f78) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d55f80) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112d55f88) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d55f98) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d55fa0) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_112d55f90) = param_11;
  func_0x0001009f0578(param_12,unaff_x20 + _DAT_1137ff158);
  *(undefined8 *)(unaff_x20 + _DAT_1137ff160) = param_13;
  puVar3 = auStack_90;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_12);
  return puVar3;
}



/* Entry: 10103d48c; end: 10103d65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103d48c(ulong param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  ppuVar5 = &puStack_80;
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_1103794a0;
    func_0x000107c613fc(&UNK_1103794a0,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(long *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    puVar4 = &UNK_1103794c8;
    func_0x000107c613fc(&UNK_1103794c8,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_10103d65c;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_60 = FUN_10103d708;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_10006eb60;
    puStack_68 = &UNK_1103794e0;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000100b64c10(param_2,param_3);
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c4e5fc(puVar2);
    func_0x000107c60bd0(ppuVar5);
    puVar6 = puVar4;
    func_0x000107c61544(puVar4,"",0x7d,0x71,0x2c,1);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10103d628);
      (*pcVar1)();
    }
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d55f68);
    if (param_2 == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000b0c7c;
      puStack_68 = &UNK_110379508;
      pcStack_60 = (code *)param_2;
      puStack_58 = (undefined *)param_3;
      func_0x000107c60bc4(&puStack_80);
      puVar3 = puStack_58;
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar3);
    }
    func_0x000107c41864(uVar7);
    func_0x000107c60bd0(ppuVar8);
  }
  return;
}



/* Entry: 10103d65c; end: 10103d707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103d65c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d55f68);
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110379530;
    lStack_40 = *(long *)(unaff_x20 + 0x18);
    uStack_38 = uVar4;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c41864(uVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10103d708; end: 10103d727;  */

void FUN_10103d708(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10103d728; end: 10103d743;  */

void FUN_10103d728(long param_1,long param_2)

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



/* Entry: 10103d744; end: 10103d777;  */

void FUN_10103d744(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10103d778; end: 10103d80f; -[_TtC23PreviewStickerPickerAPI27SCPreviewStickerPickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10103d778(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d55f68));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d55f78));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d55f80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d55f98));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d55fa0));
  func_0x0001000d1dcc(param_1 + _DAT_1137ff158);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_1137ff160));
  param_1 = param_1 + _DAT_1137ff168;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10103d810; end: 10103d817;  */

void FUN_10103d810(void)

{
  if (lRam000000011342fcd0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61f05c);
  return;
}



/* Entry: 10103d818; end: 10103d84f;  */

void FUN_10103d818(undefined8 param_1)

{
  if (lRam000000011342fcd0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61f05c);
  return;
}



/* Entry: 10103d850; end: 10103d933;  */

void FUN_10103d850(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = &UNK_10d91ce60;
  puStack_70 = &UNK_10d91ce78;
  puStack_68 = PTR___sBbWV_11034d660 + 0x40;
  puStack_58 = &UNK_10d91ce90;
  puStack_50 = &UNK_10d91ce90;
  puStack_48 = PTR___sBOWV_11034d658 + 0x40;
  puStack_40 = &UNK_10d91ce60;
  lVar1 = 0x13f;
  puStack_60 = puStack_68;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10d91cea8;
    puStack_28 = &UNK_10d91cec0;
    func_0x000107c61630(param_1,0x100,0xb,&puStack_78,param_1 + 0x50);
  }
  return;
}



/* Entry: 10103d934; end: 10103d943;  */

void FUN_10103d934(long param_1,long param_2)

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



/* Entry: 10103d944; end: 10103d9af;  */

void FUN_10103d944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 10103d9b0; end: 10103da5f;  */

/* WARNING: Possible PIC construction at 0x00010103d9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103d9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103d9dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010103d9d0) */
/* WARNING: Removing unreachable block (ram,0x00010103d9c0) */
/* WARNING: Removing unreachable block (ram,0x00010103d9e0) */

void FUN_10103d9b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10103da60; end: 10103db33;  */

void FUN_10103da60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_10103ea30(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x00010103e8b0(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  *param_1 = uVar1;
  return;
}



/* Entry: 10103db34; end: 10103dbbb;  */

void FUN_10103db34(undefined8 param_1)

{
  if (lRam0000000112d55ff8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61f0b0);
  return;
}



/* Entry: 10103dbbc; end: 10103dbc7; -[SCVenuePickerServiceProvider checkInServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dbbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d560d8;
  func_0x000107c61428(param_1 + _DAT_112d560d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103dbc8; end: 10103dbd3; -[SCVenuePickerServiceProvider setCheckInServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dbc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d560d8;
  func_0x000107c61428(param_1 + _DAT_112d560d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103dbd4; end: 10103dbdf; -[SCVenuePickerServiceProvider userLocationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dbd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d560e0;
  func_0x000107c61428(param_1 + _DAT_112d560e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103dbe0; end: 10103dbeb; -[SCVenuePickerServiceProvider setUserLocationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dbe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d560e0;
  func_0x000107c61428(param_1 + _DAT_112d560e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103dbec; end: 10103dbf7; -[SCVenuePickerServiceProvider composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dbec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d560e8;
  func_0x000107c61428(param_1 + _DAT_112d560e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103dbf8; end: 10103dc03; -[SCVenuePickerServiceProvider setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d560e8;
  func_0x000107c61428(param_1 + _DAT_112d560e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103dc04; end: 10103dc0f; -[SCVenuePickerServiceProvider photoPickerScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dc04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d560f0;
  func_0x000107c61428(param_1 + _DAT_112d560f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103dc10; end: 10103dc1b; -[SCVenuePickerServiceProvider setPhotoPickerScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dc10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d560f0;
  func_0x000107c61428(param_1 + _DAT_112d560f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103dc1c; end: 10103dc27; -[SCVenuePickerServiceProvider mapPlacesVenueEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dc1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d560f8;
  func_0x000107c61428(param_1 + _DAT_112d560f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103dc28; end: 10103dc33; -[SCVenuePickerServiceProvider setMapPlacesVenueEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dc28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d560f8;
  func_0x000107c61428(param_1 + _DAT_112d560f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103dc34; end: 10103dc3f; -[SCVenuePickerServiceProvider pageLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dc34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56100;
  func_0x000107c61428(param_1 + _DAT_112d56100,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103dc40; end: 10103dc83;  */

void FUN_10103dc40(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10103dc84; end: 10103dc8f; -[SCVenuePickerServiceProvider setPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56100;
  func_0x000107c61428(param_1 + _DAT_112d56100,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103dc90; end: 10103dce3;  */

void FUN_10103dc90(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103dce4; end: 10103dd2b; -[SCVenuePickerServiceProvider photoPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dce4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56108;
  func_0x000107c61428(param_1 + _DAT_112d56108,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10103dd2c; end: 10103dd8f; -[SCVenuePickerServiceProvider setPhotoPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56108;
  func_0x000107c61428(param_1 + _DAT_112d56108,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10103dd90; end: 10103e0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103dd90(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar1 = unaff_x20;
  func_0x000107c3f980();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5d9e0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3ffd0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4e6fc();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4e6f4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4c3bc();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c4e270();
              func_0x000107c61180();
              if (lVar7 != 0) {
                lVar8 = 0;
                FUN_10103db34();
                func_0x000107c613fc();
                *(long *)(lVar8 + 0x10) = lVar1;
                *(long *)(lVar8 + 0x18) = lVar2;
                *(long *)(lVar8 + 0x20) = lVar3;
                *(long *)(lVar8 + 0x28) = lVar4;
                *(long *)(lVar8 + 0x30) = lVar5;
                *(long *)(lVar8 + 0x38) = lVar6;
                *(long *)(lVar8 + 0x40) = lVar7;
                uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d56110);
                *(long *)(unaff_x20 + _DAT_112d56110) = lVar8;
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174(lVar7);
                func_0x000107c6157c(lVar8);
                func_0x000107c61574(uVar15);
                uVar15 = *(undefined8 *)(lVar8 + 0x10);
                uVar9 = *(undefined8 *)(lVar8 + 0x18);
                uVar10 = *(undefined8 *)(lVar8 + 0x20);
                uVar11 = *(undefined8 *)(lVar8 + 0x28);
                uVar12 = *(undefined8 *)(lVar8 + 0x30);
                uVar13 = *(undefined8 *)(lVar8 + 0x38);
                uVar14 = *(undefined8 *)(lVar8 + 0x40);
                FUN_10103ea30(0);
                func_0x000107c610f8();
                func_0x000107c61174(uVar15);
                func_0x000107c61174(uVar9);
                func_0x000107c61174(uVar10);
                func_0x000107c61174(uVar11);
                func_0x000107c61174(uVar12);
                func_0x000107c61174(uVar13);
                func_0x000107c61174(uVar14);
                func_0x00010103e8b0(uVar15,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar7);
                func_0x000107c61574(lVar8);
                return;
              }
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              lVar1 = lVar6;
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10103e0a4; end: 10103e12f; -[SCVenuePickerServiceProvider provide] */

void FUN_10103e0a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10103dd90();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "VenuePickerServicesImpl/SCVenuePickerServiceProvider.swift",0x3a,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10103e130);
  (*pcVar1)();
}



/* Entry: 10103e130; end: 10103e163; -[SCVenuePickerServiceProvider __safeProvide] */

void FUN_10103e130(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10103dd90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10103e164; end: 10103e1a7; -[SCVenuePickerServiceProvider end] */

void FUN_10103e164(undefined8 param_1)

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



/* Entry: 10103e1a8; end: 10103e563;  */

void FUN_10103e1a8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0x536e496b63656863;
  if ((param_2 == 0x536e496b63656863 && param_3 == -0x108c9a9c96898d9b) ||
     (func_0x000107c605b8(0x536e496b63656863,0xef73656369767265,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c533e8();
    goto LAB_10103e23c;
  }
  if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10dedc0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000014,0x800000010ef21240,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e6390)) ||
         (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c536a8();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10deda0)) ||
           (func_0x000107c605b8(0xd000000000000018,0x800000010ef21260,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57380();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10ded80)) ||
             (func_0x000107c605b8(0xd00000000000001c,0x800000010ef21280,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c56274();
          }
          else {
            if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e5ad0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000014,0x800000010ef1a530,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd000000000000017;
                if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ded60)) &&
                   (func_0x000107c605b8(0xd000000000000017,0x800000010ef212a0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "VenuePickerServicesImpl/SCVenuePickerServiceProvider.swift",
                                      0x3a,2,0x45,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10103e564);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57378();
                goto LAB_10103e23c;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c571c8();
          }
        }
      }
      goto LAB_10103e23c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a38c();
LAB_10103e23c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10103e564; end: 10103e60f; -[SCVenuePickerServiceProvider setValue:forIvarName:] */

void FUN_10103e564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10103e1a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10103e610; end: 10103e6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103e610(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d560d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d560e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d560e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d560f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d560f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56100,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d56108) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d56110) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10103e6e0; end: 10103e6ff; -[SCVenuePickerServiceProvider init] */

void FUN_10103e6e0(void)

{
  FUN_10103e610();
  return;
}



/* Entry: 10103e700; end: 10103e733;  */

void FUN_10103e700(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10103e734; end: 10103e7cb; -[SCVenuePickerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103e734(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d560d8);
  func_0x000107c61610(param_1 + _DAT_112d560e0);
  func_0x000107c61610(param_1 + _DAT_112d560e8);
  func_0x000107c61610(param_1 + _DAT_112d560f0);
  func_0x000107c61610(param_1 + _DAT_112d560f8);
  func_0x000107c61610(param_1 + _DAT_112d56100);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d56108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d56110));
  return;
}



/* Entry: 10103e7cc; end: 10103e7eb;  */

void FUN_10103e7cc(void)

{
  func_0x000107c61168(&PTR_PTR_112d56158);
  return;
}



/* Entry: 10103e7ec; end: 10103e973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103e7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d561e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d561f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d561f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d56200) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d56208) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d56210) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d56218) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10103e974; end: 10103e9a7;  */

void FUN_10103e974(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10103e9a8; end: 10103ea2f; -[_TtC19VenuePickerServices19VenuePickerServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010103e9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103e9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103ea04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010103e9e8) */
/* WARNING: Removing unreachable block (ram,0x00010103e9c8) */
/* WARNING: Removing unreachable block (ram,0x00010103ea08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103e9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d561e8));
  return;
}



/* Entry: 10103ea30; end: 10103ea4f;  */

void FUN_10103ea30(void)

{
  func_0x000107c61168(&PTR_PTR_1127a9d60);
  return;
}



/* Entry: 10103ea50; end: 10103ebf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10103ea50(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  func_0x000107c613fc();
  lVar3 = *(long *)(param_4 + _DAT_11302ecd0);
  func_0x000107c4a480();
  if ((int)lVar3 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11302ba70);
    FUN_10103efac();
    lVar4 = lVar3;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d56248);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar4;
    lStack_68 = lVar3;
    func_0x000107c61174(uVar6);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61154(&lStack_70,puVar2);
    func_0x000107c4fba8(uVar6);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(plVar5);
    func_0x000107c61170(param_4);
    param_6 = param_1;
  }
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 10103ebf8; end: 10103ec13;  */

void FUN_10103ebf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10103ec14; end: 10103edbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10103ec14(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_3 + _DAT_11302bac8);
    puVar3 = PTR_PTR_1126b0320;
    func_0x000107c61168(PTR_PTR_1126b0320);
    func_0x000107c4d044();
    func_0x000107c61180();
    func_0x000107c4d048(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    lVar4 = lVar2;
    func_0x000107c4c1e0(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(uVar5);
    FUN_10104058c(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_4);
    uVar5 = param_1;
    FUN_101042268(param_1,param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    puVar3 = PTR_PTR_1126a62b8;
    func_0x000107c610f8(PTR_PTR_1126a62b8);
    func_0x000107c4565c();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    return puVar3;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000070,0x800000010ef21380,
                      "SnapEditorVoiceoverPluginEntryPoint/SnapEditorVoiceoverPluginEntryPoint.swift"
                      ,0x4d,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10103edbc);
  (*pcVar1)();
}



/* Entry: 10103edbc; end: 10103eeff; -[_TtC35SnapEditorVoiceoverPluginEntryPoint25SnapEditorVoiceoverPlugin populateDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103edbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d56248);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  puVar6 = &UNK_1103797d8;
  func_0x000107c613fc(&UNK_1103797d8,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x28) = uVar5;
  puVar7 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_60 = 0x10103f21c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101016bdc;
  puStack_68 = &UNK_1103797f0;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  func_0x000107c46b38(puVar7);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puStack_58);
  func_0x000107c5a600(param_3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10103ef00; end: 10103ef5f; -[_TtC35SnapEditorVoiceoverPluginEntryPoint25SnapEditorVoiceoverPlugin init] */

void FUN_10103ef00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorVoiceoverPluginEntryPoint.SnapEditorVoiceoverPlugin",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10103ef2c);
  (*pcVar1)();
}



/* Entry: 10103ef60; end: 10103efab; -[_TtC35SnapEditorVoiceoverPluginEntryPoint25SnapEditorVoiceoverPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010103ef84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103ef94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010103ef88) */
/* WARNING: Removing unreachable block (ram,0x00010103ef98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ef60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d56248 + 0x18));
  return;
}



/* Entry: 10103efac; end: 10103efeb;  */

void FUN_10103efac(void)

{
  func_0x000107c61168(&PTR_PTR_1127a9e50);
  return;
}



/* Entry: 10103efec; end: 10103f04f;  */

long FUN_10103efec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10103f050; end: 10103f12f;  */

undefined8 * FUN_10103f050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 10103f130; end: 10103f183;  */

undefined8 * FUN_10103f130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10103f184; end: 10103f257;  */

int FUN_10103f184(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10103f258; end: 10103f303;  */

void FUN_10103f258(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10103f304; end: 10103f33b;  */

void FUN_10103f304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE16errorDescriptionSSSgvg_1103506c0)();
  return;
}



/* Entry: 10103f33c; end: 10103f43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103f33c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10103f43c;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_1103799e8;
    func_0x000107c613fc(&UNK_1103799e8,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1010427c0;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110379a00;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c503ec(lVar3);
    func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010103f438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10103f43c; end: 10103f4af;  */

void FUN_10103f43c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10103f47c,0,0);
  return;
}



/* Entry: 10103f4b0; end: 10103f4c7;  */

void FUN_10103f4b0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10103f4c8,0,0);
  return;
}



/* Entry: 10103f4c8; end: 10103f5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103f4c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = unaff_x22 + 0x50;
  func_0x0001000d224c(lVar1);
  if (*(long *)(unaff_x22 + 0x50) != 0) {
    func_0x000107c615e8();
  }
  func_0x0001000d224c(lVar1);
  if (*(long *)(unaff_x22 + 0x50) != 0) {
    func_0x000107c615e8();
  }
  func_0x0001000d224c(lVar1);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  if (lVar2 != 0) {
    func_0x0001000d224c(lVar1);
    *(long *)(unaff_x22 + 0x68) = *(long *)(unaff_x22 + 0x50);
    if (*(long *)(unaff_x22 + 0x50) != 0) {
      *(long *)(unaff_x22 + 0x38) = lVar1;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10103f5d0;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      FUN_10103f64c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010103f5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10103f5d0; end: 10103f64b;  */

void FUN_10103f5d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10103f610,0,0);
  return;
}



/* Entry: 10103f64c; end: 10103f957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103f64c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c40980(param_2);
  func_0x000107c61180();
  func_0x0001010415e8(0);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1)
  ;
  lVar2 = lVar6;
  func_0x000104188018(lVar6,0,0);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  puVar3 = &UNK_110379998;
  func_0x000107c613fc(&UNK_110379998,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = FUN_1010427a0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x100ff4e14;
  puStack_68 = &UNK_1103799b0;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c40188();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  uVar5 = *(undefined8 *)(param_3 + _DAT_112d56330);
  *(undefined8 *)(param_3 + _DAT_112d56330) = param_4;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10103f958; end: 10103f9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103f958(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d56330);
    *(undefined8 *)(param_2 + _DAT_112d56330) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61450(param_3);
  return;
}



/* Entry: 10103f9c4; end: 10103fed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103f9c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar5;
  code *pcVar6;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    lVar3 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    func_0x0001058000a4();
    func_0x000107c61180();
    uVar4 = param_3;
    if (param_2 == 0) {
      func_0x000107c5faec();
      uVar4 = param_3;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_3);
    }
    lVar3 = lStack_68;
    func_0x000107c43444(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    func_0x000107c61170(param_2);
    lVar2 = lVar3;
    func_0x000107c5faec(lVar3);
    func_0x000107c61170(lVar3);
    iVar1 = 2;
    func_0x000100029b9c(2,0x10,0,0);
    if (iVar1 != 0) {
      lVar3 = 0;
      func_0x000107c5ed68();
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
      puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(extraout_x12 + 0x68))
                (puVar5,*(undefined4 *)
                         PTR___s10Foundation3URLV13DirectoryHintO03notC0yA2EmFWC_110345360);
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar3 = 0;
      func_0x000107c5ede0();
      pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
      (*pcVar6)((long)puVar5 - extraout_x8_00,1,1,lVar3);
      func_0x000107c5edd4(param_1,lVar2,uVar4,puVar5,(long)puVar5 - extraout_x8_00);
      (*pcVar6)(param_1,0,1,lVar3);
      return;
    }
    func_0x000107c5ed7c(param_1,lVar2,uVar4,0);
    func_0x000107c6142c(uVar4);
    lVar3 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    uVar4 = 0;
  }
  (*pcVar6)(param_1,uVar4,1,lVar3);
  return;
}



/* Entry: 10103fed4; end: 10103ff3f;  */

void FUN_10103fed4(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10103ff40;
  plVar2[0x10] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10103f33c,0,0);
  return;
}



/* Entry: 10103ff40; end: 10103ffb3;  */

void FUN_10103ff40(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined1 *)(lVar3 + 0xd8) = param_1;
  func_0x000107c615c0();
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(lVar3 + 0xb0) = uVar2;
  *(undefined8 *)(lVar3 + 0xb8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10103ffb4,uVar2,uVar1);
  return;
}



/* Entry: 10103ffb4; end: 10104004b;  */

void FUN_10103ffb4(void)

{
  undefined1 *puVar1;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xd8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10104004c,0,0);
    return;
  }
  puVar1 = *(undefined1 **)(unaff_x22 + 0xa0);
  func_0x000107c61574();
  FUN_1010415a8();
  func_0x000107c613f8(&UNK_110379aa8,puVar1,0,0);
  *puVar1 = 5;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101040048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10104004c; end: 101040127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104004c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x90) + _DAT_112d56330);
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0x80);
    *(long *)(unaff_x22 + 200) = *(long *)(unaff_x22 + 0x80);
    if (*(long *)(unaff_x22 + 0x80) != 0) {
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101040128;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      func_0x00010103f7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61170(lVar1);
  }
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1010401c0;
  plVar2[0xb] = *(long *)(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10103f4c8,0,0);
  return;
}



/* Entry: 101040128; end: 10104020b;  */

void FUN_101040128(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101040168,0,0);
  return;
}



/* Entry: 10104020c; end: 1010404a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104020c(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  cVar1 = *(char *)(unaff_x22 + 0xd9);
  puVar2 = *(undefined1 **)(unaff_x22 + 0xa0);
  func_0x000107c61574();
  if (cVar1 == '\x01') {
    func_0x00010103fc00();
    if (puVar2 != (undefined1 *)0x0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
      func_0x000107c4ee28();
      func_0x000107c53fcc(puVar2);
      puVar3 = puVar2;
      func_0x000107c4fa98(uVar11);
      if ((int)puVar3 != 0) {
        lVar9 = *(long *)(unaff_x22 + 0x90);
        uVar11 = *(undefined8 *)(lVar9 + _DAT_112d56340);
        *(undefined1 **)(lVar9 + _DAT_112d56340) = puVar2;
        func_0x000107c61174();
        func_0x000107c61170(uVar11);
        func_0x0001000285a8(0x112d563a0,&UNK_10d91d0c0);
        func_0x000107c613fc();
        lVar4 = 0;
        func_0x00010095c380();
        uVar11 = *(undefined8 *)(lVar9 + _DAT_112d56338);
        *(long *)(lVar9 + _DAT_112d56338) = lVar4;
        func_0x000107c6157c();
        func_0x000107c61574(uVar11);
        uVar10 = *(undefined8 *)(lVar4 + 0x10);
        uVar11 = uVar10;
        func_0x000107c6157c(uVar10);
        func_0x000103edf0bc();
        func_0x000107c61574(uVar10);
        puVar5 = &UNK_110379948;
        func_0x000107c613fc(&UNK_110379948,0x18,7);
        *(undefined1 **)(puVar5 + 0x10) = puVar2;
        puVar6 = PTR_PTR_1126a62c8;
        func_0x000107c610f8(PTR_PTR_1126a62c8);
        *(code **)(unaff_x22 + 0x70) = FUN_101042768;
        *(undefined **)(unaff_x22 + 0x78) = puVar5;
        puVar7 = (undefined8 *)(unaff_x22 + 0x50);
        *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_110379960;
        func_0x000107c60bc4();
        func_0x000107c61174(puVar2);
        func_0x000107c45eec(puVar6);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(uVar11);
        func_0x000107c60bd0(puVar7);
        func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001010403e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(puVar6);
        return;
      }
      FUN_1010415a8();
      func_0x000107c613f8(&UNK_110379aa8,puVar3,0,0);
      *puVar3 = 2;
      func_0x000107c61654();
      func_0x000107c61170(puVar2);
      goto LAB_101040444;
    }
    FUN_1010415a8();
    func_0x000107c613f8(&UNK_110379aa8,puVar2,0,0);
    uVar8 = 3;
  }
  else {
    FUN_1010415a8();
    func_0x000107c613f8(&UNK_110379aa8,puVar2,0,0);
    uVar8 = 4;
  }
  *puVar2 = uVar8;
  func_0x000107c61654();
LAB_101040444:
                    /* WARNING: Could not recover jumptable at 0x000101040464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1010404a4; end: 101040503; -[_TtC35SnapEditorVoiceoverPluginEntryPoint22VoiceoverAudioRecorder init] */

void FUN_1010404a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorVoiceoverPluginEntryPoint.VoiceoverAudioRecorder",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010404d0);
  (*pcVar1)();
}



/* Entry: 101040504; end: 10104058b; -[_TtC35SnapEditorVoiceoverPluginEntryPoint22VoiceoverAudioRecorder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101040560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101040564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101040504(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56310));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56318));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56320));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56328));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d56330));
  return;
}



/* Entry: 10104058c; end: 1010405ab;  */

void FUN_10104058c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a9f10);
  return;
}



/* Entry: 1010405ac; end: 101040633; -[_TtC35SnapEditorVoiceoverPluginEntryPoint22VoiceoverAudioRecorder hasMicrophonePermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1010405ac(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000107c61170(param_1);
    bVar1 = false;
  }
  else {
    lVar2 = lStack_38;
    func_0x000107c4faac(lStack_38);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(param_1);
    bVar1 = lVar2 == 0x67726e74;
  }
  return bVar1;
}



/* Entry: 101040634; end: 10104066f; -[_TtC35SnapEditorVoiceoverPluginEntryPoint22VoiceoverAudioRecorder openMicrophoneSettings] */

void FUN_101040634(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c517a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101040670; end: 101040687; -[_TtC35SnapEditorVoiceoverPluginEntryPoint22VoiceoverAudioRecorder isRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101040670(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d56340) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d56340),PTR_s_isRecording_1125fc9c8);
    return;
  }
  return;
}



/* Entry: 101040688; end: 1010407bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101040688(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112d56340);
  if ((uVar1 == 0) || (func_0x000107c4a2f8(), (uVar1 & 1) == 0)) {
    func_0x0001000285a8(0x112d56398,&UNK_10d91d090);
    puVar3 = &UNK_110379920;
    func_0x000107c613fc(&UNK_110379920,0x20,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    func_0x000107c61174();
    puVar4 = (undefined *)0x3;
    func_0x000104887c7c(3,2,0x2c,2,0xd000000000000029,0x800000010ef21470,&UNK_10d91d0a0,puVar3);
    func_0x000107c61574(puVar3);
  }
  else {
    puVar2 = (undefined1 *)0x112d56398;
    func_0x0001000285a8(0x112d56398,&UNK_10d91d090);
    FUN_1010415a8();
    puVar3 = &UNK_110379aa8;
    func_0x000107c613f8(&UNK_110379aa8,puVar2,0,0);
    *puVar2 = 1;
    puVar4 = puVar3;
    func_0x00010488904c();
    func_0x000107c614ac(puVar3);
  }
  func_0x000103edf0bc();
  func_0x000107c61574(puVar4);
  return puVar3;
}



/* Entry: 1010407bc; end: 10104080f;  */

void FUN_1010407bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(long *)(unaff_x22 + 0x60) = param_3;
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101040810;
  plVar3[0x12] = param_3;
  plVar3[0x11] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x13] = lVar1;
  func_0x000107c5fce8();
  plVar3[0x14] = lVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  plVar3[0x15] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_10103ff40;
  plVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10103f33c,0,0);
  return;
}



/* Entry: 101040810; end: 10104087b;  */

void FUN_101040810(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    pcVar1 = FUN_10104087c;
  }
  else {
    pcVar1 = FUN_101040894;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10104087c; end: 101040893;  */

void FUN_10104087c(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000101040890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101040894; end: 10104095b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101040894(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x60) + _DAT_112d56330);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0x50);
    *(long *)(unaff_x22 + 0x88) = *(long *)(unaff_x22 + 0x50);
    if (*(long *)(unaff_x22 + 0x50) != 0) {
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10104095c;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      func_0x00010103f7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101040958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10104095c; end: 10104099b;  */

void FUN_10104095c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10104099c,0,0);
  return;
}



/* Entry: 10104099c; end: 1010409e7;  */

void FUN_10104099c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001010409e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1010409e8; end: 101040a2b; -[_TtC35SnapEditorVoiceoverPluginEntryPoint22VoiceoverAudioRecorder beginRecordingWithMaxRecordingDuration:] */

void FUN_1010409e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_2;
  FUN_101040688(param_1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101040a2c; end: 101040a9b;  */

void FUN_101040a2c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_4;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101040a9c,0,0);
  return;
}



/* Entry: 101040a9c; end: 101040cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101040a9c(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar10 = *(long *)(unaff_x22 + 0xe8);
  cVar2 = *(char *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c5d7e8(uVar3);
  func_0x000107c61180();
  func_0x000107c5edb4(uVar9);
  func_0x000107c61170(uVar3);
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8();
  puVar5 = puVar4;
  func_0x000107c5ed90();
  func_0x000107c48fd4();
  *(undefined **)(unaff_x22 + 0x100) = puVar4;
  func_0x000107c61170(puVar5);
  pcVar8 = *(code **)(lVar10 + 8);
  *(code **)(unaff_x22 + 0x108) = pcVar8;
  (*pcVar8)(uVar9,uVar1);
  puVar6 = *(undefined1 **)(unaff_x22 + 0xd0);
  if (cVar2 == '\x01') {
    plVar7 = (long *)0x50;
    func_0x000107c61174();
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101040cdc;
                    /* WARNING: Could not recover jumptable at 0x000101040ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_101042408(puVar4);
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0xd8);
  lVar11 = *(long *)(lVar10 + _DAT_112d56338);
  func_0x000107c61174();
  if (lVar11 != 0) {
    FUN_1010415a8();
    puVar4 = &UNK_110379aa8;
    func_0x000107c613f8(&UNK_110379aa8,puVar6,0,0);
    *puVar6 = 0;
    func_0x000107c6157c(lVar11);
    func_0x00010488ade0(puVar4);
    func_0x000107c61574(lVar11);
    func_0x000107c614ac(puVar4);
    lVar10 = *(long *)(unaff_x22 + 0xd8);
  }
  lVar10 = *(long *)(lVar10 + _DAT_112d56330);
  *(long *)(unaff_x22 + 0x140) = lVar10;
  if (lVar10 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0xb8);
    *(long *)(unaff_x22 + 0x148) = *(long *)(unaff_x22 + 0xb8);
    if (*(long *)(unaff_x22 + 0xb8) != 0) {
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10104117c;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      func_0x00010103f7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61170(lVar10);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c61170(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101040cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101040cdc; end: 101040d3b;  */

void FUN_101040cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xb0) = param_4;
  *(undefined8 *)(lVar1 + 0xa0) = param_2;
  *(undefined8 *)(lVar1 + 0xa8) = param_3;
  *(long **)(lVar1 + 0x90) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined8 *)(lVar1 + 0x118) = param_1;
  *(undefined8 *)(lVar1 + 0x120) = param_3;
  *(undefined1 *)(lVar1 + 0x151) = param_4;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101040d3c,0,0);
  return;
}



/* Entry: 101040d3c; end: 1010410cb;  */

/* WARNING: Removing unreachable block (ram,0x000101040db0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101040d3c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x22;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (*(char *)(unaff_x22 + 0x151) != '\x01') {
    puVar13 = (undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *puVar13;
    param_2 = *(undefined1 **)(unaff_x22 + 0xf0);
    func_0x000107c5d7e8(uVar2);
    func_0x000107c61180();
    func_0x000107c5edb4(param_2);
    func_0x000107c61170(uVar2);
    uVar5 = 0;
    func_0x000107c5ede8();
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    pcVar12 = *(code **)(unaff_x22 + 0x108);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = uVar14;
    (*pcVar12)(*(undefined8 *)(unaff_x22 + 0xf0),uVar14);
    func_0x000107c5d7e8(uVar15);
    func_0x000107c61180();
    func_0x000107c5edb4(uVar11);
    func_0x000107c61170(uVar15);
    func_0x000107c5ed70();
    (*pcVar12)(uVar11,uVar14);
    func_0x000107c600d4(uVar2,uVar8,uVar1);
    puVar3 = PTR_PTR_1126a62c0;
    func_0x000107c610f8();
    puVar4 = param_2;
    func_0x000107c5ee20(param_2,uVar5);
    func_0x000107c5fadc(uVar15,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x000107c46708(param_1);
    *(undefined **)(unaff_x22 + 0x128) = puVar3;
    func_0x000107c61170(uVar15);
    func_0x000107c61170(puVar4);
    func_0x00010006c090(param_2,uVar5);
    if (puVar3 != (undefined *)0x0) {
      lVar7 = *(long *)(unaff_x22 + 0xd8);
      lVar9 = *(long *)(lVar7 + _DAT_112d56338);
      if (lVar9 != 0) {
        *(undefined **)(unaff_x22 + 0xc0) = puVar3;
        func_0x000107c6157c(lVar9);
        func_0x000100b60084(unaff_x22 + 0xc0);
        func_0x000107c61574(lVar9);
        lVar7 = *(long *)(unaff_x22 + 0xd8);
      }
      lVar7 = *(long *)(lVar7 + _DAT_112d56330);
      *(long *)(unaff_x22 + 0x130) = lVar7;
      if (lVar7 != 0) {
        func_0x000107c61174();
        func_0x0001000d224c(unaff_x22 + 200);
        *(long *)(unaff_x22 + 0x138) = *(long *)(unaff_x22 + 200);
        if (*(long *)(unaff_x22 + 200) != 0) {
          *(long *)(unaff_x22 + 0x50) = unaff_x22;
          *(code **)(unaff_x22 + 0x58) = FUN_1010410cc;
          func_0x000107c61448(unaff_x22 + 0x50,0);
          func_0x00010103f7e0();
          lVar7 = unaff_x22 + 0x50;
          goto LAB_101040e98;
        }
        func_0x000107c61170(lVar7);
      }
      puVar10 = (undefined8 *)(unaff_x22 + 0x128);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
      goto LAB_101040ecc;
    }
  }
  lVar7 = *(long *)(unaff_x22 + 0xd8);
  lVar9 = *(long *)(lVar7 + _DAT_112d56338);
  if (lVar9 != 0) {
    FUN_1010415a8();
    puVar3 = &UNK_110379aa8;
    func_0x000107c613f8(&UNK_110379aa8,param_2,0,0);
    *param_2 = 0;
    func_0x000107c6157c(lVar9);
    func_0x00010488ade0(puVar3);
    func_0x000107c61574(lVar9);
    func_0x000107c614ac(puVar3);
    lVar7 = *(long *)(unaff_x22 + 0xd8);
  }
  lVar7 = *(long *)(lVar7 + _DAT_112d56330);
  *(long *)(unaff_x22 + 0x140) = lVar7;
  if (lVar7 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0xb8);
    *(long *)(unaff_x22 + 0x148) = *(long *)(unaff_x22 + 0xb8);
    if (*(long *)(unaff_x22 + 0xb8) != 0) {
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10104117c;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      func_0x00010103f7e0();
      lVar7 = unaff_x22 + 0x10;
LAB_101040e98:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(lVar7);
      return;
    }
    func_0x000107c61170(lVar7);
  }
  puVar13 = (undefined8 *)(unaff_x22 + 0x100);
  puVar10 = (undefined8 *)(unaff_x22 + 0xd0);
LAB_101040ecc:
  uVar11 = *puVar13;
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61170(*puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101040f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1010410cc; end: 10104110b;  */

void FUN_1010410cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10104110c,0,0);
  return;
}



/* Entry: 10104110c; end: 10104117b;  */

void FUN_10104110c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x000107c61170(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101041178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10104117c; end: 1010411bb;  */

void FUN_10104117c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010411bc,0,0);
  return;
}



/* Entry: 1010411bc; end: 101041223;  */

void FUN_1010411bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c61170(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101041220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101041224; end: 101041303; -[_TtC35SnapEditorVoiceoverPluginEntryPoint22VoiceoverAudioRecorder audioRecorderDidFinishRecording:successfully:] */

/* WARNING: Possible PIC construction at 0x0001010412e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010412ec) */

void FUN_101041224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103798d0;
  func_0x000107c613fc(&UNK_1103798d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar1[0x18] = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = 3;
  func_0x0001001ca524(3,2,0x2c,2,0,0,&UNK_10d91d060,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


