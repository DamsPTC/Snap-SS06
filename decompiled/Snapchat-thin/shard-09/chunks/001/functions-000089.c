/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069a6248; end: 1069a6253; -[SCOpenPlusSubscribeActionHandler setPresentingViewController:] */

void FUN_1069a6248(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1069a6254; end: 1069a629f; -[SCOpenPlusSubscribeActionHandler plusManagementDidDismiss] */

void FUN_1069a6254(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069a62a0; end: 1069a62eb; -[SCOpenPlusSubscribeActionHandler plusSubscribeDidDismiss] */

void FUN_1069a62a0(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069a62ec; end: 1069a6303; -[SCOpenPlusSubscribeActionHandler containerViewController] */

void FUN_1069a62ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a6304; end: 1069a630f; -[SCOpenPlusSubscribeActionHandler setContainerViewController:] */

void FUN_1069a6304(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1069a6310; end: 1069a635f; -[SCOpenPlusSubscribeActionHandler .cxx_destruct] */

void FUN_1069a6310(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a6360; end: 1069a6367; -[SCSnapchattersActionHandler initWithSnapchattersDataMutator:uiContainer:webScopeExposer:] */

void FUN_1069a6360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c049d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithSnapchattersDataMutator__1125f0160);
  return;
}



/* Entry: 1069a6368; end: 1069a64db; -[SCSnapchattersActionHandler initWithSnapchattersDataMutator:uiContainer:webScopeExposer:webBrowsingScopeServices:] */

undefined1 *
FUN_1069a6368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4080;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bee20;
    _objc_alloc();
    func_0x00010c049c20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126cf770;
    _objc_alloc();
    func_0x00010c049c20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126cf750;
    func_0x00010c0d8a40();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c2f50;
    func_0x00010c0d8a60();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126cf778;
    _objc_alloc();
    func_0x00010c049d40();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126cf780;
    _objc_alloc();
    func_0x00010c049d40();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a64dc; end: 1069a6573; -[SCSnapchattersActionHandler setAddFriendsActionEventObservable:] */

void FUN_1069a64dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar1 = PTR_DAT_1126a4eb0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010010fab4(uVar4,puVar1);
  uVar3 = uVar4;
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  func_0x00010c165220(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069a6574; end: 1069a659b; -[SCSnapchattersActionHandler addFriendsActionEventObservable] */

void FUN_1069a6574(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069a659c; end: 1069a6697; -[SCSnapchattersActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1069a659c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfd0140(uVar1,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010bfd0140(uVar1,param_2,param_3,param_4,param_5);
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x18);
      func_0x00010bfd0140(uVar1,param_2,param_3,param_4,param_5);
      if ((uVar1 & 1) == 0) {
        uVar1 = *(ulong *)(param_1 + 0x20);
        func_0x00010bfd0140(uVar1,param_2,param_3,param_4,param_5);
        if ((uVar1 & 1) == 0) {
          uVar1 = *(ulong *)(param_1 + 0x28);
          func_0x00010bfd0140(uVar1,param_2,param_3,param_4,param_5);
          if ((uVar1 & 1) == 0) {
            uVar2 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010bfd0140(uVar2,param_2,param_3,param_4,param_5);
            goto LAB_1069a6650;
          }
        }
      }
    }
  }
  uVar2 = 1;
LAB_1069a6650:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1069a6698; end: 1069a6703; -[SCSnapchattersActionHandler .cxx_destruct] */

void FUN_1069a6698(long param_1)

{
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



/* Entry: 1069a6704; end: 1069a67ff; -[SCSnapchattersAdditionalActionHandler initWithSnapchattersDataMutator:additionalActionHandlersMap:uiContainer:] */

undefined1 *
FUN_1069a6704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f4088;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4128;
    _objc_alloc();
    func_0x00010c049d60();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new(PTR_PTR_1126ae568);
    func_0x00010c165220(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a6800; end: 1069a69bb; -[SCSnapchattersAdditionalActionHandler setAddFriendsActionEventObservable:] */

void FUN_1069a6800(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  _objc_release(uVar3);
  puVar2 = PTR_DAT_1126a4eb0;
  uVar8 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar8);
  uVar4 = uVar8;
  func_0x00010010fab4(uVar8,puVar2);
  uVar3 = uVar8;
  if ((int)uVar4 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar8);
  func_0x00010c165220(uVar3);
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      puVar2 = PTR_DAT_1126a4eb0;
      uVar9 = *(undefined8 *)(lVar10 * 8);
      _objc_retain(uVar9);
      uVar8 = uVar9;
      func_0x00010010fab4(uVar9,puVar2);
      uVar4 = uVar9;
      if ((int)uVar8 == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar9);
      func_0x00010c165220(uVar4);
      _objc_release(uVar4);
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1069a69bc; end: 1069a69e3; -[SCSnapchattersAdditionalActionHandler addFriendsActionEventObservable] */

void FUN_1069a69bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069a69e4; end: 1069a6ae7; -[SCSnapchattersAdditionalActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1069a69e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    lVar1 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = uVar4;
    func_0x00010bfd0140(uVar4,param_2,param_3,param_4,param_5);
    _objc_release(uVar4);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_1069a6ab8;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfd0140(uVar3,param_2,param_3,param_4,param_5);
LAB_1069a6ab8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1069a6ae8; end: 1069a6aff; -[SCSnapchattersAdditionalActionHandler presentingViewController] */

void FUN_1069a6ae8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a6b00; end: 1069a6b0b; -[SCSnapchattersAdditionalActionHandler setPresentingViewController:] */

void FUN_1069a6b00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1069a6b0c; end: 1069a6b4f; -[SCSnapchattersAdditionalActionHandler .cxx_destruct] */

void FUN_1069a6b0c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a6b50; end: 1069a6bf3; -[SCUnblockSnapchatterActionHandler initWithSnapchattersDataMutator:uiContainer:] */

undefined1 *
FUN_1069a6b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4090;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a6bf4; end: 1069a6e4b; -[SCUnblockSnapchatterActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1069a6bf4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126cf788;
  _objc_opt_class(PTR_PTR_1126cf788);
  uVar9 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar10);
  uVar8 = param_4;
  if ((uVar9 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(param_4);
  if (uVar8 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ded9d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded9d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aed70;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar12);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db6ad8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6ad8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar5 = PTR_PTR_1126aed70;
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
    puVar10 = (undefined *)0x0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar6 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar6);
    _objc_release(puVar7);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(ppuVar2);
  }
  bVar1 = uVar8 != 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return (ulong)bVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(puVar10);
  uVar9 = *(ulong *)(uVar8 + 0x20);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae5c0;
  uVar12 = *(undefined8 *)(uVar8 + 0x28);
  func_0x00010bf1d720(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f540(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar9);
  _objc_release(puVar10);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return uVar9;
}



/* Entry: 1069a6e4c; end: 1069a6ee7;  */

void FUN_1069a6e4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1d720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a6ee8; end: 1069a6ef7;  */

void FUN_1069a6ee8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1069a6ef8; end: 1069a6f27; -[SCUnblockSnapchatterActionHandler .cxx_destruct] */

void FUN_1069a6ef8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a6f28; end: 1069a6f87;  */

void FUN_1069a6f28(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daccf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daccf8,
                      &PTR____CFConstantStringClassReference_110e66b98,0);
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



/* Entry: 1069a6f88; end: 1069a702b; -[SCAddFriendsCameraRollPickerScope initWithUIContainer:isFromSettings:addfriendsCameraRollPickerWorkflowDelegate:] */

undefined1 *
FUN_1069a6f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4098;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a702c; end: 1069a7033; -[SCAddFriendsCameraRollPickerScope uiContainer] */

undefined8 FUN_1069a702c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069a7034; end: 1069a704b; -[SCAddFriendsCameraRollPickerScope addfriendsCameraRollPickerWorkflowDelegate] */

void FUN_1069a7034(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a704c; end: 1069a7053; -[SCAddFriendsCameraRollPickerScope isFromSettings] */

undefined1 FUN_1069a704c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1069a7054; end: 1069a707f; -[SCAddFriendsCameraRollPickerScope .cxx_destruct] */

void FUN_1069a7054(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1069a7080; end: 1069a7097;  */

void FUN_1069a7080(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e66c38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e66c38,
                      &PTR____CFConstantStringClassReference_110e66c18,0);
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



/* Entry: 1069a7098; end: 1069a729b; -[SCAddFriendsOperationalMetricsLogger initWithSnapchattersLoggingDataObservable:pageEventObservable:additionalPageEventObservable:friendingMetricsLogger:inviteContactSectionLogger:addFriendsPageType:addFriendPageEntryPoint:pageEntryType:inviteFriendsPageSource:contextSource:performerProvider:pageSessionId:snapchattersDataFetcher:] */

undefined8 *
FUN_1069a7098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f40a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar5);
    puVar1[5] = param_8;
    _objc_retain(param_7);
    uVar5 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar5);
    puVar1[6] = param_9;
    puVar1[7] = param_10;
    puVar1[8] = param_11;
    puVar1[9] = param_12;
    _objc_retain(param_15);
    uVar5 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar5);
    func_0x00010be667e0(puVar1);
    func_0x00010be667e0(puVar1);
    _objc_retain(param_14);
    uVar5 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar5);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1069a729c; end: 1069a738b; -[SCAddFriendsOperationalMetricsLogger _observePageEventData:inLifecycle:] */

void FUN_1069a729c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069a738c; end: 1069a73d3;  */

void FUN_1069a738c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069a73d4; end: 1069a7617; -[SCAddFriendsOperationalMetricsLogger _handleEventData:] */

void FUN_1069a73d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069a7618;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1069a7624;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x1069a762c;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1069a7634;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1069a7640;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1069a7648;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1069a7650;
  puStack_120 = &UNK_110842e18;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x1069a7658;
  puStack_148 = &UNK_110842e18;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x1069a7660;
  puStack_170 = &UNK_110842e18;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x1069a7668;
  puStack_198 = &UNK_110842e18;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x1069a7670;
  puStack_1c0 = &UNK_110842e18;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x1069a7678;
  puStack_1e8 = &UNK_110842e18;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  uStack_218 = 0x1069a7680;
  puStack_210 = &UNK_1108555e0;
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  uStack_240 = 0x1069a768c;
  puStack_238 = &UNK_1109500a0;
  puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_270 = 0xc2000000;
  uStack_268 = 0x1069a76a0;
  puStack_260 = &UNK_110842e18;
  puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_298 = 0xc2000000;
  uStack_290 = 0x1069a76a8;
  puStack_288 = &UNK_110842e18;
  puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2c0 = 0xc2000000;
  uStack_2b8 = 0x1069a76b0;
  puStack_2b0 = &UNK_110842e18;
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  uStack_2e0 = 0x1069a76bc;
  puStack_2d8 = &UNK_110842e18;
  uStack_2d0 = param_1;
  uStack_2a8 = param_1;
  uStack_280 = param_1;
  uStack_258 = param_1;
  uStack_230 = param_1;
  uStack_208 = param_1;
  uStack_1e0 = param_1;
  uStack_1b8 = param_1;
  uStack_190 = param_1;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c15e0(param_3,param_2,&puStack_48,&puStack_70,0,0,&puStack_98,&puStack_c0,0,
                      &puStack_e8,&puStack_110,&puStack_138,&puStack_160,&puStack_188,&puStack_1b0,
                      &puStack_1d8,&puStack_200,&puStack_228,&puStack_250,&puStack_278,&puStack_2a0,
                      &puStack_2c8,&puStack_2f0);
  return;
}



/* Entry: 1069a7618; end: 1069a76c7;  */

void FUN_1069a7618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doInitialization__11255ef00,0);
  return;
}



/* Entry: 1069a76c8; end: 1069a77ef; -[SCAddFriendsOperationalMetricsLogger _doInitialization:] */

void FUN_1069a76c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010ba77370(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3160(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1069a77f0;
    puStack_60 = &UNK_110841fb0;
    _objc_copyWeak(auStack_50,auStack_48);
    uStack_58 = uVar2;
    func_0x00010007380c(uVar2,&puStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1069a77f0; end: 1069a7823;  */

void FUN_1069a77f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069a7824; end: 1069a787b; -[SCAddFriendsOperationalMetricsLogger _startOrResumeAddFriendsPageEvent] */

void FUN_1069a7824(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be05590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doInitialization__11255ef00,0);
  return;
}



/* Entry: 1069a787c; end: 1069a78b7; -[SCAddFriendsOperationalMetricsLogger _stopAddFriendsPageEvent] */

void FUN_1069a787c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a78b8; end: 1069a7963; -[SCAddFriendsOperationalMetricsLogger _quitAddFriendsPageEvent:] */

void FUN_1069a78b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5d20();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x58) = 0;
  if ((*(long *)(param_1 + 0x28) == 6) &&
     ((*(long *)(param_1 + 0x48) == 0 || (*(long *)(param_1 + 0x48) == 1)))) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1069a7964; end: 1069a7997; -[SCAddFriendsOperationalMetricsLogger _didUpdateQuery] */

void FUN_1069a7964(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7998; end: 1069a79cb; -[SCAddFriendsOperationalMetricsLogger _incrementSnapcodeCount] */

void FUN_1069a7998(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a79cc; end: 1069a79ff; -[SCAddFriendsOperationalMetricsLogger _incrementSMSCount] */

void FUN_1069a79cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7a00; end: 1069a7a33; -[SCAddFriendsOperationalMetricsLogger _incrementPullToRefreshCount] */

void FUN_1069a7a00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7a34; end: 1069a7a67; -[SCAddFriendsOperationalMetricsLogger _incrementViewMoreClickCount] */

void FUN_1069a7a34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7a68; end: 1069a7a9b; -[SCAddFriendsOperationalMetricsLogger _incrementEmailCount] */

void FUN_1069a7a68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7a9c; end: 1069a7acf; -[SCAddFriendsOperationalMetricsLogger _incrementMoreCount] */

void FUN_1069a7a9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7ad0; end: 1069a7b03; -[SCAddFriendsOperationalMetricsLogger _incrementSnapButtonClickCount] */

void FUN_1069a7ad0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7b04; end: 1069a7b37; -[SCAddFriendsOperationalMetricsLogger _incrementChatButtonClickCount] */

void FUN_1069a7b04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7b38; end: 1069a7b73; -[SCAddFriendsOperationalMetricsLogger _reportFriendInviteMetric] */

void FUN_1069a7b38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06aa20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a7b74; end: 1069a7c9b; -[SCAddFriendsOperationalMetricsLogger _updateSectionVisitedCellWithDisplayCell:] */

void FUN_1069a7b74(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c156900(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec9e0(param_4);
  _CACurrentMediaTime();
  func_0x00010c082240(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289920(param_1);
  _objc_release(uVar2);
  lVar3 = param_4;
  func_0x00010c07a0a0();
  if ((int)lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010c2923e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bbaa0(uVar2,param_3,lVar3);
      _objc_release(lVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069a7c9c; end: 1069a7d1b; -[SCAddFriendsOperationalMetricsLogger _updateSectionVisitedContactCellWithDisplayCell:contactNonSnapchatter:hasScrolled:] */

void FUN_1069a7c9c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bedf3c0(param_1,param_2,param_3);
  if (*(long *)(param_1 + 0x28) == 6) {
    lVar1 = param_3;
    func_0x00010bfec9e0(param_3);
    func_0x00010be51e40((double)lVar1,param_1,param_2,param_4,param_5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069a7d1c; end: 1069a7e07; -[SCAddFriendsOperationalMetricsLogger _logContactSeenWithContactNonSnapchatter:index:hasScrolled:] */

void FUN_1069a7d1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  _objc_retain(param_4);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e56c0();
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126c2c98;
  _objc_alloc(PTR_PTR_1126c2c98);
  func_0x00010c150c20(param_4);
  func_0x00010c01d7c0(param_1,uVar3,puVar2,param_3,0);
  uVar3 = param_4;
  func_0x00010bfded40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7500(puVar2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3ae0();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069a7e08; end: 1069a7f17; -[SCAddFriendsOperationalMetricsLogger _fetchAndLogFriendsDataInQueue:] */

void FUN_1069a7e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf00220();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dade0();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1069a7f18; end: 1069a7f63;  */

void FUN_1069a7f18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_1109500d0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0();
  func_0x00010c0a8880(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069a7f64; end: 1069a7f6b;  */

uint FUN_1069a7f64(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010901c6c4();
  if ((int)uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0737e0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_2;
      func_0x00010c06d560(param_2);
      uVar3 = (uint)uVar2 ^ 1;
    }
    else {
      uVar3 = 0;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1069a7f6c; end: 1069a7f97;  */

void FUN_1069a7f6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0b1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_logSuggestedFriendsCount__112609f50,param_2);
  return;
}



/* Entry: 1069a7f98; end: 1069a7ff7; -[SCAddFriendsOperationalMetricsLogger .cxx_destruct] */

void FUN_1069a7f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a7ff8; end: 1069a806b; -[SCFriendingMetricsLoggerServices initWithFriendingMetricsLogger:] */

undefined1 * FUN_1069a7ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f40a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a806c; end: 1069a8073; -[SCFriendingMetricsLoggerServices friendingMetricsLogger] */

undefined8 FUN_1069a806c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1069a8074; end: 1069a807f; -[SCFriendingMetricsLoggerServices .cxx_destruct] */

void FUN_1069a8074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a8080; end: 1069a80cb; +[SCAddFriendsPageEvent chatButtonClick] */

void FUN_1069a8080(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xe;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a80cc; end: 1069a8117; +[SCAddFriendsPageEvent didUpdateQuery] */

void FUN_1069a80cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a8118; end: 1069a8163; +[SCAddFriendsPageEvent inviteToSnapchatButtonClick] */

void FUN_1069a8118(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a8164; end: 1069a81af; +[SCAddFriendsPageEvent shareToEmailButtonClick] */

void FUN_1069a8164(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a81b0; end: 1069a81fb; +[SCAddFriendsPageEvent shareToMoreButtonClick] */

void FUN_1069a81b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a81fc; end: 1069a8247; +[SCAddFriendsPageEvent shareToSMSButtonClick] */

void FUN_1069a81fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a8248; end: 1069a8293; +[SCAddFriendsPageEvent snapButtonClick] */

void FUN_1069a8248(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xd;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a8294; end: 1069a82df; +[SCAddFriendsPageEvent snapcodeClick] */

void FUN_1069a8294(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a82e0; end: 1069a832b; +[SCAddFriendsPageEvent userBackgroundApp] */

void FUN_1069a82e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a832c; end: 1069a8377; +[SCAddFriendsPageEvent userForegroundApp] */

void FUN_1069a832c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a8378; end: 1069a83c3; +[SCAddFriendsPageEvent userPullToRefresh] */

void FUN_1069a8378(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a83c4; end: 1069a840f; +[SCAddFriendsPageEvent viewDidAppear] */

void FUN_1069a83c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a8410; end: 1069a845b; +[SCAddFriendsPageEvent viewDidDisappear] */

void FUN_1069a8410(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a845c; end: 1069a84a3; +[SCAddFriendsPageEvent viewDidLoad] */

void FUN_1069a845c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a84a4; end: 1069a84ef; +[SCAddFriendsPageEvent viewMoreClick] */

void FUN_1069a84a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a84f0; end: 1069a853b; +[SCAddFriendsPageEvent viewWillAppear] */

void FUN_1069a84f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a853c; end: 1069a8587; +[SCAddFriendsPageEvent viewWillDisappear] */

void FUN_1069a853c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a8588; end: 1069a85d3; +[SCAddFriendsPageEvent willDealloc] */

void FUN_1069a8588(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a85d4; end: 1069a863b; +[SCAddFriendsPageEvent willDisplayCellWithDisplayCell:] */

void FUN_1069a85d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0xf;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a863c; end: 1069a86e3; +[SCAddFriendsPageEvent willDisplayContactCellWithDisplayCell:contactNonSnapchatter:hasScrolled:] */

void FUN_1069a863c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x10;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  puVar2[0x28] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a86e4; end: 1069a872f; +[SCAddFriendsPageEvent willUpdateQuery] */

void FUN_1069a86e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1560;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a8730; end: 1069a8753; -[SCAddFriendsPageEvent copyWithZone:] */

undefined8 FUN_1069a8730(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1069a8754; end: 1069a87db; -[SCAddFriendsPageEvent hash] */

void FUN_1069a8754(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f40b0;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a87dc; end: 1069a881f; -[SCAddFriendsPageEvent internalInit] */

void FUN_1069a87dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f40b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a8820; end: 1069a88ff; -[SCAddFriendsPageEvent isEqual:] */

long FUN_1069a8820(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1069a88d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1069a88e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1069a88e4;
          }
          goto LAB_1069a88d8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1069a88e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1069a8900; end: 1069a8cb3; -[SCAddFriendsPageEvent matchViewDidLoad:viewWillAppear:viewDidAppear:viewWillDisappear:viewDidDisappear:willDealloc:willUpdateQuery:didUpdateQuery:snapcodeClick:shareToSMSButtonClick:shareToEmailButtonClick:shareToMoreButtonClick:inviteToSnapchatButtonClick:snapButtonClick:chatButtonClick:willDisplayCell:willDisplayContactCell:userPullToRefresh:viewMoreClick:userForegroundApp:userBackgroundApp:] */

void FUN_1069a8900(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16,
                  long param_17,long param_18,long param_19,long param_20,long param_21,
                  long param_22,long param_23)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    lVar1 = param_3;
    goto joined_r0x0001069a8b60;
  case 1:
    lVar1 = param_4;
    goto joined_r0x0001069a8b60;
  case 2:
    lVar1 = param_5;
    goto joined_r0x0001069a8b60;
  case 3:
    lVar1 = param_6;
    goto joined_r0x0001069a8b60;
  case 4:
    lVar1 = param_7;
    goto joined_r0x0001069a8b60;
  case 5:
    lVar1 = param_8;
    goto joined_r0x0001069a8b60;
  case 6:
    if (param_9 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    break;
  case 7:
    if (param_10 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    break;
  case 8:
    if (param_11 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
    break;
  case 9:
    if (param_12 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    break;
  case 10:
    if (param_13 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    break;
  case 0xb:
    if (param_14 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
    break;
  case 0xc:
    lVar1 = param_15;
    goto joined_r0x0001069a8b60;
  case 0xd:
    if (param_16 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_16 + 0x10);
    lVar1 = param_16;
    break;
  case 0xe:
    lVar1 = param_17;
    goto joined_r0x0001069a8b60;
  case 0xf:
    if (param_18 != 0) {
      (**(code **)(param_18 + 0x10))(param_18,*(undefined8 *)(param_1 + 0x10));
    }
    goto LAB_1069a8b90;
  case 0x10:
    if (param_19 != 0) {
      (**(code **)(param_19 + 0x10))
                (param_19,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined1 *)(param_1 + 0x28));
    }
    goto LAB_1069a8b90;
  case 0x11:
    lVar1 = param_20;
joined_r0x0001069a8b60:
    if (lVar1 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(lVar1 + 0x10);
    break;
  case 0x12:
    if (param_21 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_21 + 0x10);
    lVar1 = param_21;
    break;
  case 0x13:
    if (param_22 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_22 + 0x10);
    lVar1 = param_22;
    break;
  case 0x14:
    if (param_23 == 0) goto LAB_1069a8b90;
    pcVar2 = *(code **)(param_23 + 0x10);
    lVar1 = param_23;
    break;
  default:
    goto LAB_1069a8b90;
  }
  (*pcVar2)(lVar1);
LAB_1069a8b90:
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069a8cb4; end: 1069a8cef; -[SCAddFriendsPageEvent .cxx_destruct] */

void FUN_1069a8cb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1069a8cf0; end: 1069a8de3; -[SCAddFriendsPageDisplayCell initWithSectionType:index:userId:isUnviewed:hasSubtext:hasActiveStory:hasGreenDot:isPinned:] */

undefined1 *
FUN_1069a8cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126f40b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9._1_1_;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a8de4; end: 1069a8e07; -[SCAddFriendsPageDisplayCell copyWithZone:] */

undefined8 FUN_1069a8de4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1069a8e08; end: 1069a8eb7; -[SCAddFriendsPageDisplayCell hash] */

undefined8 * FUN_1069a8e08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar10;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar8 = *(undefined4 *)(param_1 + 8);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar8 >> 0x18),
                                          (uint6)(byte)((uint)uVar8 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar8) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar8 >> 8),(short)uVar9);
  uVar10 = CONCAT44((int)(uVar9 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar10)) &
          0xff01ff01ffffffff;
  uVar7 = (ushort)(uVar9 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar9 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar7,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar7;
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  puVar3 = &uStack_68;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1069a8f98:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1069a8fa4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((puVar3[3] == param_3[3] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
          (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
         ((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) &&
          (*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
       (*(char *)((long)puVar3 + 0xc) == *(char *)((long)param_3 + 0xc))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_1069a8fa4;
        }
        goto LAB_1069a8f98;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1069a8fa4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1069a8eb8; end: 1069a8fbf; -[SCAddFriendsPageDisplayCell isEqual:] */

long FUN_1069a8eb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1069a8f98:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1069a8fa4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
          (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
       (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_1069a8fa4;
        }
        goto LAB_1069a8f98;
      }
    }
    lVar3 = 0;
  }
LAB_1069a8fa4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1069a8fc0; end: 1069a8fc7; -[SCAddFriendsPageDisplayCell sectionType] */

undefined8 FUN_1069a8fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069a8fc8; end: 1069a8fcf; -[SCAddFriendsPageDisplayCell index] */

undefined8 FUN_1069a8fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1069a8fd0; end: 1069a8fd7; -[SCAddFriendsPageDisplayCell userId] */

undefined8 FUN_1069a8fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1069a8fd8; end: 1069a8fdf; -[SCAddFriendsPageDisplayCell isUnviewed] */

undefined1 FUN_1069a8fd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1069a8fe0; end: 1069a8fe7; -[SCAddFriendsPageDisplayCell hasSubtext] */

undefined1 FUN_1069a8fe0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1069a8fe8; end: 1069a8fef; -[SCAddFriendsPageDisplayCell hasActiveStory] */

undefined1 FUN_1069a8fe8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1069a8ff0; end: 1069a8ff7; -[SCAddFriendsPageDisplayCell hasGreenDot] */

undefined1 FUN_1069a8ff0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}


