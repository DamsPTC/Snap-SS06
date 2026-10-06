/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064d9798; end: 1064d985f; -[SCFriendsFeedChatMediaPrefetcher start] */

void FUN_1064d9798(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    _objc_initWeak(auStack_28,param_1);
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1064d9860;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010007380c(uVar1,&puStack_50);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1064d9860; end: 1064d988b;  */

void FUN_1064d9860(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebf480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064d988c; end: 1064d9917; -[SCFriendsFeedChatMediaPrefetcher processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_1064d988c(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x5;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(in_x5);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1064d9918;
  puStack_30 = &UNK_110842508;
  uStack_28 = in_x5;
  _objc_retain(in_x5);
  func_0x00010be72420(param_1,param_2,6,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 1064d9918; end: 1064d9933;  */

void FUN_1064d9918(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001064d9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,0);
  return;
}



/* Entry: 1064d9934; end: 1064d9947; -[SCFriendsFeedChatMediaPrefetcher preloadModeDidChange] */

void FUN_1064d9934(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performPrefetchWithRequestConte_11257a2a8,7,
             &PTR___NSConcreteGlobalBlock_110926f88);
  return;
}



/* Entry: 1064d9948; end: 1064d9b7b; -[SCFriendsFeedChatMediaPrefetcher _start] */

void FUN_1064d9948(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c108880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1064d9b7c;
  puStack_78 = &UNK_110842a38;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1064d9ba8;
  puStack_a0 = &UNK_1108464e0;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfba080();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar2 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1064d9b7c; end: 1064d9ba7;  */

void FUN_1064d9b7c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c108860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064d9ba8; end: 1064d9c63;  */

void FUN_1064d9ba8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1064d9c64; end: 1064d9c6f;  */

void FUN_1064d9c64(void)

{
  return;
}



/* Entry: 1064d9c70; end: 1064d9cdf;  */

void FUN_1064d9c70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf0a2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea6140(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064d9ce0; end: 1064d9d33;  */

void FUN_1064d9ce0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064d9d34; end: 1064d9d37;  */

void FUN_1064d9d34(void)

{
  return;
}



/* Entry: 1064d9d38; end: 1064d9d8f; -[SCFriendsFeedChatMediaPrefetcher _performPrefetchWithRequestContext:friendsFeedItems:completion:] */

void FUN_1064d9d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bea41a0(param_1,param_2,param_4);
  func_0x00010be72420(param_1,param_2,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1064d9d90; end: 1064da1ef; -[SCFriendsFeedChatMediaPrefetcher _performPrefetchWithRequestContext:completion:] */

void FUN_1064d9d90(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar17 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x00010c231e40();
    if ((uVar3 & 1) != 0) {
      lVar4 = param_1;
      func_0x00010be20f60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010be1f4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2827c0();
      _objc_retain(lVar5);
      _objc_retain(lVar4);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(lVar5);
      lVar10 = lVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar10 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar5);
          }
          lVar20 = *(long *)(lVar19 * 8);
          lVar11 = lVar20;
          func_0x000100bf377c();
          if ((int)lVar11 != 0) {
            lVar11 = lVar20;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010c0cb340();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar12;
            func_0x000107cfd54c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar12);
            _objc_release(lVar11);
            func_0x00010bef0c80(lVar20);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar20;
            func_0x00010bf50280();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar4;
            func_0x00010c0720c0();
            _objc_release(lVar11);
            _objc_release(lVar20);
            if (lVar13 == 0) {
              puVar14 = puVar9;
              if ((int)lVar12 == 0) goto LAB_1064d9fac;
LAB_1064d9f90:
              func_0x00010c066b00(puVar14);
            }
            else {
              puVar14 = puVar8;
              if ((int)lVar12 != 0) goto LAB_1064d9f90;
LAB_1064d9fac:
              func_0x00010befa120(puVar14);
            }
            _objc_release(lVar13);
          }
          lVar19 = lVar19 + 1;
        } while (lVar10 != lVar19);
        lVar10 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      puVar14 = puVar8;
      param_3 = puVar9;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf529e0();
      puVar16 = puVar14;
      if (puVar15 < puVar7) {
        func_0x00010bf51e00();
      }
      else {
        param_3 = (undefined *)0x0;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar14);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(lVar4);
      _objc_release(lVar5);
      _objc_release(puVar6);
      puVar7 = puVar16;
      func_0x00010bf529e0();
      if (puVar7 == (undefined *)0x0) {
        (**(code **)(param_4 + 0x10))(param_4,1);
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_opt_new();
        puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_opt_new();
        _objc_retain(puVar7);
        _objc_retain(puVar8);
        _objc_retain(puVar8);
        _objc_retain(puVar7);
        func_0x00010bf97e80(puVar16);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar8);
        _objc_release(puVar7);
        uVar2 = *(undefined8 *)(param_1 + 8);
        uVar17 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        param_3 = puVar8;
        func_0x00010c0f8c80(uVar2);
        _objc_release(uVar17);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      _objc_release(puVar16);
      _objc_release(lVar5);
      _objc_release(lVar4);
      goto LAB_1064da1ac;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,1);
LAB_1064da1ac:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_4 + 0x68);
  puVar7 = param_3;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_4 + 0x60);
  *(undefined **)(param_4 + 0x60) = puVar7;
  _objc_release(uVar17);
  _os_unfair_lock_unlock(param_4 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064da1f0; end: 1064da257; -[SCFriendsFeedChatMediaPrefetcher _setFriendsFeedItems:] */

void FUN_1064da1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064da258; end: 1064da293; -[SCFriendsFeedChatMediaPrefetcher _getFriendsFeedItems] */

void FUN_1064da258(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064da294; end: 1064da34f; -[SCFriendsFeedChatMediaPrefetcher _setOpenedNotificationConversationId:] */

void FUN_1064da294(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(ulong *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  if ((param_3 != 0) &&
     (uVar2 = param_3, func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x50)),
     (uVar2 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar1 != 0) {
      func_0x00010be72420(param_1,param_2,3,&PTR___NSConcreteGlobalBlock_110927028);
    }
  }
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064da350; end: 1064da353;  */

void FUN_1064da350(void)

{
  return;
}



/* Entry: 1064da354; end: 1064da3a3; -[SCFriendsFeedChatMediaPrefetcher _getOpenedNotificationConversationId] */

void FUN_1064da354(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064da3a4; end: 1064da433; -[SCFriendsFeedChatMediaPrefetcher .cxx_destruct] */

void FUN_1064da3a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064da434; end: 1064da43f; +[SCFriendsFeedDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1064da434(void)

{
  return &PTR____CFConstantStringClassReference_110e52558;
}



/* Entry: 1064da440; end: 1064da50b; -[SCFriendsFeedDataCoordinator friendsFeedItems] */

void FUN_1064da440(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_100bbe44c;
  puStack_30 = &UNK_100bd999c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064da50c;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0xa8),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064da50c; end: 1064da547;  */

void FUN_1064da50c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064da548; end: 1064da54f; -[SCFriendsFeedDataCoordinator spotlightOnFriendsFeedStoriesObservable] */

void FUN_1064da548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x188),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1064da550; end: 1064da5b3; -[SCFriendsFeedDataCoordinator friendsFeedItemsStreamObservable] */

void FUN_1064da550(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1064da5b4;
  puStack_20 = &UNK_11088e668;
  uStack_18 = param_1;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064da5b4; end: 1064da723;  */

void FUN_1064da5b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_2);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = PTR_PTR_1126b0418;
  _objc_retain(puVar1);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064da724; end: 1064da757;  */

void FUN_1064da724(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be07de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064da758; end: 1064da75f;  */

void FUN_1064da758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1064da760; end: 1064da787; -[SCFriendsFeedDataCoordinator friendsFeedItemsObservable] */

void FUN_1064da760(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064da788; end: 1064da8ff; -[SCFriendsFeedDataCoordinator _emitInitialAndUpdateStreamWithObserver:lifecycle:] */

void FUN_1064da788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c29d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010bf51e00();
  uVar8 = uVar7;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016460(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0d9840(param_3,param_2,puVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010c25fd20(uVar8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef7e00(param_4,param_2,uVar8);
  _objc_release(param_4);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064da900; end: 1064da9fb; -[SCFriendsFeedDataCoordinator purgeAccumulatedFetchContexts] */

void FUN_1064da900(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_1 + 0x148) & 1) != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126b2cb0;
  func_0x00010bfa5ea0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x140);
  func_0x00010bf529e0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  if (lVar3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  }
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e52598,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010bf529e0(uVar6);
  func_0x00010bef9180(uVar5,param_2,puVar4,uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + 0x148) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1064da9fc; end: 1064daac7; -[SCFriendsFeedDataCoordinator quickAddSnapchatters] */

void FUN_1064da9fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_100bbe44c;
  puStack_30 = &UNK_100bd999c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064daac8;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0xa8),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064daac8; end: 1064dab03;  */

void FUN_1064daac8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064dab04; end: 1064dabcf; -[SCFriendsFeedDataCoordinator incomingSnapchatters] */

void FUN_1064dab04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_100bbe44c;
  puStack_30 = &UNK_100bd999c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064dabd0;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0xa8),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064dabd0; end: 1064dac0b;  */

void FUN_1064dabd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064dac0c; end: 1064dacd7; -[SCFriendsFeedDataCoordinator contactSnapchatters] */

void FUN_1064dac0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_100bbe44c;
  puStack_30 = &UNK_100bd999c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064dacd8;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0xa8),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064dacd8; end: 1064dad13;  */

void FUN_1064dacd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064dad14; end: 1064daddf; -[SCFriendsFeedDataCoordinator contactNonSnapchatters] */

void FUN_1064dad14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_100bbe44c;
  puStack_30 = &UNK_100bd999c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064dade0;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0xa8),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064dade0; end: 1064dae1b;  */

void FUN_1064dade0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064dae1c; end: 1064dae43; -[SCFriendsFeedDataCoordinator consumableFeedItemsObservable] */

void FUN_1064dae1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064dae44; end: 1064dae4b; -[SCFriendsFeedDataCoordinator feedIdsObservable] */

void FUN_1064dae44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x178),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1064dae4c; end: 1064dae73; -[SCFriendsFeedDataCoordinator feedSyncStatusObservable] */

void FUN_1064dae4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064dae74; end: 1064daf7b; -[SCFriendsFeedDataCoordinator sponsoredSnapCountObservable] */

void FUN_1064dae74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110927048);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x1b0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24a740();
  _objc_release(uVar2);
  uVar7 = uVar1;
  if ((uVar3 & 1) == 0) {
    _objc_retain(uVar1);
  }
  else {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010bfbc400(PTR_PTR_1126ae6b8,param_2,*(undefined8 *)(param_1 + 0x1e8));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010bf41860(uVar1,param_2,puVar6,&PTR___NSConcreteGlobalBlock_110927148);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1064daf7c; end: 1064dafd7;  */

void FUN_1064daf7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110927068);
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064dafd8; end: 1064dafdf;  */

undefined8 FUN_1064dafd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3d15c(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000100bec110();
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1064dafe0; end: 1064db14f;  */

void FUN_1064dafe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  puStack_58 = &UNK_100bbe44c;
  puStack_50 = &UNK_100bd999c;
  uStack_48 = 0;
  func_0x00010c0c0800(param_2);
  puVar1 = (undefined *)puStack_68[5];
  func_0x00010bfc41a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c24a920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064db150; end: 1064db187;  */

void FUN_1064db150(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064db188; end: 1064db18b;  */

void FUN_1064db188(void)

{
  return;
}



/* Entry: 1064db18c; end: 1064db25f;  */

void FUN_1064db18c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064db260; end: 1064db32f;  */

void FUN_1064db260(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c078c20();
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064db330; end: 1064db38b; -[SCFriendsFeedDataCoordinator notifyViewHasPartiallyAppearedAtLeastOnce] */

void FUN_1064db330(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be65a40();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = PTR_PTR_1126cb150;
  func_0x00010c29d040(PTR_PTR_1126cb150);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd12e0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c250030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_startPresenceSubscriptions_112671a30);
  return;
}



/* Entry: 1064db38c; end: 1064db48b; -[SCFriendsFeedDataCoordinator friendsFeedItemForFeedId:] */

void FUN_1064db38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_100bbe44c;
  puStack_40 = &UNK_100bd999c;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064db48c; end: 1064db5e7;  */

void FUN_1064db48c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf51e00();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar4 = uVar5;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((int)uVar3 != 0) {
          param_1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          _objc_retain(uVar5);
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          *(undefined8 *)(param_1 + 0x28) = uVar5;
          _objc_release(uVar4);
          goto LAB_1064db59c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_1064db59c:
  _objc_release(lVar1);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1064db5e8;
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
    lStack_150 = param_1;
    lStack_148 = lVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar4);
    _objc_initWeak(auStack_158,lVar2);
    uVar4 = *(undefined8 *)(lVar2 + 0xa8);
    _objc_copyWeak(auStack_160,auStack_158);
    func_0x00010c0f7fc0(uVar4);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
    return;
  }
  return;
}



/* Entry: 1064db5e8; end: 1064db6b3; -[SCFriendsFeedDataCoordinator startListenToPublicStoriesUpdates] */

void FUN_1064db5e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1064db6b4; end: 1064db6df;  */

void FUN_1064db6b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be147c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064db6e0; end: 1064db747; -[SCFriendsFeedDataCoordinator stopListenToPublicStoriesUpdates] */

void FUN_1064db6e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064db748; end: 1064db793; -[SCFriendsFeedDataCoordinator _appDidEnterBackground] */

void FUN_1064db748(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_110927168);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010c139760(*(undefined8 *)(param_1 + 0x1e0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064db794; end: 1064db80b;  */

void FUN_1064db794(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x000107cfb130();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bef0c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064db80c; end: 1064db91b; -[SCFriendsFeedDataCoordinator _observeAddFriendsData] */

void FUN_1064db80c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bef8c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1064db91c; end: 1064db963;  */

void FUN_1064db91c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2c80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064db964; end: 1064db9a3; -[SCFriendsFeedDataCoordinator _updateAddFriendsDataAndHandleUpdatesIfNeededWithData:] */

void FUN_1064db964(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be32c60(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064db9a4; end: 1064db9ab;  */

void FUN_1064db9a4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1064eb2bc(param_2);
  FUN_1064ecd50(param_2,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064db9ac; end: 1064db9df;  */

void FUN_1064db9ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064db9e0; end: 1064dba8b; -[SCFriendsFeedDataCoordinator _didClearFeedDbWithSuccess:] */

void FUN_1064db9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5ba0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064dba8c; end: 1064dbba7; -[SCFriendsFeedDataCoordinator _processMultirecipientNativeDataStream:] */

void FUN_1064dba8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cb160;
  _objc_alloc(PTR_PTR_1126cb160);
  uVar1 = param_3;
  func_0x00010c278f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c055020(puVar3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e525d8,0,0,0);
  _objc_release(uVar1);
  func_0x00010be32140(param_1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1064dbba8; end: 1064dbbf3;  */

void FUN_1064dbba8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 1064dbbf4; end: 1064dbf63; -[SCFriendsFeedDataCoordinator _fetchStoriesForMultipleFeedTypes] */

void FUN_1064dbbf4(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar8 = &puStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2a20;
  func_0x00010c24b800(PTR_PTR_1126c2a20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar4 = *(ulong *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2a20;
  func_0x00010c24b820(PTR_PTR_1126c2a20);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c60d0;
    puVar7 = *(undefined **)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bf009e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR____NSArray0__struct_11034ab48;
    puStack_78 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      puStack_78 = puVar2;
    }
    ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c60e8;
    ppuVar8 = *(undefined ***)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)ppuVar8;
    func_0x00010bf009e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 != (undefined *)0x0) {
      puStack_70 = puVar9;
    }
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c0d3c80();
    _objc_release(ppuVar10);
    _objc_release(puVar9);
    _objc_release(ppuVar8);
    _objc_release(puVar2);
    _objc_release(puVar7);
    if ((int)uVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf009e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar11);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    ppuVar10 = ppuVar11;
    func_0x00010bf51e00();
    func_0x00010bee0de0(param_1);
    _objc_release(ppuVar10);
  }
  else {
    ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_1111809c8;
    func_0x00010c0d3c80();
    if ((int)uVar3 != 0) {
      func_0x00010befa120(ppuVar11);
    }
    _objc_initWeak(auStack_90,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar11;
    func_0x00010bf51e00(ppuVar11);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1064dbf64;
    puStack_a8 = &UNK_11086b670;
    param_2 = auStack_90;
    _objc_copyWeak(auStack_a0,param_2);
    uStack_98 = (undefined1)uVar3;
    func_0x00010bf00a60(uVar1);
    _objc_release(uVar6);
    _objc_release(ppuVar10);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar8 + 0x20));
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(param_2);
  ppuVar11 = ppuVar11 + 4;
  _objc_loadWeakRetained(ppuVar11);
  func_0x00010bee0de0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 1064dbf64; end: 1064dbfb7;  */

void FUN_1064dbf64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0de0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064dbfb8; end: 1064dc98f; -[SCFriendsFeedDataCoordinator _updateStoriesForMultipleFeedTypes:spotlightOnFriendsFeedEnabled:] */

void FUN_1064dbfb8(long param_1,undefined *param_2,undefined *param_3,int param_4)

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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  puVar20 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar20 = puVar1;
  }
  _objc_retain(puVar20);
  _objc_release(puVar1);
  puVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar20;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    puVar4 = *(undefined **)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar5;
  }
  else {
    puVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010bf51e00();
    uVar16 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar4;
    _objc_release(uVar16);
    puVar3 = puVar2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar4 = puVar2;
    puVar2 = puVar3;
  }
  _objc_release(puVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x188));
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(puVar2);
  puVar5 = puVar2;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(puVar2);
      }
      puVar24 = *(undefined **)((long)puVar21 * 8);
      if (param_4 == 0) {
LAB_1064dc29c:
        puVar7 = puVar24;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = puVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 != (undefined *)0x0) {
          puVar7 = puVar6;
          func_0x00010c2923e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar22;
          FUN_1064dc990();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          func_0x00010c2923e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar22);
          _objc_release(puVar7);
          param_2 = puVar24;
        }
      }
      else {
        puVar6 = puVar24;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar7;
        func_0x00010c067ec0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        if ((int)puVar22 != 0x10d) goto LAB_1064dc29c;
        _objc_retain(puVar24);
        puVar6 = puVar24;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar7;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar6;
        func_0x00010c08fa60();
        _objc_release(puVar6);
        if (puVar22 == (undefined *)0x0) {
          puVar6 = puVar24;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar6;
          func_0x00010afef86c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          if (puVar22 == (undefined *)0x0) {
            puVar22 = (undefined *)0x0;
            puVar6 = PTR____NSArray0__struct_11034ab48;
          }
          else {
            puVar8 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
            func_0x00010c0ecd20();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
            func_0x00010c0ecd20();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar22;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar10;
            func_0x00010bf52a60();
            lVar17 = lRam0000000000000000;
            while (puVar6 != (undefined *)0x0) {
              puVar18 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar17) {
                  _objc_enumerationMutation(puVar10);
                }
                lVar23 = *(long *)((long)puVar18 * 8);
                lVar19 = lVar23;
                func_0x00010c24c480();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar19;
                func_0x00010bf28980();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar19);
                lVar19 = lVar11;
                func_0x00010c27dd80();
                if (lVar19 == 4) {
                  lVar19 = lVar11;
                  func_0x00010bfb9180();
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar19;
                  func_0x00010bf529e0();
                  _objc_release(lVar19);
                  if (lVar12 != 0) {
                    lVar19 = lVar11;
                    func_0x00010bfb9180(lVar11);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa160(puVar8);
                    _objc_release(lVar19);
                  }
                }
                lVar19 = lVar23;
                func_0x00010bf5b480();
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar19;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                lVar13 = lVar12;
                func_0x00010c08fa60();
                _objc_release(lVar12);
                _objc_release(lVar19);
                if (lVar13 != 0) {
                  func_0x00010bf5b480();
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar23;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar13 = lVar12;
                  func_0x000108f4d88c();
                  _objc_retainAutoreleasedReturnValue();
                  lVar19 = lVar12;
                  if (lVar13 != 0) {
                    lVar19 = lVar13;
                  }
                  _objc_retain(lVar19);
                  _objc_release(lVar13);
                  func_0x00010befa120(puVar9);
                  _objc_release(lVar19);
                  _objc_release(lVar12);
                  _objc_release(lVar23);
                }
                _objc_release(lVar11);
                puVar18 = puVar18 + 1;
              } while (puVar6 != puVar18);
              puVar6 = puVar10;
              func_0x00010bf52a60();
            }
            _objc_release(puVar10);
            puVar10 = puVar8;
            func_0x00010bf529e0();
            puVar6 = puVar9;
            if (puVar10 != (undefined *)0x0) {
              puVar6 = puVar8;
            }
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(puVar8);
          }
        }
        else {
          puVar22 = puVar7;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar22);
        _objc_release(puVar7);
        _objc_release(puVar24);
        puVar7 = puVar6;
        func_0x00010bf52a60();
        lVar17 = lRam0000000000000000;
        while (puVar7 != (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar17) {
              _objc_enumerationMutation(puVar6);
            }
            puVar8 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            param_2 = puVar24;
            FUN_1064dc990();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(puVar9);
            _objc_release(puVar8);
            puVar22 = puVar22 + 1;
          } while (puVar7 != puVar22);
          puVar7 = puVar6;
          func_0x00010bf52a60();
        }
      }
      _objc_release(puVar6);
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar5);
    puVar5 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar5 = puVar3;
  if (param_4 == 0) {
    func_0x00010bf51e00();
  }
  else {
    lVar17 = *(long *)(param_1 + 0xc0);
    lVar19 = *(long *)(param_1 + 0x120);
    _objc_retain(puVar3);
    _objc_retain(lVar17);
    _objc_retain(lVar19);
    lVar14 = lVar17;
    func_0x00010bf529e0();
    if ((lVar14 == 0) || (lVar14 = lVar19, func_0x00010bf529e0(), lVar14 == 0)) {
      func_0x00010bf51e00();
    }
    else {
      puVar21 = puVar3;
      func_0x00010c0d3c80();
      _objc_retain(lVar19);
      _objc_retain(puVar21);
      func_0x00010bf97ce0(lVar17);
      puVar5 = puVar21;
      func_0x00010bf51e00();
      _objc_release(lVar19);
      _objc_release(puVar21);
      _objc_release(puVar21);
    }
    _objc_release(lVar19);
    _objc_release(lVar17);
    _objc_release(puVar3);
  }
  puVar21 = *(undefined **)(param_1 + 0xb8);
  _objc_retain(puVar4);
  _objc_retain(puVar21);
  if (puVar4 == puVar21) {
    _objc_release(puVar21);
    _objc_release(puVar4);
LAB_1064dc870:
    puVar21 = *(undefined **)(param_1 + 0xc0);
    _objc_retain(puVar5);
    _objc_retain(puVar21);
    if (puVar5 == puVar21) {
      _objc_release(puVar21);
      _objc_release(puVar5);
      goto LAB_1064dc91c;
    }
    puVar24 = puVar5;
    if (puVar21 == (undefined *)0x0) goto LAB_1064dc8c0;
    func_0x00010c071ae0();
    _objc_release(puVar21);
    _objc_release(puVar5);
    if (((ulong)puVar24 & 1) != 0) goto LAB_1064dc91c;
  }
  else {
    puVar24 = puVar4;
    if (puVar21 == (undefined *)0x0) {
LAB_1064dc8c0:
      _objc_release(puVar24);
    }
    else {
      func_0x00010c071ae0();
      _objc_release(puVar21);
      _objc_release(puVar4);
      if ((int)puVar24 != 0) goto LAB_1064dc870;
    }
  }
  puVar21 = puVar4;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined **)(param_1 + 0xb8) = puVar21;
  _objc_release(uVar16);
  puVar21 = puVar5;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar21;
  _objc_release(uVar16);
  func_0x00010be32c60(param_1);
