/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105822f38; end: 105822f8f; -[SCAddFriendsTakeoverViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105822f38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bee30;
  _objc_alloc();
  func_0x00010bff64c0();
  lVar3 = (long)_DAT_11272a4e8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105822f90; end: 105823107; -[SCAddFriendsTakeoverViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105822f90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ea800;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  lVar6 = (long)_DAT_11272a4e8;
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar6));
  lVar5 = (long)_DAT_11272a4bc;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf529e0(uVar2);
  uVar3 = uVar1;
  FUN_105827400(uVar1,uVar2,1,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar3);
  func_0x00010c161980(*(undefined8 *)(param_1 + lVar6));
  func_0x00010be5d4a0(param_1);
  lVar5 = (long)_DAT_11272a4e0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1800();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6ee0();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105823108; end: 10582315b; -[SCAddFriendsTakeoverViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105823108(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ea800;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c0aef40(*(undefined8 *)(param_1 + _DAT_11272a4cc));
  return;
}



/* Entry: 10582315c; end: 105823283; -[SCAddFriendsTakeoverViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582315c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272a4c8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7d40();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272a4dc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7d00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  lVar3 = param_1 + _DAT_11272a4d4;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bef8ea0();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272a4e0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6f00();
  _objc_release(uVar2);
  puStack_48 = PTR_PTR_1126ea800;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105823284; end: 1058232db; -[SCAddFriendsTakeoverViewController didHandleAddAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105823284(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be7cc80();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a4e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058232dc; end: 105823333; -[SCAddFriendsTakeoverViewController didHandleIgnoreAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058232dc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be7cc80();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a4e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b17c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105823334; end: 1058233bb; -[SCAddFriendsTakeoverViewController _presentNextFriendsRequestOrDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105823334(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_11272a4c0);
  lVar1 = *(long *)(param_1 + _DAT_11272a4bc);
  func_0x00010bf529e0();
  if (lVar3 == lVar1 + -1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272a4e0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6f00();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7cc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextFriendRequest_11257ccb8);
  return;
}



/* Entry: 1058233bc; end: 10582346b; -[SCAddFriendsTakeoverViewController _presentNextFriendRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058233bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = (long)_DAT_11272a4bc;
  lVar2 = (long)_DAT_11272a4c0;
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar2) = *(long *)(param_1 + lVar2) + 1;
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272a4e8);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010bf529e0(uVar4);
  uVar5 = uVar3;
  FUN_105827400(uVar3,uVar4,*(long *)(param_1 + lVar2) + 1,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d320(uVar6);
  _objc_release(uVar5);
  func_0x00010be5d4a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10582346c; end: 1058234bf; -[SCAddFriendsTakeoverViewController _applicationDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582346c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a4e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6f00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
  return;
}



/* Entry: 1058234c0; end: 105823677; -[SCAddFriendsTakeoverViewController _markFriendRequestAsSeen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058234c0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11272a4c8;
  puVar1 = *(undefined **)(param_2 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfba8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  }
  uVar4 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_3,uVar4);
  _objc_release(uVar4);
  puVar2 = puVar3;
  func_0x00010bf51e00(puVar3);
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0d20();
  _objc_release(uVar4);
  _objc_release(puVar2);
  func_0x00010c0bb700(*(undefined8 *)(param_2 + _DAT_11272a4cc),param_3,param_4);
  lVar8 = (long)_DAT_11272a4dc;
  lVar5 = *(long *)(param_2 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c088c20();
  uVar4 = param_4;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  _objc_release(uVar4);
  _objc_release(lVar5);
  if ((double)lVar7 < param_1) {
    uVar4 = param_4;
    func_0x00010bfebe20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befcae0();
    uVar6 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7d20();
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105823678; end: 105823733; -[SCAddFriendsTakeoverViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105823678(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a4e0,0);
  _objc_storeStrong(param_1 + _DAT_11272a4dc,0);
  _objc_storeStrong(param_1 + _DAT_11272a4d8,0);
  _objc_destroyWeak(param_1 + _DAT_11272a4d4);
  _objc_storeStrong(param_1 + _DAT_11272a4cc,0);
  _objc_storeStrong(param_1 + _DAT_11272a4c4,0);
  _objc_storeStrong(param_1 + _DAT_11272a4e8,0);
  _objc_storeStrong(param_1 + _DAT_11272a4d0,0);
  _objc_storeStrong(param_1 + _DAT_11272a4c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a4bc,0);
  return;
}



/* Entry: 105823734; end: 10582397b; -[SCAddFriendsTakeoverSnapchatterDataProvider initWithSnapchattersDataFetcher:snapProProfileIdProvider:snapProPopularStatusProvider:viewedIncomingFriendsTracker:friendsTakeoverPreferences:circumstanceEngine:featureSettings:userSegmentsProvider:] */

undefined8 *
FUN_105823734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_68 = PTR_PTR_1126ea808;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
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



/* Entry: 10582397c; end: 105823c3b; -[SCAddFriendsTakeoverSnapchatterDataProvider fetchFriendsTakeoverSnapchatters:attributedPage:completionQueue:] */

void FUN_10582397c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_3 != 0) && (param_5 != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x60);
    func_0x00010bf1f440();
    if ((uVar1 & 1) == 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105823c3c;
      puStack_60 = &UNK_110849530;
      _objc_retain(param_3);
      lStack_58 = param_3;
      func_0x00010007380c(param_5,&puStack_78);
      lVar7 = lStack_58;
    }
    else {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0d42e0();
      _objc_release(uVar2);
      if (uVar1 < 0x1f) {
        _objc_initWeak(auStack_80,param_1);
        puVar3 = PTR_PTR_1126b6ae8;
        func_0x00010c22ba80(PTR_PTR_1126b6ae8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126ae960;
        puVar4 = PTR_PTR_1126bd748;
        func_0x00010bef8ee0(PTR_PTR_1126bd748);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb9320(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126ae970;
        func_0x00010c292920(PTR_PTR_1126ae970);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_105823c4c;
        puStack_a0 = &UNK_110848378;
        _objc_copyWeak(auStack_88,auStack_80);
        _objc_retain(param_3);
        lStack_90 = param_3;
        _objc_retain(param_5);
        lStack_98 = param_5;
        func_0x00010c2a15e0(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(lStack_98);
        _objc_release(lStack_90);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_80);
        goto LAB_105823bec;
      }
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_105823c80;
      puStack_c8 = &UNK_110849530;
      _objc_retain(param_3);
      lStack_c0 = param_3;
      func_0x00010007380c(param_5,&puStack_e0);
      lVar7 = lStack_c0;
    }
    _objc_release(lVar7);
  }
LAB_105823bec:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105823c3c; end: 105823c4b;  */

void FUN_105823c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105823c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105823c4c; end: 105823c7f;  */

void FUN_105823c4c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105823c80; end: 105823c8f;  */

void FUN_105823c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105823c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105823c90; end: 105823cdf; -[SCAddFriendsTakeoverSnapchatterDataProvider dealloc] */

void FUN_105823c90(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x40));
  puStack_28 = PTR_PTR_1126ea808;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105823ce0; end: 105823eff; -[SCAddFriendsTakeoverSnapchatterDataProvider _checkIsPopularOrSnapProUser:completionBlock:] */

