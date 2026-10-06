/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064be574; end: 1064be6d7; -[SCComposerAddFriendButtonContainer _updateForSnapchatter:] */

/* WARNING: Possible PIC construction at 0x0001064be69c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001064be6a0) */
/* WARNING: Removing unreachable block (ram,0x00010bedbbe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be574(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf51e00();
  lVar4 = (long)_DAT_112748e58;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar3);
  if (*(long *)(param_1 + lVar4) == 0) {
    lVar4 = *(long *)(param_1 + _DAT_112748e5c);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112748e48);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010beb3f60();
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112748e5c;
    lVar4 = *(long *)(param_1 + lVar5);
    if ((int)lVar1 == 0) {
      if (lVar4 == 0) {
        puVar2 = PTR_PTR_1126cb038;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar3 = *(undefined8 *)(param_1 + lVar5);
        *(undefined **)(param_1 + lVar5) = puVar2;
        _objc_release(uVar3);
        lVar4 = param_1 + _DAT_112748e4c;
        _objc_loadWeakRetained(lVar4);
        func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar5));
        _objc_release(lVar4);
        func_0x00010befbb60(param_1);
        puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        func_0x00010c050900();
        func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5));
        _objc_release(puVar2);
        lVar4 = *(long *)(param_1 + lVar5);
      }
      uVar3 = 0;
      goto code_r0x00010c1a7f60;
    }
  }
  uVar3 = 1;
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 1064be6d8; end: 1064be80f; -[SCComposerAddFriendButtonContainer _updateModelForSnapchatterWithIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c292b20();
  _objc_release(lVar1);
  uVar4 = 1;
  if (lVar2 == 2) {
    uVar4 = 2;
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112748e58);
  uVar3 = 0x16;
  func_0x00010bc9107c(0x16);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079eb02c(0,uVar5,uVar4,0,&PTR____CFConstantStringClassReference_110ea9258,param_3,0,
                      0x10,uVar3,0x2a,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar4 = uVar5;
  func_0x00010c244760(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010beed3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112748e5c));
  func_0x00010c069fe0(param_1);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1064be810; end: 1064be867; -[SCComposerAddFriendButtonContainer layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be810(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1720;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112748e5c));
  return;
}



/* Entry: 1064be868; end: 1064be87b; -[SCComposerAddFriendButtonContainer sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be868(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x403e000000000000,*(undefined8 *)(param_2 + _DAT_112748e5c),
             PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 1064be87c; end: 1064bea23; -[SCComposerAddFriendButtonContainer _onActionButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064be87c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112748e58);
  if (lVar1 != 0) {
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126ae5c0;
    if (lVar1 == 0) {
      FUN_1064bf414(*(undefined8 *)(param_1 + _DAT_112748e54));
      puVar2 = PTR_PTR_1126c55c0;
      func_0x00010c1300e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befca80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + _DAT_112748e40);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bef8a80(uVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 1064bea24; end: 1064bead3;  */

