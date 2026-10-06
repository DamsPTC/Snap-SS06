/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cef088; end: 107cef08b;  */

void FUN_107cef088(void)

{
  return;
}



/* Entry: 107cef08c; end: 107cef1bb;  */

void FUN_107cef08c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107cef1bc;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar1 = &puStack_80;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(ppuVar1);
  func_0x00010c0f9420(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107cef1bc; end: 107cef1e7;  */

void FUN_107cef1bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cef1e8; end: 107cef24b;  */

void FUN_107cef1e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be143e0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cef24c; end: 107cef293; -[SCUnifiedProfileSnapchatterProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_107cef24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f698f8);
  if ((int)param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be03d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispatchAnnounceSnapchatterUpda_11255e900)
    ;
    return;
  }
  return;
}



/* Entry: 107cef294; end: 107cef30b; -[SCUnifiedProfileSnapchatterProvider didUpdateFriendStorySettingWithUpdateRequest:success:] */

void FUN_107cef294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cef30c;
  puStack_20 = &UNK_110862228;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107cef34c;
  puStack_48 = &UNK_110862228;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bede0(param_3,param_2,&puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_110a079a8
                     );
  return;
}



/* Entry: 107cef30c; end: 107cef38b;  */

void FUN_107cef30c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be152c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cef38c; end: 107cef38f;  */

void FUN_107cef38c(void)

{
  return;
}



/* Entry: 107cef390; end: 107cef393; -[SCUnifiedProfileSnapchatterProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_107cef390(void)

{
  return;
}



/* Entry: 107cef394; end: 107cef47b; -[SCUnifiedProfileSnapchatterProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_107cef394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cef47c;
  puStack_20 = &UNK_110855640;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107cef4bc;
  puStack_48 = &UNK_110866ad0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x107cef4fc;
  puStack_70 = &UNK_110866b00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x107cef53c;
  puStack_98 = &UNK_110862228;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x107cef57c;
  puStack_c0 = &UNK_110851800;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bc6c0(param_3,param_2,&puStack_38,0,&puStack_60,0,&puStack_88,&puStack_b0,
                      &puStack_d8,0,0);
  return;
}



/* Entry: 107cef47c; end: 107cef5bb;  */

void FUN_107cef47c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be152c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cef5bc; end: 107cef637; -[SCUnifiedProfileSnapchatterProvider _dispatchAnnounceSnapchatterUpdate] */

void FUN_107cef5bc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107cef638; end: 107cef64f;  */

void FUN_107cef638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7eb8);
  return;
}



/* Entry: 107cef650; end: 107cef70f; -[SCUnifiedProfileSnapchatterProvider _fetchUpdatedSnapchatterIfAlreadyTracking:] */

void FUN_107cef650(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if ((puVar1 != (undefined *)0x0) &&
     (uVar2 = param_1, puVar4 = param_3, func_0x00010be347c0(), (int)uVar2 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010be14400(param_1);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_78,param_3);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c09d7c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(puVar4);
  return;
}



/* Entry: 107cef710; end: 107cef82b; -[SCUnifiedProfileSnapchatterProvider _fetchSnapchattersToTrackFriendStatus:] */

void FUN_107cef710(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c09d7c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cef82c; end: 107cef873;  */

void FUN_107cef82c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee04c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cef874; end: 107cefa5f; -[SCUnifiedProfileSnapchatterProvider _addSnapchatter:] */

void FUN_107cef874(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb740(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    lVar5 = *(long *)(param_1 + 0x38);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x107cef998;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010c0f9420(lVar5,param_2,&puStack_70);
    _objc_release(lStack_48);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_78 = 0x107cef998;
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x58);
  puStack_a0 = puVar2;
  lStack_98 = lVar5;
  lStack_90 = param_1;
  lStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x48);
  uVar3 = uVar4;
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar6,param_2,uVar4,uVar3);
  _objc_release(uVar3);
  uStack_a8 = *(undefined8 *)(lVar1 + 0x20);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107cefa60;
  puStack_b0 = &UNK_110842e18;
  func_0x00010be149e0(uStack_a8,param_2,&puStack_c8);
  return;
}



/* Entry: 107cefa60; end: 107cefa67;  */

void FUN_107cefa60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchAnnounceSnapchatterUpda_11255e900);
  return;
}



/* Entry: 107cefa68; end: 107cefb17; -[SCUnifiedProfileSnapchatterProvider _updateSnapchatters:] */

