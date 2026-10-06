/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059d20f8; end: 1059d235b; -[SCSendToListsRecipientPickerPresenter didPressTopRightButtonWithUiContainer:] */

void FUN_1059d20f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9a00();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126afca8;
  _objc_opt_new();
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1059d235c;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar3);
  ppuVar4 = &puStack_a8;
  puStack_88 = puVar3;
  _objc_retainBlock();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1059d24ac;
  puStack_b8 = &UNK_1108cc130;
  _objc_copyWeak(auStack_b0,auStack_78);
  ppuVar5 = &puStack_d0;
  _objc_retainBlock();
  if (lVar6 == 0) {
    (*(code *)ppuVar5[2])(ppuVar5,4,0);
  }
  else {
    _objc_copyWeak(auStack_d8,auStack_78);
    _objc_retain(puVar3);
    _objc_retain(lVar6);
    _objc_retain(ppuVar4);
    _objc_retain(ppuVar5);
    func_0x00010be7e140(param_1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(lVar6);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_d8);
  }
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar4);
  _objc_release(puStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d235c; end: 1059d23eb;  */

void FUN_1059d235c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1059d23ec;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059d23ec; end: 1059d26ab;  */

void FUN_1059d23ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe1840(uVar3,param_2,0);
    puVar1 = PTR_PTR_1126afca8;
    func_0x0001059dad6c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238740(0x3fe0000000000000,puVar1,param_2,uVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    lVar5 = lVar2 + 0x20;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c0fb9e0();
    _objc_release(lVar5);
    func_0x00010be02580(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1059d26ac; end: 1059d26f3; -[SCSendToListsRecipientPickerPresenter didTapTitleTextField] */

void FUN_1059d26ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059d26f4; end: 1059d273b; -[SCSendToListsRecipientPickerPresenter didUserInputTitle:] */

void FUN_1059d26f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059d273c; end: 1059d27a3; -[SCSendToListsRecipientPickerPresenter didReceiveSelectionItemUpdates:] */

void FUN_1059d273c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ad740();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059d27a4; end: 1059d293f; -[SCSendToListsRecipientPickerPresenter _confirmationModelWithButtonTitle:selectedItems:listName:] */

void FUN_1059d27a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2898;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c2bb3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0(param_4);
  _objc_release(param_4);
  func_0x00010c2b06a0(puVar1,param_2,lVar2 != 0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aac60(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c25d0a0(param_5,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  _objc_release(puVar3);
  if (uVar5 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e14e38;
  }
  else {
    uVar4 = param_5;
    func_0x00010c08fa60();
    if (*(ulong *)(param_1 + 0x70) < uVar4) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e14e18;
    }
    else {
      lVar2 = param_1;
      func_0x00010beb2c80(param_1,param_2,param_5);
      if (((int)lVar2 == 0) || (func_0x00010be4c5e0(param_1,param_2,param_5), (int)param_1 == 0))
      goto LAB_1059d28cc;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e14df8;
    }
  }
  func_0x00010c2bca60(puVar1,param_2,ppuVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_1059d28cc:
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059d2940; end: 1059d2ba7; -[SCSendToListsRecipientPickerPresenter _listNameIsInUse:] */

long FUN_1059d2940(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  _objc_retain();
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_1059d2ba8;
  uStack_f8 = 0x1059d2bb8;
  uStack_f0 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  func_0x00010c09a660(uVar3);
  _objc_release(uVar3);
  _dispatch_group_wait(lVar2,0xffffffffffffffff);
  lVar8 = puStack_110[5];
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar9 = 0;
  if (lVar4 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar5 = puStack_110[5];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0720c0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((uVar7 & 1) != 0) {
          lVar9 = 1;
          goto LAB_1059d2b04;
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar8;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    lVar9 = 0;
  }
LAB_1059d2b04:
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar9 = 8;
    __Block_object_dispose(&uStack_118);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
    return param_3;
  }
  return lVar9;
}



/* Entry: 1059d2ba8; end: 1059d2bbf;  */

void FUN_1059d2ba8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1059d2bc0; end: 1059d2c1b;  */

void FUN_1059d2bc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059d2c1c; end: 1059d2ddf; -[SCSendToListsRecipientPickerPresenter _performCreateOperationWithListId:listName:selectedItems:] */

void FUN_1059d2c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
    func_0x0001059dacf4();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010beba6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x69) = 1;
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1059d2de0;
    puStack_88 = &UNK_110848218;
    _objc_copyWeak(auStack_70,auStack_68);
    lStack_80 = param_1;
    _objc_retain(lVar2);
    lStack_78 = lVar2;
    _objc_copyWeak(auStack_a8,auStack_68);
    _objc_retain(lVar2);
    func_0x00010bdef780(param_1);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d2de0; end: 1059d2e77;  */

void FUN_1059d2de0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059d2e78;
  puStack_40 = &UNK_110848218;
  _objc_copyWeak(auStack_28,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_38 = uVar1;
  uStack_30 = uVar2;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059d2e78; end: 1059d3083;  */

void FUN_1059d2e78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x69) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe1840(uVar3,param_2,0);
    puVar1 = PTR_PTR_1126afca8;
    func_0x0001059dad3c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238740(0x3fe0000000000000,puVar1,param_2,uVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010be02580(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1059d3084; end: 1059d326f; -[SCSendToListsRecipientPickerPresenter _performUpdateOperationWithListId:listName:selectedItems:] */

void FUN_1059d3084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
    func_0x0001059dad0c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010beba6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x69) = 1;
    _objc_initWeak(auStack_68,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1059d3270;
    puStack_98 = &UNK_11085ae98;
    _objc_copyWeak(auStack_70,auStack_68);
    lStack_90 = param_1;
    _objc_retain(lVar2);
    lStack_88 = lVar2;
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_copyWeak(auStack_b8,auStack_68);
    _objc_retain(lVar2);
    func_0x00010bedacc0(param_1);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d3270; end: 1059d333f;  */

void FUN_1059d3270(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059d3340;
  puStack_60 = &UNK_11085ae98;
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  uStack_50 = uVar3;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059d3340; end: 1059d340f;  */

void FUN_1059d3340(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x69) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe1840(uVar3,param_2,0);
    puVar1 = PTR_PTR_1126afca8;
    func_0x0001059dad54();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238740(0x3fe0000000000000,puVar1,param_2,uVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    lVar5 = lVar2 + 0x20;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c0fba20();
    _objc_release(lVar5);
    func_0x00010be02580(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1059d3410; end: 1059d356f;  */

void FUN_1059d3410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1059d34cc;
  puStack_58 = &UNK_1108502a8;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_38 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d3570; end: 1059d363f; -[SCSendToListsRecipientPickerPresenter _presentMaxCharacterLengthReachedWithCompletion:] */

void FUN_1059d3570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c0be8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x70);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1059d3640;
  puStack_50 = &UNK_11085b7b0;
  lStack_48 = lVar3;
  uStack_40 = param_3;
  _objc_retain(param_3);
  _objc_retain(lVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d3640; end: 1059d370f;  */

void FUN_1059d3640(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001059dac1c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x0001059dac34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ce00(uVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d3710; end: 1059d37d7; -[SCSendToListsRecipientPickerPresenter _presentEmptyTitleWithCompletion:] */

void FUN_1059d3710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c0be8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059d37d8;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = lVar3;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(lVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d37d8; end: 1059d386f;  */

void FUN_1059d37d8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001059dabbc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001059dabd4();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ce00(uVar3);
  _objc_release(ppuVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d3870; end: 1059d3963; -[SCSendToListsRecipientPickerPresenter _presentRemoveListAlertWithCompletion:] */

void FUN_1059d3870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x50) == 0) {
    puVar1 = PTR_PTR_1126c0bf0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059d3964;
  puStack_40 = &UNK_110848708;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d3964; end: 1059d399f;  */

void FUN_1059d3964(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c10ce40(*(undefined8 *)(lVar1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059d39a0; end: 1059d3aff; -[SCSendToListsRecipientPickerPresenter _presentAlreadyUsedListNameAlertWithListName:completion:] */

void FUN_1059d39a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar3 = param_4;
  _objc_retain();
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar1 = PTR_PTR_1126c0be8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release();
  }
  func_0x0001059dabec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x0001059dac04();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1059d3b00;
  puStack_78 = &UNK_11084cbf0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_70 = uVar3;
  uStack_68 = uVar2;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d3b00; end: 1059d3bb3;  */

void FUN_1059d3b00(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ce00(uVar3);
    _objc_release(ppuVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d3bb4; end: 1059d3c83; -[SCSendToListsRecipientPickerPresenter _presentMaxRecipientsReachedAlert] */

void FUN_1059d3bb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar1 = PTR_PTR_1126c0be8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1059d3c84;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059d3c84; end: 1059d3d2f;  */

void FUN_1059d3c84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    lVar1 = param_1;
    func_0x0001059dad84();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001059dad9c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ce00(uVar4);
    _objc_release(ppuVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d3d30; end: 1059d3dff; -[SCSendToListsRecipientPickerPresenter _presentMaxSavedListCountAlert] */

void FUN_1059d3d30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar1 = PTR_PTR_1126c0be8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1059d3e00;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059d3e00; end: 1059d3eab;  */

void FUN_1059d3e00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    lVar1 = param_1;
    func_0x0001059dadb4();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001059dadcc();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ce00(uVar4);
    _objc_release(ppuVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d3eac; end: 1059d3edb; -[SCSendToListsRecipientPickerPresenter _shouldCheckForAlreadyUsedListNameWithNewListName:] */

uint FUN_1059d3eac(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0720c0(uVar1);
    return (uint)uVar1 ^ 1;
  }
  return 1;
}



/* Entry: 1059d3edc; end: 1059d3f87; -[SCSendToListsRecipientPickerPresenter _selectTextFieldWithTextField:] */

void FUN_1059d3edc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c073040();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf179a0(param_3);
  }
  uVar1 = param_3;
  func_0x00010bf193c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf94e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26c600(param_3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb600(param_3,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059d3f88; end: 1059d41eb; -[SCSendToListsRecipientPickerPresenter _listFromListId:listName:selectedItems:] */

void FUN_1059d3f88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_5);
  lVar5 = param_5;
  func_0x00010bf52a60(param_5,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar5 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_5);
        }
        uVar14 = *(ulong *)(lStack_128 + lVar13 * 8);
        uVar6 = uVar14;
        func_0x000108425a5c();
        puVar7 = puVar1;
        puVar9 = puVar2;
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar14;
          func_0x000108425b30();
          puVar7 = puVar3;
          puVar9 = puVar4;
          if ((int)uVar6 != 0) goto LAB_1059d40b8;
        }
        else {
LAB_1059d40b8:
          uVar6 = uVar14;
          func_0x000108425950(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c720(puVar7,param_2,uVar6);
          _objc_release(uVar6);
          func_0x000108425a18(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c720(puVar9,param_2,uVar14);
          _objc_release(uVar14);
        }
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      lVar5 = param_5;
      func_0x00010bf52a60(param_5,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(param_5);
  puVar7 = PTR_PTR_1126b5478;
  _objc_alloc(PTR_PTR_1126b5478);
  lVar5 = param_3;
  uVar8 = param_4;
  puVar9 = puVar2;
  puVar10 = puVar4;
  puVar11 = puVar1;
  func_0x00010c026340(0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  _objc_retain(puVar10);
  lVar12 = param_3;
  func_0x00010be4c560(param_3,param_2,lVar5,uVar8,puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287480();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 1059d41ec; end: 1059d429b; -[SCSendToListsRecipientPickerPresenter _updateListWithListId:listName:selectedItems:successBlock:failureBlock:] */

void FUN_1059d41ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be4c560(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287480();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059d429c; end: 1059d434b; -[SCSendToListsRecipientPickerPresenter _createListWithListId:listName:selectedItems:successBlock:failureBlock:] */

void FUN_1059d429c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be4c560(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56e60();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059d434c; end: 1059d43db; -[SCSendToListsRecipientPickerPresenter _listNameFromHeader:] */

void FUN_1059d434c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c2716e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c25d0a0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059d43dc; end: 1059d4453; -[SCSendToListsRecipientPickerPresenter _setEditingStateWithListName:listId:editingInProgress:] */

void FUN_1059d43dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 0x68) = param_5;
  return;
}



/* Entry: 1059d4454; end: 1059d4487; -[SCSendToListsRecipientPickerPresenter _dismissAndResetEditingState] */

void FUN_1059d4454(long param_1,undefined8 param_2)

{
  func_0x00010bea39a0(param_1,param_2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1059d4488; end: 1059d452f; -[SCSendToListsRecipientPickerPresenter _showProgressStatusOverlay:withMessage:] */

void FUN_1059d4488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1059d4530;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d4530; end: 1059d45c3;  */

void FUN_1059d4530(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2);
  _objc_release(puVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c235d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4010000000000000,*(undefined8 *)(param_1 + 0x20),
             PTR_s_showAnimated_hideInSeconds__11266b188,1);
  return;
}



/* Entry: 1059d45c4; end: 1059d462b; -[SCSendToListsRecipientPickerPresenter _showProgressStatusOverlay:] */

void FUN_1059d45c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afca8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02cc60();
  func_0x00010beba700(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059d462c; end: 1059d46e3; -[SCSendToListsRecipientPickerPresenter _getSectionIdentifiers] */

void FUN_1059d462c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f487d8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f488b8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f488d8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f487b8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f48a38;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_50,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x60,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x50,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_storeStrong(puVar1 + 0x40,0);
  _objc_storeStrong(puVar1 + 0x38,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_destroyWeak(puVar1 + 0x20);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1059d46e4; end: 1059d4787; -[SCSendToListsRecipientPickerPresenter .cxx_destruct] */

void FUN_1059d46e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059d4788; end: 1059d481b;  */

ulong FUN_1059d4788(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf5ab40(param_3);
  dVar2 = param_1;
  func_0x00010bf5ab40(param_4);
  if (dVar2 <= param_1) {
    func_0x00010bf5ab40(param_3);
    dVar3 = dVar2;
    func_0x00010bf5ab40(param_4);
    uVar1 = (ulong)(dVar3 < dVar2);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1059d481c; end: 1059d4d73;  */

void FUN_1059d481c(undefined *param_1,undefined *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *in_x5;
  undefined *in_x6;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x21;
  long lVar18;
  long lVar19;
  undefined *unaff_x22;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *unaff_x23;
  long lVar24;
  undefined *puVar25;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar26;
  undefined *unaff_x26;
  long lVar27;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_c10;
  undefined8 uStack_c08;
  code *pcStack_c00;
  undefined *puStack_bf8;
  undefined *puStack_bf0;
  undefined8 uStack_be8;
  undefined *puStack_be0;
  undefined1 *puStack_bd8;
  undefined *puStack_bd0;
  undefined8 *puStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 *puStack_bb8;
  undefined *puStack_bb0;
  undefined8 uStack_ba8;
  code *pcStack_ba0;
  undefined *puStack_b98;
  undefined8 *puStack_b90;
  undefined *puStack_b88;
  undefined8 *puStack_b80;
  undefined8 uStack_b78;
  undefined8 *puStack_b70;
  undefined8 uStack_b68;
  code *pcStack_b60;
  undefined8 uStack_b58;
  undefined *puStack_b50;
  undefined *puStack_b48;
  undefined8 uStack_b40;
  code *pcStack_b38;
  undefined *puStack_b30;
  undefined *puStack_b28;
  undefined8 *puStack_b20;
  undefined8 *puStack_b18;
  undefined8 uStack_b10;
  undefined8 *puStack_b08;
  undefined8 uStack_b00;
  code *pcStack_af8;
  undefined8 uStack_af0;
  undefined *puStack_ae8;
  undefined8 uStack_ae0;
  undefined8 *puStack_ad8;
  undefined8 uStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  undefined *puStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  long *plStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  long lStack_a68;
  long *plStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  long lStack_930;
  long lStack_888;
  undefined8 uStack_810;
  long lStack_808;
  long *plStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined1 auStack_750 [128];
  long lStack_6d0;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined1 ****ppppuStack_670;
  undefined8 uStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined8 uStack_650;
  long lStack_648;
  long *plStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long lStack_590;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined1 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  long lStack_518;
  undefined8 *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined1 **ppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_340;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_1);
  puVar2 = puVar15;
  func_0x00010bffc4a0();
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  puStack_2b8 = puVar2;
  _objc_retain(param_1);
  puStack_2c8 = param_1;
  func_0x00010bf52a60();
  if (param_1 != (undefined *)0x0) {
    lStack_2c0 = *plStack_2a0;
    do {
      unaff_x27 = (undefined *)0x0;
      do {
        if (*plStack_2a0 != lStack_2c0) {
          _objc_enumerationMutation(puStack_2c8);
        }
        unaff_x22 = *(undefined **)(lStack_2a8 + (long)unaff_x27 * 8);
        _objc_retain(unaff_x22);
        unaff_x23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        puVar2 = unaff_x22;
        func_0x00010c244720(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        puVar3 = unaff_x22;
        func_0x00010bfceb60(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bffc4a0();
        _objc_release(puVar3);
        _objc_release(puVar2);
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        puStack_220 = (undefined8 *)0x0;
        puVar2 = unaff_x22;
        func_0x00010c244720();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf52a60();
        if (puVar3 != (undefined *)0x0) {
          puVar15 = (undefined *)*puStack_220;
          do {
            unaff_x28 = (undefined *)0x0;
            do {
              if ((undefined *)*puStack_220 != puVar15) {
                _objc_enumerationMutation(puVar2);
              }
              puVar20 = PTR_PTR_1126c0b60;
              _objc_alloc(PTR_PTR_1126c0b60);
              func_0x00010c055fc0();
              func_0x00010befa120(unaff_x23);
              _objc_release(puVar20);
              unaff_x28 = unaff_x28 + 1;
            } while (puVar3 != unaff_x28);
            puVar3 = puVar2;
            func_0x00010bf52a60();
          } while (puVar3 != (undefined *)0x0);
        }
        _objc_release(puVar2);
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        puStack_260 = (undefined8 *)0x0;
        puVar2 = unaff_x22;
        func_0x00010bfceb60();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf52a60();
        if (puVar3 != (undefined *)0x0) {
          puVar15 = (undefined *)*puStack_260;
          do {
            unaff_x28 = (undefined *)0x0;
            do {
              if ((undefined *)*puStack_260 != puVar15) {
                _objc_enumerationMutation(puVar2);
              }
              puVar20 = PTR_PTR_1126c0b60;
              _objc_alloc(PTR_PTR_1126c0b60);
              func_0x00010c055fc0();
              func_0x00010befa120(unaff_x23);
              _objc_release(puVar20);
              unaff_x28 = unaff_x28 + 1;
            } while (puVar3 != unaff_x28);
            puVar3 = puVar2;
            func_0x00010bf52a60();
          } while (puVar3 != (undefined *)0x0);
        }
        _objc_release(puVar2);
        unaff_x24 = PTR_PTR_1126c0b48;
        _objc_alloc();
        unaff_x25 = unaff_x22;
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x22;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5ab40(unaff_x22);
        in_x5 = unaff_x23;
        func_0x00010c026300();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        func_0x00010befa120(puStack_2b8);
        _objc_release(unaff_x24);
        unaff_x27 = unaff_x27 + 1;
      } while (unaff_x27 != param_1);
      param_1 = puStack_2c8;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (param_1 != (undefined *)0x0);
  }
  puVar2 = puStack_2c8;
  _objc_release(puStack_2c8);
  puVar3 = puVar2;
  _objc_release();
  puVar20 = puStack_2b8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puStack_2e8 = puVar2;
  uStack_2d8 = 0x1059d4be0;
  lStack_340 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = param_2;
  puStack_330 = unaff_x28;
  puStack_328 = unaff_x27;
  puStack_320 = unaff_x26;
  puStack_318 = unaff_x25;
  puStack_310 = unaff_x24;
  puStack_308 = unaff_x23;
  puStack_300 = unaff_x22;
  uStack_2f8 = unaff_x21;
  puStack_2f0 = puVar15;
  puStack_2e0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_2);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  puStack_3f0 = (undefined8 *)0x0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  puVar2 = puVar3;
  func_0x00010c246e80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010bf52a60();
  if (puVar20 != (undefined *)0x0) {
    unaff_x27 = (undefined *)*puStack_3f0;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_3f0 != unaff_x27) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x24 = *(undefined **)(lStack_3f8 + (long)unaff_x28 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c0720c0();
        _objc_release(unaff_x25);
        if (((ulong)unaff_x26 & 1) == 0) {
          func_0x00010befa120(puVar15);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar20 != unaff_x28);
      puVar20 = puVar2;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (puVar20 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar20 = puVar15;
  FUN_1059d4d74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(param_2);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_340) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_408 = FUN_1059d4d74;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_450 = unaff_x26;
  puStack_448 = unaff_x25;
  puStack_440 = unaff_x24;
  puStack_438 = unaff_x23;
  puStack_430 = puVar20;
  puStack_428 = puVar15;
  puStack_420 = param_2;
  puStack_418 = puVar3;
  ppuStack_410 = &puStack_2e0;
  _objc_retain();
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  puStack_510 = (undefined8 *)0x0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x24 = (undefined *)*puStack_510;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_510 != unaff_x24) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x23 = *(undefined **)(lStack_518 + (long)unaff_x25 * 8);
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar15);
        _objc_release(unaff_x23);
        unaff_x25 = unaff_x25 + 1;
      } while (puVar3 != unaff_x25);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar20 = PTR_PTR_1126c0bf8;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bbc0();
  _objc_release(puVar3);
  _objc_release(puVar15);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_528 = FUN_1059d4f14;
  lStack_590 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_580 = unaff_x28;
  puStack_578 = unaff_x27;
  puStack_570 = unaff_x26;
  puStack_568 = unaff_x25;
  puStack_560 = unaff_x24;
  puStack_558 = unaff_x23;
  puStack_550 = puVar3;
  puStack_548 = puVar20;
  puStack_540 = puVar15;
  puStack_538 = puVar2;
  pppuStack_530 = &ppuStack_410;
  _objc_retain();
  _objc_retain(puVar25);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  plStack_640 = (long *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  puVar15 = puVar4;
  func_0x00010c246e80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar15;
  func_0x00010bf52a60();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar15);
LAB_1059d5088:
    func_0x00010befa120(puVar2);
  }
  else {
    unaff_x28 = (undefined *)0x0;
    lVar14 = *plStack_640;
    puStack_660 = puVar4;
    puStack_658 = puVar15;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_640 != lVar14) {
          _objc_enumerationMutation(puStack_658);
        }
        unaff_x25 = *(undefined **)(lStack_648 + (long)puVar20 * 8);
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar25;
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x25;
        func_0x00010c0720c0();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        uVar1 = (uint)unaff_x27 | (uint)unaff_x28;
        unaff_x28 = (undefined *)(ulong)uVar1;
        func_0x00010befa120(puVar2);
        puVar15 = puStack_658;
        puVar20 = puVar20 + 1;
      } while (puVar3 != puVar20);
      puVar3 = puStack_658;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
    _objc_release(puVar15);
    unaff_x23 = (undefined *)0x0;
    puVar4 = puStack_660;
    if ((uVar1 & 1) == 0) goto LAB_1059d5088;
  }
  puVar20 = puVar2;
  FUN_1059d4d74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar25);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_590) {
    ___stack_chk_fail();
    uStack_668 = 0x1059d5100;
    lStack_6d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_6c0 = unaff_x28;
    puStack_6b8 = unaff_x27;
    puStack_6b0 = unaff_x26;
    puStack_6a8 = unaff_x25;
    puStack_6a0 = puVar2;
    puStack_698 = unaff_x23;
    puStack_690 = puVar20;
    puStack_688 = puVar15;
    puStack_680 = puVar25;
    puStack_678 = puVar4;
    ppppuStack_670 = &pppuStack_530;
    _objc_alloc_init();
    lStack_808 = 0;
    uStack_810 = 0;
    uStack_7f8 = 0;
    plStack_800 = (long *)0x0;
    uStack_7e8 = 0;
    uStack_7f0 = 0;
    uStack_7d8 = 0;
    uStack_7e0 = 0;
    lVar14 = *(long *)(puVar3 + 0x20);
    _objc_retain(lVar14);
    puVar10 = &uStack_810;
    puVar11 = auStack_750;
    uVar12 = 0x10;
    lStack_888 = lVar14;
    func_0x00010bf52a60();
    if (lStack_888 != 0) {
      lVar13 = *plStack_800;
      do {
        lVar16 = 0;
        do {
          if (*plStack_800 != lVar13) {
            _objc_enumerationMutation(lVar14);
          }
          lVar18 = *(long *)(lStack_808 + lVar16 * 8);
          puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          puVar25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          lVar6 = lVar18;
          func_0x00010c09a120();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar6;
          func_0x00010bf52a60();
          lVar26 = lRam0000000000000000;
          while (lVar19 != 0) {
            lVar27 = 0;
            do {
              if (lRam0000000000000000 != lVar26) {
                _objc_enumerationMutation(lVar6);
              }
              lVar17 = *(long *)(lVar27 * 8);
              lVar22 = lVar17;
              func_0x00010c27dd80();
              if ((int)lVar22 == 0) {
                lVar7 = *(long *)(puVar3 + 0x28);
                lVar22 = lVar17;
                func_0x00010c122b80(lVar17);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar22);
                lVar24 = *(long *)(puVar3 + 0x30);
                lVar22 = lVar17;
                func_0x00010c122b80();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(lVar24);
                _objc_retain(lVar22);
                lVar21 = lVar22;
                func_0x00010c08fa60();
                if (lVar21 == 0) {
                  _objc_release(lVar22);
LAB_1059d548c:
                  _objc_release(lVar24);
                  lVar17 = lVar22;
                  goto LAB_1059d54d4;
                }
                lVar21 = lVar24;
                func_0x00010bf4b900();
                _objc_release(lVar22);
                _objc_release(lVar24);
                _objc_release(lVar22);
                if (lVar7 == 0) {
                  if ((int)lVar21 != 0) goto LAB_1059d54b4;
                }
                else if ((int)lVar21 != 0) {
                  uVar12 = *(undefined8 *)(puVar3 + 0x28);
                  lVar22 = lVar17;
                  func_0x00010c122b80(lVar17);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0e00e0(uVar12);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar15);
                  _objc_release(uVar12);
                  _objc_release(lVar22);
LAB_1059d54b4:
                  func_0x00010c122b80(lVar17);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar2;
                  goto LAB_1059d54cc;
                }
              }
              else {
                lVar22 = lVar17;
                func_0x00010c27dd80();
                if ((int)lVar22 != 1) goto LAB_1059d54dc;
                lVar21 = *(long *)(puVar3 + 0x38);
                lVar22 = lVar17;
                func_0x00010c122b80(lVar17);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar22);
                if (lVar21 != 0) {
                  lVar22 = *(long *)(puVar3 + 0x38);
                  lVar21 = lVar17;
                  func_0x00010c122b80(lVar17);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar21);
                  lVar21 = lVar22;
                  func_0x00010bfcef60();
                  _objc_retainAutoreleasedReturnValue();
                  lVar7 = lVar22;
                  func_0x00010bfcef60();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  lVar24 = lVar21;
                  if (lVar7 == 0) {
                    lVar7 = *(long *)(puVar3 + 0x40);
                    (**(code **)(lVar7 + 0x10))(lVar7,lVar22);
                    _objc_retainAutoreleasedReturnValue();
                    lVar24 = lVar7;
                    func_0x00010c2711a0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar21);
                    _objc_release(lVar7);
                  }
                  func_0x00010befa120(puVar20);
                  func_0x00010c122b80(lVar17);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar25);
                  _objc_release(lVar17);
                  goto LAB_1059d548c;
                }
                func_0x00010c122b80(lVar17);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar25;
LAB_1059d54cc:
                func_0x00010befa120(puVar4);
LAB_1059d54d4:
                _objc_release(lVar17);
              }
LAB_1059d54dc:
              lVar27 = lVar27 + 1;
            } while (lVar19 != lVar27);
            lVar19 = lVar6;
            func_0x00010bf52a60();
          }
          _objc_release(lVar6);
          puVar4 = PTR_PTR_1126b5478;
          _objc_alloc(PTR_PTR_1126b5478);
          lVar19 = lVar18;
          func_0x00010c09a080();
          _objc_retainAutoreleasedReturnValue();
          lVar26 = lVar18;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5ab40(lVar18);
          in_x5 = puVar20;
          in_x6 = puVar2;
          func_0x00010c026340(puVar4);
          _objc_release(lVar26);
          _objc_release(lVar19);
          puVar8 = puVar2;
          func_0x00010bf529e0();
          if ((puVar8 != (undefined *)0x0) ||
             (puVar8 = puVar25, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) {
            func_0x00010befa120(puVar5);
          }
          _objc_release(puVar4);
          _objc_release(puVar25);
          _objc_release(puVar20);
          _objc_release(puVar2);
          _objc_release(puVar15);
          lVar16 = lVar16 + 1;
        } while (lVar16 != lStack_888);
        puVar10 = &uStack_810;
        puVar11 = auStack_750;
        uVar12 = 0x10;
        lStack_888 = lVar14;
        func_0x00010bf52a60();
      } while (lStack_888 != 0);
    }
    _objc_release(lVar14);
    puVar15 = puVar5;
    (**(code **)(*(long *)(puVar3 + 0x48) + 0x10))();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d0) {
      return;
    }
    ___stack_chk_fail();
    lStack_930 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar15);
    _objc_retain(puVar10);
    _objc_retain(puVar11);
    _objc_retain(uVar12);
    _objc_retain(in_x5);
    _objc_retain(in_x6);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    lStack_a68 = 0;
    uStack_a70 = 0;
    uStack_a58 = 0;
    plStack_a60 = (long *)0x0;
    uStack_a48 = 0;
    uStack_a50 = 0;
    uStack_a38 = 0;
    uStack_a40 = 0;
    _objc_retain(puVar5);
    puVar20 = puVar5;
    func_0x00010bf52a60();
    if (puVar20 != (undefined *)0x0) {
      lVar14 = *plStack_a60;
      do {
        puVar25 = (undefined *)0x0;
        do {
          if (*plStack_a60 != lVar14) {
            _objc_enumerationMutation(puVar5);
          }
          lVar16 = *(long *)(lStack_a68 + (long)puVar25 * 8);
          lStack_aa8 = 0;
          uStack_ab0 = 0;
          uStack_a98 = 0;
          plStack_aa0 = (long *)0x0;
          uStack_a88 = 0;
          uStack_a90 = 0;
          uStack_a78 = 0;
          uStack_a80 = 0;
          func_0x00010c09a120();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar16;
          func_0x00010bf52a60();
          if (lVar13 != 0) {
            lVar19 = *plStack_aa0;
            do {
              lVar26 = 0;
              do {
                if (*plStack_aa0 != lVar19) {
                  _objc_enumerationMutation(lVar16);
                }
                uVar23 = *(undefined8 *)(lStack_aa8 + lVar26 * 8);
                uVar9 = uVar23;
                func_0x00010c27dd80();
                puVar4 = puVar2;
                if (((int)uVar9 == 0) ||
                   (uVar9 = uVar23, func_0x00010c27dd80(), puVar4 = puVar3, (int)uVar9 == 1)) {
                  func_0x00010c122b80(uVar23);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar4);
                  _objc_release(uVar23);
                }
                lVar26 = lVar26 + 1;
              } while (lVar13 != lVar26);
              lVar13 = lVar16;
              func_0x00010bf52a60();
            } while (lVar13 != 0);
          }
          _objc_release(lVar16);
          puVar25 = puVar25 + 1;
        } while (puVar25 != puVar20);
        puVar20 = puVar5;
        func_0x00010bf52a60();
      } while (puVar20 != (undefined *)0x0);
    }
    puVar25 = puVar5;
    _objc_release();
    _dispatch_group_create();
    puStack_ad8 = &uStack_ae0;
    uStack_ae0 = 0;
    uStack_ad0 = 0x3032000000;
    pcStack_ac8 = FUN_1059d5bd4;
    uStack_ac0 = 0x1059d5be4;
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puStack_b08 = &uStack_b10;
    uStack_b10 = 0;
    uStack_b00 = 0x3032000000;
    pcStack_af8 = FUN_1059d5bd4;
    uStack_af0 = 0x1059d5be4;
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_ab8 = puVar20;
    _objc_opt_new();
    puVar8 = puVar2;
    puStack_ae8 = puVar4;
    func_0x00010bf529e0();
    puVar20 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar8 != (undefined *)0x0) {
      _dispatch_group_enter(puVar25);
      puVar4 = puVar2;
      func_0x00010bf00560(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_b48 = puVar20;
      uStack_b40 = 0xc2000000;
      pcStack_b38 = FUN_1059d5bec;
      puStack_b30 = &UNK_110857be8;
      puStack_b20 = &uStack_ae0;
      puStack_b18 = &uStack_b10;
      _objc_retain(puVar25);
      puStack_b28 = puVar25;
      func_0x00010c244e80(puVar15);
      _objc_release(puVar4);
      _objc_release(puStack_b28);
    }
    puStack_b70 = &uStack_b78;
    uStack_b78 = 0;
    uStack_b68 = 0x3032000000;
    pcStack_b60 = FUN_1059d5bd4;
    uStack_b58 = 0x1059d5be4;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc_init();
    puVar8 = puVar3;
    puStack_b50 = puVar4;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
      _dispatch_group_enter(puVar25);
      puStack_bb0 = puVar20;
      uStack_ba8 = 0xc2000000;
      pcStack_ba0 = FUN_1059d5d88;
      puStack_b98 = &UNK_11084fa08;
      puStack_b80 = &uStack_b78;
      _objc_retain(puVar10);
      puStack_b90 = puVar10;
      _objc_retain(puVar25);
      puStack_b88 = puVar25;
      func_0x00010007380c(uVar12,&puStack_bb0);
      _objc_release(puStack_b88);
      _objc_release(puStack_b90);
    }
    puStack_c10 = puVar20;
    uStack_c08 = 0xc2000000;
    pcStack_c00 = FUN_1059d5dd0;
    puStack_bf8 = &UNK_1108cc1d0;
    puStack_bc0 = &uStack_b78;
    puStack_bb8 = &uStack_b10;
    puStack_bc8 = &uStack_ae0;
    puStack_bf0 = puVar5;
    uStack_be8 = uVar12;
    puStack_be0 = in_x5;
    puStack_bd8 = puVar11;
    puStack_bd0 = in_x6;
    _objc_retain();
    _objc_retain(in_x5);
    _objc_retain(uVar12);
    _objc_retain(puVar11);
    _objc_retain(puVar5);
    func_0x000100bc0718(puVar25,uVar12,&puStack_c10);
    _objc_release(puStack_bd0);
    _objc_release(puStack_be0);
    _objc_release(uStack_be8);
    _objc_release(puStack_bd8);
    _objc_release(puStack_bf0);
    __Block_object_dispose(&uStack_b78,8);
    _objc_release(puStack_b50);
    __Block_object_dispose(&uStack_b10,8);
    _objc_release(puStack_ae8);
    __Block_object_dispose(&uStack_ae0,8);
    _objc_release(puStack_ab8);
    _objc_release(in_x6);
    _objc_release(in_x5);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(puVar25);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_930) {
      return;
    }
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_b78,8);
    __Block_object_dispose(&uStack_b10,8);
    lVar14 = 8;
    __Block_object_dispose(&uStack_ae0);
    __Unwind_Resume();
    *(undefined8 *)(puVar15 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(lVar14 + 0x28) = 0;
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1059d4d74; end: 1059d4f13;  */

void FUN_1059d4d74(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined *in_x5;
  undefined *in_x6;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 unaff_x23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  long unaff_x25;
  long lVar27;
  undefined8 unaff_x26;
  long lVar28;
  long unaff_x27;
  ulong unaff_x28;
  undefined *puStack_810;
  undefined8 uStack_808;
  code *pcStack_800;
  undefined *puStack_7f8;
  undefined *puStack_7f0;
  undefined8 uStack_7e8;
  undefined *puStack_7e0;
  undefined1 *puStack_7d8;
  undefined *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined *puStack_7b0;
  undefined8 uStack_7a8;
  code *pcStack_7a0;
  undefined *puStack_798;
  undefined8 *puStack_790;
  undefined *puStack_788;
  undefined8 *puStack_780;
  undefined8 uStack_778;
  undefined8 *puStack_770;
  undefined8 uStack_768;
  code *pcStack_760;
  undefined8 uStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined8 *puStack_720;
  undefined8 *puStack_718;
  undefined8 uStack_710;
  undefined8 *puStack_708;
  undefined8 uStack_700;
  code *pcStack_6f8;
  undefined8 uStack_6f0;
  undefined *puStack_6e8;
  undefined8 uStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6c0;
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_530;
  long lStack_488;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  ulong uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar17 = param_1;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar26 = *plStack_110;
    do {
      unaff_x25 = 0;
      do {
        if (*plStack_110 != lVar26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined8 *)(lStack_118 + unaff_x25 * 8);
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar2);
        _objc_release(unaff_x23);
        unaff_x25 = unaff_x25 + 1;
      } while (lVar17 != unaff_x25);
      lVar17 = param_1;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126c0bf8;
  _objc_alloc();
  lVar17 = param_1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bbc0();
  _objc_release(lVar17);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_128 = FUN_1059d4f14;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar17 = param_1;
  func_0x00010c246e80();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar17;
  func_0x00010bf52a60();
  if (lVar26 == 0) {
    _objc_release(lVar17);
LAB_1059d5088:
    func_0x00010befa120(puVar2);
  }
  else {
    unaff_x28 = 0;
    lVar16 = *plStack_240;
    lStack_260 = param_1;
    lStack_258 = lVar17;
    do {
      lVar20 = 0;
      do {
        if (*plStack_240 != lVar16) {
          _objc_enumerationMutation(lStack_258);
        }
        unaff_x25 = *(long *)(lStack_248 + lVar20 * 8);
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = param_2;
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x25;
        func_0x00010c0720c0();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        uVar1 = (uint)unaff_x27 | (uint)unaff_x28;
        unaff_x28 = (ulong)uVar1;
        func_0x00010befa120(puVar2);
        lVar17 = lStack_258;
        lVar20 = lVar20 + 1;
      } while (lVar26 != lVar20);
      lVar26 = lStack_258;
      func_0x00010bf52a60();
    } while (lVar26 != 0);
    _objc_release(lVar17);
    unaff_x23 = 0;
    param_1 = lStack_260;
    if ((uVar1 & 1) == 0) goto LAB_1059d5088;
  }
  puVar3 = puVar2;
  FUN_1059d4d74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  lVar26 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    uStack_268 = 0x1059d5100;
    lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_2c0 = unaff_x28;
    lStack_2b8 = unaff_x27;
    uStack_2b0 = unaff_x26;
    lStack_2a8 = unaff_x25;
    puStack_2a0 = puVar2;
    uStack_298 = unaff_x23;
    puStack_290 = puVar3;
    lStack_288 = lVar17;
    uStack_280 = param_2;
    lStack_278 = param_1;
    ppuStack_270 = &puStack_130;
    _objc_alloc_init();
    lStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    plStack_400 = (long *)0x0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    lVar17 = *(long *)(lVar26 + 0x20);
    _objc_retain(lVar17);
    puVar13 = &uStack_410;
    puVar14 = auStack_350;
    uVar15 = 0x10;
    lStack_488 = lVar17;
    func_0x00010bf52a60();
    if (lStack_488 != 0) {
      lVar16 = *plStack_400;
      do {
        lVar20 = 0;
        do {
          if (*plStack_400 != lVar16) {
            _objc_enumerationMutation(lVar17);
          }
          lVar19 = *(long *)(lStack_408 + lVar20 * 8);
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          lVar7 = lVar19;
          func_0x00010c09a120();
          _objc_retainAutoreleasedReturnValue();
          lVar27 = lVar7;
          func_0x00010bf52a60();
          lVar9 = lRam0000000000000000;
          while (lVar27 != 0) {
            lVar28 = 0;
            do {
              if (lRam0000000000000000 != lVar9) {
                _objc_enumerationMutation(lVar7);
              }
              lVar18 = *(long *)(lVar28 * 8);
              lVar22 = lVar18;
              func_0x00010c27dd80();
              if ((int)lVar22 == 0) {
                lVar8 = *(long *)(lVar26 + 0x28);
                lVar22 = lVar18;
                func_0x00010c122b80(lVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar22);
                lVar24 = *(long *)(lVar26 + 0x30);
                lVar22 = lVar18;
                func_0x00010c122b80();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(lVar24);
                _objc_retain(lVar22);
                lVar21 = lVar22;
                func_0x00010c08fa60();
                if (lVar21 == 0) {
                  _objc_release(lVar22);
LAB_1059d548c:
                  _objc_release(lVar24);
                  lVar18 = lVar22;
                  goto LAB_1059d54d4;
                }
                lVar21 = lVar24;
                func_0x00010bf4b900();
                _objc_release(lVar22);
                _objc_release(lVar24);
                _objc_release(lVar22);
                if (lVar8 == 0) {
                  if ((int)lVar21 != 0) goto LAB_1059d54b4;
                }
                else if ((int)lVar21 != 0) {
                  uVar15 = *(undefined8 *)(lVar26 + 0x28);
                  lVar22 = lVar18;
                  func_0x00010c122b80(lVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0e00e0(uVar15);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar2);
                  _objc_release(uVar15);
                  _objc_release(lVar22);
LAB_1059d54b4:
                  func_0x00010c122b80(lVar18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar25 = puVar3;
                  goto LAB_1059d54cc;
                }
              }
              else {
                lVar22 = lVar18;
                func_0x00010c27dd80();
                if ((int)lVar22 != 1) goto LAB_1059d54dc;
                lVar21 = *(long *)(lVar26 + 0x38);
                lVar22 = lVar18;
                func_0x00010c122b80(lVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar22);
                if (lVar21 != 0) {
                  lVar22 = *(long *)(lVar26 + 0x38);
                  lVar21 = lVar18;
                  func_0x00010c122b80(lVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar21);
                  lVar21 = lVar22;
                  func_0x00010bfcef60();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar22;
                  func_0x00010bfcef60();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  lVar24 = lVar21;
                  if (lVar8 == 0) {
                    lVar8 = *(long *)(lVar26 + 0x40);
                    (**(code **)(lVar8 + 0x10))(lVar8,lVar22);
                    _objc_retainAutoreleasedReturnValue();
                    lVar24 = lVar8;
                    func_0x00010c2711a0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar21);
                    _objc_release(lVar8);
                  }
                  func_0x00010befa120(puVar5);
                  func_0x00010c122b80(lVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar6);
                  _objc_release(lVar18);
                  goto LAB_1059d548c;
                }
                func_0x00010c122b80(lVar18);
                _objc_retainAutoreleasedReturnValue();
                puVar25 = puVar6;
LAB_1059d54cc:
                func_0x00010befa120(puVar25);
LAB_1059d54d4:
                _objc_release(lVar18);
              }
LAB_1059d54dc:
              lVar28 = lVar28 + 1;
            } while (lVar27 != lVar28);
            lVar27 = lVar7;
            func_0x00010bf52a60();
          }
          _objc_release(lVar7);
          puVar25 = PTR_PTR_1126b5478;
          _objc_alloc(PTR_PTR_1126b5478);
          lVar27 = lVar19;
          func_0x00010c09a080();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar19;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5ab40(lVar19);
          in_x5 = puVar5;
          in_x6 = puVar3;
          func_0x00010c026340(puVar25);
          _objc_release(lVar9);
          _objc_release(lVar27);
          puVar10 = puVar3;
          func_0x00010bf529e0();
          if ((puVar10 != (undefined *)0x0) ||
             (puVar10 = puVar6, func_0x00010bf529e0(), puVar10 != (undefined *)0x0)) {
            func_0x00010befa120(puVar4);
          }
          _objc_release(puVar25);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar2);
          lVar20 = lVar20 + 1;
        } while (lVar20 != lStack_488);
        puVar13 = &uStack_410;
        puVar14 = auStack_350;
        uVar15 = 0x10;
        lStack_488 = lVar17;
        func_0x00010bf52a60();
      } while (lStack_488 != 0);
    }
    _objc_release(lVar17);
    puVar2 = puVar4;
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
      return;
    }
    ___stack_chk_fail();
    lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar2);
    _objc_retain(puVar13);
    _objc_retain(puVar14);
    _objc_retain(uVar15);
    _objc_retain(in_x5);
    _objc_retain(in_x6);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    lStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    plStack_660 = (long *)0x0;
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    _objc_retain(puVar4);
    puVar6 = puVar4;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar17 = *plStack_660;
      do {
        puVar25 = (undefined *)0x0;
        do {
          if (*plStack_660 != lVar17) {
            _objc_enumerationMutation(puVar4);
          }
          lVar16 = *(long *)(lStack_668 + (long)puVar25 * 8);
          lStack_6a8 = 0;
          uStack_6b0 = 0;
          uStack_698 = 0;
          plStack_6a0 = (long *)0x0;
          uStack_688 = 0;
          uStack_690 = 0;
          uStack_678 = 0;
          uStack_680 = 0;
          func_0x00010c09a120();
          _objc_retainAutoreleasedReturnValue();
          lVar26 = lVar16;
          func_0x00010bf52a60();
          if (lVar26 != 0) {
            lVar20 = *plStack_6a0;
            do {
              lVar27 = 0;
              do {
                if (*plStack_6a0 != lVar20) {
                  _objc_enumerationMutation(lVar16);
                }
                uVar23 = *(undefined8 *)(lStack_6a8 + lVar27 * 8);
                uVar11 = uVar23;
                func_0x00010c27dd80();
                puVar10 = puVar3;
                if (((int)uVar11 == 0) ||
                   (uVar11 = uVar23, func_0x00010c27dd80(), puVar10 = puVar5, (int)uVar11 == 1)) {
                  func_0x00010c122b80(uVar23);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar10);
                  _objc_release(uVar23);
                }
                lVar27 = lVar27 + 1;
              } while (lVar26 != lVar27);
              lVar26 = lVar16;
              func_0x00010bf52a60();
            } while (lVar26 != 0);
          }
          _objc_release(lVar16);
          puVar25 = puVar25 + 1;
        } while (puVar25 != puVar6);
        puVar6 = puVar4;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
    }
    puVar25 = puVar4;
    _objc_release();
    _dispatch_group_create();
    puStack_6d8 = &uStack_6e0;
    uStack_6e0 = 0;
    uStack_6d0 = 0x3032000000;
    pcStack_6c8 = FUN_1059d5bd4;
    uStack_6c0 = 0x1059d5be4;
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puStack_708 = &uStack_710;
    uStack_710 = 0;
    uStack_700 = 0x3032000000;
    pcStack_6f8 = FUN_1059d5bd4;
    uStack_6f0 = 0x1059d5be4;
    puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_6b8 = puVar6;
    _objc_opt_new();
    puVar12 = puVar3;
    puStack_6e8 = puVar10;
    func_0x00010bf529e0();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar12 != (undefined *)0x0) {
      _dispatch_group_enter(puVar25);
      puVar10 = puVar3;
      func_0x00010bf00560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_748 = puVar6;
      uStack_740 = 0xc2000000;
      pcStack_738 = FUN_1059d5bec;
      puStack_730 = &UNK_110857be8;
      puStack_720 = &uStack_6e0;
      puStack_718 = &uStack_710;
      _objc_retain(puVar25);
      puStack_728 = puVar25;
      func_0x00010c244e80(puVar2);
      _objc_release(puVar10);
      _objc_release(puStack_728);
    }
    puStack_770 = &uStack_778;
    uStack_778 = 0;
    uStack_768 = 0x3032000000;
    pcStack_760 = FUN_1059d5bd4;
    uStack_758 = 0x1059d5be4;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc_init();
    puVar12 = puVar5;
    puStack_750 = puVar10;
    func_0x00010bf529e0();
    if (puVar12 != (undefined *)0x0) {
      _dispatch_group_enter(puVar25);
      puStack_7b0 = puVar6;
      uStack_7a8 = 0xc2000000;
      pcStack_7a0 = FUN_1059d5d88;
      puStack_798 = &UNK_11084fa08;
      puStack_780 = &uStack_778;
      _objc_retain(puVar13);
      puStack_790 = puVar13;
      _objc_retain(puVar25);
      puStack_788 = puVar25;
      func_0x00010007380c(uVar15,&puStack_7b0);
      _objc_release(puStack_788);
      _objc_release(puStack_790);
    }
    puStack_810 = puVar6;
    uStack_808 = 0xc2000000;
    pcStack_800 = FUN_1059d5dd0;
    puStack_7f8 = &UNK_1108cc1d0;
    puStack_7c0 = &uStack_778;
    puStack_7b8 = &uStack_710;
    puStack_7c8 = &uStack_6e0;
    puStack_7f0 = puVar4;
    uStack_7e8 = uVar15;
    puStack_7e0 = in_x5;
    puStack_7d8 = puVar14;
    puStack_7d0 = in_x6;
    _objc_retain();
    _objc_retain(in_x5);
    _objc_retain(uVar15);
    _objc_retain(puVar14);
    _objc_retain(puVar4);
    func_0x000100bc0718(puVar25,uVar15,&puStack_810);
    _objc_release(puStack_7d0);
    _objc_release(puStack_7e0);
    _objc_release(uStack_7e8);
    _objc_release(puStack_7d8);
    _objc_release(puStack_7f0);
    __Block_object_dispose(&uStack_778,8);
    _objc_release(puStack_750);
    __Block_object_dispose(&uStack_710,8);
    _objc_release(puStack_6e8);
    __Block_object_dispose(&uStack_6e0,8);
    _objc_release(puStack_6b8);
    _objc_release(in_x6);
    _objc_release(in_x5);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar25);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
      return;
    }
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_778,8);
    __Block_object_dispose(&uStack_710,8);
    lVar17 = 8;
    __Block_object_dispose(&uStack_6e0);
    __Unwind_Resume();
    *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(lVar17 + 0x28) = 0;
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059d4f14; end: 1059d565f;  */

void FUN_1059d4f14(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined *in_x5;
  undefined *in_x6;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 unaff_x23;
  long lVar25;
  undefined *puVar26;
  undefined8 unaff_x25;
  long lVar27;
  undefined8 unaff_x26;
  long lVar28;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined *puStack_6f0;
  undefined8 uStack_6e8;
  code *pcStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined8 uStack_6c8;
  undefined *puStack_6c0;
  undefined1 *puStack_6b8;
  undefined *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  code *pcStack_680;
  undefined *puStack_678;
  undefined8 *puStack_670;
  undefined *puStack_668;
  undefined8 *puStack_660;
  undefined8 uStack_658;
  undefined8 *puStack_650;
  undefined8 uStack_648;
  code *pcStack_640;
  undefined8 uStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined8 uStack_620;
  code *pcStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  code *pcStack_5d8;
  undefined8 uStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_410;
  long lStack_368;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
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
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar18 = param_1;
  func_0x00010c246e80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar18;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    _objc_release(lVar18);
  }
  else {
    unaff_x28 = 0;
    lVar17 = *plStack_120;
    lStack_140 = param_1;
    lStack_138 = lVar18;
    do {
      lVar21 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(lStack_138);
        }
        unaff_x25 = *(undefined8 *)(lStack_128 + lVar21 * 8);
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = param_2;
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x25;
        func_0x00010c0720c0();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        uVar1 = (uint)unaff_x27 | (uint)unaff_x28;
        unaff_x28 = (ulong)uVar1;
        func_0x00010befa120(puVar2);
        lVar18 = lStack_138;
        lVar21 = lVar21 + 1;
      } while (lVar3 != lVar21);
      lVar3 = lStack_138;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    _objc_release(lVar18);
    unaff_x23 = 0;
    param_1 = lStack_140;
    if ((uVar1 & 1) != 0) goto LAB_1059d5094;
  }
  func_0x00010befa120(puVar2);
LAB_1059d5094:
  puVar4 = puVar2;
  FUN_1059d4d74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  uStack_148 = 0x1059d5100;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  puStack_180 = puVar2;
  uStack_178 = unaff_x23;
  puStack_170 = puVar4;
  lStack_168 = lVar18;
  uStack_160 = param_2;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lVar18 = *(long *)(lVar3 + 0x20);
  _objc_retain(lVar18);
  puVar14 = &uStack_2f0;
  puVar15 = auStack_230;
  uVar16 = 0x10;
  lStack_368 = lVar18;
  func_0x00010bf52a60();
  if (lStack_368 != 0) {
    lVar17 = *plStack_2e0;
    do {
      lVar21 = 0;
      do {
        if (*plStack_2e0 != lVar17) {
          _objc_enumerationMutation(lVar18);
        }
        lVar20 = *(long *)(lStack_2e8 + lVar21 * 8);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        lVar8 = lVar20;
        func_0x00010c09a120();
        _objc_retainAutoreleasedReturnValue();
        lVar27 = lVar8;
        func_0x00010bf52a60();
        lVar10 = lRam0000000000000000;
        while (lVar27 != 0) {
          lVar28 = 0;
          do {
            if (lRam0000000000000000 != lVar10) {
              _objc_enumerationMutation(lVar8);
            }
            lVar19 = *(long *)(lVar28 * 8);
            lVar23 = lVar19;
            func_0x00010c27dd80();
            if ((int)lVar23 == 0) {
              lVar9 = *(long *)(lVar3 + 0x28);
              lVar23 = lVar19;
              func_0x00010c122b80(lVar19);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar23);
              lVar25 = *(long *)(lVar3 + 0x30);
              lVar23 = lVar19;
              func_0x00010c122b80();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(lVar25);
              _objc_retain(lVar23);
              lVar22 = lVar23;
              func_0x00010c08fa60();
              if (lVar22 == 0) {
                _objc_release(lVar23);
LAB_1059d548c:
                _objc_release(lVar25);
                lVar19 = lVar23;
                goto LAB_1059d54d4;
              }
              lVar22 = lVar25;
              func_0x00010bf4b900();
              _objc_release(lVar23);
              _objc_release(lVar25);
              _objc_release(lVar23);
              if (lVar9 == 0) {
                if ((int)lVar22 != 0) goto LAB_1059d54b4;
              }
              else if ((int)lVar22 != 0) {
                uVar16 = *(undefined8 *)(lVar3 + 0x28);
                lVar23 = lVar19;
                func_0x00010c122b80(lVar19);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0(uVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar2);
                _objc_release(uVar16);
                _objc_release(lVar23);
LAB_1059d54b4:
                func_0x00010c122b80(lVar19);
                _objc_retainAutoreleasedReturnValue();
                puVar26 = puVar4;
                goto LAB_1059d54cc;
              }
            }
            else {
              lVar23 = lVar19;
              func_0x00010c27dd80();
              if ((int)lVar23 != 1) goto LAB_1059d54dc;
              lVar22 = *(long *)(lVar3 + 0x38);
              lVar23 = lVar19;
              func_0x00010c122b80(lVar19);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar23);
              if (lVar22 != 0) {
                lVar23 = *(long *)(lVar3 + 0x38);
                lVar22 = lVar19;
                func_0x00010c122b80(lVar19);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar22);
                lVar22 = lVar23;
                func_0x00010bfcef60();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar23;
                func_0x00010bfcef60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                lVar25 = lVar22;
                if (lVar9 == 0) {
                  lVar9 = *(long *)(lVar3 + 0x40);
                  (**(code **)(lVar9 + 0x10))(lVar9,lVar23);
                  _objc_retainAutoreleasedReturnValue();
                  lVar25 = lVar9;
                  func_0x00010c2711a0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar22);
                  _objc_release(lVar9);
                }
                func_0x00010befa120(puVar6);
                func_0x00010c122b80(lVar19);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar7);
                _objc_release(lVar19);
                goto LAB_1059d548c;
              }
              func_0x00010c122b80(lVar19);
              _objc_retainAutoreleasedReturnValue();
              puVar26 = puVar7;
LAB_1059d54cc:
              func_0x00010befa120(puVar26);
LAB_1059d54d4:
              _objc_release(lVar19);
            }
LAB_1059d54dc:
            lVar28 = lVar28 + 1;
          } while (lVar27 != lVar28);
          lVar27 = lVar8;
          func_0x00010bf52a60();
        }
        _objc_release(lVar8);
        puVar26 = PTR_PTR_1126b5478;
        _objc_alloc(PTR_PTR_1126b5478);
        lVar27 = lVar20;
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar20;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5ab40(lVar20);
        in_x5 = puVar6;
        in_x6 = puVar4;
        func_0x00010c026340(puVar26);
        _objc_release(lVar10);
        _objc_release(lVar27);
        puVar11 = puVar4;
        func_0x00010bf529e0();
        if ((puVar11 != (undefined *)0x0) ||
           (puVar11 = puVar7, func_0x00010bf529e0(), puVar11 != (undefined *)0x0)) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(puVar26);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar2);
        lVar21 = lVar21 + 1;
      } while (lVar21 != lStack_368);
      puVar14 = &uStack_2f0;
      puVar15 = auStack_230;
      uVar16 = 0x10;
      lStack_368 = lVar18;
      func_0x00010bf52a60();
    } while (lStack_368 != 0);
  }
  _objc_release(lVar18);
  puVar2 = puVar5;
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  lStack_410 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar2);
  _objc_retain(puVar14);
  _objc_retain(puVar15);
  _objc_retain(uVar16);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  _objc_retain(puVar5);
  puVar7 = puVar5;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar18 = *plStack_540;
    do {
      puVar26 = (undefined *)0x0;
      do {
        if (*plStack_540 != lVar18) {
          _objc_enumerationMutation(puVar5);
        }
        lVar17 = *(long *)(lStack_548 + (long)puVar26 * 8);
        lStack_588 = 0;
        uStack_590 = 0;
        uStack_578 = 0;
        plStack_580 = (long *)0x0;
        uStack_568 = 0;
        uStack_570 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        func_0x00010c09a120();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar17;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar21 = *plStack_580;
          do {
            lVar27 = 0;
            do {
              if (*plStack_580 != lVar21) {
                _objc_enumerationMutation(lVar17);
              }
              uVar24 = *(undefined8 *)(lStack_588 + lVar27 * 8);
              uVar12 = uVar24;
              func_0x00010c27dd80();
              puVar11 = puVar4;
              if (((int)uVar12 == 0) ||
                 (uVar12 = uVar24, func_0x00010c27dd80(), puVar11 = puVar6, (int)uVar12 == 1)) {
                func_0x00010c122b80(uVar24);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar11);
                _objc_release(uVar24);
              }
              lVar27 = lVar27 + 1;
            } while (lVar3 != lVar27);
            lVar3 = lVar17;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar17);
        puVar26 = puVar26 + 1;
      } while (puVar26 != puVar7);
      puVar7 = puVar5;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  puVar26 = puVar5;
  _objc_release();
  _dispatch_group_create();
  puStack_5b8 = &uStack_5c0;
  uStack_5c0 = 0;
  uStack_5b0 = 0x3032000000;
  pcStack_5a8 = FUN_1059d5bd4;
  uStack_5a0 = 0x1059d5be4;
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puStack_5e8 = &uStack_5f0;
  uStack_5f0 = 0;
  uStack_5e0 = 0x3032000000;
  pcStack_5d8 = FUN_1059d5bd4;
  uStack_5d0 = 0x1059d5be4;
  puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_598 = puVar7;
  _objc_opt_new();
  puVar13 = puVar4;
  puStack_5c8 = puVar11;
  func_0x00010bf529e0();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar13 != (undefined *)0x0) {
    _dispatch_group_enter(puVar26);
    puVar11 = puVar4;
    func_0x00010bf00560(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_628 = puVar7;
    uStack_620 = 0xc2000000;
    pcStack_618 = FUN_1059d5bec;
    puStack_610 = &UNK_110857be8;
    puStack_600 = &uStack_5c0;
    puStack_5f8 = &uStack_5f0;
    _objc_retain(puVar26);
    puStack_608 = puVar26;
    func_0x00010c244e80(puVar2);
    _objc_release(puVar11);
    _objc_release(puStack_608);
  }
  puStack_650 = &uStack_658;
  uStack_658 = 0;
  uStack_648 = 0x3032000000;
  pcStack_640 = FUN_1059d5bd4;
  uStack_638 = 0x1059d5be4;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc_init();
  puVar13 = puVar6;
  puStack_630 = puVar11;
  func_0x00010bf529e0();
  if (puVar13 != (undefined *)0x0) {
    _dispatch_group_enter(puVar26);
    puStack_690 = puVar7;
    uStack_688 = 0xc2000000;
    pcStack_680 = FUN_1059d5d88;
    puStack_678 = &UNK_11084fa08;
    puStack_660 = &uStack_658;
    _objc_retain(puVar14);
    puStack_670 = puVar14;
    _objc_retain(puVar26);
    puStack_668 = puVar26;
    func_0x00010007380c(uVar16,&puStack_690);
    _objc_release(puStack_668);
    _objc_release(puStack_670);
  }
  puStack_6f0 = puVar7;
  uStack_6e8 = 0xc2000000;
  pcStack_6e0 = FUN_1059d5dd0;
  puStack_6d8 = &UNK_1108cc1d0;
  puStack_6a0 = &uStack_658;
  puStack_698 = &uStack_5f0;
  puStack_6a8 = &uStack_5c0;
  puStack_6d0 = puVar5;
  uStack_6c8 = uVar16;
  puStack_6c0 = in_x5;
  puStack_6b8 = puVar15;
  puStack_6b0 = in_x6;
  _objc_retain();
  _objc_retain(in_x5);
  _objc_retain(uVar16);
  _objc_retain(puVar15);
  _objc_retain(puVar5);
  func_0x000100bc0718(puVar26,uVar16,&puStack_6f0);
  _objc_release(puStack_6b0);
  _objc_release(puStack_6c0);
  _objc_release(uStack_6c8);
  _objc_release(puStack_6b8);
  _objc_release(puStack_6d0);
  __Block_object_dispose(&uStack_658,8);
  _objc_release(puStack_630);
  __Block_object_dispose(&uStack_5f0,8);
  _objc_release(puStack_5c8);
  __Block_object_dispose(&uStack_5c0,8);
  _objc_release(puStack_598);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(puVar26);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_410) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_658,8);
  __Block_object_dispose(&uStack_5f0,8);
  lVar18 = 8;
  __Block_object_dispose(&uStack_5c0);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
  *(undefined8 *)(lVar18 + 0x28) = 0;
  return;
}



