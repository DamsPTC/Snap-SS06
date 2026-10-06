/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ecb74c; end: 104ecb81b;  */

void FUN_104ecb74c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104ecb7c4;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ecb81c; end: 104ecb87b;  */

void FUN_104ecb81c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e47e0(*(undefined8 *)(param_1 + 0x68));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ecb87c; end: 104ecb8c3;  */

long FUN_104ecb87c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be2f6a0(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104ecb8c4; end: 104ecb963;  */

undefined8 FUN_104ecb8c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c260800(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c080120();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 104ecb964; end: 104ecba57;  */

void FUN_104ecb964(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ecba58;
  puStack_68 = &UNK_110844dd0;
  _objc_copyWeak(auStack_50,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_60 = param_2;
  uStack_48 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 104ecba58; end: 104ecbab7;  */

void FUN_104ecba58(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfe3e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10c4c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ecbab8; end: 104ecbbd3; -[SCMapHomeWorkSettingsController _handleSCPlusOnlyTap] */

ulong FUN_104ecbab8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c080120();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar6 = PTR_PTR_1126b1da8;
    _objc_alloc(PTR_PTR_1126b1da8);
    func_0x00010c04abe0();
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bf23e60(uVar7,param_2,puVar5,puVar6,param_1,4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x98),param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  return uVar4;
}



/* Entry: 104ecbbd4; end: 104ecbe83; -[SCMapHomeWorkSettingsController _updateUserHomeLocation:homeModel:selectedGridIndex:] */

void FUN_104ecbbd4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfe2d40(*(undefined8 *)(param_2 + 0x60));
  func_0x00010c08aca0(param_4);
  uVar2 = param_1;
  func_0x00010c09abe0(param_4);
  _CLLocationCoordinate2DMake(param_1,uVar2);
  puVar1 = PTR_PTR_1126b1d38;
  _objc_alloc();
  func_0x00010c055ca0(param_1,uVar2);
  if ((param_5 == 0) || ((*(byte *)(param_2 + 0x80) & 1) == 0)) {
    _objc_initWeak(auStack_78,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104ecbe84;
    puStack_88 = &UNK_110855ea0;
    ppuVar4 = &puStack_a0;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c28bb40(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  else {
    _objc_initWeak(auStack_78,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010bf5ef20();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_104ecbec8;
    puStack_c0 = &UNK_110858b40;
    ppuVar4 = &puStack_d8;
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_retain(uVar2);
    uStack_b8 = uVar2;
    _objc_retain(param_6);
    uStack_b0 = param_6;
    func_0x00010be2f820(param_2);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar4 + 6);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained();
  if (param_4 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_4 + 0x58));
    func_0x00010be697c0(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ecbe84; end: 104ecbec7;  */

void FUN_104ecbe84(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be270);
    func_0x00010be697c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ecbec8; end: 104ecbf43;  */

void FUN_104ecbec8(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58));
    if (param_2 != 0) {
      func_0x00010bed3f80(param_1);
      func_0x00010bedb3a0(param_1);
    }
    func_0x00010be697c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ecbf44; end: 104ecc02b; -[SCMapHomeWorkSettingsController _updateMeTrayHomeCellWithHomeModel:selectedGridIndex:] */

void FUN_104ecbf44(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bfe3da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf6b020(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010bfe3da0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b91c0(uVar4);
        _objc_release(lVar1);
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ecc02c; end: 104ecc10b; -[SCMapHomeWorkSettingsController _onHomeSettingsSaved] */

void FUN_104ecc02c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104ecc0b4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ecc10c; end: 104ecc18b; -[SCMapHomeWorkSettingsController _updateBasemapWithHomeModel:] */

void FUN_104ecc10c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x80) & 1) != 0)) {
    func_0x00010c1387a0(*(undefined8 *)(param_1 + 0x18));
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010676ad80(uVar1,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ad60(*(undefined8 *)(param_1 + 0xb0));
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ecc18c; end: 104ecc383; -[SCMapHomeWorkSettingsController _updateHiddenOrNot:] */

void FUN_104ecc18c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c292320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = param_1;
  func_0x00010c292320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(param_1,uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b1d38;
  _objc_alloc();
  func_0x00010c055ca0(param_1,uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010bf5ef20();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104ecc384;
  puStack_90 = &UNK_110858ba0;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = (undefined1)param_4;
  _objc_retain(uVar4);
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be270;
  uStack_88 = uVar4;
  func_0x00010c28bb40(uVar1);
  _objc_release(puVar5);
  _objc_release(ppuStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_b8 = FUN_104ecc384;
  puVar5 = puVar6 + 0x30;
  uStack_e0 = uVar1;
  uStack_d8 = param_4;
  uStack_d0 = uVar4;
  puStack_c8 = puVar3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (puVar5 != (undefined *)0x0) {
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_104ecc440;
    puStack_108 = &UNK_110858b70;
    uStack_e8 = puVar6[0x38];
    uVar1 = *(undefined8 *)(puVar6 + 0x20);
    puStack_100 = puVar5;
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(puVar6 + 0x28);
    uStack_f8 = uVar1;
    _objc_retain(uVar4);
    uStack_f0 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_120);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
  }
  _objc_release(puVar5);
  return;
}



/* Entry: 104ecc384; end: 104ecc43f;  */

void FUN_104ecc384(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104ecc440;
    puStack_58 = &UNK_110858b70;
    uStack_38 = *(undefined1 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_50 = lVar1;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104ecc440; end: 104ecc47f;  */

void FUN_104ecc440(long param_1,undefined8 param_2)

{
  func_0x00010c1a84c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),param_2,
                      *(undefined1 *)(param_1 + 0x38));
  func_0x00010bed3f80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104ecc480; end: 104ecc5d7; -[SCMapHomeWorkSettingsController _presentNotificationWithIsHidden:] */

void FUN_104ecc480(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  if ((param_3 & 1) == 0) {
    func_0x000106875274();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010687525c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf54760();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104ecc57c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104ecc5d8; end: 104ecc737; -[SCMapHomeWorkSettingsController _presentNotificationSaved] */

void FUN_104ecc5d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    func_0x000106875244();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010687528c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf54760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104ecc6dc;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 104ecc738; end: 104ecc8af; -[SCMapHomeWorkSettingsController _presentNotificationError] */

void FUN_104ecc738(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9c98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104ecc830;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 104ecc8b0; end: 104ecc9ff; -[SCMapHomeWorkSettingsController onHomeFeatureUpdatedWithHomeModel:] */

void FUN_104ecc8b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b1d38;
  if (*(long *)(param_2 + 0x70) != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010bfe2d40(uVar2);
    uVar3 = param_4;
    func_0x00010c09ea00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    uVar4 = param_4;
    uVar7 = param_1;
    func_0x00010c09ea00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    _CLLocationCoordinate2DMake(param_1,uVar7);
    func_0x00010c055ca0(puVar1,param_3,0,uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar5 = *(long *)(param_2 + 0x60);
    func_0x00010c082680(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010bde6be0(param_2,param_3,puVar1,param_4,lVar5 != 0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(lVar5);
    lVar5 = param_2;
    func_0x00010bdf5980(param_2,param_3,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_2 + 0x70),param_3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104ecca00; end: 104ecca47; -[SCMapHomeWorkSettingsController plusSubscribeDidDismiss] */

void FUN_104ecca00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x98));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ecca48; end: 104ecca8f; -[SCMapHomeWorkSettingsController tray:positionDidChange:] */

void FUN_104ecca48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b91e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104ecca90; end: 104eccae7; -[SCMapHomeWorkSettingsController tray:heightForPosition:] */

double FUN_104ecca90(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(puVar1);
  return param_4 - param_1;
}



/* Entry: 104eccae8; end: 104eccb0f; -[SCMapHomeWorkSettingsController _homeWorkOpenSourceToString:] */

undefined ** FUN_104eccae8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return (undefined **)(&PTR_PTR_110858d30)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db9cb8;
}



/* Entry: 104eccb10; end: 104eccbc3; -[SCMapHomeWorkSettingsController homeLocationEditorController] */

void FUN_104eccb10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    lVar4 = *(long *)(param_1 + 0xa8);
    if (lVar4 == 0) {
      puVar1 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar2 = PTR_PTR_1126b1db0;
      _objc_alloc();
      func_0x00010c05fc80();
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined **)(param_1 + 0xa8) = puVar2;
      _objc_release(uVar3);
      _objc_release(puVar1);
      lVar4 = *(long *)(param_1 + 0xa8);
    }
    _objc_retain(lVar4);
  }
  else {
    lVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104eccbc4; end: 104eccccf; -[SCMapHomeWorkSettingsController _constructHomeSettingsWithHomeLocation:homeModel:isUserHomeLocationFromServer:] */

void FUN_104eccbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1d80;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bf51c80(param_4);
  func_0x00010bf51c80(param_4);
  func_0x00010c0219a0(param_1,puVar1);
  puVar2 = PTR_PTR_1126b1d78;
  _objc_alloc(PTR_PTR_1126b1d78);
  uVar3 = param_4;
  func_0x00010c074c20(param_4);
  _objc_release(param_4);
  func_0x00010c01a740(puVar2,param_3,uVar3,puVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5700(puVar2,param_3,puVar4);
  _objc_release(puVar4);
  func_0x00010c21e560(puVar2,param_3,param_5);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ecccd0; end: 104eccdf3; -[SCMapHomeWorkSettingsController onTapSaveWithHomeLocation:homeModel:] */

void FUN_104ecccd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b1d38;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010bfe2d40(uVar2);
  uVar3 = param_5;
  func_0x00010c09ea00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar4 = param_5;
  uVar7 = param_1;
  func_0x00010c09ea00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(param_1,uVar7);
  func_0x00010c055ca0(puVar1,param_3,0,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar5 = param_2;
  func_0x00010bde6be0(param_2,param_3,puVar1,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar6 = param_2;
  func_0x00010bdf5980(param_2,param_3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_2 + 0x70),param_3,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eccdf4; end: 104eccfe7; -[SCMapHomeWorkSettingsController _fetchInitialDataForHomeSettingsWithHomeLocation:fallbackHomeLocation:completion:] */

void FUN_104eccdf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be0fce0(param_1);
  uVar1 = param_1;
  func_0x00010bde6b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bde6b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar1;
  uStack_70 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_80;
  _objc_copyWeak(auStack_88);
  func_0x00010bf41860(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_3);
  _objc_retain(puVar6);
  puVar4 = puVar6;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x2) {
    puVar4 = puVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == puVar5) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar6;
      func_0x00010c0dfd40(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      lVar7 = 0;
    }
    else {
      param_3 = param_3 + 0x20;
      _objc_loadWeakRetained(param_3);
      lVar7 = param_3;
      func_0x00010bde6be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    _objc_release(puVar8);
    _objc_release(puVar4);
  }
  else {
    lVar7 = 0;
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 104eccfe8; end: 104ecd10f;  */

void FUN_104eccfe8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x2) {
    puVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == puVar3) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      lVar4 = 0;
    }
    else {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      func_0x00010bde6be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  else {
    lVar4 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104ecd110; end: 104ecd1ff; -[SCMapHomeWorkSettingsController _fetchAvailableHomeModels] */

void FUN_104ecd110(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b1db8;
  _objc_alloc();
  func_0x00010c026840();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xc0));
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010bfa51e0(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 104ecd200; end: 104ecd287;  */

void FUN_104ecd200(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      func_0x00010c1bef20(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010c1bef20(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c16d6e0(*(undefined8 *)(param_1 + 0x20));
    }
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0xc0));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ecd288; end: 104ecd39b; -[SCMapHomeWorkSettingsController _constructHomeLocationObservableWithHomeLocation:fallbackHomeLocation:] */

void FUN_104ecd288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ecd39c; end: 104ecd4c7;  */

void FUN_104ecd39c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      _objc_retain(puVar1);
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      _objc_retain(param_2);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      func_0x00010bfab380(uVar4);
      _objc_retain(puVar1);
      _objc_release(uVar3);
      _objc_release(param_2);
    }
    _objc_release(lVar2);
  }
  else {
    func_0x00010c0d9840(param_2);
    func_0x00010bf436e0(param_2);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ecd4c8; end: 104ecd517;  */

void FUN_104ecd4c8(long param_1,undefined8 param_2)

{
  func_0x00010bfe3d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ecd518; end: 104ecd5cf; -[SCMapHomeWorkSettingsController _constructHomeModelObservable] */

void FUN_104ecd518(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ecd5d0; end: 104ecd703;  */

void FUN_104ecd5d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_2);
    func_0x00010bfa6100(uVar2);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ecd704; end: 104ecd85b; -[SCMapHomeWorkSettingsController _handleSaveHomeSettingsWithHomeLocation:homeModel:completion:] */

void FUN_104ecd704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bde70a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde70c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf1a3e0(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0bc7a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 104ecd85c; end: 104ecd887;  */

void FUN_104ecd85c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0bc7a0(param_2,param_2,&PTR___NSConcreteGlobalBlock_110858ce0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 104ecd888; end: 104ecd88f;  */

void FUN_104ecd888(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 104ecd890; end: 104ecd97b; -[SCMapHomeWorkSettingsController _constructUpdateHomeLocationObservableWithNewHomeLocation:] */

void FUN_104ecd890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ecd97c; end: 104ecdaab;  */

void FUN_104ecd97c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c28bb40(uVar4);
    _objc_release(puVar2);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 104ecdaac; end: 104ecdb07;  */

void FUN_104ecdaac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 104ecdb08; end: 104ecdbf3; -[SCMapHomeWorkSettingsController _constructUpdateHomeModelObservableWithHomeModel:] */

void FUN_104ecdb08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ecdbf4; end: 104ecdceb;  */

void FUN_104ecdbf4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010c0d9840(param_2);
      func_0x00010bf436e0(param_2);
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      _objc_retain(param_2);
      func_0x00010c284ca0(uVar3);
      _objc_release(param_2);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ecdcec; end: 104ecdd47;  */

void FUN_104ecdcec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 104ecdd48; end: 104ecde8b; -[SCMapHomeWorkSettingsController .cxx_destruct] */

void FUN_104ecdd48(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ecde8c; end: 104ece01f; -[SCMapHomeWorkSettingsViewController initWithNativeMapSDK:configProvider:currentUserID:enable3DHomes:mapType:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ecde8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e4da8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1c8b80(puVar1);
    lVar4 = (long)_DAT_1127161f8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127161fc) = param_6;
    lVar4 = (long)_DAT_112716200;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716204;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112716208) = param_7;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271620c),param_8);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112716210);
    *(undefined **)((long)puVar1 + (long)_DAT_112716210) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112716214);
    *(undefined **)((long)puVar1 + (long)_DAT_112716214) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ece020; end: 104ece02f; -[SCMapHomeWorkSettingsViewController onHomeModelUpdatedWithHomeModel:updateReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ece020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112716210),PTR_s_next__112614028);
  return;
}



/* Entry: 104ece030; end: 104ece31f; -[SCMapHomeWorkSettingsViewController setValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ece030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112716218;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  lStack_98 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_a8 = lVar1;
  lStack_88 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  lStack_b8 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_d0 = lVar2;
  lStack_80 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_78 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010beef8c0(puStack_c8);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(lVar10);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lStack_d0);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a8);
  _objc_release(uStack_a0);
  _objc_release(lStack_98);
  lVar1 = lStack_90;
  _objc_release(lStack_90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_104ece320;
  uStack_100 = param_3;
  uStack_f8 = uVar9;
  lStack_f0 = lVar2;
  puStack_e8 = puVar7;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_initWeak(auStack_108,lVar1);
  _objc_copyWeak(auStack_110,auStack_108);
  _objc_opt_class(PTR_PTR_1126b1dc0);
  puVar7 = puVar8;
  func_0x00010c0b7ac0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104ece320; end: 104ece403; -[SCMapHomeWorkSettingsViewController createEmbeddedMapViewFactoryWithRuntime:] */

void FUN_104ece320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_opt_class(PTR_PTR_1126b1dc0);
  uVar1 = param_3;
  func_0x00010c0b7ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ece404; end: 104ece453;  */

void FUN_104ece404(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bded520(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ece454; end: 104ece54b; -[SCMapHomeWorkSettingsViewController registerEmbeddedMapViewWithValdiView:] */

void FUN_104ece454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c295200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_opt_class(PTR_PTR_1126b1dc0);
  func_0x00010c127580(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104ece54c; end: 104ece59b;  */

void FUN_104ece54c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bded520(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ece59c; end: 104ece5f7; -[SCMapHomeWorkSettingsViewController onLocationSearchTrayLocationTapped:] */

void FUN_104ece59c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ece5f8;
  puStack_30 = &UNK_110858dc0;
  uStack_28 = param_3;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  return;
}



/* Entry: 104ece5f8; end: 104ece703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ece5f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11271621c;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c071800();
  if ((int)uVar1 == 0) {
    func_0x00010c17a700(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        0x4031000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6),
                        param_2,1);
  }
  else {
    puVar3 = PTR_PTR_1126b1dc8;
    func_0x00010c271ea0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1dc8;
    func_0x00010bf2a160(PTR_PTR_1126b1dc8,param_2,
                        &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184290,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1dc8;
    func_0x00010bf03e20(PTR_PTR_1126b1dc8,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1840(uVar2,param_2,puVar3,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ece704; end: 104eceac3; -[SCMapHomeWorkSettingsViewController handle:parameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ece704(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined **ppuStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar11 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar11 == 0) goto LAB_104ecea78;
  lVar11 = (long)_DAT_112716220;
  ppuVar2 = *(undefined ***)(param_1 + lVar11);
  lStack_138 = param_3;
  func_0x00010bf02ae0();
  _objc_retainAutoreleasedReturnValue();
  unaff_x22 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be288;
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x22 = ppuVar2;
  }
  _objc_retain(unaff_x22);
  _objc_release(ppuVar2);
  ppuVar3 = *(undefined ***)(param_1 + lVar11);
  lStack_150 = lVar11;
  uStack_148 = param_1;
  func_0x00010c14e120();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be2a0;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
  }
  _objc_retain();
  _objc_release(ppuVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lStack_140 = param_4;
  func_0x00010c0f3860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        lVar13 = *(long *)(lStack_128 + lVar12 * 8);
        lVar4 = lVar13;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        ppuVar3 = ppuVar2;
        if (lVar5 == 0) {
LAB_104ece988:
          _objc_release(lVar4);
          ppuVar2 = ppuVar3;
        }
        else {
          lVar5 = lVar13;
          func_0x00010bfde340();
          _objc_release(lVar4);
          if ((int)lVar5 != 0) {
            lVar4 = lVar13;
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c2970a0();
            _objc_release(lVar4);
            if ((int)lVar5 == 5) {
              lVar4 = lVar13;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010c0720c0();
              _objc_release(lVar4);
              ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
              if ((int)lVar5 == 0) {
                lVar4 = lVar13;
                func_0x00010c086560();
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar4;
                func_0x00010c0720c0();
                _objc_release(lVar4);
                ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                if ((int)lVar5 == 0) goto LAB_104ece990;
                func_0x00010c296d80(lVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf885a0();
                func_0x00010c0df720(ppuVar3);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010c296d80(lVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf885a0();
                func_0x00010c0df720();
                _objc_retainAutoreleasedReturnValue();
                ppuVar2 = unaff_x22;
                unaff_x22 = ppuVar6;
              }
              _objc_release(ppuVar2);
              lVar4 = lVar13;
              goto LAB_104ece988;
            }
          }
        }
LAB_104ece990:
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = param_4;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_4);
  uVar1 = uStack_148;
  lVar11 = lStack_150;
  uVar7 = *(ulong *)(uStack_148 + lStack_150);
  func_0x00010bf02ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c071f40();
  if ((uVar8 & 1) == 0) {
    _objc_release(uVar7);
LAB_104ecea2c:
    param_3 = lStack_138;
    param_4 = lStack_140;
    func_0x00010c167da0(*(undefined8 *)(uVar1 + lVar11));
    func_0x00010c1f5fe0(*(undefined8 *)(uVar1 + lVar11));
    param_1 = uVar1 + (long)_DAT_11271620c;
    _objc_loadWeakRetained();
    func_0x00010c0e47c0();
    _objc_release(param_1);
  }
  else {
    param_1 = *(ulong *)(uVar1 + lVar11);
    func_0x00010c14e120();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c071f40();
    _objc_release(param_1);
    _objc_release(uVar7);
    param_3 = lStack_138;
    param_4 = lStack_140;
    if ((uVar8 & 1) == 0) goto LAB_104ecea2c;
  }
  _objc_release(ppuVar2);
  _objc_release(unaff_x22);
LAB_104ecea78:
  _objc_release(param_4);
  lVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_104eceac4;
    ppuStack_180 = unaff_x22;
    lStack_178 = param_4;
    lStack_170 = param_3;
    uStack_168 = param_1;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_188,lVar11);
    uVar9 = *(undefined8 *)(lVar11 + _DAT_112716210);
    _objc_copyWeak(auStack_190,auStack_188);
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    return;
  }
  return;
}



/* Entry: 104eceac4; end: 104eceb9f; -[SCMapHomeWorkSettingsViewController onMapReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eceac4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112716210);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104eceba0; end: 104ecebe7;  */

void FUN_104eceba0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be697a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ecebe8; end: 104ecebeb; -[SCMapHomeWorkSettingsViewController onInitialMapFriendsLoad:] */

void FUN_104ecebe8(void)

{
  return;
}



/* Entry: 104ecebec; end: 104ecee57; -[SCMapHomeWorkSettingsViewController _onHomeModelUpdatedWithHomeModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ecebec(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010bfe3e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar7 == 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_11271621c);
    func_0x00010c0b9c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c480();
    _objc_release(uVar3);
    lVar7 = (long)_DAT_112716220;
    _objc_retain(param_4);
    lVar6 = *(long *)(param_2 + lVar7);
    *(long *)(param_2 + lVar7) = param_4;
  }
  else {
    lVar7 = (long)_DAT_112716220;
    uVar3 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c09ea00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c09ea00(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    func_0x00010c08aca0(uVar3);
    dVar8 = param_1;
    func_0x00010c08aca0(lVar6);
    dVar8 = ABS(param_1 - dVar8);
    if (dVar8 <= 2.220446049250313e-16) {
      func_0x00010c09abe0(uVar3);
      dVar9 = dVar8;
      func_0x00010c09abe0(lVar6);
      bVar1 = ABS(dVar8 - dVar9) <= 2.220446049250313e-16;
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar3);
    _objc_release(lVar6);
    _objc_release(uVar3);
    uVar4 = *(ulong *)(param_2 + lVar7);
    func_0x00010bfe3e20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010bfe3e20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(lVar6);
    _objc_release(uVar4);
    if ((bVar1) && ((uVar5 & 1) != 0)) goto LAB_104ecee2c;
    lVar6 = param_4;
    func_0x00010676a7fc(param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + _DAT_11271621c);
    func_0x00010c0b9c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8340();
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + lVar7);
    *(long *)(param_2 + lVar7) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(lVar6);
LAB_104ecee2c:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ecee58; end: 104ecf03f; -[SCMapHomeWorkSettingsViewController _createEmbeddedMapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ecee58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b1dc0;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c014980(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112716200),
                      *(undefined8 *)(param_1 + _DAT_112716204));
  lVar5 = (long)_DAT_11271621c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c1c8460(0x4000000000000000,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126b1dd0;
  _objc_alloc_init(PTR_PTR_1126b1dd0);
  puVar4 = PTR_PTR_1126b1dd8;
  _objc_alloc_init(PTR_PTR_1126b1dd8);
  func_0x00010c1c21c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c0b9280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c0b9280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(puVar4);
  func_0x00010c167220(puVar1,param_2,0);
  if (*(char *)(param_1 + _DAT_1127161fc) == '\x01') {
    puVar4 = PTR_PTR_1126b1de0;
    func_0x00010c2bd7a0(PTR_PTR_1126b1de0,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c0b9c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064780();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c0b9c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0a80();
  _objc_release(uVar3);
  func_0x00010bed94a0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127161f8),
                      *(undefined8 *)(param_1 + _DAT_112716208));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104ecf040; end: 104ecf073; -[SCMapHomeWorkSettingsViewController traitCollectionDidChange:] */

void FUN_104ecf040(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4da8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_traitCollectionDidChange__11267bf88);
  return;
}



/* Entry: 104ecf074; end: 104ecf20f; -[SCMapHomeWorkSettingsViewController _updateHomeSettingsBrowsingContextWithCurrentUserID:mapType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ecf074(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11271621c;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(param_3);
  func_0x00010c0b9c00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfcbea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b1de8;
  _objc_alloc_init(PTR_PTR_1126b1de8);
  puVar3 = PTR_PTR_1126b1df0;
  _objc_alloc_init(PTR_PTR_1126b1df0);
  func_0x00010c187f00(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf60940(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(param_3);
  _objc_release(puVar3);
  func_0x00010c28bac0(uVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  puVar4 = PTR_PTR_1126b1e00;
  _objc_alloc_init(PTR_PTR_1126b1e00);
  func_0x00010c1a8ec0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  if ((param_4 == 1) || (param_4 == 2)) {
    puVar4 = puVar3;
    func_0x00010bfe3ee0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0b9c00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1f00();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ecf210; end: 104ecf21f; -[SCMapHomeWorkSettingsViewController currentHomeModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ecf210(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112716220);
}



/* Entry: 104ecf220; end: 104ecf2cb; -[SCMapHomeWorkSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ecf220(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716220,0);
  _objc_destroyWeak(param_1 + _DAT_11271620c);
  _objc_storeStrong(param_1 + _DAT_112716214,0);
  _objc_storeStrong(param_1 + _DAT_112716210,0);
  _objc_storeStrong(param_1 + _DAT_112716204,0);
  _objc_storeStrong(param_1 + _DAT_112716200,0);
  _objc_storeStrong(param_1 + _DAT_1127161f8,0);
  _objc_storeStrong(param_1 + _DAT_11271621c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716218,0);
  return;
}



/* Entry: 104ecf2cc; end: 104ecf5d7; -[SCMapVisualPlacesTrayController initWithTrayDataProvider:placeStoryThumbnailsObservable:mapViewport:mapView:mapSdkSession:multiTrayServices:reloadPlacesObservable:circumstanceEngine:grapheneLogger:] */

undefined8 *
FUN_104ecf2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e4db0;
  puVar1 = &uStack_70;
  uStack_70 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[2];
    puVar1[2] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    func_0x00010c29fd40(puVar1[8]);
    puVar1[0xe] = param_1;
    puVar1[0xf] = param_2;
    puVar1[0x10] = param_3;
    puVar1[0x11] = param_4;
    func_0x00010c2bf200(puVar1[8]);
    puVar1[0x12] = param_1;
    uVar2 = param_14;
    func_0x000109021f58();
    *(char *)(puVar1 + 0x1d) = (char)uVar2;
    func_0x00010beddd80(puVar1);
    func_0x00010beaede0(puVar1);
    func_0x00010beaf5a0(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[8];
    func_0x00010c29f500();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 104ecf5d8; end: 104ecf70b;  */

void FUN_104ecf5d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0bec60(param_2);
    _objc_release(param_1);
    _objc_release(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ecf70c; end: 104ecf73f;  */

void FUN_104ecf70c(long param_1)

{
  func_0x00010c069d00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xd0) = 1;
  return;
}



/* Entry: 104ecf740; end: 104ecf7eb;  */

void FUN_104ecf740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_5 + 0x20);
  func_0x00010c29fd40(*(undefined8 *)(lVar4 + 0x40));
  iVar1 = (int)*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x40);
  func_0x00010c2bf200();
  func_0x000106877220(*(undefined8 *)(lVar4 + 0x98),*(undefined8 *)(lVar4 + 0xa0),
                      *(undefined8 *)(lVar4 + 0xa8),*(undefined8 *)(lVar4 + 0xb0),param_1,param_2,
                      param_3,param_4);
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_5 + 0x20);
    func_0x00010bdcf2a0();
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_104ecf7cc;
    }
  }
  uVar3 = 0;
LAB_104ecf7cc:
                    /* WARNING: Could not recover jumptable at 0x00010be2fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x20),PTR_s__handleSearchButtonDisplay__112569850,uVar3);
  return;
}



/* Entry: 104ecf7ec; end: 104ecf7ef;  */

void FUN_104ecf7ec(void)

{
  return;
}



/* Entry: 104ecf7f0; end: 104ecf847;  */

void FUN_104ecf7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_5 + 0x20);
  func_0x00010c29fd40(*(undefined8 *)(lVar1 + 0x40));
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  *(undefined8 *)(lVar1 + 0x78) = param_2;
  *(undefined8 *)(lVar1 + 0x80) = param_3;
  *(undefined8 *)(lVar1 + 0x88) = param_4;
  func_0x00010c2bf200(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x40));
  *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x90) = param_1;
  func_0x00010bdf9b00(*(undefined8 *)(param_5 + 0x20));
  *(undefined1 *)(*(long *)(param_5 + 0x20) + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdf9ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x20),PTR_s__delayedLoadStateUpdate_11255c048);
  return;
}



/* Entry: 104ecf848; end: 104ecf857;  */

void FUN_104ecf848(void)

{
  return;
}



/* Entry: 104ecf858; end: 104ecf87f; -[SCMapVisualPlacesTrayController loadStateObservable] */

void FUN_104ecf858(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ecf880; end: 104ecf8a7; -[SCMapVisualPlacesTrayController storiesLoadedObservable] */

void FUN_104ecf880(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ecf8a8; end: 104ecf92b; -[SCMapVisualPlacesTrayController setTrayDetails:] */

void FUN_104ecf8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  _objc_release(uVar2);
  func_0x00010be840e0(param_1,param_2,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48);
  uVar2 = param_3;
  func_0x00010c0fd1a0();
  iVar1 = (int)uVar2;
  _CLLocationCoordinate2DIsValid();
  if (iVar1 == 0) {
    func_0x00010be10fa0(param_1,param_2,param_3);
  }
  else {
    func_0x00010be2e0a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ecf92c; end: 104ecf97f; -[SCMapVisualPlacesTrayController cleanup] */

void FUN_104ecf92c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf2e4c0(*(undefined8 *)(param_1 + 8));
  func_0x00010bed3fa0(param_1,param_2,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ecf980; end: 104ecf98b; -[SCMapVisualPlacesTrayController getCurrentVisibleBounds] */

undefined8 FUN_104ecf980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104ecf98c; end: 104ecf99f; -[SCMapVisualPlacesTrayController getCurrentZoomLevel] */

void FUN_104ecf98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR__OBJC_CLASS___NSNumber_1126ae570,
             PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 104ecf9a0; end: 104ecf9b3; -[SCMapVisualPlacesTrayController cameraProvider] */

undefined ** FUN_104ecf9a0(void)

{
  return &PTR___NSConcreteGlobalBlock_110858f30;
}



/* Entry: 104ecf9b4; end: 104ecfa8f; -[SCMapVisualPlacesTrayController handleInitialPositionChangeFromFullishToCollapsedTrayHeight:] */

void FUN_104ecf9b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c2bf200(*(undefined8 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d26a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8920();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar1 = PTR_PTR_1126b1e08;
  func_0x00010bf34640(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bfb3450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_flyToCoordinate_zoomLevel_mapVie_1125ca6b8,*(undefined8 *)(param_1 + 0x38)
             ,*(undefined8 *)(param_1 + 0x40),0);
  return;
}



/* Entry: 104ecfa90; end: 104ecfacb; -[SCMapVisualPlacesTrayController setPlacesBrowsingContext] */

void FUN_104ecfa90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf218e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dce60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ecfacc; end: 104ecfb2f; -[SCMapVisualPlacesTrayController dealloc] */

void FUN_104ecfacc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3a200();
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x60));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x50));
  puStack_28 = PTR_PTR_1126e4db0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ecfb30; end: 104ecfc27; -[SCMapVisualPlacesTrayController _publishLoadState:places:pivots:] */

void FUN_104ecfb30(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be2fac0(param_1);
  if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c0fd300(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed3fa0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar2;
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdf9ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__delayedLoadStateUpdate_11255c048);
  return;
}



/* Entry: 104ecfc28; end: 104ecfc6f; -[SCMapVisualPlacesTrayController _delayedLoadStateUpdate] */

void FUN_104ecfc28(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && ((*(byte *)(param_1 + 0xd0) & 1) == 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104ecfc70; end: 104ecfd47; -[SCMapVisualPlacesTrayController _setupReloadPlacesObserverWithReloadPlacesObservable:] */

void FUN_104ecfc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104ecfd48; end: 104ecfd73;  */

void FUN_104ecfd48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8aae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ecfd74; end: 104ecfe43; -[SCMapVisualPlacesTrayController _reloadPlaces] */

void FUN_104ecfd74(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ecfe44;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 104ecfe44; end: 104ecfe77;  */

void FUN_104ecfe44(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c219da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ecfe78; end: 104ecff4f; -[SCMapVisualPlacesTrayController _setupPlaceStoryThumbnailsObserverWithPlaceStoryThumbnailsObservable:] */

void FUN_104ecfe78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104ecff50; end: 104ecff97;  */

void FUN_104ecff50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ecff98; end: 104ed010f; -[SCMapVisualPlacesTrayController _delayedUpdatePlaceThumbnailDataForPlaceID:thumbnailData:trayDetails:] */

void FUN_104ecff98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 200));
  lVar1 = *(long *)(param_1 + 0xf0);
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == lVar2) {
    lVar3 = *(long *)(param_1 + 0xf8);
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_58,param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_104ed0110;
      puStack_68 = &UNK_1108434b0;
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x0001000d76cc("APPSTORE",&puStack_80);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_104ed00c0;
    }
  }
  else {
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bde0c00(param_1);
LAB_104ed00c0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ed0110; end: 104ed0183;  */

void FUN_104ed0110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0xc0));
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3fd3333333333333,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s__updatePlaceThumbnailsData_1125269f0,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined **)(param_1 + 0xc0) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed0184; end: 104ed02a7; -[SCMapVisualPlacesTrayController _updatePlaceThumbnailsData] */

void FUN_104ed0184(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = *(long *)(param_1 + 200);
  _objc_retain(lVar2);
  lVar1 = *(long *)(param_1 + 0xf8);
  func_0x00010bf529e0();
  if ((lVar1 != 0) && (lVar1 = lVar2, func_0x00010bf529e0(), lVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    _objc_retain(lVar2);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0b8600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde0c00(param_1);
    func_0x00010be840e0(param_1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 104ed02a8; end: 104ed063f;  */

void FUN_104ed02a8(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  lVar11 = *(long *)(param_2 + 0x20);
  puVar1 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar11 == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010be7fb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a1c0();
    lVar3 = lVar11;
    func_0x00010c259360(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e71a0(uVar2);
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfd7e20(lVar11);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a60e0(uVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1e10;
    _objc_alloc();
    puVar4 = param_3;
    func_0x00010c0fd0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0(param_3);
    uVar12 = param_1;
    func_0x00010c09abe0(param_3);
    puVar5 = param_3;
    func_0x00010bf20ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010c09e640(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010c09e480(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010c09e400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010bfe5be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072ac0();
    puVar10 = param_3;
    func_0x00010c119ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036460(param_1,uVar12,puVar1);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c0fd340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc620(puVar1);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c112bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2920(puVar1);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c0e9e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d52c0(puVar1);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c0870c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7020(puVar1);
    _objc_release(puVar4);
    lVar3 = lVar11;
    func_0x00010c111f00(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20dd00(puVar1);
    _objc_release(lVar3);
    puVar4 = param_3;
    func_0x00010bfa1320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a7a0(puVar1);
    _objc_release(puVar4);
    param_2 = param_2 + 0x30;
    _objc_loadWeakRetained(param_2);
    func_0x00010be30fa0();
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar11);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed0640; end: 104ed082f; -[SCMapVisualPlacesTrayController _refreshPlaceDiscoveryTrayData] */

void FUN_104ed0640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = (undefined *)(param_5 + 0x108);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bef07e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
LAB_104ed07e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  bVar1 = *(byte *)(param_5 + 0x58);
  _objc_release();
  _objc_release(puVar3);
  if ((bVar1 & 1) == 0) {
    func_0x00010c29fd40(*(undefined8 *)(param_5 + 0x40));
    iVar2 = (int)*(undefined8 *)(param_5 + 0x40);
    func_0x00010c2bf200();
    func_0x000106877220(*(undefined8 *)(param_5 + 0x98),*(undefined8 *)(param_5 + 0xa0),
                        *(undefined8 *)(param_5 + 0xa8),*(undefined8 *)(param_5 + 0xb0),param_1,
                        param_2,param_3,param_4);
    if ((iVar2 != 0) && (lVar5 = param_5, func_0x00010bdcf2a0(), (int)lVar5 != 0)) {
      lVar5 = param_5 + 0x108;
      _objc_loadWeakRetained();
      lVar6 = lVar5;
      func_0x00010bef07e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        func_0x00010beddd80(param_5);
        puVar3 = PTR_PTR_1126b1e18;
        _objc_alloc(PTR_PTR_1126b1e18);
        uVar7 = *(undefined8 *)(param_5 + 0xf0);
        func_0x00010c0fd300(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_5 + 0xf0);
        func_0x00010c0e9800(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_5 + 0xf0);
        func_0x00010c247b60();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_5 + 0xf0);
        func_0x00010bfb4260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0366e0(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                            *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),
                            puVar3,param_6,uVar7,0,0,1,0,uVar8,uVar9,uVar10);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        func_0x00010c219da0(param_5,param_6,puVar3);
        goto LAB_104ed07e4;
      }
    }
  }
  return;
}



/* Entry: 104ed0830; end: 104ed09d7; -[SCMapVisualPlacesTrayController _handlePlaceLocationInTrayDetails:] */

void FUN_104ed0830(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  uVar3 = param_5;
  func_0x00010c0fd1a0();
  iVar1 = (int)uVar3;
  _CLLocationCoordinate2DIsValid();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c0d26a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8920();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,param_3);
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c0fd1a0(param_5);
    dVar5 = param_1;
    func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x40));
    dVar4 = dVar5;
    func_0x00010c0fc7c0(*(undefined8 *)(param_3 + 0x40));
    if (dVar5 == 0.0) {
      dVar5 = 10.0;
    }
    _objc_retain(param_5);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bfb3460(param_1,param_2,dVar5,dVar4,0x3ff0000000000000,uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 104ed09d8; end: 104ed0b1f;  */

void FUN_104ed09d8(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b1e18;
  _objc_alloc(PTR_PTR_1126b1e18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fd300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c232380(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0640a0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1545c0(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b640(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9800(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c247b60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb4260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0366e0(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                      *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),puVar1,
                      param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c219da0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ed0b20; end: 104ed0bfb; -[SCMapVisualPlacesTrayController _handleSearchButtonDisplay:] */

void FUN_104ed0b20(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x108;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1542e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104ed0bfc;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(lVar2);
  lStack_50 = lVar2;
  uStack_40 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(lStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 104ed0bfc; end: 104ed0c83;  */

void FUN_104ed0bfc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_1 + 0x30);
    lVar3 = lVar2 + 0x108;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bef07e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf5fb20();
    func_0x00010c289840(uVar6,param_2,uVar1,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ed0c84; end: 104ed0ddf; -[SCMapVisualPlacesTrayController _fetchDiscoveryPlacesForTrayDetails:] */

void FUN_104ed0c84(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  double dStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  *(long *)(param_2 + 0x110) = (long)param_1;
  func_0x00010bde0c00(param_2);
  _objc_initWeak(auStack_48,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  dStack_50 = param_1;
  func_0x00010bfa6620(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}


