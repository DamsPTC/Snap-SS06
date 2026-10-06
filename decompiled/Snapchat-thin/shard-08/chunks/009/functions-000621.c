/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067c718c; end: 1067c7193; -[SCReceiveNotificationsFromSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_1067c718c(void)

{
  return 1;
}



/* Entry: 1067c7194; end: 1067c719b; -[SCReceiveNotificationsFromSettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_1067c7194(void)

{
  return 2;
}



/* Entry: 1067c719c; end: 1067c749f; -[SCReceiveNotificationsFromSettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_1067c719c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c1554e0();
  func_0x00010c142240();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    func_0x00010c04ec80();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3);
  _objc_release(puVar4);
  func_0x00010c1faee0(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c26c280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c26c280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar6 = param_4;
  func_0x00010c142240();
  ppuVar7 = &PTR____CFConstantStringClassReference_110dc7a78;
  if (lVar6 != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc7ab8;
  }
  ppuVar8 = &PTR____CFConstantStringClassReference_110dc7a98;
  if (lVar6 != 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc7ad8;
  }
  func_0x00010bcbeaa8(ppuVar7,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c26c280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar4);
  _objc_release(ppuVar7);
  puVar4 = puVar2;
  func_0x00010c26c280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar4);
  func_0x00010bcbeaa8(ppuVar8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c26c280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(puVar4);
  _objc_release(ppuVar8);
  func_0x00010c142240(param_4);
  func_0x00010c122180(param_1);
  func_0x00010c17c180(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067c74a0; end: 1067c753b; -[SCReceiveNotificationsFromSettingsViewController tableView:heightForHeaderInSection:] */

undefined8
FUN_1067c74a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5f918;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f918,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f3300;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_class_1125ac0b8);
  func_0x00010bfe0780();
  _objc_release(param_4);
  _objc_release(ppuVar1);
  return param_1;
}



/* Entry: 1067c753c; end: 1067c75b7; -[SCReceiveNotificationsFromSettingsViewController tableView:viewForHeaderInSection:] */

void FUN_1067c753c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5f918;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f918,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126f3300;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_class_1125ac0b8);
  func_0x00010c29cd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067c75b8; end: 1067c7637; -[SCReceiveNotificationsFromSettingsViewController tableView:didSelectRowAtIndexPath:] */

void FUN_1067c75b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c1e82a0(param_1,param_2,uVar1);
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067c7638; end: 1067c776b; -[SCReceiveNotificationsFromSettingsViewController _getCurrentReceiveNotifFromSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067c7638(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112750790);
  func_0x00010c114040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0ec0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar3;
}



/* Entry: 1067c776c; end: 1067c779f;  */

