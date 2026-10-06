/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a55b6c; end: 107a55d4f; -[SCSingleLongformShowOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_107a55b6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    lVar1 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010c084580();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(param_1);
      if (lVar2 != 0) {
        _objc_retain(param_4);
        _objc_retain(param_3);
        _objc_retain(param_5);
        _objc_retain(param_4);
        _objc_retain(param_5);
        func_0x00010c0bebc0(lVar2);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_5);
        _objc_release(param_3);
        _objc_release(param_4);
        _objc_release(lVar2);
        goto LAB_107a55d1c;
      }
    }
    (**(code **)(param_5 + 0x10))(param_5,1,0,6);
  }
LAB_107a55d1c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a55d50; end: 107a55e8f;  */

void FUN_107a55d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010be12480(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a55e90; end: 107a55f07;  */

void FUN_107a55e90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be789e0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a55f08; end: 107a56107;  */

void FUN_107a55f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c11b4e0(lVar1,param_2,param_4,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1,0,6);
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23fec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c25a740(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11b420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23fec0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar6);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_initWeak(auStack_68,uVar4);
    _objc_initWeak(auStack_70,uVar5);
    _objc_retain(uVar9);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107a54458;
    puStack_90 = &UNK_1109f75f8;
    uStack_88 = uVar9;
    _objc_retain(uVar9);
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_copyWeak(auStack_78,auStack_68);
    ppuVar7 = &puStack_a8;
    _objc_retainBlock(ppuVar7);
    ppuVar8 = ppuVar7;
    _objc_retainBlock();
    _objc_release(ppuVar7);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_80);
    _objc_release(uStack_88);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    FUN_107ab72fc(lVar1,uVar2,uVar3,0,ppuVar8);
    _objc_release(ppuVar8);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a56108; end: 107a561cf; -[SCSingleLongformShowOperaDataSource _getDiscoverFeedStoryForPlaylistItem:] */

void FUN_107a56108(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010bf63e80(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x000107d005a8(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a561d0; end: 107a563df; -[SCSingleLongformShowOperaDataSource _createOperaItemAttributionInfoForPlaylistItem:] */

void FUN_107a561d0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  func_0x00010be1ea40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_107a563a8;
  }
  lVar2 = param_1;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c080120();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)lVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
  if (lVar3 == 0) {
    _objc_retain(ppuVar1);
    ppuVar4 = ppuVar1;
  }
  else {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db9f38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar2 = param_1;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar6 == 0) {
    lVar6 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) goto LAB_107a5632c;
    puVar7 = (undefined *)0x0;
  }
  else {
LAB_107a5632c:
    puVar7 = PTR_PTR_1126b2dc0;
    _objc_alloc(PTR_PTR_1126b2dc0);
    lVar2 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c084c40();
    func_0x00010bb14c74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ff20(puVar7,param_2,lVar6,lVar3,ppuVar4,0);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar4);
LAB_107a563a8:
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107a563e0; end: 107a5640b; -[SCSingleLongformShowOperaDataSource _prepareLongformMediaWithItemId:error:completion:] */

void FUN_107a563e0(void)

{
  long in_x3;
  long in_x4;
  
  if (in_x3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107a563f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x4 + 0x10))(in_x4,2,in_x3,6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107a56408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))(in_x4,0,0,6);
  return;
}



/* Entry: 107a5640c; end: 107a5657f; -[SCSingleLongformShowOperaDataSource _updatePlaybackErrorIfNecessary:itemId:] */

void FUN_107a5640c(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c08fa60();
  if (uVar1 == 0) goto LAB_107a56558;
  uVar1 = param_1;
  func_0x00010c084560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  if (param_3 == uVar2) {
    _objc_release(uVar2);
    uVar1 = param_3;
LAB_107a5654c:
    _objc_release(uVar1);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
LAB_107a564d4:
      uVar1 = param_1;
      func_0x00010c084560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar1);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107a56580;
      puStack_58 = &UNK_110841f80;
      uStack_50 = param_1;
      _objc_retain(param_4);
      uStack_48 = param_4;
      func_0x0001000d76cc("APPSTORE",&puStack_70);
      uVar1 = uStack_48;
      goto LAB_107a5654c;
    }
    uVar1 = param_3;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    _objc_release(param_3);
    if ((uVar1 & 1) == 0) goto LAB_107a564d4;
  }
  _objc_release(uVar2);
