/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ea1674; end: 104ea1697; -[SCAddFriendsMySnapcodeImageProvider _callCompletionHandlerAndCleanUp] */

void FUN_104ea1674(undefined8 param_1)

{
  func_0x00010bdd8b80();
                    /* WARNING: Could not recover jumptable at 0x00010bddefd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUp_112555590);
  return;
}



/* Entry: 104ea1698; end: 104ea16b7; -[SCAddFriendsMySnapcodeImageProvider _callCompletionHandler] */

void FUN_104ea1698(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104ea16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x18),0);
    return;
  }
  return;
}



/* Entry: 104ea16b8; end: 104ea16e7; -[SCAddFriendsMySnapcodeImageProvider _cleanUp] */

void FUN_104ea16b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ea16e8; end: 104ea1753; -[SCAddFriendsMySnapcodeImageProvider .cxx_destruct] */

void FUN_104ea16e8(long param_1)

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



/* Entry: 104ea1754; end: 104ea18d3; -[SCAddFriendsShareMySnapcodeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea1754(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ea18d4;
  puStack_68 = &UNK_110856c60;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112715844);
  puVar3 = PTR_PTR_1126b19b8;
  _objc_alloc(PTR_PTR_1126b19b8);
  func_0x00010bff22a0();
  func_0x00010bf9d660(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104ea18d4; end: 104ea1953;  */