void FUN_1067c776c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1067c77a0; end: 1067c7843; -[SCReceiveNotificationsFromSettingsViewController _updateReceiveNotifsFromSetting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c77a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ce110;
  if (param_3 == 1) {
    func_0x00010bfb9b80(PTR_PTR_1126ce110);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf9a640();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112750790);
  func_0x00010c114020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288c80();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067c7844; end: 1067c7847;  */

void FUN_1067c7844(void)

{
  return;
}



/* Entry: 1067c7848; end: 1067c7857; -[SCReceiveNotificationsFromSettingsViewController receiveNotifsFromSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067c7848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275078c);
}



/* Entry: 1067c7858; end: 1067c7867; -[SCReceiveNotificationsFromSettingsViewController setReceiveNotifsFromSetting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c7858(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11275078c) = param_3;
  return;
}



/* Entry: 1067c7868; end: 1067c7877; -[SCReceiveNotificationsFromSettingsViewController table] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067c7868(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112750794);
}



/* Entry: 1067c7878; end: 1067c78b7; -[SCReceiveNotificationsFromSettingsViewController setTable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c7878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112750794;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067c78b8; end: 1067c78f7; -[SCReceiveNotificationsFromSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c78b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750794,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750790,0);
  return;
}



/* Entry: 1067c78f8; end: 1067c7aa3; -[SCSettingsLegacyNotificationsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c78f8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad4f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad4f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar2);
  puVar3 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar4 = PTR_PTR_1126aeae8;
  _objc_alloc(PTR_PTR_1126aeae8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0435e0(puVar4);
  param_1 = param_1 + _DAT_112750798;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1067c7aa4; end: 1067c7aeb;  */

void FUN_1067c7aa4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067c7aec; end: 1067c7e27; -[SCSettingsLegacyNotificationsEntryPoint _handleWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c7aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ce118;
  _objc_alloc();
  func_0x00010c0302e0();
  puVar2 = PTR_PTR_1126ce0c0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_1127507d8;
    _objc_loadWeakRetained(lVar10);
  }
  lVar3 = lVar10;
  func_0x00010c293fc0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0();
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_initWeak(auStack_58,param_1);
  lVar11 = (long)_DAT_11275079c;
  lVar10 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar3 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001070c2404();
  _objc_release(lVar3);
  _objc_release(lVar10);
  if ((int)lVar4 == 0) {
    uVar5 = param_1 + lVar11;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x0001070c23f0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x00010be84cc0(param_1);
      goto LAB_1067c7dbc;
    }
    param_1 = param_1 + _DAT_1127507a4;
    _objc_loadWeakRetained(param_1);
    lVar10 = param_1;
    func_0x00010bfa0700();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = auStack_a0;
    _objc_copyWeak(puVar9,auStack_58);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    func_0x00010bf37da0(lVar10);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar8 = param_3;
  }
  else {
    param_1 = param_1 + _DAT_1127507a0;
    _objc_loadWeakRetained(param_1);
    lVar10 = param_1;
    func_0x00010bf0c2c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1067c7e28;
    puStack_80 = &UNK_11093cde8;
    puVar9 = auStack_60;
    _objc_copyWeak(puVar9,auStack_58);
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(puVar1);
    puStack_70 = puVar1;
    _objc_retain(puVar2);
    puStack_68 = puVar2;
    func_0x00010bfc9bc0(lVar10);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(puStack_68);
    _objc_release(puStack_70);
    uVar8 = uStack_78;
  }
  _objc_release(uVar8);
  _objc_destroyWeak(puVar9);
LAB_1067c7dbc:
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1067c7e28; end: 1067c7f47;  */

void FUN_1067c7e28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1067c7f48; end: 1067c7f87;  */

