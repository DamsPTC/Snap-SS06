/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062a56cc; end: 1062a57d3; -[SCContextSpotlightProfileImageProvider initWithImageFetchingService:bitmojiImageFetcher:performer:] */

undefined1 *
FUN_1062a56cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0b48;
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
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062a57d4; end: 1062a5937; -[SCContextSpotlightProfileImageProvider fetchProfileImageWithUrl:completion:] */

void FUN_1062a57d4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x30);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        _os_unfair_lock_lock(param_1 + 0x20);
        puVar2 = *(undefined **)(param_1 + 0x28);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        if (puVar2 == (undefined *)0x0) {
          lVar3 = param_4;
          _objc_retainBlock(param_4);
          func_0x00010bf0a100(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
          _os_unfair_lock_unlock(param_1 + 0x20);
          func_0x00010be133e0(param_1);
        }
        else {
          lVar3 = param_4;
          _objc_retainBlock(param_4);
          func_0x00010befa120(puVar2);
          _objc_release(lVar3);
          _os_unfair_lock_unlock(param_1 + 0x20);
          puVar4 = puVar2;
        }
        _objc_release(puVar4);
      }
      else {
        (**(code **)(param_4 + 0x10))(param_4,lVar1,0);
      }
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062a5938; end: 1062a5b9b; -[SCContextSpotlightProfileImageProvider fetchBitmojiProfileImageWithAvatarId:bitmojiSelfieId:userId:completion:] */