LAB_1064dc91c:
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  puVar20 = param_2;
  if (param_3 != (undefined *)0x0) {
    puVar5 = param_3;
    FUN_1064dd360();
    puVar1 = param_2;
    FUN_1064dd360();
    if (((uint)puVar1 & ((uint)puVar5 ^ 1)) == 0) {
      puVar20 = param_3;
    }
  }
  _objc_retain(puVar20);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1064dc990; end: 1064dca07;  */

void FUN_1064dc990(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar3 = param_2;
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_1064dd360();
    lVar2 = param_2;
    FUN_1064dd360();
    if (((uint)lVar2 & ((uint)lVar1 ^ 1)) == 0) {
      lVar3 = param_1;
    }
  }
  _objc_retain(lVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1064dca08; end: 1064dcbbb; -[SCFriendsFeedDataCoordinator _onUpdatePublicUserStories:publicUserFeedIds:] */

void FUN_1064dca08(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = param_3;
  func_0x00010bf529e0();
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar7 != uVar1) goto LAB_1064dcb98;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = param_3;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x000100bb974c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0ddc60();
      if (0 < (long)uVar4) {
        func_0x00010c1d0640(puVar2,param_2,uVar3,uVar1);
      }
      _objc_release(uVar1);
      _objc_release(uVar3);
      uVar7 = uVar7 + 1;
      uVar1 = param_3;
      func_0x00010bf529e0();
    } while (uVar7 < uVar1);
  }
  puVar8 = *(undefined **)(param_1 + 0xd0);
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  if (puVar8 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar8);
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    else {
      puVar5 = puVar8;
      func_0x00010c071d00(puVar8,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar8);
      if (((ulong)puVar5 & 1) != 0) goto LAB_1064dcb90;
    }
    puVar8 = puVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar8;
    _objc_release(uVar6);
    func_0x00010be32c60(param_1,param_2,&PTR____CFConstantStringClassReference_110e524f8);
  }