void FUN_107cefa68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befb740(*(undefined8 *)(param_1 + 8),param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107cefb18;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    lStack_40 = param_3;
    lStack_38 = param_1;
    func_0x00010c0f9420(uVar2,param_2,&puStack_60);
    func_0x00010be03d80(param_1);
    _objc_release(lStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cefb18; end: 107cefc4b;  */

void FUN_107cefb18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
        uVar2 = uVar5;
        func_0x00010c2923e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar6,param_2,uVar5,uVar2);
        _objc_release(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar4;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(lVar4 + 0x48);
  _objc_retain(puVar3);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar1;
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    (**(code **)((long)puVar3 + 0x10))(puVar3);
  }
  else {
    func_0x00010be143e0(lVar4,param_2,lVar1,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 107cefc4c; end: 107cefd23; -[SCUnifiedProfileSnapchatterProvider _fetchStoryInfoForSnapchattersWithCompletion:] */

void FUN_107cefc4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x00010be143e0(param_1,param_2,lVar1,param_3);
  }
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 107cefd24; end: 107cefd83;  */

bool FUN_107cefd24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 107cefd84; end: 107cefe1b; -[SCUnifiedProfileSnapchatterProvider _addLoadingSnapchatterId:] */

void FUN_107cefd84(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107cefe1c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f9420(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cefe1c; end: 107cefe27;  */

void FUN_107cefe1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107cefe28; end: 107ceff07; -[SCUnifiedProfileSnapchatterProvider _isLoadingSnapchatterId:] */

undefined1 FUN_107cefe28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ceff08; end: 107ceff3b;  */

void FUN_107ceff08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010bf4b900(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 107ceff3c; end: 107ceffe3; -[SCUnifiedProfileSnapchatterProvider .cxx_destruct] */

void FUN_107ceff3c(long param_1)

{
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



/* Entry: 107ceffe4; end: 107cf001b;  */

void FUN_107ceffe4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107cf001c; end: 107cf0fcf;  */

undefined1 *
FUN_107cf001c(undefined *param_1,undefined *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,byte param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  double *pdVar11;
  undefined *puVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  uint uStack_1dc;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  
  puStack_160 = (undefined *)CONCAT44(puStack_160._4_4_,param_8);
  puStack_170 = (undefined *)CONCAT44(puStack_170._4_4_,param_3);
  uStack_1dc = (uint)param_12;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1d0 = param_5;
  uStack_1c8 = param_4;
  _objc_retain(param_2);
  uStack_168 = param_10;
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_9);
  uStack_1a0 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_1);
  puVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108f63554();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar3;
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x2020000000;
  uStack_f0 = 0;
  puVar2 = puVar1;
  func_0x00010bfb8280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107ceffe4;
  puStack_b0 = &UNK_11091a7f8;
  puStack_138 = &uStack_108;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x107cefff8;
  puStack_118 = &UNK_11091a828;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x107cf0008;
  puStack_140 = &UNK_11088eb38;
  puStack_110 = puStack_138;
  puStack_a8 = puStack_138;
  func_0x00010c0bdea0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((*(byte *)(puStack_100 + 3) & 1) == 0) {
    puStack_178 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d77a0;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb7818;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7818,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0265a0();
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x000108f63748();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar3;
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_108,8);
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puStack_178 == (undefined *)0x0) {
    if (((ulong)puVar5 & 1) == 0) {
      puStack_d0 = puStack_1d8;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = puVar1;
    }
    else {
      puStack_1b0 = PTR____NSArray0__struct_11034ab48;
    }
  }
  else if (((ulong)puVar5 & 1) == 0) {
    puStack_e8 = puStack_1d8;
    puStack_e0 = puStack_178;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar1;
  }
  else {
    puStack_d8 = puStack_178;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar1;
  }
  puVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06d560();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = param_2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b01c0;
    if (puVar2 == (undefined *)0x0) {
      puVar1 = param_2;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
      func_0x00010c244280(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x000107d53844(puVar1,puVar3,0,uStack_1c8,0x11,uStack_1d0);
      _objc_retainAutoreleasedReturnValue();
      puStack_1b8 = puVar12;
      _objc_release(puVar3);
    }
    else {
      puVar2 = param_2;
      func_0x00010c244280(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c294260(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b47b0;
      _objc_alloc(PTR_PTR_1126b47b0);
      func_0x00010bffd8e0();
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      puStack_1b8 = puVar3;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puStack_1b8 = (undefined *)0x0;
  }
  puVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = (undefined *)((ulong)puStack_230 & 0xffffffffffffff00);
  puVar2 = puVar1;
  func_0x000107d53bb4();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar2;
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(puVar1);
  uVar13 = uStack_168;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf1f3c0();
  _objc_release(uVar13);
  puVar1 = PTR_PTR_1126b01c0;
  if ((int)uVar15 == 0) {
    puStack_190 = (undefined *)0x0;
    puStack_188 = (undefined *)0x0;
  }
  else {
    puVar2 = param_2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b47b0;
    _objc_alloc(PTR_PTR_1126b47b0);
    func_0x00010bffd8e0();
    puVar12 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar2 = PTR_PTR_1126b40c8;
    puVar5 = param_2;
    puStack_188 = puVar12;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar12 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puStack_190 = puVar12;
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  puVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bef89a0(param_2);
  puStack_220 = puStack_188;
  puStack_218 = puStack_190;
  uStack_228 = uStack_168;
  puStack_230 = (undefined *)CONCAT62(puStack_230._2_6_,0x100);
  puStack_230 = (undefined *)CONCAT71(puStack_230._1_7_,(char)puStack_160);
  puVar3 = param_1;
  FUN_107cf2388(param_1,puVar1,puVar2,0x12,0x2e879d01,0xffffffff82ff33fa,0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar3;
  _objc_release(param_1);
  _objc_release();
  uVar13 = 0x4028000000000000;
  pdVar11 = (double *)PTR__CGSizeZero_110347620;
  if (((int)puStack_170 != 0) && (puStack_160 == (undefined *)0x0)) {
    func_0x000108f637bc();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = 0x4034000000000000;
    pdVar11 = (double *)&UNK_10dfb1010;
    puStack_160 = puVar1;
  }
  dVar16 = *pdVar11;
  dVar14 = pdVar11[1];
  puVar1 = param_2;
  func_0x00010c2596a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000108f62ef8(dVar16,dVar14,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar3;
  }
  else {
    puVar3 = puVar2;
    func_0x000108f62de4(dVar16,dVar14,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar3;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c08e740(puStack_170);
  uVar13 = param_11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_198 = uVar13;
  _objc_release(param_11);
  uVar13 = uStack_198;
  func_0x00010bf1f3c0();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar2;
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c2596a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  dVar19 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar17 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  dVar18 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  if (puVar2 == (undefined *)0x0) {
    if ((int)uVar13 == 0) {
      puStack_180 = (undefined *)0x0;
    }
    else {
      puVar1 = param_2;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010901ea30();
      _objc_retainAutoreleasedReturnValue();
      puStack_180 = puVar2;
      _objc_release(puVar1);
    }
    puVar1 = param_2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010901cdb0(puVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    puStack_1f8 = puVar1;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puStack_1f0 = puVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    puStack_200 = puVar2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = puStack_180;
    uStack_210 = 0;
    puStack_220 = (undefined *)CONCAT71(puStack_220._1_7_,1);
    uStack_228 = 0;
    puStack_230 = (undefined *)CONCAT35(puStack_230._5_3_,0x100000000);
    puVar10 = puStack_1f8;
    func_0x000108feb5c8(puStack_1f8,puStack_200,puVar2,puVar6,puVar9,0,uStack_1dc & (uint)puVar3,
                        puStack_1a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar12);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puStack_200);
    _objc_release(puStack_1f0);
    _objc_release(puStack_1f8);
    _objc_release(puStack_1e8);
    puVar1 = PTR_PTR_1126b41d8;
    _objc_alloc(PTR_PTR_1126b41d8);
    func_0x00010c01a700();
    puVar2 = PTR_PTR_1126b40a8;
    _objc_alloc(PTR_PTR_1126b40a8);
    puVar3 = param_2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0491a0(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar12);
    _objc_release(puVar3);
    puVar3 = param_2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c06d560();
    if (((ulong)puVar12 & 1) == 0) {
      puVar12 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
    }
    else {
      puVar12 = (undefined *)0x0;
    }
    _objc_release(puVar3);
    puVar3 = puStack_180;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010b816218();
      dVar17 = (double)(long)((dVar14 / 15.0) * dVar16) / dVar16;
      dVar19 = dVar17 + dVar17;
      uVar15 = 0;
      dVar18 = dVar17;
    }
    FUN_107cf465c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    FUN_107cf5f4c(dVar14,dVar14,dVar19,dVar17,uVar15,dVar18,puVar10,puVar3,puVar12,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar2);
    dVar17 = 0.0;
    uVar15 = 0x3ff99999a0000000;
    dVar19 = 21.600000381469727;
    dVar18 = 0.0;
    goto LAB_107cf0de0;
  }
  puVar1 = param_2;
  func_0x00010c2596a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfddf40();
  if ((int)puVar3 == 0) {
LAB_107cf0920:
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar12;
    if ((int)puVar3 != 0) goto LAB_107cf0940;
  }
  else {
    puVar2 = param_2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) goto LAB_107cf0920;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar3;
    _objc_release(puVar12);
LAB_107cf0940:
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c2596a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = (undefined *)0x0;
  puVar10 = puVar2;
  func_0x000107d0d3c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar1);
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126cc220;
  _objc_alloc(PTR_PTR_1126cc220);
  func_0x00010bff6300(dVar14,dVar14,dVar19,dVar17,uVar15,dVar18,0x3ff0000000000000);
LAB_107cf0de0:
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(puStack_180);
  puVar1 = PTR_PTR_1126cb048;
  _objc_alloc();
  func_0x00010bff5f60(dVar19,dVar17,uVar15,dVar18);
  _objc_release(puStack_1a8);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(uStack_198);
  puVar2 = PTR_PTR_1126b2c10;
  _objc_alloc();
  puVar3 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar12;
  func_0x000108f62f68();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puStack_1b0;
  func_0x000108f6340c();
  _objc_retainAutoreleasedReturnValue();
  uStack_210 = uStack_1a0;
  uStack_208 = 0;
  puStack_220 = (undefined *)0x0;
  puStack_218 = puStack_170;
  puStack_230 = puStack_1c0;
  uStack_228 = 0;
  puVar7 = puVar5;
  puVar8 = puVar6;
  func_0x00010c053700();
  _objc_release(uStack_1a0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puStack_170);
  _objc_release(puStack_160);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_178);
  _objc_release(puStack_1d8);
  _objc_release(uStack_168);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_108,8);
  puVar12 = param_2;
  __Unwind_Resume();
  ppuVar4 = &puStack_270;
  pcStack_238 = FUN_107cf0fd0;
  puStack_260 = puVar3;
  puStack_258 = puVar2;
  puStack_250 = puVar1;
  puStack_248 = param_2;
  puStack_240 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_268 = PTR_PTR_1126fa868;
  puStack_270 = puVar12;
  _objc_msgSendSuper2(&puStack_270,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    puVar1 = puVar7;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined **)((long)ppuVar4 + 8) = puVar1;
    _objc_release(uVar13);
    *(undefined **)((long)ppuVar4 + 0x10) = puVar8;
  }
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 107cf0fd0; end: 107cf1057; -[SCUnifiedProfileCallActionModel initWithRecipient:media:] */

undefined1 *
FUN_107cf0fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fa868;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cf1058; end: 107cf107b; -[SCUnifiedProfileCallActionModel copyWithZone:] */

undefined8 FUN_107cf1058(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cf107c; end: 107cf10e7; -[SCUnifiedProfileCallActionModel hash] */

undefined8 * FUN_107cf107c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107cf116c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107cf116c;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_107cf116c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107cf116c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107cf10e8; end: 107cf1187; -[SCUnifiedProfileCallActionModel isEqual:] */

long FUN_107cf10e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cf116c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_107cf116c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107cf116c;
    }
  }
  lVar3 = 1;
LAB_107cf116c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cf1188; end: 107cf118f; -[SCUnifiedProfileCallActionModel recipient] */

undefined8 FUN_107cf1188(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cf1190; end: 107cf1197; -[SCUnifiedProfileCallActionModel media] */

undefined8 FUN_107cf1190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cf1198; end: 107cf11a3; -[SCUnifiedProfileCallActionModel .cxx_destruct] */

void FUN_107cf1198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cf11a4; end: 107cf124f; -[SCUnifiedProfileNavigateToChatActionModel initWithChat:chatDeepLinkURLPath:] */

undefined1 *
FUN_107cf11a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa870;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cf1250; end: 107cf1273; -[SCUnifiedProfileNavigateToChatActionModel copyWithZone:] */

undefined8 FUN_107cf1250(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cf1274; end: 107cf12e7; -[SCUnifiedProfileNavigateToChatActionModel hash] */

undefined8 * FUN_107cf1274(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107cf1368:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107cf1374;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107cf1374;
        }
        goto LAB_107cf1368;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107cf1374:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107cf12e8; end: 107cf138f; -[SCUnifiedProfileNavigateToChatActionModel isEqual:] */

long FUN_107cf12e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107cf1368:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cf1374;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107cf1374;
        }
        goto LAB_107cf1368;
      }
    }
    lVar3 = 0;
  }
LAB_107cf1374:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cf1390; end: 107cf1397; -[SCUnifiedProfileNavigateToChatActionModel chat] */

undefined8 FUN_107cf1390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cf1398; end: 107cf139f; -[SCUnifiedProfileNavigateToChatActionModel chatDeepLinkURLPath] */

undefined8 FUN_107cf1398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cf13a0; end: 107cf13cf; -[SCUnifiedProfileNavigateToChatActionModel .cxx_destruct] */

void FUN_107cf13a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cf13d0; end: 107cf1483; -[SCUnifiedProfileSnapchatterDataModel initWithSnapchatter:addFriendStatus:storyDataModel:] */

undefined1 *
FUN_107cf13d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cf1484; end: 107cf14a7; -[SCUnifiedProfileSnapchatterDataModel copyWithZone:] */

undefined8 FUN_107cf1484(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cf14a8; end: 107cf1527; -[SCUnifiedProfileSnapchatterDataModel hash] */

undefined8 * FUN_107cf14a8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_107cf15b8:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107cf15c4;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107cf15c4;
        }
        goto LAB_107cf15b8;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_107cf15c4:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 107cf1528; end: 107cf15df; -[SCUnifiedProfileSnapchatterDataModel isEqual:] */

long FUN_107cf1528(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107cf15b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cf15c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107cf15c4;
        }
        goto LAB_107cf15b8;
      }
    }
    lVar3 = 0;
  }
