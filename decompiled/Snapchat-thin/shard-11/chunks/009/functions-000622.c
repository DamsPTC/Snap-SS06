/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108be6b34; end: 108be6b83; -[SCUserIdToSnapchatterFetcherImpl userIdToSnapchatterObserverMap] */

void FUN_108be6b34(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be6b84; end: 108be6bcb; -[SCUserIdToSnapchatterFetcherImpl .cxx_destruct] */

void FUN_108be6b84(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be6bcc; end: 108be6cdb; -[SCUsernameToSnapchatterDataProvider initWithUsernameToSnapchatterFetcher:] */

undefined1 * FUN_108be6bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fdc80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef240();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108be6cdc; end: 108be6e43; -[SCUsernameToSnapchatterDataProvider snapchattersWithUsernames:completionQueue:completionHandler:] */

void FUN_108be6cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_retain(param_4);
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x108be6dd8;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x000107c27d8c(param_4,&puStack_70);
    _objc_release(param_4);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108be6e44; end: 108be6fe3; -[SCUsernameToSnapchatterDataProvider snapchatterWithUsername:completionQueue:completionHandler:] */

void FUN_108be6e44(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((param_5 != 0) && (param_4 != 0)) && (lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_108be6fe4;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_48 = param_5;
      func_0x000107c27d8c(param_4,&puStack_68);
      _objc_release(lStack_48);
    }
    else {
      _objc_initWeak(auStack_70,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_108be6ff8;
      puStack_98 = &UNK_110857fd0;
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_3);
      lStack_90 = param_3;
      _objc_retain(param_4);
      lStack_88 = param_4;
      _objc_retain(param_5);
      lStack_80 = param_5;
      func_0x000107c2a728(uVar2,&puStack_b0);
      _objc_release(lStack_80);
      _objc_release(lStack_88);
      _objc_release(lStack_90);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be6fe4; end: 108be6ff7;  */

void FUN_108be6fe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be6ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108be6ff8; end: 108be702f;  */

void FUN_108be6ff8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebd780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108be7030; end: 108be7103; -[SCUsernameToSnapchatterDataProvider _snapchattersWithUsernames:completionQueue:completionHandler:] */

void FUN_108be7030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c244ee0();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108be7104;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x000107c27d8c(param_4,&puStack_60);
  _objc_release(param_4);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 108be7104; end: 108be7117;  */

void FUN_108be7104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be7114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be7118; end: 108be71eb; -[SCUsernameToSnapchatterDataProvider _snapchatterWithUsername:completionQueue:completionHandler:] */

void FUN_108be7118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c244940();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108be71ec;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x000108beee04(param_4,&puStack_60);
  _objc_release(param_4);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 108be71ec; end: 108be71ff;  */

void FUN_108be71ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be71fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be7200; end: 108be722f; -[SCUsernameToSnapchatterDataProvider .cxx_destruct] */

void FUN_108be7200(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be7230; end: 108be7317; -[SCUsernameToSnapchatterFetcherImpl snapchatterWithUsername:] */

void FUN_108be7230(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_3;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c244ee0(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar4 = param_1;
    lVar3 = param_3;
    func_0x00010c0e00e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(lVar3);
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bebd8e0(param_3,param_2,lVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bea7ba0(param_3,param_2,puVar1);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108be7318; end: 108be73ab; -[SCUsernameToSnapchatterFetcherImpl snapchattersWithUsernames:] */

void FUN_108be7318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bebd8e0(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010bea7ba0(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108be73ac; end: 108be73fb; -[SCUsernameToSnapchatterFetcherImpl usernameToSnapchatterObserverMap] */

void FUN_108be73ac(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be73fc; end: 108be782f; -[SCUsernameToSnapchatterFetcherImpl _snapchattersWithUsernames:newSnapchatterObservers:] */

void FUN_108be73fc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar8 = param_3;
  func_0x00010bf529e0();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar8 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x28);
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_230,auStack_f0,0x10);
    if (puVar3 != (undefined8 *)0x0) {
      lVar7 = *plStack_220;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_220 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          lVar11 = *(long *)(lStack_228 + (long)puVar8 * 8);
          lVar4 = lVar11;
          func_0x00010c08fa60();
          if (lVar4 != 0) {
            lVar4 = *(long *)(param_1 + 0x20);
            func_0x00010c0e00e0(lVar4,param_2,lVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            if (lVar4 != 0) {
              puVar5 = puVar10;
              lVar11 = lVar4;
            }
            func_0x00010befa120(puVar5,param_2,lVar11);
            _objc_release(lVar4);
          }
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar3 != puVar8);
        puVar3 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_230,auStack_f0,0x10);
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    _os_unfair_lock_unlock(param_1 + 0x28);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain(puVar10);
    puVar5 = puVar10;
    func_0x00010bf52a60(puVar10,param_2,&uStack_270,auStack_170,0x10);
    if (puVar5 != (undefined *)0x0) {
      lVar7 = *plStack_260;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar7) {
            _objc_enumerationMutation(puVar10);
          }
          lVar4 = *(long *)(lStack_268 + (long)puVar9 * 8);
          func_0x00010c244280();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            lVar11 = lVar4;
            func_0x00010c294420(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1,param_2,lVar4,lVar11);
            _objc_release(lVar11);
          }
          _objc_release(lVar4);
          puVar9 = puVar9 + 1;
        } while (puVar5 != puVar9);
        puVar5 = puVar10;
        func_0x00010bf52a60(puVar10,param_2,&uStack_270,auStack_170,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar10);
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    _objc_retain(puVar2);
    puVar3 = &uStack_2b0;
    puVar5 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,puVar3,auStack_1f0,0x10);
    if (puVar5 != (undefined *)0x0) {
      lVar7 = *plStack_2a0;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_2a0 != lVar7) {
            _objc_enumerationMutation(puVar2);
          }
          uVar12 = *(undefined8 *)(lStack_2a8 + (long)puVar9 * 8);
          lVar4 = param_1;
          func_0x00010bebd640(param_1,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 == 0) {
            lVar11 = param_1;
            func_0x00010be15720(param_1,param_2,uVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar11;
            func_0x00010c244280();
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 != 0) {
              func_0x00010befa120(param_4,param_2,lVar11);
              lVar6 = lVar4;
              func_0x00010c294420(lVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar1,param_2,lVar4,lVar6);
              _objc_release(lVar6);
            }
          }
          else {
            lVar11 = lVar4;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1,param_2,lVar4,lVar11);
          }
          _objc_release(lVar11);
          _objc_release(lVar4);
          puVar9 = puVar9 + 1;
        } while (puVar5 != puVar9);
        puVar3 = &uStack_2b0;
        puVar5 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,puVar3,auStack_1f0,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar10);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar10 = (undefined *)param_3[2];
    _objc_retain(puVar3);
    func_0x00010c0eea00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c244940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108be7830; end: 108be789b; -[SCUsernameToSnapchatterFetcherImpl _snapchatterFromFetchedResultWithUsername:] */

void FUN_108be7830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0eea00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c244940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be789c; end: 108be7947; -[SCUsernameToSnapchatterFetcherImpl _fetchedSnapchatterObserverWithUsername:] */

void FUN_108be789c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db0c8;
  _objc_alloc(PTR_PTR_1126db0c8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108be7948;
  puStack_40 = &UNK_110ab7260;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c00dac0(puVar1,param_2,uVar2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108be7948; end: 108be7957;  */

void FUN_108be7948(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar6);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_2);
  }
  puVar2 = &uStack_121;
  func_0x000108c2d0fc();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  _objc_retain(uVar6);
  ppuStack_198 = &PTR_DAT_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_110862700;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar3 = &uStack_b0;
  uStack_168 = uVar6;
  puStack_e8 = puVar2;
  pppuStack_e0 = &ppuStack_198;
  func_0x000107c310cc(puVar3,&ppuStack_120,&puStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_d8;
  func_0x000107c27dd4(&puStack_1b0);
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_DAT_110862760;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_150;
  func_0x000107c27dd4(&puStack_1b0);
  _objc_release(uStack_168);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_2 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_b0,param_2);
    }
    puVar2 = &uStack_121;
    func_0x000108c2d274();
    uStack_190 = 0xf;
    uStack_180 = 0x100;
    _objc_retain(uVar6);
    uStack_1a0 = 0;
    ppuStack_198 = &PTR_DAT_110862760;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    plStack_138 = (long *)0x0;
    uStack_140 = 0;
    plStack_130 = (long *)0x0;
    uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
    uStack_118 = 10;
    uStack_108 = 0x100;
    ppuStack_120 = &PTR_SUB_110862700;
    pppuStack_e0 = &ppuStack_198;
    uStack_d0 = 0;
    uStack_d8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_b8 = (long *)0x0;
    puStack_1b0 = (undefined8 *)0x0;
    puStack_1a8 = (undefined8 *)0x0;
    uStack_1b4 = 0;
    puVar4 = &uStack_b0;
    uStack_168 = uVar6;
    puStack_e8 = puVar2;
    func_0x000107c310cc(puVar4,&ppuStack_120,&puStack_1b0,&uStack_1b4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puStack_1b0 != (undefined8 *)0x0) {
      puStack_1a8 = puStack_1b0;
      __ZdlPv();
    }
    plVar1 = plStack_b8;
    ppuStack_120 = &PTR_SUB_110862700;
    plStack_b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1b0 = &uStack_d8;
    func_0x000107c27dd4(&puStack_1b0);
    plVar1 = plStack_130;
    ppuStack_198 = &PTR_DAT_110862760;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_138;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1b0 = &uStack_150;
    func_0x000107c27dd4(&puStack_1b0);
    _objc_release(uStack_168);
    func_0x000107c27da8(&uStack_88);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    puVar3 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined8 *)0x0) {
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (param_2 == 0) {
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_b0,param_2);
      }
      puVar2 = &uStack_121;
      func_0x000108c2cf84();
      uStack_190 = 0xf;
      uStack_180 = 0x100;
      _objc_retain(uVar6);
      uStack_1a0 = 0;
      ppuStack_198 = &PTR_DAT_110862760;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      plStack_138 = (long *)0x0;
      uStack_140 = 0;
      plStack_130 = (long *)0x0;
      uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
      uStack_118 = 10;
      uStack_108 = 0x100;
      ppuStack_120 = &PTR_SUB_110862700;
      pppuStack_e0 = &ppuStack_198;
      uStack_d0 = 0;
      uStack_d8 = 0;
      plStack_c0 = (long *)0x0;
      uStack_c8 = 0;
      plStack_b8 = (long *)0x0;
      puStack_1b0 = (undefined8 *)0x0;
      puStack_1a8 = (undefined8 *)0x0;
      uStack_1b4 = 0;
      puVar3 = &uStack_b0;
      uStack_168 = uVar6;
      puStack_e8 = puVar2;
      func_0x000107c310cc(puVar3,&ppuStack_120,&puStack_1b0,&uStack_1b4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puStack_1b0 != (undefined8 *)0x0) {
        puStack_1a8 = puStack_1b0;
        __ZdlPv();
      }
      plVar1 = plStack_b8;
      ppuStack_120 = &PTR_SUB_110862700;
      plStack_b8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_c0;
      plStack_c0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_1b0 = &uStack_d8;
      func_0x000107c27dd4(&puStack_1b0);
      plVar1 = plStack_130;
      ppuStack_198 = &PTR_DAT_110862760;
      plStack_130 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_138;
      plStack_138 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_1b0 = &uStack_150;
      func_0x000107c27dd4(&puStack_1b0);
      _objc_release(uStack_168);
      func_0x000107c27da8(&uStack_88);
      _objc_release(uStack_98);
      _objc_release(uStack_a0);
      puVar5 = puVar3;
      func_0x00010bfb1920(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = puVar4;
      func_0x00010bfb1920(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
    }
  }
  else {
    puVar5 = puVar3;
    func_0x00010bfb1920(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108be7958; end: 108be7aef; -[SCUsernameToSnapchatterFetcherImpl _setSnapchatterObservers:] */

void FUN_108be7958(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar5 = *(long *)(lVar6 * 8);
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar3;
      func_0x00010c08fa60();
      if (lVar5 != 0) {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
      }
      _objc_release(lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x28);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 108be7af0; end: 108be7b37; -[SCUsernameToSnapchatterFetcherImpl .cxx_destruct] */

void FUN_108be7af0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be7b38; end: 108be7b4f;  */

undefined ** FUN_108be7b38(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108be7b50; end: 108be7b6f; -[SCFriendSyncGrapheneLogger logZombieStateDetectedWithCount:amiMigrationEnabled:] */

void FUN_108be7b50(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar17;
  ulong uVar18;
  long *plStack_340;
  long *plStack_338;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined **ppuStack_268;
  undefined8 *puStack_260;
  undefined **ppuStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)param_4 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar6;
  puVar7 = param_3;
  _objc_retain(ppuVar6);
  if (lVar3 != 0) {
    plVar16 = *(long **)(lVar3 + 8);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,ppuVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar4 = (undefined **)&UNK_110ab7bc0;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110ab7bc0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar9;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar9;
      param_4 = param_3;
    }
  }
  ppuVar5 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  __Unwind_Resume();
  puVar12 = &uStack_100;
  puStack_88 = &LAB_108bf71ac;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar4;
  puVar9 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  if (ppuVar5 != (undefined **)0x0) {
    plVar16 = (long *)ppuVar5[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar6 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar6 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,ppuVar6);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar6 = (undefined **)&UNK_110ab7c10;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110ab7c10,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar9 = puVar12;
    param_4 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar9 = puVar12;
      param_4 = puVar7;
    }
  }
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  puStack_108 = &LAB_108bf7320;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar6;
  puVar7 = puVar9;
  puVar14 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(ppuVar6);
  _objc_retain(puVar9);
  puVar12 = (undefined8 *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    plVar16 = (long *)ppuVar5[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x24 = auStack_178;
    func_0x000107c278b8(auStack_178,ppuVar4);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar7 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_160,puVar7);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    ppuVar4 = (undefined **)&UNK_110ab7c60;
    unaff_x23 = &uStack_198;
    puVar7 = &uStack_198;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110ab7c60,puVar7,param_4);
    puStack_180 = unaff_x23;
    func_0x000107c278ac(&puStack_180);
    lVar3 = 0;
    puVar12 = auStack_178;
    puVar14 = param_4;
    do {
      if ((&cStack_149)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar9);
  ppuVar5 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar9);
  _objc_release(ppuVar6);
  ppuVar8 = ppuVar5;
  __Unwind_Resume();
  puStack_1a8 = &LAB_108bf7550;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar4;
  puVar13 = puVar7;
  puVar15 = puVar14;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  ppuStack_1c8 = ppuVar5;
  puStack_1c0 = puVar9;
  ppuStack_1b8 = ppuVar6;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(ppuVar4);
  _objc_retain(puVar7);
  puVar9 = (undefined8 *)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    plVar16 = (long *)ppuVar8[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar6 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar6 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_218;
    func_0x000107c278b8(auStack_218,ppuVar6);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar9 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_200,puVar9);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x000107c27984(&uStack_238,auStack_218,&lStack_1e8,2);
    ppuVar11 = (undefined **)&UNK_110ab7cb0;
    unaff_x23 = &uStack_238;
    puVar13 = &uStack_238;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110ab7cb0,puVar13,puVar14);
    puStack_220 = unaff_x23;
    func_0x000107c278ac(&puStack_220);
    lVar3 = 0;
    puVar9 = auStack_218;
    puVar15 = puVar14;
    do {
      if ((&cStack_1e9)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar7);
  ppuVar6 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar7);
  _objc_release(ppuVar4);
  ppuVar5 = ppuVar6;
  __Unwind_Resume();
  puStack_248 = &LAB_108bf7780;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar9;
  ppuStack_268 = ppuVar6;
  puStack_260 = puVar7;
  ppuStack_258 = ppuVar4;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(ppuVar11);
  _objc_retain(puVar13);
  if (ppuVar5 != (undefined **)0x0) {
    plVar16 = (long *)ppuVar5[1];
    _objc_retain(ppuVar11);
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar6 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar6 = ppuVar11;
      _objc_retainAutorelease(ppuVar11);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar11);
    func_0x000107c278b8(auStack_2b8,ppuVar6);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar7 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x000107c278b8(auStack_2a0,puVar7);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x000107c27984(&uStack_2d8,auStack_2b8,&lStack_288,2);
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110ab7d00,&uStack_2d8,puVar15);
    puStack_2c0 = &uStack_2d8;
    func_0x000107c278ac(&puStack_2c0);
    lVar3 = 0;
    do {
      if ((&cStack_289)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar13);
  ppuVar6 = ppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar13);
  _objc_release(ppuVar11);
  __Unwind_Resume();
  func_0x000100c55f24(&plStack_340,ppuVar6 + 9);
  puVar10 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar3 = *plStack_340;
  if (plStack_340[1] != lVar3) {
    lVar17 = 0;
    uVar18 = 0;
    do {
      lVar3 = lVar3 + lVar17;
      _objc_loadWeakRetained();
      if (lVar3 != 0) {
        func_0x00010bf06ba0(puVar10);
        if (uVar18 != (plStack_340[1] - *plStack_340 >> 3) - 1U) {
          func_0x00010bf070e0(puVar10);
        }
      }
      _objc_release(lVar3);
      uVar18 = uVar18 + 1;
      lVar3 = *plStack_340;
      lVar17 = lVar17 + 8;
    } while (uVar18 < (ulong)(plStack_340[1] - lVar3 >> 3));
  }
  func_0x00010bf070e0(puVar10);
  if (plStack_338 != (long *)0x0) {
    plVar16 = plStack_338 + 1;
    do {
      lVar3 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plStack_338 + 0x10))(plStack_338);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_338);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108be7b70; end: 108be7b8f; -[SCFriendSyncGrapheneLogger logIncomingZombieStateDetectedWithCount:amiMigrationEnabled:] */