LAB_1064dcb90:
  _objc_release(puVar2);
LAB_1064dcb98:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064dcbbc; end: 1064dcc0f;  */

void FUN_1064dcbbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67a60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064dcc10; end: 1064dcdc3; -[SCFriendsFeedDataCoordinator _onAdditionalPublicUserStories:publicUserFeedIds:] */

void FUN_1064dcc10(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = param_3;
  func_0x00010bf529e0();
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar7 != uVar1) goto LAB_1064dcda0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = param_3;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x000100bb974c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0ddc60();
      if (0 < (long)uVar4) {
        func_0x00010c1d0640(puVar2,param_2,uVar3,uVar1);
      }
      _objc_release(uVar1);
      _objc_release(uVar3);
      uVar7 = uVar7 + 1;
      uVar1 = param_3;
      func_0x00010bf529e0();
    } while (uVar7 < uVar1);
  }
  puVar8 = *(undefined **)(param_1 + 0xd8);
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  if (puVar8 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar8);
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    else {
      puVar5 = puVar8;
      func_0x00010c071d00(puVar8,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar8);
      if (((ulong)puVar5 & 1) != 0) goto LAB_1064dcd98;
    }
    puVar8 = puVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined **)(param_1 + 0xd8) = puVar8;
    _objc_release(uVar6);
    func_0x00010be32c60(param_1,param_2,&PTR____CFConstantStringClassReference_110e52518);
  }