void FUN_1062a5938(long param_1,undefined8 param_2,long param_3,long param_4,undefined *param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) goto LAB_1062a5b64;
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar3 = param_5;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_5);
      puVar3 = param_5;
    }
    puVar4 = puVar3;
    func_0x000108ffe710(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = 0;
    func_0x000108ffef38(0,puVar4,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
LAB_1062a5b40:
    (**(code **)(param_6 + 0x10))(param_6,lVar1,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c08fa60();
    func_0x00010c08fa60();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_1062a5b40;
    _os_unfair_lock_lock(param_1 + 0x20);
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar2 == (undefined *)0x0) {
      lVar1 = param_6;
      _objc_retainBlock(param_6);
      func_0x00010bf0a100(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
      _os_unfair_lock_unlock(param_1 + 0x20);
      func_0x00010be0ffc0(param_1);
    }
    else {
      lVar1 = param_6;
      _objc_retainBlock(param_6);
      func_0x00010befa120(puVar2);
      _objc_release(lVar1);
      _os_unfair_lock_unlock(param_1 + 0x20);
      puVar4 = puVar2;
    }
    _objc_release(puVar4);
    lVar1 = 0;
  }
  _objc_release(lVar1);
  _objc_release(puVar3);
LAB_1062a5b64:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062a5b9c; end: 1062a5dd7; -[SCContextSpotlightProfileImageProvider _fetchProfileImageWithImageUrl:] */

void FUN_1062a5b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar4 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126b85a0;
  puVar5 = puVar2;
  func_0x00010bf220e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar5);
  _objc_release(puVar7);
  _objc_initWeak(auStack_58,param_1);
  uVar8 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bfa7900(uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1062a5dd8; end: 1062a5efb;  */

void FUN_1062a5dd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1062a5efc;
  puStack_68 = &UNK_11091a128;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1062a5efc; end: 1062a5fcf;  */

void FUN_1062a5efc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be17620(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062a5fd0; end: 1062a61b3; -[SCContextSpotlightProfileImageProvider _fetchBitmojiImageWithId:bitmojiSelfieId:key:userId:completion:] */

void FUN_1062a5fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b5938;
  _objc_alloc(PTR_PTR_1126b5938);
  func_0x00010c050fa0();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfa5420(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062a61b4; end: 1062a62ab;  */

void FUN_1062a61b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar1);
    }
    lVar2 = lVar1;
    func_0x000108ffe710(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    func_0x000108ffef38(0,lVar2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be17620();
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be17620();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062a62ac; end: 1062a6437; -[SCContextSpotlightProfileImageProvider _finishedFetchingImageWithKey:image:error:] */

void FUN_1062a62ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_4,param_5);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1062a6438; end: 1062a648b; -[SCContextSpotlightProfileImageProvider .cxx_destruct] */

void FUN_1062a6438(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062a648c; end: 1062a6717; -[SCContextSpotlightSoundsEntryPointProvider initWithParamsResponse:headerParamsObservable:musicMediaLoader:experiments:musicTrackAssetLoader:contextExperimentService:] */

undefined8 *
FUN_1062a648c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126f0b50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_3;
    func_0x00010bf41860(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0e80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1062a6718; end: 1062a67bf;  */

void FUN_1062a6718(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  uVar3 = uVar6;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar4 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c93c8;
  _objc_opt_class(PTR_PTR_1126c93c8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar6;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c9490;
  _objc_opt_class(PTR_PTR_1126c9490);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar6 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar4);
  lVar7 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar7);
  func_0x00010be82400();
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1062a67c0; end: 1062a695f;  */

void FUN_1062a67c0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c93c8;
  _objc_opt_class(PTR_PTR_1126c93c8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126c9490;
  _objc_opt_class(PTR_PTR_1126c9490);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82400();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062a6960; end: 1062a6a6f; -[SCContextSpotlightSoundsEntryPointProvider _processSpotlightResponse:spotlightParams:headerParams:] */

void FUN_1062a6960(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((((param_3 != 0) && (lVar1 = param_3, func_0x00010c24aec0(), lVar1 != 0)) && (param_4 != 0))
     && (param_5 != 0)) {
    lVar1 = param_4;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar1 == lVar2) {
      uVar3 = param_1;
      func_0x00010be34920(param_1,param_2,param_4);
      uVar4 = param_1;
      func_0x00010be3f460(param_1,param_2,param_5);
      lVar1 = param_3;
      func_0x00010c24aea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be26ec0(param_1,param_2,lVar1,uVar3,uVar4);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062a6a70; end: 1062a6c63; -[SCContextSpotlightSoundsEntryPointProvider _hasTrendingMusicInParams:] */

bool FUN_1062a6a70(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
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
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined1 *)0x0) {
    bVar8 = false;
  }
  else {
    puVar4 = param_3;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x0001084372fc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010c27b9c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined1 *)0x0) {
      bVar8 = false;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c087920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      bVar8 = false;
      if (puVar11 != (undefined1 *)0x0) {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        puVar4 = puVar2;
        func_0x00010c087920();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010bf52a60();
        bVar8 = false;
        if (puVar3 != (undefined1 *)0x0) {
          lVar10 = *plStack_120;
          do {
            puVar11 = (undefined1 *)0x0;
            do {
              if (*plStack_120 != lVar10) {
                _objc_enumerationMutation(puVar4);
              }
              lVar9 = *(long *)(lStack_128 + (long)puVar11 * 8);
              lVar5 = lVar9;
              func_0x00010c27dd80();
              if (lVar5 == 1) {
                lVar5 = lVar9;
                func_0x00010c0d2940();
                _objc_retainAutoreleasedReturnValue();
                if (lVar5 != 0) {
                  func_0x00010c0d2940();
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar9;
                  func_0x00010c0d2fa0();
                  _objc_release(lVar9);
                  _objc_release(lVar5);
                  if (lVar6 != 0) {
                    bVar8 = true;
                    goto LAB_1062a6c0c;
                  }
                }
              }
              puVar11 = puVar11 + 1;
            } while (puVar3 != puVar11);
            puVar3 = puVar4;
            puVar7 = &uStack_130;
            func_0x00010bf52a60(puVar4,param_2,&uStack_130,auStack_e8,0x10);
          } while (puVar3 != (undefined1 *)0x0);
          bVar8 = false;
        }
LAB_1062a6c0c:
        _objc_release(puVar4);
        puVar4 = (undefined1 *)puVar7;
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    param_3 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar8;
  }
  ___stack_chk_fail();
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  return puVar1 != (undefined1 *)0x0;
}



/* Entry: 1062a6c64; end: 1062a6ca7; -[SCContextSpotlightSoundsEntryPointProvider _isCreatorAttributionRenderedWithHeaderParams:] */

bool FUN_1062a6c64(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1062a6ca8; end: 1062a6cd3; -[SCContextSpotlightSoundsEntryPointProvider _shouldUseOriginalSoundTitleForAction:isCreatorAttributionRendered:] */

bool FUN_1062a6ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return false;
  }
  func_0x00010c278a40(param_3);
  return (int)param_3 != 1;
}



/* Entry: 1062a6cd4; end: 1062a6e2f; -[SCContextSpotlightSoundsEntryPointProvider _handleCards:hasTrendingMusic:isCreatorAttributionRendered:] */

void FUN_1062a6cd4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
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
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar9 = *(undefined8 **)(lStack_128 + (long)puVar11 * 8);
        puVar2 = (undefined *)puVar9;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010beeed20();
        _objc_release(puVar2);
        if ((int)puVar3 == 0x1c) {
          func_0x00010be1bea0(param_1);
          puVar7 = param_4;
          uVar8 = param_5;
          goto LAB_1062a6de4;
        }
        puVar11 = puVar11 + 1;
      } while (puVar1 != puVar11);
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      puVar1 = param_3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
LAB_1062a6de4:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar1 = (undefined *)puVar9;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2472a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9530;
  _objc_alloc_init();
  puVar2 = (undefined *)puVar9;
  func_0x00010beedca0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206960(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a7180(puVar1,param_2,puVar7);
  puVar2 = param_3;
  func_0x00010beb7320(param_3,param_2,puVar11,uVar8);
  if ((int)puVar2 == 0) {
    puVar4 = puVar11;
    func_0x00010bfdb000();
    puVar3 = PTR_PTR_1126c9390;
    puVar2 = (undefined *)puVar9;
    if ((int)puVar4 == 0) {
      func_0x00010c2711a0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined *)puVar9;
      func_0x00010c260dc0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247420(puVar3,param_2,puVar2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar1,param_2,puVar3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c260dc0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247420(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110daafd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar1,param_2,puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar4);
  }
  else {
    func_0x0001062ccedc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1,param_2,puVar2);
  }
  _objc_release(puVar2);
  if (((ulong)puVar7 & 1) != 0) {
    func_0x00010c200720(puVar1,param_2,0);
    goto LAB_1062a7090;
  }
  puVar3 = puVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if ((puVar4 == (undefined *)0x0) || (puVar4 = puVar11, func_0x00010c278a40(), (int)puVar4 != 3)) {
    func_0x00010c200720(puVar1,param_2,0);
  }
  else {
    puVar4 = puVar11;
    func_0x00010bfdb000();
    if ((int)puVar4 == 0) {
LAB_1062a7050:
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bfe28a0();
      func_0x00010c200720(puVar1,param_2,uVar8);
      _objc_release(uVar6);
      if ((int)puVar4 == 0) goto LAB_1062a7088;
    }
    else {
      puVar2 = puVar11;
      func_0x00010c128040();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c277e80();
      if (puVar5 == (undefined *)0x0) goto LAB_1062a7050;
      func_0x00010c200720(puVar1,param_2,0);
    }
    _objc_release(puVar2);
  }
LAB_1062a7088:
  _objc_release(puVar3);
LAB_1062a7090:
  puVar2 = puVar11;
  func_0x00010bfd3ea0();
  if ((int)puVar2 != 0) {
    puVar2 = PTR_PTR_1126c9538;
    _objc_alloc(PTR_PTR_1126c9538);
    func_0x00010c02ce80();
    puVar3 = puVar11;
    func_0x00010beff2c0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47860(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c184c60(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1062a6e30; end: 1062a712f; -[SCContextSpotlightSoundsEntryPointProvider _generateSoundInfoWithSoundCard:hasTrendingMusic:isCreatorAttributionRendered:] */

void FUN_1062a6e30(undefined *param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2472a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9530;
  _objc_alloc_init();
  puVar3 = param_3;
  func_0x00010beedca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206960(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1a7180(puVar1,param_2,param_4);
  puVar3 = param_1;
  func_0x00010beb7320(param_1,param_2,puVar2,param_5);
  if ((int)puVar3 == 0) {
    puVar4 = puVar2;
    func_0x00010bfdb000();
    puVar5 = PTR_PTR_1126c9390;
    puVar3 = param_3;
    if ((int)puVar4 == 0) {
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247420(puVar5,param_2,puVar3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar1,param_2,puVar5);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247420(puVar5,param_2,puVar3,&PTR____CFConstantStringClassReference_110daafd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar1,param_2,puVar5);
      puVar4 = puVar5;
    }
    _objc_release(puVar4);
  }
  else {
    func_0x0001062ccedc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1,param_2,puVar3);
  }
  _objc_release(puVar3);
  if ((param_4 & 1) != 0) {
    func_0x00010c200720(puVar1,param_2,0);
    goto LAB_1062a7090;
  }
  puVar5 = puVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c08fa60();
  if ((puVar4 == (undefined *)0x0) || (puVar4 = puVar2, func_0x00010c278a40(), (int)puVar4 != 3)) {
    func_0x00010c200720(puVar1,param_2,0);
  }
  else {
    puVar4 = puVar2;
    func_0x00010bfdb000();
    if ((int)puVar4 == 0) {
LAB_1062a7050:
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfe28a0();
      func_0x00010c200720(puVar1,param_2,uVar8);
      _objc_release(uVar7);
      if ((int)puVar4 == 0) goto LAB_1062a7088;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c128040();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c277e80();
      if (puVar6 == (undefined *)0x0) goto LAB_1062a7050;
      func_0x00010c200720(puVar1,param_2,0);
    }
    _objc_release(puVar3);
  }
LAB_1062a7088:
  _objc_release(puVar5);
LAB_1062a7090:
  puVar3 = puVar2;
  func_0x00010bfd3ea0();
  if ((int)puVar3 != 0) {
    puVar3 = PTR_PTR_1126c9538;
    _objc_alloc(PTR_PTR_1126c9538);
    func_0x00010c02ce80();
    puVar5 = puVar2;
    func_0x00010beff2c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47860(puVar3,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010c184c60(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062a7130; end: 1062a7157; -[SCContextSpotlightSoundsEntryPointProvider soundEntryParamsObservable] */

void FUN_1062a7130(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062a7158; end: 1062a71b7; -[SCContextSpotlightSoundsEntryPointProvider .cxx_destruct] */

void FUN_1062a7158(long param_1)

{
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



/* Entry: 1062a71b8; end: 1062a91db; -[SCContextSpotlightViewController initWithParams:lifecycleEvent:dataFetcher:interopProvider:actionHandlerDelegate:actionHandler:appStartExperimentReader:profileHandler:boostCoordinator:subscriptionSessionProvider:imageDownloader:musicMediaLoader:viewLogger:circumstanceEngine:notificationPool:spotlightLogger:operaEventAnnouncer:spotlightRepliesViewCountManager:experiments:musicTrackAssetLoader:userPreferences:swipeToProfileParamsProvider:bloopsCTATargetsService:audioSession:bitmojiImageFetcher:ctpItemViewService:embeddedComponentScopeExposer:contextOperaEmbeddedComponentScopeServices:composerServices:composerCoreUIServices:featureSettingsService:snapchattersDataFetcher:snapchattersUserInfoRepository:groupDisplayNameFormatter:storiesConfigProvider:contextExperimentService:groupAvatarScopeExposer:operaViewProperties:remoteStoriesDataProvider:currentUserId:avatarProvider:resourceDownloader:operaPropertyUpdateModerator:storiesReadReceiptCoordinator:imageFetchingService:snapProUserProfileIdProvider:heroContextCardDataProvider:conversationDestinationParser:snapchatterServices:selectionRecipientObservableRepo:complianceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1062a71b8(double param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
             undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
             undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
             undefined8 param_34,undefined8 param_35,undefined8 param_36,undefined8 param_37,
             undefined8 param_38,undefined8 param_39,undefined8 param_40,undefined8 param_41,
             undefined8 param_42,undefined8 param_43,undefined8 param_44,undefined8 param_45,
             undefined8 param_46,undefined8 param_47,undefined8 param_48,undefined8 param_49,
             undefined8 param_50,undefined8 param_51,undefined8 param_52,undefined8 param_53,
             undefined8 param_54)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined8 *puVar40;
  long lVar41;
  long lVar42;
  byte *pbVar43;
  long lVar44;
  float fVar45;
  double dVar46;
  long lStack_458;
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  puStack_e8 = PTR_PTR_1126f0b58;
  puVar40 = &uStack_f0;
  puVar27 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_f0 = param_2;
  _objc_msgSendSuper2();
  if (puVar40 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    fVar45 = SUB84(param_1,0);
    func_0x00010c021520();
    lVar44 = (long)_DAT_112744c00;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar44);
    *(undefined **)((long)puVar40 + lVar44) = puVar3;
    _objc_release(uVar28);
    _objc_initWeak(auStack_f8,puVar40);
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1062a91dc;
    puStack_108 = &UNK_11091a1c8;
    _objc_copyWeak(auStack_100,auStack_f8);
    lVar4 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = (long)_DAT_112744c2c;
    _objc_retain();
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(long *)((long)puVar40 + lVar32) = lVar4;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c30;
    _objc_retain(param_4);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(long *)((long)puVar40 + lVar32) = param_4;
    _objc_release(uVar28);
    lVar34 = (long)_DAT_112744c34;
    _objc_retain(param_17);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar34);
    *(undefined8 *)((long)puVar40 + lVar34) = param_17;
    _objc_release(uVar28);
    lVar35 = (long)_DAT_112744c38;
    _objc_retain(param_54);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar35);
    *(undefined8 *)((long)puVar40 + lVar35) = param_54;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c3c;
    _objc_retain(param_7);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_7;
    _objc_release(uVar28);
    _objc_storeWeak((long)puVar40 + (long)_DAT_112744c40,param_8);
    lVar32 = (long)_DAT_112744c44;
    _objc_retain(param_9);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_9;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c48;
    _objc_retain(param_10);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_10;
    _objc_release(uVar28);
    uVar28 = param_11;
    _objc_retainBlock();
    uVar29 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744c4c);
    *(undefined8 *)((long)puVar40 + (long)_DAT_112744c4c) = uVar28;
    _objc_release(uVar29);
    lVar32 = (long)_DAT_112744c50;
    _objc_retain(param_6);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_6;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c54;
    _objc_retain(param_15);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_15;
    _objc_release(uVar28);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar28 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744c58);
    *(undefined **)((long)puVar40 + (long)_DAT_112744c58) = puVar3;
    _objc_release(uVar28);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar28 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744c5c);
    *(undefined **)((long)puVar40 + (long)_DAT_112744c5c) = puVar3;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c60;
    _objc_retain(param_16);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_16;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c64;
    _objc_retain(param_19);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_19;
    _objc_release(uVar28);
    lVar36 = (long)_DAT_112744c68;
    _objc_retain(param_20);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar36);
    *(undefined8 *)((long)puVar40 + lVar36) = param_20;
    _objc_release(uVar28);
    puVar3 = PTR_PTR_1126c9540;
    _objc_alloc();
    func_0x00010bff9260();
    lVar41 = (long)_DAT_112744c6c;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar41);
    *(undefined **)((long)puVar40 + lVar41) = puVar3;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c70;
    _objc_retain(param_25);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_25;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c74;
    _objc_retain(param_24);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_24;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c78;
    _objc_retain(param_30);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_30;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c7c;
    _objc_retain(param_31);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_31;
    _objc_release(uVar28);
    lVar37 = (long)_DAT_112744c80;
    _objc_retain(param_32);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar37);
    *(undefined8 *)((long)puVar40 + lVar37) = param_32;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c84;
    _objc_retain(param_33);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_33;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c88;
    _objc_retain(param_34);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_34;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c8c;
    _objc_retain(param_35);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_35;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c90;
    _objc_retain(param_36);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_36;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c94;
    _objc_retain(param_37);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_37;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c98;
    _objc_retain(param_51);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_51;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744c9c;
    _objc_retain(param_53);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_53;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744ca0;
    _objc_retain(param_40);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_40;
    _objc_release(uVar28);
    lVar42 = (long)_DAT_112744ca4;
    _objc_storeWeak((long)puVar40 + lVar42,param_46);
    lVar32 = (long)_DAT_112744ca8;
    _objc_retain(param_45);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_45;
    _objc_release(uVar28);
    lVar38 = (long)_DAT_112744cac;
    _objc_retain(param_38);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar38);
    *(undefined8 *)((long)puVar40 + lVar38) = param_38;
    _objc_release(uVar28);
    uVar28 = param_43;
    func_0x00010bf51e00();
    uVar29 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744cb0);
    *(undefined8 *)((long)puVar40 + (long)_DAT_112744cb0) = uVar28;
    _objc_release(uVar29);
    lVar32 = (long)_DAT_112744cb4;
    _objc_retain(param_49);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_49;
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744cb8;
    _objc_retain(param_39);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_39;
    _objc_release(uVar28);
    uVar29 = *(undefined8 *)((long)puVar40 + lVar38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9500;
    func_0x00010c24c7c0(PTR_PTR_1126c9500);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar29;
    func_0x00010bf1f320();
    *(char *)((long)puVar40 + (long)_DAT_112744cbc) = (char)uVar28;
    _objc_release(puVar3);
    _objc_release(uVar29);
    uVar29 = *(undefined8 *)((long)puVar40 + lVar38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9500;
    func_0x00010c27b8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar29;
    func_0x00010bf1f320();
    *(char *)((long)puVar40 + (long)_DAT_112744cc0) = (char)uVar28;
    _objc_release(puVar3);
    _objc_release(uVar29);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010c24ad80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar28);
    dVar46 = (double)fVar45;
    *(double *)((long)puVar40 + (long)_DAT_112744cc4) = dVar46;
    _objc_release(puVar3);
    fVar45 = SUB84(dVar46,0);
    _objc_release(uVar28);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010c24ad20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar28);
    param_1 = (double)fVar45;
    *(double *)((long)puVar40 + (long)_DAT_112744cc8) = param_1;
    _objc_release(puVar3);
    _objc_release(uVar28);
    lVar32 = (long)_DAT_112744ccc;
    _objc_retain(param_52);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar32);
    *(undefined8 *)((long)puVar40 + lVar32) = param_52;
    _objc_release(uVar28);
    puVar3 = PTR_PTR_1126c9548;
    _objc_alloc();
    func_0x00010c01c9a0();
    uVar28 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744cd0);
    *(undefined **)((long)puVar40 + (long)_DAT_112744cd0) = puVar3;
    _objc_release(uVar28);
    puVar3 = PTR_PTR_1126c9550;
    _objc_alloc();
    func_0x00010c01a500();
    uVar28 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744cd4);
    *(undefined **)((long)puVar40 + (long)_DAT_112744cd4) = puVar3;
    _objc_release(uVar28);
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_1062a96e0;
    puStack_130 = &UNK_11091a1f8;
    _objc_retain(param_6);
    lVar31 = param_4;
    uStack_128 = param_6;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar31;
    func_0x00010c11ac40();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = (long)_DAT_112744cd8;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar39);
    *(long *)((long)puVar40 + lVar39) = lVar32;
    _objc_release(uVar28);
    _objc_release(lVar31);
    _objc_retain(param_4);
    _objc_initWeak(auStack_150,puVar40);
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_1062a9b00;
    puStack_168 = &UNK_11091a228;
    _objc_copyWeak(auStack_158,auStack_150);
    _objc_retain(param_4);
    lVar32 = param_4;
    lStack_160 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar32);
    uVar33 = *(undefined8 *)((long)puVar40 + lVar39);
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_1062a9c44;
    puStack_190 = &UNK_110894700;
    _objc_copyWeak(auStack_188,auStack_150);
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_1062a9e1c;
    puStack_1c0 = &UNK_11085c6a8;
    _objc_copyWeak(auStack_1b0,auStack_150);
    _objc_retain(param_21);
    uStack_1b8 = param_21;
    uVar28 = uVar33;
    func_0x00010c25ff60(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar28);
    func_0x000108f4ae38();
    uVar5 = *(undefined8 *)((long)puVar40 + lVar41);
    func_0x00010bfaa6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar40 + lVar39);
    FUN_1062983a4(uVar6,param_14,*(undefined8 *)((long)puVar40 + lVar44),param_17,param_38);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar33;
    FUN_1062983a4(uVar33,param_14,*(undefined8 *)((long)puVar40 + lVar44),param_17,param_38);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)((long)puVar40 + lVar39);
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar28;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar28);
    puVar3 = PTR_PTR_1126c9558;
    _objc_alloc();
    func_0x00010c033940();
    lVar31 = (long)_DAT_112744cf4;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar31);
    *(undefined **)((long)puVar40 + lVar31) = puVar3;
    _objc_release(uVar28);
    lVar41 = (long)_DAT_112744cf8;
    _objc_retain(param_50);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar41);
    *(undefined8 *)((long)puVar40 + lVar41) = param_50;
    _objc_release(uVar28);
    _objc_copyWeak(auStack_1e0,(long)puVar40 + lVar42);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar8;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_1062aa0c4;
    puStack_1f0 = &UNK_11091a298;
    _objc_copyWeak(auStack_1e8,auStack_1e0);
    uVar28 = uVar29;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar28);
    _objc_release(uVar29);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9560;
    _objc_alloc();
    lVar32 = (long)_DAT_112744d00;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar34);
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    uVar29 = *(undefined8 *)((long)puVar40 + lVar31);
    func_0x00010c247000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0ba0();
    lVar39 = (long)_DAT_112744d08;
    uVar30 = *(undefined8 *)((long)puVar40 + lVar39);
    *(undefined **)((long)puVar40 + lVar39) = puVar3;
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar39));
    uVar29 = *(undefined8 *)((long)puVar40 + lVar36);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar39);
    func_0x00010c0eb120(uVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar29);
    _objc_release(uVar28);
    puVar3 = PTR_PTR_1126c9568;
    _objc_alloc();
    func_0x00010c0338c0();
    lVar39 = (long)_DAT_112744d0c;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar39);
    *(undefined **)((long)puVar40 + lVar39) = puVar3;
    _objc_release(uVar28);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar39));
    puVar3 = PTR_PTR_1126c9570;
    _objc_alloc();
    lVar42 = (long)_DAT_112744d10;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar42);
    func_0x00010c29fae0(uVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033960();
    lVar39 = (long)_DAT_112744d14;
    uVar29 = *(undefined8 *)((long)puVar40 + lVar39);
    *(undefined **)((long)puVar40 + lVar39) = puVar3;
    _objc_release(uVar29);
    _objc_release(uVar28);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar39));
    puVar3 = PTR_PTR_1126c9578;
    _objc_alloc();
    uVar28 = *(undefined8 *)((long)puVar40 + lVar42);
    func_0x00010c29fae0(uVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0338a0();
    uVar29 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744d18);
    *(undefined **)((long)puVar40 + (long)_DAT_112744d18) = puVar3;
    _objc_release(uVar29);
    _objc_release(uVar28);
    puVar3 = PTR_PTR_1126c9580;
    _objc_alloc();
    lVar39 = (long)_DAT_112744ce4;
    func_0x00010c01a4e0();
    lVar42 = (long)_DAT_112744d1c;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar42);
    *(undefined **)((long)puVar40 + lVar42) = puVar3;
    _objc_release(uVar28);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar42));
    if (*(long *)((long)puVar40 + lVar39) != 0x1e) {
      uVar28 = param_39;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar28;
      func_0x00010c132220();
      _objc_release(uVar28);
      if ((int)uVar29 != 0) {
        puVar3 = PTR_PTR_1126c9588;
        _objc_alloc();
        func_0x00010c049be0();
        lVar42 = (long)_DAT_112744d20;
        uVar28 = *(undefined8 *)((long)puVar40 + lVar42);
        *(undefined **)((long)puVar40 + lVar42) = puVar3;
        _objc_release(uVar28);
        func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar42));
      }
    }
    uVar9 = *(undefined8 *)((long)puVar40 + lVar41);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar9;
    func_0x00010bfe0c80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar28;
    func_0x00010c0e0e80(uVar28);
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_1062aa1a4;
    puStack_218 = &UNK_110842c58;
    _objc_copyWeak(auStack_210,auStack_150);
    uVar30 = uVar29;
    func_0x00010c25ff60(uVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(puVar3);
    _objc_release(uVar28);
    _objc_release(uVar9);
    lVar41 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lStack_458 = lVar41;
    if (*(char *)((long)puVar40 + lVar32) == '\x01') {
      pbVar43 = (byte *)((long)puVar40 + (long)_DAT_112744d24);
      *pbVar43 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)((long)puVar40 + lVar34);
      func_0x000108f4b06c();
      pbVar43 = (byte *)((long)puVar40 + (long)_DAT_112744d24);
      *pbVar43 = (byte)iVar2;
      if (iVar2 != 0) {
        uVar28 = uVar8;
        func_0x00010c0b8600(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf41860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar41);
        _objc_release(uVar28);
      }
    }
    lVar32 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_250 = 0xc2000000;
    uStack_248 = 0x1062aa500;
    puStack_240 = &UNK_110842c58;
    _objc_copyWeak(auStack_238,auStack_150);
    lVar41 = lVar32;
    func_0x00010c25ff60(lVar32);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar41);
    puVar3 = PTR_PTR_1126c9590;
    _objc_alloc();
    func_0x00010c04b2c0();
    lVar41 = (long)_DAT_112744d28;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar41);
    *(undefined **)((long)puVar40 + lVar41) = puVar3;
    _objc_release(uVar28);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar41));
    puVar3 = PTR_PTR_1126c9598;
    _objc_alloc();
    lVar41 = param_4;
    func_0x00010c0b8600(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)((long)puVar40 + lVar37);
    func_0x00010c295440(uVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04b200();
    lVar37 = (long)_DAT_112744d2c;
    uVar29 = *(undefined8 *)((long)puVar40 + lVar37);
    *(undefined **)((long)puVar40 + lVar37) = puVar3;
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(lVar41);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar37));
    if ((*pbVar43 & 1) == 0) {
      uVar28 = uVar8;
      func_0x00010c0b8600(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar37 = lStack_458;
      func_0x00010bf41860(lStack_458);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar28);
      puVar3 = PTR_PTR_1126c95a0;
      _objc_alloc();
      func_0x00010c019f20();
      lVar41 = (long)_DAT_112744d30;
      uVar28 = *(undefined8 *)((long)puVar40 + lVar41);
      *(undefined **)((long)puVar40 + lVar41) = puVar3;
      _objc_release(uVar28);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar41));
      _objc_release(lVar37);
    }
    puVar3 = PTR_PTR_1126c95a8;
    _objc_alloc();
    lVar37 = lVar4;
    func_0x00010c0b8600(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ff20();
    uVar28 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744d34);
    *(undefined **)((long)puVar40 + (long)_DAT_112744d34) = puVar3;
    _objc_release(uVar28);
    _objc_release(lVar37);
    puVar3 = PTR_PTR_1126c95b0;
    _objc_alloc();
    uVar28 = *(undefined8 *)((long)puVar40 + lVar31);
    func_0x00010c247000(uVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a4c0();
    lVar31 = (long)_DAT_112744d38;
    uVar29 = *(undefined8 *)((long)puVar40 + lVar31);
    *(undefined **)((long)puVar40 + lVar31) = puVar3;
    _objc_release(uVar29);
    _objc_release(uVar28);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar40 + lVar31));
    puVar3 = PTR_PTR_1126c95b8;
    _objc_alloc();
    func_0x00010c0454e0();
    lVar31 = (long)_DAT_112744d3c;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar31);
    *(undefined **)((long)puVar40 + lVar31) = puVar3;
    _objc_release(uVar28);
    uVar28 = *(undefined8 *)((long)puVar40 + lVar31);
    func_0x00010c18b5e0(uVar28);
    if (*(long *)((long)puVar40 + lVar31) != 0) {
      uVar28 = *(undefined8 *)((long)puVar40 + lVar38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b12d0;
      func_0x00010bfe0e00(PTR_PTR_1126b12d0);
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar28;
      func_0x00010bf1f320();
      _objc_release(puVar3);
      _objc_release(uVar28);
      if ((int)uVar29 != 0) {
        puVar3 = PTR_PTR_1126c95c0;
        _objc_alloc();
        func_0x00010c01a540();
        lVar31 = (long)_DAT_112744d40;
        uVar28 = *(undefined8 *)((long)puVar40 + lVar31);
        *(undefined **)((long)puVar40 + lVar31) = puVar3;
        _objc_release(uVar28);
        uVar28 = *(undefined8 *)((long)puVar40 + lVar31);
        func_0x00010c18b5e0(uVar28);
      }
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar33;
    func_0x00010c0e0ec0(uVar33);
    _objc_retainAutoreleasedReturnValue();
    puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_278 = 0xc2000000;
    pcStack_270 = FUN_1062aa600;
    puStack_268 = &UNK_110850cc8;
    _objc_retain(param_16);
    uStack_260 = param_16;
    uVar30 = uVar29;
    func_0x00010c25ff60(uVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar28 = *(undefined8 *)((long)puVar40 + (long)_DAT_112744d44);
    *(undefined **)((long)puVar40 + (long)_DAT_112744d44) = puVar3;
    _objc_release(uVar28);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    lVar31 = param_4;
    func_0x00010c0e0e60(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_288,auStack_150);
    lVar37 = lVar31;
    func_0x00010c25ff60(lVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar37);
    _objc_release(lVar31);
    _objc_release(puVar3);
    puVar27 = *(undefined8 **)((long)puVar40 + lVar39);
    if ((((undefined *)((long)puVar27 + -0x49) < (undefined *)0x1a) &&
        ((1L << ((ulong)((long)puVar27 + -0x49) & 0x3f) & 0x2020001U) != 0)) ||
       ((uVar1 = (ulong)((long)puVar27 + -0x57) >> 1,
        (uVar1 | (long)((long)puVar27 + -0x57) << 0x3f) < 8 && ((1L << (uVar1 & 0x3f) & 0xb1U) != 0)
        ))) {
      uVar28 = *(undefined8 *)((long)puVar40 + lVar34);
      func_0x000108f4a624(uVar28,puVar27,*(undefined8 *)((long)puVar40 + lVar35));
      _objc_retainAutoreleasedReturnValue();
      lVar31 = (long)_DAT_112744d48;
      uVar29 = *(undefined8 *)((long)puVar40 + lVar31);
      *(undefined8 *)((long)puVar40 + lVar31) = uVar28;
      _objc_release(uVar29);
      iVar2 = (int)*(undefined8 *)((long)puVar40 + lVar31);
      func_0x00010c071800();
      if (iVar2 != 0) {
        uVar28 = *(undefined8 *)((long)puVar40 + lVar36);
        puVar3 = PTR_PTR_1126b2338;
        func_0x00010c0c6900();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_88 = puVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef99a0(uVar28);
        _objc_release(puVar10);
        _objc_release(puVar3);
      }
    }
    uVar28 = *(undefined8 *)((long)puVar40 + lVar36);
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c0c6900();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c9400;
    puStack_e0 = puVar3;
    func_0x00010c2999c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c9400;
    puStack_d8 = puVar10;
    func_0x00010c2999a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b2638;
    puStack_d0 = puVar11;
    func_0x00010c24eb60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b2638;
    puStack_c8 = puVar12;
    func_0x00010bf948a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b2638;
    puStack_c0 = puVar13;
    func_0x00010c2a59e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b2638;
    puStack_b8 = puVar14;
    func_0x00010bf75b40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b2d30;
    puStack_b0 = puVar15;
    func_0x00010bf591c0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126b2ce8;
    puStack_a8 = puVar16;
    func_0x00010c2a68c0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126b2ce8;
    puStack_a0 = puVar17;
    func_0x00010bf750a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126c95c8;
    puStack_98 = puVar18;
    func_0x00010bf98f20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar19;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar28);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar31 = (long)_DAT_112744d4c;
    uVar28 = *(undefined8 *)((long)puVar40 + lVar31);
    *(undefined **)((long)puVar40 + lVar31) = puVar3;
    _objc_release(uVar28);
    func_0x00010bf77520(*(undefined8 *)((long)puVar40 + lVar31));
    _objc_destroyWeak(auStack_288);
    _objc_release(uStack_260);
    _objc_destroyWeak(auStack_238);
    _objc_release(lVar32);
    _objc_release(lStack_458);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(auStack_1e8);
    _objc_destroyWeak(auStack_1e0);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uStack_1b8);
    _objc_destroyWeak(auStack_1b0);
    _objc_release(uVar33);
    _objc_destroyWeak(auStack_188);
    _objc_release(lStack_160);
    _objc_destroyWeak(auStack_158);
    _objc_destroyWeak(auStack_150);
    _objc_release(param_4);
    _objc_release(uStack_128);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f8);
  }
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar40;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_1e8);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume();
  _objc_retain(puVar27);
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained();
  if (param_4 == 0) {
    puVar40 = (undefined8 *)0x0;
  }
  else {
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1f3c0();
    if (((ulong)puVar23 & 1) == 0) {
      *(undefined1 *)(param_4 + _DAT_112744c04) = 0;
    }
    else {
      puVar23 = puVar27;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar23;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar24;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar25;
      func_0x00010bf1f3c0();
      *(byte *)(param_4 + _DAT_112744c04) = (byte)puVar26 ^ 1;
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
    }
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1f3c0();
    *(char *)(param_4 + _DAT_112744c08) = (char)puVar23;
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c93d0;
    func_0x00010c0ea900(PTR_PTR_1126c93d0);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1f3c0();
    *(char *)(param_4 + _DAT_112744c0c) = (char)puVar23;
    _objc_release(puVar22);
    _objc_release(puVar3);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0(puVar27);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(double *)(param_4 + _DAT_112744c10) = param_1;
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1f3c0();
    *(char *)(param_4 + _DAT_112744c14) = (char)puVar23;
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1f3c0();
    *(char *)(param_4 + _DAT_112744c18) = (char)puVar23;
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1f3c0();
    *(char *)(param_4 + _DAT_112744c1c) = (char)puVar23;
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1f3c0();
    *(char *)(param_4 + _DAT_112744c20) = (char)puVar23;
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1f3c0();
    *(char *)(param_4 + _DAT_112744c24) = (char)puVar23;
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar40;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c067fc0();
    *(undefined8 **)(param_4 + _DAT_112744c28) = puVar23;
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar40);
    puVar40 = puVar27;
    func_0x00010c160280(puVar27);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(puVar27);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar40);
  return puVar40;
}



/* Entry: 1062a91dc; end: 1062a96df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062a91dc(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(param_2 + _DAT_112744c04) = 0;
    }
    else {
      uVar3 = param_3;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf1f3c0();
      *(byte *)(param_2 + _DAT_112744c04) = (byte)uVar6 ^ 1;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + _DAT_112744c08) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c93d0;
    func_0x00010c0ea900(PTR_PTR_1126c93d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + _DAT_112744c0c) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(undefined8 *)(param_2 + _DAT_112744c10) = param_1;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + _DAT_112744c14) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + _DAT_112744c18) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + _DAT_112744c1c) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + _DAT_112744c20) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + _DAT_112744c24) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    *(ulong *)(param_2 + _DAT_112744c28) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c160280(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1062a96e0; end: 1062a990f;  */

void FUN_1062a96e0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c24afc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_opt_class();
  uVar6 = uVar8;
  _objc_opt_isKindOfClass();
  uVar1 = uVar8;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar6 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar6 == 0) {
    uVar8 = *(ulong *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010c160280(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaa640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    _objc_retain(uVar6);
    uVar8 = uVar6;
  }
  _objc_release(uVar6);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1062a9910;
  puStack_60 = &UNK_110898ec8;
  uStack_58 = param_2;
  _objc_retain(param_2);
  uVar1 = uVar8;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_2);
  uVar4 = uVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_88 = FUN_1062a9910;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_b0 = uVar1;
    uStack_a8 = uVar6;
    uStack_a0 = uVar8;
    uStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3032000000;
    pcStack_d8 = FUN_1062a9a88;
    uStack_d0 = 0x1062a9a98;
    uStack_c0 = *(undefined8 *)(uVar4 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0d3c80();
    puStack_c8 = puVar5;
    _objc_release(puVar3);
    func_0x00010c0c0800(puVar2);
    uVar6 = puStack_e8[5];
    func_0x00010bf51e00(uVar6);
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(puStack_c8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      lVar7 = 8;
      __Block_object_dispose(&uStack_f0);
      __Unwind_Resume();
      *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = 0;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1062a9910; end: 1062a9a87;  */

void FUN_1062a9910(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1062a9a88;
  uStack_50 = 0x1062a9a98;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  puStack_48 = puVar2;
  _objc_release(puVar1);
  func_0x00010c0c0800(param_2);
  uVar3 = puStack_68[5];
  func_0x00010bf51e00(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_70);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1062a9a88; end: 1062a9ab3;  */

void FUN_1062a9a88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1062a9ab4; end: 1062a9aff;  */

void FUN_1062a9ab4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  puVar1 = PTR_PTR_1126c93c8;
  func_0x00010c0cb140(PTR_PTR_1126c93c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062a9b00; end: 1062a9c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062a9b00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744cdc);
    *(undefined8 *)(param_1 + _DAT_112744cdc) = uVar1;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744ce0;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_2;
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29d360();
    *(undefined8 *)(param_1 + _DAT_112744ce4) = uVar2;
    _objc_release(uVar1);
    func_0x00010beafe00(param_1);
    func_0x00010beb0ec0(param_1);
    func_0x00010beb1400(param_1);
    func_0x00010bdd62c0(param_1);
    func_0x00010bdd6020(param_1);
    func_0x00010bde55e0(param_1);
    func_0x00010bea5320(param_1);
    func_0x00010bea6ce0(param_1);
    func_0x00010beabc40(param_1);
    func_0x00010beb03a0(param_1);
    func_0x00010beae8e0(param_1);
    func_0x00010bed63e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062a9c44; end: 1062a9e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062a9c44(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (uVar1 = param_2, func_0x00010bf529e0(), uVar1 != 2)) {
    uVar6 = 0;
    goto LAB_1062a9df0;
  }
  uVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c93c8;
  _objc_opt_class(PTR_PTR_1126c93c8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c24aec0();
  if (uVar2 == 0) {
LAB_1062a9d34:
    lVar8 = (long)_DAT_112744ce8;
    if (*(long *)(param_1 + lVar8) == 0) {
      lVar7 = *(long *)(param_1 + _DAT_112744cec);
      _objc_retain(lVar7);
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar3;
      _objc_release(uVar6);
      if (lVar7 != 0) {
        func_0x00010c26f380(*(undefined8 *)(param_1 + lVar8));
        uVar6 = *(undefined8 *)(param_1 + _DAT_112744c60);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4f240();
        _objc_release(uVar6);
      }
      _objc_release(lVar7);
    }
    uVar6 = 1;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c24aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c07a1c0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) goto LAB_1062a9d34;
    uVar6 = 0;
  }
  _objc_release(uVar1);
LAB_1062a9df0:
  _objc_release(param_1);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 1062a9e1c; end: 1062aa03f;  */

void FUN_1062a9e1c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c93c0;
    _objc_opt_class(PTR_PTR_1126c93c0);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar6 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar1);
    uVar3 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c93c8;
    _objc_opt_class(PTR_PTR_1126c93c8);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar6;
    func_0x00010c0b3760(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c160280(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010beeeca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2839c0(uVar3);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf0ea40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010c290fa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c160280(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c290fa0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x000108437e88();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed6400(param_1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062aa040; end: 1062aa05f;  */

bool FUN_1062aa040(undefined8 param_1,long param_2)

{
  func_0x00010bf529e0(param_2);
  return param_2 == 2;
}



/* Entry: 1062aa060; end: 1062aa0c3;  */

void FUN_1062aa060(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dfd40(param_2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c93c8;
  _objc_opt_class(PTR_PTR_1126c93c8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062aa0c4; end: 1062aa1a3;  */

void FUN_1062aa0c4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar1 = PTR_PTR_1126b2d20;
    func_0x00010c24c0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bf7e940(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde5700(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1062aa1a4; end: 1062aa1f3;  */

void FUN_1062aa1a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde5700(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062aa1f4; end: 1062aa4b7;  */

void FUN_1062aa1f4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25b7c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  if (lVar3 == 0x24) {
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = lVar1;
    func_0x00010c118b40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    func_0x00010c160280(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar2 = lVar1;
    func_0x000108437448(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1062aa4b8; end: 1062aa5f7;  */

void FUN_1062aa4b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c160280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108437588();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062aa5f8; end: 1062aa5ff;  */

void FUN_1062aa5f8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    puStack_48 = &UNK_1084368d4;
    puStack_40 = &UNK_1084368e4;
    uStack_38 = 0;
    lVar1 = param_2;
    func_0x00010bfa29a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bed40();
    _objc_release(lVar1);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1062aa600; end: 1062aa763;  */

void FUN_1062aa600(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  func_0x00010c0dfd40(param_2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar4 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_2);
  uVar2 = uVar4;
  func_0x00010c0b3760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5d2a0();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c160280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e560(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1062aa764; end: 1062aa9cf; -[SCContextSpotlightViewController _updateCreatorInfoForContextSpotlightCommunication:userId:spotlightRepliesViewCountManager:] */

void FUN_1062aa764(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

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
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c2427c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b4520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126c95d0;
    _objc_alloc();
    lVar4 = param_3;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bf25140(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bf1a980();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010bf1a980(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010c0b4520();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c070480();
    lVar2 = 0;
    if ((int)lVar13 == 0) {
      lVar2 = lVar3;
    }
    func_0x00010c006960(puVar14,param_2,lVar4,lVar5,lVar6,lVar7,lVar9,lVar11,lVar2);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  func_0x00010c284b40(param_5,param_2,puVar14,param_4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar14);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062aa9d0; end: 1062aaacb; -[SCContextSpotlightViewController loadView] */

void FUN_1062aa9d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126c95d8;
  _objc_alloc_init(PTR_PTR_1126c95d8);
  _objc_initWeak(auStack_38,puVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1a8c00(puVar1);
  func_0x00010c222380(param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 1062aaacc; end: 1062aab9b;  */

void FUN_1062aaacc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    uVar2 = 0;
    if (param_1 == 0) goto LAB_1062aab68;
    puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
      _objc_opt_class(PTR__OBJC_CLASS___UIStackView_1126aefe8);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126c95d8;
        _objc_opt_class(PTR_PTR_1126c95d8);
        uVar2 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar1);
        if ((uVar2 & 1) == 0) {
          _objc_retain(param_3);
          uVar2 = param_3;
          goto LAB_1062aab68;
        }
      }
    }
  }
  uVar2 = 0;
LAB_1062aab68:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1062aab9c; end: 1062ac643; -[SCContextSpotlightViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062aab9c(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined *puStack_360;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_112744d4c),param_2,param_1);
  puStack_198 = PTR_PTR_1126f0b58;
  puStack_1a0 = param_1;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_viewDidLoad_112684cd8);
  if (*(long *)(param_1 + _DAT_112744d50) != 0) {
    puVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  if (*(long *)(param_1 + _DAT_112744d54) != 0) {
    puVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  if (*(long *)(param_1 + _DAT_112744d58) != 0) {
    func_0x00010bdc7ea0(param_1);
  }
  puVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar3);
  func_0x00010bead000(param_1);
  puVar3 = PTR_PTR_1126c92b0;
  _objc_alloc();
  func_0x00010c01a8a0(0xc01c000000000000,0xc01c000000000000,0xc01c000000000000,0xc01c000000000000);
  lVar17 = (long)_DAT_112744d5c;
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar3;
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c207380(0x4024000000000000,*(undefined8 *)(param_1 + lVar17));
  puVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar21 = (long)_DAT_112744d60;
  if (*(long *)(param_1 + lVar21) != 0) {
    func_0x00010befa120(puVar3);
  }
  if (param_1[_DAT_112744d00] == '\x01') {
    lVar12 = *(long *)(param_1 + _DAT_112744ce4);
    if (((lVar12 - 0x49U < 0x1a) && ((1L << (lVar12 - 0x49U & 0x3f) & 0x2020001U) != 0)) ||
       ((uVar1 = lVar12 - 0x57U >> 1, (uVar1 | lVar12 - 0x57U << 0x3f) < 8 &&
        ((0xb1U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)))) goto LAB_1062aadb8;
    bVar2 = false;
    if (((0x29 < lVar12 - 0x42U) || ((1L << (lVar12 - 0x42U & 0x3f) & 0x3c000100701U) == 0)) &&
       (lVar12 != 0x17)) {
      bVar2 = true;
    }
  }
  else {
LAB_1062aadb8:
    bVar2 = false;
  }
  lVar12 = (long)_DAT_112744c18;
  if ((param_1[lVar12] & 1) == 0) {
    if (*(long *)(param_1 + _DAT_112744d1c) != 0) {
      func_0x00010befa120(puVar3);
    }
    if (*(long *)(param_1 + _DAT_112744d3c) != 0) {
      func_0x00010befa120(puVar3);
    }
  }
  if ((param_1[_DAT_112744c04] & 1) == 0) {
    func_0x00010befa120(puVar3);
    func_0x00010befa120(puVar3);
  }
  if ((param_1[lVar12] & 1) == 0) {
    if (*(long *)(param_1 + _DAT_112744d64) != 0) {
      func_0x00010befa120(puVar3);
    }
    if (*(long *)(param_1 + _DAT_112744d38) != 0) {
      func_0x00010befa120(puVar3);
    }
  }
  if (((param_1[lVar12] != '\x01') || (param_1[_DAT_112744c20] == '\x01')) &&
     (func_0x00010befa120(puVar3), (param_1[_DAT_112744d24] & 1) == 0)) {
    func_0x00010befa120(puVar3);
  }
  lVar24 = (long)_DAT_112744d2c;
  func_0x00010befa120(puVar3);
  if ((param_1[lVar12] & 1) == 0) {
    if ((param_1[_DAT_112744c14] & 1) == 0) {
      func_0x00010befa120(puVar3);
    }
    if (*(long *)(param_1 + _DAT_112744d18) != 0) {
      func_0x00010befa120(puVar3);
    }
    if (*(long *)(param_1 + _DAT_112744d68) != 0) {
      func_0x00010befa120(puVar3);
    }
  }
  lVar13 = (long)_DAT_112744d20;
  if ((*(long *)(param_1 + lVar13) != 0) && ((param_1[lVar12] & 1) == 0)) {
    func_0x00010befa120(puVar3);
  }
  puVar22 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (bVar2) {
    puVar18 = *(undefined **)(param_1 + lVar21);
    puVar28 = puVar18;
    if (puVar18 == (undefined *)0x0) {
      puVar28 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar27 = *(undefined **)(param_1 + lVar24);
    puVar4 = puVar27;
    puStack_b8 = puVar28;
    if (puVar27 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar25 = *(undefined **)(param_1 + _DAT_112744d18);
    puVar5 = puVar25;
    puStack_b0 = puVar4;
    if (puVar25 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar23 = *(undefined **)(param_1 + _DAT_112744d34);
    puVar6 = puVar23;
    puStack_a8 = puVar5;
    if (puVar23 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar23 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    if (puVar25 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    if (puVar27 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    if (puVar18 == (undefined *)0x0) {
      _objc_release(puVar28);
    }
    puVar28 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_1062ac644;
    puStack_1b0 = &UNK_11091a4d8;
    _objc_retain(puVar22);
    puStack_1a8 = puVar22;
    func_0x00010c1063a0(puVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae5e0(puVar3);
    _objc_release(puVar28);
    _objc_release(puStack_1a8);
    _objc_release(puVar22);
  }
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  _objc_retain(puVar3);
  puVar22 = puVar3;
  func_0x00010bf52a60();
  if (puVar22 != (undefined *)0x0) {
    lVar21 = *plStack_200;
    do {
      puVar28 = (undefined *)0x0;
      do {
        if (*plStack_200 != lVar21) {
          _objc_enumerationMutation(puVar3);
        }
        lVar24 = *(long *)(lStack_208 + (long)puVar28 * 8);
        if ((lVar24 == *(long *)(param_1 + _DAT_112744d1c)) &&
           (*(long *)(param_1 + _DAT_112744d3c) != 0)) {
          if (*(long *)(param_1 + _DAT_112744d40) == 0) {
            func_0x00010bdc7060(param_1);
          }
          else {
            func_0x00010bdc7040(param_1);
          }
        }
        else if (lVar24 != *(long *)(param_1 + _DAT_112744d3c)) {
          func_0x00010bef7700(param_1);
          lVar19 = lVar24;
          func_0x00010c29bf00(lVar24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c219b60();
          _objc_release(lVar19);
          uVar11 = *(undefined8 *)(param_1 + lVar17);
          lVar19 = lVar24;
          func_0x00010c29bf00(lVar24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6d60(uVar11);
          _objc_release(lVar19);
          func_0x00010bf77e80(lVar24);
          if (lVar24 == *(long *)(param_1 + _DAT_112744d0c)) {
            uVar11 = *(undefined8 *)(param_1 + lVar17);
            func_0x00010c29bf00(lVar24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c15cda0(uVar11);
            _objc_release(lVar24);
          }
        }
        puVar28 = puVar28 + 1;
      } while (puVar22 != puVar28);
      puVar22 = puVar3;
      func_0x00010bf52a60();
    } while (puVar22 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  lVar21 = (long)_DAT_112744c78;
  if (*(long *)(param_1 + lVar21) != 0) {
    puStack_238 = &uStack_240;
    uStack_240 = 0;
    uStack_230 = 0x3042000000;
    uStack_228 = 0x1062ac650;
    uStack_220 = 0x1062ac65c;
    _objc_initWeak(auStack_218,0);
    _objc_initWeak(auStack_248,param_1);
    puVar22 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_1062ac664;
    puStack_260 = &UNK_11084d948;
    _objc_copyWeak(auStack_250,auStack_248);
    puStack_280 = &uStack_240;
    puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_298 = 0xc2000000;
    pcStack_290 = FUN_1062ac74c;
    puStack_288 = &UNK_11091a508;
    puStack_258 = puStack_280;
    func_0x00010c0311a0(puVar22);
    puStack_2c8 = &uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c0 = 0x3042000000;
    uStack_2b8 = 0x1062ac650;
    uStack_2b0 = 0x1062ac65c;
    _objc_initWeak(auStack_2a8,0);
    puVar28 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    _objc_copyWeak(auStack_2d8,auStack_248);
    func_0x00010c0311a0(puVar28);
    uVar26 = *(undefined8 *)(param_1 + _DAT_112744c7c);
    uVar11 = *(undefined8 *)(param_1 + _DAT_112744c30);
    func_0x00010c0b8600(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf234a0(uVar26);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar21));
    _objc_release(uVar26);
    _objc_release(puVar28);
    _objc_destroyWeak(auStack_2d8);
    __Block_object_dispose(&uStack_2d0,8);
    _objc_destroyWeak(auStack_2a8);
    _objc_release(puVar22);
    _objc_destroyWeak(auStack_250);
    _objc_destroyWeak(auStack_248);
    __Block_object_dispose(&uStack_240,8);
    _objc_destroyWeak(auStack_218);
  }
  lVar21 = (long)_DAT_112744d08;
  func_0x00010bef7700(param_1);
  uVar11 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar11);
  puVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar22);
  _objc_release(uVar11);
  _objc_release(puVar22);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar21));
  dVar30 = 0.0;
  if (param_1[_DAT_112744c08] == '\0') {
    dVar30 = 1.0;
  }
  uVar11 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(dVar30);
  _objc_release(uVar11);
  if (param_1[lVar12] == '\x01') {
    puVar22 = PTR_PTR_1126c95e0;
    _objc_alloc();
    dVar30 = *(double *)PTR__CGRectZero_110347608;
    func_0x00010c013de0(dVar30,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar24 = (long)_DAT_112744d6c;
    uVar11 = *(undefined8 *)(param_1 + lVar24);
    *(undefined **)(param_1 + lVar24) = puVar22;
    _objc_release(uVar11);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar24));
    func_0x00010c201600(*(undefined8 *)(param_1 + lVar24));
    puVar22 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar22);
    uVar26 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_112744d70;
    uVar14 = *(undefined8 *)(param_1 + lVar19);
    *(undefined8 *)(param_1 + lVar19) = uVar11;
    _objc_release(uVar14);
    _objc_release(puVar28);
    _objc_release(puVar22);
    _objc_release(uVar26);
    puVar22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar14 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar28;
    func_0x00010c08de00(puVar28);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar24);
    uStack_150 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = *(undefined8 *)(param_1 + lVar19);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_148 = uVar26;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar22);
    _objc_release(puVar5);
    _objc_release(uVar26);
    _objc_release(puVar27);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(puVar18);
    _objc_release(puVar28);
    _objc_release(uVar14);
    lVar19 = (long)_DAT_112744d1c;
    puVar22 = *(undefined **)(param_1 + lVar19);
    if (puVar22 == (undefined *)0x0) {
      puVar22 = *(undefined **)(param_1 + _DAT_112744d3c);
      if (puVar22 == (undefined *)0x0) goto LAB_1062ab8d8;
      plVar20 = (long *)(param_1 + _DAT_112744d40);
      if (*plVar20 == 0) goto LAB_1062ab938;
LAB_1062ab8b8:
      func_0x00010bef7700(param_1);
      puStack_360 = (undefined *)*plVar20;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      plVar20 = (long *)(param_1 + _DAT_112744d40);
      if (*plVar20 != 0) goto LAB_1062ab8b8;
      if (*(long *)(param_1 + _DAT_112744d3c) == 0) {
LAB_1062ab938:
        _objc_retain(puVar22);
        func_0x00010bef7700(param_1);
        puStack_360 = puVar22;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar22);
      }
      else {
        puStack_360 = param_1;
        func_0x00010bdd6360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed93c0(param_1);
      }
    }
    func_0x00010c219b60(puStack_360);
    puStack_348 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    func_0x00010c16e060(puStack_348);
    func_0x00010c166c00(puStack_348);
    func_0x00010c219b60(puStack_348);
    func_0x00010bef6d60(puStack_348);
    puVar22 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar22);
    puVar22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar28 = puStack_348;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar18;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar28;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puStack_348;
    puStack_168 = puVar27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar25;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar5;
    func_0x00010bf49520(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_348;
    puStack_160 = puVar23;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c274200(uVar11);
    _objc_retainAutoreleasedReturnValue();
    dVar30 = -8.0;
    puVar9 = puVar7;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_158 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar22);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(puVar23);
    _objc_release(puVar6);
    _objc_release(puVar25);
    _objc_release(puVar5);
    _objc_release(puVar27);
    _objc_release(puVar4);
    _objc_release(puVar18);
    _objc_release(puVar28);
    lVar24 = *plVar20;
    if (*plVar20 == 0) {
      lVar24 = *(long *)(param_1 + _DAT_112744d3c);
      if ((*(long *)(param_1 + lVar19) == 0) ||
         (lVar24 = *(long *)(param_1 + lVar19), *(long *)(param_1 + _DAT_112744d3c) == 0))
      goto LAB_1062abb80;
    }
    else {
LAB_1062abb80:
      func_0x00010bf77e80(lVar24);
    }
    _objc_release(puStack_360);
  }
  else {
LAB_1062ab8d8:
    puStack_348 = (undefined *)0x0;
  }
  func_0x00010bdd5480(param_1);
  dVar31 = -8.0;
  if (param_1[_DAT_112744c14] == '\0') {
    dVar31 = 0.0;
  }
  dVar32 = *(double *)(param_1 + _DAT_112744cc8);
  uVar14 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar11;
  func_0x00010bf493c0(dVar31 - dVar32);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112744d74;
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  *(undefined8 *)(param_1 + lVar19) = uVar26;
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar14);
  param_1[_DAT_112744d78] = 0;
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar14;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112744d7c;
  uVar15 = *(undefined8 *)(param_1 + lVar24);
  *(undefined8 *)(param_1 + lVar24) = uVar26;
  _objc_release(uVar15);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar14);
  uVar26 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar26;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112744d80);
  *(undefined8 *)(param_1 + _DAT_112744d80) = uVar11;
  _objc_release(uVar14);
  _objc_release(puVar28);
  _objc_release(puVar22);
  _objc_release(uVar26);
  uVar14 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar11;
  func_0x00010bf493c0(-*(double *)(param_1 + _DAT_112744cc4));
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112744d84;
  uVar8 = *(undefined8 *)(param_1 + lVar21);
  *(undefined8 *)(param_1 + lVar21) = uVar26;
  _objc_release(uVar8);
  _objc_release(puVar28);
  _objc_release(puVar22);
  _objc_release(uVar11);
  _objc_release(uVar14);
  puVar22 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar22;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  puStack_340 = puVar28;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar28);
  _objc_release(puVar22);
  if (param_1[lVar12] == '\x01') {
    puVar22 = puStack_348;
    if (puStack_348 == (undefined *)0x0) {
      puVar22 = *(undefined **)(param_1 + _DAT_112744d6c);
    }
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar22);
    _objc_release(puStack_340);
    _objc_release(puVar22);
    puStack_340 = puVar22;
  }
  puVar22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar28;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  uStack_190 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar30 = -dVar30;
  uVar26 = uVar8;
  func_0x00010bf493c0(dVar30);
  _objc_retainAutoreleasedReturnValue();
  uStack_180 = *(undefined8 *)(param_1 + lVar21);
  uStack_178 = *(undefined8 *)(param_1 + lVar24);
  uStack_170 = *(undefined8 *)(param_1 + lVar19);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_188 = uVar26;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar22);
  _objc_release(puVar4);
  _objc_release(uVar26);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(puVar18);
  _objc_release(puVar28);
  _objc_release(uVar14);
  func_0x00010bea4340(param_1);
  func_0x00010be14e00(param_1);
  lVar17 = (long)_DAT_112744cac;
  uVar26 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar26;
  func_0x00010c24b3a0();
  _objc_release(uVar26);
  lVar12 = *(long *)(param_1 + _DAT_112744ce4);
  lVar21 = (long)_DAT_112744d88;
  param_1[lVar21] = lVar12 == 0x62;
  if (lVar12 == 0x62) {
    puVar22 = PTR_PTR_1126c95e8;
    _objc_alloc();
    fVar29 = SUB84(dVar30,0);
    puVar28 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c0e00;
    func_0x00010c2695a0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar26);
    uVar14 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0e00;
    func_0x00010c2829c0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320(uVar14);
    uVar8 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR_PTR_1126c0e00;
    func_0x00010c2695c0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320(uVar8);
    uVar15 = *(undefined8 *)(param_1 + _DAT_112744ce0);
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    dVar30 = (double)fVar29;
    func_0x00010c033e20(dVar30);
    lVar12 = (long)_DAT_112744d8c;
    uVar16 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar22;
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(puVar27);
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(uVar14);
    _objc_release(puVar18);
    _objc_release(uVar26);
    _objc_release(puVar28);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
  }
  func_0x00010c100240(PTR_PTR_1126c95f0);
  uVar26 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c269d40(uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126c0e00;
  func_0x00010c100280(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(uVar26);
  _objc_release(puVar22);
  _objc_release(uVar26);
  uVar26 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c269d40(uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126c0e00;
  func_0x00010c1002c0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(uVar26);
  _objc_release(puVar22);
  _objc_release(uVar26);
  puVar22 = PTR_PTR_1126c95f8;
  _objc_alloc();
  puVar28 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(param_1 + _DAT_112744c68);
  lVar12 = (long)_DAT_112744ce0;
  uVar26 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c0ea8e0(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033e00((float)dVar30,0x3e4ccccd);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112744d90);
  *(undefined **)(param_1 + _DAT_112744d90) = puVar22;
  _objc_release(uVar14);
  _objc_release(uVar26);
  _objc_release(puVar28);
  puVar22 = PTR_PTR_1126c9600;
  func_0x00010bf2c860();
  if ((int)puVar22 == 0) goto LAB_1062ac440;
  if (param_1[lVar21] == '\x01') {
    lVar21 = (long)_DAT_112744d8c;
    puVar22 = *(undefined **)(param_1 + lVar21);
    func_0x00010bf9dea0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar22 == (undefined *)0x0) goto LAB_1062ac380;
    puVar28 = *(undefined **)(param_1 + lVar21);
    func_0x00010bf9dea0(puVar28);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(puVar28);
  }
  else {
LAB_1062ac380:
    puVar28 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar22 = puVar28;
  }
  _objc_release(puVar22);
  puVar22 = PTR_PTR_1126c9600;
  _objc_alloc();
  if ((int)uVar11 == 0) {
    func_0x00010bfee500();
  }
  else {
    func_0x00010bfee960();
  }
  uVar11 = *(undefined8 *)(param_1 + _DAT_112744d94);
  *(undefined **)(param_1 + _DAT_112744d94) = puVar22;
  _objc_release(uVar11);
  _objc_release(puVar28);
LAB_1062ac440:
  func_0x00010bed63e0(param_1);
  func_0x00010bdc8160(param_1);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112744d28);
  puVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181b20(uVar11);
  _objc_release(puVar22);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112744d18);
  puVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181b20(uVar11);
  _objc_release(puVar22);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112744d68);
  puVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181b20(uVar11);
  _objc_release(puVar22);
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  puVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181a20(uVar11);
  _objc_release(puVar22);
  func_0x00010c125780(*(undefined8 *)(param_1 + _DAT_112744d10));
  func_0x00010beabf80(param_1);
  func_0x00010beb0cc0(param_1);
  _objc_release(puStack_340);
  _objc_release(puStack_348);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    _objc_destroyWeak(lVar12 + 0x28);
    __Block_object_dispose(&uStack_2d0,8);
    _objc_destroyWeak(puVar4 + 0x28);
    _objc_destroyWeak(lVar17 + 0x28);
    _objc_destroyWeak(auStack_248);
    uVar11 = 8;
    __Block_object_dispose(&uStack_240,8);
    _objc_destroyWeak(auStack_218);
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar3 + 0x20),PTR_s_containsObject__1125b07e8,uVar11);
    return;
  }
  return;
}



/* Entry: 1062ac644; end: 1062ac663;  */

void FUN_1062ac644(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 1062ac664; end: 1062ac74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ac664(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_storeWeak(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28,param_2);
    func_0x00010bef7700(lVar1);
    lVar4 = (long)_DAT_112744d5c;
    uVar3 = *(undefined8 *)(lVar1 + lVar4);
    uVar2 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066580(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(lVar1 + lVar4);
    uVar2 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1887e0(0,uVar3);
    _objc_release(uVar2);
    func_0x00010bf77e80(param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062ac74c; end: 1062ac7eb;  */

void FUN_1062ac74c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2a6740(lVar1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c12c8e0(lVar1);
    _objc_storeWeak(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062ac7ec; end: 1062acc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ac7ec(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
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
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _objc_storeWeak(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28,param_2);
    func_0x00010bef7700(lVar2);
    lVar3 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(lVar3);
    lVar25 = (long)_DAT_112744d08;
    lVar4 = *(long *)(lVar2 + lVar25);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == lVar5) {
      uVar7 = *(undefined8 *)(lVar2 + lVar25);
      func_0x00010c29bf00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(lVar4);
      _objc_release(uVar7);
    }
    else {
      func_0x00010befbb60(lVar4);
    }
    _objc_release(lVar6);
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar5;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar9;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar14;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar19;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar23);
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
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar25);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00010bf77e80(param_2);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c2a6740(lVar2);
    lVar24 = *(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28;
    _objc_loadWeakRetained(lVar24);
    lVar3 = lVar24;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar3);
    _objc_release(lVar24);
    func_0x00010c12c8e0(lVar2);
    _objc_storeWeak(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1062acc34; end: 1062accd3;  */

void FUN_1062acc34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2a6740(lVar1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c12c8e0(lVar1);
    _objc_storeWeak(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062accd4; end: 1062accdb;  */

void FUN_1062accd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ea8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_operaPage_112618450);
  return;
}



/* Entry: 1062accdc; end: 1062acce7; -[SCContextSpotlightViewController pageDidChangeResizingState:] */

void FUN_1062accdc(undefined8 param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(param_3 ^ 1),param_1,PTR_s__animateUIElements__112550660);
  return;
}



/* Entry: 1062acce8; end: 1062acd3f; -[SCContextSpotlightViewController _addHeroContextRowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062acce8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744d5c);
  lVar1 = param_1;
  func_0x00010bdd6360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed93d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateHeroContextRowVisibility_112593e98);
  return;
}



/* Entry: 1062acd40; end: 1062acf73; -[SCContextSpotlightViewController _buildHeroContextRowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062acd40(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar6 = (long)_DAT_112744d98;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar5);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c207380(0x4024000000000000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar6),param_2,3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744cac);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b12d0;
  func_0x00010c0b61e0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f320(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar4);
  bVar2 = (int)uVar5 == 0;
  lVar7 = 0x13c;
  if (bVar2) {
    lVar7 = 0x11c;
  }
  lVar1 = 0x11c;
  if (bVar2) {
    lVar1 = 0x13c;
  }
  lVar7 = (long)*(int *)(&DAT_112744c00 + lVar7);
  func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(uVar4,param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  lVar7 = (long)*(int *)(&DAT_112744c00 + lVar1);
  func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(uVar4,param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c219b60();
  func_0x00010c181f00(0x437a0000,puVar3,param_2,0);
  func_0x00010c181cc0(0x437a0000,puVar3,param_2,0);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,puVar3);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1062acf74; end: 1062ad007; -[SCContextSpotlightViewController _addHeroContextRowContainerViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062acf74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112744d40;
  func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744d5c);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf77e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_didMoveToParentViewController__1125bb948,param_1
            );
  return;
}



/* Entry: 1062ad008; end: 1062ad08b; -[SCContextSpotlightViewController _updateHeroContextRowVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ad008(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744d1c);
  func_0x00010c071780();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744d3c);
    func_0x00010c071780();
  }
  lVar3 = (long)_DAT_112744d98;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c074c20();
  if ((int)uVar2 != iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar3),PTR_s_setHidden__1126479f8,uVar2);
    return;
  }
  return;
}



/* Entry: 1062ad08c; end: 1062ad0a3; -[SCContextSpotlightViewController _isOneTapToShareEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1062ad08c(long param_1)

{
  return *(long *)(param_1 + _DAT_112744ce4) == 0x62;
}



/* Entry: 1062ad0a4; end: 1062ad11b; -[SCContextSpotlightViewController _isOneTapToShareIncludeGroupsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062ad0a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744cac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b12d0;
  func_0x00010c0e8980(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1062ad11c; end: 1062ad48b; -[SCContextSpotlightViewController _setupDebugOverlayLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ad11c(undefined1 *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined **unaff_x23;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[_DAT_112744cbc] == '\x01') {
    puVar1 = PTR_PTR_1126c9608;
    _objc_alloc_init();
    lVar14 = (long)_DAT_112744d9c;
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar1;
    _objc_release(uVar13);
    puVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    uStack_80 = uVar13;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar14);
    uStack_78 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf49520(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar15);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar2 = auStack_88;
    _objc_initWeak(puVar2,param_1);
    uVar15 = *(undefined8 *)(param_1 + _DAT_112744c2c);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1062ad48c;
    puStack_98 = &UNK_110919648;
    unaff_x23 = &puStack_b0;
    param_2 = auStack_88;
    _objc_copyWeak(auStack_90,param_2);
    uVar13 = uVar15;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar13);
    _objc_release(uVar15);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_90);
    param_1 = auStack_88;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_2;
    func_0x0001084372fc(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c27b9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cf80(*(undefined8 *)(param_1 + _DAT_112744d9c));
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062ad48c; end: 1062ad51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ad48c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x0001084372fc(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c27b9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cf80(*(undefined8 *)(param_1 + _DAT_112744d9c));
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062ad520; end: 1062ad897; -[SCContextSpotlightViewController _setupTrendSourceDebugOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ad520(undefined1 *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined **unaff_x23;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[_DAT_112744cc0] == '\x01') {
    puVar1 = PTR_PTR_1126c9610;
    _objc_alloc_init();
    lVar14 = (long)_DAT_112744da0;
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar1;
    _objc_release(uVar13);
    puVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    uStack_80 = uVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493c0(0x4059000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar14);
    uStack_78 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf49520(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar15);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar2 = auStack_88;
    _objc_initWeak(puVar2,param_1);
    uVar15 = *(undefined8 *)(param_1 + _DAT_112744c2c);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1062ad898;
    puStack_98 = &UNK_110919648;
    unaff_x23 = &puStack_b0;
    param_2 = auStack_88;
    _objc_copyWeak(auStack_90,param_2);
    uVar13 = uVar15;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar13);
    _objc_release(uVar15);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_90);
    param_1 = auStack_88;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_2;
    func_0x0001084372fc(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + _DAT_112744da0);
    puVar4 = puVar2;
    func_0x00010c27ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cfa0(uVar13);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062ad898; end: 1062ad937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ad898(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x0001084372fc(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744da0);
    uVar2 = uVar1;
    func_0x00010c27ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cfa0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062ad938; end: 1062ada4b; -[SCContextSpotlightViewController _addScrubberVCIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ad938(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c9618;
  func_0x00010c071860(PTR_PTR_1126c9618,param_2,*(undefined8 *)(param_1 + _DAT_112744ce0));
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126c9618;
    _objc_alloc();
    lVar2 = param_1 + _DAT_112744ca4;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c031e00();
    lVar4 = (long)_DAT_112744da4;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    func_0x00010bef7700(param_1);
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf77e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar4),PTR_s_didMoveToParentViewController__1125bb948,
               param_1);
    return;
  }
  return;
}



/* Entry: 1062ada4c; end: 1062add63; -[SCContextSpotlightViewController _setupHeroContextMenuOverlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ada4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar9 = (long)_DAT_112744da8;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_98 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  lStack_a8 = lVar3;
  lStack_88 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_b8 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  uStack_80 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar9 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1062add64;
  lStack_f0 = lVar3;
  lStack_e8 = lVar2;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c2a5e40(*(undefined8 *)(lVar9 + _DAT_112744d4c));
  puStack_f8 = PTR_PTR_1126f0b58;
  lStack_100 = lVar9;
  _objc_msgSendSuper2(&lStack_100,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1062add64; end: 1062addb7; -[SCContextSpotlightViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062add64(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_112744d4c),param_2,param_1);
  puStack_28 = PTR_PTR_1126f0b58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1062addb8; end: 1062ade17; -[SCContextSpotlightViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062addb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e740(*(undefined8 *)(param_1 + _DAT_112744d4c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f0b58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 1062ade18; end: 1062adf7b; -[SCContextSpotlightViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ade18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_112744d4c),param_2,param_1,param_3);
  puStack_38 = PTR_PTR_1126f0b58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  lVar4 = (long)_DAT_112744cec;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744c60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4f200();
    _objc_release(uVar3);
  }
  if (*(long *)(param_1 + _DAT_112744d90) != 0) {
    func_0x00010c15bee0();
  }
  if (*(long *)(param_1 + _DAT_112744d8c) != 0) {
    func_0x00010c15bee0();
  }
  if ((*(byte *)(param_1 + _DAT_112744d88) & 1) == 0) {
    lVar4 = (long)_DAT_112744d94;
    if (*(long *)(param_1 + lVar4) != 0) {
      lVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bfc1d20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15cda0(lVar2);
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
  }
  return;
}



/* Entry: 1062adf7c; end: 1062adfdb; -[SCContextSpotlightViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062adf7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_112744d4c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f0b58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 1062adfdc; end: 1062ae03b; -[SCContextSpotlightViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062adfdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_112744d4c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f0b58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 1062ae03c; end: 1062ae0af; -[SCContextSpotlightViewController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae03c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_112744d4c),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_1126f0b58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 1062ae0b0; end: 1062ae103; -[SCContextSpotlightViewController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae0b0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_112744d4c),param_2,param_1);
  puStack_28 = PTR_PTR_1126f0b58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 1062ae104; end: 1062ae17f; -[SCContextSpotlightViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744d4c);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_1126f0b58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1062ae180; end: 1062ae1fb; -[SCContextSpotlightViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744d4c);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_1126f0b58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1062ae1fc; end: 1062ae51b; -[SCContextSpotlightViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae1fc(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126f0b58;
  lStack_c0 = param_5;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar10 = (long)_DAT_112744d70;
  if (*(long *)(param_5 + lVar10) != 0) {
    lVar9 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar9;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    _objc_release(lVar1);
    _objc_release(lVar9);
    func_0x00010bf49220(*(undefined8 *)(param_5 + lVar10));
    if (param_1 != -param_3) {
      func_0x00010c181140(*(undefined8 *)(param_5 + lVar10));
    }
  }
  func_0x00010bedb0e0(param_5);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  lVar11 = (long)_DAT_112744d50;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar11));
  lVar1 = *(long *)(param_5 + lVar11);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar10;
  func_0x00010bf529e0();
  _objc_release(lVar10);
  _objc_release(lVar1);
  dVar12 = (param_4 + -210.0) / param_4;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar9 == 5) {
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5458;
    func_0x00010c0df720(80.0 / param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_88 = puVar3;
    func_0x00010c0df720(dVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar4;
    func_0x00010c0df720((param_4 + -140.0) / param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184900;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010bfcd9c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar2);
  }
  else {
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5458;
    func_0x00010c0df720(80.0 / param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar3;
    func_0x00010c0df720(dVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184900;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_5 + lVar11);
    func_0x00010bfcd9c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_5 + _DAT_112744d54);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x00010bf42760();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_112744d3c;
  if ((*(long *)(puVar3 + lVar10) != 0) && (*(long *)(puVar3 + _DAT_112744d98) != 0)) {
    lVar9 = (long)_DAT_112744d1c;
    uVar7 = *(ulong *)(puVar3 + lVar9);
    func_0x00010c071780();
    if ((uVar7 & 1) == 0) {
      uVar2 = *(undefined8 *)(puVar3 + lVar9);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      dVar12 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
      func_0x00010c267040(dVar12,*(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8));
      bVar8 = 0.0 < dVar12;
      _objc_release(uVar2);
    }
    else {
      bVar8 = false;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c286950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar3 + lVar10),PTR_s_updateInlineLabelCollapseForAdja_11267f478,
               bVar8);
    return;
  }
  return;
}



/* Entry: 1062ae51c; end: 1062ae5c7; -[SCContextSpotlightViewController _updateMadeOnSnapchatInlineLabelCollapse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae51c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = (long)_DAT_112744d3c;
  if ((*(long *)(param_1 + lVar5) != 0) && (*(long *)(param_1 + _DAT_112744d98) != 0)) {
    lVar4 = (long)_DAT_112744d1c;
    uVar1 = *(ulong *)(param_1 + lVar4);
    func_0x00010c071780();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      dVar6 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
      func_0x00010c267040(dVar6,*(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8));
      bVar3 = 0.0 < dVar6;
      _objc_release(uVar2);
    }
    else {
      bVar3 = false;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c286950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar5),PTR_s_updateInlineLabelCollapseForAdja_11267f478,
               bVar3);
    return;
  }
  return;
}



/* Entry: 1062ae5c8; end: 1062ae62f; -[SCContextSpotlightViewController doubleTapToLikeGestureController:didRequestPerformingAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae5c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744d08);
  _objc_retain(param_4);
  func_0x00010c1af9a0(uVar1,param_2,1,1);
  func_0x00010c0f80a0(param_1,param_2,param_4,8,8,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062ae630; end: 1062ae6cf; -[SCContextSpotlightViewController performAction:contextMenuType:actionType:interactionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744d10);
  _objc_retain(param_3);
  func_0x00010bf78360(uVar2,param_2,param_3);
  puVar1 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  func_0x00010bff0a60();
  func_0x00010be250c0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062ae6d0; end: 1062ae7a7; -[SCContextSpotlightViewController _handleAction:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae6d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112744dac;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744c3c);
    func_0x00010bf544e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar3);
    lVar1 = param_1 + _DAT_112744c40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010bfd0040(lVar1,param_2,param_3,param_4,param_1,0,&PTR___NSConcreteGlobalBlock_11091a558
                     );
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062ae7a8; end: 1062ae7ab;  */

void FUN_1062ae7a8(void)

{
  return;
}



/* Entry: 1062ae7ac; end: 1062aeabf; -[SCContextSpotlightViewController actionMetricsForParams:response:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ae7ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_4;
  func_0x00010c24aec0();
  if (lVar2 != 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar2 = param_4;
    func_0x00010c24aea0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_1b0;
    lVar14 = lVar2;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar19 = *plStack_1a0;
      do {
        lVar16 = 0;
        do {
          if (*plStack_1a0 != lVar19) {
            _objc_enumerationMutation(lVar2);
          }
          uVar17 = *(undefined8 *)(lStack_1a8 + lVar16 * 8);
          uVar15 = uVar17;
          func_0x00010bfd3a00();
          if ((int)uVar15 != 0) {
            uVar15 = uVar17;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar15;
            func_0x00010bfd91c0();
            _objc_release(uVar15);
            if ((int)uVar3 != 0) {
              func_0x00010beedca0();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar17;
              func_0x00010c0ccaa0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              _objc_release(uVar15);
              _objc_release(uVar17);
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar14 != lVar16);
        param_3 = &uStack_1b0;
        lVar14 = lVar2;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010bfdee00();
  if (lVar2 != 0) {
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    lVar2 = param_4;
    func_0x00010bfdede0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_1f0;
    lVar14 = lVar2;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar19 = *plStack_1e0;
      do {
        lVar16 = 0;
        do {
          if (*plStack_1e0 != lVar19) {
            _objc_enumerationMutation(lVar2);
          }
          lVar18 = *(long *)(lStack_1e8 + lVar16 * 8);
          lVar4 = lVar18;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          if (lVar5 != 0) {
            puVar6 = PTR_PTR_1126b6248;
            func_0x00010c0cb140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            puVar7 = PTR_PTR_1126b5c68;
            func_0x00010c2751c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c161fe0(puVar6);
            _objc_release(puVar7);
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1619e0(puVar6);
            _objc_release(lVar18);
            func_0x00010befa120(puVar1);
            _objc_release(puVar6);
          }
          lVar16 = lVar16 + 1;
        } while (lVar14 != lVar16);
        param_3 = &uStack_1f0;
        lVar14 = lVar2;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    _objc_release(lVar2);
  }
  puVar6 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b1198;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_112744d50;
  lVar2 = param_4;
  if (*(long *)(param_4 + lVar19) == 0) {
    _objc_retain(param_3);
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_4 + lVar19);
    *(undefined **)(param_4 + lVar19) = puVar1;
    _objc_release(uVar15);
    func_0x00010c21e900(*(undefined8 *)(param_4 + lVar19));
    puVar8 = param_3;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar9 = puVar8;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c25b720();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (puVar10 == (undefined8 *)0x4) {
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fd147ae147ae148);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fe999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_4 + lVar19);
      func_0x00010bfcd9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
      _objc_release(uVar15);
    }
    else {
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fe3333333333333);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = *(undefined **)(param_4 + lVar19);
      func_0x00010bfcd9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_4 + lVar19));
    lVar19 = param_4;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar19;
    _objc_release();
    if (lVar19 != 0) {
      lVar2 = param_4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0();
      _objc_release(lVar2);
      func_0x00010bea4340();
      lVar2 = param_4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_112744d54;
  lVar14 = lVar2;
  if (*(long *)(lVar2 + lVar16) == 0) {
    puVar1 = PTR_PTR_1126b1198;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(lVar2 + lVar16);
    *(undefined **)(lVar2 + lVar16) = puVar1;
    _objc_release(uVar15);
    func_0x00010c1a7f60(*(undefined8 *)(lVar2 + lVar16));
    func_0x00010c21e900(*(undefined8 *)(lVar2 + lVar16));
    func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar16));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar2 + lVar16);
    func_0x00010bfcd9c0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar15);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    uVar15 = *(undefined8 *)(lVar2 + lVar16);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar15);
    _objc_release(puVar1);
    lVar16 = lVar2;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar16;
    _objc_release();
    if (lVar16 != 0) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0();
      _objc_release();
      lVar14 = lVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar14 + _DAT_112744d28),PTR_s_collapseDescriptionIfNecessary_1125ad830
            );
  return;
}



/* Entry: 1062aeac0; end: 1062aee2b; -[SCContextSpotlightViewController _buildGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062aeac0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126b1198;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112744d50;
  lVar2 = param_1;
  if (*(long *)(param_1 + lVar12) == 0) {
    _objc_retain(param_3);
    _objc_alloc_init();
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar1;
    _objc_release(uVar10);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar12));
    lVar2 = param_3;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar11 = lVar2;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010c25b720();
    _objc_release(lVar11);
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (lVar3 == 4) {
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fd147ae147ae148);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fe999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010bfcd9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
      _objc_release(uVar10);
    }
    else {
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fe3333333333333);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = *(undefined **)(param_1 + lVar12);
      func_0x00010bfcd9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
    lVar12 = param_1;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar12;
    _objc_release();
    if (lVar12 != 0) {
      lVar2 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0();
      _objc_release(lVar2);
      func_0x00010bea4340();
      lVar2 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112744d54;
  lVar9 = lVar2;
  if (*(long *)(lVar2 + lVar11) == 0) {
    puVar1 = PTR_PTR_1126b1198;
    _objc_alloc_init();
    uVar10 = *(undefined8 *)(lVar2 + lVar11);
    *(undefined **)(lVar2 + lVar11) = puVar1;
    _objc_release(uVar10);
    func_0x00010c1a7f60(*(undefined8 *)(lVar2 + lVar11));
    func_0x00010c21e900(*(undefined8 *)(lVar2 + lVar11));
    func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar11));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar2 + lVar11);
    func_0x00010bfcd9c0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    uVar10 = *(undefined8 *)(lVar2 + lVar11);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar10);
    _objc_release(puVar1);
    lVar11 = lVar2;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    _objc_release();
    if (lVar11 != 0) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0();
      _objc_release();
      lVar9 = lVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar9 + _DAT_112744d28),PTR_s_collapseDescriptionIfNecessary_1125ad830)
  ;
  return;
}



/* Entry: 1062aee2c; end: 1062af07b; -[SCContextSpotlightViewController _buildDescriptionBackgroundGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062aee2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112744d54;
  lVar6 = param_1;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar1 = PTR_PTR_1126b1198;
    _objc_alloc_init();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar8);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar9));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bfcd9c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar8);
    _objc_release(puVar1);
    lVar9 = param_1;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    _objc_release();
    if (lVar9 != 0) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0();
      _objc_release();
      lVar6 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar6 + _DAT_112744d28),PTR_s_collapseDescriptionIfNecessary_1125ad830)
  ;
  return;
}



/* Entry: 1062af07c; end: 1062af08b; -[SCContextSpotlightViewController didTapGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062af07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d28),
             PTR_s_collapseDescriptionIfNecessary_1125ad830);
  return;
}



/* Entry: 1062af08c; end: 1062af5d7; -[SCContextSpotlightViewController _setGradientViewAutoLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062af08c(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 unaff_x22;
  long lVar10;
  long unaff_x24;
  undefined8 uVar11;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112744d50;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010bf495c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = lVar2;
  _objc_release();
  if (lVar3 == 0) {
    uVar11 = 0x4022000000000000;
    if (*(char *)(param_1 + _DAT_112744c14) == '\0') {
      uVar11 = 0;
    }
    puStack_f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar4 = *(long *)(param_1 + lVar10);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    lStack_d0 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_c8 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar3;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    lStack_e0 = lVar4;
    lStack_a0 = lVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    uStack_f0 = uVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = lVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_100 = lVar3;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    uStack_108 = uVar5;
    uStack_98 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = uVar6;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    uStack_90 = unaff_x22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x24;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf493c0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar8;
    func_0x00010beef8c0(puStack_f8);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(unaff_x24);
    _objc_release(uVar7);
    _objc_release(unaff_x22);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uStack_108);
    _objc_release(lStack_100);
    _objc_release(lStack_e8);
    _objc_release(uStack_f0);
    _objc_release(lStack_e0);
    _objc_release(lStack_d8);
    _objc_release(lStack_c8);
    _objc_release(lStack_d0);
    lVar10 = (long)_DAT_112744d54;
    lVar2 = *(long *)(param_1 + lVar10);
    func_0x00010bf495c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    lVar4 = lVar2;
    _objc_release();
    if (lVar3 == 0) {
      puStack_f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar4 = *(long *)(param_1 + lVar10);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      lStack_d0 = lVar4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lStack_c8 = lVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lStack_d8 = lVar3;
      func_0x00010bf493c0(0);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar10);
      lStack_e0 = lVar4;
      lStack_c0 = lVar4;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      uStack_f0 = uVar11;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lStack_e8 = lVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_100 = lVar3;
      func_0x00010bf493c0(0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      uStack_b8 = uVar11;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = uVar5;
      func_0x00010bf493c0(0);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_1 + lVar10);
      uStack_b0 = unaff_x22;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010bf493c0(0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_a8 = lVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar8;
      func_0x00010beef8c0(puStack_f8);
      _objc_release(puVar8);
      _objc_release(lVar4);
      _objc_release(unaff_x24);
      _objc_release(param_1);
      _objc_release(lVar10);
      _objc_release(unaff_x22);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar5);
      _objc_release(uVar11);
      _objc_release(lStack_100);
      _objc_release(lStack_e8);
      _objc_release(uStack_f0);
      _objc_release(lStack_e0);
      _objc_release(lStack_d8);
      _objc_release(lStack_c8);
      lVar4 = lStack_d0;
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1062af5d8;
  lStack_150 = unaff_x24;
  lStack_148 = lVar10;
  uStack_140 = unaff_x22;
  lStack_138 = lVar3;
  lStack_130 = lVar2;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x2020000000;
  uStack_158 = 0;
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x2020000000;
  uStack_178 = 0;
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x2020000000;
  uStack_198 = 0;
  puVar8 = param_3;
  func_0x00010c160280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfa29a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(puVar9);
  _objc_release(puVar8);
  iVar1 = (int)*(undefined8 *)(lVar4 + _DAT_112744c34);
  func_0x00010bf1f440();
  if (iVar1 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(lVar4 + _DAT_112744d58));
  }
  if (*(char *)(puStack_168 + 3) == '\x01') {
    func_0x00010bdd66c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c9620;
    _objc_alloc(PTR_PTR_1126c9620);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054920(puVar8);
    func_0x00010bf47d60(lVar4);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(lVar4);
  }
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_190,8);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1062af5d8; end: 1062af817; -[SCContextSpotlightViewController _configureProgressBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062af5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uVar2 = param_3;
  func_0x00010c160280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa29a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744c34);
  func_0x00010bf1f440();
  if (iVar1 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744d58));
  }
  if (*(char *)(puStack_58 + 3) == '\x01') {
    func_0x00010bdd66c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9620;
    _objc_alloc(PTR_PTR_1126c9620);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054920(puVar4);
    func_0x00010bf47d60(param_1);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(param_1);
  }
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1062af818; end: 1062af83f;  */

void FUN_1062af818(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  return;
}



/* Entry: 1062af840; end: 1062af8db; -[SCContextSpotlightViewController _buildOrGetProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062af840(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112744d58;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR_PTR_1126c9628;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar2 = param_1;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010bdc7ea0(param_1);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1062af8dc; end: 1062afb83; -[SCContextSpotlightViewController _addProgressBarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062af8dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112744c34);
  func_0x000108f4afd4(lVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112744d58;
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar20);
  lStack_88 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf49420((double)lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010beef8c0(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c08bda0();
  *(undefined **)(lVar3 + _DAT_112744db0) = puVar19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar18);
  return;
}



/* Entry: 1062afb84; end: 1062afbc7; -[SCContextSpotlightViewController _setLaunchSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062afb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08bda0();
  *(undefined8 *)(param_1 + _DAT_112744db0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062afbc8; end: 1062afd4b; -[SCContextSpotlightViewController _setRequirementsForSwipeUpTeaching:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062afbc8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c160280(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  *(undefined8 *)(param_2 + _DAT_112744db4) = param_1;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + _DAT_112744db8);
  *(undefined8 *)(param_2 + _DAT_112744db8) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25b720();
  *(undefined8 *)(param_2 + _DAT_112744cf0) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bf9b320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c06b7e0();
  *(char *)(param_2 + _DAT_112744d00) = (char)uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beb0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setupSwipeUpTeachingIfNecessary_112589ab8);
  return;
}



/* Entry: 1062afd4c; end: 1062afe63; -[SCContextSpotlightViewController _setupContextSubtitlesRendering:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062afd4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c29d360();
  _objc_release(lVar5);
  if (((lVar1 == 0x65) || (lVar1 == 0x62)) &&
     (lVar5 = (long)_DAT_112744d60, *(long *)(param_1 + lVar5) == 0)) {
    puVar2 = PTR_PTR_1126c9630;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744cdc);
    func_0x00010c259cc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112744c68);
    lVar1 = param_3;
    func_0x00010c0b3760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d980(puVar2,param_2,uVar3,uVar4,lVar1,*(undefined8 *)(param_1 + _DAT_112744c74),
                        *(undefined8 *)(param_1 + _DAT_112744c34));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062afe64; end: 1062b013b; -[SCContextSpotlightViewController _setupSuggestedSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062afe64(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + _DAT_112744cac);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9500;
  func_0x00010c24c660(PTR_PTR_1126c9500);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744c34);
    func_0x000108f4b528();
    if (iVar1 != 0) {
      uVar2 = param_3;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar3);
      uVar2 = uVar6;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar6);
      func_0x00010c067fc0(uVar2);
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar3);
      uVar2 = uVar6;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar6);
      func_0x00010c0b4ca0(uVar2);
      _objc_release(uVar2);
    }
    uVar2 = uVar4;
    func_0x00010c08fa60();
    if (uVar2 != 0) {
      puVar3 = PTR_PTR_1126c9638;
      _objc_alloc();
      uVar2 = param_3;
      func_0x00010c0b3760(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04f620();
      lVar8 = (long)_DAT_112744d64;
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar3;
      _objc_release(uVar7);
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar8));
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062b013c; end: 1062b01ab; -[SCContextSpotlightViewController _setupSpotlightActionParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b013c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112744cfc;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744c6c);
  func_0x00010bfaa5e0(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112744c2c),
                      *(undefined8 *)(param_1 + _DAT_112744cd8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1062b01ac; end: 1062b03b3; -[SCContextSpotlightViewController _setupUpsellTriggerManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b01ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112744d04;
  if ((*(long *)(param_1 + lVar5) == 0) && ((*(byte *)(param_1 + _DAT_112744c18) & 1) == 0)) {
    puVar1 = PTR_PTR_1126c9640;
    _objc_alloc();
    func_0x00010be426e0();
    func_0x00010bff0b40();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfb3620(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0e60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062b03b4; end: 1062b03fb;  */

void FUN_1062b03b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff3a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b03fc; end: 1062b04e7; -[SCContextSpotlightViewController _setupViewVisibilityManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b03fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c9648;
  lVar6 = (long)_DAT_112744d10;
  if (*(long *)(param_1 + lVar6) != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744cfc);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744c74);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112744cac);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744d04);
  func_0x00010c28f000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b3c0(puVar1,param_2,param_3,uVar3,uVar4,uVar5,uVar2);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1062b04e8; end: 1062b0787; -[SCContextSpotlightViewController _setupOneTapToShare:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b04e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112744d68;
  if ((*(long *)(param_1 + lVar5) == 0) && (lVar1 = param_1, func_0x00010be426e0(), (int)lVar1 != 0)
     ) {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1062a9a88;
    uStack_88 = 0x1062a9a98;
    uStack_80 = 0;
    uVar2 = param_3;
    func_0x00010c160280(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfa29a0();
    _objc_retainAutoreleasedReturnValue();
    fVar6 = -32.0;
    func_0x00010c0bed40();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744cac);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b12d0;
    func_0x00010c0e89a0(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar2);
    fVar7 = fVar6;
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010bfb2c80(puStack_a0[5]);
    if (fVar6 <= fVar7) {
      puVar3 = PTR_PTR_1126c9650;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112744d10);
      func_0x00010c29fae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be42700();
      func_0x00010c049bc0();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
    }
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062b0788; end: 1062b07bf;  */

void FUN_1062b0788(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_stack_00000010;
  
  _objc_retain(in_stack_00000010);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_stack_00000010;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062b07c0; end: 1062b09db; -[SCContextSpotlightViewController _configureReplyBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b07c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *unaff_x24;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined1 *puStack_138;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf32060();
  _objc_release(puVar4);
  if (puVar2 == (undefined1 *)0x5) {
    puVar8 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)puVar3;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      lVar10 = *plStack_110;
      do {
        unaff_x24 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          puVar8 = *(undefined1 **)(lStack_118 + (long)unaff_x24 * 8);
          puVar2 = puVar8;
          func_0x00010bf32060();
          if (puVar2 == (undefined1 *)0x4) {
            _objc_retain(puVar8);
            goto LAB_1062b08e4;
          }
          unaff_x24 = unaff_x24 + 1;
        } while (puVar4 != unaff_x24);
        puVar4 = param_3;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    puVar8 = (undefined1 *)0x0;
LAB_1062b08e4:
    _objc_release(param_3);
  }
  puVar4 = puVar8;
  func_0x00010bfb9180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if ((puVar3 != (undefined1 *)0x0) && (*(long *)(param_1 + _DAT_112744ce4) != 0x1e)) {
    puVar4 = *(undefined1 **)(param_1 + _DAT_112744cb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)0x1;
    unaff_x24 = puVar4;
    func_0x00010c132220();
    _objc_release(puVar4);
    if ((int)unaff_x24 != 0) {
      puVar6 = (undefined8 *)puVar2;
      func_0x00010bf478c0(*(undefined8 *)(param_1 + _DAT_112744d20));
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar8);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1062b09dc;
  puStack_160 = unaff_x24;
  puStack_158 = puVar4;
  puStack_150 = puVar2;
  puStack_148 = puVar8;
  lStack_140 = param_1;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  pcStack_178 = FUN_1062a9a88;
  uStack_170 = 0x1062a9a98;
  uStack_168 = 0;
  puVar4 = (undefined1 *)puVar6;
  func_0x00010bfa29a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(puVar4);
  iVar1 = (int)puStack_188[5];
  func_0x00010c238d80();
  if ((iVar1 != 0) && (lVar10 = (long)_DAT_112744dbc, *(long *)(puVar3 + lVar10) == 0)) {
    puVar5 = PTR_PTR_1126c9658;
    _objc_alloc();
    func_0x00010c004700();
    uVar7 = *(undefined8 *)(puVar3 + lVar10);
    *(undefined **)(puVar3 + lVar10) = puVar5;
    _objc_release(uVar7);
    func_0x00010bef7700(puVar3);
    uVar7 = *(undefined8 *)(puVar3 + lVar10);
    func_0x00010c29bf00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar7);
    uVar9 = *(undefined8 *)(puVar3 + _DAT_112744d5c);
    uVar7 = *(undefined8 *)(puVar3 + lVar10);
    func_0x00010c29bf00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066580(uVar9);
    _objc_release(uVar7);
    func_0x00010bf77e80(*(undefined8 *)(puVar3 + lVar10));
  }
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
  _objc_release(puVar6);
  return;
}



/* Entry: 1062b09dc; end: 1062b0b97; -[SCContextSpotlightViewController _updateBloopsHeaderIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b09dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1062a9a88;
  uStack_50 = 0x1062a9a98;
  uStack_48 = 0;
  uVar3 = param_3;
  func_0x00010bfa29a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar3);
  iVar1 = (int)puStack_68[5];
  func_0x00010c238d80();
  if ((iVar1 != 0) && (lVar5 = (long)_DAT_112744dbc, *(long *)(param_1 + lVar5) == 0)) {
    puVar2 = PTR_PTR_1126c9658;
    _objc_alloc();
    func_0x00010c004700();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef7700(param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112744d5c);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066580(uVar4);
    _objc_release(uVar3);
    func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar5));
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1062b0b98; end: 1062b0bd7;  */

void FUN_1062b0b98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c24b2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062b0bd8; end: 1062b0c0b; -[SCContextSpotlightViewController _bottomConstraintForContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b0bd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4020000000000000;
  if (((*(byte *)(param_1 + _DAT_112744c14) & 1) == 0) &&
     (uVar1 = 0x4032000000000000, *(char *)(param_1 + _DAT_112744c0c) == '\0')) {
    uVar1 = 0x4028000000000000;
  }
  return uVar1;
}



/* Entry: 1062b0c0c; end: 1062b10bf; -[SCContextSpotlightViewController _setupSwipeUpTeachingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b0c0c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112744d48);
  func_0x00010c071800();
  if (((((int)lVar1 != 0) && ((param_1[_DAT_112744d00] & 1) == 0)) &&
      (lVar23 = (long)_DAT_112744db4, *(double *)(param_1 + lVar23) != 0.0)) &&
     (((param_1[_DAT_112744dc0] == '\x01' &&
       (lVar26 = (long)_DAT_112744dc4, (param_1[lVar26] & 1) == 0)) &&
      (lVar25 = (long)_DAT_112744dc8, *(long *)(param_1 + lVar25) == 0)))) {
    puVar2 = PTR_PTR_1126c9660;
    _objc_alloc();
    func_0x00010c05ca40(*(undefined8 *)(param_1 + lVar23));
    uVar21 = *(undefined8 *)(param_1 + lVar25);
    *(undefined **)(param_1 + lVar25) = puVar2;
    _objc_release(uVar21);
    param_3 = param_1;
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar25),param_2,param_1);
    lVar1 = *(long *)(param_1 + lVar25);
    func_0x00010c2320a0();
    if ((int)lVar1 != 0) {
      uVar22 = *(undefined8 *)(param_1 + _DAT_112744c68);
      uVar24 = *(undefined8 *)(param_1 + lVar25);
      uVar21 = uVar24;
      func_0x00010c0eb120(uVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef99a0(uVar22,param_2,uVar24,uVar21);
      _objc_release(uVar21);
      func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar25));
      uVar21 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010c29bf00(uVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(uVar21);
      puVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010c29bf00(uVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(puVar2,param_2,uVar21);
      _objc_release(uVar21);
      _objc_release(puVar2);
      func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar25),param_2,param_1);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar1 = *(long *)(param_1 + lVar25);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08cee0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar23;
      func_0x00010bf493a0(lVar23,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar25);
      lStack_90 = lVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar7;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08cee0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010bf493a0(uVar21,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar25);
      uStack_88 = uVar22;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar11;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar24;
      func_0x00010bf493a0(uVar24,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + lVar25);
      uStack_80 = uVar14;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar16;
      func_0x00010bf493a0(uVar16,param_2,puVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_90,4);
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar20;
      func_0x00010beef8c0(puVar2,param_2,puVar20);
      _objc_release(puVar20);
      _objc_release(uVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(uVar24);
      _objc_release(uVar11);
      _objc_release(uVar22);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar21);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar23);
      _objc_release();
      param_1[lVar26] = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  func_0x00010c2a6740(param_3,param_2,0);
  puVar2 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(puVar2);
  func_0x00010c12c8e0(param_3);
  func_0x00010c12cf80(*(undefined8 *)(lVar1 + _DAT_112744c68),param_2,param_3);
  _objc_release(param_3);
  uVar21 = *(undefined8 *)(lVar1 + _DAT_112744dc8);
  *(undefined8 *)(lVar1 + _DAT_112744dc8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar21);
  return;
}