/* Entry: 1059d5660; end: 1059d5bd3;  */

void FUN_1059d5660(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_360;
  undefined8 uStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_1);
  lVar9 = param_1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar10 = *plStack_1b0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        lVar3 = *(long *)(lStack_1b8 + lVar13 * 8);
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        func_0x00010c09a120();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar11 = *plStack_1f0;
          do {
            lVar14 = 0;
            do {
              if (*plStack_1f0 != lVar11) {
                _objc_enumerationMutation(lVar3);
              }
              uVar12 = *(undefined8 *)(lStack_1f8 + lVar14 * 8);
              uVar5 = uVar12;
              func_0x00010c27dd80();
              puVar6 = puVar1;
              if (((int)uVar5 == 0) ||
                 (uVar5 = uVar12, func_0x00010c27dd80(), puVar6 = puVar2, (int)uVar5 == 1)) {
                func_0x00010c122b80(uVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar6);
                _objc_release(uVar12);
              }
              lVar14 = lVar14 + 1;
            } while (lVar4 != lVar14);
            lVar4 = lVar3;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar9);
      lVar9 = param_1;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  lVar9 = param_1;
  _objc_release();
  _dispatch_group_create();
  puStack_228 = &uStack_230;
  uStack_230 = 0;
  uStack_220 = 0x3032000000;
  pcStack_218 = FUN_1059d5bd4;
  uStack_210 = 0x1059d5be4;
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puStack_258 = &uStack_260;
  uStack_260 = 0;
  uStack_250 = 0x3032000000;
  pcStack_248 = FUN_1059d5bd4;
  uStack_240 = 0x1059d5be4;
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_208 = puVar6;
  _objc_opt_new();
  puVar8 = puVar1;
  puStack_238 = puVar7;
  func_0x00010bf529e0();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar8 != (undefined *)0x0) {
    _dispatch_group_enter(lVar9);
    puVar7 = puVar1;
    func_0x00010bf00560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_298 = puVar6;
    uStack_290 = 0xc2000000;
    pcStack_288 = FUN_1059d5bec;
    puStack_280 = &UNK_110857be8;
    puStack_270 = &uStack_230;
    puStack_268 = &uStack_260;
    _objc_retain(lVar9);
    lStack_278 = lVar9;
    func_0x00010c244e80(param_2);
    _objc_release(puVar7);
    _objc_release(lStack_278);
  }
  puStack_2c0 = &uStack_2c8;
  uStack_2c8 = 0;
  uStack_2b8 = 0x3032000000;
  pcStack_2b0 = FUN_1059d5bd4;
  uStack_2a8 = 0x1059d5be4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc_init();
  puVar8 = puVar2;
  puStack_2a0 = puVar7;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    _dispatch_group_enter(lVar9);
    puStack_300 = puVar6;
    uStack_2f8 = 0xc2000000;
    pcStack_2f0 = FUN_1059d5d88;
    puStack_2e8 = &UNK_11084fa08;
    puStack_2d0 = &uStack_2c8;
    _objc_retain(param_3);
    uStack_2e0 = param_3;
    _objc_retain(lVar9);
    lStack_2d8 = lVar9;
    func_0x00010007380c(param_5,&puStack_300);
    _objc_release(lStack_2d8);
    _objc_release(uStack_2e0);
  }
  puStack_360 = puVar6;
  uStack_358 = 0xc2000000;
  pcStack_350 = FUN_1059d5dd0;
  puStack_348 = &UNK_1108cc1d0;
  puStack_310 = &uStack_2c8;
  puStack_308 = &uStack_260;
  puStack_318 = &uStack_230;
  lStack_340 = param_1;
  uStack_338 = param_5;
  uStack_330 = param_6;
  uStack_328 = param_4;
  uStack_320 = param_7;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x000100bc0718(lVar9,param_5,&puStack_360);
  _objc_release(uStack_320);
  _objc_release(uStack_330);
  _objc_release(uStack_338);
  _objc_release(uStack_328);
  _objc_release(lStack_340);
  __Block_object_dispose(&uStack_2c8,8);
  _objc_release(puStack_2a0);
  __Block_object_dispose(&uStack_260,8);
  _objc_release(puStack_238);
  __Block_object_dispose(&uStack_230,8);
  _objc_release(puStack_208);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_2c8,8);
  __Block_object_dispose(&uStack_260,8);
  lVar9 = 8;
  __Block_object_dispose(&uStack_230);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 1059d5bd4; end: 1059d5beb;  */