void FUN_1064bea24(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1064bead4;
  puStack_48 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1064bead4; end: 1064beb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bead4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
    func_0x00010c0f95a0(*(undefined8 *)(lVar1 + _DAT_112748e34),param_2,
                        PTR____NSArray0__struct_11034ab48);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064beb30; end: 1064bebff; -[SCComposerAddFriendButtonContainer didStartSnapchattersUpdateDataRequest:] */

void FUN_1064beb30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1064bec00;
  puStack_40 = &UNK_110841fb0;
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



/* Entry: 1064bec00; end: 1064bec97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bec00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0aac0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112748e58);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      func_0x00010bedbbe0(lVar1,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064bec98; end: 1064bed8b; -[SCComposerAddFriendButtonContainer didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1064bec98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1064bed8c;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1064bed8c; end: 1064bee93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bed8c(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0aac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112748e58);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        lVar6 = *(long *)(param_1 + 0x20);
        func_0x00010bf0a620();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          lVar6 = (long)_DAT_112748e60;
          cVar1 = *(char *)(lVar2 + lVar6);
          _objc_release();
          if (cVar1 == '\x01') {
            if (*(long *)(lVar2 + _DAT_112748e38) != 0) {
              func_0x00010c0f95a0(*(long *)(lVar2 + _DAT_112748e38),param_2,
                                  PTR____NSArray0__struct_11034ab48);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
            *(undefined1 *)(lVar2 + lVar6) = 0;
          }
        }
      }
      func_0x00010c21e7c0(lVar2,param_2,*(undefined8 *)(lVar2 + _DAT_112748e54));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1064bee94; end: 1064bef1f; -[SCComposerAddFriendButtonContainer _shouldHideButtonForSnapchatter:currentUserId:] */

ulong FUN_1064bee94(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010c06d560(), (uVar1 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1064bef20; end: 1064bef3f; -[SCComposerAddFriendButtonContainer actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bef20(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112748e4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064bef40; end: 1064bef53; -[SCComposerAddFriendButtonContainer setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bef40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112748e4c,param_3);
  return;
}



/* Entry: 1064bef54; end: 1064bef63; -[SCComposerAddFriendButtonContainer userInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064bef54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748e54);
}



/* Entry: 1064bef64; end: 1064bf02f; -[SCComposerAddFriendButtonContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064bef64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748e54,0);
  _objc_destroyWeak(param_1 + _DAT_112748e4c);
  _objc_storeStrong(param_1 + _DAT_112748e50,0);
  _objc_storeStrong(param_1 + _DAT_112748e38,0);
  _objc_storeStrong(param_1 + _DAT_112748e34,0);
  _objc_storeStrong(param_1 + _DAT_112748e48,0);
  _objc_storeStrong(param_1 + _DAT_112748e44,0);
  _objc_storeStrong(param_1 + _DAT_112748e40,0);
  _objc_storeStrong(param_1 + _DAT_112748e3c,0);
  _objc_storeStrong(param_1 + _DAT_112748e5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748e58,0);
  return;
}



/* Entry: 1064bf030; end: 1064bf223;  */

void FUN_1064bf030(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126cb040;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0e0120();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  else {
    puVar3 = puVar1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) {
      uVar5 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c2923e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1064bf46c;
      puStack_58 = &UNK_1108553d0;
      puStack_48 = param_3;
      _objc_retain(puVar1);
      puStack_50 = puVar1;
      _objc_retain(param_3);
      func_0x00010c2448c0(uVar5);
      _objc_release(puVar2);
      _objc_release(uVar5);
      _objc_release(puStack_50);
      puVar2 = puStack_48;
      goto LAB_1064bf1dc;
    }
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1064bf454;
  puStack_58 = &UNK_110849530;
  puStack_50 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_70);
  puVar2 = puStack_50;
LAB_1064bf1dc:
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064bf224; end: 1064bf413;  */

undefined8 FUN_1064bf224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cb040;
  func_0x00010c0e0120(PTR_PTR_1126cb040,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bef8980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010bef8980();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = puVar1;
      func_0x00010bef8980();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = puVar1;
        func_0x00010bef8980();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          puVar2 = puVar1;
          func_0x00010bef8980();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if (((ulong)puVar3 & 1) == 0) {
            puVar2 = puVar1;
            func_0x00010bef8980();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if (((ulong)puVar3 & 1) == 0) {
              puVar2 = puVar1;
              func_0x00010bef8980();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar2;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if (((ulong)puVar3 & 1) == 0) {
                puVar2 = puVar1;
                func_0x00010bef8980();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                uVar4 = 0;
                if (puVar2 != (undefined *)0x0) {
                  uVar4 = 7;
                }
              }
              else {
                uVar4 = 6;
              }
            }
            else {
              uVar4 = 5;
            }
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  _objc_release(puVar1);
  return uVar4;
}



/* Entry: 1064bf414; end: 1064bf453;  */

undefined8 FUN_1064bf414(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_1064bf224();
  uVar2 = *(undefined8 *)(&UNK_10dddc658 + lVar1 * 8);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1064bf454; end: 1064bf46b;  */

void FUN_1064bf454(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064bf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1064bf46c; end: 1064bf69b;  */

void FUN_1064bf46c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar2 = PTR_PTR_1126b14b8;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1acc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1c0a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b15c8;
    _objc_alloc(PTR_PTR_1126b15c8);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf85d80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c07a6a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c0e0(puVar5);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,puVar5);
    }
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064bf69c; end: 1064bfc63;  */

void FUN_1064bf69c(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  ppuVar1 = param_1;
  func_0x000100bf119c();
  if ((((ulong)ppuVar1 & 1) != 0) ||
     (ppuVar1 = param_1, func_0x00010c06d560(), ((ulong)ppuVar1 & 1) != 0)) {
    puVar12 = (undefined *)0x0;
    goto LAB_1064bf920;
  }
  func_0x00010901d398(param_1);
  puVar12 = PTR_PTR_1126b1918;
  _objc_alloc();
  _objc_retain(param_1);
  ppuVar1 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010901c6c4();
    if ((int)ppuVar1 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e04f78;
      goto LAB_1064bf794;
    }
    FUN_1064bfc64();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e51198;
LAB_1064bf794:
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar13 = 0x88;
  func_0x00010900fd90(0x88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb8280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_retain(param_2);
  _objc_retain(param_1);
  ppuVar4 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar5 = param_1;
  if (ppuVar4 == (undefined **)0x0) {
    func_0x000107d3d8a4(param_1,param_2,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d3dad8(param_1,param_2,param_7,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
  func_0x00010c053140(0,0x402f000000000000,0,0x4031000000000000,puVar12);
  _objc_release(ppuVar5);
  _objc_release(uVar13);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
LAB_1064bf920:
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cb050;
  _objc_retain(param_1);
  _objc_retain(puVar12);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126cb010;
  func_0x00010c244820(PTR_PTR_1126cb010);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c25d0;
  _objc_alloc();
  func_0x00010c0462c0();
  puVar7 = PTR_PTR_1126cb018;
  _objc_alloc(PTR_PTR_1126cb018);
  puVar8 = PTR_PTR_1126b19f8;
  func_0x00010c0ce180();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0494c0(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x000108febbc0(puVar7,0);
  _objc_retainAutoreleasedReturnValue();
  dVar15 = dRam00000001132442c8 / 15.0;
  dVar14 = dRam00000001132442c8;
  func_0x00010b816218(dRam00000001132442c8);
  dVar14 = (double)(long)(dVar15 * dVar14) / dVar14;
  puVar9 = puVar8;
  func_0x000107cf5f4c(dRam00000001132442c8,uRam00000001132442d0,dVar14 + dVar14,dVar14,0,dVar14,
                      puVar8,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126cb048;
  _objc_alloc(PTR_PTR_1126cb048);
  func_0x00010bff5f60(uRam00000001132442e8,uRam00000001132442f0,uRam00000001132442f8,
                      uRam0000000113244300);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  ppuVar1 = param_1;
  func_0x000107cf6658(param_1,3,param_8,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  ppuVar4 = param_1;
  func_0x000107cf6574(0,0x4028000000000000,0,0x4028000000000000,param_1,puVar12,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar12);
  func_0x00010c052100(puVar2);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar10);
  ppuVar1 = (undefined **)PTR_PTR_1126b1910;
  _objc_alloc(PTR_PTR_1126b1910);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816670();
  func_0x00010c0495a0(0x7fefffffffffffff,0x4052800000000000,0x4020000000000000,uVar13,ppuVar1);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e511f8;
    func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e511f8,
                        &PTR____CFConstantStringClassReference_110e51218,0);
    func_0x000107c61180();
    if (lRam00000001137fe070 != -1) {
      func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
    }
    ppuVar1 = ppuVar4;
    if ((bRam00000001137fe068 & 1) != 0) {
      func_0x000107c312ec(ppuVar4);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1064bfc64; end: 1064bfc7b;  */

void FUN_1064bfc64(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e511f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e511f8,
                      &PTR____CFConstantStringClassReference_110e51218,0);
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



/* Entry: 1064bfc7c; end: 1064bfd23; -[CTPComposerItemInstanceView initWithCTPItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1064bfc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1728;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112748e64;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748e68);
    *(undefined **)((long)puVar1 + (long)_DAT_112748e68) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064bfd24; end: 1064bfe5f; +[CTPComposerItemInstanceView sizeForItemInstance:imageSize:bitmojiAttribution:ctpItemViewService:lifecycle:sizeType:] */

void FUN_1064bfd24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1064bfe60;
  puStack_90 = &UNK_110925c58;
  uStack_88 = param_6;
  uStack_80 = param_3;
  puStack_78 = puVar1;
  uStack_70 = param_7;
  uStack_68 = param_4;
  uStack_60 = param_8;
  uStack_58 = param_5;
  _objc_retain(param_7);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x0001000d76cc("APPSTORE",&puStack_a8);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064bfe60; end: 1064bff87;  */

void FUN_1064bfe60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126bc960;
  func_0x00010c290480(PTR_PTR_1126bc960,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0e0460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1064bff88;
  puStack_58 = &UNK_1108974f8;
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar4 = uVar2;
  uStack_50 = uVar5;
  func_0x00010c25ff60(uVar2,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1064bff88; end: 1064c00a3;  */

void FUN_1064bff88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1064c002c;
  puStack_40 = &UNK_110844b80;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = param_2;
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_30);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1064c00a4; end: 1064c019b;  */

void FUN_1064c00a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (*(long *)(param_5 + 0x28) == 1) {
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    puVar1 = param_6;
    func_0x00010bfe90c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c2971c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    if (*(long *)(param_5 + 0x28) != 0) goto LAB_1064c0184;
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf20c00(param_6);
    func_0x00010c2971c0(param_3,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar4);
    puVar1 = puVar3;
  }
  _objc_release(puVar1);
LAB_1064c0184:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1064c019c; end: 1064c02d7; -[CTPComposerItemInstanceView _updateFromItemInstanceModel:shouldConstrainToSuperview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064c019c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010be945a0(param_1,param_2,1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c296f60(param_3,param_2,&PTR____CFConstantStringClassReference_110e51278);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    puVar3 = PTR_PTR_1126b2f40;
    func_0x00010bf5d800(PTR_PTR_1126b2f40,param_2,lVar2);
    *(undefined **)(param_1 + _DAT_112748e6c) = puVar3;
    lVar2 = param_3;
    func_0x00010c296f60(param_3,param_2,&PTR____CFConstantStringClassReference_110e51298);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c067fc0();
    puVar3 = PTR_PTR_1126b2f40;
    func_0x00010bf1aac0(PTR_PTR_1126b2f40,param_2,lVar4);
    *(int *)(param_1 + _DAT_112748e70) = (int)puVar3;
    lVar4 = param_3;
    func_0x00010c296f60(param_3,param_2,&PTR____CFConstantStringClassReference_110e512b8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be32a80(param_1,param_2,lVar5,param_4);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064c02d8; end: 1064c04bf; -[CTPComposerItemInstanceView _handleUpdatedItemInstance:shouldConstrainToSuperview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064c02d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_alloc();
  func_0x00010c008360();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112748e64);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = uVar4;
    func_0x00010c0e0460(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    uVar5 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064c04c0; end: 1064c057f;  */

void FUN_1064c04c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1064c0580;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = param_2;
    lStack_40 = lVar1;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1064c0580; end: 1064c0603;  */

void FUN_1064c0580(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1064c0604;
  puStack_38 = &UNK_1108e7ad0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x00010c0c0800(uVar1,param_2,&puStack_50,0);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1064c0604; end: 1064c0613;  */

void FUN_1064c0604(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addItemView_shouldConstrainToSu_11254f648,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1064c0614; end: 1064c0aeb; -[CTPComposerItemInstanceView _addItemView:shouldConstrainToSuperview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064c0614(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = param_4;
  _objc_retain(param_4);
  iVar22 = (int)lVar24;
  if (param_4 != 0) {
    _objc_retain(param_5);
    func_0x00010be945a0(param_2,param_3,0);
    lVar25 = (long)_DAT_112748e74;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + lVar25);
    *(long *)(param_2 + lVar25) = param_4;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar25),param_3,0);
    func_0x00010c21e900(*(undefined8 *)(param_2 + lVar25),param_3,0);
    func_0x00010befbb60(param_2,param_3,*(undefined8 *)(param_2 + lVar25));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_2 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf493a0(uVar3,param_3,lVar24);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar25);
    uStack_b0 = uVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0(uVar4,param_3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + lVar25);
    uStack_a8 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0(uVar7,param_3,lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + lVar25);
    uStack_a0 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0(uVar10,param_3,lVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_b0,4);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar13;
    func_0x00010beef8c0(puVar1);
    iVar22 = (int)puVar23;
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(lVar24);
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf1f3c0();
    _objc_release(param_5);
    if ((int)uVar2 != 0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar25));
      _CGRectGetWidth();
      dVar26 = param_1;
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar25));
      _CGRectGetHeight();
      lVar24 = param_2;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__CGSizeZero_110347620;
      if ((lVar24 != 0) &&
         ((dVar27 = *(double *)PTR__CGSizeZero_110347620, _objc_release(), dVar27 != param_1 ||
          (*(double *)(puVar1 + 8) != dVar26)))) {
        func_0x00010c219b60(param_2,param_3,0);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        lVar24 = param_2;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar24;
        func_0x00010bf49420(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_2;
        lStack_d0 = lVar5;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar8;
        func_0x00010bf49420(dVar26);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = param_2;
        lStack_c8 = lVar11;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = param_2;
        func_0x00010c262ca0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar15;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar14;
        func_0x00010bf493a0(lVar14,param_3,lVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = param_2;
        lStack_c0 = lVar17;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = param_2;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar19;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = lVar18;
        func_0x00010bf493a0(lVar18,param_3,lVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_b8 = lVar21;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_d0,4);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar13;
        func_0x00010beef8c0(puVar1);
        iVar22 = (int)puVar23;
        _objc_release(puVar13);
        _objc_release(lVar21);
        _objc_release(lVar20);
        _objc_release(lVar19);
        _objc_release(lVar18);
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(lVar15);
        _objc_release(lVar14);
        _objc_release(lVar11);
        _objc_release(lVar8);
        _objc_release(lVar5);
        _objc_release(lVar24);
      }
    }
    func_0x00010c2a5f80(*(undefined8 *)(param_2 + lVar25));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    lVar24 = (long)_DAT_112748e74;
    func_0x00010bf75820(*(undefined8 *)(param_4 + lVar24));
    if (*(long *)(param_4 + lVar24) != 0) {
      func_0x00010c12c960();
      uVar2 = *(undefined8 *)(param_4 + lVar24);
      *(undefined8 *)(param_4 + lVar24) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_4 + _DAT_112748e78);
      *(undefined8 *)(param_4 + _DAT_112748e78) = 0;
      _objc_release(uVar2);
      if (iVar22 != 0) {
        uVar2 = *(undefined8 *)(param_4 + _DAT_112748e7c);
        *(undefined8 *)(param_4 + _DAT_112748e7c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 1064c0aec; end: 1064c0b73; -[CTPComposerItemInstanceView _resetWithIsFullReset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064c0aec(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112748e74;
  func_0x00010bf75820(*(undefined8 *)(param_1 + lVar2));
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112748e78);
    *(undefined8 *)(param_1 + _DAT_112748e78) = 0;
    _objc_release(uVar1);
    if (param_3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112748e7c);
      *(undefined8 *)(param_1 + _DAT_112748e7c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 1064c0b74; end: 1064c0c57; +[CTPComposerItemInstanceView bindAttributes:] */

void FUN_1064c0b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1064c0ca8;
  puStack_50 = &UNK_110925cc8;
  ppuStack_48 = &PTR___NSConcreteGlobalBlock_110925ca8;
  _objc_retain(param_3);
  func_0x00010bf1a180(param_3,param_2,&PTR____CFConstantStringClassReference_110e51238,1,&puStack_68
                      ,&PTR___NSConcreteGlobalBlock_110925d18);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1064c0d54;
  puStack_78 = &UNK_110925cc8;
  ppuStack_70 = &PTR___NSConcreteGlobalBlock_110925ca8;
  func_0x00010bf1a180(param_3,param_2,&PTR____CFConstantStringClassReference_110e51258,1,&puStack_90
                      ,&PTR___NSConcreteGlobalBlock_110925d38);
  _objc_release(param_3);
  _objc_release(ppuStack_70);
  _objc_release(ppuStack_48);
  return;
}



/* Entry: 1064c0c58; end: 1064c0ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064c0c58(undefined8 param_1,long param_2)

{
  _objc_retain(param_2);
  if (*(long *)(param_2 + _DAT_112748e78) != 0) {
    if (*(long *)(param_2 + _DAT_112748e7c) != 0) {
      func_0x00010bed8aa0(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064c0ca8; end: 1064c0d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064c0ca8(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_2 + _DAT_112748e78);
  *(ulong *)(param_2 + _DAT_112748e78) = uVar1;
  _objc_release(uVar4);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  _objc_release(param_2);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1064c0d48; end: 1064c0d53;  */

void FUN_1064c0d48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be945b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__resetWithIsFullReset__112582b08,1);
  return;
}



/* Entry: 1064c0d54; end: 1064c0df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064c0d54(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_2 + _DAT_112748e7c);
  *(ulong *)(param_2 + _DAT_112748e7c) = uVar1;
  _objc_release(uVar4);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  _objc_release(param_2);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1064c0df4; end: 1064c0dff;  */

void FUN_1064c0df4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be945b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__resetWithIsFullReset__112582b08,1);
  return;
}



/* Entry: 1064c0e00; end: 1064c0e17; +[CTPComposerItemInstanceView ctpItemImageSizeFromItemInstanceViewSize:] */

undefined1 FUN_1064c0e00(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 1064c0e18; end: 1064c0e37; +[CTPComposerItemInstanceView bitmojiAttributionFromItemInstanceViewLocation:] */

undefined4 FUN_1064c0e18(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 4) {
    return *(undefined4 *)(&UNK_10dddc6a0 + (ulong)param_3 * 4);
  }
  return 0xc;
}



/* Entry: 1064c0e38; end: 1064c0ea7; -[CTPComposerItemInstanceView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064c0e38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748e7c,0);
  _objc_storeStrong(param_1 + _DAT_112748e78,0);
  _objc_storeStrong(param_1 + _DAT_112748e74,0);
  _objc_storeStrong(param_1 + _DAT_112748e68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748e64,0);
  return;
}



/* Entry: 1064c0ea8; end: 1064c0f1b; -[SCFriendsFeedShortcutsLoggingServices initWithFriendsFeedShortcutsLogger:] */

undefined1 * FUN_1064c0ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1730;
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



/* Entry: 1064c0f1c; end: 1064c0f23; -[SCFriendsFeedShortcutsLoggingServices friendsFeedShortcutsLogger] */

undefined8 FUN_1064c0f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064c0f24; end: 1064c0f2f; -[SCFriendsFeedShortcutsLoggingServices .cxx_destruct] */

void FUN_1064c0f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064c0f30; end: 1064c0f33; -[SCExtensionConfigDataProvider clearSharedState] */

void FUN_1064c0f30(void)

{
  return;
}



/* Entry: 1064c0f34; end: 1064c0fc7; -[SCExtensionConfigDataProvider saveAppExtensionData:] */

void FUN_1064c0f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010be99940(param_1);
  func_0x00010be99240(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1064c0fc8;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be99620(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1064c0fc8; end: 1064c0fdb;  */

void FUN_1064c0fc8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064c0fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1064c0fdc; end: 1064c1103; -[SCExtensionConfigDataProvider _saveShareExtConfigs] */

void FUN_1064c0fdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e51358,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e51378,1,0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e51398,1,0);
  puVar4 = PTR_PTR_1126cb058;
  _objc_alloc(PTR_PTR_1126cb058);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0c2d80();
  func_0x00010c045ac0(puVar4,param_2,uVar7,uVar1,(uint)uVar2 ^ 1,(uint)uVar3 ^ 1);
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar4,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1064c1104; end: 1064c11e3; -[SCExtensionConfigDataProvider _saveHomeScreenWidgetConfigs] */

void FUN_1064c1104(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e513b8,1,0);
  puVar2 = PTR_PTR_1126cb060;
  _objc_alloc(PTR_PTR_1126cb060);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c079820();
  func_0x00010c01f3a0(puVar2,param_2,uVar5,(uint)uVar1 ^ 1);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1064c11e4; end: 1064c12e3; -[SCExtensionConfigDataProvider _saveMessagesExtensionConfigs:] */

void FUN_1064c11e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = 0x3f800000;
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = uVar2;
  _objc_retain(param_3);
  func_0x00010bf46540(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1064c12e4; end: 1064c13c3;  */

void FUN_1064c12e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cb068;
    _objc_alloc(PTR_PTR_1126cb068);
    func_0x00010c02b960(*(undefined4 *)(param_1 + 0x30));
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(uVar4);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064c13c4; end: 1064c140b; -[SCExtensionConfigDataProvider .cxx_destruct] */

void FUN_1064c13c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064c140c; end: 1064c178b;  */

/* WARNING: Removing unreachable block (ram,0x0001064c15d4) */

void FUN_1064c140c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined *param_6,long param_7,undefined8 param_8,char param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_1 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
LAB_1064c15f0:
    puVar6 = (undefined *)0x0;
  }
  else {
    if (param_9 == '\0') {
      puVar4 = PTR_PTR_1126afd38;
      _objc_alloc_init(PTR_PTR_1126afd38);
      func_0x00010c2bc360();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b8160(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b78c0(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2bbd20(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_6;
      func_0x00010bfab060(param_6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_4 == 0) goto LAB_1064c15f0;
      puVar4 = PTR_PTR_1126af5d8;
      _objc_alloc();
      func_0x00010bff6040();
      puVar6 = PTR_PTR_1126afd68;
      _objc_retain(param_7);
      _objc_alloc_init(puVar6);
      func_0x00010c187040();
      func_0x00010c1cd300(puVar6);
      func_0x00010c1cd320(0,puVar6);
      puVar2 = PTR_PTR_1126af7d0;
      _objc_alloc_init();
      puVar5 = puVar6;
      func_0x00010bf63640(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160(puVar2);
      _objc_release(puVar5);
      lVar1 = param_7;
      func_0x00010c1195e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      if (lVar1 == 0) {
        _objc_retain(puVar6);
        puVar5 = puVar6;
      }
      else {
        puVar5 = PTR_PTR_1126afd68;
        _objc_alloc();
        lVar3 = lVar1;
        func_0x00010c296d80(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360(puVar5);
        _objc_release(lVar3);
        _objc_retain(puVar5);
        _objc_release(puVar5);
      }
      _objc_release(lVar1);
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar6 = puVar5;
      func_0x00010bf5e2e0(puVar5);
      puVar2 = puVar5;
      func_0x00010c0d98e0(puVar5);
      func_0x00010c0d9900(puVar5);
      FUN_1064c9b24((ulong)puVar6 & 0xffffffff,(ulong)puVar2 & 0xffffffff,param_3,0,param_4);
      puVar6 = PTR_PTR_1126b9600;
      func_0x00010bf49820(PTR_PTR_1126b9600);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064c178c; end: 1064c1857;  */

void FUN_1064c178c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    _objc_retain();
    _objc_opt_new();
    func_0x00010c11f420(param_1);
    _objc_retain(puVar1);
    func_0x00010bf98040(param_1);
    _objc_release(param_1);
    _objc_release(puVar1);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064c1858; end: 1064c1863;  */

void FUN_1064c1858(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 1064c1864; end: 1064c19bf;  */

void FUN_1064c1864(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_2);
      }
      lVar6 = *(long *)(lVar8 * 8);
      lVar9 = lVar6;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar9;
      func_0x00010c08fa60();
      _objc_release(lVar9);
      if (lVar2 != 0) {
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(param_1);
        _objc_release(lVar6);
      }
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = lVar3;
    _objc_retain();
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(undefined8 *)(lVar9 * 8);
        _objc_retain(param_1);
        func_0x00010c0bffe0(uVar7);
        _objc_release(param_1);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      lVar1 = lVar4;
      func_0x00010c2923e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar7);
      _objc_release(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1064c19c0; end: 1064c1b2b;  */

void FUN_1064c19c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_2);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      _objc_retain(param_1);
      func_0x00010c0bffe0(uVar5);
      _objc_release(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = lVar3;
    func_0x00010c2923e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1064c1b2c; end: 1064c1bb3;  */

void FUN_1064c1b2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064c1bb4; end: 1064c1bb7;  */

void FUN_1064c1bb4(void)

{
  return;
}



/* Entry: 1064c1bb8; end: 1064c1f17;  */

undefined **
FUN_1064c1bb8(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_2);
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  dVar13 = 1.60807493534087e-314;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1064c2054;
  puStack_180 = &UNK_11085a548;
  ppuVar6 = &puStack_198;
  uStack_178 = param_2;
  func_0x0001006372a4();
  _objc_release(uStack_178);
  ppuVar9 = &PTR___NSConcreteGlobalBlock_110925e48;
  ppuVar10 = param_1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar10;
  func_0x00010bf529e0();
  if (param_3 < ppuVar7) {
    ppuVar9 = ppuVar10;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar9;
    func_0x00010c0d3c80();
    _objc_release(ppuVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    _objc_retain(ppuVar1);
    ppuVar9 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      lVar8 = *plStack_1d0;
      do {
        ppuVar7 = (undefined **)0x0;
        do {
          if (*plStack_1d0 != lVar8) {
            _objc_enumerationMutation(ppuVar1);
          }
          lVar11 = *(long *)(lStack_1d8 + (long)ppuVar7 * 8);
          lVar3 = lVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar3;
          func_0x00010c08fa60();
          _objc_release(lVar3);
          if (lVar12 != 0) {
            func_0x00010c2923e0(lVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(lVar11);
          }
          ppuVar7 = (undefined **)((long)ppuVar7 + 1);
        } while (ppuVar9 != ppuVar7);
        ppuVar9 = ppuVar1;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    dVar13 = 0.0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    puStack_220 = (undefined *)0x0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    _objc_retain(ppuVar10);
    ppuVar9 = &puStack_220;
    ppuVar7 = ppuVar10;
    func_0x00010bf52a60();
    if (ppuVar7 != (undefined **)0x0) {
      lVar8 = *plStack_210;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_210 != lVar8) {
            _objc_enumerationMutation(ppuVar10);
          }
          lVar12 = *(long *)(lStack_218 + (long)ppuVar9 * 8);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar12;
          func_0x00010c08fa60();
          if (((lVar3 != 0) && (puVar4 = puVar2, func_0x00010bf4b900(), ((ulong)puVar4 & 1) == 0))
             && (uVar5 = param_4, func_0x00010bf4b900(), (int)uVar5 != 0)) {
            func_0x00010befa120(ppuVar1);
            func_0x00010befa120(puVar2);
          }
          _objc_release(lVar12);
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar7 != ppuVar9);
        ppuVar9 = &puStack_220;
        ppuVar7 = ppuVar10;
        func_0x00010bf52a60();
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(ppuVar10);
    ppuVar7 = ppuVar1;
    func_0x00010bf51e00(ppuVar1);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  else {
    _objc_retain(ppuVar10);
    ppuVar7 = ppuVar10;
  }
  _objc_release(ppuVar10);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar9);
  ppuVar10 = ppuVar6;
  func_0x00010bfb8280(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0891c0();
  dVar14 = dVar13;
  _objc_release(ppuVar10);
  ppuVar10 = ppuVar9;
  func_0x00010bfb8280(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0891c0();
  _objc_release(ppuVar10);
  if (dVar13 <= dVar14) {
    if (dVar14 <= dVar13) {
      ppuVar7 = ppuVar6;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar10 = ppuVar7;
      }
      ppuVar1 = ppuVar9;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433a0(ppuVar10);
      _objc_release(ppuVar1);
      _objc_release(ppuVar7);
    }
    else {
      ppuVar10 = (undefined **)0x1;
    }
  }
  else {
    ppuVar10 = (undefined **)0xffffffffffffffff;
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  return ppuVar10;
}



/* Entry: 1064c1f18; end: 1064c2053;  */

undefined ** FUN_1064c1f18(double param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  double dVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar3 = param_3;
  func_0x00010bfb8280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0891c0();
  dVar4 = param_1;
  _objc_release(ppuVar3);
  uVar1 = param_4;
  func_0x00010bfb8280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0891c0();
  _objc_release(uVar1);
  if (param_1 <= dVar4) {
    if (dVar4 <= param_1) {
      ppuVar2 = param_3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = ppuVar2;
      }
      uVar1 = param_4;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433a0(ppuVar3);
      _objc_release(uVar1);
      _objc_release(ppuVar2);
    }
    else {
      ppuVar3 = (undefined **)0x1;
    }
  }
  else {
    ppuVar3 = (undefined **)0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 1064c2054; end: 1064c2123;  */

uint FUN_1064c2054(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      uVar5 = (uint)uVar4 ^ 1;
      _objc_release(uVar3);
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 1064c2124; end: 1064c2163;  */

void FUN_1064c2124(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e51458,0xffffffff,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 1064c2164; end: 1064c225f; -[SCExtensionSnapchatterDataProvider saveAppExtensionData:] */

void FUN_1064c2164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf6d960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064c2260; end: 1064c22a3;  */

void FUN_1064c2260(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bec8080(lVar1);
    func_0x00010be98aa0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064c22a4; end: 1064c2377; -[SCExtensionSnapchatterDataProvider _saveAppExtensionData:] */

void FUN_1064c22a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdd6140(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064c2378; end: 1064c264b;  */

void FUN_1064c2378(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0x28);
    lVar2 = param_2;
    func_0x00010bfb9b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0b1c80(uVar7);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(lVar1 + 0x28);
    lVar2 = param_2;
    func_0x00010bfcf800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0b1ca0(uVar7);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfcf800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(uVar7);
    func_0x00010c08fa60();
    lVar2 = param_2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfcf800(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    if (*(ulong *)(lVar1 + 0x68) < 0x8000000000000000 && (long)*(ulong *)(lVar1 + 0x68) < lVar4) {
      lVar4 = param_2;
      func_0x00010bfcf800(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar4);
    }
    puVar6 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (puVar6 == (undefined *)0x0) {
      func_0x00010c0a5f00(*(undefined8 *)(lVar1 + 0x28));
    }
    else {
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(uVar7);
    }
    func_0x00010bf529e0(lVar5);
    func_0x00010c0a4f20(*(undefined8 *)(lVar1 + 0x28));
    func_0x00010c0aeb40(*(undefined8 *)(lVar1 + 0x28));
    func_0x00010c0aeb20(*(undefined8 *)(lVar1 + 0x28));
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    _objc_release(puVar6);
    _objc_release(0);
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(0);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1064c264c; end: 1064c2703; -[SCExtensionSnapchatterDataProvider clearSharedState] */

void FUN_1064c264c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1064c2704;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1064c2704; end: 1064c272f;  */

void FUN_1064c2704(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064c2730; end: 1064c2767; -[SCExtensionSnapchatterDataProvider _clearPinnedConversationsState] */

void FUN_1064c2730(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064c2768; end: 1064c28ff; -[SCExtensionSnapchatterDataProvider _subscribeToPinnedConversationsIfFriendCapEnabled] */

void FUN_1064c2768(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c067fc0();
  if (-1 < lVar6) {
    lVar6 = *(long *)(param_1 + 0x50);
    _objc_release(lVar1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        puVar2 = PTR_PTR_1126ae810;
        _objc_opt_new();
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        *(undefined **)(param_1 + 0x50) = puVar2;
        _objc_release(uVar5);
        _objc_initWeak(auStack_48,param_1);
        lVar1 = lVar6;
        func_0x00010c0fc5c0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0e0ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_50,auStack_48);
        lVar4 = lVar3;
        func_0x00010c25ff60(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar1);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      _objc_release(lVar6);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064c2900; end: 1064c29ab;  */

void FUN_1064c2900(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (lVar2 == 0) {
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar3;
    _objc_release(uVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064c29ac; end: 1064c2ac3; -[SCExtensionSnapchatterDataProvider _buildExtensionSnapchatterRepository:] */

void FUN_1064c29ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc22e0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064c2ac4; end: 1064c2b17;  */

void FUN_1064c2ac4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd6160();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064c2b18; end: 1064c3233; -[SCExtensionSnapchatterDataProvider _buildExtensionSnapchatterRepositoryWithGroups:completion:] */

void FUN_1064c2b18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1064c3234;
  uStack_88 = 0x1064c3244;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1064c3234;
  uStack_b8 = 0x1064c3244;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1064c3234;
  uStack_e8 = 0x1064c3244;
  uStack_e0 = 0;
  _objc_initWeak(auStack_110,param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar11);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c067fc0();
  _objc_release();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1064c324c;
  puStack_158 = &UNK_110925ec8;
  puStack_118 = &uStack_a8;
  _objc_retain(uVar1);
  uStack_150 = uVar1;
  _objc_retain(uVar2);
  uStack_148 = uVar2;
  _objc_retain(uVar4);
  uStack_140 = uVar4;
  _objc_retain(uVar5);
  uStack_138 = uVar5;
  _objc_retain(uVar10);
  uStack_130 = uVar10;
  _objc_retain(uVar11);
  uStack_128 = uVar11;
  _objc_retain(uVar7);
  uStack_120 = uVar7;
  func_0x00010c11f720(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _dispatch_group_enter(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_1064c3a5c;
  puStack_1d0 = &UNK_110925f98;
  _objc_copyWeak(auStack_178,auStack_110);
  _objc_retain(uVar1);
  uStack_1c8 = uVar1;
  _objc_retain(uVar2);
  uStack_1c0 = uVar2;
  _objc_retain(uVar4);
  uStack_1b8 = uVar4;
  _objc_retain(uVar5);
  uStack_1b0 = uVar5;
  _objc_retain(uVar10);
  uStack_1a8 = uVar10;
  _objc_retain(uVar11);
  uStack_1a0 = uVar11;
  _objc_retain(param_3);
  puStack_180 = &uStack_d8;
  uStack_198 = param_3;
  uStack_190 = uVar3;
  _objc_retain(uVar7);
  uStack_188 = uVar7;
  func_0x00010c1223e0(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _dispatch_group_enter(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_1064c423c;
  puStack_200 = &UNK_110860220;
  puStack_1f0 = &uStack_108;
  _objc_retain(uVar7);
  uStack_1f8 = uVar7;
  func_0x00010c0eea20(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar8);
  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_1064c4298;
  puStack_250 = &UNK_110925fe8;
  _objc_retain(uVar1);
  uStack_248 = uVar1;
  uStack_240 = uVar3;
  _objc_retain(uVar2);
  uStack_238 = uVar2;
  _objc_retain(uVar10);
  uStack_230 = uVar10;
  _objc_retain(uVar11);
  uVar8 = param_3;
  uStack_228 = uVar11;
  lStack_220 = param_1;
  func_0x000100504554(param_3,&puStack_268);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  pcStack_2e0 = FUN_1064c4414;
  puStack_2d8 = &UNK_110926048;
  _objc_copyWeak(auStack_278,auStack_110);
  puStack_290 = &uStack_108;
  puStack_288 = &uStack_a8;
  puStack_280 = &uStack_d8;
  uStack_2d0 = uVar1;
  uStack_2c8 = uVar2;
  uStack_2c0 = uVar4;
  uStack_2b8 = uVar5;
  uStack_2b0 = uVar10;
  uStack_2a8 = uVar11;
  uStack_2a0 = uVar8;
  uStack_298 = param_4;
  uStack_270 = uVar6;
  _objc_retain(param_4);
  _objc_retain(uVar8);
  _objc_retain(uVar11);
  _objc_retain(uVar10);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x000100bc0718(uVar7,uVar9,&puStack_2f0);
  _objc_release(uVar9);
  _objc_release(uStack_298);
  _objc_release(uStack_2a0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2c0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2d0);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_278);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_release(uStack_238);
  _objc_release(uStack_248);
  _objc_release(uStack_1f8);
  _objc_release(uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_destroyWeak(auStack_178);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1064c3234; end: 1064c324b;  */

void FUN_1064c3234(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064c324c; end: 1064c335f;  */

void FUN_1064c324c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064c3360;
  puStack_68 = &UNK_110925e98;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x000100504554(param_2,&puStack_80);
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x50));
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_60);
  return;
}



/* Entry: 1064c3360; end: 1064c3377;  */

void FUN_1064c3360(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong in_stack_fffffffffffffef0;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(lVar5);
  _objc_retain(uVar3);
  _objc_retain(uVar6);
  if (param_2 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    lVar7 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      lVar8 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      puVar25 = (undefined *)0x0;
      if (lVar8 == 0) goto LAB_1064c3a00;
      lVar7 = lVar5;
      func_0x00010bf86580();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      FUN_1064c178c();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      func_0x00010bf86580();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      lVar15 = lVar10;
      FUN_1064c140c(lVar10,uVar4,lVar12,lVar14,0,uVar2,uVar3,uVar6,in_stack_fffffffffffffef0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      lVar10 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar10;
      FUN_1064c140c(lVar10,uVar4,lVar12,lVar14,1,uVar2,uVar3,uVar6,
                    in_stack_fffffffffffffef0 & 0xffffffffffffff00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      lVar10 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar10;
      FUN_1064c140c(lVar10,uVar4,lVar12,lVar14,1,uVar2,uVar3,uVar6,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      puVar18 = PTR_PTR_1126cb098;
      _objc_alloc();
      lVar10 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x000108ffe710();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_2;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010bf1af00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05adc0();
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      puVar21 = PTR_PTR_1126b0cd8;
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR_PTR_1126b0cd8;
      lVar10 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar25 = (undefined *)0x0;
      if ((puVar21 != (undefined *)0x0) && (puVar22 != (undefined *)0x0)) {
        puVar25 = PTR_PTR_1126cb0a0;
        func_0x00010bfc8380();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar25;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar25);
        puVar25 = (undefined *)0x0;
        if (puVar23 != (undefined *)0x0) {
          puVar24 = PTR_PTR_1126cb0a8;
          _objc_alloc();
          func_0x00010901d924(param_2);
          lVar10 = param_2;
          func_0x00010901db40(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e460();
          _objc_release(lVar10);
          puVar25 = PTR_PTR_1126cb0b0;
          _objc_alloc();
          lVar10 = param_2;
          func_0x00010c2923e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar11 = param_2;
          func_0x00010c294420(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_2;
          func_0x00010901d7c4(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = param_2;
          func_0x00010901d430();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010901ccf8();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100bf119c();
          func_0x00010c05c1c0(puVar25);
          _objc_release(lVar14);
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(puVar24);
        }
        _objc_release(puVar23);
      }
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar9);
      _objc_release(lVar8);
    }
    _objc_release(lVar7);
  }
LAB_1064c3a00:
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1064c3378; end: 1064c3a5b;  */

void FUN_1064c3378(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong in_stack_fffffffffffffef0;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      lVar2 = param_2;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      puVar19 = (undefined *)0x0;
      if (lVar2 == 0) goto LAB_1064c3a00;
      lVar1 = param_5;
      func_0x00010bf86580();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_1064c178c();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      func_0x00010bf86580();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf1bae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf1bae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      lVar9 = lVar4;
      FUN_1064c140c(lVar4,param_3,lVar6,lVar8,0,param_4,param_6,param_7,in_stack_fffffffffffffef0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf1bae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf1bae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      FUN_1064c140c(lVar4,param_3,lVar6,lVar8,1,param_4,param_6,param_7,
                    in_stack_fffffffffffffef0 & 0xffffffffffffff00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf1bae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf1bae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar4;
      FUN_1064c140c(lVar4,param_3,lVar6,lVar8,1,param_4,param_6,param_7,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar12 = PTR_PTR_1126cb098;
      _objc_alloc();
      lVar4 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x000108ffe710();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1af00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05adc0();
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar15 = PTR_PTR_1126b0cd8;
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126b0cd8;
      lVar4 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      puVar19 = (undefined *)0x0;
      if ((puVar15 != (undefined *)0x0) && (puVar16 != (undefined *)0x0)) {
        puVar19 = PTR_PTR_1126cb0a0;
        func_0x00010bfc8380();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar19;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        puVar19 = (undefined *)0x0;
        if (puVar17 != (undefined *)0x0) {
          puVar18 = PTR_PTR_1126cb0a8;
          _objc_alloc();
          func_0x00010901d924(param_1);
          lVar4 = param_1;
          func_0x00010901db40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e460();
          _objc_release(lVar4);
          puVar19 = PTR_PTR_1126cb0b0;
          _objc_alloc();
          lVar4 = param_1;
          func_0x00010c2923e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010c294420(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010901d7c4(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_1;
          func_0x00010901d430();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010901ccf8();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100bf119c();
          func_0x00010c05c1c0(puVar19);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(puVar18);
        }
        _objc_release(puVar17);
      }
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
LAB_1064c3a00:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 1064c3a5c; end: 1064c3cf7;  */

void FUN_1064c3a5c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1064c3cf8;
    puStack_a8 = &UNK_110925ef8;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = uVar9;
    _objc_retain(uVar10);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = uVar10;
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = uVar9;
    _objc_retain(uVar10);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uStack_88 = uVar10;
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = uVar9;
    _objc_retain(uVar10);
    uVar3 = param_2;
    uStack_78 = uVar10;
    func_0x000100504554(param_2,&puStack_c0);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1064c3e30;
    puStack_f8 = &UNK_110925f28;
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar10);
    uStack_e8 = *(undefined8 *)(param_1 + 0x58);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uStack_f0 = uVar10;
    _objc_retain(uVar11);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    uStack_e0 = uVar11;
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    uStack_d8 = uVar10;
    _objc_retain(uVar11);
    uStack_d0 = uVar11;
    lStack_c8 = lVar2;
    func_0x000100504554(uVar9,&puStack_110);
    uVar4 = uVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x000100504554(uVar5,&PTR___NSConcreteGlobalBlock_110925f78);
    uVar6 = uVar4;
    func_0x00010bf529e0();
    uVar7 = uVar4;
    if (0x4b < uVar6) {
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
    uVar10 = *(undefined8 *)(lVar8 + 0x28);
    *(ulong *)(lVar8 + 0x28) = uVar7;
    _objc_retain(uVar7);
    _objc_release(uVar10);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x60));
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_f0);
    _objc_release(uVar3);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064c3cf8; end: 1064c3e2f;  */

void FUN_1064c3cf8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    FUN_1064c3378(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126cb078;
      func_0x00010c244820(PTR_PTR_1126cb078);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cb080;
      _objc_alloc(PTR_PTR_1126cb080);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      uVar2 = param_2;
      func_0x00010bfb8280(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0891c0();
      func_0x00010bf655e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021780(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
    _objc_release(uVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064c3e30; end: 1064c3fdb;  */

void FUN_1064c3e30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x000108ef3728(param_2,uVar8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x000108ef35d8(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_1064c3fdc(param_2,uVar11,uVar8,uVar2,uVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126cb088;
  _objc_alloc(PTR_PTR_1126cb088);
  uVar8 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018d20(puVar7);
  _objc_release(uVar8);
  puVar9 = PTR_PTR_1126cb078;
  func_0x00010bfcf5e0(PTR_PTR_1126cb078);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126cb080;
  _objc_alloc(PTR_PTR_1126cb080);
  uVar8 = param_2;
  func_0x00010c0891c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c021780(puVar10);
  _objc_release(uVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1064c3fdc; end: 1064c413f;  */

void FUN_1064c3fdc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000108ef2144(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  uVar2 = param_1;
  if (3 < uVar1) {
    func_0x00010c25e980(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064c4990;
  puStack_68 = &UNK_110926078;
  uStack_60 = param_3;
  uStack_58 = param_6;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x000100504554(uVar2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064c4140; end: 1064c4147;  */

void FUN_1064c4140(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf500d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversation_1125b19d8);
  return;
}



/* Entry: 1064c4148; end: 1064c423b;  */

void FUN_1064c4148(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 1064c423c; end: 1064c4297;  */

void FUN_1064c423c(long param_1,undefined8 param_2)

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



/* Entry: 1064c4298; end: 1064c440b;  */

void FUN_1064c4298(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x000108ef3728(param_2,uVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x000108ef35d8(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000100504554();
  _objc_release(uVar5);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  FUN_1064c3fdc(param_2,uVar10,uVar5,uVar2,uVar1,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar9 = PTR_PTR_1126cb088;
  _objc_alloc(PTR_PTR_1126cb088);
  uVar5 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c018d20(puVar9);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1064c440c; end: 1064c4413;  */

void FUN_1064c440c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_username_112682b30);
  return;
}



/* Entry: 1064c4414; end: 1064c469f;  */

void FUN_1064c4414(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1064c46a0;
    puStack_98 = &UNK_110925e98;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uStack_90 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = uVar4;
    _objc_retain(uVar5);
    ppuVar2 = &puStack_b0;
    uStack_68 = uVar5;
    _objc_retainBlock();
    if (*(long *)(param_1 + 0x80) < 0) {
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
      puStack_e0 = puVar6;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_1064c46b8;
      puStack_c8 = &UNK_110926018;
      puVar6 = *(undefined **)(param_1 + 0x20);
      _objc_retain(puVar6);
      puStack_c0 = puVar6;
      _objc_retain(ppuVar2);
      ppuStack_b8 = ppuVar2;
      func_0x000100504554(uVar4,&puStack_e0);
      _objc_release(ppuStack_b8);
      puVar6 = puStack_c0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      FUN_1064c1864();
      FUN_1064c19c0(puVar6,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28));
      lVar7 = *(long *)(lVar1 + 0x58);
      _objc_retain(lVar7);
      lVar3 = lVar7;
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        func_0x00010c280520(puVar6);
      }
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
      FUN_1064c1bb8(uVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x80),puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x000100504554();
      _objc_release(uVar5);
      _objc_release(lVar7);
    }
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126cb090;
    _objc_alloc(PTR_PTR_1126cb090);
    func_0x00010bff7680();
    (**(code **)(*(long *)(param_1 + 0x58) + 0x10))(*(long *)(param_1 + 0x58),puVar6);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(ppuVar2);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1064c46a0; end: 1064c46b7;  */

void FUN_1064c46a0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong in_stack_fffffffffffffef0;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(lVar5);
  _objc_retain(uVar3);
  _objc_retain(uVar6);
  if (param_2 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    lVar7 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      lVar8 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      puVar25 = (undefined *)0x0;
      if (lVar8 == 0) goto LAB_1064c3a00;
      lVar7 = lVar5;
      func_0x00010bf86580();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      FUN_1064c178c();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      func_0x00010bf86580();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      lVar15 = lVar10;
      FUN_1064c140c(lVar10,uVar4,lVar12,lVar14,0,uVar2,uVar3,uVar6,in_stack_fffffffffffffef0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      lVar10 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar10;
      FUN_1064c140c(lVar10,uVar4,lVar12,lVar14,1,uVar2,uVar3,uVar6,
                    in_stack_fffffffffffffef0 & 0xffffffffffffff00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      lVar10 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar10;
      FUN_1064c140c(lVar10,uVar4,lVar12,lVar14,1,uVar2,uVar3,uVar6,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      puVar18 = PTR_PTR_1126cb098;
      _objc_alloc();
      lVar10 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x000108ffe710();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_2;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010bf1af00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05adc0();
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      puVar21 = PTR_PTR_1126b0cd8;
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR_PTR_1126b0cd8;
      lVar10 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar25 = (undefined *)0x0;
      if ((puVar21 != (undefined *)0x0) && (puVar22 != (undefined *)0x0)) {
        puVar25 = PTR_PTR_1126cb0a0;
        func_0x00010bfc8380();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar25;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar25);
        puVar25 = (undefined *)0x0;
        if (puVar23 != (undefined *)0x0) {
          puVar24 = PTR_PTR_1126cb0a8;
          _objc_alloc();
          func_0x00010901d924(param_2);
          lVar10 = param_2;
          func_0x00010901db40(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e460();
          _objc_release(lVar10);
          puVar25 = PTR_PTR_1126cb0b0;
          _objc_alloc();
          lVar10 = param_2;
          func_0x00010c2923e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar11 = param_2;
          func_0x00010c294420(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_2;
          func_0x00010901d7c4(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = param_2;
          func_0x00010901d430();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010901ccf8();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100bf119c();
          func_0x00010c05c1c0(puVar25);
          _objc_release(lVar14);
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(puVar24);
        }
        _objc_release(puVar23);
      }
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar9);
      _objc_release(lVar8);
    }
    _objc_release(lVar7);
  }
LAB_1064c3a00:
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1064c46b8; end: 1064c4787;  */

void FUN_1064c46b8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      (**(code **)(lVar4 + 0x10))(lVar4,param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064c4768;
    }
  }
  else {
    _objc_release(uVar1);
  }
  lVar4 = 0;
LAB_1064c4768:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1064c4788; end: 1064c48ab;  */

void FUN_1064c4788(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x78,param_2 + 0x78);
  return;
}



/* Entry: 1064c48ac; end: 1064c498f; -[SCExtensionSnapchatterDataProvider .cxx_destruct] */

void FUN_1064c48ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 1064c4990; end: 1064c4c4b;  */

void FUN_1064c4990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong in_stack_ffffffffffffff90;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1c0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffffffffff00;
  uVar4 = uVar1;
  FUN_1064c140c(uVar1,uVar6,uVar2,uVar3,0,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                in_stack_ffffffffffffff90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1c0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  FUN_1064c140c(uVar1,uVar7,uVar2,uVar3,1,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                in_stack_ffffffffffffff90 & 0xffffffffffffff00);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1c0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  FUN_1064c140c(uVar1,uVar8,uVar2,uVar3,1,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126cb098;
  _objc_alloc(PTR_PTR_1126cb098);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf1af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05adc0(puVar5);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064c4c4c; end: 1064c4ccf;  */

undefined8 FUN_1064c4c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c0891c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0891c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf433a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1064c4cd0; end: 1064c4d0b;  */

void FUN_1064c4cd0(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb0280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064c4d0c; end: 1064c4e4f; -[SCExtensionSnapchatterDependencyMonitor _setupSubscriptionsIfNeededWithSnapchattersObservableRepository:] */

void FUN_1064c4d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf19580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}


