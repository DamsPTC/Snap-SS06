/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069a1524; end: 1069a15b7; -[SCAddFriendsOpenFriendActionMenuActionHandler .cxx_destruct] */

void FUN_1069a1524(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1069a15b8; end: 1069a15bf; -[SCAddFriendsOpenMiniProfileActionHandler initWithFriendProfileScopeExposer:] */

void FUN_1069a15b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c015950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFriendProfileScopeExpose_1125e3030,param_3,0);
  return;
}



/* Entry: 1069a15c0; end: 1069a15cb; -[SCAddFriendsOpenMiniProfileActionHandler initWithFriendProfileScopeExposer:preferPublicProfileViewState:] */

void FUN_1069a15c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c015970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFriendProfileScopeExpose_1125e3038,param_3,param_4,0,0);
  return;
}



/* Entry: 1069a15cc; end: 1069a1687; -[SCAddFriendsOpenMiniProfileActionHandler initWithFriendProfileScopeExposer:preferPublicProfileViewState:actionSource:deckContainerFactory:] */

undefined1 *
FUN_1069a15cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4028;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a1688; end: 1069a1863; -[SCAddFriendsOpenMiniProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1069a1688(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar5 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  uVar5 = param_4;
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar4 = 0;
      goto LAB_1069a1844;
    }
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf740;
    _objc_opt_class(PTR_PTR_1126cf740);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    if (uVar1 == 0) goto LAB_1069a182c;
    uVar1 = uVar5;
    func_0x00010c244280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e140(uVar5);
    func_0x00010bfe2700(uVar5);
    func_0x00010befb8e0(uVar5);
LAB_1069a181c:
    func_0x00010be0cea0(param_1);
    _objc_release(uVar1);
  }
  else {
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf738;
    _objc_opt_class(PTR_PTR_1126cf738);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    if (uVar1 != 0) {
      uVar1 = uVar5;
      func_0x00010c244280(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befb8e0(uVar5);
      goto LAB_1069a181c;
    }
LAB_1069a182c:
    uVar5 = 0;
  }
  _objc_release(uVar5);
  uVar4 = 1;
LAB_1069a1844:
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 1069a1864; end: 1069a19f7; -[SCAddFriendsOpenMiniProfileActionHandler _exposeFriendProfileScopeWithSnapchatter:sourcePage:hideRecursiveOptions:nonFriendAddSourcetype:] */

void FUN_1069a1864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 1) {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0cfcc0(puVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
  }
  puVar5 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c0159e0();
  }
  puVar3 = PTR_PTR_1126b15c0;
  _objc_alloc(PTR_PTR_1126b15c0);
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008d20(puVar3,param_2,0,uVar4,0,9,0);
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar5);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1069a19f8; end: 1069a1a17; -[SCAddFriendsOpenMiniProfileActionHandler friendProfileDidDismiss:] */