void FUN_105823ce0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105823f00;
      puStack_58 = &UNK_110849200;
      _objc_copyWeak(auStack_50,auStack_48);
      uVar6 = uVar1;
      func_0x00010c07a700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar6;
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_50);
    }
    if (*(long *)(param_1 + 0x40) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_48);
      uVar6 = uVar1;
      func_0x00010c116a60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_78);
    }
    if ((*(char *)(param_1 + 0x28) == '\x01') && (*(char *)(param_1 + 0x29) == '\x01')) {
      if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar4 = (uint)puVar3 ^ 1;
      }
      else {
        uVar4 = 1;
      }
      (**(code **)(param_4 + 0x10))(param_4,uVar4);
    }
    else {
      lVar2 = param_4;
      _objc_retainBlock();
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x48) = lVar2;
      _objc_release(uVar6);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105823f00; end: 105823f7b;  */

void FUN_105823f00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be42c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105823f7c; end: 105823f8b; -[SCAddFriendsTakeoverSnapchatterDataProvider _isPolularChanged:] */

void FUN_105823f7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  *(undefined1 *)(param_1 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdf7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dataUpdated_11255b990);
  return;
}



/* Entry: 105823f8c; end: 105823fcb; -[SCAddFriendsTakeoverSnapchatterDataProvider _profileIdChanged:] */

void FUN_105823f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x29) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdf7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dataUpdated_11255b990);
  return;
}



/* Entry: 105823fcc; end: 10582404b; -[SCAddFriendsTakeoverSnapchatterDataProvider _dataUpdated] */

