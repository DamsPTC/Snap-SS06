/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107af8804; end: 107af88fb; -[SCDiscoverFeedStoryNotificationOptInStatusHandler _triggerCallbackBasedOnDedupeFp:] */

void FUN_107af8804(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25bae0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107af88fc; end: 107af896b;  */

void FUN_107af88fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c080120(param_2);
  func_0x00010c0794a0(param_2);
  _objc_release(param_2);
  func_0x00010bdd8e20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af896c; end: 107af897f; -[SCDiscoverFeedStoryNotificationOptInStatusHandler _callUpdateCallback:isOptedInForNotifications:] */

void FUN_107af896c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000107af897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))(*(long *)(param_1 + 0x18),param_3,param_4);
  return;
}



/* Entry: 107af8980; end: 107af89af; -[SCDiscoverFeedStoryNotificationOptInStatusHandler .cxx_destruct] */

void FUN_107af8980(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107af89b0; end: 107af8aa7; -[SCDiscoverFeedStorySubscribeStatusHandler initWithStoryDedupeFp:discoverFeedDataFetcher:userId:snapchatterObservableRepository:] */

undefined1 *
FUN_107af89b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9cd8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107af8aa8; end: 107af8cbb; -[SCDiscoverFeedStorySubscribeStatusHandler fetchIsSubscribed] */

void FUN_107af8aa8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar4);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        _objc_initWeak(auStack_38,param_1);
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010c2445c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        if (lVar2 == 0) {
          uVar4 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befc780();
          _objc_release(uVar4);
          func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
          func_0x00010be63980(param_1);
        }
        else {
          _objc_copyWeak(auStack_40,auStack_38);
          lVar3 = lVar2;
          func_0x00010c25ff60(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0();
          _objc_release(lVar3);
          _objc_destroyWeak(auStack_40);
        }
        _objc_release(lVar2);
        _objc_destroyWeak(auStack_38);
        goto LAB_107af8c54;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc780();
    _objc_release(uVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be63980(param_1);
  }
LAB_107af8c54:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107af8cbc; end: 107af8d63;  */

void FUN_107af8cbc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      func_0x00010bfb8280(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107af8d64; end: 107af8d67; -[SCDiscoverFeedStorySubscribeStatusHandler didUpdateWithAnnouncerIdentifier:] */

void FUN_107af8d64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__nextIsSubscribed_112576800);
  return;
}



/* Entry: 107af8d68; end: 107af8e67; -[SCDiscoverFeedStorySubscribeStatusHandler _nextIsSubscribed] */