LAB_107cf15c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cf15e0; end: 107cf15e7; -[SCUnifiedProfileSnapchatterDataModel snapchatter] */

undefined8 FUN_107cf15e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cf15e8; end: 107cf15ef; -[SCUnifiedProfileSnapchatterDataModel addFriendStatus] */

undefined8 FUN_107cf15e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cf15f0; end: 107cf15f7; -[SCUnifiedProfileSnapchatterDataModel storyDataModel] */

undefined8 FUN_107cf15f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cf15f8; end: 107cf1627; -[SCUnifiedProfileSnapchatterDataModel .cxx_destruct] */

void FUN_107cf15f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cf1628; end: 107cf16af; -[SCUnifiedProfileSnapchatterStoryDataModel initWithThumbnail:hasUnviewedStory:] */

undefined1 *
FUN_107cf1628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fa880;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cf16b0; end: 107cf16d3; -[SCUnifiedProfileSnapchatterStoryDataModel copyWithZone:] */

undefined8 FUN_107cf16b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cf16d4; end: 107cf173f; -[SCUnifiedProfileSnapchatterStoryDataModel hash] */

undefined8 * FUN_107cf16d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107cf17c4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107cf17c4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107cf17c4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107cf17c4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107cf1740; end: 107cf17df; -[SCUnifiedProfileSnapchatterStoryDataModel isEqual:] */

long FUN_107cf1740(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cf17c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107cf17c4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107cf17c4;
    }
  }
  lVar3 = 1;
LAB_107cf17c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cf17e0; end: 107cf17e7; -[SCUnifiedProfileSnapchatterStoryDataModel thumbnail] */

undefined8 FUN_107cf17e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cf17e8; end: 107cf17ef; -[SCUnifiedProfileSnapchatterStoryDataModel hasUnviewedStory] */

undefined1 FUN_107cf17e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cf17f0; end: 107cf17fb; -[SCUnifiedProfileSnapchatterStoryDataModel .cxx_destruct] */

void FUN_107cf17f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cf17fc; end: 107cf193f;  */