LAB_107a56558:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a56580; end: 107a565b7;  */

void FUN_107a56580(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c101400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a565b8; end: 107a566f7; -[SCSingleLongformShowOperaDataSource _fetchLongformMediaWithLongformSnap:completion:] */

void FUN_107a565b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c235840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf398e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0b5280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c25c9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d3a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_107a42208(param_3,uVar2,uVar3,uVar4,1,500,0xb,uVar5,param_1,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a566f8; end: 107a566fb; -[SCSingleLongformShowOperaDataSource removeMediaForItem:] */

void FUN_107a566f8(void)

{
  return;
}



/* Entry: 107a566fc; end: 107a56993; -[SCSingleLongformShowOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107a566fc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    puVar1 = PTR_PTR_1126c9a80;
    _objc_opt_class(PTR_PTR_1126c9a80);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,0);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0d3c80();
      _objc_release(puVar1);
      lVar4 = param_1;
      func_0x00010bdf0d00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        func_0x00010c1d0640(puVar3);
      }
      func_0x00010bf63e00();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        (**(code **)(param_6 + 0x10))(param_6,0,0);
      }
      else {
        _objc_retain(param_4);
        _objc_retain(puVar3);
        _objc_retain(param_6);
        _objc_retain(param_1);
        _objc_retain(param_6);
        _objc_retain(puVar3);
        func_0x00010c0bebc0(param_1);
        _objc_release(puVar3);
        _objc_release(param_6);
        _objc_release(param_1);
        _objc_release(param_6);
        _objc_release(puVar3);
        _objc_release(param_4);
      }
      _objc_release(param_1);
      _objc_release(lVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_3 + 0x20);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010c08fa60();
  if (lVar12 == 0) {
    _objc_release(lVar4);
  }
  else {
    lVar5 = *(long *)(param_3 + 0x28);
    func_0x00010c084560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar12 != 0) {
      lVar12 = *(long *)(param_3 + 0x30);
      func_0x00010c0d3c80();
      lVar5 = *(long *)(param_3 + 0x28);
      func_0x00010c084560();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar1 = PTR____NSDictionary0__struct_11034ab58;
      if (lVar4 != 0) {
        lVar7 = lVar4;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126ba158;
        func_0x00010bf87dc0(PTR_PTR_1126ba158);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c0720c0();
        if ((int)lVar8 == 0) {
          _objc_release(puVar1);
          _objc_release(lVar7);
LAB_107a56c18:
          lVar7 = lVar4;
          func_0x00010bf87dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0720c0();
          ppuVar9 = &PTR____CFConstantStringClassReference_110db3738;
          if ((int)lVar8 == 0) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110dad758;
          }
          func_0x00010bcbeaa8(ppuVar9,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          ppuVar10 = &PTR____CFConstantStringClassReference_110e49a38;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a38,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110e49a58;
        }
        else {
          lVar8 = lVar4;
          func_0x00010bf3ec40();
          _objc_release(puVar1);
          _objc_release(lVar7);
          if (lVar8 != 0x66) goto LAB_107a56c18;
          ppuVar9 = &PTR____CFConstantStringClassReference_110dad758;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = &PTR____CFConstantStringClassReference_110e49a78;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a78,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110e49a98;
        }
        func_0x00010bcbeaa8(ppuVar11,0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar11);
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
      }
      _objc_release(lVar4);
      func_0x00010bef7f60(lVar12);
      _objc_release(puVar1);
      _objc_release(lVar4);
      _objc_release(uVar6);
      _objc_release(lVar5);
      (**(code **)(*(long *)(param_3 + 0x38) + 0x10))(*(long *)(param_3 + 0x38),lVar12,0);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return;
      }
      goto LAB_107a56de4;
    }
  }
  lVar12 = *(long *)(param_3 + 0x38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000107a56bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x10))(lVar12,*(undefined8 *)(param_3 + 0x30),0);
    return;
  }
LAB_107a56de4:
  ___stack_chk_fail();
  lVar4 = *(long *)(lVar12 + 0x20);
  func_0x00010c11b4e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    (**(code **)(*(long *)(lVar12 + 0x38) + 0x10))
              (*(long *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x30),0);
  }
  else {
    uVar6 = *(undefined8 *)(lVar12 + 0x20);
    func_0x00010c23fec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar4;
    FUN_107ab7860(lVar4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar5 = lVar13;
    func_0x00010c0c5400();
    if ((int)lVar5 == 0) {
      (**(code **)(*(long *)(lVar12 + 0x38) + 0x10))
                (*(long *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x30),0);
    }
    else {
      uVar6 = *(undefined8 *)(lVar12 + 0x20);
      lVar12 = lVar13;
      func_0x00010bfbbc80(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar12;
      func_0x00010c23ffa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0d980(uVar6);
      _objc_release(lVar5);
      _objc_release(lVar12);
    }
    _objc_release(lVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107a56994; end: 107a56de7;  */

void FUN_107a56994(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c084560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      func_0x00010c0d3c80();
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c084560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar6 = PTR____NSDictionary0__struct_11034ab58;
      if (lVar1 != 0) {
        lVar5 = lVar1;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126ba158;
        func_0x00010bf87dc0(PTR_PTR_1126ba158);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c0720c0();
        if ((int)lVar7 == 0) {
          _objc_release(puVar6);
          _objc_release(lVar5);
LAB_107a56c18:
          lVar5 = lVar1;
          func_0x00010bf87dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar5;
          func_0x00010c0720c0();
          ppuVar8 = &PTR____CFConstantStringClassReference_110db3738;
          if ((int)lVar7 == 0) {
            ppuVar8 = &PTR____CFConstantStringClassReference_110dad758;
          }
          func_0x00010bcbeaa8(ppuVar8,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          ppuVar9 = &PTR____CFConstantStringClassReference_110e49a38;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a38,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = &PTR____CFConstantStringClassReference_110e49a58;
        }
        else {
          lVar7 = lVar1;
          func_0x00010bf3ec40();
          _objc_release(puVar6);
          _objc_release(lVar5);
          if (lVar7 != 0x66) goto LAB_107a56c18;
          ppuVar8 = &PTR____CFConstantStringClassReference_110dad758;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = &PTR____CFConstantStringClassReference_110e49a78;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a78,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = &PTR____CFConstantStringClassReference_110e49a98;
        }
        func_0x00010bcbeaa8(ppuVar10,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
      }
      _objc_release(lVar1);
      func_0x00010bef7f60(lVar4);
      _objc_release(puVar6);
      _objc_release(lVar1);
      _objc_release(uVar3);
      _objc_release(lVar2);
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),lVar4,0);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return;
      }
      goto LAB_107a56de4;
    }
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000107a56bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x10))(lVar4,*(undefined8 *)(param_1 + 0x30),0);
    return;
  }