void FUN_107af8d68(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c25bae0(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 107af8e68; end: 107af8ef3;  */

void FUN_107af8e68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c080120(param_2);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107af8ef4; end: 107af8f47; -[SCDiscoverFeedStorySubscribeStatusHandler .cxx_destruct] */

void FUN_107af8ef4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107af8f48; end: 107af8fb3;  */

undefined8 FUN_107af8f48(long param_1)

{
  if (param_1 - 1U < 0x10) {
    return *(undefined8 *)(&UNK_10dee12e8 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107af8fb4; end: 107af901b;  */

void FUN_107af8fb4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eacdb8);
  return;
}



/* Entry: 107af901c; end: 107af90ef;  */

undefined8 FUN_107af901c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bd820(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107af90f0; end: 107af9113;  */

void FUN_107af90f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_4;
  return;
}



/* Entry: 107af9114; end: 107af925b;  */

void FUN_107af9114(undefined *param_1,long param_2,undefined1 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    puVar3 = param_1;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      lVar2 = param_2;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c067ec0();
      if ((int)lVar4 == 3) {
        bVar1 = true;
      }
      else {
        lVar4 = param_2;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c067ec0();
        bVar1 = (int)lVar5 == 0xf7;
        _objc_release(lVar4);
      }
      _objc_release(lVar2);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107af925c;
      puStack_58 = &UNK_1109fa880;
      uStack_48 = bVar1;
      _objc_retain(param_2);
      puVar6 = param_1;
      lStack_50 = param_2;
      uStack_47 = param_3;
      func_0x000100504554(param_1,&puStack_70);
      _objc_release(lStack_50);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107af925c; end: 107af9563;  */

void FUN_107af925c(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar2);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x28);
    _objc_release();
    _objc_release(lVar2);
    if ((bVar1 & 1) != 0) {
      lVar3 = 0;
      goto LAB_107af9320;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010c0ea200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108481f00(uVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x000108481fac(param_2,uVar4,*(undefined1 *)(param_1 + 0x29));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
LAB_107af9320:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107af9564; end: 107af96ab;  */

void FUN_107af9564(undefined *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    puVar5 = param_1;
    if ((lVar2 == 0xef) && (uVar3 = param_3, func_0x000108f4a1f0(), (int)uVar3 != 0)) {
      func_0x00010bf009e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010847f398();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      FUN_107af9114();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      func_0x00010bf009e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      FUN_107af9114();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107af96ac; end: 107af9733;  */

void FUN_107af96ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107af9734;
  puStack_30 = &UNK_11094c5d8;
  uStack_28 = param_1;
  _objc_retain(param_1);
  func_0x000100504554(param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107af9734; end: 107af987b;  */

void FUN_107af9734(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x22;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_107af9790:
    uVar5 = param_2;
    func_0x00010c0741a0();
    if ((uVar5 & 1) == 0) {
      unaff_x22 = param_2;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = unaff_x22;
      func_0x00010c236ac0();
      if ((uVar2 & 1) != 0) goto LAB_107af97bc;
      _objc_release(unaff_x22);
LAB_107af9804:
      bVar1 = false;
      goto LAB_107af9808;
    }
LAB_107af97bc:
    uVar2 = param_2;
    func_0x00010bf3cd00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c231940();
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      _objc_release(unaff_x22);
      if ((uVar4 & 1) != 0) goto LAB_107af9804;
    }
    else if ((int)uVar4 != 0) goto LAB_107af9804;
  }
  else {
    uVar5 = param_2;
    func_0x00010c259740();
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c259740();
    if (uVar5 != uVar2) goto LAB_107af9790;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c25b720();
    bVar1 = lVar3 == 5;
LAB_107af9808:
    uVar5 = param_2;
    func_0x00010c25b720();
    if ((uVar5 != 5) || (bVar1)) {
      uVar5 = param_2;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar2 = param_2;
        func_0x00010c259740();
        uVar4 = *(ulong *)(param_1 + 0x20);
        func_0x00010c259740();
        if (uVar2 == uVar4) {
          uVar5 = *(ulong *)(param_1 + 0x20);
        }
      }
      _objc_retain(uVar5);
      goto LAB_107af985c;
    }
  }
  uVar5 = 0;
LAB_107af985c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107af987c; end: 107af9c1b;  */

void FUN_107af987c(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong in_x5;
  undefined8 in_x6;
  ulong in_x7;
  undefined1 *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar12 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111818b0;
  if (param_2 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111818c8;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar9 = auStack_d8;
  ppuVar3 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    lVar14 = *plStack_110;
    do {
      ppuVar15 = (undefined **)0x0;
      do {
        if (*plStack_110 != lVar14) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar4 = *(undefined8 *)(lStack_118 + (long)ppuVar15 * 8);
        func_0x00010c067ec0(uVar4);
        uVar5 = param_1;
        func_0x000107af94a0(param_1,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2);
        _objc_release(uVar5);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar3 != ppuVar15);
      puVar9 = auStack_d8;
      ppuVar3 = ppuVar1;
      puVar12 = &uStack_120;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  puVar6 = (undefined1 *)0x0;
  puVar11 = puVar2;
  FUN_107af96ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    _objc_retain(in_x6);
    puVar2 = puVar11;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c067fc0();
    _objc_release(puVar2);
    if (puVar11 == (undefined *)0x0) {
      puVar6 = (undefined1 *)puVar12;
      func_0x000107af94a0(puVar12,3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar8 = (undefined1 *)puVar12;
      FUN_107af9564(puVar12,puVar11,in_x6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar8;
      if (((puVar9 != (undefined1 *)0x54) && ((in_x5 & 1) == 0)) && ((in_x7 & 1) == 0)) {
        _objc_retain(puVar8);
        _objc_retain(puVar12);
        _objc_retain(puVar8);
        if ((int)puVar7 == 2) {
          puVar9 = (undefined1 *)puVar12;
          func_0x00010bfa43a0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar9;
          func_0x00010bfecde0();
          _objc_release(puVar2);
          if ((puVar13 == (undefined1 *)0x7fffffffffffffff) ||
             (puVar10 = puVar9, func_0x00010bf529e0(), puVar10 <= puVar13 + 1)) {
            _objc_release(puVar9);
            puVar13 = (undefined1 *)0x0;
          }
          else {
            puVar13 = puVar9;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            if ((puVar13 != (undefined1 *)0x0) &&
               (puVar9 = puVar13, func_0x00010c067ec0(), (int)puVar9 != 2)) {
              puVar9 = puVar13;
              func_0x00010c067fc0(puVar13);
              puVar10 = (undefined1 *)puVar12;
              func_0x000107af94a0(puVar12,puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf09f80(puVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              _objc_release(puVar10);
            }
          }
          _objc_release(puVar13);
        }
        _objc_release(puVar12);
        _objc_release(puVar8);
        _objc_release(puVar8);
      }
    }
    _objc_release(in_x6);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107af9c1c; end: 107af9ebf;  */

undefined8 FUN_107af9c1c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c0720c0();
  if (((uVar3 & 1) == 0) && (uVar3 = uVar1, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
    uVar3 = uVar1;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar1;
      func_0x00010c0720c0();
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar1;
        func_0x00010c0720c0();
        if (((uVar3 & 1) == 0) && (uVar3 = uVar1, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
          uVar3 = uVar1;
          func_0x00010c0720c0();
          if ((uVar3 & 1) == 0) {
            uVar3 = uVar1;
            func_0x00010c0720c0();
            if ((uVar3 & 1) == 0) {
              uVar3 = uVar1;
              func_0x00010c0720c0();
              if (((uVar3 & 1) == 0) && (uVar3 = uVar1, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
                uVar3 = uVar1;
                func_0x00010c0720c0();
                if ((uVar3 & 1) == 0) {
                  if ((int)uVar2 == 0x283d) {
                    uVar4 = 0x3c;
                  }
                  else {
                    uVar2 = uVar1;
                    func_0x000108f54104();
                    if ((uVar2 & 1) == 0) {
                      uVar2 = uVar1;
                      func_0x00010c0720c0();
                      if ((uVar2 & 1) == 0) {
                        uVar4 = 0x3b;
                        if (param_2 != 0x54) {
                          uVar4 = 5;
                        }
                      }
                      else {
                        uVar4 = 0x5b;
                      }
                    }
                    else {
                      uVar4 = 0x30;
                    }
                  }
                }
                else {
                  uVar4 = 0x46;
                }
              }
              else {
                uVar4 = 0x2d;
              }
            }
            else {
              uVar4 = 5;
            }
          }
          else {
            uVar4 = 0x2b;
          }
        }
        else {
          uVar4 = 0x62;
        }
      }
      else {
        uVar4 = 0x49;
      }
    }
    else {
      uVar4 = 0x45;
    }
  }
  else {
    uVar4 = 0x2c;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 107af9ec0; end: 107af9ef7;  */

bool FUN_107af9ec0(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c259740(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c259740(lVar1);
  return param_2 == lVar1;
}



/* Entry: 107af9ef8; end: 107af9f6b; -[SCDiscoverRemoteVideoPreloadStrategy initWithConnectivityMonitoring:] */

undefined1 * FUN_107af9ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9ce0;
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



/* Entry: 107af9f6c; end: 107af9fe7; -[SCDiscoverRemoteVideoPreloadStrategy shouldPreload] */

undefined * FUN_107af9f6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf48f60();
  if (lVar2 == 2) {
    puVar4 = (undefined *)0x1;
  }
  else {
    puVar3 = PTR_PTR_1126c9cb8;
    func_0x00010c22b6a0(PTR_PTR_1126c9cb8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c15f520();
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return puVar4;
}



/* Entry: 107af9fe8; end: 107af9ff3; -[SCDiscoverRemoteVideoPreloadStrategy .cxx_destruct] */

void FUN_107af9fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107af9ff4; end: 107afa03f; +[SCOperaCloseActionLayer layerWithPage:] */

void FUN_107af9ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d53d8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107afa040; end: 107afa047; -[SCOperaCloseActionLayer type] */

undefined8 FUN_107afa040(void)

{
  return 0x19;
}



/* Entry: 107afa048; end: 107afa053; -[SCOperaCloseActionLayer layerViewControllerClass] */

void FUN_107afa048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d66e0);
  return;
}



/* Entry: 107afa054; end: 107afa10b; -[SCOperaCloseActionLayer initWithPage:] */

undefined1 * FUN_107afa054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f9ce8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c93d0;
    func_0x00010c0ea900(PTR_PTR_1126c93d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)uVar4;
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107afa10c; end: 107afa113; -[SCOperaCloseActionLayer isCloseButtonDisplayed] */

undefined1 FUN_107afa10c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107afa114; end: 107afa163; +[SCOperaCloseActionLayerView layerViewWithFrame:] */

void FUN_107afa114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc(PTR_PTR_1126d66e8);
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107afa164; end: 107afa45b; -[SCOperaCloseActionLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107afa164(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  long lVar12;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f9cf0;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar5 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11276a464;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar2;
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar12));
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    puVar3 = puVar1;
    func_0x00010be36b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar11);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar11);
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010befbb60(puVar1);
    puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar5 = *(long *)((long)puVar1 + lVar12);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = lVar5;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = lVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar12);
    lStack_a8 = lVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar11;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = uVar9;
    func_0x00010bf493c0(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = unaff_x20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b0);
    _objc_release(puVar2);
    _objc_release(unaff_x20);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(lStack_a8);
    lVar5 = lStack_a0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  plVar10 = &lStack_e0;
  pcStack_b8 = FUN_107afa45c;
  puStack_d8 = PTR_PTR_1126f9cf0;
  lStack_e0 = lVar5;
  uStack_d0 = unaff_x20;
  puStack_c8 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_e0,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = plVar10;
  if (plVar10 != *(undefined8 **)(lVar5 + _DAT_11276a464)) {
    puVar1 = (undefined8 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(plVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 107afa45c; end: 107afa4cf; -[SCOperaCloseActionLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afa45c(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar2 = &lStack_30;
  puStack_28 = PTR_PTR_1126f9cf0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined1 *)plVar2;
  if (plVar2 != (long *)*(undefined1 **)(param_1 + _DAT_11276a464)) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107afa4d0; end: 107afa507; -[SCOperaCloseActionLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afa4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c06ea20(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a464),PTR_s_setHidden__1126479f8,(uint)param_3 ^ 1)
  ;
  return;
}



/* Entry: 107afa508; end: 107afa53b; -[SCOperaCloseActionLayerView didTapCloseButton:] */

void FUN_107afa508(long param_1)

{
  func_0x00010c0e2ee0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107afa53c; end: 107afa5b7; -[SCOperaCloseActionLayerView _iconXSignFillImage] */

void FUN_107afa53c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4010000000000000,0x4010000000000000,
                      0x4010000000000000,0x4010000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107afa5b8; end: 107afa5c7; -[SCOperaCloseActionLayerView onCloseButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107afa5b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a468);
}



/* Entry: 107afa5c8; end: 107afa5d3; -[SCOperaCloseActionLayerView setOnCloseButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afa5c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107afa5d4; end: 107afa613; -[SCOperaCloseActionLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afa5d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a468,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a464,0);
  return;
}



/* Entry: 107afa614; end: 107afa713; -[SCOperaCloseActionLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afa614(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126d66e8;
  func_0x00010c08c6a0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11276a46c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1d1ba0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c222380(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107afa714; end: 107afa763;  */

void FUN_107afa714(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107afa764; end: 107afa837; -[SCOperaCloseActionLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afa764(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == param_4) {
    _objc_release(param_4);
    param_1 = param_3;
  }
  else {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,param_4);
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107afa81c;
    }
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11276a46c);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2298c0(uVar2,param_2,param_1);
  }
  _objc_release(param_1);
LAB_107afa81c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107afa838; end: 107afa84b; -[SCOperaCloseActionLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afa838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a46c,0);
  return;
}



/* Entry: 107afa84c; end: 107afa897; +[SCDiscoverOperaDebugLayer layerWithPage:] */

void FUN_107afa84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5290;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107afa898; end: 107afaa37; -[SCDiscoverOperaDebugLayer initWithPage:] */

undefined1 * FUN_107afa898(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f9cf8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)((long)puVar2 + 8);
    *(ulong *)((long)puVar2 + 8) = uVar1;
    _objc_release(uVar6);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d66f0;
    _objc_opt_class(PTR_PTR_1126d66f0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x18);
    *(ulong *)((long)puVar2 + 0x18) = uVar1;
    _objc_retain(uVar1);
    _objc_release(uVar6);
    uVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar3 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x10);
    *(ulong *)((long)puVar2 + 0x10) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107afaa38; end: 107afaa3f; -[SCDiscoverOperaDebugLayer type] */

undefined8 FUN_107afaa38(void)

{
  return 0x19;
}



/* Entry: 107afaa40; end: 107afaa4b; -[SCDiscoverOperaDebugLayer layerViewControllerClass] */

void FUN_107afaa40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d66f8);
  return;
}



/* Entry: 107afaa4c; end: 107afab77; -[SCDiscoverOperaDebugLayer isEqual:] */

undefined8 FUN_107afaa4c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126d5290;
  _objc_opt_class();
  if (puVar1 == puVar2) {
    if (param_1 == param_3) {
      uVar4 = 1;
    }
    else {
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar1 = param_3;
      func_0x00010c101d20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar4,param_2,puVar1);
      if ((int)uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        puVar2 = param_3;
        func_0x00010bf81fe0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071ae0(uVar4,param_2,puVar2);
        if ((int)uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          puVar3 = param_3;
          func_0x00010c259740(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c071f40(uVar4,param_2,puVar3);
          _objc_release(puVar3);
        }
        _objc_release(puVar2);
      }
      _objc_release(puVar1);
      _objc_release(param_3);
    }
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107afab78; end: 107afab7f; -[SCDiscoverOperaDebugLayer pluginType] */

undefined8 FUN_107afab78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107afab80; end: 107afab87; -[SCDiscoverOperaDebugLayer storyDedupeFp] */

undefined8 FUN_107afab80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107afab88; end: 107afab8f; -[SCDiscoverOperaDebugLayer discoverFeedStoryDebugInfo] */

undefined8 FUN_107afab88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107afab90; end: 107afabcb; -[SCDiscoverOperaDebugLayer .cxx_destruct] */

void FUN_107afab90(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107afabcc; end: 107afad83; -[SCDiscoverOperaDebugLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107afabcc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f9d00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276a47c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4000000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4020000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276a480;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4020000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2bee40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107afad84; end: 107afaedf; -[SCDiscoverOperaDebugLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afad84(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9d00;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11276a47c;
  uVar1 = *(ulong *)(param_2 + lVar2);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar3 = param_1;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
    _CGRectGetWidth();
    dVar3 = param_1 - dVar3;
    param_1 = dVar3 + -5.0;
    func_0x00010bf20c00(param_2);
    _CGRectGetMinY();
    dVar5 = dVar3 + 5.0;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
    _CGRectGetWidth();
    dVar4 = dVar3;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
    _CGRectGetHeight();
    func_0x00010b816528(param_1,dVar5,dVar3,dVar4);
    func_0x00010b8166f8(param_2);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar2));
  }
  lVar2 = (long)_DAT_11276a480;
  uVar1 = *(ulong *)(param_2 + lVar2);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetMaxY();
    dVar4 = param_1 + -120.0;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
    _CGRectGetHeight();
    dVar4 = dVar4 - param_1;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
    _CGRectGetWidth();
    dVar3 = param_1;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
    _CGRectGetHeight();
    func_0x00010b816528(0x4014000000000000,dVar4,param_1,dVar3);
    func_0x00010b8166f8(param_2);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar2));
  }
  return;
}



/* Entry: 107afaee0; end: 107afaf1f; -[SCDiscoverOperaDebugLayerView setupViewForLayer:] */

/* WARNING: Possible PIC construction at 0x000107afaf04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107afaf08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afaee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a47c),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107afaf20; end: 107afaf5f; -[SCDiscoverOperaDebugLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afaf20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a480,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a47c,0);
  return;
}



/* Entry: 107afaf60; end: 107afaf93; -[SCDiscoverOperaDebugLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107afaf60(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9d08;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithConfiguration_layerViewC_1125de030);
  return;
}



/* Entry: 107afaf94; end: 107afafef; -[SCDiscoverOperaDebugLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afaf94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6700;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276a484;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107afaff0; end: 107afb05f; -[SCDiscoverOperaDebugLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afaff0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276a484);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2298c0(uVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107afb060; end: 107afb073; -[SCDiscoverOperaDebugLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afb060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a484,0);
  return;
}



/* Entry: 107afb074; end: 107afb12f; -[SCPublisherIconImageDownloader initWithRequestManager:contentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107afb074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f9d10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276a488;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276a48c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107afb130; end: 107afb32f; -[SCPublisherIconImageDownloader loadNetworkImage:completion:failure:callbackQueue:] */

void FUN_107afb130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107afb248;
  puStack_50 = &UNK_110864e60;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107afb330;
  puStack_78 = &UNK_1109fa8d0;
  uStack_70 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c09b780(param_1,param_2,param_3,&puStack_68,&puStack_90,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d6708;
  _objc_alloc(PTR_PTR_1126d6708);
  func_0x00010c01fda0();
  _objc_release(param_1);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107afb330; end: 107afb3c7;  */

void FUN_107afb330(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  if (*(long *)(param_1 + 0x20) != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107afb3c8; end: 107afb43b; -[SCPublisherIconImageDownloader isItemValid:] */

ulong FUN_107afb3c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x000109006e4c(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107afb43c; end: 107afb447; -[SCPublisherIconImageDownloader resultFromData:withItem:] */

void FUN_107afb43c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sc_imageWithData__112630e30);
  return;
}



/* Entry: 107afb448; end: 107afb4c3; -[SCPublisherIconImageDownloader cacheKeyForItem:] */

void FUN_107afb448(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x000109006ab0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107afb4c4; end: 107afb537; -[SCPublisherIconImageDownloader requestContexts:] */

void FUN_107afb4c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010900324c(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107afb538; end: 107afb5db; -[SCPublisherIconImageDownloader requestForItem:] */

void FUN_107afb538(int param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c075dc0();
  puVar2 = PTR_PTR_1126b4860;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = uVar1;
    func_0x000109002d94(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107afb5dc; end: 107afb60b; -[SCPublisherIconImageDownloader requestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afb5dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a488);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107afb60c; end: 107afb61b; -[SCPublisherIconImageDownloader contentDelivery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afb60c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a48c),PTR_s_target_112678178);
  return;
}



/* Entry: 107afb61c; end: 107afb627; -[SCPublisherIconImageDownloader cache] */

void FUN_107afb61c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ced20,PTR_s_publisherIconsImageCache_112624690)
  ;
  return;
}



/* Entry: 107afb628; end: 107afb633; -[SCPublisherIconImageDownloader cacheExpirationTimeInSecs] */

undefined8 FUN_107afb628(void)

{
  return 0x3f480;
}



/* Entry: 107afb634; end: 107afb6a7; -[SCPublisherIconImageDownloader shouldCache:] */

ulong FUN_107afb634(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x000109006d48(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107afb6a8; end: 107afb717; -[SCPublisherIconImageDownloader downloadPerformer] */

void FUN_107afb6a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f443c64);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107afb718; end: 107afb71f; -[SCPublisherIconImageDownloader mediaContextTypeForItem:] */

undefined8 FUN_107afb718(void)

{
  return 7;
}



/* Entry: 107afb720; end: 107afb75f; -[SCPublisherIconImageDownloader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afb720(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a48c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a488,0);
  return;
}



/* Entry: 107afb760; end: 107afb7bb; -[SCUserSession publisherIconImageDownloader] */

void FUN_107afb760(undefined8 param_1,undefined8 param_2)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107afb7bc; end: 107afb857;  */

void FUN_107afb7bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d6710;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c135d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126d4ee0;
  func_0x00010bf4c240(PTR_PTR_1126d4ee0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f200(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107afb858; end: 107afb8df;  */

void FUN_107afb858(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107afb8e0;
  puStack_30 = &UNK_1108f1040;
  uStack_28 = param_1;
  _objc_retain(param_1);
  func_0x0001006372a4(param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107afb8e0; end: 107afb9cf;  */

long FUN_107afb8e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_retain();
    _objc_retain(lVar4);
    if (lVar3 == lVar4) {
      lVar5 = 1;
    }
    else if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar3;
      func_0x00010c071ae0(lVar3);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar5;
}



/* Entry: 107afb9d0; end: 107afba63;  */

bool FUN_107afb9d0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c11af80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11b1e0();
    bVar1 = lVar4 == *(long *)(param_1 + 0x20);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 107afba64; end: 107afbc9b;  */

void FUN_107afba64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107afbc9c;
  puStack_a8 = &UNK_1109fa900;
  uStack_80 = param_9;
  uStack_a0 = param_2;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  ppuVar1 = &puStack_c0;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126b4028;
  func_0x00010bfe9e20(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar1);
  func_0x00010c0f9280(param_7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_9);
  return;
}



/* Entry: 107afbc9c; end: 107afbdef;  */

void FUN_107afbc9c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf009c0();
    _objc_retainAutoreleasedReturnValue();
    FUN_107afb858(lVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    lVar5 = lVar1;
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e600();
      _objc_release(uVar3);
      lVar5 = lVar1;
      func_0x00010bfb1920(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x000107bfa524(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2864e0(uVar3);
      _objc_release(lVar4);
      _objc_release(uVar3);
      _objc_release(lVar5);
    }
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,0);
    }
    _objc_release(lVar1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107afbdf0; end: 107afbe0b;  */

void FUN_107afbdf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107afbdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107afbe0c; end: 107afbeef;  */

void FUN_107afbe0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c25bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
  if (lVar1 != 0) {
    FUN_107affcd4(lVar1,param_1,param_7,param_4,param_6);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107afbef0; end: 107afbf5b; -[SCDiscoverFeedImpalaProfilePresentHandler initWithImpalaPublicProfilePresentationHandler:] */

undefined1 * FUN_107afbef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9d18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107afbf5c; end: 107afbfc7; -[SCDiscoverFeedImpalaProfilePresentHandler impalaProfilePresenterForPresentingViewController:] */

void FUN_107afbf5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfea100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107afbfc8; end: 107afc07f; -[SCDiscoverFeedImpalaProfilePresentHandler impalaPresentPublicProfileWithBusinessProfileId:isPublisherProfile:loggingInfo:presentingViewController:isNavigationStyleVertical:dismissBlock:] */

void FUN_107afbfc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe9fe0();
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107afc080; end: 107afc177; -[SCDiscoverFeedImpalaProfilePresentHandler impalaPresentPublicProfileWithOperaWrapper:businessProfileId:isPublisherProfile:loggingInfo:presentingViewController:isNavigationStyleVertical:dismissBlock:eventAnnouncer:page:] */

void FUN_107afc080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfea020();
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107afc178; end: 107afc17f; -[SCDiscoverFeedImpalaProfilePresentHandler .cxx_destruct] */

void FUN_107afc178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107afc180; end: 107afc263; -[SCDiscoverFeedImpalaProfilePresentHandlerServiceProvider provide] */

void FUN_107afc180(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d6718;
  _objc_alloc(PTR_PTR_1126d6718);
  func_0x00010c00cea0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107afc264; end: 107afc303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afc264(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cc5b8;
  _objc_alloc(PTR_PTR_1126cc5b8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11276a498;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010bfea160(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d280(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107afc304; end: 107afc33b; -[SCDiscoverFeedImpalaProfilePresentHandlerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107afc304(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276a494);
  return;
}



/* Entry: 107afc33c; end: 107afc3af; -[SCDiscoverFeedImpalaProfilePresentHandlerServices initWithDiscoverFeedImpalaProfilePresentHandler:] */

undefined1 * FUN_107afc33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9d20;
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



/* Entry: 107afc3b0; end: 107afc3b7; -[SCDiscoverFeedImpalaProfilePresentHandlerServices lazyDiscoverFeedImpalaProfilePresentHandler] */

undefined8 FUN_107afc3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107afc3b8; end: 107afc3c3; -[SCDiscoverFeedImpalaProfilePresentHandlerServices .cxx_destruct] */

void FUN_107afc3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107afc3c4; end: 107afc60f;  */

void FUN_107afc3c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c25b720();
  lVar2 = param_1;
  if (lVar1 == 0xb) {
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010afefbe8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 2) {
      puVar4 = (undefined *)0x0;
      goto LAB_107afc4b0;
    }
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b4860;
  lVar2 = lVar1;
  func_0x00010c11af80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfad760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60(puVar4,param_2,lVar3,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_107afc4b0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107afc610; end: 107afc7d7;  */

void FUN_107afc610(undefined *param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x000109007198();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (puVar1 == (undefined *)0x0) {
    if (param_1 == (undefined *)0x0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
      goto LAB_107afc790;
    }
    _objc_retain(param_3);
    _objc_retain(param_3);
    uVar4 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09bc40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_3);
    puVar1 = param_3;
  }
  else {
    if (param_4 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12fbe0(0,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar1 = puVar3;
    }
    (**(code **)(param_3 + 0x10))(param_3,puVar1);
  }
  _objc_release(puVar1);
LAB_107afc790:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107afc7d8; end: 107afc88b;  */

void FUN_107afc7d8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = param_3;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12fbe0(0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar1);
    puVar1 = puVar2;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