void FUN_1069a19f8(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069a1a18; end: 1069a1a2f; -[SCAddFriendsOpenMiniProfileActionHandler presentingViewController] */

void FUN_1069a1a18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a1a30; end: 1069a1a3b; -[SCAddFriendsOpenMiniProfileActionHandler setPresentingViewController:] */

void FUN_1069a1a30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1069a1a3c; end: 1069a1a43; -[SCAddFriendsOpenMiniProfileActionHandler addFriendsActionEventObservable] */

undefined8 FUN_1069a1a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069a1a44; end: 1069a1a73; -[SCAddFriendsOpenMiniProfileActionHandler setAddFriendsActionEventObservable:] */

void FUN_1069a1a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a1a74; end: 1069a1ab7; -[SCAddFriendsOpenMiniProfileActionHandler .cxx_destruct] */

void FUN_1069a1a74(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a1ab8; end: 1069a1b2b; -[SCAddSnapchatterActionHandler initWithSnapchattersDataMutator:] */

undefined1 * FUN_1069a1ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4030;
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



/* Entry: 1069a1b2c; end: 1069a1ce3; -[SCAddSnapchatterActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_1069a1b2c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1888;
  _objc_opt_class(PTR_PTR_1126b1888);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126ae5c0;
  if (uVar1 != 0) {
    uVar3 = param_4;
    func_0x00010c244280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb8c0(param_4);
    func_0x00010c0fdba0(param_4);
    uVar4 = param_4;
    func_0x00010bfecf20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142240();
    puVar5 = PTR_PTR_1126c55c0;
    func_0x00010c12fe80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befca80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bfecf20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142240();
    func_0x00010be07740(param_1);
    _objc_release(param_4);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2960();
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  return uVar1 != 0;
}



/* Entry: 1069a1ce4; end: 1069a1e7f; -[SCAddSnapchatterActionHandler _emitActionEventWithUpdateDataRequest:state:index:] */

void FUN_1069a1ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b15e8;
  func_0x00010c2894a0(PTR_PTR_1126b15e8);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1069a1e80;
  uStack_70 = 0x1069a1e90;
  uStack_68 = 0;
  func_0x00010c0bc6c0(param_3);
  puVar2 = PTR_PTR_1126b15c0;
  _objc_alloc(PTR_PTR_1126b15c0);
  func_0x00010c008d20();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1069a1e80; end: 1069a1e97;  */

void FUN_1069a1e80(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069a1e98; end: 1069a1f57;  */

void FUN_1069a1e98(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  if (param_3 < 0x248de666) {
    if (param_3 == -0x6401d9ed) {
      uVar1 = 3;
    }
    else {
      if (param_3 != -0x6368e81b) {
        return;
      }
      uVar1 = 1;
    }
  }
  else if (param_3 == 0x248de666) {
    uVar1 = 4;
  }
  else {
    if (param_3 != 0x6424ea8b) {
      return;
    }
    uVar1 = 2;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 1069a1f58; end: 1069a1f5f; -[SCAddSnapchatterActionHandler addFriendsActionEventObservable] */

undefined8 FUN_1069a1f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069a1f60; end: 1069a1f8f; -[SCAddSnapchatterActionHandler setAddFriendsActionEventObservable:] */

void FUN_1069a1f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a1f90; end: 1069a1fbf; -[SCAddSnapchatterActionHandler .cxx_destruct] */

void FUN_1069a1f90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a1fc0; end: 1069a2043; +[SCBlockSnapchatterActionHandler newHandlerWithSnapchattersDataMutator:uiContainer:webScopeExposer:] */

undefined *
FUN_1069a1fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2f50;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c049d60();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069a2044; end: 1069a20b3; +[SCBlockSnapchatterActionHandler newImmediateHandlerWithSnapchattersDataMutator:webScopeExposer:] */

undefined *
FUN_1069a2044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2f50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c049d60();
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069a20b4; end: 1069a217f; -[SCBlockSnapchatterActionHandler initWithSnapchattersDataMutator:uiContainer:webScopeExposer:] */

undefined1 *
FUN_1069a20b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4038;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a2180; end: 1069a273b; -[SCBlockSnapchatterActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1069a2180(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                   undefined **param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126cf748;
  _objc_opt_class(PTR_PTR_1126cf748);
  puVar2 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar15);
  puVar14 = puVar1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar14 = (undefined *)0x0;
  }
  _objc_retain(puVar14);
  _objc_release(puVar1);
  ppuVar6 = param_5;
  if (puVar14 != (undefined *)0x0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar16 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = (undefined **)PTR_PTR_1126ae5c0;
      puVar2 = puVar1;
      func_0x00010c244280(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1d4c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1d620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960(uVar16);
      _objc_release(ppuVar6);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(uVar16);
    }
    else {
      puVar15 = puVar1;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar15;
      func_0x00010901d778();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar7 = puVar1;
      if (((ulong)puVar3 & 1) == 0) {
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar7;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      _objc_release(puVar7);
      _objc_release(puVar15);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar6 = &PTR____CFConstantStringClassReference_110ded978;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded978,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      uVar16 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar16);
      puVar7 = PTR_PTR_1126aed70;
      ppuVar6 = &PTR____CFConstantStringClassReference_110ded9b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded9b8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1069a273c;
      puStack_c0 = &UNK_11089bc50;
      uStack_b8 = uVar16;
      _objc_retain(puVar1);
      puStack_b0 = puVar14;
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_initWeak(auStack_e0,param_1);
      puVar1 = PTR_PTR_1126aed70;
      ppuVar8 = &PTR____CFConstantStringClassReference_110dbc2f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc2f8,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_108 = puVar15;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_1069a2820;
      puStack_f0 = &UNK_1108482a8;
      ppuVar6 = &puStack_108;
      _objc_copyWeak(auStack_e8,auStack_e0);
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      puVar4 = PTR_PTR_1126aed70;
      ppuVar8 = &PTR____CFConstantStringClassReference_110daf8b8;
      puVar15 = (undefined *)0x0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      puVar5 = PTR_PTR_1126aed78;
      if (*(long *)(param_1 + 0x18) == 0) {
        _objc_alloc(PTR_PTR_1126aed78);
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_a8 = puVar7;
        puStack_a0 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c052ec0(puVar5);
      }
      else {
        _objc_alloc();
        puVar10 = puVar5;
        func_0x0001069a6f70();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_98 = puVar7;
        puStack_90 = puVar1;
        puStack_88 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c052ec0(puVar5);
        _objc_release(puVar9);
      }
      _objc_release(puVar10);
      func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_e8);
      _objc_destroyWeak(auStack_e0);
      _objc_release(puVar7);
      _objc_release(puStack_b0);
      _objc_release(uVar16);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar14);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (ulong)(puVar14 != (undefined *)0x0);
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar6 + 4);
  _objc_destroyWeak(auStack_e0);
  __Unwind_Resume();
  func_0x00010bf84b00(puVar15);
  uVar11 = *(ulong *)(param_3 + 0x20);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126ae5c0;
  uVar16 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c244280(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf1d4c0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c247b60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1d620(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar11);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return uVar11;
}



/* Entry: 1069a273c; end: 1069a281f;  */

void FUN_1069a273c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1d4c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c247b60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1d620(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a2820; end: 1069a28c7;  */

void FUN_1069a2820(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1069a28c8; end: 1069a28f3;  */

void FUN_1069a28c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069a28f4; end: 1069a2903;  */

void FUN_1069a28f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1069a2904; end: 1069a2ab7; -[SCBlockSnapchatterActionHandler _openLearnMore] */

void FUN_1069a2904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  func_0x00010bddf320();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e66a78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2b9b80(puVar3,param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar4 = puVar3;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069a2ab8;
  puStack_50 = &UNK_110842308;
  puVar5 = puVar1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar4,param_2,&puStack_68,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar5 = puVar4;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1069a2ab8; end: 1069a2acf;  */

void FUN_1069a2ab8(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1069a2ad0; end: 1069a2b17; -[SCBlockSnapchatterActionHandler _cleanUpWebScope] */

void FUN_1069a2ad0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069a2b18; end: 1069a2b1b; -[SCBlockSnapchatterActionHandler webBrowserDidDismiss:] */

void FUN_1069a2b18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpWebScope_112555668);
  return;
}



/* Entry: 1069a2b1c; end: 1069a2b57; -[SCBlockSnapchatterActionHandler .cxx_destruct] */

void FUN_1069a2b1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a2b58; end: 1069a2bc3; +[SCDeleteSnapchatterActionHandler newHandlerWithSnapchattersDataMutator:uiContainer:] */

undefined *
FUN_1069a2b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf750;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c049d40();
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069a2bc4; end: 1069a2c13; +[SCDeleteSnapchatterActionHandler newImmediateHandlerWithSnapchattersDataMutator:] */

undefined * FUN_1069a2bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf750;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c049d40();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069a2c14; end: 1069a2cb7; -[SCDeleteSnapchatterActionHandler initWithSnapchattersDataMutator:uiContainer:] */

undefined1 *
FUN_1069a2c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4040;
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



/* Entry: 1069a2cb8; end: 1069a3023; -[SCDeleteSnapchatterActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1069a2cb8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126cf758;
  _objc_opt_class(PTR_PTR_1126cf758);
  uVar10 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar12);
  uVar9 = param_4;
  if ((uVar10 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(param_4);
  if (uVar9 != 0) {
    uVar10 = param_4;
    func_0x00010c233240();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar10 == 0) {
      puVar7 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae5c0;
      uVar10 = param_4;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c9e0();
      func_0x00010c247b60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6ce00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960(puVar7);
      _objc_release(puVar8);
      _objc_release(param_4);
      _objc_release(uVar10);
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ded9f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded9f8,0);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_4;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(ppuVar2);
      puVar8 = PTR_PTR_1126aed70;
      uVar14 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar14);
      ppuVar2 = &PTR____CFConstantStringClassReference_110dac918;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dac918,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      puVar4 = PTR_PTR_1126aed70;
      ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
      puVar12 = (undefined *)0x0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      puVar5 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar5);
      _objc_release(puVar6);
      func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(uVar9);
      _objc_release(uVar14);
    }
    _objc_release(puVar7);
  }
  bVar1 = uVar9 != 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return (ulong)bVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(puVar12);
  uVar10 = *(ulong *)(uVar9 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126ae5c0;
  uVar14 = *(undefined8 *)(uVar9 + 0x28);
  func_0x00010c244280(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c9e0(*(undefined8 *)(uVar9 + 0x28));
  puVar7 = PTR_PTR_1126c55c0;
  func_0x00010c12fe80(PTR_PTR_1126c55c0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(uVar9 + 0x28);
  func_0x00010c247b60(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ce00(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar10);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return uVar10;
}



/* Entry: 1069a3024; end: 1069a3127;  */

void FUN_1069a3024(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c9e0(*(undefined8 *)(param_1 + 0x28));
  puVar3 = PTR_PTR_1126c55c0;
  func_0x00010c12fe80(PTR_PTR_1126c55c0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c247b60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ce00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a3128; end: 1069a3137;  */

void FUN_1069a3128(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1069a3138; end: 1069a3167; -[SCDeleteSnapchatterActionHandler .cxx_destruct] */

void FUN_1069a3138(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a3168; end: 1069a31db; -[SCHideSuggestedSnapchatterActionHandler initWithSnapchattersDataMutator:] */

undefined1 * FUN_1069a3168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4048;
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



/* Entry: 1069a31dc; end: 1069a34b7; -[SCHideSuggestedSnapchatterActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined * FUN_1069a31dc(void)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong in_x3;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf760;
  _objc_opt_class(PTR_PTR_1126cf760);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar12 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar12 = 0;
  }
  _objc_retain(uVar12);
  _objc_release(in_x3);
  if (uVar12 != 0) {
    uVar3 = in_x3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar5 != 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e66ab8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e66ab8,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = in_x3;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(ppuVar6);
      puVar7 = PTR_PTR_1126af178;
      func_0x00010c22b900(PTR_PTR_1126af178);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126af180;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e66ad8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e66ad8,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(in_x3);
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126af180;
      ppuVar9 = &PTR____CFConstantStringClassReference_110daf8b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235c40(puVar7);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(ppuVar9);
      _objc_release(puVar8);
      _objc_release(ppuVar6);
      _objc_release(puVar7);
      _objc_release(uVar12);
      _objc_release(puVar2);
    }
  }
  bVar1 = uVar12 != 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return (undefined *)(ulong)bVar1;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126bd780;
  uVar13 = *(undefined8 *)(uVar12 + 0x20);
  func_0x00010c244280(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fdba0(*(undefined8 *)(uVar12 + 0x20));
  func_0x00010bfe2de0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(*(long *)(uVar12 + 0x28) + 8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2940();
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 1069a34b8; end: 1069a354f;  */

void FUN_1069a34b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126bd780;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fdba0(uVar2);
  func_0x00010bfe2de0(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2940();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1069a3550; end: 1069a3577;  */

void FUN_1069a3550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1069a3578; end: 1069a3583; -[SCHideSuggestedSnapchatterActionHandler .cxx_destruct] */

void FUN_1069a3578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a3584; end: 1069a3627; -[SCIgnoreSnapchatterActionHandler initWithSnapchattersDataMutator:uiContainer:] */

undefined1 *
FUN_1069a3584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4050;
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



/* Entry: 1069a3628; end: 1069a3a03; -[SCIgnoreSnapchatterActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1069a3628(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126bee28;
  _objc_opt_class(PTR_PTR_1126bee28);
  uVar2 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar12);
  uVar10 = uVar1;
  if ((uVar2 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain(uVar10);
  _objc_release(uVar1);
  if (uVar10 != 0) {
    uVar2 = uVar1;
    func_0x00010c233220();
    puVar9 = PTR_PTR_1126ae5c0;
    if ((int)uVar2 == 0) {
      func_0x00010c244280(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe6900(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar11 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960();
      _objc_release(uVar11);
      _objc_release(puVar9);
    }
    else {
      _objc_initWeak(auStack_80,param_1);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e66af8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e66af8,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(ppuVar3);
      puVar5 = PTR_PTR_1126aed70;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e66b18;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e66b18,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_80);
      _objc_retain(uVar1);
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      puVar6 = PTR_PTR_1126aed70;
      ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
      puVar12 = (undefined *)0x0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      puVar7 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar5;
      puStack_70 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar7);
      _objc_release(puVar8);
      func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_88);
      _objc_release(puVar9);
      _objc_destroyWeak(auStack_80);
    }
  }
  _objc_release(uVar10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (ulong)(uVar10 != 0);
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  func_0x00010bf84b00(puVar12);
  uVar10 = param_3 + 0x28;
  _objc_loadWeakRetained(uVar10);
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c244280(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36e00(uVar10);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return uVar10;
}



/* Entry: 1069a3a04; end: 1069a3a67;  */

void FUN_1069a3a04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36e00(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069a3a68; end: 1069a3a77;  */

void FUN_1069a3a68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1069a3a78; end: 1069a3afb; -[SCIgnoreSnapchatterActionHandler _ignoreSnapchatter:] */

void FUN_1069a3a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010bfe6900(PTR_PTR_1126ae5c0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd2960(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069a3afc; end: 1069a3b2b; -[SCIgnoreSnapchatterActionHandler .cxx_destruct] */

void FUN_1069a3afc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a3b2c; end: 1069a3cb3; -[SCInviteContactActionHandler initWithPresentingViewController:deeplinkCoordinator:stateTracker:userTrackedLogger:inviteContactSectionLogger:userName:externalLinkSendingService:contactsInviter:shortLinkEncodingService:enableTwilioInvites:circumstanceEngine:] */

undefined8
FUN_1069a3b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
  func_0x00010c038de0(param_1,param_2,puVar1,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,0,param_12);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1069a3cb4; end: 1069a3f5f; -[SCInviteContactActionHandler initWithPresentingUIContainer:deeplinkCoordinator:stateTracker:userTrackedLogger:inviteContactSectionLogger:userName:externalLinkSendingService:contactsInviter:shortLinkEncodingService:featureSettingsService:enableTwilioInvites:enablePrivacyAlertDialog:circumstanceEngine:] */

undefined8 *
FUN_1069a3cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f4058;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    func_0x00010bef9980(puVar1[2]);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0x61) = param_13._1_1_;
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 1069a3f60; end: 1069a4187; -[SCInviteContactActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_1069a3f60(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b16e0;
  _objc_opt_class(PTR_PTR_1126b16e0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    if (*(char *)(param_1 + 0x60) == '\x01') {
      lVar6 = *(long *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar6 != 0;
      _objc_release();
    }
    else {
      bVar2 = false;
    }
    if (*(char *)(param_1 + 0x61) == '\x01') {
      lVar6 = *(long *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        uVar7 = *(ulong *)(param_1 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c157820();
        _objc_release(uVar7);
        _objc_release(lVar6);
        if ((uVar5 & 1) == 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x58);
          _objc_retain(uVar8);
          _objc_initWeak(auStack_68,param_1);
          _objc_copyWeak(auStack_78,auStack_68);
          _objc_retain(uVar3);
          uStack_70 = bVar2;
          func_0x00010beba680(param_1);
          _objc_release(uVar1);
          _objc_destroyWeak(auStack_78);
          _objc_destroyWeak(auStack_68);
          _objc_release(uVar8);
          goto LAB_1069a4084;
        }
      }
    }
    func_0x00010be252e0(param_1);
  }
LAB_1069a4084:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1 != 0;
}



/* Entry: 1069a4188; end: 1069a41e3;  */

void FUN_1069a4188(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9ee0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be252e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069a41e4; end: 1069a4343; -[SCInviteContactActionHandler _handleActionWithActionData:pendingFriendRequestEnabled:] */

void FUN_1069a41e4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1069a4344;
  puStack_60 = &UNK_11085aad8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock(ppuVar1);
  if (param_4 == 0) {
    if (((*(byte *)(param_1 + 0x60) & 1) != 0) ||
       (uVar2 = param_3, func_0x00010c06aa80(), (int)uVar2 != 0)) {
      lVar3 = *(long *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        func_0x00010be9f500(param_1);
        goto LAB_1069a42d8;
      }
    }
    func_0x00010be11400(param_1);
  }
  else {
    func_0x00010be9f540(param_1);
  }
LAB_1069a42d8:
  func_0x00010be07720(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1069a4344; end: 1069a437f;  */

void FUN_1069a4344(long param_1,long param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be11400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069a4380; end: 1069a4443; -[SCInviteContactActionHandler _fetchFriendDeeplinkForFriendWithActionData:] */

void FUN_1069a4380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf49da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = param_3;
  func_0x00010bf49da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c0faf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6c20(uVar6,param_2,uVar2,uVar5,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a4444; end: 1069a4553; -[SCInviteContactActionHandler _emitActionEventWithActionData:state:] */

void FUN_1069a4444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf49da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b15c0;
  _objc_alloc(PTR_PTR_1126b15c0);
  func_0x00010c008d20();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf49da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar1;
  func_0x00010bfded40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8ee0(uVar4,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069a4554; end: 1069a4557; -[SCInviteContactActionHandler didStartFetchingFriendDeeplinkForPhoneNumber:] */

void FUN_1069a4554(void)

{
  return;
}



/* Entry: 1069a4558; end: 1069a46bf; -[SCInviteContactActionHandler didEndFetchingFriendDeeplinkForPhoneNumber:deeplink:success:] */

void FUN_1069a4558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 != 0) {
    _objc_initWeak(auStack_38,param_1);
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010be7e320(param_1);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010bf93120(uVar2);
      _objc_release(uVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
    }
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069a46c0; end: 1069a4713;  */

void FUN_1069a46c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e320();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069a4714; end: 1069a4717; -[SCInviteContactActionHandler didEndInvitingFriendWithPhoneNumber:success:] */

void FUN_1069a4714(void)

{
  return;
}



/* Entry: 1069a4718; end: 1069a47af; -[SCInviteContactActionHandler messageComposeViewController:didFinishWithResult:] */

void FUN_1069a4718(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf84b00(param_3,param_2,1,0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf949c0(uVar3,param_2,uVar2,param_4 == 1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a47b0; end: 1069a489f; -[SCInviteContactActionHandler _presentSMSAndLogShareForPhoneNumber:shortLinkURL:deeplink:] */

void FUN_1069a47b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1069a48a0;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  func_0x00010be56900(param_1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069a48a0; end: 1069a48bb;  */

void FUN_1069a48a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentSMSForPhoneNumber_deepli_11257d270,
             *(undefined8 *)(param_1 + 0x28),lVar1);
  return;
}



/* Entry: 1069a48bc; end: 1069a4a93; -[SCInviteContactActionHandler _presentSMSForPhoneNumber:deeplink:] */

void FUN_1069a48bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
  func_0x00010bf2d5e0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puVar4 = puVar1;
    func_0x00010bf2cf00();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      param_6 = 0;
      puVar4 = puVar1;
      puVar9 = PTR____NSDictionary0__struct_11034ab58;
      func_0x00010c0e9b80();
      _objc_release(puVar2);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
    _objc_alloc_init();
    puVar9 = (undefined *)0x1;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8ae0(puVar1);
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    FUN_1069a6f28();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172cc0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010c1c6e80(puVar1);
    puVar4 = puVar1;
    func_0x00010bf0c980(*(undefined8 *)(param_2 + 0x28));
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    _objc_retain(puVar9);
    _objc_retain(param_6);
    _CACurrentMediaTime();
    if (param_6 == 0) {
      lVar7 = 10;
      lVar8 = 0;
      uVar10 = 0;
      func_0x000108f9516c(param_1,0);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = 10;
      lVar8 = 0;
      uVar10 = 0;
      func_0x000108f9516c(param_1,0);
      _objc_release(puVar1);
    }
    _objc_release(param_6);
    _objc_release(puVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(lVar8);
      _objc_retain(uVar10);
      uVar13 = *(undefined8 *)(puVar4 + 0x10);
      _objc_retain(uVar13);
      lVar11 = lVar8;
      func_0x00010bf49da0(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010c0faf60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24e8a0(uVar13);
      _objc_release(lVar5);
      _objc_release(lVar11);
      uVar6 = *(undefined8 *)(puVar4 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar8;
      func_0x00010bf49da0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010c0faf60();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa2fa0(lVar8);
      _objc_retain(uVar10);
      _objc_retain(lVar8);
      func_0x00010c15be00(uVar6);
      _objc_release(puVar1);
      _objc_release(lVar5);
      _objc_release(lVar11);
      _objc_release(uVar6);
      _objc_release(uVar10);
      _objc_release(lVar8);
      _objc_release(uVar13);
      _objc_release(uVar10);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        _objc_retain(lVar7);
        if (lVar7 == 0) {
          uVar10 = *(undefined8 *)(lVar8 + 0x20);
          uVar6 = *(undefined8 *)(lVar8 + 0x28);
          func_0x00010bf49da0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar6;
          func_0x00010c0faf60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf949c0(uVar10);
          _objc_release(uVar13);
          _objc_release(uVar6);
        }
        else {
          lVar11 = *(long *)(lVar8 + 0x30);
          if (lVar11 != 0) {
            (**(code **)(lVar11 + 0x10))(lVar11,lVar7);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar7);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1069a4a94; end: 1069a4c1f; -[SCInviteContactActionHandler _logOffPlatformShareMetricWithDeepLink:shortLinkURL:phoneNumber:] */

void FUN_1069a4a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  if (param_6 == 0) {
    lVar4 = 10;
    lVar5 = 0;
    uVar6 = 0;
    func_0x000108f9516c(param_1,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = 10;
    lVar5 = 0;
    uVar6 = 0;
    func_0x000108f9516c(param_1,0);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar5);
  _objc_retain(uVar6);
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  _objc_retain(uVar9);
  lVar7 = lVar5;
  func_0x00010bf49da0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e8a0(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar7);
  uVar3 = *(undefined8 *)(param_4 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf49da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2fa0(lVar5);
  _objc_retain(uVar6);
  _objc_retain(lVar5);
  func_0x00010c15be00(uVar3);
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    func_0x00010bf49da0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf949c0(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar3);
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x30);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7,lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1069a4c20; end: 1069a4df3; -[SCInviteContactActionHandler _sendInviteMessageForActionData:completion:] */

void FUN_1069a4c20(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar7);
  lVar4 = param_3;
  func_0x00010bf49da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e8a0(uVar7);
  _objc_release(lVar1);
  _objc_release(lVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf49da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2fa0(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c15be00(uVar2);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf49da0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf949c0(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar7);
  }
  else {
    lVar4 = *(long *)(param_3 + 0x30);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069a4df4; end: 1069a4e87;  */

void FUN_1069a4df4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf49da0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf949c0(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069a4e88; end: 1069a505f; -[SCInviteContactActionHandler _sendInviteOrAddByPhoneNumberRequestWithActionData:completion:] */

void FUN_1069a4e88(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010bf49da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf49da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2fa0(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar6 = puVar3;
  func_0x00010c06a6e0(uVar9);
  _objc_release(uVar9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  if (puVar6 == (undefined *)0x0) {
    uVar9 = *(undefined8 *)(lVar1 + 0x20);
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf49da0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf949c0(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar8);
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x30);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1069a5060; end: 1069a50f3;  */

void FUN_1069a5060(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf49da0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf949c0(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069a50f4; end: 1069a5307; -[SCInviteContactActionHandler _showPrivacyAlertWithCompletion:pendingFriendRequestEnabled:] */

void FUN_1069a50f4(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  if (param_4 == 0) {
    func_0x0001069a6f58();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1069a7080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x0001069a6f40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 1069a5308; end: 1069a5327;  */

void FUN_1069a5308(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1069a5328; end: 1069a532f; -[SCInviteContactActionHandler addFriendsActionEventObservable] */

undefined8 FUN_1069a5328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1069a5330; end: 1069a535f; -[SCInviteContactActionHandler setAddFriendsActionEventObservable:] */

void FUN_1069a5330(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1069a5360; end: 1069a5407; -[SCInviteContactActionHandler .cxx_destruct] */

void FUN_1069a5360(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a5408; end: 1069a54fb; -[SCOpenAddSnapcodeActionHandler initWithPresentingController:addFriendsCameraRollPickerScopeExposer:addFriendsCameraRollPickerScopeServices:photoPermissionCoordinator:] */

undefined1 *
FUN_1069a5408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4060;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a54fc; end: 1069a5657; -[SCOpenAddSnapcodeActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined **
FUN_1069a54fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb9ad8;
  uVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)ppuVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf37c20(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 1069a5658; end: 1069a5683;  */

void FUN_1069a5658(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069a5684; end: 1069a56cb; -[SCOpenAddSnapcodeActionHandler addfriendsCameraRollPickerWorkflowCompleted] */

void FUN_1069a5684(long param_1)

{
  long lVar1;
  
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



/* Entry: 1069a56cc; end: 1069a575f; -[SCOpenAddSnapcodeActionHandler _presentCameraRollPickerViewController] */

void FUN_1069a56cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf23e20(uVar3,param_2,puVar1,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069a5760; end: 1069a57a3; -[SCOpenAddSnapcodeActionHandler .cxx_destruct] */

void FUN_1069a5760(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1069a57a4; end: 1069a5887; -[SCOpenFindFriendsActionHandler initWithPresentingController:findFriendsScopeExposer:findFriendsScopeServices:sourcePageName:] */

undefined1 *
FUN_1069a57a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4068;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a5888; end: 1069a59b7; -[SCOpenFindFriendsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_1069a5888(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  _objc_retain(param_4);
  iVar8 = 0x10eb9bb8;
  uVar2 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if (iVar8 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cf768;
    _objc_opt_class(PTR_PTR_1126cf768);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    bVar1 = uVar2 != 0;
    if (uVar2 != 0) {
      lVar6 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar6);
      lVar7 = lVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94800();
      _objc_release(lVar7);
      _objc_release(lVar6);
      func_0x00010bfaf320(uVar3);
      func_0x00010be7aca0(param_1);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 1069a59b8; end: 1069a5a33; -[SCOpenFindFriendsActionHandler findFriendsWorkflowCompleted] */

void FUN_1069a59b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069a5a34; end: 1069a5b37; -[SCOpenFindFriendsActionHandler _presentContactSyncFlowWithFindFriendsPageType:] */

void FUN_1069a5a34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126ae600;
  _objc_alloc(PTR_PTR_1126ae600);
  func_0x00010c01fb20();
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf23c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069a5b38; end: 1069a5b4f; -[SCOpenFindFriendsActionHandler presentingViewController] */

void FUN_1069a5b38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a5b50; end: 1069a5b5b; -[SCOpenFindFriendsActionHandler setPresentingViewController:] */

void FUN_1069a5b50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1069a5b5c; end: 1069a5b97; -[SCOpenFindFriendsActionHandler .cxx_destruct] */

void FUN_1069a5b5c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a5b98; end: 1069a5c53; -[SCOpenNearbyFriendsActionHandler initWithPresentingController:nearbyFriendsScopeExposer:nearbyFriendsScopeServices:] */

undefined1 *
FUN_1069a5b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4070;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a5c54; end: 1069a5cbf; -[SCOpenNearbyFriendsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined **
FUN_1069a5c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb9c38;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eb9c38,param_2,param_4);
  _objc_release(param_4);
  if ((int)ppuVar1 != 0) {
    func_0x00010be6d3a0(param_1);
  }
  return ppuVar1;
}



/* Entry: 1069a5cc0; end: 1069a5dab; -[SCOpenNearbyFriendsActionHandler _openNearbyFriendsPage] */

void FUN_1069a5cc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038f40(puVar3,param_2,lVar1,1);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf24500(uVar4,param_2,puVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1069a5dac; end: 1069a5e27; -[SCOpenNearbyFriendsActionHandler nearbyFriendsPageDidDismiss] */

void FUN_1069a5dac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069a5e28; end: 1069a5e5b; -[SCOpenNearbyFriendsActionHandler .cxx_destruct] */

void FUN_1069a5e28(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1069a5e5c; end: 1069a5f57; -[SCOpenPlusSubscribeActionHandler initWithPlusSubscribeScopeExposer:plusSubscribeScopeServices:plusManagementScopeExposer:plusFeatureGating:] */

undefined1 *
FUN_1069a5e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4078;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a5f58; end: 1069a608f; -[SCOpenPlusSubscribeActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1069a5f58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf9dae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar5 - 2U < 2) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bf9db00();
      _objc_release(uVar6);
      if ((int)uVar1 == 0) {
        func_0x00010be48700(param_1);
      }
      else {
        func_0x00010be47b80();
      }
    }
    else {
      if (lVar5 == 0) {
        return 0;
      }
      if (lVar5 == 1) {
        *(undefined1 *)(param_1 + 0x30) = 1;
        func_0x00010be48700(param_1);
        return 1;
      }
    }
  }
  return 1;
}



/* Entry: 1069a6090; end: 1069a615f; -[SCOpenPlusSubscribeActionHandler _launchSubscribePage] */

void FUN_1069a6090(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf23e60(uVar4,param_2,puVar1,puVar3,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069a6160; end: 1069a622f; -[SCOpenPlusSubscribeActionHandler _launchManagementPage] */

void FUN_1069a6160(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  puVar4 = PTR_PTR_1126b3470;
  _objc_alloc(PTR_PTR_1126b3470);
  func_0x00010c056ec0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069a6230; end: 1069a6247; -[SCOpenPlusSubscribeActionHandler presentingViewController] */

void FUN_1069a6230(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