LAB_1064dcd98:
  _objc_release(puVar2);
LAB_1064dcda0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064dcdc4; end: 1064dce0b;  */

void FUN_1064dcdc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064dce0c; end: 1064dce93; -[SCFriendsFeedDataCoordinator _updateActivePresenceInfo:] */

void FUN_1064dce0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be32c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleUpdatesIfNeededWithUpdate_11256a4b8,
             &PTR____CFConstantStringClassReference_110e525f8);
  return;
}



/* Entry: 1064dce94; end: 1064dced3; -[SCFriendsFeedDataCoordinator _updatePinnedTimestampsByFeedId:] */

void FUN_1064dce94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be32c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleUpdatesIfNeededWithUpdate_11256a4b8,
             &PTR____CFConstantStringClassReference_110e52638);
  return;
}



/* Entry: 1064dced4; end: 1064dd06f; -[SCFriendsFeedDataCoordinator didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1064dced4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(param_5);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  lVar7 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar7 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = uVar1;
    func_0x00010c067fc0();
    bVar2 = uVar4 == 2;
  }
  puVar5 = puVar3;
  func_0x00010bf4b900();
  if ((((ulong)puVar5 & 1) != 0) || (bVar2)) {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xa8));
  }
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be147d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__fetchStoriesForMultipleFeedType_112562b90);
  return;
}



/* Entry: 1064dd070; end: 1064dd077;  */