void FUN_108be7b70(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar17;
  ulong uVar18;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)param_4 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar6;
  puVar9 = param_3;
  _objc_retain(ppuVar6);
  if (lVar3 != 0) {
    plVar15 = *(long **)(lVar3 + 8);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,ppuVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar4 = (undefined **)&UNK_110ab7c10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c10,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar9 = puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar9 = puVar7;
      param_4 = param_3;
    }
  }
  ppuVar5 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  __Unwind_Resume();
  puStack_88 = &LAB_108bf7320;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar4;
  puVar7 = puVar9;
  puVar13 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar9);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar5[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar6 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar6 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,ppuVar6);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar7 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_e0,puVar7);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    ppuVar6 = (undefined **)&UNK_110ab7c60;
    unaff_x23 = &uStack_118;
    puVar7 = &uStack_118;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c60,puVar7,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar3 = 0;
    puVar16 = auStack_f8;
    puVar13 = param_4;
    do {
      if ((&cStack_c9)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar9);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar9);
  _objc_release(ppuVar4);
  ppuVar8 = ppuVar5;
  __Unwind_Resume();
  puStack_128 = &LAB_108bf7550;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar6;
  puVar12 = puVar7;
  puVar14 = puVar13;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar16;
  ppuStack_148 = ppuVar5;
  puStack_140 = puVar9;
  ppuStack_138 = ppuVar4;
  ppuStack_130 = &puStack_90;
  _objc_retain(ppuVar6);
  _objc_retain(puVar7);
  puVar9 = (undefined8 *)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar8[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x24 = auStack_198;
    func_0x000107c278b8(auStack_198,ppuVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar9 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_180,puVar9);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    ppuVar11 = (undefined **)&UNK_110ab7cb0;
    unaff_x23 = &uStack_1b8;
    puVar12 = &uStack_1b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7cb0,puVar12,puVar13);
    puStack_1a0 = unaff_x23;
    func_0x000107c278ac(&puStack_1a0);
    lVar3 = 0;
    puVar9 = auStack_198;
    puVar14 = puVar13;
    do {
      if ((&cStack_169)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar7);
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  puStack_1c8 = &LAB_108bf7780;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar9;
  ppuStack_1e8 = ppuVar4;
  puStack_1e0 = puVar7;
  ppuStack_1d8 = ppuVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(ppuVar11);
  _objc_retain(puVar12);
  if (ppuVar5 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar5[1];
    _objc_retain(ppuVar11);
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar6 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar6 = ppuVar11;
      _objc_retainAutorelease(ppuVar11);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar11);
    func_0x000107c278b8(auStack_238,ppuVar6);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar9 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x000107c278b8(auStack_220,puVar9);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000107c27984(&uStack_258,auStack_238,&lStack_208,2);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7d00,&uStack_258,puVar14);
    puStack_240 = &uStack_258;
    func_0x000107c278ac(&puStack_240);
    lVar3 = 0;
    do {
      if ((&cStack_209)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar12);
  ppuVar6 = ppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar12);
  _objc_release(ppuVar11);
  __Unwind_Resume();
  func_0x000100c55f24(&plStack_2c0,ppuVar6 + 9);
  puVar10 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar3 = *plStack_2c0;
  if (plStack_2c0[1] != lVar3) {
    lVar17 = 0;
    uVar18 = 0;
    do {
      lVar3 = lVar3 + lVar17;
      _objc_loadWeakRetained();
      if (lVar3 != 0) {
        func_0x00010bf06ba0(puVar10);
        if (uVar18 != (plStack_2c0[1] - *plStack_2c0 >> 3) - 1U) {
          func_0x00010bf070e0(puVar10);
        }
      }
      _objc_release(lVar3);
      uVar18 = uVar18 + 1;
      lVar3 = *plStack_2c0;
      lVar17 = lVar17 + 8;
    } while (uVar18 < (ulong)(plStack_2c0[1] - lVar3 >> 3));
  }
  func_0x00010bf070e0(puVar10);
  if (plStack_2b8 != (long *)0x0) {
    plVar15 = plStack_2b8 + 1;
    do {
      lVar3 = *plVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108be7b90; end: 108be7ba3; -[SCFriendSyncGrapheneLogger logFetchDedupOutcome:trigger:] */

void FUN_108be7b90(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar14;
  ulong uVar15;
  long *plStack_240;
  long *plStack_238;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar11 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar8 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    plVar13 = *(long **)(lVar3 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar4 = &UNK_10f508987;
    }
    else {
      puVar4 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar4);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar5 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar5);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar4 = &UNK_110ab7c60;
    unaff_x23 = &uStack_98;
    puVar5 = &uStack_98;
    uVar11 = 1;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ab7c60,puVar5,1);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_4);
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar7 = puVar6;
  __Unwind_Resume();
  puStack_a8 = &LAB_108bf7550;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar4;
  puVar10 = puVar5;
  uVar12 = uVar11;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  puStack_c8 = puVar6;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar7 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = &UNK_10f508987;
    }
    else {
      puVar6 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,puVar6);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar8 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_100,puVar8);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar9 = &UNK_110ab7cb0;
    unaff_x23 = &uStack_138;
    puVar10 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ab7cb0,puVar10,uVar11);
    puStack_120 = unaff_x23;
    func_0x000107c278ac(&puStack_120);
    lVar3 = 0;
    puVar8 = auStack_118;
    uVar12 = uVar11;
    do {
      if ((&cStack_e9)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar5);
  puVar6 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar7 = puVar6;
  __Unwind_Resume();
  puStack_148 = &LAB_108bf7780;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar8;
  puStack_168 = puVar6;
  puStack_160 = puVar5;
  puStack_158 = puVar4;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  if (puVar7 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar7 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar4 = &UNK_10f508987;
    }
    else {
      puVar4 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_1b8,puVar4);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_1a0,puVar5);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ab7d00,&uStack_1d8,uVar12);
    puStack_1c0 = &uStack_1d8;
    func_0x000107c278ac(&puStack_1c0);
    lVar3 = 0;
    do {
      if ((&cStack_189)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar10);
  puVar4 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  __Unwind_Resume();
  func_0x000100c55f24(&plStack_240,puVar4 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar3 = *plStack_240;
  if (plStack_240[1] != lVar3) {
    lVar14 = 0;
    uVar15 = 0;
    do {
      lVar3 = lVar3 + lVar14;
      _objc_loadWeakRetained();
      if (lVar3 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar15 != (plStack_240[1] - *plStack_240 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar3);
      uVar15 = uVar15 + 1;
      lVar3 = *plStack_240;
      lVar14 = lVar14 + 8;
    } while (uVar15 < (ulong)(plStack_240[1] - lVar3 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_238 != (long *)0x0) {
    plVar13 = plStack_238 + 1;
    do {
      lVar3 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108be7ba4; end: 108be7bbf; -[SCFriendSyncGrapheneLogger logAtlasBlockedReconciliationResult:error:] */

void FUN_108be7ba4(long param_1,undefined8 param_2,undefined8 *param_3,undefined **param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar13;
  ulong uVar14;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar8 = param_4;
  }
  uVar11 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar8;
  puVar5 = param_3;
  _objc_retain(ppuVar8);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    plVar12 = *(long **)(lVar3 + 8);
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar4 = ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,ppuVar4);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar5 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar5);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    ppuVar4 = (undefined **)&UNK_110ab7cb0;
    unaff_x23 = &uStack_98;
    puVar5 = &uStack_98;
    uVar11 = 1;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110ab7cb0,puVar5,1);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    puVar9 = auStack_78;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  ppuVar6 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(ppuVar8);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  puStack_a8 = &LAB_108bf7780;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  ppuStack_c8 = ppuVar6;
  puStack_c0 = param_3;
  ppuStack_b8 = ppuVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar5);
  if (ppuVar7 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar7[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar8 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar8 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    func_0x000107c278b8(auStack_118,ppuVar8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar9 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_100,puVar9);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110ab7d00,&uStack_138,uVar11);
    puStack_120 = &uStack_138;
    func_0x000107c278ac(&puStack_120);
    lVar3 = 0;
    do {
      if ((&cStack_e9)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar5);
  ppuVar8 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  func_0x000100c55f24(&plStack_1a0,ppuVar8 + 9);
  puVar10 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar3 = *plStack_1a0;
  if (plStack_1a0[1] != lVar3) {
    lVar13 = 0;
    uVar14 = 0;
    do {
      lVar3 = lVar3 + lVar13;
      _objc_loadWeakRetained();
      if (lVar3 != 0) {
        func_0x00010bf06ba0(puVar10);
        if (uVar14 != (plStack_1a0[1] - *plStack_1a0 >> 3) - 1U) {
          func_0x00010bf070e0(puVar10);
        }
      }
      _objc_release(lVar3);
      uVar14 = uVar14 + 1;
      lVar3 = *plStack_1a0;
      lVar13 = lVar13 + 8;
    } while (uVar14 < (ulong)(plStack_1a0[1] - lVar3 >> 3));
  }
  func_0x00010bf070e0(puVar10);
  if (plStack_198 != (long *)0x0) {
    plVar12 = plStack_198 + 1;
    do {
      lVar3 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_198);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108be7bc0; end: 108be7bd3; -[SCFriendSyncGrapheneLogger logAtlasBlockedHealOutcome:trigger:] */

void FUN_108be7bc0(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lVar3 != 0) {
    plVar5 = *(long **)(lVar3 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar4 = &UNK_10f508987;
    }
    else {
      puVar4 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_78,puVar4);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar4 = &UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar4 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar4);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110ab7d00,&uStack_98,1);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  func_0x000100c55f24(&plStack_100,puVar4 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar3 = *plStack_100;
  if (plStack_100[1] != lVar3) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar3 = lVar3 + lVar6;
      _objc_loadWeakRetained();
      if (lVar3 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_100[1] - *plStack_100 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar3);
      uVar7 = uVar7 + 1;
      lVar3 = *plStack_100;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_100[1] - lVar3 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_f8 != (long *)0x0) {
    plVar5 = plStack_f8 + 1;
    do {
      lVar3 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108be7bd4; end: 108be7bdf; -[SCFriendSyncGrapheneLogger .cxx_destruct] */

void FUN_108be7bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be7be0; end: 108be7bf3; -[SCFriendingContactsGrapheneLogger logDefaultContactsUpload] */

/* WARNING: Removing unreachable block (ram,0x000108bf6cf8) */

void FUN_108be7be0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar17;
  ulong uVar18;
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined **ppuStack_388;
  undefined8 *puStack_380;
  undefined **ppuStack_378;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 ***pppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110dc3a38;
  puVar11 = (undefined8 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar5;
  _objc_retain(&PTR____CFConstantStringClassReference_110dc3a38);
  if (lVar3 != 0) {
    plVar15 = *(long **)(lVar3 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110dc3a38);
    ppuVar4 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dc3a38);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110dc3a38);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,ppuVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar4 = (undefined **)&UNK_110ab7a20;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7a20,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar11 = puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar11 = puVar6;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dc3a38);
  _objc_release(&PTR____CFConstantStringClassReference_110dc3a38);
  __Unwind_Resume();
  puStack_88 = &UNK_108bf6e08;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar4;
  puVar6 = puVar11;
  puVar14 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar5[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,ppuVar5);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_e0,puVar6);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    ppuVar9 = (undefined **)&UNK_110ab7b70;
    unaff_x23 = &uStack_118;
    puVar6 = &uStack_118;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7b70,puVar6,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar3 = 0;
    puVar16 = auStack_f8;
    puVar14 = param_4;
    do {
      if ((&cStack_c9)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar11);
  _objc_release(ppuVar4);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puVar13 = &uStack_1a0;
  puStack_128 = &LAB_108bf7038;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar9;
  puVar12 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar16;
  ppuStack_148 = ppuVar5;
  puStack_140 = puVar11;
  ppuStack_138 = ppuVar4;
  ppuStack_130 = &puStack_90;
  _objc_retain(ppuVar9);
  plVar15 = (long *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar9;
      _objc_retainAutorelease(ppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar9);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,ppuVar5);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    ppuVar10 = (undefined **)&UNK_110ab7bc0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7bc0,&uStack_1a0,puVar6);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar12 = puVar13;
    puVar14 = puVar6;
    puVar16 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar12 = puVar13;
      puVar14 = puVar6;
      puVar16 = &uStack_1a0;
    }
  }
  ppuVar5 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puVar6 = &uStack_220;
  puStack_1a8 = &LAB_108bf71ac;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar10;
  puVar11 = puVar12;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar16;
  plStack_1c8 = plVar15;
  ppuStack_1c0 = ppuVar5;
  ppuStack_1b8 = ppuVar9;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(ppuVar10);
  plVar15 = (long *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar10);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar10;
      _objc_retainAutorelease(ppuVar10);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar10);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,ppuVar5);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    ppuVar4 = (undefined **)&UNK_110ab7c10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c10,&uStack_220,puVar12);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar11 = puVar6;
    puVar14 = puVar12;
    puVar16 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar11 = puVar6;
      puVar14 = puVar12;
      puVar16 = &uStack_220;
    }
  }
  ppuVar5 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar10);
  _objc_release(ppuVar10);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puStack_228 = &LAB_108bf7320;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar4;
  puVar6 = puVar11;
  puVar12 = puVar14;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar16;
  plStack_248 = plVar15;
  ppuStack_240 = ppuVar5;
  ppuStack_238 = ppuVar10;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_298;
    func_0x000107c278b8(auStack_298,ppuVar5);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_280,puVar6);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_268,2);
    ppuVar9 = (undefined **)&UNK_110ab7c60;
    unaff_x23 = &uStack_2b8;
    puVar6 = &uStack_2b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c60,puVar6,puVar14);
    puStack_2a0 = unaff_x23;
    func_0x000107c278ac(&puStack_2a0);
    lVar3 = 0;
    puVar16 = auStack_298;
    puVar12 = puVar14;
    do {
      if ((&cStack_269)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(puVar11);
    _objc_release(ppuVar4);
    ppuVar7 = ppuVar5;
    __Unwind_Resume();
    puStack_2c8 = &LAB_108bf7550;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar9;
    puVar14 = puVar6;
    puVar13 = puVar12;
    puStack_300 = unaff_x24;
    puStack_2f8 = unaff_x23;
    puStack_2f0 = puVar16;
    ppuStack_2e8 = ppuVar5;
    puStack_2e0 = puVar11;
    ppuStack_2d8 = ppuVar4;
    pppuStack_2d0 = &pppuStack_230;
    _objc_retain(ppuVar9);
    _objc_retain(puVar6);
    puVar11 = (undefined8 *)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      plVar15 = (long *)ppuVar7[1];
      _objc_retain(ppuVar9);
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f508987;
      }
      else {
        ppuVar5 = ppuVar9;
        _objc_retainAutorelease(ppuVar9);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar9);
      unaff_x24 = auStack_338;
      func_0x000107c278b8(auStack_338,ppuVar5);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&UNK_10f508987;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar11 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_320,puVar11);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x000107c27984(&uStack_358,auStack_338,&lStack_308,2);
      ppuVar10 = (undefined **)&UNK_110ab7cb0;
      unaff_x23 = &uStack_358;
      puVar14 = &uStack_358;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7cb0,puVar14,puVar12);
      puStack_340 = unaff_x23;
      func_0x000107c278ac(&puStack_340);
      lVar3 = 0;
      puVar11 = auStack_338;
      puVar13 = puVar12;
      do {
        if ((&cStack_309)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    _objc_release(puVar6);
    ppuVar5 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(puVar6);
    _objc_release(ppuVar9);
    ppuVar4 = ppuVar5;
    __Unwind_Resume();
    puStack_368 = &LAB_108bf7780;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_3a0 = unaff_x24;
    puStack_398 = unaff_x23;
    puStack_390 = puVar11;
    ppuStack_388 = ppuVar5;
    puStack_380 = puVar6;
    ppuStack_378 = ppuVar9;
    pppuStack_370 = &pppuStack_2d0;
    _objc_retain(ppuVar10);
    _objc_retain(puVar14);
    if (ppuVar4 != (undefined **)0x0) {
      plVar15 = (long *)ppuVar4[1];
      _objc_retain(ppuVar10);
      if (ppuVar10 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f508987;
      }
      else {
        ppuVar5 = ppuVar10;
        _objc_retainAutorelease(ppuVar10);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar10);
      func_0x000107c278b8(auStack_3d8,ppuVar5);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&UNK_10f508987;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar11 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x000107c278b8(auStack_3c0,puVar11);
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      func_0x000107c27984(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7d00,&uStack_3f8,puVar13);
      puStack_3e0 = &uStack_3f8;
      func_0x000107c278ac(&puStack_3e0);
      lVar3 = 0;
      do {
        if ((&cStack_3a9)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    _objc_release(puVar14);
    ppuVar5 = ppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(puVar14);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(puVar14);
      _objc_release(ppuVar10);
      __Unwind_Resume();
      func_0x000100c55f24(&plStack_460,ppuVar5 + 9);
      puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0();
      lVar3 = *plStack_460;
      if (plStack_460[1] != lVar3) {
        lVar17 = 0;
        uVar18 = 0;
        do {
          lVar3 = lVar3 + lVar17;
          _objc_loadWeakRetained();
          if ((lVar3 != 0) &&
             (func_0x00010bf06ba0(puVar8), uVar18 != (plStack_460[1] - *plStack_460 >> 3) - 1U)) {
            func_0x00010bf070e0(puVar8);
          }
          _objc_release(lVar3);
          uVar18 = uVar18 + 1;
          lVar3 = *plStack_460;
          lVar17 = lVar17 + 8;
        } while (uVar18 < (ulong)(plStack_460[1] - lVar3 >> 3));
      }
      func_0x00010bf070e0(puVar8);
      if (plStack_458 != (long *)0x0) {
        plVar15 = plStack_458 + 1;
        do {
          lVar3 = *plVar15;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 == 0) {
          (**(code **)(*plStack_458 + 0x10))(plStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_458);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    return;
  }
  return;
}