void FUN_1067c7f48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be84f00(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067c7f88; end: 1067c7fcf;  */

void FUN_1067c7f88(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067c7fd0; end: 1067c8307; -[SCSettingsLegacyNotificationsEntryPoint _pushV2NotificationSettingsWithRuntime:context:notifContext:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c7fd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ce0d0;
    _objc_alloc();
    lVar1 = param_1 + _DAT_1127507a8;
    _objc_loadWeakRetained();
    lVar3 = param_1 + _DAT_1127507ac;
    _objc_loadWeakRetained();
    lVar4 = param_1 + _DAT_1127507b0;
    _objc_loadWeakRetained();
    lVar5 = param_1 + _DAT_1127507b4;
    _objc_loadWeakRetained();
    lVar6 = param_1 + _DAT_1127507a4;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bfa0700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_1127507b8;
    _objc_loadWeakRetained();
    lVar9 = param_1 + _DAT_1127507bc;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_1127507a0;
    _objc_loadWeakRetained();
    lVar12 = param_1 + _DAT_1127507c0;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c0dc400();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_1127507c4;
    lVar14 = param_1 + lVar19;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c0f9c20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar19;
    _objc_loadWeakRetained();
    lVar19 = param_1;
    func_0x00010c0dccc0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_4;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040be0(puVar2,param_2,param_3,lVar1,lVar3,lVar4,lVar5,lVar7,param_6,param_5,lVar8,
                        lVar10,lVar11,lVar13,lVar16,lVar17,lVar18);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar19);
    _objc_release(param_1);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0d66a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067c8308; end: 1067c8603; -[SCSettingsLegacyNotificationsEntryPoint _pushLegacyNotificationSettingsWithContext:notifContext:logger:userIsInFamilyCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c8308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  
  puVar1 = PTR_PTR_1126ce0c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127507c8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127507cc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127507d0;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfa23c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127507ac;
  _objc_loadWeakRetained();
  lVar20 = (long)_DAT_1127507c4;
  lVar9 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar11 = lVar20;
  func_0x00010c0f9c20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_1127507d4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127507b0;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_1127507b4;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_1127507c0;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275079c;
  _objc_loadWeakRetained();
  lVar18 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004440(puVar1,param_2,param_4,lVar3,param_5,lVar5,lVar7,lVar8,lVar10,lVar11,lVar13,
                      lVar14,lVar15,lVar17,lVar18,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar19 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11c520(uVar19,param_2,puVar1,1);
  _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067c8604; end: 1067c86ef; -[SCSettingsLegacyNotificationsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c8604(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127507b8);
  _objc_destroyWeak(param_1 + _DAT_1127507bc);
  _objc_destroyWeak(param_1 + _DAT_1127507a8);
  _objc_destroyWeak(param_1 + _DAT_1127507a0);
  _objc_destroyWeak(param_1 + _DAT_1127507a4);
  _objc_destroyWeak(param_1 + _DAT_11275079c);
  _objc_destroyWeak(param_1 + _DAT_1127507c0);
  _objc_destroyWeak(param_1 + _DAT_1127507d8);
  _objc_destroyWeak(param_1 + _DAT_1127507c4);
  _objc_destroyWeak(param_1 + _DAT_1127507cc);
  _objc_destroyWeak(param_1 + _DAT_1127507ac);
  _objc_destroyWeak(param_1 + _DAT_1127507d0);
  _objc_destroyWeak(param_1 + _DAT_1127507b4);
  _objc_destroyWeak(param_1 + _DAT_1127507b0);
  _objc_destroyWeak(param_1 + _DAT_1127507d4);
  _objc_destroyWeak(param_1 + _DAT_112750798);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127507c8);
  return;
}



/* Entry: 1067c86f0; end: 1067c8c33; -[SCSettingsLegacyWhoCanSendNotifEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c86f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar17 = (long)_DAT_1127507dc;
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_1127507e0);
  *(undefined8 *)(param_1 + _DAT_1127507e0) = uVar13;
  _objc_release(uVar14);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127507e4);
  *(undefined **)(param_1 + _DAT_1127507e4) = puVar1;
  _objc_release(uVar13);
  puVar2 = PTR_PTR_1126aeae0;
  func_0x00010c2a4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127507e8;
  lVar3 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c114040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127507ec;
  lVar7 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c2426c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0ec6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010be64220();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127507f0);
  *(long *)(param_1 + _DAT_1127507f0) = lVar11;
  _objc_release(uVar13);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_initWeak(auStack_80,param_1);
  puVar12 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1067c8c34;
  puStack_90 = &UNK_11093ce18;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127507f8);
  *(undefined **)(param_1 + _DAT_1127507f8) = puVar12;
  _objc_release(uVar13);
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar15);
  lVar3 = lVar15;
  func_0x00010c114040();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1067c8ce8;
  puStack_b8 = &UNK_11093ce48;
  _objc_copyWeak(auStack_b0,auStack_80);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar15);
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar16);
  lVar3 = lVar16;
  func_0x00010c2426c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar7;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1067c8e04;
  puStack_e0 = &UNK_11084eff0;
  _objc_copyWeak(auStack_d8,auStack_80);
  lVar4 = lVar15;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar16);
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar13);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aeae8;
  _objc_alloc();
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c0435c0();
  param_1 = param_1 + _DAT_112750804;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  return;
}



/* Entry: 1067c8c34; end: 1067c8ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c8c34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_1127507f4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf0c120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11e100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1067c8ce8; end: 1067c8db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c8ce8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127507f8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1067c8db4; end: 1067c8e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c8db4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be64220(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(lVar1 + _DAT_1127507fc));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee37e0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067c8e04; end: 1067c8ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c8e04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127507f8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1067c8ed0; end: 1067c8f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c8ed0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be64220(lVar1,param_2,*(undefined8 *)(lVar1 + _DAT_112750800),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee37e0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067c8f68; end: 1067c9057; -[SCSettingsLegacyWhoCanSendNotifEntryPoint _updateViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c8f68(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127507f0;
  puVar3 = *(undefined **)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(puVar3);
  if (param_3 == puVar3) {
    _objc_release(puVar3);
    puVar3 = param_3;
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(param_3);
      if (((ulong)puVar1 & 1) != 0) goto LAB_1067c9040;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127507dc);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
  }
  _objc_release(puVar3);
LAB_1067c9040:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067c9058; end: 1067c929b; -[SCSettingsLegacyWhoCanSendNotifEntryPoint _notifViewModelFromPrivacySettings:snapPrivacy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c9058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = (long)_DAT_112750800;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_3;
  _objc_release(uVar1);
  lVar6 = (long)_DAT_1127507fc;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_4;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b29b8;
  func_0x00010bf9a640(PTR_PTR_1126b29b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(puVar5);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_1067c929c;
    uStack_50 = 0x1067c92ac;
    uStack_48 = 0;
    func_0x00010c0c0ec0(param_3);
    puVar5 = PTR_PTR_1126aeaf0;
    _objc_alloc(PTR_PTR_1126aeaf0);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f8d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f8d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e5f8d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f8d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067c929c; end: 1067c92b3;  */

void FUN_1067c929c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1067c92b4; end: 1067c938b;  */

void FUN_1067c92b4(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7a78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7a78,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067c938c; end: 1067c9433; -[SCSettingsLegacyWhoCanSendNotifEntryPoint _presentSendMeNotificationsWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c938c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce120;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_1127507e8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c02fdc0(puVar1,param_2,param_1);
  _objc_release(param_1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11c520(uVar2,param_2,puVar1,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067c9434; end: 1067c94ff; -[SCSettingsLegacyWhoCanSendNotifEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c9434(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127507f4);
  _objc_destroyWeak(param_1 + _DAT_1127507ec);
  _objc_destroyWeak(param_1 + _DAT_1127507e8);
  _objc_destroyWeak(param_1 + _DAT_112750804);
  _objc_destroyWeak(param_1 + _DAT_112750808);
  _objc_storeStrong(param_1 + _DAT_1127507f8,0);
  _objc_storeStrong(param_1 + _DAT_1127507e4,0);
  _objc_storeStrong(param_1 + _DAT_1127507f0,0);
  _objc_storeStrong(param_1 + _DAT_112750800,0);
  _objc_storeStrong(param_1 + _DAT_1127507fc,0);
  _objc_storeStrong(param_1 + _DAT_1127507e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127507dc,0);
  return;
}



/* Entry: 1067c9500; end: 1067c952f;  */

void FUN_1067c9500(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5f938;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e5f938,
                      &PTR____CFConstantStringClassReference_110e5f958,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1067c9530; end: 1067c9543; +[SCCNotificationOSSettings valdiMarshallableObjectDescriptor] */

void FUN_1067c9530(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11093ce78;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1067c9544; end: 1067c955f; +[SCCNotificationPreferenceHost valdiMarshallableObjectDescriptor] */

void FUN_1067c9544(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093cef0;
  param_1[1] = 0;
  param_1[2] = &PTR_s_oob_v_11093cec0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1067c9560; end: 1067c958b;  */

undefined8 FUN_1067c9560(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 1067c958c; end: 1067c9607;  */

void FUN_1067c958c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_1067c96d4;
  puStack_30 = &UNK_110858448;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x0001067c9710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1067c9608; end: 1067c9613; +[SCCNotificationSettingsRoot componentPath] */

undefined ** FUN_1067c9608(void)

{
  return &PTR____CFConstantStringClassReference_110e5f998;
}