void FUN_1064dd070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be147d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchStoriesForMultipleFeedType_112562b90);
  return;
}



/* Entry: 1064dd078; end: 1064dd35f; -[SCFriendsFeedDataCoordinator .cxx_destruct] */

void FUN_1064dd078(long param_1)

{
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
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
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 1064dd360; end: 1064dd477;  */

uint FUN_1064dd360(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar1 = param_1, func_0x00010c0741a0(), (uVar1 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0741a0();
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1064dd478; end: 1064dd483; -[SCPreferences setHasClearedFeedDb:] */

void FUN_1064dd478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e52658);
  return;
}



/* Entry: 1064dd484; end: 1064dd48b; -[SCFeedSnapchattersRepository removeUpdateListener:] */

void FUN_1064dd484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1064dd48c; end: 1064dd4cb;  */

void FUN_1064dd48c(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb02c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064dd4cc; end: 1064dd827; -[SCFeedSnapchattersRepository _setupSubscriptionsWithBitmojiAvatarProvider:bitmojiSelfieProvider:snapchattersObservableRepository:] */

void FUN_1064dd4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25ffc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1064dd828;
  puStack_88 = &UNK_110843540;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15ae00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25ffc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1064dd854;
  puStack_b0 = &UNK_110843540;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  uVar2 = uVar1;
  func_0x00010c2445c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064dd828; end: 1064dd8ab;  */

void FUN_1064dd828(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064dd8ac; end: 1064dd8af; -[SCFeedSnapchattersRepository _refreshBitmoji] */

void FUN_1064dd8ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcbad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceDidUpdateWithAnnouncerI_112550850);
  return;
}



/* Entry: 1064dd8b0; end: 1064dd92b; -[SCFeedSnapchattersRepository didUpdateFriendStorySettingWithUpdateRequest:success:] */

void FUN_1064dd8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
  
  if (param_4 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1064dd92c;
    puStack_20 = &UNK_110862228;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1064dd934;
    puStack_48 = &UNK_110862228;
    uStack_40 = param_1;
    uStack_18 = param_1;
    func_0x00010c0bede0(param_3,param_2,&puStack_38,&puStack_60,
                        &PTR___NSConcreteGlobalBlock_110927428);
  }
  return;
}