void FUN_104ea18d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ea1954; end: 104ea1a0f; -[SCAddFriendsShareMySnapcodeEntryPoint _createAddFriendsMySnapcodeURLProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea1954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b19c0;
  _objc_alloc(PTR_PTR_1126b19c0);
  lVar2 = param_1 + _DAT_112715848;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271584c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f7e0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ea1a10; end: 104ea1ad7; -[SCAddFriendsShareMySnapcodeEntryPoint _createAddFriendsMySnapcodeImageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea1a10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b19c8;
  _objc_alloc(PTR_PTR_1126b19c8);
  lVar2 = param_1 + _DAT_112715850;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112715854);
  param_1 = param_1 + _DAT_112715848;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e760(puVar1,param_2,lVar3,uVar5,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ea1ad8; end: 104ea1b47; -[SCAddFriendsShareMySnapcodeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea1ad8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715854,0);
  _objc_storeStrong(param_1 + _DAT_112715844,0);
  _objc_destroyWeak(param_1 + _DAT_11271584c);
  _objc_destroyWeak(param_1 + _DAT_112715848);
  _objc_destroyWeak(param_1 + _DAT_112715858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715850);
  return;
}



/* Entry: 104ea1b48; end: 104ea1c0b; -[SCAddFriendsShareMySnapcodeToEmailActionHandler initWithPresentingViewController:mySnapcodeImageProvider:mySnapcodeURLProvider:] */

undefined1 *
FUN_104ea1b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4b78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ea1c0c; end: 104ea1d7f; -[SCAddFriendsShareMySnapcodeToEmailActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_104ea1c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfbfc40(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104ea1d80; end: 104ea1dc7;  */

void FUN_104ea1d80(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ea1dc8; end: 104ea1dd7; -[SCAddFriendsShareMySnapcodeToEmailActionHandler mailComposeController:didFinishWithResult:error:] */

void FUN_104ea1dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ea1dd8; end: 104ea1f5b; -[SCAddFriendsShareMySnapcodeToEmailActionHandler _presentMySnapcodeImage:] */

void FUN_104ea1dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___MFMailComposeViewController_1126b19d0;
  func_0x00010bf2d5c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110db8e98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf2cf00();
    _objc_release(puVar4);
    if ((int)puVar5 == 0) goto LAB_104ea1f3c;
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___MFMailComposeViewController_1126b19d0;
    _objc_alloc_init(PTR__OBJC_CLASS___MFMailComposeViewController_1126b19d0);
    func_0x00010c1c1900();
    uVar2 = param_3;
    _UIImagePNGRepresentation(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6e00(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110db8eb8,
                        &PTR____CFConstantStringClassReference_110db8ed8);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfbfc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6e40(puVar1,param_2,uVar2,0);
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar4 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar4);
    func_0x00010c10eda0();
  }
  _objc_release(puVar4);
LAB_104ea1f3c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ea1f5c; end: 104ea1f93; -[SCAddFriendsShareMySnapcodeToEmailActionHandler .cxx_destruct] */

void FUN_104ea1f5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ea1f94; end: 104ea202f; -[SCAddFriendsShareMySnapcodeToMoreActionHandler initWithPresentingViewController:mySnapcodeImageProvider:] */

undefined1 *
FUN_104ea1f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4b80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ea2030; end: 104ea21a3; -[SCAddFriendsShareMySnapcodeToMoreActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_104ea2030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfbfc40(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104ea21a4; end: 104ea21eb;  */

void FUN_104ea21a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ea21ec; end: 104ea22d7; -[SCAddFriendsShareMySnapcodeToMoreActionHandler _presentMySnapcodeImage:] */

void FUN_104ea21ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aeb08;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff0f80();
  _objc_release(puVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + 8);
  return;
}



/* Entry: 104ea22d8; end: 104ea2303; -[SCAddFriendsShareMySnapcodeToMoreActionHandler .cxx_destruct] */

void FUN_104ea22d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ea2304; end: 104ea23c7; -[SCAddFriendsShareMySnapcodeToSMSActionHandler initWithPresentingViewController:mySnapcodeImageProvider:mySnapcodeURLProvider:] */

undefined1 *
FUN_104ea2304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4b88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ea23c8; end: 104ea253b; -[SCAddFriendsShareMySnapcodeToSMSActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_104ea23c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfbfc40(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104ea253c; end: 104ea2583;  */

void FUN_104ea253c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ea2584; end: 104ea2593; -[SCAddFriendsShareMySnapcodeToSMSActionHandler messageComposeViewController:didFinishWithResult:] */

void FUN_104ea2584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ea2594; end: 104ea271f; -[SCAddFriendsShareMySnapcodeToSMSActionHandler _presentMySnapcodeImage:] */

void FUN_104ea2594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
  func_0x00010bf2d5e0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110db8ef8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf2cf00();
    _objc_release(puVar4);
    if ((int)puVar5 == 0) goto LAB_104ea2700;
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
    _objc_alloc_init(PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8);
    func_0x00010c1c6e80();
    puVar4 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
    func_0x00010bf2d5a0();
    if ((int)puVar4 != 0) {
      uVar2 = param_3;
      _UIImagePNGRepresentation(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6e20(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110db8f18,
                          &PTR____CFConstantStringClassReference_110db8ed8);
      _objc_release(uVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfbfc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172cc0(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar4 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar4);
    func_0x00010c10eda0();
  }
  _objc_release(puVar4);
LAB_104ea2700:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ea2720; end: 104ea2757; -[SCAddFriendsShareMySnapcodeToSMSActionHandler .cxx_destruct] */

void FUN_104ea2720(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ea2758; end: 104ea27fb; -[SCAddFriendsMySnapcodeURLProvider initWithUsernameProvider:offPlatformLinkGenerationService:] */

undefined1 *
FUN_104ea2758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4b90;
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



/* Entry: 104ea27fc; end: 104ea2903; -[SCAddFriendsMySnapcodeURLProvider generateMySnapcodeURL] */

void FUN_104ea27fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110daccf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daccf8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(ppuVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ea2904; end: 104ea2933; -[SCAddFriendsMySnapcodeURLProvider .cxx_destruct] */

void FUN_104ea2904(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ea2934; end: 104ea2a8b; +[SCAddFriendsShareMySnapcodeActionHandlerProvider actionHandlerDictionaryWithPresentingViewController:mySnapcodeImageProvider:mySnapcodeURLProvider:] */

undefined1 *
FUN_104ea2934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b19e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c039260();
  puVar2 = PTR_PTR_1126b19e8;
  _objc_alloc();
  func_0x00010c039260();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126b19f0;
  _objc_alloc();
  func_0x00010c039240();
  _objc_release(param_4);
  _objc_release(param_3);
  ppuStack_70 = &PTR____CFConstantStringClassReference_110eb9c78;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eb9c58;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eb9c98;
  ppuVar7 = &puStack_60;
  pppuVar8 = &ppuStack_78;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar1;
  puStack_58 = puVar2;
  puStack_50 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_c0;
  pcStack_88 = FUN_104ea2a8c;
  puStack_b0 = puVar3;
  uStack_a8 = param_4;
  puStack_a0 = puVar4;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  _objc_retain(pppuVar8);
  puStack_b8 = PTR_PTR_1126e4b98;
  puStack_c0 = puVar2;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(ppuVar7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined ***)((long)ppuVar5 + 8) = ppuVar7;
    _objc_release(uVar6);
    _objc_retain(pppuVar8);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined ****)((long)ppuVar5 + 0x10) = pppuVar8;
    _objc_release(uVar6);
  }
  _objc_release(pppuVar8);
  _objc_release(ppuVar7);
  return (undefined1 *)ppuVar5;
}



/* Entry: 104ea2a8c; end: 104ea2b2f; -[SCAddFriendsShareMySnapcodeServices initWithAddFriendsMySnapcodeImageProvider:mySnapcodeURLProvider:] */

undefined1 *
FUN_104ea2a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4b98;
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



/* Entry: 104ea2b30; end: 104ea2b37; -[SCAddFriendsShareMySnapcodeServices mySnapcodeImageProvider] */

undefined8 FUN_104ea2b30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ea2b38; end: 104ea2b3f; -[SCAddFriendsShareMySnapcodeServices mySnapcodeURLProvider] */

undefined8 FUN_104ea2b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ea2b40; end: 104ea2b6f; -[SCAddFriendsShareMySnapcodeServices .cxx_destruct] */

void FUN_104ea2b40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ea2b70; end: 104ea2bf3; +[SCSharedSnapcodeView createSharedSnapcodeViewWithSnapcode:username:] */

void FUN_104ea2b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b19b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(0,0,0x4080e00000000000,0x4080e00000000000);
  func_0x00010c28a1c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ea2bf4; end: 104ea32eb; -[SCSharedSnapcodeView initWithFrame:] */

undefined8 * FUN_104ea2bf4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126e4ba0;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010c205fc0(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c244f80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c244f80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b0870;
    _objc_alloc(PTR_PTR_1126b0870);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010c2060c0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2452c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c244f80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2452c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2452c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010c21f7c0(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x403e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e20();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c83a0(0x3fecccccc0000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2945e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010c2058c0(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c2437c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2437c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuVar5 = &PTR____CFConstantStringClassReference_110db8f38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8f38,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2437c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar3);
    _objc_release(ppuVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2437c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c2437c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3fd99999a0000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2437c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2437c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2437c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e20();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2437c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c83a0(0x3fecccccc0000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2437c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2437c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 104ea32ec; end: 104ea34a3;  */

void FUN_104ea32ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x404b800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ea34a4; end: 104ea352b;  */

void FUN_104ea34a4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ea352c; end: 104ea3a63;  */

void FUN_104ea352c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244f80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbec0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ea3a64; end: 104ea3c0b; -[SCSharedSnapcodeView updateSnapcode:username:] */

void FUN_104ea3a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2452c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c2060c0(param_1,param_2,param_3);
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010c244f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2452c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2452c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2945e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c244f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1cbe20(param_1);
  func_0x00010c08cdc0(param_1);
  return;
}



/* Entry: 104ea3c0c; end: 104ea3c93;  */

void FUN_104ea3c0c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ea3c94; end: 104ea3e4b;  */

void FUN_104ea3c94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x404b800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ea3e4c; end: 104ea3e5b; -[SCSharedSnapcodeView snapcodeContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ea3e4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271588c);
}



/* Entry: 104ea3e5c; end: 104ea3e9b; -[SCSharedSnapcodeView setSnapcodeContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea3e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271588c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ea3e9c; end: 104ea3eab; -[SCSharedSnapcodeView snapcodeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ea3e9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112715890);
}



/* Entry: 104ea3eac; end: 104ea3eeb; -[SCSharedSnapcodeView setSnapcodeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea3eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112715890;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ea3eec; end: 104ea3efb; -[SCSharedSnapcodeView usernameLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ea3eec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112715894);
}



/* Entry: 104ea3efc; end: 104ea3f3b; -[SCSharedSnapcodeView setUsernameLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea3efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112715894;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ea3f3c; end: 104ea3f4b; -[SCSharedSnapcodeView snapToAddLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ea3f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112715898);
}



/* Entry: 104ea3f4c; end: 104ea3f8b; -[SCSharedSnapcodeView setSnapToAddLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea3f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112715898;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ea3f8c; end: 104ea3feb; -[SCSharedSnapcodeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea3f8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715898,0);
  _objc_storeStrong(param_1 + _DAT_112715894,0);
  _objc_storeStrong(param_1 + _DAT_112715890,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271588c,0);
  return;
}



/* Entry: 104ea3fec; end: 104ea4333; -[SCSendFriendPreviewModel initWithSnapchatter:businessProfile:imageDownloader:] */

undefined8 ***
FUN_104ea3fec(undefined8 ***param_1,undefined8 param_2,undefined8 **param_3,undefined8 **param_4,
             undefined8 **param_5)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == (undefined8 **)0x0) {
    pppuVar12 = (undefined8 ***)0x0;
  }
  else {
    puStack_78 = PTR_PTR_1126e4ba8;
    pppuVar12 = &ppuStack_80;
    ppuStack_80 = param_1;
    _objc_msgSendSuper2(pppuVar12,PTR_s_init_1125d9248);
    if (pppuVar12 != (undefined8 ***)0x0) {
      _objc_retain(param_3);
      ppuVar1 = pppuVar12[1];
      pppuVar12[1] = param_3;
      _objc_release(ppuVar1);
      _objc_retain(param_4);
      ppuVar1 = pppuVar12[2];
      pppuVar12[2] = param_4;
      _objc_release(ppuVar1);
      _objc_retain(param_5);
      ppuVar1 = pppuVar12[3];
      pppuVar12[3] = param_5;
      _objc_release(ppuVar1);
      ppuVar2 = pppuVar12[1];
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = pppuVar12[1];
      func_0x00010bf85d80(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = pppuVar12[1];
      func_0x00010c294420(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = pppuVar12[1];
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar5;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = pppuVar12[1];
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar6;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = pppuVar12[1];
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010901cdb0(ppuVar13,puVar7);
      puVar8 = PTR_PTR_1126b19f8;
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar2;
      func_0x000108feb5c8(ppuVar2,ppuVar3,ppuVar4,ppuVar1,ppuVar11,0,(ulong)ppuVar13 & 0xffffffff,
                          puVar9,0x24,1,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(ppuVar11);
      _objc_release(ppuVar6);
      _objc_release(ppuVar1);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      ppuVar1 = ppuVar10;
      func_0x000108fec9ec(ppuVar10,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = pppuVar12[4];
      pppuVar12[4] = ppuVar1;
      _objc_release(ppuVar11);
      ppuVar1 = pppuVar12[2];
      if (ppuVar1 == (undefined8 **)0x0) {
        ppuVar11 = pppuVar12[1];
        if (ppuVar11 != (undefined8 **)0x0) {
          func_0x000108f47298();
        }
      }
      else {
        _objc_retain(ppuVar1);
        ppuVar11 = ppuVar1;
        func_0x00010c078f80();
        func_0x00010c0691a0(ppuVar1);
        _objc_release(ppuVar1);
        ppuVar11 = (undefined8 **)((ulong)ppuVar11 & 0xffffffff);
      }
      pppuVar12[5] = ppuVar11;
      _objc_release(ppuVar10);
    }
    _objc_retain(pppuVar12);
    param_1 = pppuVar12;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar12;
  }
  ___stack_chk_fail();
  _objc_retain();
  return param_1;
}



/* Entry: 104ea4334; end: 104ea4357; -[SCSendFriendPreviewModel copyWithZone:] */

undefined8 FUN_104ea4334(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ea4358; end: 104ea435f; -[SCSendFriendPreviewModel viewStyle] */

undefined8 FUN_104ea4358(void)

{
  return 1;
}



/* Entry: 104ea4360; end: 104ea4367; -[SCSendFriendPreviewModel mediaViewAspectRatio] */

undefined8 FUN_104ea4360(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 104ea4368; end: 104ea436f; -[SCSendFriendPreviewModel title] */

void FUN_104ea4368(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar3,param_2,uVar2);
  uVar4 = uVar1;
  if ((int)puVar3 == 0) {
    func_0x00010bf85d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c294420(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104ea4370; end: 104ea4377; -[SCSendFriendPreviewModel subtitle] */

void FUN_104ea4370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_username_112682b30);
  return;
}



/* Entry: 104ea4378; end: 104ea43f7; -[SCSendFriendPreviewModel titleLabel] */

void FUN_104ea4378(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1a00;
  _objc_alloc(PTR_PTR_1126b1a00);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar2 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c16eda0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ea43f8; end: 104ea4453; -[SCSendFriendPreviewModel mediaView] */

void FUN_104ea43f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1a08;
  _objc_alloc_init(PTR_PTR_1126b1a08);
  func_0x00010c181e40(0x4010000000000000,0x4010000000000000,0x4010000000000000,0x4010000000000000);
  func_0x00010c1aa200(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c2226c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ea4454; end: 104ea445b; -[SCSendFriendPreviewModel shareType] */

undefined8 FUN_104ea4454(void)

{
  return 0;
}



/* Entry: 104ea445c; end: 104ea44a3; -[SCSendFriendPreviewModel .cxx_destruct] */

void FUN_104ea445c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ea44a4; end: 104ea46eb; -[SCShareFriendActionManager initWithSnapchatter:businessProfile:imageDownloader:shareFriendWorkflowDelegate:snapchatterSender:conversationParser:shareMessageSender:offPlatformLinkGenerationService:legacySendToLauncher:externalLinkSendingService:removeProfileCardFromShareFlow:] */

undefined8 *
FUN_104ea44a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126e4bb0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    uVar3 = puVar1[0xc];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c07b760();
    *(char *)(puVar1 + 0xd) = (char)uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x69) = param_13;
  }
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



/* Entry: 104ea46ec; end: 104ea46f3; -[SCShareFriendActionManager setPage:] */

void FUN_104ea46ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 104ea46f4; end: 104ea4987; -[SCShareFriendActionManager shareUsernameURL] */

void FUN_104ea46f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c22aa40();
  _objc_release(lVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f8c0();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    iVar1 = (int)puVar5;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cde0();
    _objc_release();
    func_0x0001008522a8();
    if (iVar1 != 0) {
      puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc40();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc60();
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126aeb08;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0f80();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197fe0(puVar5);
    func_0x00010c17fc60(puVar5);
    param_1 = param_1 + 0x78;
    _objc_loadWeakRetained();
    param_5 = 0;
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  uVar4 = param_2;
  _objc_retain();
  iVar1 = (int)uVar4;
  func_0x0001008522a8();
  if (iVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc60();
    _objc_release(puVar5);
  }
  lVar3 = *(long *)(lVar2 + 0x20) + 0x70;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c22aa00();
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(lVar3);
  lVar2 = *(long *)(lVar2 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c22aae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ea4988; end: 104ea4a77;  */

void FUN_104ea4988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar2 = param_2;
  _objc_retain();
  iVar1 = (int)uVar2;
  func_0x0001008522a8();
  if (iVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc60();
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x20) + 0x70;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c22aa00();
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c22aae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104ea4a78; end: 104ea4dbf; -[SCShareFriendActionManager sendUsername] */

void FUN_104ea4a78(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c22aa60();
  _objc_release(lVar2);
  if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
    puVar12 = PTR_PTR_1126b1a10;
    _objc_alloc(PTR_PTR_1126b1a10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048cc0(puVar12,param_2,uVar3,uVar4,uVar11);
    _objc_release(uVar11);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010901d398();
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  puVar6 = PTR_PTR_1126ae720;
  uStack_70 = 3;
  if (iVar1 == 0) {
    uStack_70 = 0xc;
  }
  uVar11 = 6;
  if (lVar2 != 0) {
    uVar11 = 0x13;
  }
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104ea4dc0;
  puStack_90 = &UNK_110856d20;
  if (lVar2 != 0) {
    uStack_70 = 2;
  }
  uStack_68 = (undefined1)iVar1;
  lStack_88 = param_1;
  _objc_retain(uVar3);
  uStack_80 = uVar3;
  _objc_retain(uVar4);
  uStack_78 = uVar4;
  func_0x00010bf11fe0(puVar6,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b0808;
  _objc_alloc();
  func_0x00010c051820();
  puVar8 = PTR_PTR_1126b1a18;
  _objc_alloc(PTR_PTR_1126b1a18);
  lVar2 = param_1;
  func_0x00010bea62a0(param_1);
  func_0x00010c048720(puVar8,param_2,5,uVar11,lVar2);
  puVar9 = PTR_PTR_1126b1a20;
  _objc_alloc(PTR_PTR_1126b1a20);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    func_0x00010c01d640(puVar9,param_2,1,1,0,0);
  }
  else {
    puVar10 = puVar7;
    func_0x00010c26b9e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d640(puVar9,param_2,1,1,0,puVar10 != (undefined *)0x0);
    _objc_release(puVar10);
  }
  puVar10 = PTR_PTR_1126b1a28;
  _objc_alloc();
  lVar2 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038ea0(puVar10,param_2,lVar2);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar10;
  _objc_release(uVar11);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126b1a30;
  _objc_alloc(PTR_PTR_1126b1a30);
  func_0x00010bff5040();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x38),param_2,puVar10,param_1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar12);
  return;
}



/* Entry: 104ea4dc0; end: 104ea4eb7;  */

void FUN_104ea4dc0(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if ((bVar1 & 1) == 0) {
    func_0x00010bfbf720();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfbf880();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126ae558;
  puVar4 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = uVar3;
  func_0x00010beec820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar4,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),0,0);
  func_0x00010bfe9ca0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ea4eb8; end: 104ea4fbf; -[SCShareFriendActionManager legacySendToScopeDidDismiss:selectedItems:] */

void FUN_104ea4eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf94c40(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22aae0();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ea4fc0; end: 104ea4feb;  */

void FUN_104ea4fc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ea4fec; end: 104ea511b; -[SCShareFriendActionManager legacySendToScopeWillSend:sendToSelection:] */

void FUN_104ea4fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ea511c;
  puStack_70 = &UNK_110842e18;
  ppuVar3 = &puStack_88;
  lStack_68 = lVar2;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104ea5124;
  puStack_b0 = &UNK_1108465d0;
  lStack_a8 = param_1;
  uStack_a0 = param_4;
  uStack_98 = param_3;
  ppuStack_90 = ppuVar3;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar4,param_2,&puStack_c8);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar4);
  _objc_release(ppuStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(ppuVar3);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar2);
  return;
}



/* Entry: 104ea511c; end: 104ea5123;  */

void FUN_104ea511c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22aaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_shareFriendWorkflowCompleted_1126684e0);
  return;
}



/* Entry: 104ea5124; end: 104ea5177;  */

void FUN_104ea5124(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c22aec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd300(uVar1,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104ea5178; end: 104ea51a3; -[SCShareFriendActionManager _sendToDidDismiss] */

void FUN_104ea5178(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22aa80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ea51a4; end: 104ea5287; -[SCShareFriendActionManager _didDetachUIWithSendToSelection:shareSheetConfiguration:onSendTriggered:] */

void FUN_104ea51a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ea5288;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf94c40(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ea5288; end: 104ea5297;  */

void FUN_104ea5288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didEndFeatureWithSendToSelectio_11255cf88,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104ea5298; end: 104ea5383; -[SCShareFriendActionManager _willSendToOnPlatformRecipientWithSendToSelection:] */

bool FUN_104ea5298(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    if (uVar4 == 0) {
      uVar4 = param_3;
      func_0x00010c2584a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c105440();
      if ((uVar5 & 1) == 0) {
        uVar5 = param_3;
        func_0x00010bf24f00(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf529e0();
        bVar1 = uVar6 != 0;
        _objc_release(uVar5);
      }
      else {
        bVar1 = true;
      }
      _objc_release(uVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104ea5384; end: 104ea5523; -[SCShareFriendActionManager _didEndFeatureWithSendToSelection:shareSheetConfiguration:onSendTriggered:] */

void FUN_104ea5384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar6 = param_1;
  func_0x00010beeb340(param_1,param_2,param_3);
  if ((int)lVar6 != 0) {
    lVar6 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c22aa20();
    _objc_release(lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  uVar5 = param_3;
  if (lVar6 == 0) {
    func_0x00010bfcf800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befd440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea10c0(param_1,param_2,uVar1,uVar4,uVar5,param_5);
  }
  else {
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfcf800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010befd440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9fba0(param_1,param_2,uVar1,uVar4,uVar5,uVar2,uVar3,param_5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010bea0b60(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104ea5524; end: 104ea565b; -[SCShareFriendActionManager _sendPublicUserNameToRecipients:storiesPostingConfig:businessIds:groups:additionalText:onSendTriggered:] */

void FUN_104ea5524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b1a38;
  if (*(long *)(param_1 + 0x10) != 0) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c03d5c0();
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22ad60();
    _objc_release(uVar2);
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 104ea565c; end: 104ea57d3; -[SCShareFriendActionManager _sendUserNameToRecipients:groups:additionalText:onSendTriggered:] */

void FUN_104ea565c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000108605534();
  func_0x00010bf529e0();
  uVar1 = param_4;
  func_0x000107e327dc(param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  uVar4 = param_5;
  _objc_retain(param_5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 104ea57d4; end: 104ea589b;  */

void FUN_104ea57d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x0001086063f4(uVar2,*(undefined8 *)(param_1 + 0x38),0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea10e0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ea589c; end: 104ea5a43; -[SCShareFriendActionManager _sendUserNameToSortedRecipients:additionalText:destinationInfo:onSendTriggered:] */

void FUN_104ea589c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa660(puVar2,param_2,0xffffffffffffffff);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac2e0(puVar2,param_2,param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd40(puVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar3;
      func_0x000108604db4(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bea0540(param_1,param_2,param_3,param_4,puVar3,puVar4);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
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



/* Entry: 104ea5a44; end: 104ea5b17; -[SCShareFriendActionManager _sendSnapchatterMessageToArroyoConversations:additionalText:platformAnalytics:additionalTextPlatformAnalytics:] */

void FUN_104ea5a44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cae0(uVar2,param_2,uVar1,param_3,param_4,param_5,param_6,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ea5b18; end: 104ea5b93; -[SCShareFriendActionManager _setPageViewNameOrForPresentingViewController] */

long FUN_104ea5b18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    lVar2 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010010fab4();
    _objc_release(lVar2);
    lVar1 = 0x10a;
    if ((lVar2 != 0) && ((int)lVar3 != 0)) {
      param_1 = param_1 + 0x78;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0f2220();
      _objc_release(param_1);
    }
  }
  return lVar1;
}



/* Entry: 104ea5b94; end: 104ea5d07; -[SCShareFriendActionManager _sendToPhoneNumbersWithSendToSelection:shareSheetConfiguration:] */

void FUN_104ea5b94(long param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if ((param_4 != 0) && (lVar2 != 0)) {
    lVar2 = param_4;
    func_0x00010c26b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0x68);
      _objc_release();
      _objc_release(lVar3);
      if (cVar1 != '\x01') goto LAB_104ea5ce4;
      lVar3 = param_4;
      func_0x00010c26b9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar2 == 0) goto LAB_104ea5ce4;
      lVar3 = *(long *)(param_1 + 0x60);
      func_0x00010c269d40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0fb120(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010c26b9e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c22c620(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c5a0(lVar3,param_2,lVar2,lVar5,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar3);
LAB_104ea5ce4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ea5d08; end: 104ea5d1f; -[SCShareFriendActionManager delegate] */

void FUN_104ea5d08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea5d20; end: 104ea5d2b; -[SCShareFriendActionManager setDelegate:] */

void FUN_104ea5d20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 104ea5d2c; end: 104ea5d43; -[SCShareFriendActionManager presentingViewController] */

void FUN_104ea5d2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea5d44; end: 104ea5d4f; -[SCShareFriendActionManager setPresentingViewController:] */

void FUN_104ea5d44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 104ea5d50; end: 104ea5df7; -[SCShareFriendActionManager .cxx_destruct] */

void FUN_104ea5d50(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 104ea5df8; end: 104ea5e9f; -[SCShareFriendEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea5df8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112715918;
    _objc_loadWeakRetained(lVar1);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ea5ea0;
  puStack_30 = &UNK_110856d80;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104ea6248;
  puStack_58 = &UNK_110856db0;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0bf560(lVar1,param_2,&puStack_48,&puStack_70);
  _objc_release(lVar1);
  return;
}



/* Entry: 104ea5ea0; end: 104ea6807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea5ea0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  puVar1 = PTR_PTR_1126b1a48;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = *(long *)(param_1 + 0x20) + (long)_DAT_112715920;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar25;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = *(long *)(param_1 + 0x20) + (long)_DAT_11271591c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar26;
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_1127158f0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x20) + (long)_DAT_1127158f4;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010bf4f6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010c22ab00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_2;
  func_0x00010c22aaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 0x20) + (long)_DAT_1127158f8;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c244680();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(param_1 + 0x20) + (long)_DAT_1127158fc;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(param_1 + 0x20) + (long)_DAT_112715900;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c22ac20();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = *(long *)(param_1 + 0x20) + (long)_DAT_112715904;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = *(long *)(param_1 + 0x20) + (long)_DAT_112715908;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(param_1 + 0x20) + (long)_DAT_112715910;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0491c0();
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar26);
  _objc_release(lVar3);
  _objc_release(lVar25);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c27ece0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf0c980(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ea6808; end: 104ea68d7; -[SCShareFriendEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea6808(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271590c,0);
  _objc_destroyWeak(param_1 + _DAT_112715910);
  _objc_destroyWeak(param_1 + _DAT_112715924);
  _objc_destroyWeak(param_1 + _DAT_1127158f4);
  _objc_destroyWeak(param_1 + _DAT_112715908);
  _objc_destroyWeak(param_1 + _DAT_112715920);
  _objc_destroyWeak(param_1 + _DAT_112715904);
  _objc_destroyWeak(param_1 + _DAT_112715900);
  _objc_destroyWeak(param_1 + _DAT_1127158fc);
  _objc_destroyWeak(param_1 + _DAT_1127158f8);
  _objc_destroyWeak(param_1 + _DAT_11271591c);
  _objc_destroyWeak(param_1 + _DAT_112715918);
  _objc_destroyWeak(param_1 + _DAT_1127158f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715914,0);
  return;
}



/* Entry: 104ea68d8; end: 104ea6bfb; -[SCShareFriendViewController initWithSnapchatter:userInfoProvider:friendScoreCoordinator:userId:imageDownloader:contexts:shareFriendWorkflowDelegate:delegate:snapchatterSender:conversationParser:shareMessageSender:offPlatformLinkGenerationService:legacySendToLauncher:snapcodeScopeExposer:externalLinkSendingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104ea68d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126e4bb8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112715928;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271592c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112715930;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112715934,param_10);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112715938,param_9);
    lVar4 = (long)_DAT_11271593c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    func_0x00010bea7b80(puVar1);
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    puVar3 = PTR_PTR_1126b1a50;
    _objc_alloc();
    func_0x00010c048ce0();
    lVar4 = (long)_DAT_112715944;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1e1580(*(undefined8 *)((long)puVar1 + lVar4));
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104ea6bfc; end: 104ea6cdb; -[SCShareFriendViewController _setSnapchatter:userInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea6bfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    lVar4 = (long)_DAT_112715940;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_3;
  }
  else {
    uVar3 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112715940);
    *(undefined8 *)(param_1 + _DAT_112715940) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ea6cdc; end: 104ea6d3b; -[SCShareFriendViewController dismissViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea6cdc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4bb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dismissViewControllerAnimated_co_1125bec68);
  param_1 = param_1 + _DAT_112715934;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22aac0();
  _objc_release(param_1);
  return;
}



/* Entry: 104ea6d3c; end: 104ea6d43; -[SCShareFriendViewController pageViewName] */

undefined8 FUN_104ea6d3c(void)

{
  return 0x69;
}



/* Entry: 104ea6d44; end: 104ea758f; -[SCShareFriendViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea6d44(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126e4bb8;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112715948);
  *(undefined **)(param_1 + _DAT_112715948) = puVar2;
  _objc_release(uVar6);
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar9 = (long)_DAT_11271594c;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_release(uVar6);
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  puVar2 = PTR_PTR_1126b0870;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4065e00000000000,0x4065e00000000000);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112715950);
  *(undefined **)(param_1 + _DAT_112715950) = puVar2;
  _objc_release(uVar6);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar7 = (long)_DAT_112715954;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar6);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar7));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4038000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar2);
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1c83a0(0x3fe8000000000000,*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar7 = (long)_DAT_112715958;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar6);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar7));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar8 = (long)_DAT_11271595c;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  lVar7 = param_1;
  func_0x00010be36a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar6);
  _objc_release(lVar7);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  lVar7 = param_1;
  func_0x00010be36a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar6);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010b8166c0();
  _objc_release(lVar7);
  bVar1 = (int)lVar3 == 0;
  uVar6 = 0x4014000000000000;
  if (bVar1) {
    uVar6 = 0;
  }
  uVar10 = 0;
  if (bVar1) {
    uVar10 = 0x4014000000000000;
  }
  func_0x00010c1aa240(0,uVar6,0,uVar10,*(undefined8 *)(param_1 + lVar8));
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db8f58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8f58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar6);
  _objc_release(ppuVar4);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar6);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14cfc0(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e720(uVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c271420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar6);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c271420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c271420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fe999999999999a);
  _objc_release(uVar6);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar8 = (long)_DAT_112715960;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar5;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar6);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar6);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar6);
  _objc_release(puVar5);
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010b8166c0();
  _objc_release(lVar7);
  bVar1 = (int)lVar3 == 0;
  uVar6 = 0x4014000000000000;
  if (bVar1) {
    uVar6 = 0;
  }
  uVar10 = 0;
  if (bVar1) {
    uVar10 = 0x4014000000000000;
  }
  func_0x00010c1aa240(0,uVar6,0,uVar10,*(undefined8 *)(param_1 + lVar8));
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db8f98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8f98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar6);
  _objc_release(ppuVar4);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c271420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar6);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c271420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c271420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fe999999999999a);
  _objc_release(uVar6);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar7 = (long)_DAT_112715964;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar5;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar6);
  _objc_release(puVar5);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar7));
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  lVar7 = (long)_DAT_112715968;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar5;
  _objc_release(uVar6);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar2);
  return;
}



/* Entry: 104ea7590; end: 104ea7ac7; -[SCShareFriendViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea7590(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_b0;
  undefined *puStack_a8;
  
  puStack_a8 = PTR_PTR_1126e4bb8;
  lStack_b0 = param_5;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_viewWillLayoutSubviews_112526958);
  lVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112715948));
  _objc_release(lVar5);
  lVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar6 = (long)_DAT_11271594c;
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar6));
  _objc_release(lVar5);
  lVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar11 = param_3 * 0.5;
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c17a6a0(dVar11,param_4 * 0.5,*(undefined8 *)(param_5 + lVar6));
  _objc_release(lVar8);
  _objc_release(lVar5);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar11 = param_3 + -88.0;
  lVar5 = (long)_DAT_112715954;
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar13 = param_3;
  dVar10 = param_4;
  func_0x00010c23d5a0(param_3,param_4,uVar4);
  dVar9 = dVar11;
  if (param_3 <= dVar11) {
    dVar9 = param_3;
  }
  func_0x00010b8165e8(dVar9);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  func_0x00010c19f0e0((dVar13 - dVar9) * 0.5,(dVar10 - param_4) * 0.5,dVar9,param_4,
                      *(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar9 = dVar9 + -175.0;
  dVar12 = dVar9 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMinY();
  dVar10 = 175.0;
  dVar13 = dVar10;
  func_0x00010c19f0e0(dVar12,dVar9 + -175.0 + -14.0,0x4065e00000000000,0x4065e00000000000,
                      *(undefined8 *)(param_5 + _DAT_112715950));
  lVar8 = (long)_DAT_112715958;
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar9 = dVar10;
  func_0x00010c23d5a0(dVar10,dVar13,uVar4);
  if (dVar10 <= dVar11) {
    dVar11 = dVar10;
  }
  func_0x00010b8165e8();
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar9 = dVar9 - dVar11;
  dVar10 = dVar9 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMaxY();
  func_0x00010c19f0e0(dVar10,dVar9 + 4.0,dVar11,dVar13,*(undefined8 *)(param_5 + lVar8));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar10 = dVar11 * 0.75;
  lVar5 = (long)_DAT_11271595c;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c271420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = dVar10;
  func_0x00010c14dd00(dVar10,0x4043000000000000,uVar4);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bfe90c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar13 = dVar11;
  _objc_release(uVar4);
  dVar11 = dVar9 + dVar11 + 38.0;
  if (dVar11 <= 170.0) {
    dVar11 = 170.0;
  }
  dVar9 = dVar10;
  if (dVar11 <= dVar10) {
    dVar9 = dVar11;
  }
  func_0x00010b816218();
  dVar11 = (double)(long)(dVar11 * dVar9) / dVar11;
  lVar7 = (long)_DAT_112715960;
  uVar2 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c271420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = dVar10;
  func_0x00010c14dd00(dVar10,0x4043000000000000,uVar4);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010bfe90c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar12 = dVar13;
  _objc_release(uVar4);
  dVar9 = dVar9 + dVar13 + 38.0;
  if (dVar9 <= 170.0) {
    dVar9 = 170.0;
  }
  if (dVar9 <= dVar10) {
    dVar10 = dVar9;
  }
  func_0x00010b816218();
  dVar9 = (double)(long)(dVar9 * dVar10) / dVar9;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar12 = dVar12 - dVar11;
  dVar10 = dVar12 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
  _CGRectGetMaxY();
  dVar13 = 24.0;
  func_0x00010c19f0e0(dVar10,dVar12 + 24.0,dVar11,0x4043000000000000,
                      *(undefined8 *)(param_5 + lVar5));
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4033000000000000);
  _objc_release(uVar4);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar11 = dVar11 - dVar9;
  dVar10 = dVar11 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMaxY();
  dVar11 = dVar11 + 15.0;
  func_0x00010c19f0e0(dVar10,dVar11,dVar9,0x4043000000000000,*(undefined8 *)(param_5 + lVar7));
  iVar1 = (int)*(undefined8 *)(param_5 + lVar7);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4033000000000000);
  _objc_release();
  dVar9 = 17.0;
  func_0x0001008522a8();
  if (iVar1 != 0) {
    lVar5 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    dVar13 = 17.0;
    dVar9 = dVar11 + 17.0;
    lVar8 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    dVar13 = dVar13 + 24.0;
    _objc_release(lVar8);
    _objc_release(lVar5);
  }
  func_0x00010c19f0e0(dVar9,dVar13,0x4040000000000000,0x4040000000000000,
                      *(undefined8 *)(param_5 + _DAT_112715964));
  return;
}



/* Entry: 104ea7ac8; end: 104ea7d5b; -[SCShareFriendViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea7ac8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e4bb8;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c09c7a0(param_1);
  puVar2 = PTR_PTR_1126b19a0;
  lVar7 = (long)_DAT_112715940;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2942c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b19a8;
  _objc_alloc(PTR_PTR_1126b19a8);
  func_0x00010c0566a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271593c));
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf85d80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112715954));
  _objc_release(uVar5);
  func_0x00010bed6ce0(param_1);
  _objc_initWeak(auStack_78,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271592c);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(uVar1);
  func_0x00010bfb8aa0(uVar5);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 104ea7d5c; end: 104ea7e3f;  */

void FUN_104ea7d5c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc_init(puVar1);
    func_0x00010c1d02e0();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c150c20(param_2);
    _objc_release(param_2);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c25d4c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed6ce0(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}