void FUN_105823fcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (((*(char *)(param_1 + 0x28) == '\x01') && (*(char *)(param_1 + 0x29) == '\x01')) &&
     (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
    if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          *(undefined8 *)(param_1 + 0x30));
      uVar4 = (uint)puVar2 ^ 1;
      lVar1 = *(long *)(param_1 + 0x48);
    }
    else {
      uVar4 = 1;
    }
    (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10582404c; end: 10582417b; -[SCAddFriendsTakeoverSnapchatterDataProvider _filterSnapchatters:completionQueue:completionBlock:] */

void FUN_10582404c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bdddd20(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10582417c; end: 1058241c3;  */

void FUN_10582417c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058241c4; end: 10582430f; -[SCAddFriendsTakeoverSnapchatterDataProvider _fetchAllIncomingSnapchatters:completionQueue:] */

void FUN_1058241c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf00220(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105824310; end: 105824363;  */

void FUN_105824310(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105824364; end: 10582462f; -[SCAddFriendsTakeoverSnapchatterDataProvider _didFetchIncomingSnapchattersToDisplay:isPopularOrProUser:completionBlock:completionQueue:] */

void FUN_105824364(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    _objc_retain(param_6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010bfebee0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0b4ca0();
    dVar8 = (double)lVar4;
    dVar9 = dVar8 / 1000.0;
    _objc_release(lVar1);
    _objc_release(lVar7);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfba8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c088ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar1 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7d40();
      _objc_release(uVar2);
      _objc_release(puVar5);
      dVar8 = 2.2250738585072014e-308;
    }
    else {
      func_0x00010c26f320(lVar1);
    }
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105824640;
    puStack_a8 = &UNK_1108b66e0;
    uStack_a0 = uVar3;
    dStack_98 = dVar9;
    dStack_90 = dVar8;
    _objc_retain(uVar3);
    uVar2 = param_3;
    func_0x0001006372a4(param_3,&puStack_c0);
    func_0x00010bf529e0();
    uVar6 = uVar2;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puStack_f0 = puVar5;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1058247dc;
    puStack_d8 = &UNK_11084aaa8;
    _objc_retain(param_5);
    uStack_d0 = uVar6;
    lStack_c8 = param_5;
    _objc_retain(uVar6);
    func_0x00010007380c(param_6,&puStack_f0);
    _objc_release(param_6);
    _objc_release(uStack_d0);
    _objc_release(lStack_c8);
    _objc_release(uVar6);
    _objc_release(uStack_a0);
    _objc_release(uVar3);
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105824630;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_68 = param_5;
    _objc_retain(param_6);
    func_0x00010007380c(param_6,&puStack_88);
    _objc_release(param_6);
    lVar1 = lStack_68;
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105824630; end: 10582463f;  */

void FUN_105824630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010582463c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105824640; end: 1058247db;  */

undefined8 FUN_105824640(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0737e0();
  if ((int)uVar2 == 0) {
    uVar3 = param_3;
    func_0x00010bfebe20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010befb8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    func_0x00010c0720c0();
    if (((uVar2 & 1) != 0) || (uVar2 = param_3, func_0x00010c06d560(), (uVar2 & 1) != 0)) {
LAB_105824710:
      _objc_release(uVar4);
      _objc_release(uVar3);
      goto LAB_105824720;
    }
    uVar2 = param_3;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
LAB_10582470c:
      _objc_release();
      goto LAB_105824710;
    }
    uVar6 = *(ulong *)(param_2 + 0x20);
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    if ((uVar6 & 1) != 0) goto LAB_10582470c;
    uVar6 = param_3;
    func_0x00010bfebe20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befcae0();
    dVar8 = *(double *)(param_2 + 0x28);
    dVar7 = param_1;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (dVar8 < param_1) {
      uVar1 = param_3;
      func_0x00010bfebe20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befcae0();
      dVar8 = *(double *)(param_2 + 0x30);
      _objc_release(uVar1);
      if (dVar8 < dVar7) {
        uVar5 = 1;
        goto LAB_10582472c;
      }
    }
  }
  else {
LAB_105824720:
    _objc_release(uVar1);
  }
  uVar5 = 0;
LAB_10582472c:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1058247dc; end: 1058247eb;  */

void FUN_1058247dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058247e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1058247ec; end: 10582489f; -[SCAddFriendsTakeoverSnapchatterDataProvider .cxx_destruct] */

void FUN_1058247ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058248a0; end: 105824c9b; -[SCAddFriendsTakeOverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058248a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar13 = param_1;
  FUN_105824c9c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar13;
  func_0x00010c244980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272a530;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar13;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272a54c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar13;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = param_1;
  FUN_105824c9c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010bef8ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272a540;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar13;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = param_1;
  FUN_105824c9c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010bf45d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272a544;
    _objc_loadWeakRetained(lVar13);
  }
  lVar7 = lVar13;
  func_0x00010c11e240(lVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272a538;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar13;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  puVar9 = PTR_PTR_1126bee38;
  _objc_alloc(PTR_PTR_1126bee38);
  func_0x00010c049c20();
  _objc_initWeak(auStack_68,param_1);
  puVar10 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  FUN_105824c9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2687a0();
  _objc_release(lVar13);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010c11e260(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  puVar12 = PTR_PTR_1126bee40;
  _objc_alloc(PTR_PTR_1126bee40);
  lVar13 = lVar5;
  func_0x00010c269d40(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0495e0(puVar12);
  _objc_release(lVar13);
  FUN_105824c9c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105824c9c; end: 105824cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105824c9c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a53c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105824cc0; end: 105824cff;  */

void FUN_105824cc0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be24640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105824d00; end: 105824deb; -[SCAddFriendsTakeOverEntryPoint _grapheneLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105824d00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272a548;
    _objc_loadWeakRetained(lVar5);
  }
  lVar1 = lVar5;
  func_0x00010bfcdfa0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar2 = PTR_PTR_1126b4a50;
  _objc_alloc(PTR_PTR_1126b4a50);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11272a550;
    _objc_loadWeakRetained(lVar5);
  }
  lVar3 = lVar5;
  func_0x00010c293fc0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126bee48;
  _objc_alloc(PTR_PTR_1126bee48);
  func_0x00010c0185a0();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105824dec; end: 105824e83; -[SCAddFriendsTakeOverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105824dec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a550);
  _objc_destroyWeak(param_1 + _DAT_11272a54c);
  _objc_destroyWeak(param_1 + _DAT_11272a548);
  _objc_destroyWeak(param_1 + _DAT_11272a544);
  _objc_destroyWeak(param_1 + _DAT_11272a540);
  _objc_destroyWeak(param_1 + _DAT_11272a53c);
  _objc_destroyWeak(param_1 + _DAT_11272a538);
  _objc_destroyWeak(param_1 + _DAT_11272a534);
  _objc_destroyWeak(param_1 + _DAT_11272a530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a52c);
  return;
}



/* Entry: 105824e84; end: 1058252d7; -[SCAddFriendsTakeOverLaunchServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105824e84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272a56c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar14;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_1;
  FUN_1058252d8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c073c40();
  if ((int)lVar3 == 0) {
    lVar3 = param_1;
    FUN_1058252d8();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c293780();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c073d80();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar14);
    if ((int)lVar5 == 0) goto LAB_105824fb4;
  }
  else {
    _objc_release(lVar2);
    _objc_release(lVar14);
  }
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7d40();
  _objc_release(lVar14);
  _objc_release(puVar6);
LAB_105824fb4:
  lVar14 = param_1;
  func_0x0001058252fc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_1;
  func_0x0001058252fc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010c29ec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272a564;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar14;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_1;
  func_0x000105825320();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar14;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_1;
  func_0x000105825320();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar14;
  func_0x00010c103c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272a574;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar14;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272a570;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105825344;
  puStack_c0 = &UNK_110890df8;
  puVar10 = PTR_PTR_1126ae720;
  lStack_b8 = lVar2;
  lStack_b0 = lVar5;
  lStack_a8 = lVar7;
  lStack_a0 = lVar3;
  lStack_98 = lVar1;
  lStack_90 = lVar9;
  lStack_88 = lVar4;
  lStack_80 = lVar8;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar14 = 0;
    uVar13 = 0;
    param_1 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + _DAT_11272a578);
    _objc_retain(uVar13);
    lVar14 = param_1 + _DAT_11272a57c;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_11272a560;
    _objc_loadWeakRetained();
  }
  lVar11 = param_1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_120 = puVar6;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x10582538c;
  puStack_108 = &UNK_1108b6740;
  puVar6 = PTR_PTR_1126ae720;
  uStack_100 = uVar13;
  lStack_f8 = lVar14;
  puStack_f0 = puVar10;
  lStack_e8 = lVar11;
  lStack_e0 = lVar4;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_120);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126bee60;
  _objc_alloc(PTR_PTR_1126bee60);
  func_0x00010bff2300();
  _objc_release(puVar6);
  _objc_release(lVar11);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1058252d8; end: 105825343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058252d8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a554);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105825344; end: 1058253c3;  */

void FUN_105825344(void)

{
  _objc_alloc(PTR_PTR_1126bee50);
  func_0x00010c0498a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058253c4; end: 10582546b; -[SCAddFriendsTakeOverLaunchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058253c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a57c);
  _objc_storeStrong(param_1 + _DAT_11272a578,0);
  _objc_destroyWeak(param_1 + _DAT_11272a574);
  _objc_destroyWeak(param_1 + _DAT_11272a570);
  _objc_destroyWeak(param_1 + _DAT_11272a56c);
  _objc_destroyWeak(param_1 + _DAT_11272a568);
  _objc_destroyWeak(param_1 + _DAT_11272a564);
  _objc_destroyWeak(param_1 + _DAT_11272a560);
  _objc_destroyWeak(param_1 + _DAT_11272a55c);
  _objc_destroyWeak(param_1 + _DAT_11272a558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a554);
  return;
}



/* Entry: 10582546c; end: 10582558f; -[SCScopeExposerAddFriendsTakeOverLauncher initWithAddFriendsTakeOverScopeExposer:addFriendsTakeOverScopeServices:takeoverSnapchatterProvider:resourceDownloader:featureSettings:] */

undefined1 *
FUN_10582546c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ea810;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105825590; end: 1058256ab; -[SCScopeExposerAddFriendsTakeOverLauncher launchForFriendsFeedIfNeededWithNavigationServices:presentingViewIsFullyVisibleBlock:] */

void FUN_105825590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1058256ac;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(uVar1);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058256ac; end: 1058256e3;  */

void FUN_1058256ac(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058256e4; end: 10582584b; -[SCScopeExposerAddFriendsTakeOverLauncher _launchIfNeededWithNavigationServices:presentingViewIsFullyVisibleBlock:takeoverType:] */

void FUN_1058256e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = 0x15;
  uStack_50 = param_5;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6d20(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10582584c; end: 1058259e7;  */

void FUN_10582584c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = param_2, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aebd8;
    func_0x00010c14e3a0(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class(uVar6);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    _objc_retain(param_2);
    func_0x00010bf88c20(uVar3);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(param_2);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1058259e8; end: 105825b63;  */

void FUN_1058259e8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x105825ad4;
    puStack_68 = &UNK_1108b6770;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_40 = uVar1;
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = uVar2;
    uStack_58 = uVar3;
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    _objc_retain(param_2);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    lStack_48 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_40);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105825b64; end: 105825c53; -[SCScopeExposerAddFriendsTakeOverLauncher _exposeScopeWithPresentingViewController:workflowDelegate:snapchatters:confettiImage:takeoverType:] */

void FUN_105825b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126aead8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c038f40();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf23bc0(uVar3,param_2,puVar2,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010bf9d620(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x30) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105825c54; end: 105825c83; -[SCScopeExposerAddFriendsTakeOverLauncher addFriendsTakeOverWorkflowCompleted] */

void FUN_105825c54(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 105825c84; end: 105825cd7; -[SCScopeExposerAddFriendsTakeOverLauncher .cxx_destruct] */

void FUN_105825c84(long param_1)

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



/* Entry: 105825cd8; end: 105825d9f; -[SCAddFriendsTakeoverLogger initWithGrapheneRegistry:friendSurfaceImpressionLogger:] */

undefined1 *
FUN_105825cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea818;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfb7b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105825da0; end: 105825e2b; -[SCAddFriendsTakeoverLogger logTakeoverShows:] */

void FUN_105825da0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bee68;
  func_0x00010c268780(PTR_PTR_1126bee68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105825e2c; end: 105825eb7; -[SCAddFriendsTakeoverLogger logTakeoverAccept:] */

void FUN_105825e2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bee68;
  func_0x00010c2686a0(PTR_PTR_1126bee68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105825eb8; end: 105825f43; -[SCAddFriendsTakeoverLogger logTakeoverIgnore:] */

void FUN_105825eb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bee68;
  func_0x00010c268740(PTR_PTR_1126bee68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105825f44; end: 105825f97; -[SCAddFriendsTakeoverLogger logTakeoverShowsWithNumberOfFriendRequests:] */

void FUN_105825f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bee68;
  func_0x00010c268700(PTR_PTR_1126bee68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105825f98; end: 105826153; -[SCAddFriendsTakeoverLogger logFriendSurfaceImpressionShownWithSnapchatters:takeoverType:] */

void FUN_105825f98(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be19620();
  *(long *)(param_1 + 0x20) = lVar2;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
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
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar4 = puVar3;
        func_0x00010bf529e0();
        if ((undefined *)0x5 < puVar4) goto LAB_1058260e8;
        puVar4 = PTR_PTR_1126b4a10;
        _objc_alloc();
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf529e0(puVar3);
        func_0x00010c050cc0(puVar4,param_2,uVar8,puVar5);
        puVar6 = (undefined8 *)puVar4;
        func_0x00010befa120(puVar3,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar8);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
LAB_1058260e8:
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar4;
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (((*(byte *)(param_3 + 0x30) & 1) == 0) && (*(long *)(param_3 + 0x18) != 0)) {
    *(undefined1 *)(param_3 + 0x30) = 1;
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    uVar8 = 2;
    if (*(long *)(param_3 + 0x28) != 0) {
      uVar8 = 3;
    }
    lVar2 = param_3;
    func_0x00010be19620(param_3);
    func_0x00010c0a81e0(uVar7,param_2,uVar8,2,0,puVar6,uVar1,lVar2,*(undefined8 *)(param_3 + 0x18));
  }
  return;
}



/* Entry: 105826154; end: 1058261e7; -[SCAddFriendsTakeoverLogger logFriendSurfaceImpressionWithDismissReason:] */

void FUN_105826154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = 2;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar1 = 3;
    }
    lVar3 = param_1;
    func_0x00010be19620(param_1);
    func_0x00010c0a81e0(uVar4,param_2,uVar1,2,0,param_3,uVar2,lVar3,*(undefined8 *)(param_1 + 0x18))
    ;
  }
  return;
}



/* Entry: 1058261e8; end: 105826237; -[SCAddFriendsTakeoverLogger _friendSurfaceCurrentTimeMs] */

long FUN_1058261e8(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  return (long)(param_1 * 1000.0);
}



/* Entry: 105826238; end: 105826273; -[SCAddFriendsTakeoverLogger .cxx_destruct] */

void FUN_105826238(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105826274; end: 1058262d7; -[SCPreferences lastFriendsTakeoverStartDate] */

void FUN_105826274(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e057b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058262d8; end: 1058262e3; -[SCPreferences setLastFriendsTakeoverStartDate:] */

void FUN_1058262d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e057b8);
  return;
}



/* Entry: 1058262e4; end: 105826347; -[SCPreferences friensTakeoverSeenSnapchatterIds] */

void FUN_1058262e4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e057d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105826348; end: 105826353; -[SCPreferences setFriensTakeoverSeenSnapchatterIds:] */

void FUN_105826348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e057d8);
  return;
}



/* Entry: 105826354; end: 1058265ff; -[SCAddFriendsTakeoverCardView initWithBackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105826354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ea820;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bee70;
    _objc_opt_new();
    lVar4 = (long)_DAT_11272a5b0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e600(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar4 = (long)_DAT_11272a5b4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126b4730;
    _objc_opt_new();
    lVar4 = (long)_DAT_11272a5b8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a5bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11272a5bc) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a5c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11272a5c0) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a5c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11272a5c4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a5c8);
    *(undefined **)((long)puVar1 + (long)_DAT_11272a5c8) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126b56f8;
    _objc_opt_new();
    lVar4 = (long)_DAT_11272a5cc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126b56f8;
    _objc_opt_new();
    lVar4 = (long)_DAT_11272a5d0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105826600; end: 105826667; -[SCAddFriendsTakeoverCardView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105826600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a5d4);
  *(undefined8 *)(param_1 + _DAT_11272a5d4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_11272a5b8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105826668; end: 105826747; -[SCAddFriendsTakeoverCardView presentWithViewModel:] */

void FUN_105826668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105826748;
  puStack_60 = &UNK_110870f70;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105826780;
  puStack_b0 = &UNK_1108b6800;
  uStack_a8 = param_5;
  uStack_a0 = param_7;
  uStack_98 = param_1;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_7);
  func_0x00010bf03440(0x3fc3333340000000,0,puVar1,param_6,0x10000,&puStack_78,&puStack_c8);
  _objc_release(uStack_a0);
  _objc_release(param_7);
  return;
}



/* Entry: 105826748; end: 10582680f;  */

void FUN_105826748(long param_1)

{
  _CGRectOffset(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0,0x4069000000000000
               );
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 105826810; end: 10582681f;  */

void FUN_105826810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 105826820; end: 105826c23; -[SCAddFriendsTakeoverCardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105826820(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  long lStack_b8;
  undefined *puStack_b0;
  
  puStack_b0 = PTR_PTR_1126ea820;
  lStack_b8 = param_5;
  _objc_msgSendSuper2(&lStack_b8,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11272a5b0));
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11272a5b4));
  dVar30 = param_3 * 0.10000000149011612;
  lVar4 = (long)_DAT_11272a5b8;
  dVar11 = 1.79769313486232e+308;
  uVar3 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar4));
  dVar31 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar12 = (dVar31 - dVar11) * 0.5;
  dVar36 = dVar11;
  func_0x00010b8162e0();
  dVar31 = dVar12;
  _CGRectGetMaxY();
  dVar31 = dVar31 + -30.0;
  lVar5 = (long)_DAT_11272a5bc;
  uVar22 = 0x7fefffffffffffff;
  dVar13 = param_3;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar5));
  dVar14 = (param_3 - dVar13) * 0.5;
  func_0x00010b8162e0();
  dVar32 = dVar14;
  _CGRectGetMaxY();
  dVar32 = dVar32 + 3.5;
  lVar6 = (long)_DAT_11272a5c0;
  uVar23 = 0x7fefffffffffffff;
  dVar15 = param_3;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar6));
  dVar16 = (param_3 - dVar15) * 0.5;
  func_0x00010b8162e0();
  dVar33 = dVar16;
  _CGRectGetMaxY();
  dVar33 = dVar33 + 7.0;
  lVar8 = (long)_DAT_11272a5c4;
  uVar24 = 0x7fefffffffffffff;
  dVar17 = param_3;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar8));
  dVar18 = (param_3 - dVar17) * 0.5;
  func_0x00010b8162e0();
  dVar27 = param_3;
  _CGRectGetMaxY(param_1,param_2);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar19 = (param_1 + param_3 * -0.04500000178813934) - dVar27;
  lVar7 = (long)_DAT_11272a5d0;
  dVar25 = param_3;
  FUN_105826c24(*(undefined8 *)(param_5 + lVar7));
  dVar20 = dVar19;
  dVar28 = dVar27;
  uVar29 = param_4;
  _CGRectGetMinY();
  dVar20 = dVar20 + -20.0;
  lVar9 = (long)_DAT_11272a5cc;
  dVar26 = param_3;
  FUN_105826c24(dVar20,*(undefined8 *)(param_5 + lVar9));
  dVar37 = dVar20;
  _CGRectGetMinY();
  lVar10 = (long)_DAT_11272a5c8;
  dVar34 = dVar37;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar10));
  _CGRectGetHeight();
  lVar1 = *(long *)(param_5 + lVar10);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    dVar21 = *(double *)PTR__CGRectZero_110347608;
    dVar34 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar37 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    uVar35 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  }
  else {
    dVar34 = (dVar37 + -20.0) - dVar34;
    uVar35 = 0x7fefffffffffffff;
    dVar37 = param_3;
    func_0x00010c23d5a0(param_3,0x7fefffffffffffff,*(undefined8 *)(param_5 + lVar10));
    dVar21 = (param_3 - dVar37) * 0.5;
    func_0x00010b8162e0(dVar21,dVar34,dVar37,uVar35);
  }
  func_0x00010b8166f8(dVar12,dVar30,dVar36,uVar3,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  dVar36 = dVar11 * 0.5;
  func_0x00010b816218();
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0((double)(long)(dVar36 * dVar11) / dVar11);
  _objc_release(uVar3);
  func_0x00010b8166f8(dVar14,dVar31,dVar13,uVar22,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010b8166f8(dVar16,dVar32,dVar15,uVar23,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010b8166f8(dVar18,dVar33,dVar17,uVar24,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar8));
  func_0x00010b8166f8(dVar21,dVar34,dVar37,uVar35,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar10));
  func_0x00010b8166f8(dVar20,dVar26,dVar28,uVar29,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar9));
  func_0x00010b8166f8(dVar19,dVar25,dVar27,param_4,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  return;
}