/* Entry: 1064dd92c; end: 1064dd93f;  */

void FUN_1064dd92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcbad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__announceDidUpdateWithAnnouncerI_112550850);
  return;
}



/* Entry: 1064dd940; end: 1064dd943; -[SCFeedSnapchattersRepository didStartSnapchattersUpdateDataRequest:] */

void FUN_1064dd940(void)

{
  return;
}



/* Entry: 1064dd944; end: 1064dda57; -[SCFeedSnapchattersRepository didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1064dd944(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
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
  
  if (param_4 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1064dda58;
    puStack_30 = &UNK_110855640;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1064dda60;
    puStack_58 = &UNK_1108941c0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x1064dda68;
    puStack_80 = &UNK_110866ad0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1064dda70;
    puStack_a8 = &UNK_110866b00;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x1064dda78;
    puStack_d0 = &UNK_110862228;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x1064dda80;
    puStack_f8 = &UNK_110851800;
    uStack_f0 = param_1;
    uStack_c8 = param_1;
    uStack_a0 = param_1;
    uStack_78 = param_1;
    uStack_50 = param_1;
    uStack_28 = param_1;
    func_0x00010c0bc6c0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,0,&puStack_c0,
                        &puStack_e8,&puStack_110,0,0);
  }
  return;
}



/* Entry: 1064dda58; end: 1064dda87;  */