void FUN_1059d5bd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1059d5bec; end: 1059d5d87;  */

void FUN_1059d5bec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar5 = *(undefined8 *)(lVar8 * 8);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      uVar7 = uVar5;
      func_0x00010901d7c4(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c2923e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar7);
      uVar7 = uVar5;
      func_0x000100bf119c();
      if ((int)uVar7 != 0) {
        uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        func_0x00010c2923e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7);
        _objc_release(uVar5);
      }
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfc2300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar7;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 1059d5d88; end: 1059d5dcf;  */

void FUN_1059d5d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc2300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059d5dd0; end: 1059d5f33;  */

void FUN_1059d5dd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  _objc_retain(uVar7);
  _objc_retain(uVar4);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1059d5100;
  puStack_88 = &UNK_1108b24d8;
  uStack_80 = uVar1;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar6;
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  func_0x00010007380c(uVar3,&puStack_a0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059d5f34; end: 1059d5fb7;  */

void FUN_1059d5f34(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 1059d5fb8; end: 1059d6113; -[SCSendToListsLogger initWithSessionId:userTrackedLogger:performerProvider:] */

undefined8 *
FUN_1059d5fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb378;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    _objc_retain();
    puVar3 = puVar1;
    func_0x00010bdf12a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059d6114; end: 1059d61eb; -[SCSendToListsLogger logListCreateWithListDataModels:] */

void FUN_1059d6114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d61ec; end: 1059d621f;  */

void FUN_1059d61ec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be554c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d6220; end: 1059d62f7; -[SCSendToListsLogger logListDeleteWithListDataModels:] */

void FUN_1059d6220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d62f8; end: 1059d632b;  */

void FUN_1059d62f8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be554e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d632c; end: 1059d6403; -[SCSendToListsLogger logListEditWithListDataModels:] */

void FUN_1059d632c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d6404; end: 1059d6437;  */

void FUN_1059d6404(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d6438; end: 1059d6537; -[SCSendToListsLogger logListAction:listId:] */

void FUN_1059d6438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d6538; end: 1059d656b;  */

void FUN_1059d6538(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be554a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d656c; end: 1059d666b; -[SCSendToListsLogger logRecipientActions:listId:] */

void FUN_1059d656c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d666c; end: 1059d669f;  */

void FUN_1059d666c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d66a0; end: 1059d66fb; -[SCSendToListsLogger _createPerformerWithPerformerProvider:] */

void FUN_1059d66a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059d66fc; end: 1059d677b; -[SCSendToListsLogger _logListCreateWithListDataModels:] */

void FUN_1059d66fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1059d677c(param_3,&PTR____CFConstantStringClassReference_110e152d8,
                *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  func_0x00010be92140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059d677c; end: 1059d6c1b;  */

void FUN_1059d677c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b5390;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar6 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar16 = *(long *)(lVar15 * 8);
      if (lVar16 != 0) {
        lVar7 = lVar16;
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          lVar7 = lVar16;
          func_0x00010c09a080(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(lVar7);
          lVar7 = lVar16;
          func_0x00010c09a080();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          lVar8 = lVar16;
          func_0x00010c244720(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar4);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          lVar7 = lVar16;
          func_0x00010c09a080();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bfceb60(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar5);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(lVar16);
          _objc_release(lVar7);
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar6 != lVar15);
    lVar6 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  if (puVar3 == (undefined *)0x0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar9);
  }
  func_0x00010c1be020(puVar2);
  _objc_release(ppuVar11);
  puVar9 = puVar4;
  func_0x0001059d7104(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be1a0(puVar2);
  _objc_release(puVar9);
  puVar9 = puVar5;
  func_0x0001059d7104(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdfe0(puVar2);
  _objc_release(puVar9);
  func_0x00010c1be200(puVar2);
  func_0x00010c1fcc00(puVar2);
  func_0x00010c1be1e0(puVar2);
  func_0x00010c1bdfa0(puVar2);
  uVar12 = param_5;
  func_0x00010c1e8840(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  FUN_1059d677c(uVar12,&PTR____CFConstantStringClassReference_110e152f8,*(undefined8 *)(param_1 + 8)
                ,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar13);
  func_0x00010be92140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 1059d6c1c; end: 1059d6c9b; -[SCSendToListsLogger _logListDeleteWithListDataModels:] */

void FUN_1059d6c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1059d677c(param_3,&PTR____CFConstantStringClassReference_110e152f8,
                *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  func_0x00010be92140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059d6c9c; end: 1059d6d1b; -[SCSendToListsLogger _logListEditWithListDataModels:] */

void FUN_1059d6c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1059d677c(param_3,&PTR____CFConstantStringClassReference_110e15318,
                *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  func_0x00010be92140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059d6d1c; end: 1059d6ddf; -[SCSendToListsLogger _logListAction:listId:] */

void FUN_1059d6d1c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c0c00;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c161620();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c161f60(puVar1,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar2);
  if (param_5 != 0) {
    func_0x00010c1ffc60(puVar1,param_3,param_5);
  }
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x20),param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1059d6de0; end: 1059d7053; -[SCSendToListsLogger _logRecipientActions:listId:] */

void FUN_1059d6de0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuStack_158;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    ppuStack_158 = &PTR____CFConstantStringClassReference_110ed80f8;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar3 = uVar10;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          uVar3 = uVar10;
          func_0x00010c07d660();
          ppuVar1 = ppuStack_158;
          if ((uint)uVar3 == 0) {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ed8118;
          }
          _objc_retain(ppuVar1);
          puVar5 = PTR_PTR_1126c0c08;
          _objc_opt_new(PTR_PTR_1126c0c08);
          uVar4 = uVar10;
          func_0x00010c15a7a0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x000108425950();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e8900(puVar5,param_2,uVar6);
          _objc_release(uVar6);
          _objc_release(uVar4);
          func_0x00010c15a7a0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar10;
          func_0x0001084259b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21acc0(puVar5,param_2,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar10);
          func_0x00010c161620(puVar5,param_2,(uint)uVar3 ^ 1);
          func_0x00010c206c40(puVar5,param_2,0);
          if (param_4 != 0) {
            func_0x00010c1ffc80(puVar5,param_2,param_4);
          }
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
          func_0x00010be554a0(param_1,param_2,ppuVar1,param_4);
          _objc_release(puVar5);
          _objc_release(ppuVar1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  *(undefined **)(param_3 + 0x20) = puVar5;
  _objc_release(uVar7);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  *(undefined **)(param_3 + 0x28) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1059d7054; end: 1059d70af; -[SCSendToListsLogger _reset] */

void FUN_1059d7054(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059d70b0; end: 1059d7193; -[SCSendToListsLogger .cxx_destruct] */

void FUN_1059d70b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059d7194; end: 1059d7577; -[SCSendToListsDataCoordinator initWithUserSession:recipientListsDataCoordinator:snapchattersDataFetcher:groupsDataFetcher:listsLogger:myDisplayName:sendToSuggestionsDataService:circumstanceEngine:] */

undefined8 *
FUN_1059d7194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126eb380;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000108ef1dd8();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[8];
    puVar1[8] = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0c10;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR____NSArray0__struct_11034ab48;
    FUN_1059d4d74(PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9a4a0(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    func_0x00010be399a0(puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059d7578; end: 1059d75b7;  */

void FUN_1059d7578(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebe320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059d75b8; end: 1059d7667; -[SCSendToListsDataCoordinator _initData] */

void FUN_1059d75b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059d7668; end: 1059d7793;  */

void FUN_1059d7668(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  uVar1 = 0;
  _dispatch_semaphore_create();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c09a6c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9fe0();
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059d7794; end: 1059d783b;  */

void FUN_1059d7794(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010becf460(lVar1);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1059d783c; end: 1059d7843;  */

void FUN_1059d783c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1059d7844; end: 1059d7847; -[SCSendToListsDataCoordinator hasSyncedListDataFromServer] */

void FUN_1059d7844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be34870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hasSyncedWithServer_11256abb8);
  return;
}



/* Entry: 1059d7848; end: 1059d7887; -[SCSendToListsDataCoordinator _hasSyncedWithServer] */

undefined8 FUN_1059d7848(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd1a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1059d7888; end: 1059d78cf; -[SCSendToListsDataCoordinator _lastServerSyncTimestamp] */

void FUN_1059d7888(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059d78d0; end: 1059d793f; -[SCSendToListsDataCoordinator logListAction:listId:] */

void FUN_1059d78d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9a00();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059d7940; end: 1059d79af; -[SCSendToListsDataCoordinator logRecipientActions:listId:] */

void FUN_1059d7940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad740();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059d79b0; end: 1059d7a87; -[SCSendToListsDataCoordinator sortedListsWithCompletion:] */

void FUN_1059d79b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d7a88; end: 1059d7b1f;  */

void FUN_1059d7a88(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010be10d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
    else {
      lVar2 = lVar1;
      func_0x00010c246e80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059d7b20; end: 1059d7b47; -[SCSendToListsDataCoordinator lazySortedListsObservable] */

void FUN_1059d7b20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059d7b48; end: 1059d7c3f; -[SCSendToListsDataCoordinator _sortedListsObservable] */

void FUN_1059d7b48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bf870a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059d7c40; end: 1059d7c73;  */

void FUN_1059d7c40(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d7c74; end: 1059d7d37; -[SCSendToListsDataCoordinator _publishSortedListsObservableWithSubject:] */

void FUN_1059d7c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059d7d38;
  puStack_40 = &UNK_110850cc8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d7d38; end: 1059d7d43;  */

void FUN_1059d7d38(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 1059d7d44; end: 1059d7e2f; -[SCSendToListsDataCoordinator listObservableForListId:] */

void FUN_1059d7d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1);
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



/* Entry: 1059d7e30; end: 1059d7e77;  */

void FUN_1059d7e30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4c600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059d7e78; end: 1059d7f8b; -[SCSendToListsDataCoordinator _listObservableForListId:] */

void FUN_1059d7e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059d7f8c; end: 1059d7fbf;  */

void FUN_1059d7f8c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d7fc0; end: 1059d812f; -[SCSendToListsDataCoordinator _publishListObservableForListId:listForListIdBehaviorSubject:] */

void FUN_1059d7fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c08d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059d8130;
  puStack_70 = &UNK_1108947d0;
  uStack_68 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1059d82b0;
  puStack_98 = &UNK_1108cc200;
  uStack_90 = param_4;
  _objc_retain(param_4);
  uVar2 = uVar4;
  func_0x00010c25ff60(uVar4,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d8130; end: 1059d82af;  */

void FUN_1059d8130(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_2);
      puVar4 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
LAB_1059d8268:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 0x20),PTR_s_next__112614028,lVar5);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      func_0x00010c09a080();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c0720c0();
      _objc_release(uVar7);
      if ((uVar3 & 1) != 0) {
        puVar4 = PTR_PTR_1126ae750;
        func_0x00010c0ec800(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        goto LAB_1059d8268;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1059d82b0; end: 1059d82bb;  */

void FUN_1059d82b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 1059d82bc; end: 1059d8393; -[SCSendToListsDataCoordinator listsMapWithCompletion:] */

void FUN_1059d82bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d8394; end: 1059d842b;  */

void FUN_1059d8394(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010be10d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
    else {
      lVar2 = lVar1;
      func_0x00010c09a0a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059d842c; end: 1059d852b; -[SCSendToListsDataCoordinator listWithListId:completion:] */

void FUN_1059d842c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