void FUN_107cf17fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar6 = PTR_PTR_1126c2980;
  lVar1 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = param_1;
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(param_1,puVar5);
  func_0x000100bf0d4c(param_1,0);
  func_0x00010c244920(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lVar3 == 0) {
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107cf1940; end: 107cf19f3;  */

void FUN_107cf1940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2988;
  _objc_alloc(PTR_PTR_1126c2988);
  func_0x00010c004bc0();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107cf19f4; end: 107cf1ac7;  */

void FUN_107cf19f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cf738;
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_107cf17fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012500(puVar1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cf1ac8; end: 107cf1bcf;  */

void FUN_107cf1ac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_107cf17fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb8398,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cf1bd0; end: 107cf2293;  */

void FUN_107cf1bd0(undefined **param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar5 = param_1;
  func_0x00010c070aa0();
  puVar6 = PTR_PTR_1126d5b90;
  if (((ulong)ppuVar5 & 1) == 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar6);
    func_0x00010bff0060(0,0x4028000000000000,0,0x4028000000000000,0);
    _objc_release(param_2);
    puStack_120 = PTR_PTR_1126b4740;
    func_0x00010bf25be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    puStack_120 = (undefined *)0x0;
  }
  puVar6 = PTR_PTR_1126cb050;
  _objc_alloc();
  uVar4 = uRam0000000113244300;
  uVar3 = uRam00000001132442f8;
  uVar2 = uRam00000001132442f0;
  uVar1 = uRam00000001132442e8;
  uVar18 = uRam00000001132442d0;
  uVar16 = uRam00000001132442c8;
  _objc_retain(param_1);
  ppuVar5 = param_1;
  func_0x00010c0fb380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = param_1;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar5;
    func_0x000108feb5c8(ppuVar5,ppuVar9,0,0,0,0,0,&PTR__OBJC_CLASS___NSConstantArray_111181a78,0x24,
                        1,0,param_3 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    _objc_release(ppuVar5);
  }
  else {
    ppuVar5 = param_1;
    func_0x00010c0fb380();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uStack_e0 = 0;
    uStack_d0 = 0x3032000000;
    pcStack_c8 = FUN_107cf2294;
    uStack_c0 = 0x107cf22a4;
    uStack_b8 = 0;
    uVar7 = 0;
    puStack_d8 = &uStack_e0;
    _dispatch_semaphore_create();
    uVar8 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_110 = (undefined **)0xc2000000;
    pcStack_108 = FUN_107cf22ac;
    puStack_100 = &UNK_11084fa08;
    ppuStack_f8 = ppuVar5;
    uStack_f0 = uVar7;
    puStack_e8 = &uStack_e0;
    _objc_retain(uVar7);
    _objc_retain(ppuVar5);
    func_0x00010007380c(uVar8,&ppuStack_118);
    _objc_release(uVar8);
    _dispatch_semaphore_wait(uVar7,0xffffffffffffffff);
    ppuVar17 = (undefined **)puStack_d8[5];
    _objc_retain(ppuVar17);
    _objc_release(uStack_f0);
    _objc_release(ppuStack_f8);
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
    _objc_release(ppuVar5);
    _objc_release(ppuVar5);
  }
  uVar7 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar19 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar20 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  ppuVar5 = ppuVar17;
  FUN_107cf5f4c(uVar16,uVar18,uVar7,uVar8,uVar19,uVar20,ppuVar17,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126cb048;
  _objc_alloc();
  func_0x00010bff5f60(uVar1,uVar2,uVar3,uVar4);
  _objc_release(ppuVar5);
  _objc_release(ppuVar17);
  _objc_release(param_1);
  _objc_retain(param_1);
  puVar11 = PTR_PTR_1126d77a8;
  _objc_alloc();
  _objc_retain(param_1);
  puVar12 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  ppuVar5 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar5;
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar9 = param_1;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar18 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  ppuVar17 = ppuVar9;
  uStack_e0 = uVar18;
  FUN_107cf6c30();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  ppuVar13 = ppuVar17;
  ppuStack_118 = ppuVar17;
  puStack_d8 = (undefined8 *)uVar16;
  func_0x000107cf6c70();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_110 = ppuVar13;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar12);
  _objc_release(puVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar17);
  if (ppuVar5 == (undefined **)0x0) {
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar5);
  _objc_release(param_1);
  _objc_retain(param_1);
  ppuVar5 = param_1;
  func_0x00010c260ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar5 = param_1;
    func_0x00010c260ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar9 = param_1;
  func_0x00010c070aa0();
  if ((int)ppuVar9 != 0) {
    func_0x000107cf6d10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar9;
  }
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  ppuVar17 = ppuVar9;
  uStack_e0 = uVar18;
  func_0x000107cf6c50();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar17;
  ppuStack_118 = ppuVar17;
  puStack_d8 = (undefined8 *)uVar16;
  func_0x000107cf6c80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_110 = ppuVar13;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(ppuVar9);
  _objc_release(puVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar17);
  _objc_release(ppuVar5);
  _objc_release(param_1);
  func_0x00010c03a020(uVar7,uVar8,uVar19,uVar20,uRam00000001138246d0,uRam0000000113244310,puVar11);
  _objc_release(ppuVar9);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126d77b0;
  func_0x00010bf16640(PTR_PTR_1126d77b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(param_1);
  func_0x00010c052100(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puStack_120);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  lVar15 = 8;
  __Block_object_dispose(&uStack_e0);
  __Unwind_Resume();
  param_1[5] = *(undefined **)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  return;
}



/* Entry: 107cf2294; end: 107cf22ab;  */

void FUN_107cf2294(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cf22ac; end: 107cf2387;  */

void FUN_107cf22ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010bff6b20();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd8e8;
  puVar3 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9660(puVar4,param_2,puVar3,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cf2388; end: 107cf2fd3;  */

void FUN_107cf2388(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,uint param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined *param_12,
                  undefined *param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  puVar3 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  if (param_2 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_107cf2f68;
  }
  if (((undefined *)0x10 < param_3) || ((1L << ((ulong)param_3 & 0x3f) & 0x1fcf3U) == 0)) {
    uVar5 = param_11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    if ((int)uVar6 != 0) {
      puVar9 = param_2;
      puVar7 = param_12;
      puVar3 = param_13;
      FUN_107cf59ec(param_2,param_12,param_13,0x6b,0xbb,1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107cf2f68;
    }
  }
  puVar9 = param_2;
  func_0x000100bf119c();
  if ((int)puVar9 != 0) {
    if ((undefined *)0xe < param_3) goto LAB_107cf260c;
    if ((1L << ((ulong)param_3 & 0x3f) & 0x71c7U) == 0) {
      if ((1L << ((ulong)param_3 & 0x3f) & 0x218U) == 0) {
        if (((1L << ((ulong)param_3 & 0x3f) & 0x820U) == 0) || ((param_7 & 1) == 0))
        goto LAB_107cf260c;
      }
      else if ((param_8 & 1) == 0) {
LAB_107cf260c:
        puVar9 = param_1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar9;
        puVar3 = param_2;
        func_0x00010bf86580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        if (puVar1 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010c0c7340(0x402a000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e840(puVar2);
          _objc_release(puVar9);
          _objc_release(puVar3);
          puVar4 = PTR_PTR_1126b4738;
          _objc_alloc(PTR_PTR_1126b4738);
          func_0x00010c016020(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                              *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                              *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                              *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
          puVar9 = PTR_PTR_1126b4740;
          puVar3 = puVar4;
          func_0x00010bfb9b20(PTR_PTR_1126b4740);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar2);
          _objc_release(puVar1);
        }
        goto LAB_107cf2f68;
      }
    }
  }
  _objc_retain(param_2);
  if (param_3 < (undefined *)0xf) {
    if ((1L << ((ulong)param_3 & 0x3f) & 0x71c7U) != 0) {
LAB_107cf2498:
      func_0x00010901d318(param_2,param_5,param_4);
                    /* WARNING: Could not recover jumptable at 0x000107cf24bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_10dee5908 + (long)param_3 * 2) * 4 + 0x107cf24c0))();
      return;
    }
    if ((1L << ((ulong)param_3 & 0x3f) & 0x218U) == 0) {
      if (((1L << ((ulong)param_3 & 0x3f) & 0x820U) != 0) && ((param_7 & 1) != 0))
      goto LAB_107cf2498;
    }
    else if (param_8 != 0) goto LAB_107cf2498;
  }
  _objc_release(param_2);
  puVar9 = (undefined *)0x0;
LAB_107cf2f68:
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain();
    puVar9 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar9);
    puVar9 = param_1;
    func_0x000107d3d8a4(param_1,0,puVar7,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107cf2fd4; end: 107cf34b7;  */

void FUN_107cf2fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x000107d3d8a4(param_1,0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf34b8; end: 107cf3767;  */

void FUN_107cf34b8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = param_2;
    func_0x000107d3d8a4(param_2,param_4,param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = 0;
  }
  _objc_release(lVar1);
  if (param_3 == 1) {
    lVar1 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      FUN_107cf1ac8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar1;
    }
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_1 == 2) {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107cf31f8(puVar3,puVar2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107cf3180();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  lVar1 = param_2;
  FUN_107cf3768(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  lVar5 = param_2;
  func_0x000107cf33d8(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 2) {
    uVar6 = 0x6a;
    if (lRam00000001138466f0 < 3) {
      uVar6 = 0x34;
    }
  }
  else {
    uVar6 = 0x88;
    if (param_1 == 1) {
      uVar6 = 0xbb;
    }
  }
  func_0x00010900fd90(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053140(0,0x402f000000000000,0,0x4031000000000000,puVar3);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(lVar7);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cf3768; end: 107cf37b3;  */

void FUN_107cf3768(long param_1)

{
  ulong uVar1;
  
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (ulong)(param_1 != 0);
  FUN_107cf3d28(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf37b4; end: 107cf39e7;  */

void FUN_107cf37b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar8 = param_1;
    func_0x000107d3d8a4(param_1,param_3,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar8 = 0;
  }
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x000107cf33d8(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4a480();
  _objc_release(lVar3);
  if ((int)lVar4 == 3) {
    param_8 = 1;
  }
  uVar6 = 0x34;
  if (param_8 == 0) {
    uVar6 = 0xc6;
  }
  puVar5 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  lVar3 = param_1;
  FUN_107cf3768(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010900fd90(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x000107cf3180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053140(0,0x402f000000000000,0,0x4031000000000000,puVar5);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107cf39e8; end: 107cf3d27;  */

void FUN_107cf39e8(int param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_1 == 0) {
    if (param_2 - 3U < 0xfffffffffffffffe) {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xdc);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = 0xdc;
      func_0x00010900fd90(0xdc);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = (undefined *)0x0;
      FUN_107cf3d28(0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000107cf3180();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = 0x34;
      func_0x00010900fd90(0x34);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b0c40;
      if (param_2 == 2) {
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe7ac0(0x4030000000000000,0x4030000000000000,0x3ff0000000000000,
                            0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010bfe9720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      else {
        puVar2 = (undefined *)0x0;
        FUN_107cf3d28(0);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000107cf31f8(puVar3,puVar5,0xd4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126b1918;
    _objc_alloc(PTR_PTR_1126b1918);
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0xce;
    func_0x00010900fd90(0xce);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b0c40;
    if (param_2 == 2) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7ac0(0x4030000000000000,0x4030000000000000,0x3ff0000000000000,
                          0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      puVar2 = (undefined *)0x1;
      FUN_107cf3d28(1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126b1918;
    _objc_alloc(PTR_PTR_1126b1918);
    puVar4 = puVar3;
    func_0x000107cf3180();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c053140(0,0x4024000000000000,0,0x4024000000000000);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107cf3d28; end: 107cf3d8f;  */

void FUN_107cf3d28(int param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8a78;
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8a98;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cf3d90; end: 107cf3fe7;  */

void FUN_107cf3d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b1918;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x000107cf30e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  uVar3 = param_4;
  func_0x000107cf6ca0(param_4);
  uVar4 = param_1;
  func_0x000107d3da1c(param_1,param_2,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  func_0x00010c053140(0,0x4024000000000000,0,0x4024000000000000,puVar1);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cf3fe8; end: 107cf40df;  */

void FUN_107cf3fe8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_1;
  if (param_2 == 0) {
    uVar1 = param_1;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4a480();
    _objc_release(uVar1);
    if ((int)uVar2 != 3) {
      func_0x000107cf3d90(param_1,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107cf40b0;
    }
  }
  else if ((param_2 == 1) && (uVar1 = param_1, func_0x00010901c6c4(), (int)uVar1 != 0)) {
    func_0x000107cf3ed0(param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107cf40b0;
  }
  uVar3 = 0;
LAB_107cf40b0:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107cf40e0; end: 107cf426b;  */

void FUN_107cf40e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain();
  ppuVar3 = &PTR____CFConstantStringClassReference_110eb7fd8;
  if ((int)param_2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110eb7ff8;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  FUN_107cf3d28(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  func_0x00010bcbeaa8(ppuVar3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x34;
  func_0x00010900fd90(0x34);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000107d3de88(param_1,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x000107cf3180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053140(0,0x402f000000000000,0,0x4031000000000000,puVar2);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cf426c; end: 107cf429f;  */

void FUN_107cf426c(void)

{
  _objc_alloc(PTR_PTR_1126d77c0);
  func_0x00010c031040(0,0x3ff0000000000000,0x4018000000000000,0x3faeb851eb851eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cf42a0; end: 107cf465b;  */

void FUN_107cf42a0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126cb050;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x000107cf46c4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  FUN_107cf5a9c(0x4049000000000000,0x4049000000000000,0x403b000000000000,0x4024000000000000,
                0x4000000000000000,0x4024000000000000,param_1,param_5,param_3,param_6,param_8,0,0,0,
                param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_retain(param_1);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  FUN_107cf52f8(param_1,param_2,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(puVar3);
    puVar6 = param_1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c08fa60();
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar7 = param_1;
      func_0x00010c294420(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar4);
    puVar10 = puVar4;
  }
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d77a8;
  _objc_alloc(PTR_PTR_1126d77a8);
  puVar5 = param_1;
  FUN_107cf4920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a020(0,0x4010000000000000,0,0x4010000000000000,0xc000000000000000,0,puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d77b0;
  func_0x00010bf16640(PTR_PTR_1126d77b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(param_1);
  puVar3 = param_1;
  FUN_107cf6574(0x4000000000000000,0x4018000000000000,0x4010000000000000,0x4018000000000000,param_1,
                param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  func_0x00010c052100(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf41570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithDynamicProvider__1125adf00,
             &PTR___NSConcreteGlobalBlock_110a07b70);
  return;
}



/* Entry: 107cf465c; end: 107cf466f;  */

void FUN_107cf465c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithDynamicProvider__1125adf00,
             &PTR___NSConcreteGlobalBlock_110a07b70);
  return;
}



/* Entry: 107cf4670; end: 107cf4763;  */

void FUN_107cf4670(undefined8 param_1,long param_2)

{
  func_0x00010c292b20();
  if (param_2 == 2) {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cf4764; end: 107cf48a3;  */

void FUN_107cf4764(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  ppuVar2 = ppuVar1;
  ppuVar4 = param_2;
  if (param_2 == (undefined **)0x0) {
    FUN_107cf6c30();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
  }
  func_0x000107cf6c70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04e840();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release();
  if (param_2 == (undefined **)0x0) {
    _objc_release();
    ppuVar2 = ppuVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    FUN_107cf4764(ppuVar1,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107cf48a4; end: 107cf491f;  */

void FUN_107cf48a4(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  _objc_retain(param_2);
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  FUN_107cf4764(ppuVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107cf4920; end: 107cf4c37;  */

/* WARNING: Possible PIC construction at 0x000107cf4bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107cf4be0) */

void FUN_107cf4920(undefined *param_1,undefined *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  puVar10 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  puVar3 = param_1;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  func_0x000107cf6c40();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar4 = param_1;
  puStack_58 = param_1;
  func_0x000107cf6c70();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c04e840();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    uVar11 = 0x107cf4a68;
    ___stack_chk_fail();
    puVar1 = auStack_70;
    puVar8 = puVar6;
    while( true ) {
      *(undefined **)(puVar1 + -0x40) = puVar5;
      *(undefined **)(puVar1 + -0x38) = puVar4;
      *(undefined **)(puVar1 + -0x30) = param_1;
      *(undefined **)(puVar1 + -0x28) = puVar2;
      *(undefined **)(puVar1 + -0x20) = puVar8;
      *(undefined **)(puVar1 + -0x18) = puVar3;
      *(undefined1 **)(puVar1 + -0x10) = puVar10;
      *(undefined8 *)(puVar1 + -8) = uVar11;
      *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = param_2;
      _objc_retain();
      puVar3 = param_2;
      _objc_retain();
      *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      puVar9 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107cf6c50();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
      }
      *(undefined **)(puVar1 + -0x58) = puVar9;
      *(undefined8 *)(puVar1 + -0x60) = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8
      ;
      puVar4 = param_2;
      if (param_2 == (undefined *)0x0) {
        func_0x000107cf6c80();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
      }
      *(undefined **)(puVar1 + -0x50) = puVar4;
      puVar3 = puVar1 + -0x58;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      if (param_2 == (undefined *)0x0) {
        _objc_release(puVar4);
      }
      if (puVar7 == (undefined *)0x0) {
        _objc_release(puVar9);
      }
      _objc_release(param_2);
      puVar2 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x48)) break;
      ___stack_chk_fail();
      param_1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      *(undefined **)(puVar1 + -0xb0) = puVar5;
      *(undefined **)(puVar1 + -0xa8) = puVar4;
      *(undefined **)(puVar1 + -0xa0) = puVar6;
      *(undefined **)(puVar1 + -0x98) = puVar9;
      *(undefined **)(puVar1 + -0x90) = param_2;
      *(undefined **)(puVar1 + -0x88) = puVar7;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(undefined8 *)(puVar1 + -0x78) = 0x107cf4b88;
      puVar10 = puVar1 + -0x80;
      _objc_retain(puVar3);
      _objc_retain(puVar8);
      _objc_retain(puVar2);
      _objc_alloc();
      uVar11 = 0x107cf4be0;
      puVar1 = puVar1 + -0xb0;
      puVar7 = puVar8;
      param_2 = puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107cf4c38; end: 107cf4e53;  */

void FUN_107cf4c38(undefined **param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_1;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar6;
  func_0x00010c261d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  if (param_4 == 0) {
    ppuVar6 = param_1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar7 = (undefined **)0x0;
    }
    else {
      ppuVar3 = param_1;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar3;
      func_0x000107cf4b88();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
    }
LAB_107cf4dd8:
    _objc_release(ppuVar6);
  }
  else {
    ppuVar6 = ppuVar1;
    func_0x00010c08fa60();
    if ((ppuVar6 == (undefined **)0x0) ||
       (ppuVar6 = ppuVar2, func_0x00010c08fa60(), ppuVar6 == (undefined **)0x0)) {
      ppuVar6 = ppuVar1;
      func_0x00010c08fa60();
      if (ppuVar6 == (undefined **)0x0) {
        _objc_retain(ppuVar2);
        ppuVar6 = ppuVar2;
      }
      else {
        _objc_retain(ppuVar1);
        ppuVar6 = ppuVar1;
      }
    }
    else {
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar7;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
    }
    ppuVar7 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar7 = ppuVar6;
      func_0x000107cf4b88(ppuVar6,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107cf4dd8;
    }
    _objc_release(ppuVar6);
    ppuVar7 = (undefined **)0x0;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    ppuVar6 = param_1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  FUN_107cf506c(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if ((ppuVar2 == (undefined **)0x0) &&
     (ppuVar2 = param_1, func_0x00010901c6c4(), (int)ppuVar2 != 0)) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110ded1f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded1f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar7;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar7;
LAB_107cf4f4c:
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar2;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    if ((ppuVar2 == (undefined **)0x0) &&
       (ppuVar2 = param_1, func_0x00010901c9ec(), (int)ppuVar2 != 0)) {
      ppuVar2 = param_1;
      FUN_107cf506c(param_1,2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107cf4f4c;
    }
  }
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if ((ppuVar2 == (undefined **)0x0) ||
     (ppuVar7 = ppuVar6, func_0x00010c08fa60(),
     ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0, ppuVar7 == (undefined **)0x0)) {
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    if (ppuVar2 == (undefined **)0x0) {
      _objc_retain(ppuVar6);
      ppuVar2 = ppuVar6;
    }
    else {
      _objc_retain(ppuVar1);
      ppuVar2 = ppuVar1;
    }
  }
  else {
    func_0x00010b0aefe4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
  }
  ppuVar7 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar4 = 0;
    func_0x000107cf4a68(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(ppuVar7);
    _objc_release(uVar4);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 107cf4e54; end: 107cf506b;  */

void FUN_107cf4e54(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    ppuVar5 = param_1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  FUN_107cf506c(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if ((ppuVar2 == (undefined **)0x0) &&
     (ppuVar2 = param_1, func_0x00010901c6c4(), (int)ppuVar2 != 0)) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ded1f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded1f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar3;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    if ((ppuVar2 != (undefined **)0x0) ||
       (ppuVar2 = param_1, func_0x00010901c9ec(), (int)ppuVar2 == 0)) goto LAB_107cf4f58;
    ppuVar2 = param_1;
    FUN_107cf506c(param_1,2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
LAB_107cf4f58:
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if ((ppuVar2 == (undefined **)0x0) ||
     (ppuVar3 = ppuVar5, func_0x00010c08fa60(),
     ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0, ppuVar3 == (undefined **)0x0)) {
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    if (ppuVar2 == (undefined **)0x0) {
      _objc_retain(ppuVar5);
      ppuVar2 = ppuVar5;
    }
    else {
      _objc_retain(ppuVar1);
      ppuVar2 = ppuVar1;
    }
  }
  else {
    func_0x00010b0aefe4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 == (undefined **)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar4 = 0;
    func_0x000107cf4a68(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar6);
    _objc_release(uVar4);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107cf506c; end: 107cf517b;  */

void FUN_107cf506c(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf4a480();
  _objc_release(ppuVar1);
  ppuVar4 = (undefined **)0x0;
  ppuVar3 = param_1;
  if (param_2 < 2) {
    if (param_2 != 0) {
      if (param_2 != 1) goto LAB_107cf5160;
      goto LAB_107cf50d8;
    }
    func_0x00010c262240(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c261d20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_2 == 2) {
      if ((int)ppuVar2 == 3) {
        func_0x000107cf6d28();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar1;
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110eb8018;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8018,0);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107cf5160;
    }
    if (param_2 != 4) goto LAB_107cf5160;
LAB_107cf50d8:
    func_0x00010bfebe20(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010befb8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar3);
LAB_107cf5160:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 107cf517c; end: 107cf52f7;  */

void FUN_107cf517c(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  puVar1 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = param_1;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar1 = puVar6;
    puVar5 = param_2;
    if (param_2 == (undefined *)0x0) {
      func_0x000107cf6c60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
    }
    puVar7 = param_3;
    if (param_3 == (undefined *)0x0) {
      func_0x000107cf6c90();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
    }
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    param_4 = puVar2;
    func_0x00010c04e840(puVar6);
    _objc_release(puVar2);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    if (param_2 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    _objc_retain(puVar1);
    FUN_107cf506c(param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    FUN_107cf517c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107cf52f8; end: 107cf5383;  */

void FUN_107cf52f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_107cf506c(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_107cf517c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf5384; end: 107cf55af;  */

void FUN_107cf5384(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  puVar1 = PTR_PTR_1126cb010;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  func_0x00010c244820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb018;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if ((long)param_3 < 0x12) {
    if (param_3 == 6) {
      iVar13 = 0x1b;
      goto LAB_107cf5498;
    }
    if (param_3 == 9) {
      iVar13 = 0;
      goto LAB_107cf5498;
    }
LAB_107cf5484:
    iVar13 = 0x24;
    if ((param_3 & 0xfffffffffffffffd) != 1) {
      iVar13 = 8;
    }
  }
  else {
    if (param_3 != 0x12) {
      if (param_3 == 0x16) {
        iVar13 = 8;
        goto LAB_107cf5498;
      }
      if (param_3 != 0x3a) goto LAB_107cf5484;
    }
    iVar13 = 0x1c;
  }
LAB_107cf5498:
  iVar12 = 0;
  puVar11 = puVar3;
  func_0x00010c0494c0();
  _objc_release(param_6);
  _objc_release(puVar3);
  puVar16 = puVar2;
  func_0x000108febbc0(puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b45f8;
  puVar15 = (undefined *)0x0;
  if (param_5 != 0) {
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined *)0x0;
    func_0x00010c246860(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar15 = puVar3;
  }
  puVar3 = puVar16;
  puVar17 = puVar15;
  func_0x000108fecd04();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar11);
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf85d80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c294420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010bf1bae0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf1bae0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010901cdb0(puVar1,puVar7);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puVar10 = puVar3;
    func_0x000108feb5c8(puVar2,puVar3,puVar16,puVar4,puVar6,puVar17,puVar8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar15);
    _objc_release(puVar16);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar1 = PTR_PTR_1126b4600;
    _objc_alloc();
    func_0x00010bff7e80();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010c259580();
    _objc_release(puVar11);
    puVar16 = (undefined *)0x0;
    if (((uint)puVar3 >> 2 & 1) != 0) {
      puVar16 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar11 = PTR_PTR_1126bd8e0;
    _objc_alloc();
    func_0x00010bff9340(0x4000000000000000,0x3ff8000000000000);
    puVar15 = (undefined *)0x0;
    if (iVar13 != 0) {
      puVar15 = PTR_PTR_1126d77c8;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff63c0();
      _objc_release(puVar3);
    }
    puVar17 = PTR_PTR_1126b45f8;
    if (iVar12 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246860(0,puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126b4608;
    _objc_alloc(PTR_PTR_1126b4608);
    puVar4 = puVar1;
    func_0x00010bff7b20();
    _objc_release(puVar17);
    _objc_release(puVar15);
    _objc_release(puVar11);
    _objc_release(puVar16);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126d77d0;
      _objc_retain(puVar4);
      _objc_retain(puVar10);
      _objc_alloc(puVar1);
      func_0x00010c039ea0();
      _objc_release(puVar4);
      _objc_release(puVar10);
      puVar3 = PTR_PTR_1126b4740;
      func_0x00010bf88300(PTR_PTR_1126b4740);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cf55b0; end: 107cf59eb;  */

void FUN_107cf55b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf1bae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf1bae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010901cdb0(param_1,puVar8);
  _objc_release(param_1);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  uVar14 = uVar2;
  func_0x000108feb5c8(uVar1,uVar2,uVar3,uVar5,uVar7,param_2,uVar9,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar8 = PTR_PTR_1126b4600;
  _objc_alloc();
  func_0x00010bff7e80();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c259580();
  _objc_release(param_4);
  puVar18 = (undefined *)0x0;
  if (((uint)uVar1 >> 2 & 1) != 0) {
    puVar18 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = PTR_PTR_1126bd8e0;
  _objc_alloc();
  func_0x00010bff9340(0x4000000000000000,0x3ff8000000000000);
  puVar17 = (undefined *)0x0;
  if (param_5 != 0) {
    puVar17 = PTR_PTR_1126d77c8;
    _objc_alloc();
    puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff63c0();
    _objc_release(puVar19);
  }
  puVar19 = PTR_PTR_1126b45f8;
  if (param_6 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246860(0,puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
  }
  puVar13 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  puVar15 = puVar8;
  func_0x00010bff7b20();
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puVar12);
  _objc_release(puVar18);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126d77d0;
    _objc_retain(puVar15);
    _objc_retain(uVar14);
    _objc_alloc(puVar8);
    func_0x00010c039ea0();
    _objc_release(puVar15);
    _objc_release(uVar14);
    puVar13 = PTR_PTR_1126b4740;
    func_0x00010bf88300(PTR_PTR_1126b4740);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107cf59ec; end: 107cf5a9b;  */

void FUN_107cf59ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d77d0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c039ea0();
  _objc_release(param_3);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b4740;
  func_0x00010bf88300(PTR_PTR_1126b4740);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cf5a9c; end: 107cf5f4b;  */

void FUN_107cf5a9c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined8 param_14,char param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  undefined8 uVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_8);
  puVar1 = param_7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_7;
  func_0x00010bf85d80(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_7;
  func_0x00010c294420(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_7;
  func_0x00010bf1bae0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_7;
  func_0x00010bf1bae0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x000108feb5c8(puVar1,puVar2,puVar3,puVar5,puVar7,0,0,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (((puVar2 == (undefined *)0x0) || (puVar1 = puVar2, func_0x00010c08fa60(), param_15 == '\0'))
     || (puVar1 == (undefined *)0x0)) {
    dVar14 = 15.0;
    func_0x00010b816218(0x402e000000000000);
    dVar14 = (double)(long)((param_1 / 15.0) * dVar14) / dVar14;
    uVar15 = 0;
    puVar1 = puVar9;
    uVar10 = param_9;
    FUN_107cf5f4c(param_1,param_2,dVar14 + dVar14,dVar14,0,dVar14,puVar9,param_9,param_10,param_13);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    dVar14 = 15.0;
    func_0x00010b816218();
    puVar3 = PTR_PTR_1126b4860;
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    dVar14 = (double)(long)((param_1 / 15.0) * dVar14) / dVar14;
    _objc_retain(param_10);
    func_0x00010bdc3460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar10 = 0;
    puVar4 = puVar3;
    func_0x000108fec800(puVar3,0,0,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cc220;
    _objc_alloc();
    uVar15 = 0;
    func_0x00010bff6300(param_1,param_2,dVar14 + dVar14,dVar14,0,dVar14,0x3ff0000000000000);
    _objc_release(param_10);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126cb048;
  _objc_alloc();
  puVar4 = puVar1;
  uVar12 = param_8;
  func_0x00010bff5f60(param_3,param_4,param_5,param_6);
  iVar11 = (int)uVar12;
  _objc_release(param_8);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b45f8;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar4);
    _objc_retain(uVar10);
    _objc_retain(param_7);
    if (iVar11 == 0) {
      func_0x00010c23ba80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246860(0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_7;
      func_0x000108fec9ec(param_7,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
    }
    else {
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246860(0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar3 = PTR_PTR_1126b4600;
      _objc_alloc(PTR_PTR_1126b4600);
      func_0x00010bff7e80();
      _objc_release(param_7);
      puVar6 = PTR_PTR_1126bd8e0;
      _objc_alloc(PTR_PTR_1126bd8e0);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff9340(0x4000000000000000,0x3ff8000000000000,puVar6);
      _objc_release(puVar1);
      puVar5 = PTR_PTR_1126b4608;
      _objc_alloc(PTR_PTR_1126b4608);
      func_0x00010bff7b20();
      puVar1 = puVar2;
      puVar2 = puVar6;
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126cc220;
    _objc_alloc(PTR_PTR_1126cc220);
    func_0x00010bff6300(param_3,param_4,param_5,param_6,uVar15,dVar14,0x3ff0000000000000);
    _objc_release(puVar4);
    _objc_release(uVar10);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cf5f4c; end: 107cf61e3;  */

void FUN_107cf5f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,int param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR_PTR_1126b45f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  if (param_10 == 0) {
    func_0x00010c23ba80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246860(0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_7;
    func_0x000108fec9ec(param_7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
  }
  else {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246860(0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b4600;
    _objc_alloc(PTR_PTR_1126b4600);
    func_0x00010bff7e80();
    _objc_release(param_7);
    puVar1 = PTR_PTR_1126bd8e0;
    _objc_alloc(PTR_PTR_1126bd8e0);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9340(0x4000000000000000,0x3ff8000000000000,puVar1);
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126b4608;
    _objc_alloc(PTR_PTR_1126b4608);
    func_0x00010bff7b20();
    puVar2 = puVar4;
    puVar4 = puVar1;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cc220;
  _objc_alloc(PTR_PTR_1126cc220);
  func_0x00010bff6300(param_1,param_2,param_3,param_4,param_5,param_6,0x3ff0000000000000);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cf61e4; end: 107cf6573;  */

void FUN_107cf61e4(undefined8 param_1,undefined *param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puVar10 = puVar3;
  func_0x000108fec430(puVar1,puVar3,puVar5,puVar6,0x24,1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b4600;
  _objc_alloc();
  func_0x00010bff7e80();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd8e0;
  _objc_alloc(PTR_PTR_1126bd8e0);
  func_0x00010bf1fc80(PTR_PTR_1126cc4b8);
  uVar12 = param_1;
  func_0x00010bf1fb60(PTR_PTR_1126cc4b8);
  func_0x00010bff9340(param_1,uVar12,puVar4);
  puVar1 = PTR_PTR_1126b45f8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_2;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if ((param_4 == 0) || (puVar5 = puVar6, func_0x00010c08fa60(), puVar5 == (undefined *)0x0)) {
    puVar5 = PTR_PTR_1126b4608;
    _objc_alloc();
    func_0x00010bff7b20();
  }
  else {
    puVar8 = param_2;
    func_0x00010bf5b820();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    puVar10 = puVar4;
    func_0x000108fecaa4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126cc220;
  _objc_alloc(PTR_PTR_1126cc220);
  uVar12 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar13 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uVar14 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  puVar9 = puVar5;
  func_0x00010bff6300(uVar12,uVar13,uVar14,uVar15,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),0x3ff0000000000000);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126d5b90;
    uVar16 = 0;
    if (puVar9 != (undefined *)0x0) {
      uVar16 = uRam0000000113244320;
    }
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    _objc_alloc(puVar1);
    func_0x00010bff0060(uVar12,uVar13,uVar14,uVar15,uVar16);
    _objc_release(puVar9);
    _objc_release(puVar10);
    puVar8 = PTR_PTR_1126b4740;
    func_0x00010bf25be0(PTR_PTR_1126b4740);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107cf6574; end: 107cf6657;  */

void FUN_107cf6574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d5b90;
  uVar3 = 0;
  if (param_7 != 0) {
    uVar3 = uRam0000000113244320;
  }
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  func_0x00010bff0060(param_1,param_2,param_3,param_4,uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b4740;
  func_0x00010bf25be0(PTR_PTR_1126b4740);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cf6658; end: 107cf67c7;  */

void FUN_107cf6658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain();
  uVar3 = param_4;
  _objc_retain(param_4);
  FUN_107cf6c30();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_107cf48a4(param_1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  FUN_107cf4c38(param_1,0,0,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  if ((param_6 & 1) == 0) {
    uVar7 = param_1;
    FUN_107cf52f8(param_1,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uRam0000000113244318;
  uVar1 = uRam0000000113244308;
  puVar5 = PTR_PTR_1126d77a8;
  _objc_alloc(PTR_PTR_1126d77a8);
  func_0x00010c03a020(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),uVar1,uVar2);
  _objc_release(param_4);
  puVar6 = PTR_PTR_1126d77b0;
  func_0x00010bf16640(PTR_PTR_1126d77b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107cf67c8; end: 107cf6a5f;  */

void FUN_107cf67c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11,long param_12,
                  undefined4 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if (param_11 == 0 || param_12 == 0) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    uVar1 = param_3;
    _objc_retain(param_3);
    uVar3 = 0x4028000000000000;
    if (param_4 != 0) {
      uVar3 = uRam0000000113244320;
    }
    FUN_107cf6574(0,0x4028000000000000,0,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = uVar1;
  }
  else {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010bf25480();
    func_0x00010bf25480();
    _objc_release(param_3);
    FUN_107cf59ec();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126cb050;
  _objc_alloc(PTR_PTR_1126cb050);
  uVar1 = param_1;
  FUN_107cf5a9c(uRam00000001132442c8,uRam00000001132442d0,uRam00000001132442e8,uRam00000001132442f0,
                uRam00000001132442f8,uRam0000000113244300,param_1,0,0,param_5,param_7,param_8,
                param_9,(undefined1)param_13,param_13._1_1_);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_1;
  FUN_107cf6658(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c052100(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cf6a60; end: 107cf6c2f;  */

void FUN_107cf6a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  puVar2 = PTR_PTR_1126d77d8;
  _objc_retain(param_5);
  _objc_alloc(puVar2);
  func_0x00010c01f620();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126b4740;
  func_0x00010bf38760(PTR_PTR_1126b4740);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar1 = (undefined8 *)0x1132442d8;
  if (param_9._2_1_ == '\0') {
    puVar1 = (undefined8 *)0x1132442c8;
  }
  uVar5 = *puVar1;
  puVar1 = (undefined8 *)0x1132442e0;
  if (param_9._2_1_ == '\0') {
    puVar1 = (undefined8 *)0x1132442d0;
  }
  uVar6 = *puVar1;
  puVar2 = PTR_PTR_1126cb050;
  _objc_alloc(PTR_PTR_1126cb050);
  uVar4 = param_1;
  FUN_107cf5a9c(uVar5,uVar6,uRam00000001132442e8,uRam00000001132442f0,uRam00000001132442f8,
                uRam0000000113244300,param_1,0,0,param_3,param_6,param_8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_1;
  FUN_107cf6658(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_1);
  func_0x00010c052100(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cf6c30; end: 107cf6d53;  */

void FUN_107cf6c30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 107cf6d54; end: 107cf6e2b;  */

undefined1 FUN_107cf6d54(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bf50940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcde0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cf6e2c; end: 107cf6e3b;  */

void FUN_107cf6e2c(long param_1)

{
  undefined1 in_w6;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_w6;
  return;
}