/* Entry: 105826c24; end: 105826cab;  */

double FUN_105826c24(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126b56f8;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  dVar2 = param_2;
  func_0x00010c23d6e0(param_2,0x7fefffffffffffff,puVar1,param_4,param_3);
  _objc_release(param_3);
  dVar3 = (param_2 - dVar2) * 0.5;
  dVar2 = dVar3;
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  return (double)(long)(dVar3 * dVar2) / dVar2;
}



/* Entry: 105826cac; end: 105826f07; -[SCAddFriendsTakeoverCardView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105826cac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11272a5d8;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105826ef0;
    }
    puVar2 = PTR_PTR_1126bee78;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11272a5b8;
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar5));
    uVar1 = uVar4;
    func_0x00010bf12da0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bf85980(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11272a5bc));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bf6e360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11272a5c0));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c154ee0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11272a5c4));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bf31f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11272a5c8));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bef73a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea26c0(param_1);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bfe6680(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010bea26c0(param_1);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_105826ef0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105826f08; end: 105826f6b; -[SCAddFriendsTakeoverCardView _setButtonViewModel:button:] */

void FUN_105826f08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010c1a7f60(param_4,param_2,1);
  }
  else {
    func_0x00010c1a7f60(param_4,param_2,0);
    func_0x00010c2226c0(param_4,param_2,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105826f6c; end: 105827017; -[SCAddFriendsTakeoverCardView _handleButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105826f6c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b56f8;
  _objc_opt_class(PTR_PTR_1126b56f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11272a5dc);
    uVar3 = param_3;
    func_0x00010beeecc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105827018; end: 105827027; -[SCAddFriendsTakeoverCardView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105827018(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a5d8);
}



/* Entry: 105827028; end: 105827037; -[SCAddFriendsTakeoverCardView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105827028(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a5dc);
}



/* Entry: 105827038; end: 105827077; -[SCAddFriendsTakeoverCardView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105827038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272a5dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105827078; end: 105827157; -[SCAddFriendsTakeoverCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105827078(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a5dc,0);
  _objc_storeStrong(param_1 + _DAT_11272a5d8,0);
  _objc_storeStrong(param_1 + _DAT_11272a5d4,0);
  _objc_storeStrong(param_1 + _DAT_11272a5d0,0);
  _objc_storeStrong(param_1 + _DAT_11272a5cc,0);
  _objc_storeStrong(param_1 + _DAT_11272a5c8,0);
  _objc_storeStrong(param_1 + _DAT_11272a5c4,0);
  _objc_storeStrong(param_1 + _DAT_11272a5c0,0);
  _objc_storeStrong(param_1 + _DAT_11272a5bc,0);
  _objc_storeStrong(param_1 + _DAT_11272a5b8,0);
  _objc_storeStrong(param_1 + _DAT_11272a5b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a5b0,0);
  return;
}



/* Entry: 105827158; end: 105827263; -[SCAddFriendsTakeoverView initWithBackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105827158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ea828;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a5e0);
    *(undefined **)((long)puVar1 + (long)_DAT_11272a5e0) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126bee80;
    _objc_alloc();
    func_0x00010bff64c0();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a5e4);
    *(undefined **)((long)puVar1 + (long)_DAT_11272a5e4) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105827264; end: 105827273; -[SCAddFriendsTakeoverView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105827264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272a5e4),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 105827274; end: 105827283; -[SCAddFriendsTakeoverView presentNextCardWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105827274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10f2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272a5e4),PTR_s_presentWithViewModel__1126216c8);
  return;
}



/* Entry: 105827284; end: 105827307; -[SCAddFriendsTakeoverView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105827284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ea828;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11272a5e0));
  FUN_105827ef0(param_3,param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11272a5e4));
  return;
}



/* Entry: 105827308; end: 105827317; -[SCAddFriendsTakeoverView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105827308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272a5e4),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 105827318; end: 10582737f; -[SCAddFriendsTakeoverView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105827318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a5e8);
  *(undefined8 *)(param_1 + _DAT_11272a5e8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11272a5e4),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105827380; end: 10582738f; -[SCAddFriendsTakeoverView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105827380(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a5ec);
}



/* Entry: 105827390; end: 10582739f; -[SCAddFriendsTakeoverView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105827390(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a5e8);
}



/* Entry: 1058273a0; end: 1058273ff; -[SCAddFriendsTakeoverView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058273a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a5e8,0);
  _objc_storeStrong(param_1 + _DAT_11272a5ec,0);
  _objc_storeStrong(param_1 + _DAT_11272a5e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a5e4,0);
  return;
}



/* Entry: 105827400; end: 105827c9b;  */

void FUN_105827400(undefined8 param_1,undefined8 param_2,double param_3,undefined **param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  double dVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR_PTR_1126bee78;
  _objc_alloc();
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126b4858;
  puVar17 = PTR_PTR_1126b19f8;
  func_0x00010befcbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1bb00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar17);
  lVar1 = lRam00000001136c0ad0;
  puVar17 = PTR_PTR_1126b4860;
  _objc_retain(param_4);
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136c0ad0,&PTR___NSConcreteGlobalBlock_1108b6830);
  }
  uVar13 = ppuRam00000001136c0ac8;
  func_0x00010bf51e00();
  ppuVar5 = param_4;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  ppuVar6 = ppuVar5;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar8 = ppuVar6;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar8;
  _objc_retainAutorelease(ppuVar8);
  func_0x00010bdc3520();
  ppuVar6 = ppuVar8;
  func_0x00010c08fac0(ppuVar8);
  _objc_release(ppuVar8);
  func_0x0001064c9c58(ppuVar5,ppuVar6,0);
  func_0x00010bf529e0();
  uVar7 = uVar13;
  func_0x00010c0dfd40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  ppuVar8 = param_4;
  func_0x00010bf1bae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar8;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1aee0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar8);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126bd8e8;
  if (lRam00000001136c0ad8 != -1) {
    func_0x00010002a2fc(0x1136c0ad8,&PTR___NSConcreteGlobalBlock_1108b6850);
  }
  func_0x00010bfe9660();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_3 = param_3 * 0.7;
  _objc_release(puVar9);
  dVar18 = 15.0;
  func_0x00010b816218(0x402e000000000000);
  dVar18 = (double)(long)(dVar18 * (param_3 / 15.0)) / dVar18;
  puVar9 = puVar3;
  func_0x000107cf5f4c(param_3,param_3,dVar18 + dVar18,dVar18,0,dVar18,puVar3,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_retain(param_4);
  ppuVar8 = param_4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar8;
  func_0x00010c08fa60();
  ppuVar6 = param_4;
  if (ppuVar5 == (undefined **)0x0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar6;
  FUN_105827dd4(ppuVar6,puVar4,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(ppuVar6);
  _objc_release();
  FUN_105827f84();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar8;
  FUN_105827dd4(ppuVar8,puVar4,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(ppuVar8);
  ppuVar8 = param_4;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar8;
  func_0x00010befb8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  FUN_105827dd4(ppuVar10,puVar4,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(ppuVar10);
  _objc_release(ppuVar8);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 < 2) {
    puVar17 = (undefined *)0x0;
  }
  else {
    func_0x000105827fcc();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar17);
    _objc_release(ppuVar8);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    FUN_105827dd4(puVar4,puVar3,puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126b1918;
  _objc_retain(param_4);
  _objc_alloc(puVar4);
  puVar3 = puVar4;
  func_0x000105827f9c();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0x88;
  func_0x00010900fd90(0x88);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = param_4;
  func_0x000107d3d8a4(param_4,puVar12,param_7,0x248de666);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c053140(0,0x404e000000000000,0,0x404e000000000000,puVar4);
  _objc_release(ppuVar8);
  _objc_release(puVar12);
  _objc_release(uVar13);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1918;
  _objc_retain(param_4);
  _objc_alloc();
  puVar12 = puVar3;
  func_0x000105827fb4();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0x88;
  func_0x00010900fd90(0x88);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = param_4;
  func_0x000107d3dd44(param_4,puVar15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c053140(0,0x404e000000000000,0,0x404e000000000000);
  _objc_release(ppuVar8);
  _objc_release(puVar15);
  _objc_release(uVar13);
  _objc_release(puVar14);
  _objc_release(puVar12);
  func_0x00010bff5f80(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar17);
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar9);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  uVar13 = ppuRam00000001136c0ac8;
  ppuRam00000001136c0ac8 = &PTR__OBJC_CLASS___NSConstantArray_11117efa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 105827c9c; end: 105827cb3;  */

void FUN_105827c9c(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c0ac8;
  ppuRam00000001136c0ac8 = &PTR__OBJC_CLASS___NSConstantArray_11117efa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105827cb4; end: 105827d47;  */

void FUN_105827cb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e05938);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c0ae0;
  puRam00000001136c0ae0 = puVar2;
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc();
  func_0x00010c23d0a0(puRam00000001136c0ae0);
  func_0x00010c0469e0();
  puVar4 = puVar3;
  func_0x00010bfe91c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puRam00000001136c0ae0;
  puRam00000001136c0ae0 = puVar4;
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105827d48; end: 105827dd3;  */

void FUN_105827d48(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c23d0a0(uRam00000001136c0ae0);
  dVar2 = param_1 * 0.699999988079071;
  func_0x00010c23d0a0(uRam00000001136c0ae0);
  func_0x00010c23d0a0(uRam00000001136c0ae0);
  dVar1 = 0.5;
  func_0x00010c23d0a0(uRam00000001136c0ae0);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * 0.30000001192092896 * 0.5,(dVar1 * 0.30000001192092896) / 3.0,dVar2,
             param_2 * 0.699999988079071,uRam00000001136c0ae0,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 105827dd4; end: 105827eef;  */

undefined8 FUN_105827dd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return param_1;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d80();
  _CGRectGetHeight();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d80();
  _CGRectGetHeight();
  _objc_release(puVar4);
  return 0;
}



/* Entry: 105827ef0; end: 105827f83;  */

undefined8 FUN_105827ef0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d80();
  _CGRectGetHeight();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d80();
  _CGRectGetHeight();
  _objc_release(puVar1);
  return 0;
}



/* Entry: 105827f84; end: 105827fe3;  */

void FUN_105827f84(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e05978;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e05978,
                      &PTR____CFConstantStringClassReference_110e05958,0);
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



/* Entry: 105827fe4; end: 10582817b; -[SCAddFriendsTakeoverCardViewModel initWithAvatarContainerViewModel:displayLabelAttributedText:descriptionAttributedText:secondaryDescriptionAttributedText:cardOrderDescriptionAttributedText:addButtonViewModel:ignoreButtonViewModel:] */

undefined1 *
FUN_105827fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ea830;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10582817c; end: 10582819f; -[SCAddFriendsTakeoverCardViewModel copyWithZone:] */

undefined8 FUN_10582817c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1058281a0; end: 10582824f; -[SCAddFriendsTakeoverCardViewModel hash] */

undefined8 * FUN_1058281a0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105828348:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105828354;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_105828354;
                  }
                  goto LAB_105828348;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105828354:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105828250; end: 10582836f; -[SCAddFriendsTakeoverCardViewModel isEqual:] */

long FUN_105828250(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105828348:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105828354;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_105828354;
                  }
                  goto LAB_105828348;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105828354:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105828370; end: 105828377; -[SCAddFriendsTakeoverCardViewModel avatarContainerViewModel] */

undefined8 FUN_105828370(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105828378; end: 10582837f; -[SCAddFriendsTakeoverCardViewModel displayLabelAttributedText] */

undefined8 FUN_105828378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105828380; end: 105828387; -[SCAddFriendsTakeoverCardViewModel descriptionAttributedText] */

undefined8 FUN_105828380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105828388; end: 10582838f; -[SCAddFriendsTakeoverCardViewModel secondaryDescriptionAttributedText] */

undefined8 FUN_105828388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