LAB_107a56de4:
  ___stack_chk_fail();
  lVar1 = *(long *)(lVar4 + 0x20);
  func_0x00010c11b4e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x38) + 0x10))
              (*(long *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x30),0);
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    func_0x00010c23fec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    FUN_107ab7860(lVar1,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar2 = lVar11;
    func_0x00010c0c5400();
    if ((int)lVar2 == 0) {
      (**(code **)(*(long *)(lVar4 + 0x38) + 0x10))
                (*(long *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x30),0);
    }
    else {
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      lVar4 = lVar11;
      func_0x00010bfbbc80(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c23ffa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0d980(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar4);
    }
    _objc_release(lVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a56de8; end: 107a56ef7;  */

void FUN_107a56de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c11b4e0(lVar1,param_2,param_4,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23fec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    FUN_107ab7860(lVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = lVar3;
    func_0x00010c0c5400();
    if ((int)lVar4 == 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
                (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),0);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = lVar3;
      func_0x00010bfbbc80(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c23ffa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0d980(uVar2);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a56ef8; end: 107a5708f; -[SCSingleLongformShowOperaDataSource _didTapRetryButtonWithPage:params:] */

void FUN_107a56ef8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126c9a80;
    _objc_opt_class(PTR_PTR_1126c9a80);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      func_0x00010c0bebc0(uVar2);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a57090; end: 107a571c3;  */

void FUN_107a57090(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010be12480(uVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a571c4; end: 107a57237;  */

void FUN_107a571c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29a460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd360(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a57238; end: 107a5731f; -[SCSingleLongformShowOperaDataSource _didReceiveMediaFailsToDisplayWithPage:params:] */

void FUN_107a57238(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126c9310;
  _objc_retain(param_4);
  func_0x00010c0b5560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c120300(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010bedd360(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a57320; end: 107a5754b; -[SCSingleLongformShowOperaDataSource _extraPropertiesForSnapPlayableDataModel:fullSnapDocDataModel:snap:completion:] */

void FUN_107a57320(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_4);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010c11b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c240380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c23fe00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_107b8dc40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c23fe00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_retain(puVar2);
  func_0x00010bfc87a0(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(param_1);
  if (param_6 != 0) {
    puVar1 = puVar2;
    func_0x00010bf51e00(puVar2);
    uVar7 = 0;
    func_0x00010bf51e00(0);
    param_2 = puVar1;
    (**(code **)(param_6 + 0x10))(param_6,puVar1,uVar7);
    _objc_release(uVar7);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bef7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_addEntriesFromDictionary__11259b980,param_2);
  return;
}



/* Entry: 107a5754c; end: 107a57557;  */

void FUN_107a5754c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addEntriesFromDictionary__11259b980,param_2);
  return;
}



/* Entry: 107a57558; end: 107a5756f; -[SCSingleLongformShowOperaDataSource playlistItemController] */

void FUN_107a57558(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a57570; end: 107a5757b; -[SCSingleLongformShowOperaDataSource setPlaylistItemController:] */

void FUN_107a57570(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107a5757c; end: 107a57583; -[SCSingleLongformShowOperaDataSource storyPlayableDataModel] */

undefined8 FUN_107a5757c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a57584; end: 107a5758b; -[SCSingleLongformShowOperaDataSource show] */

undefined8 FUN_107a57584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a5758c; end: 107a575bb; -[SCSingleLongformShowOperaDataSource setShow:] */

void FUN_107a5758c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a575bc; end: 107a575c3; -[SCSingleLongformShowOperaDataSource publisherPagePropertiesManager] */

undefined8 FUN_107a575bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a575c4; end: 107a575f3; -[SCSingleLongformShowOperaDataSource setPublisherPagePropertiesManager:] */

void FUN_107a575c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a575f4; end: 107a575fb; -[SCSingleLongformShowOperaDataSource subscriptionStore] */

undefined8 FUN_107a575f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a575fc; end: 107a5762b; -[SCSingleLongformShowOperaDataSource setSubscriptionStore:] */

void FUN_107a575fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a5762c; end: 107a57633; -[SCSingleLongformShowOperaDataSource subscriptionSession] */

undefined8 FUN_107a5762c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a57634; end: 107a57663; -[SCSingleLongformShowOperaDataSource setSubscriptionSession:] */

void FUN_107a57634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a57664; end: 107a5766b; -[SCSingleLongformShowOperaDataSource snapDocConfigurer] */

undefined8 FUN_107a57664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107a5766c; end: 107a5769b; -[SCSingleLongformShowOperaDataSource setSnapDocConfigurer:] */

void FUN_107a5766c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a5769c; end: 107a576a3; -[SCSingleLongformShowOperaDataSource snapIdToPublisherSnapPlayableDataModel] */

undefined8 FUN_107a5769c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107a576a4; end: 107a576ab; -[SCSingleLongformShowOperaDataSource setSnapIdToPublisherSnapPlayableDataModel:] */

void FUN_107a576a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a576ac; end: 107a576b3; -[SCSingleLongformShowOperaDataSource itemIdToSnap] */

undefined8 FUN_107a576ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107a576b4; end: 107a576bb; -[SCSingleLongformShowOperaDataSource setItemIdToSnap:] */

void FUN_107a576b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a576bc; end: 107a576c3; -[SCSingleLongformShowOperaDataSource longformMediaPrefetcher] */

undefined8 FUN_107a576bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107a576c4; end: 107a576f3; -[SCSingleLongformShowOperaDataSource setLongformMediaPrefetcher:] */

void FUN_107a576c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a576f4; end: 107a576fb; -[SCSingleLongformShowOperaDataSource streamingURLProvider] */

undefined8 FUN_107a576f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107a576fc; end: 107a5772b; -[SCSingleLongformShowOperaDataSource setStreamingURLProvider:] */

void FUN_107a576fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a5772c; end: 107a57733; -[SCSingleLongformShowOperaDataSource viewLocation] */

undefined8 FUN_107a5772c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107a57734; end: 107a5773b; -[SCSingleLongformShowOperaDataSource setViewLocation:] */

void FUN_107a57734(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107a5773c; end: 107a57743; -[SCSingleLongformShowOperaDataSource itemIdToError] */

undefined8 FUN_107a5773c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107a57744; end: 107a57773; -[SCSingleLongformShowOperaDataSource setItemIdToError:] */

void FUN_107a57744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a57774; end: 107a5777b; -[SCSingleLongformShowOperaDataSource storySessionId] */

undefined8 FUN_107a57774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107a5777c; end: 107a577ab; -[SCSingleLongformShowOperaDataSource setStorySessionId:] */

void FUN_107a5777c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a577ac; end: 107a577b3; -[SCSingleLongformShowOperaDataSource circumstanceEngine] */

undefined8 FUN_107a577ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107a577b4; end: 107a577e3; -[SCSingleLongformShowOperaDataSource setCircumstanceEngine:] */

void FUN_107a577b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a577e4; end: 107a577eb; -[SCSingleLongformShowOperaDataSource performer] */

undefined8 FUN_107a577e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107a577ec; end: 107a5781b; -[SCSingleLongformShowOperaDataSource setPerformer:] */

void FUN_107a577ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a5781c; end: 107a57823; -[SCSingleLongformShowOperaDataSource lazyContentObjectResolver] */

undefined8 FUN_107a5781c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107a57824; end: 107a57853; -[SCSingleLongformShowOperaDataSource setLazyContentObjectResolver:] */

void FUN_107a57824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a57854; end: 107a5785b; -[SCSingleLongformShowOperaDataSource lazyDiscoverFeedDataFetcher] */

undefined8 FUN_107a57854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107a5785c; end: 107a5788b; -[SCSingleLongformShowOperaDataSource setLazyDiscoverFeedDataFetcher:] */

void FUN_107a5785c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a5788c; end: 107a5796b; -[SCSingleLongformShowOperaDataSource .cxx_destruct] */

void FUN_107a5788c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a5796c; end: 107a57a2f; -[SCDeeplinkSendToScope initWithUIContainer:configuration:delegate:] */

undefined1 *
FUN_107a5796c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f9770;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a57a30; end: 107a57a37; -[SCDeeplinkSendToScope uiContainer] */

undefined8 FUN_107a57a30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a57a38; end: 107a57a3f; -[SCDeeplinkSendToScope configuration] */

undefined8 FUN_107a57a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a57a40; end: 107a57a57; -[SCDeeplinkSendToScope delegate] */

void FUN_107a57a40(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a57a58; end: 107a57a63; -[SCDeeplinkSendToScope setDelegate:] */

void FUN_107a57a58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107a57a64; end: 107a57a9b; -[SCDeeplinkSendToScope .cxx_destruct] */

void FUN_107a57a64(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a57a9c; end: 107a57b33; +[SCDeeplinkSendToConfiguration commerceWithUrl:image:] */

void FUN_107a57a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1b28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a57b34; end: 107a57bcb; +[SCDeeplinkSendToConfiguration lensCollectionWithUrl:imageFuture:] */

void FUN_107a57b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1b28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a57bcc; end: 107a57c97; +[SCDeeplinkSendToConfiguration lensWithUrl:lensMetadata:imageFuture:snapSource:] */

void FUN_107a57bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1b28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a57c98; end: 107a57d2f; +[SCDeeplinkSendToConfiguration mapPlaceWithUrl:image:] */

void FUN_107a57c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1b28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a57d30; end: 107a57e33; +[SCDeeplinkSendToConfiguration publisherWithUrl:image:snapSource:posterId:snapId:] */

void FUN_107a57d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b1b28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x50) = param_5;
  *(undefined8 *)(puVar2 + 0x58) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a57e34; end: 107a57e57; -[SCDeeplinkSendToConfiguration copyWithZone:] */

undefined8 FUN_107a57e34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a57e58; end: 107a57f6b; -[SCDeeplinkSendToConfiguration hash] */

void FUN_107a57e58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x28);
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  lStack_88 = -lVar1;
  if (-1 < lVar1) {
    lStack_88 = lVar1;
  }
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x50);
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  lStack_60 = -lVar1;
  if (-1 < lVar1) {
    lStack_60 = lVar1;
  }
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_a8;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_d8 = PTR_PTR_1126f9778;
  puStack_e0 = puVar4;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a57f6c; end: 107a57faf; -[SCDeeplinkSendToConfiguration internalInit] */

void FUN_107a57f6c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9778;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a57fb0; end: 107a5818f; -[SCDeeplinkSendToConfiguration isEqual:] */

long FUN_107a57fb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a58168:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a58174;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x60);
                      if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x68);
                        if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x70);
                          if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x78);
                            if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x80);
                              if (lVar3 != *(long *)(param_3 + 0x80)) {
                                func_0x00010c071ae0();
                                goto LAB_107a58174;
                              }
                              goto LAB_107a58168;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a58174:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a58190; end: 107a582c3; -[SCDeeplinkSendToConfiguration matchLens:commerce:publisher:lensCollection:mapPlace:] */

void FUN_107a58190(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
      goto LAB_107a5828c;
    }
    if ((lVar3 != 1) || (param_4 == 0)) goto LAB_107a5828c;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
  }
  else {
    if (lVar3 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                   *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(param_1 + 0x60));
      }
      goto LAB_107a5828c;
    }
    if (lVar3 == 3) {
      if (param_6 == 0) goto LAB_107a5828c;
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    else {
      if ((lVar3 != 4) || (param_7 == 0)) goto LAB_107a5828c;
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      pcVar4 = *(code **)(param_7 + 0x10);
      lVar3 = param_7;
    }
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_107a5828c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a582c4; end: 107a583cb; -[SCDeeplinkSendToConfiguration .cxx_destruct] */

void FUN_107a582c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a583cc; end: 107a584ab;  */

void FUN_107a583cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar1 = uRam0000000113727390;
  uRam0000000113727390 = uVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55d80();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uRam0000000113727390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ecdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107a584ac; end: 107a584b3; +[SCMediaFileManager saveData_DEPRECATED:toMediaDirectoryWithFilename:error:] */

void FUN_107a584ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14a390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveData_DEPRECATED_toMediaDirec_112630300);
  return;
}



/* Entry: 107a584b4; end: 107a5857b; +[SCMediaFileManager saveData_DEPRECATED:toMediaDirectoryWithFilename:error:persistentStorage:] */

undefined8
FUN_107a584b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bfad1e0(param_1,param_2,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb520();
  puVar1 = auStack_48;
  if (param_5 != (undefined1 *)0x0) {
    puVar1 = param_5;
  }
  func_0x00010bf54c20(param_1,param_2,param_4,param_6);
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x00010c14e080(param_3,param_2,uVar2,0x10000001,puVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 107a5857c; end: 107a58737; +[SCMediaFileManager moveItemAtPath_DEPRECATED:toMediaDirectoryWithFilename:error:] */

undefined *
FUN_107a5857c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010bfad1c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfacbe0(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    puVar1 = &uStack_68;
    if (param_5 != (undefined8 *)0x0) {
      puVar1 = param_5;
    }
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfacbe0();
    _objc_release(puVar3);
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110eaa738,
                          &PTR____CFConstantStringClassReference_110eaa758,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar5 = (undefined *)0x0;
      *puVar1 = puVar3;
    }
    else {
      func_0x00010bf54c20(param_1,param_2,param_4,0);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0f5800(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0d1560(puVar3,param_2,param_3,uVar4,puVar1);
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
  }
  else {
    puVar5 = (undefined *)0x1;
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 107a58738; end: 107a5873f; +[SCMediaFileManager removeDataWithFilename_DEPRECATED:error:] */

void FUN_107a58738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removeDataWithFilename_DEPRECATE_112628988,param_3,param_4,0);
  return;
}



/* Entry: 107a58740; end: 107a58823; +[SCMediaFileManager removeDataWithFilename_DEPRECATED:error:persistentStorage:] */

undefined * FUN_107a58740(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bfad1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bfacbe0(puVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(puVar3);
  if ((int)puVar2 == 0) {
    puVar3 = (undefined *)0x1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c12cc60();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 107a58824; end: 107a589ff; +[SCMediaFileManager removeExpiredMediaForOwners_DEPRECATED:] */

void FUN_107a58824(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      puVar5 = PTR_s_mediaFileNames_11260edd8;
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(ulong *)(lStack_128 + lVar8 * 8);
        uVar3 = uVar6;
        _objc_opt_respondsToSelector(uVar6,puVar5);
        if ((uVar3 & 1) != 0) {
          func_0x00010c0c4f00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c280520(puVar1);
          _objc_release(uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_107a58a00;
  puStack_148 = &UNK_110848c48;
  puStack_140 = puVar1;
  uStack_138 = param_1;
  _objc_retain(puVar1);
  func_0x00010007380c(uVar4,&puStack_160);
  _objc_release(uVar4);
  _objc_release(puStack_140);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c320(*(undefined8 *)(param_3 + 0x28));
  puVar5 = puVar1;
  func_0x00010bf64e40(0xc122750000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c320(*(undefined8 *)(param_3 + 0x28));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a58a00; end: 107a58a83;  */

void FUN_107a58a00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c320(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),puVar1
                      ,0);
  puVar2 = puVar1;
  func_0x00010bf64e40(0xc122750000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c320(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),puVar2
                      ,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a58a84; end: 107a58ccf; +[SCMediaFileManager removeExpiredMediaWithValidFilenames:creationDate:persistentStorage:] */

void FUN_107a58a84(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar9 = param_1;
  func_0x00010bf15f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar5 = param_3;
      func_0x00010bf4b900();
      if ((uVar5 & 1) == 0) {
        uVar6 = uVar9;
        func_0x00010c25ce00(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bf0e880();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfacae0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        if ((puVar8 == (undefined *)0x0) ||
           (puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770, func_0x00010c070260(), (int)puVar7 != 0)) {
          func_0x00010c12bda0(param_1);
        }
        _objc_release(puVar8);
        _objc_release(uVar6);
      }
      puVar11 = puVar11 + 1;
    } while (puVar4 != puVar11);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar9);
  return;
}



/* Entry: 107a58cd0; end: 107a58d4b; +[SCMediaFileManager clear_DEPRECATED] */

void FUN_107a58cd0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107a58d4c; end: 107a58dbb;  */

void FUN_107a58d4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = param_1;
  func_0x000107a58378();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3af40(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_107a59324();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3af40(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a58dbc; end: 107a58f7b; +[SCMediaFileManager clearContentsOfDirectoryAtPath_DEPRECATED:] */

/* WARNING: Removing unreachable block (ram,0x000107a58e3c) */

undefined8 FUN_107a58dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar5 = param_3;
      func_0x00010c25ce00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc40(puVar2);
      _objc_release(uVar5);
      puVar7 = puVar7 + 1;
    } while (puVar4 != puVar7);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfacc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return param_3;
  }
  return 1;
}



/* Entry: 107a58f7c; end: 107a58f83; +[SCMediaFileManager fileExistsWithFilename_DEPRECATED:] */

void FUN_107a58f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfacc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fileExistsWithFilename_DEPRECATE_1125c8cc0,param_3,0);
  return;
}



/* Entry: 107a58f84; end: 107a5900b; +[SCMediaFileManager fileExistsWithFilename_DEPRECATED:persistentStorage:] */

undefined * FUN_107a58f84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bfad1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 107a5900c; end: 107a5909f; +[SCMediaFileManager contentsOfDirectory_DEPRECATED:persistentStorage:] */

void FUN_107a5900c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bfad1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4dfc0(puVar1,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a590a0; end: 107a591b7; +[SCMediaFileManager createBaseDirectoryIfNecessary:persistentStorage:] */

void FUN_107a590a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 1) {
    lVar1 = param_3;
    func_0x00010c0f5860(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf15f60(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c25ce00(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55d80(puVar3,param_2,uVar4,1,0,0);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a591b8; end: 107a591bf; +[SCMediaFileManager fileURLForFilename_DEPRECATED:] */

void FUN_107a591b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fileURLForFilename_DEPRECATED_pe_1125c8e20,param_3,0);
  return;
}



/* Entry: 107a591c0; end: 107a5925f; +[SCMediaFileManager fileURLForFilename_DEPRECATED:persistentStorage:] */

void FUN_107a591c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bf15f60(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfad320(puVar2,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a59260; end: 107a592f3; +[SCMediaFileManager fileURLForFilenameIfExists_DEPRECATED:persistentStorage:] */

void FUN_107a59260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010bfad1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfacbe0(puVar2,param_2,uVar3);
  uVar1 = param_1;
  if ((int)puVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a592f4; end: 107a59323; +[SCMediaFileManager baseDirectoryForPersistentStorage:] */

void FUN_107a592f4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x000107a58378();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107a59324();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a59324; end: 107a59377;  */

void FUN_107a59324(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137273a8 != -1) {
    func_0x00010002a2fc(0x1137273a8,&PTR___NSConcreteGlobalBlock_1109f7798);
  }
  uVar1 = uRam00000001137273a0;
  _objc_retain(uRam00000001137273a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a59378; end: 107a59563;  */

void FUN_107a59378(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x107a594dc;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar4,&puStack_58);
  _objc_release(uVar4);
  uVar4 = uRam00000001137273a0;
  uRam00000001137273a0 = uVar1;
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010bf55dc0(PTR_PTR_1126b24e8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 107a59564; end: 107a596af;  */

undefined8 FUN_107a59564(ulong param_1)

{
  if ((long)param_1 < 0x17) {
    if ((long)param_1 < 0xb) {
      if (param_1 == 5) {
        return 2;
      }
      if (param_1 == 8) {
        return 0x12;
      }
    }
    else {
      if (param_1 == 0xb) {
        return 0;
      }
      if (param_1 == 0x15) {
        return 0x22;
      }
    }
  }
  else {
    if (param_1 < 0x2c) {
      if ((1L << (param_1 & 0x3f) & 0x6220000000U) != 0) {
        return 0;
      }
      if ((1L << (param_1 & 0x3f) & 0x1040000000U) != 0) {
        return 0x29;
      }
      if (param_1 == 0x2b) {
        return 2;
      }
    }
    if (param_1 == 0x17) {
      return 0x1c;
    }
    if (param_1 == 0x1a) {
      return 0x2a;
    }
  }
  return 5;
}



/* Entry: 107a596b0; end: 107a596bb; -[SCContextSpotlightDataServices .cxx_destruct] */

void FUN_107a596b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a596bc; end: 107a59737;  */

undefined * FUN_107a596bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137273b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eaa7b8,
                        &UNK_10dee0ce0,&UNK_10dee0cf8,3,FUN_107a59738,0);
    do {
      if (puRam00000001137273b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137273b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137273b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137273b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137273b0;
}



/* Entry: 107a59738; end: 107a59743;  */

bool FUN_107a59738(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107a59744; end: 107a597ab; +[SCCTXSpotlightWaveform descriptor] */

void FUN_107a59744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137273b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6c0f0,
                        &PTR____CFConstantStringClassReference_110eaa7d8,&PTR_DAT_11323dce0,
                        &PTR_DAT_11323dcf8,1,0x10,0x1c);
    puRam00000001137273b8 = puVar1;
  }
  return;
}