void FUN_1064dda58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcbad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__announceDidUpdateWithAnnouncerI_112550850);
  return;
}



/* Entry: 1064dda88; end: 1064dda8b; -[SCFeedSnapchattersRepository didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_1064dda88(void)

{
  return;
}



/* Entry: 1064dda8c; end: 1064dda8f; -[SCFeedSnapchattersRepository didEndSnapchattersContactDataRequest:withResult:] */

void FUN_1064dda8c(void)

{
  return;
}



/* Entry: 1064dda90; end: 1064dda9b; -[SCFeedSnapchattersRepository didEndSnapchattersFriendInfoRequest:withSuccess:] */

void FUN_1064dda90(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcbad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceDidUpdateWithAnnouncerI_112550850)
    ;
    return;
  }
  return;
}



/* Entry: 1064dda9c; end: 1064ddb8f;  */

void FUN_1064dda9c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80(uVar2);
    if ((param_3 == 0) && (lVar3 = param_2, func_0x00010bf529e0(), lVar3 != 0)) {
      func_0x00010befa160(uVar2);
      uVar5 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010bf529e0(param_2);
      func_0x00010c0affe0(uVar5);
    }
    lVar4 = lVar1;
    func_0x00010bde9500(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010bf51e00(uVar5);
    (**(code **)(lVar3 + 0x10))(lVar3,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064ddb90; end: 1064ddc3b;  */

void FUN_1064ddb90(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_3 == 0) && (param_1 != 0)) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf529e0(param_2);
    func_0x00010c0affe0(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e9c0(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064ddc3c; end: 1064ddcb3; -[SCFeedSnapchattersRepository .cxx_destruct] */

void FUN_1064ddc3c(long param_1)

{
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



/* Entry: 1064ddcb4; end: 1064ddd03;  */

void FUN_1064ddcb4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064ddd04; end: 1064ddd37;  */

void FUN_1064ddd04(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaf240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ddd38; end: 1064ddd7f; -[SCFeedSnapchattersRepositoryGrapheneLogger dealloc] */

void FUN_1064ddd38(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1126f1820;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}


