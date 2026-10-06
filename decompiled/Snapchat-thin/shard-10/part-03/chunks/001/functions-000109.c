/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f21ce4; end: 107f21ce7;  */

void FUN_107f21ce4(void)

{
  return;
}



/* Entry: 107f21ce8; end: 107f21e9f;  */

void FUN_107f21ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d8628;
    _objc_alloc();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0(lVar4);
    lVar1 = *(long *)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar10 = *(long *)(param_1 + 0x48);
    lVar11 = *(long *)(lVar2 + 0x198);
    func_0x00010bf529e0(lVar5);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x50)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c067ec0();
    func_0x00010c047f00(puVar3,param_2,uVar8,lVar4 != 0,lVar1 != 0,lVar11 <= lVar10,lVar5 != 0,
                        puVar7,(int)*(undefined8 *)(param_1 + 0x48));
    _objc_release(puVar6);
    uStack_78 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar2 + 0x18);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + 0x188);
    uVar9 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c11de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066920(uVar8,param_2,uVar12,puVar6,uVar9,&PTR___NSConcreteGlobalBlock_110a136c0);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107f21ea0; end: 107f21ea3;  */

void FUN_107f21ea0(void)

{
  return;
}



/* Entry: 107f21ea4; end: 107f22097; -[SCGallerySearchIndexer addressTitleForGallerySnap:queue:completionHandler:] */

void FUN_107f21ea4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107f22098;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_5);
    uStack_48 = param_5;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x00010007380c(param_4,&puStack_70);
    _objc_release(lStack_50);
    _objc_release(uStack_48);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c134880(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f22098; end: 107f220ab;  */

void FUN_107f22098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f220a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107f220ac; end: 107f22247;  */

void FUN_107f220ac(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      _objc_initWeak(auStack_58,lVar1);
      uVar2 = *(undefined8 *)(lVar1 + 0x58);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      func_0x00010c135bc0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107f22248; end: 107f2238f;  */

void FUN_107f22248(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    FUN_107f49238();
    if ((int)uVar2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
    }
    else {
      _objc_initWeak(auStack_58,lVar1);
      uVar3 = *(undefined8 *)(lVar1 + 0x88);
      _objc_copyWeak(auStack_60,auStack_58);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar4);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      func_0x00010befd740(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107f22390; end: 107f2244b;  */

void FUN_107f22390(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    if ((param_2 == 0) || (param_3 != 0)) {
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),0);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),param_2);
      uVar3 = *(undefined8 *)(lVar2 + 0x58);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130c60(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f2244c; end: 107f22507; -[SCGallerySearchIndexer fetchTagsWithSnapId:database:] */

void FUN_107f2244c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126d8610;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c267020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0xffffffffffffffff;
  func_0x00010be97bc0(param_1,param_2,&uStack_38,param_3,puVar1,param_4);
  func_0x00010be14e40(param_1,param_2,param_3,uStack_38,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f22508; end: 107f22f2f; -[SCGallerySearchIndexer _fetchTagsWithSnapId:fromRowid:database:] */

void FUN_107f22508(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined *unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_4d0;
  undefined8 uStack_4c8;
  code *pcStack_4c0;
  undefined *puStack_4b8;
  undefined1 auStack_4b0 [8];
  undefined1 auStack_4a8 [8];
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  long lStack_488;
  undefined1 *puStack_480;
  code *pcStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  long lStack_448;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_1a0;
  long lStack_118;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == -1) {
    puVar6 = (undefined *)0x0;
    puVar10 = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010bf9b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar10);
    lStack_3c8 = lVar1;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lStack_3d0 = 0;
    }
    else {
      lVar11 = lVar1;
      func_0x00010c25d280();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c067ec0();
      lStack_3d0 = (long)(int)lVar12;
      _objc_release(lVar11);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_5;
    func_0x00010bf9b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar10);
    lStack_3e0 = lVar11;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar11 == 0) {
      lStack_3f8 = 0;
      lStack_3f0 = 0;
      lStack_3e8 = 0;
      lStack_3d8 = 0;
    }
    else {
      lVar1 = lVar11;
      func_0x00010c25d280(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010beca620();
      _objc_retainAutoreleasedReturnValue();
      lStack_3d8 = lVar12;
      _objc_release(lVar1);
      lVar1 = lVar11;
      func_0x00010c25d280(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010beca620();
      _objc_retainAutoreleasedReturnValue();
      lStack_3e8 = lVar12;
      _objc_release(lVar1);
      lVar1 = lVar11;
      func_0x00010c25d280(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010beca620();
      _objc_retainAutoreleasedReturnValue();
      lStack_3f0 = lVar12;
      _objc_release(lVar1);
      lVar1 = lVar11;
      func_0x00010c25d280(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010beca620();
      _objc_retainAutoreleasedReturnValue();
      lStack_3f8 = lVar12;
      _objc_release(lVar1);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010bf9b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar10);
    lStack_400 = lVar1;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    if (lVar1 == 0) {
      lStack_410 = 0;
    }
    else {
      lVar11 = lVar1;
      func_0x00010c25d280();
      _objc_retainAutoreleasedReturnValue();
      lStack_410 = lVar11;
    }
    lStack_408 = lVar1;
    lStack_3c0 = param_5;
    lStack_3b8 = param_3;
    if (param_3 == 0) {
      lVar11 = 0;
      puVar10 = (undefined *)0x0;
      unaff_x20 = (undefined *)0x0;
      lStack_470 = 0;
      lStack_468 = 0;
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_90 = param_3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      plStack_2d0 = (long *)0x0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      puStack_418 = (undefined *)param_5;
      func_0x00010c142300();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar11 = *plStack_2d0;
        do {
          lVar12 = 0;
          do {
            if (*plStack_2d0 != lVar11) {
              _objc_enumerationMutation(param_5);
            }
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar5 = *(undefined8 *)(lStack_2d8 + lVar12 * 8);
            func_0x00010bf88340(uVar5);
            func_0x00010c0df720(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d280(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar6);
            _objc_release(uVar5);
            _objc_release(puVar10);
            lVar12 = lVar12 + 1;
          } while (lVar1 != lVar12);
          lVar1 = param_5;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(param_5);
      puVar10 = puVar6;
      func_0x00010bf51e00();
      lVar11 = lStack_3b8;
      lStack_118 = lStack_3b8;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_3c0;
      lVar12 = lStack_3c0;
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      lStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      plStack_310 = (long *)0x0;
      lStack_428 = lVar12;
      func_0x00010c142300();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar12;
      func_0x00010bf52a60();
      if (lVar8 != 0) {
        lVar7 = *plStack_310;
        do {
          lVar9 = 0;
          do {
            if (*plStack_310 != lVar7) {
              _objc_enumerationMutation(lVar12);
            }
            lVar3 = *(long *)(lStack_318 + lVar9 * 8);
            func_0x00010c25d280();
            _objc_retainAutoreleasedReturnValue();
            lStack_3a8 = lVar3;
            if (lVar3 != 0) goto LAB_107f22abc;
            lVar9 = lVar9 + 1;
          } while (lVar8 != lVar9);
          lVar8 = lVar12;
          func_0x00010bf52a60();
        } while (lVar8 != 0);
      }
      lStack_3a8 = 0;
LAB_107f22abc:
      _objc_release(lVar12);
      lStack_1a0 = lVar11;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      lStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      plStack_350 = (long *)0x0;
      lStack_430 = lVar1;
      func_0x00010c142300();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010bf52a60();
      puStack_420 = puVar10;
      if (lVar11 != 0) {
        lVar12 = *plStack_350;
        do {
          lVar8 = 0;
          do {
            if (*plStack_350 != lVar12) {
              _objc_enumerationMutation(lVar1);
            }
            lVar7 = *(long *)(lStack_358 + lVar8 * 8);
            func_0x00010c25d280();
            _objc_retainAutoreleasedReturnValue();
            lStack_3b0 = lVar7;
            if (lVar7 != 0) goto LAB_107f22bc0;
            lVar8 = lVar8 + 1;
          } while (lVar11 != lVar8);
          lVar11 = lVar1;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      lStack_3b0 = 0;
LAB_107f22bc0:
      _objc_release(lVar1);
      lVar11 = *(long *)(param_1 + 0x188);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar11;
      FUN_107ff10a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      plStack_390 = (long *)0x0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      lStack_438 = lVar1;
      func_0x00010c086780();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010bf52a60();
      if (lVar11 != 0) {
        lVar12 = *plStack_390;
        do {
          lVar8 = 0;
          do {
            if (*plStack_390 != lVar12) {
              _objc_enumerationMutation(lVar1);
            }
            lVar9 = *(long *)(lStack_398 + lVar8 * 8);
            lVar7 = lVar9;
            func_0x00010bf306a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar7 != 0) {
              lVar7 = lVar9;
              func_0x00010bf306a0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar7;
              func_0x00010bf51e00();
              func_0x00010befa120(puVar2);
              _objc_release(lVar3);
              _objc_release(lVar7);
            }
            lVar7 = lVar9;
            func_0x00010bf8dce0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar7 != 0) {
              func_0x00010bf8dce0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(lVar9);
            }
            lVar8 = lVar8 + 1;
          } while (lVar11 != lVar8);
          lVar11 = lVar1;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(lVar1);
      unaff_x20 = puVar2;
      func_0x00010bf51e00();
      puVar10 = puVar4;
      func_0x00010bf51e00();
      lVar1 = lStack_438;
      lVar12 = lStack_438;
      func_0x00010c0cff80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar12;
      func_0x00010c067ec0();
      lVar11 = (long)(int)lVar11;
      _objc_release(lVar12);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(lVar1);
      _objc_release(lStack_430);
      _objc_release(lStack_428);
      _objc_release(puVar6);
      _objc_release(puStack_418);
      lStack_468 = lStack_3b0;
      lStack_470 = lStack_3a8;
      puVar2 = puStack_420;
    }
    puVar6 = PTR_PTR_1126d8630;
    puStack_418 = unaff_x20;
    lStack_3b0 = lStack_468;
    lStack_3a8 = lStack_470;
    _objc_alloc();
    func_0x00010bf51e00();
    puVar4 = puVar10;
    func_0x00010bf51e00();
    unaff_x19 = lStack_3d8;
    lVar9 = lStack_3e8;
    lVar7 = lStack_3f0;
    lVar8 = lStack_3f8;
    lVar12 = lStack_410;
    lStack_460 = lStack_410;
    lVar1 = lStack_3d0;
    puStack_458 = unaff_x20;
    puStack_450 = puVar4;
    lStack_448 = lVar11;
    func_0x00010c0504e0();
    _objc_release(puVar4);
    _objc_release(unaff_x20);
    _objc_release(lStack_400);
    _objc_release(lStack_3e0);
    _objc_release(lStack_408);
    _objc_release(lStack_3c8);
    _objc_release(puVar10);
    _objc_release(puStack_418);
    _objc_release(lVar12);
    _objc_release(lStack_3a8);
    _objc_release(puVar2);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(lStack_3b0);
    _objc_release(lVar9);
    _objc_release(unaff_x19);
    param_5 = lStack_3c0;
    param_3 = lStack_3b8;
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_478 = FUN_107f22f30;
    puStack_4a0 = puVar6;
    puStack_498 = puVar10;
    puStack_490 = unaff_x20;
    lStack_488 = unaff_x19;
    puStack_480 = &stack0xfffffffffffffff0;
    _objc_retain(lVar1);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c920();
    _objc_release(uVar5);
    _objc_initWeak(auStack_4a8,param_3);
    puStack_4d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4c8 = 0xc2000000;
    pcStack_4c0 = FUN_107f23000;
    puStack_4b8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_4b0,auStack_4a8);
    func_0x000100162d98("APPSTORE",&puStack_4d0);
    _objc_destroyWeak(auStack_4b0);
    _objc_destroyWeak(auStack_4a8);
    _objc_release(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f22f30; end: 107f22fff; -[SCGallerySearchIndexer deleteSnapWithSnapIds:] */

void FUN_107f22f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c920();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107f23000;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f23000; end: 107f23037;  */

void FUN_107f23000(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c153b40(*(undefined8 *)(param_1 + 0x70),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f23038; end: 107f2311b; -[SCGallerySearchIndexer addListener:] */

void FUN_107f23038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x70));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f2311c; end: 107f231e7;  */

void FUN_107f2311c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x68);
    _objc_initWeak(auStack_38,lVar1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107f231e8;
    puStack_58 = &UNK_110842a68;
    _objc_copyWeak(auStack_48,auStack_38);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    uStack_40 = uVar3;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107f231e8; end: 107f23227;  */

void FUN_107f231e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c153b20(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f23228; end: 107f2322f; -[SCGallerySearchIndexer removeListener:] */

void FUN_107f23228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107f23230; end: 107f23393; -[SCGallerySearchIndexer _transitToState:serviceTerm:] */

void FUN_107f23230(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  *(long *)(param_1 + 0x68) = param_3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar2 = param_1;
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010bf69ba0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107f232fc;
    }
    if (param_3 != 1) goto LAB_107f23314;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107f23394;
    puStack_58 = &UNK_110841f80;
    _objc_retain(param_4);
    lStack_50 = param_4;
    lStack_48 = param_1;
    func_0x00010c0f7fe0(0x4020000000000000,uVar3);
    lVar2 = lStack_50;
  }
  else {
    if ((param_3 != 3) && (param_3 != 2)) goto LAB_107f23314;
    func_0x00010bf69da0(param_1);
    _objc_retainAutoreleasedReturnValue();
LAB_107f232fc:
    func_0x00010bf95760(param_4);
  }
  _objc_release(lVar2);
LAB_107f23314:
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x107f233d0;
  puStack_90 = &UNK_110846540;
  _objc_copyWeak(auStack_88,auStack_78);
  lStack_80 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_a8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  return;
}



/* Entry: 107f23394; end: 107f2340f;  */

void FUN_107f23394(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf69da0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95760(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f23410; end: 107f234f7; -[SCGallerySearchIndexer _indexSnapsWithServiceTerm:] */

void FUN_107f23410(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar5 = 3;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
    func_0x00010c07bc40();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf04a20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40),param_2,uVar3);
      uVar5 = uVar3;
      func_0x00010c23f220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfbaf80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be38b00(param_1,param_2,uVar5,uVar4,param_3);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar3);
      goto LAB_107f234e0;
    }
    uVar5 = 1;
  }
  func_0x00010becef40(param_1,param_2,uVar5,param_3);
LAB_107f234e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f234f8; end: 107f235db; -[SCGallerySearchIndexer _adjustPendingSnapsWithServiceTerm:] */

void FUN_107f234f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010befa160(uVar3,param_2,uVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf69da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2254a0(puVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010becef40(param_1,param_2,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f235dc; end: 107f239af; -[SCGallerySearchIndexer _setupDatabase:] */

void FUN_107f235dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6758);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x128);
    *(long *)(param_1 + 0x128) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6778);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    *(long *)(param_1 + 0x130) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6798);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    *(long *)(param_1 + 0x110) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec67b8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    *(long *)(param_1 + 0x138) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec67d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    *(long *)(param_1 + 0x148) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec67f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    *(long *)(param_1 + 0x140) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6818);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    *(long *)(param_1 + 0x100) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6838);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    *(long *)(param_1 + 0x108) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6858);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    *(long *)(param_1 + 0x120) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6878);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa8) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6898);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec68b8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec68d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(long *)(param_1 + 200) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec68f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(long *)(param_1 + 0xd0) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6918);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6938);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    *(long *)(param_1 + 0xd8) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6958);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(long *)(param_1 + 0xc0) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6978);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    *(long *)(param_1 + 0xe8) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6998);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xf0) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec69b8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec69d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec69f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x150);
    *(long *)(param_1 + 0x150) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec6a18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    *(long *)(param_1 + 0x158) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107f239b0; end: 107f23bcb; -[SCGallerySearchIndexer _indexDuplicateSnap:fromSnap:serviceTerm:] */

void FUN_107f239b0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c06cde0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010beb3d80(), (uVar1 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar4 = PTR_PTR_1126d85e0;
    _objc_alloc(PTR_PTR_1126d85e0);
    func_0x00010c046f80();
    func_0x00010befa120(uVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c3c50;
    func_0x00010bf69d80(PTR_PTR_1126c3c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95760(param_5);
    _objc_release(puVar4);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f23bcc; end: 107f23d93;  */

void FUN_107f23bcc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_107f23d38;
  puVar2 = PTR_PTR_1126d8610;
  func_0x00010c267020(PTR_PTR_1126d8610);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010be97bc0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0580(*(undefined8 *)(uVar1 + 0x78));
    uVar4 = uVar1;
    func_0x00010bdc7a00();
    _objc_release(uVar3);
    if (uVar4 != 0xffffffffffffffff) {
      func_0x00010c089000();
      goto LAB_107f23cb0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = PTR_PTR_1126c3c50;
    func_0x00010bf69d80(PTR_PTR_1126c3c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95760(uVar3);
    _objc_release(puVar6);
  }
  else {
LAB_107f23cb0:
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be97bc0();
      _objc_release(lVar5);
    }
    func_0x00010bee02c0(uVar1);
  }
  _objc_release(puVar2);
LAB_107f23d38:
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107f23d94; end: 107f23eaf; -[SCGallerySearchIndexer _rowid:forGallerySnapId:languageId:database:] */

undefined *
FUN_107f23d94(undefined8 param_1,long param_2,undefined8 param_3,ulong *param_4,undefined8 param_5,
             undefined *param_6,undefined *param_7,long param_8,undefined8 param_9)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  byte bVar22;
  long lVar23;
  undefined1 uVar24;
  undefined1 auStack_460 [8];
  undefined8 uStack_458;
  undefined1 uStack_450;
  undefined1 uStack_44f;
  undefined1 uStack_44e;
  byte bStack_44d;
  undefined1 uStack_44c;
  undefined1 auStack_448 [8];
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_140;
  long lStack_c0;
  undefined *puStack_b8;
  
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_2 + 0x128);
  puVar9 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_7;
  puVar17 = puVar20;
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puVar20);
  puVar20 = puVar3;
  func_0x00010bfb1b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar20 != (undefined *)0x0) {
    lVar16 = 0;
    puVar4 = puVar20;
    func_0x00010c0b4ae0();
    *param_4 = (ulong)puVar4;
  }
  _objc_release(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return (undefined *)(ulong)(puVar20 != (undefined *)0x0);
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar17;
  puVar14 = puVar9;
  _objc_retain(lVar16);
  _objc_retain(puVar17);
  _objc_retain(puVar9);
  puVar4 = puVar9;
  func_0x00010bf9b060();
  puVar20 = puVar9;
  puVar7 = puVar9;
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010c089000();
LAB_107f23fd4:
    func_0x00010c089000();
    iVar2 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    puVar13 = puVar5;
    func_0x00010bf9b080();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c089000();
    lStack_c0 = lVar16;
    puStack_b8 = puVar17;
    if (((ulong)puVar6 & 1) == 0) goto LAB_107f23fd4;
    puVar4 = puVar9;
    func_0x00010bf9b060();
    func_0x00010c089000();
    iVar2 = 0;
    if ((int)puVar4 != 0) {
      puVar4 = puVar9;
      func_0x00010bf9b060();
      iVar2 = (int)puVar4;
    }
  }
  puVar4 = puVar9;
  func_0x00010c089000();
  if ((puVar20 == puVar7) && (puVar7 == puVar4)) {
    if (iVar2 == 0) goto LAB_107f2403c;
LAB_107f24000:
    puVar3 = puVar9;
    func_0x00010bf9b060();
    if ((int)puVar3 == 0) {
      puVar20 = (undefined *)0xffffffffffffffff;
    }
  }
  else {
    uVar8 = *(undefined8 *)(puVar3 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4980();
    _objc_release(uVar8);
    if (iVar2 != 0) goto LAB_107f24000;
LAB_107f2403c:
    puVar20 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(puVar9);
  _objc_release(puVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return puVar20;
  }
  ___stack_chk_fail();
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(param_6);
  _objc_retain(puVar14);
  _objc_retain(param_9);
  _objc_retain(lStack_c0);
  _objc_retain(puStack_b8);
  _CACurrentMediaTime();
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_107f24bec;
  uStack_1d0 = 0x107f24bfc;
  uStack_1c8 = 0;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x3032000000;
  pcStack_208 = FUN_107f24bec;
  uStack_200 = 0x107f24bfc;
  uStack_1f8 = 0;
  puStack_248 = &uStack_250;
  uStack_250 = 0;
  uStack_240 = 0x3032000000;
  pcStack_238 = FUN_107f24bec;
  uStack_230 = 0x107f24bfc;
  uStack_228 = 0;
  puStack_278 = &uStack_280;
  uStack_280 = 0;
  uStack_270 = 0x3032000000;
  pcStack_268 = FUN_107f24bec;
  uStack_260 = 0x107f24bfc;
  uStack_258 = 0;
  puStack_2a8 = &uStack_2b0;
  uStack_2b0 = 0;
  uStack_2a0 = 0x3032000000;
  pcStack_298 = FUN_107f24bec;
  uStack_290 = 0x107f24bfc;
  uStack_288 = 0;
  puStack_2d8 = &uStack_2e0;
  uStack_2e0 = 0;
  uStack_2d0 = 0x3032000000;
  pcStack_2c8 = FUN_107f24bec;
  uStack_2c0 = 0x107f24bfc;
  uStack_2b8 = 0;
  puStack_308 = &uStack_310;
  uStack_310 = 0;
  uStack_300 = 0x3032000000;
  pcStack_2f8 = FUN_107f24bec;
  uStack_2f0 = 0x107f24bfc;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_338 = &uStack_340;
  uStack_340 = 0;
  uStack_330 = 0x3032000000;
  pcStack_328 = FUN_107f24bec;
  uStack_320 = 0x107f24bfc;
  uStack_318 = 0;
  puStack_358 = &uStack_360;
  uStack_360 = 0;
  uStack_350 = 0x2020000000;
  uStack_348 = 0;
  puStack_388 = &uStack_390;
  uStack_390 = 0;
  uStack_380 = 0x3032000000;
  pcStack_378 = FUN_107f24bec;
  uStack_370 = 0x107f24bfc;
  uStack_368 = 0;
  puStack_3a8 = &uStack_3b0;
  uStack_3b0 = 0;
  uStack_3a0 = 0x2020000000;
  uStack_398 = 0;
  puStack_3d8 = &uStack_3e0;
  uStack_3e0 = 0;
  uStack_3d0 = 0x3032000000;
  pcStack_3c8 = FUN_107f24bec;
  uStack_3c0 = 0x107f24bfc;
  uStack_3b8 = 0;
  if (param_6 == (undefined *)0x0) {
    puVar20 = puVar13;
    func_0x00010c241220(puVar13);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar20 = param_6;
    func_0x00010c241220(param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar15 = lVar16;
  func_0x00010be14e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == (undefined *)0x0) {
LAB_107f24524:
    _objc_release(puVar20);
  }
  else {
    _objc_release(puVar20);
    puVar20 = PTR_PTR_1126bc7b8;
    if (param_8 != -1) {
      uVar8 = *(undefined8 *)(lVar16 + 0x168);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar3 = puVar20;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar3;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010c297ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar9;
      func_0x00010bf1f3c0();
      _objc_release(puVar9);
      _objc_release(puVar17);
      _objc_release(puVar3);
      if ((int)puVar4 != 0) {
        puVar3 = puVar20;
        func_0x00010c0ef4a0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar3;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar17;
        func_0x00010c297c00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar9;
        func_0x00010c15a3e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar17);
        _objc_release(puVar3);
        uStack_3f8 = 0;
        uStack_400 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        lStack_418 = 0;
        uStack_420 = 0;
        uStack_408 = 0;
        plStack_410 = (long *)0x0;
        puVar3 = puVar20;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar3;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar17;
        func_0x00010c297c00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        func_0x00010c2981c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar17);
        _objc_release(puVar3);
        puVar3 = puVar7;
        func_0x00010bf52a60();
        if (puVar3 != (undefined *)0x0) {
          lVar23 = *plStack_410;
          do {
            puVar17 = (undefined *)0x0;
            do {
              if (*plStack_410 != lVar23) {
                _objc_enumerationMutation(puVar7);
              }
              uVar21 = *(undefined8 *)(lStack_418 + (long)puVar17 * 8);
              uVar8 = uVar21;
              func_0x00010c297e20();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar8;
              func_0x00010c0720c0();
              _objc_release(uVar8);
              if ((int)uVar10 != 0) {
                func_0x00010c0d4f60();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = puStack_338[5];
                puStack_338[5] = uVar21;
                _objc_release(uVar8);
                goto LAB_107f24514;
              }
              puVar17 = puVar17 + 1;
            } while (puVar3 != puVar17);
            puVar3 = puVar7;
            func_0x00010bf52a60();
          } while (puVar3 != (undefined *)0x0);
        }
LAB_107f24514:
        _objc_release(puVar7);
        _objc_release(puVar4);
      }
      goto LAB_107f24524;
    }
  }
  lVar23 = lVar15;
  func_0x00010c26f9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar23;
  func_0x00010bf529e0();
  _objc_release(lVar23);
  if (lVar11 == 0) {
    puVar20 = puVar13;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar1 = puVar20 != (undefined *)0x0;
  }
  else {
    lVar23 = lVar15;
    func_0x00010c26f9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puStack_1e8[5];
    puStack_1e8[5] = lVar23;
    _objc_release(uVar8);
    bVar1 = false;
  }
  lVar23 = lVar15;
  func_0x00010c09f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar23;
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    _objc_release(lVar23);
LAB_107f24650:
    puVar20 = puVar13;
    func_0x00010bfd89e0();
    uVar24 = SUB81(puVar20,0);
  }
  else {
    lVar11 = lVar15;
    func_0x00010c09ebc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar23);
    if (lVar11 == 0) goto LAB_107f24650;
    lVar23 = lVar15;
    func_0x00010c09f7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar23;
    func_0x00010c0d3c80();
    uVar8 = puStack_218[5];
    puStack_218[5] = lVar11;
    _objc_release(uVar8);
    _objc_release(lVar23);
    lVar23 = lVar15;
    func_0x00010c09ebc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puStack_248[5];
    puStack_248[5] = lVar23;
    _objc_release(uVar8);
    uVar24 = 0;
  }
  lVar23 = lVar15;
  func_0x00010c2a05e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar23;
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    _objc_release(lVar23);
LAB_107f24744:
    uVar19 = 1;
  }
  else {
    lVar11 = lVar15;
    func_0x00010c2a0620();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf529e0();
    if (lVar12 == 0) {
      _objc_release(lVar11);
      _objc_release(lVar23);
      goto LAB_107f24744;
    }
    lVar12 = lVar15;
    func_0x00010c268360();
    iVar2 = (int)*(undefined8 *)(lVar16 + 0x78);
    func_0x00010c2a0580();
    _objc_release(lVar11);
    _objc_release(lVar23);
    if (lVar12 < iVar2) goto LAB_107f24744;
    lVar23 = lVar15;
    func_0x00010c2a0620();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puStack_2a8[5];
    puStack_2a8[5] = lVar23;
    _objc_release(uVar8);
    lVar23 = lVar15;
    func_0x00010c2681c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puStack_2d8[5];
    puStack_2d8[5] = lVar23;
    _objc_release(uVar8);
    lVar23 = lVar15;
    func_0x00010c268360();
    uVar19 = 0;
    puStack_358[3] = lVar23;
  }
  lVar23 = lVar15;
  func_0x00010c271080();
  if (lVar23 < *(long *)(lVar16 + 0x198)) {
    puVar20 = puVar13;
    func_0x00010b5f8c08();
    bVar22 = (byte)puVar20 ^ 1;
  }
  else {
    lVar23 = lVar15;
    func_0x00010c270fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar23;
    func_0x00010bf51e00();
    uVar8 = puStack_388[5];
    puStack_388[5] = lVar11;
    _objc_release(uVar8);
    _objc_release(lVar23);
    lVar23 = lVar15;
    func_0x00010c271080();
    bVar22 = 0;
    *(int *)(puStack_3a8 + 3) = (int)lVar23;
  }
  lVar23 = lVar15;
  func_0x00010c271020();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar23;
  func_0x00010bf529e0();
  _objc_release(lVar23);
  if (lVar11 == 0) {
    puVar20 = puVar13;
    func_0x00010b5f8c08();
    if (((ulong)puVar20 & 1) == 0) {
      uVar18 = (undefined1)*(undefined8 *)(lVar16 + 0x180);
      func_0x000108ec1e40();
      goto LAB_107f2482c;
    }
  }
  else {
    lVar23 = lVar15;
    func_0x00010c271020();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar23;
    func_0x00010bf51e00();
    uVar8 = puStack_3d8[5];
    puStack_3d8[5] = lVar11;
    _objc_release(uVar8);
    _objc_release(lVar23);
  }
  uVar18 = 0;
LAB_107f2482c:
  puStack_438 = &uStack_440;
  uStack_440 = 0;
  uStack_430 = 0x2020000000;
  uStack_428 = 1;
  _objc_initWeak(auStack_448,lVar16);
  uVar8 = *(undefined8 *)(lVar16 + 0x38);
  _objc_copyWeak(auStack_460,auStack_448);
  uStack_450 = uVar24;
  _objc_retain(puVar13);
  _objc_retain(param_6);
  uStack_44f = bVar1;
  uStack_44e = uVar19;
  bStack_44d = bVar22;
  uStack_44c = uVar18;
  _objc_retain(puVar14);
  _objc_retain(param_9);
  uStack_458 = param_1;
  _objc_retain(puStack_b8);
  func_0x00010c0f7fc0(uVar8);
  _objc_release(puStack_b8);
  _objc_release(param_9);
  _objc_release(puVar14);
  _objc_release(param_6);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_460);
  _objc_destroyWeak(auStack_448);
  __Block_object_dispose(&uStack_440,8);
  _objc_release(lVar15);
  __Block_object_dispose(&uStack_3e0,8);
  _objc_release(uStack_3b8);
  __Block_object_dispose(&uStack_3b0,8);
  __Block_object_dispose(&uStack_390,8);
  _objc_release(uStack_368);
  __Block_object_dispose(&uStack_360,8);
  __Block_object_dispose(&uStack_340,8);
  _objc_release(uStack_318);
  __Block_object_dispose(&uStack_310,8);
  _objc_release(ppuStack_2e8);
  __Block_object_dispose(&uStack_2e0,8);
  _objc_release(uStack_2b8);
  __Block_object_dispose(&uStack_2b0,8);
  _objc_release(uStack_288);
  __Block_object_dispose(&uStack_280,8);
  _objc_release(uStack_258);
  __Block_object_dispose(&uStack_250,8);
  _objc_release(uStack_228);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(uStack_1f8);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(uStack_1c8);
  _objc_release(puStack_b8);
  _objc_release(lStack_c0);
  _objc_release(param_9);
  _objc_release(puVar14);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_140) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_3e0,8);
    __Block_object_dispose(&uStack_3b0,8);
    __Block_object_dispose(&uStack_390,8);
    __Block_object_dispose(&uStack_360,8);
    __Block_object_dispose(&uStack_340,8);
    __Block_object_dispose(&uStack_310,8);
    __Block_object_dispose(&uStack_2e0,8);
    __Block_object_dispose(&uStack_2b0,8);
    __Block_object_dispose(&uStack_280,8);
    __Block_object_dispose(&uStack_250,8);
    __Block_object_dispose(&uStack_220,8);
    lVar16 = 8;
    __Block_object_dispose(&uStack_1f0);
    __Unwind_Resume();
    *(undefined8 *)(puVar13 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
    *(undefined8 *)(lVar16 + 0x28) = 0;
    return puVar13;
  }
  return puVar13;
}



/* Entry: 107f23eb0; end: 107f24093; -[SCGallerySearchIndexer _addOneRowInEachTableForGallerySnapId:languageId:tagVersion:database:] */

undefined *
FUN_107f23eb0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined *param_5,
             undefined *param_6,undefined *param_7,long param_8,undefined8 param_9)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  byte bVar19;
  long lVar20;
  undefined1 uVar21;
  undefined1 auStack_410 [8];
  undefined8 uStack_408;
  undefined1 uStack_400;
  undefined1 uStack_3ff;
  undefined1 uStack_3fe;
  byte bStack_3fd;
  undefined1 uStack_3fc;
  undefined1 auStack_3f8 [8];
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_f0;
  long lStack_70;
  undefined *puStack_68;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_5;
  puVar12 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar3 = param_7;
  func_0x00010bf9b060();
  puVar17 = param_7;
  puVar14 = param_7;
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c089000();
LAB_107f23fd4:
    func_0x00010c089000();
    iVar2 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_7;
    puVar11 = puVar4;
    func_0x00010bf9b080();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c089000();
    lStack_70 = param_4;
    puStack_68 = param_5;
    if (((ulong)puVar5 & 1) == 0) goto LAB_107f23fd4;
    puVar3 = param_7;
    func_0x00010bf9b060();
    func_0x00010c089000();
    iVar2 = 0;
    if ((int)puVar3 != 0) {
      puVar3 = param_7;
      func_0x00010bf9b060();
      iVar2 = (int)puVar3;
    }
  }
  puVar3 = param_7;
  func_0x00010c089000();
  if ((puVar17 == puVar14) && (puVar14 == puVar3)) {
    if (iVar2 == 0) goto LAB_107f2403c;
LAB_107f24000:
    puVar3 = param_7;
    func_0x00010bf9b060();
    if ((int)puVar3 == 0) {
      puVar17 = (undefined *)0xffffffffffffffff;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4980();
    _objc_release(uVar6);
    if (iVar2 != 0) goto LAB_107f24000;
LAB_107f2403c:
    puVar17 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar17;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  _objc_retain(param_6);
  _objc_retain(puVar12);
  _objc_retain(param_9);
  _objc_retain(lStack_70);
  _objc_retain(puStack_68);
  _CACurrentMediaTime();
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_107f24bec;
  uStack_180 = 0x107f24bfc;
  uStack_178 = 0;
  puStack_1c8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  pcStack_1b8 = FUN_107f24bec;
  uStack_1b0 = 0x107f24bfc;
  uStack_1a8 = 0;
  puStack_1f8 = &uStack_200;
  uStack_200 = 0;
  uStack_1f0 = 0x3032000000;
  pcStack_1e8 = FUN_107f24bec;
  uStack_1e0 = 0x107f24bfc;
  uStack_1d8 = 0;
  puStack_228 = &uStack_230;
  uStack_230 = 0;
  uStack_220 = 0x3032000000;
  pcStack_218 = FUN_107f24bec;
  uStack_210 = 0x107f24bfc;
  uStack_208 = 0;
  puStack_258 = &uStack_260;
  uStack_260 = 0;
  uStack_250 = 0x3032000000;
  pcStack_248 = FUN_107f24bec;
  uStack_240 = 0x107f24bfc;
  uStack_238 = 0;
  puStack_288 = &uStack_290;
  uStack_290 = 0;
  uStack_280 = 0x3032000000;
  pcStack_278 = FUN_107f24bec;
  uStack_270 = 0x107f24bfc;
  uStack_268 = 0;
  puStack_2b8 = &uStack_2c0;
  uStack_2c0 = 0;
  uStack_2b0 = 0x3032000000;
  pcStack_2a8 = FUN_107f24bec;
  uStack_2a0 = 0x107f24bfc;
  ppuStack_298 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_2e8 = &uStack_2f0;
  uStack_2f0 = 0;
  uStack_2e0 = 0x3032000000;
  pcStack_2d8 = FUN_107f24bec;
  uStack_2d0 = 0x107f24bfc;
  uStack_2c8 = 0;
  puStack_308 = &uStack_310;
  uStack_310 = 0;
  uStack_300 = 0x2020000000;
  uStack_2f8 = 0;
  puStack_338 = &uStack_340;
  uStack_340 = 0;
  uStack_330 = 0x3032000000;
  pcStack_328 = FUN_107f24bec;
  uStack_320 = 0x107f24bfc;
  uStack_318 = 0;
  puStack_358 = &uStack_360;
  uStack_360 = 0;
  uStack_350 = 0x2020000000;
  uStack_348 = 0;
  puStack_388 = &uStack_390;
  uStack_390 = 0;
  uStack_380 = 0x3032000000;
  pcStack_378 = FUN_107f24bec;
  uStack_370 = 0x107f24bfc;
  uStack_368 = 0;
  if (param_6 == (undefined *)0x0) {
    puVar17 = puVar11;
    func_0x00010c241220(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar17 = param_6;
    func_0x00010c241220(param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar13 = param_4;
  func_0x00010be14e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == (undefined *)0x0) {
LAB_107f24524:
    _objc_release(puVar17);
  }
  else {
    _objc_release(puVar17);
    puVar17 = PTR_PTR_1126bc7b8;
    if (param_8 != -1) {
      uVar6 = *(undefined8 *)(param_4 + 0x168);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar3 = puVar17;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar14;
      func_0x00010c297ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      _objc_release(puVar4);
      _objc_release(puVar14);
      _objc_release(puVar3);
      if ((int)puVar5 != 0) {
        puVar3 = puVar17;
        func_0x00010c0ef4a0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar3;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar14;
        func_0x00010c297c00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c15a3e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar14);
        _objc_release(puVar3);
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        lStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        plStack_3c0 = (long *)0x0;
        puVar3 = puVar17;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar3;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar14;
        func_0x00010c297c00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c2981c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar14);
        _objc_release(puVar3);
        puVar3 = puVar7;
        func_0x00010bf52a60();
        if (puVar3 != (undefined *)0x0) {
          lVar20 = *plStack_3c0;
          do {
            puVar14 = (undefined *)0x0;
            do {
              if (*plStack_3c0 != lVar20) {
                _objc_enumerationMutation(puVar7);
              }
              uVar18 = *(undefined8 *)(lStack_3c8 + (long)puVar14 * 8);
              uVar6 = uVar18;
              func_0x00010c297e20();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar6;
              func_0x00010c0720c0();
              _objc_release(uVar6);
              if ((int)uVar8 != 0) {
                func_0x00010c0d4f60();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = puStack_2e8[5];
                puStack_2e8[5] = uVar18;
                _objc_release(uVar6);
                goto LAB_107f24514;
              }
              puVar14 = puVar14 + 1;
            } while (puVar3 != puVar14);
            puVar3 = puVar7;
            func_0x00010bf52a60();
          } while (puVar3 != (undefined *)0x0);
        }
LAB_107f24514:
        _objc_release(puVar7);
        _objc_release(puVar5);
      }
      goto LAB_107f24524;
    }
  }
  lVar20 = lVar13;
  func_0x00010c26f9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar20;
  func_0x00010bf529e0();
  _objc_release(lVar20);
  if (lVar9 == 0) {
    puVar17 = puVar11;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar1 = puVar17 != (undefined *)0x0;
  }
  else {
    lVar20 = lVar13;
    func_0x00010c26f9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_198[5];
    puStack_198[5] = lVar20;
    _objc_release(uVar6);
    bVar1 = false;
  }
  lVar20 = lVar13;
  func_0x00010c09f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar20;
  func_0x00010bf529e0();
  if (lVar9 == 0) {
    _objc_release(lVar20);
LAB_107f24650:
    puVar17 = puVar11;
    func_0x00010bfd89e0();
    uVar21 = SUB81(puVar17,0);
  }
  else {
    lVar9 = lVar13;
    func_0x00010c09ebc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar20);
    if (lVar9 == 0) goto LAB_107f24650;
    lVar20 = lVar13;
    func_0x00010c09f7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar20;
    func_0x00010c0d3c80();
    uVar6 = puStack_1c8[5];
    puStack_1c8[5] = lVar9;
    _objc_release(uVar6);
    _objc_release(lVar20);
    lVar20 = lVar13;
    func_0x00010c09ebc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_1f8[5];
    puStack_1f8[5] = lVar20;
    _objc_release(uVar6);
    uVar21 = 0;
  }
  lVar20 = lVar13;
  func_0x00010c2a05e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar20;
  func_0x00010bf529e0();
  if (lVar9 == 0) {
    _objc_release(lVar20);
LAB_107f24744:
    uVar16 = 1;
  }
  else {
    lVar9 = lVar13;
    func_0x00010c2a0620();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf529e0();
    if (lVar10 == 0) {
      _objc_release(lVar9);
      _objc_release(lVar20);
      goto LAB_107f24744;
    }
    lVar10 = lVar13;
    func_0x00010c268360();
    iVar2 = (int)*(undefined8 *)(param_4 + 0x78);
    func_0x00010c2a0580();
    _objc_release(lVar9);
    _objc_release(lVar20);
    if (lVar10 < iVar2) goto LAB_107f24744;
    lVar20 = lVar13;
    func_0x00010c2a0620();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_258[5];
    puStack_258[5] = lVar20;
    _objc_release(uVar6);
    lVar20 = lVar13;
    func_0x00010c2681c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_288[5];
    puStack_288[5] = lVar20;
    _objc_release(uVar6);
    lVar20 = lVar13;
    func_0x00010c268360();
    uVar16 = 0;
    puStack_308[3] = lVar20;
  }
  lVar20 = lVar13;
  func_0x00010c271080();
  if (lVar20 < *(long *)(param_4 + 0x198)) {
    puVar17 = puVar11;
    func_0x00010b5f8c08();
    bVar19 = (byte)puVar17 ^ 1;
  }
  else {
    lVar20 = lVar13;
    func_0x00010c270fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar20;
    func_0x00010bf51e00();
    uVar6 = puStack_338[5];
    puStack_338[5] = lVar9;
    _objc_release(uVar6);
    _objc_release(lVar20);
    lVar20 = lVar13;
    func_0x00010c271080();
    bVar19 = 0;
    *(int *)(puStack_358 + 3) = (int)lVar20;
  }
  lVar20 = lVar13;
  func_0x00010c271020();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar20;
  func_0x00010bf529e0();
  _objc_release(lVar20);
  if (lVar9 == 0) {
    puVar17 = puVar11;
    func_0x00010b5f8c08();
    if (((ulong)puVar17 & 1) == 0) {
      uVar15 = (undefined1)*(undefined8 *)(param_4 + 0x180);
      func_0x000108ec1e40();
      goto LAB_107f2482c;
    }
  }
  else {
    lVar20 = lVar13;
    func_0x00010c271020();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar20;
    func_0x00010bf51e00();
    uVar6 = puStack_388[5];
    puStack_388[5] = lVar9;
    _objc_release(uVar6);
    _objc_release(lVar20);
  }
  uVar15 = 0;
LAB_107f2482c:
  puStack_3e8 = &uStack_3f0;
  uStack_3f0 = 0;
  uStack_3e0 = 0x2020000000;
  uStack_3d8 = 1;
  _objc_initWeak(auStack_3f8,param_4);
  uVar6 = *(undefined8 *)(param_4 + 0x38);
  _objc_copyWeak(auStack_410,auStack_3f8);
  uStack_400 = uVar21;
  _objc_retain(puVar11);
  _objc_retain(param_6);
  uStack_3ff = bVar1;
  uStack_3fe = uVar16;
  bStack_3fd = bVar19;
  uStack_3fc = uVar15;
  _objc_retain(puVar12);
  _objc_retain(param_9);
  uStack_408 = param_1;
  _objc_retain(puStack_68);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(puStack_68);
  _objc_release(param_9);
  _objc_release(puVar12);
  _objc_release(param_6);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_410);
  _objc_destroyWeak(auStack_3f8);
  __Block_object_dispose(&uStack_3f0,8);
  _objc_release(lVar13);
  __Block_object_dispose(&uStack_390,8);
  _objc_release(uStack_368);
  __Block_object_dispose(&uStack_360,8);
  __Block_object_dispose(&uStack_340,8);
  _objc_release(uStack_318);
  __Block_object_dispose(&uStack_310,8);
  __Block_object_dispose(&uStack_2f0,8);
  _objc_release(uStack_2c8);
  __Block_object_dispose(&uStack_2c0,8);
  _objc_release(ppuStack_298);
  __Block_object_dispose(&uStack_290,8);
  _objc_release(uStack_268);
  __Block_object_dispose(&uStack_260,8);
  _objc_release(uStack_238);
  __Block_object_dispose(&uStack_230,8);
  _objc_release(uStack_208);
  __Block_object_dispose(&uStack_200,8);
  _objc_release(uStack_1d8);
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(uStack_1a8);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  _objc_release(puStack_68);
  _objc_release(lStack_70);
  _objc_release(param_9);
  _objc_release(puVar12);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f0) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_390,8);
    __Block_object_dispose(&uStack_360,8);
    __Block_object_dispose(&uStack_340,8);
    __Block_object_dispose(&uStack_310,8);
    __Block_object_dispose(&uStack_2f0,8);
    __Block_object_dispose(&uStack_2c0,8);
    __Block_object_dispose(&uStack_290,8);
    __Block_object_dispose(&uStack_260,8);
    __Block_object_dispose(&uStack_230,8);
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1d0,8);
    lVar13 = 8;
    __Block_object_dispose(&uStack_1a0);
    __Unwind_Resume();
    *(undefined8 *)(puVar11 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = 0;
    return puVar11;
  }
  return puVar11;
}



/* Entry: 107f24094; end: 107f24beb; -[SCGallerySearchIndexer _updateSnapInfoAtDocid:snap:fromSnap:cloudFile:duplicateDocid:commonlanguageId:database:serviceTerm:] */

void FUN_107f24094(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  byte bVar17;
  long lVar18;
  undefined1 uVar19;
  undefined1 auStack_3a0 [8];
  undefined8 uStack_398;
  undefined1 uStack_390;
  undefined1 uStack_38f;
  undefined1 uStack_38e;
  byte bStack_38d;
  undefined1 uStack_38c;
  undefined1 auStack_388 [8];
  undefined8 uStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _CACurrentMediaTime();
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_107f24bec;
  uStack_110 = 0x107f24bfc;
  uStack_108 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_107f24bec;
  uStack_140 = 0x107f24bfc;
  uStack_138 = 0;
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  pcStack_178 = FUN_107f24bec;
  uStack_170 = 0x107f24bfc;
  uStack_168 = 0;
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x3032000000;
  pcStack_1a8 = FUN_107f24bec;
  uStack_1a0 = 0x107f24bfc;
  uStack_198 = 0;
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_107f24bec;
  uStack_1d0 = 0x107f24bfc;
  uStack_1c8 = 0;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x3032000000;
  pcStack_208 = FUN_107f24bec;
  uStack_200 = 0x107f24bfc;
  uStack_1f8 = 0;
  puStack_248 = &uStack_250;
  uStack_250 = 0;
  uStack_240 = 0x3032000000;
  pcStack_238 = FUN_107f24bec;
  uStack_230 = 0x107f24bfc;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_278 = &uStack_280;
  uStack_280 = 0;
  uStack_270 = 0x3032000000;
  pcStack_268 = FUN_107f24bec;
  uStack_260 = 0x107f24bfc;
  uStack_258 = 0;
  puStack_298 = &uStack_2a0;
  uStack_2a0 = 0;
  uStack_290 = 0x2020000000;
  uStack_288 = 0;
  puStack_2c8 = &uStack_2d0;
  uStack_2d0 = 0;
  uStack_2c0 = 0x3032000000;
  pcStack_2b8 = FUN_107f24bec;
  uStack_2b0 = 0x107f24bfc;
  uStack_2a8 = 0;
  puStack_2e8 = &uStack_2f0;
  uStack_2f0 = 0;
  uStack_2e0 = 0x2020000000;
  uStack_2d8 = 0;
  puStack_318 = &uStack_320;
  uStack_320 = 0;
  uStack_310 = 0x3032000000;
  pcStack_308 = FUN_107f24bec;
  uStack_300 = 0x107f24bfc;
  uStack_2f8 = 0;
  if (param_6 == (undefined *)0x0) {
    puVar3 = param_5;
    func_0x00010c241220(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_6;
    func_0x00010c241220(param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar12 = param_2;
  func_0x00010be14e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == (undefined *)0x0) {
LAB_107f24524:
    _objc_release(puVar3);
  }
  else {
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bc7b8;
    if (param_8 != -1) {
      uVar4 = *(undefined8 *)(param_2 + 0x168);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar5 = puVar3;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar13;
      func_0x00010c297ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf1f3c0();
      _objc_release(puVar6);
      _objc_release(puVar13);
      _objc_release(puVar5);
      if ((int)puVar7 != 0) {
        puVar5 = puVar3;
        func_0x00010c0ef4a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar5;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar13;
        func_0x00010c297c00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c15a3e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar13);
        _objc_release(puVar5);
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        lStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        plStack_350 = (long *)0x0;
        puVar5 = puVar3;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar5;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar13;
        func_0x00010c297c00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c2981c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar13);
        _objc_release(puVar5);
        puVar5 = puVar8;
        func_0x00010bf52a60();
        if (puVar5 != (undefined *)0x0) {
          lVar18 = *plStack_350;
          do {
            puVar13 = (undefined *)0x0;
            do {
              if (*plStack_350 != lVar18) {
                _objc_enumerationMutation(puVar8);
              }
              uVar16 = *(undefined8 *)(lStack_358 + (long)puVar13 * 8);
              uVar4 = uVar16;
              func_0x00010c297e20();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar4;
              func_0x00010c0720c0();
              _objc_release(uVar4);
              if ((int)uVar9 != 0) {
                func_0x00010c0d4f60();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = puStack_278[5];
                puStack_278[5] = uVar16;
                _objc_release(uVar4);
                goto LAB_107f24514;
              }
              puVar13 = puVar13 + 1;
            } while (puVar5 != puVar13);
            puVar5 = puVar8;
            func_0x00010bf52a60();
          } while (puVar5 != (undefined *)0x0);
        }
LAB_107f24514:
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      goto LAB_107f24524;
    }
  }
  lVar18 = lVar12;
  func_0x00010c26f9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar18;
  func_0x00010bf529e0();
  _objc_release(lVar18);
  if (lVar10 == 0) {
    puVar3 = param_5;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar1 = puVar3 != (undefined *)0x0;
  }
  else {
    lVar18 = lVar12;
    func_0x00010c26f9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_128[5];
    puStack_128[5] = lVar18;
    _objc_release(uVar4);
    bVar1 = false;
  }
  lVar18 = lVar12;
  func_0x00010c09f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar18;
  func_0x00010bf529e0();
  if (lVar10 == 0) {
    _objc_release(lVar18);
LAB_107f24650:
    puVar3 = param_5;
    func_0x00010bfd89e0();
    uVar19 = SUB81(puVar3,0);
  }
  else {
    lVar10 = lVar12;
    func_0x00010c09ebc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar18);
    if (lVar10 == 0) goto LAB_107f24650;
    lVar18 = lVar12;
    func_0x00010c09f7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar18;
    func_0x00010c0d3c80();
    uVar4 = puStack_158[5];
    puStack_158[5] = lVar10;
    _objc_release(uVar4);
    _objc_release(lVar18);
    lVar18 = lVar12;
    func_0x00010c09ebc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_188[5];
    puStack_188[5] = lVar18;
    _objc_release(uVar4);
    uVar19 = 0;
  }
  lVar18 = lVar12;
  func_0x00010c2a05e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar18;
  func_0x00010bf529e0();
  if (lVar10 == 0) {
    _objc_release(lVar18);
LAB_107f24744:
    uVar15 = 1;
  }
  else {
    lVar10 = lVar12;
    func_0x00010c2a0620();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf529e0();
    if (lVar11 == 0) {
      _objc_release(lVar10);
      _objc_release(lVar18);
      goto LAB_107f24744;
    }
    lVar11 = lVar12;
    func_0x00010c268360();
    iVar2 = (int)*(undefined8 *)(param_2 + 0x78);
    func_0x00010c2a0580();
    _objc_release(lVar10);
    _objc_release(lVar18);
    if (lVar11 < iVar2) goto LAB_107f24744;
    lVar18 = lVar12;
    func_0x00010c2a0620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_1e8[5];
    puStack_1e8[5] = lVar18;
    _objc_release(uVar4);
    lVar18 = lVar12;
    func_0x00010c2681c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_218[5];
    puStack_218[5] = lVar18;
    _objc_release(uVar4);
    lVar18 = lVar12;
    func_0x00010c268360();
    uVar15 = 0;
    puStack_298[3] = lVar18;
  }
  lVar18 = lVar12;
  func_0x00010c271080();
  if (lVar18 < *(long *)(param_2 + 0x198)) {
    puVar3 = param_5;
    func_0x00010b5f8c08();
    bVar17 = (byte)puVar3 ^ 1;
  }
  else {
    lVar18 = lVar12;
    func_0x00010c270fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar18;
    func_0x00010bf51e00();
    uVar4 = puStack_2c8[5];
    puStack_2c8[5] = lVar10;
    _objc_release(uVar4);
    _objc_release(lVar18);
    lVar18 = lVar12;
    func_0x00010c271080();
    bVar17 = 0;
    *(int *)(puStack_2e8 + 3) = (int)lVar18;
  }
  lVar18 = lVar12;
  func_0x00010c271020();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar18;
  func_0x00010bf529e0();
  _objc_release(lVar18);
  if (lVar10 == 0) {
    puVar3 = param_5;
    func_0x00010b5f8c08();
    if (((ulong)puVar3 & 1) == 0) {
      uVar14 = (undefined1)*(undefined8 *)(param_2 + 0x180);
      func_0x000108ec1e40();
      goto LAB_107f2482c;
    }
  }
  else {
    lVar18 = lVar12;
    func_0x00010c271020();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar18;
    func_0x00010bf51e00();
    uVar4 = puStack_318[5];
    puStack_318[5] = lVar10;
    _objc_release(uVar4);
    _objc_release(lVar18);
  }
  uVar14 = 0;
LAB_107f2482c:
  puStack_378 = &uStack_380;
  uStack_380 = 0;
  uStack_370 = 0x2020000000;
  uStack_368 = 1;
  _objc_initWeak(auStack_388,param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  _objc_copyWeak(auStack_3a0,auStack_388);
  uStack_390 = uVar19;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_38f = bVar1;
  uStack_38e = uVar15;
  bStack_38d = bVar17;
  uStack_38c = uVar14;
  _objc_retain(param_7);
  _objc_retain(param_9);
  uStack_398 = param_1;
  _objc_retain(param_11);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_3a0);
  _objc_destroyWeak(auStack_388);
  __Block_object_dispose(&uStack_380,8);
  _objc_release(lVar12);
  __Block_object_dispose(&uStack_320,8);
  _objc_release(uStack_2f8);
  __Block_object_dispose(&uStack_2f0,8);
  __Block_object_dispose(&uStack_2d0,8);
  _objc_release(uStack_2a8);
  __Block_object_dispose(&uStack_2a0,8);
  __Block_object_dispose(&uStack_280,8);
  _objc_release(uStack_258);
  __Block_object_dispose(&uStack_250,8);
  _objc_release(ppuStack_228);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(uStack_1f8);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(uStack_1c8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(uStack_198);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_320,8);
    __Block_object_dispose(&uStack_2f0,8);
    __Block_object_dispose(&uStack_2d0,8);
    __Block_object_dispose(&uStack_2a0,8);
    __Block_object_dispose(&uStack_280,8);
    __Block_object_dispose(&uStack_250,8);
    __Block_object_dispose(&uStack_220,8);
    __Block_object_dispose(&uStack_1f0,8);
    __Block_object_dispose(&uStack_1c0,8);
    __Block_object_dispose(&uStack_190,8);
    __Block_object_dispose(&uStack_160,8);
    lVar12 = 8;
    __Block_object_dispose(&uStack_130);
    __Unwind_Resume();
    *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(lVar12 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 107f24bec; end: 107f24c03;  */

void FUN_107f24bec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f24c04; end: 107f25887;  */

void FUN_107f24c04(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  long lStack_340;
  undefined **ppuStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined1 uStack_2a8;
  undefined2 uStack_2a7;
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_1 + 0xb0;
  _objc_loadWeakRetained();
  if (lVar16 != 0) {
    lVar2 = lVar16;
    _dispatch_group_create();
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bfd89e0();
      if (iVar1 != 0) {
        puStack_1b0 = &uStack_1b8;
        uStack_1b8 = 0;
        uStack_1a8 = 0x3032000000;
        pcStack_1a0 = FUN_107f24bec;
        uStack_198 = 0x107f24bfc;
        uStack_190 = 0;
        uVar3 = *(undefined8 *)(lVar16 + 0x58);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c241220(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1d8 = 0xc2000000;
        pcStack_1d0 = FUN_107f25888;
        puStack_1c8 = &UNK_11097c0a0;
        puStack_1c0 = &uStack_1b8;
        func_0x00010c135bc0(uVar3);
        _objc_release(uVar4);
        _objc_release(uVar3);
        lVar5 = puStack_1b0[5];
        if ((lVar5 != 0) && (FUN_107f49238(), (int)lVar5 != 0)) {
          _dispatch_group_enter(lVar2);
          _objc_initWeak(&uStack_268,lVar16);
          uVar4 = *(undefined8 *)(lVar16 + 0x88);
          uVar3 = *(undefined8 *)(lVar16 + 0x38);
          func_0x00010c11de00(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_230 = 0xc2000000;
          pcStack_228 = FUN_107f258c0;
          puStack_220 = &UNK_110a13770;
          _objc_copyWeak(auStack_1e8,&uStack_268);
          uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
          uStack_200 = *(undefined8 *)(param_1 + 0x48);
          uVar18 = *(undefined8 *)(param_1 + 0x20);
          _objc_retain(uVar18);
          uVar19 = *(undefined8 *)(param_1 + 0x28);
          uStack_218 = uVar18;
          _objc_retain(uVar19);
          uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
          uStack_210 = uVar19;
          _objc_retain(lVar2);
          lStack_208 = lVar2;
          func_0x00010bfc14e0(uVar4);
          _objc_release(uVar3);
          _objc_release(lStack_208);
          _objc_release(uStack_210);
          _objc_release(uStack_218);
          _objc_destroyWeak(auStack_1e8);
          _objc_destroyWeak(&uStack_268);
        }
        __Block_object_dispose(&uStack_1b8,8);
        _objc_release(uStack_190);
      }
    }
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      uVar3 = *(undefined8 *)(lVar16 + 0x90);
      func_0x00010c13d000();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
      _objc_release(uVar4);
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) == 0) {
      func_0x00010bdc84a0();
    }
    puStack_1b0 = &uStack_1b8;
    uStack_1b8 = 0;
    uStack_1a8 = 0x3032000000;
    pcStack_1a0 = FUN_107f24bec;
    uStack_198 = 0x107f24bfc;
    uStack_190 = 0;
    puStack_260 = &uStack_268;
    uStack_268 = 0;
    uStack_258 = 0x3032000000;
    pcStack_250 = FUN_107f24bec;
    uStack_248 = 0x107f24bfc;
    uStack_240 = 0;
    puStack_290 = &uStack_298;
    uStack_298 = 0;
    uStack_288 = 0x3032000000;
    pcStack_280 = FUN_107f24bec;
    uStack_278 = 0x107f24bfc;
    uStack_270 = 0;
    _objc_initWeak(auStack_2a0,lVar16);
    puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_328 = 0xc2000000;
    pcStack_320 = FUN_107f2598c;
    puStack_318 = &UNK_110a137d0;
    _objc_copyWeak(auStack_2b0,auStack_2a0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_2a8 = *(undefined1 *)(param_1 + 0xc2);
    puStack_300 = &uStack_1b8;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_310 = uVar3;
    _objc_retain(uVar4);
    uStack_2d0 = *(undefined8 *)(param_1 + 0x78);
    uStack_2d8 = *(undefined8 *)(param_1 + 0x70);
    uStack_2c0 = *(undefined8 *)(param_1 + 0x88);
    uStack_2c8 = *(undefined8 *)(param_1 + 0x80);
    uStack_2f8 = *(undefined8 *)(param_1 + 0x58);
    puStack_2f0 = &uStack_298;
    uStack_2e8 = *(undefined8 *)(param_1 + 0x68);
    uStack_2a7 = *(undefined2 *)(param_1 + 0xc3);
    puStack_2e0 = &uStack_268;
    uStack_2b8 = *(undefined8 *)(param_1 + 0x90);
    ppuVar6 = &puStack_330;
    uStack_308 = uVar4;
    _objc_retainBlock();
    _dispatch_group_enter(lVar2);
    uVar4 = *(undefined8 *)(lVar16 + 0x78);
    uVar3 = *(undefined8 *)(lVar16 + 0x38);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_358 = 0xc2000000;
    uStack_350 = 0x107f26338;
    puStack_348 = &UNK_110a13800;
    _objc_retain(ppuVar6);
    ppuStack_338 = ppuVar6;
    _objc_retain(lVar2);
    lStack_340 = lVar2;
    func_0x00010c13d020(uVar4);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(lVar16 + 0x98);
    uVar3 = *(undefined8 *)(lVar16 + 0x168);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x98) + 8);
    uVar18 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    _objc_release(uVar18);
    _objc_release(uVar3);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + 0x28) == 0) {
      func_0x00010bdc84a0();
    }
    puVar7 = PTR_PTR_1126bc7b8;
    uVar3 = *(undefined8 *)(lVar16 + 0x168);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126af4c0;
    uVar3 = *(undefined8 *)(lVar16 + 0x168);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar10 = puVar7;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar11;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar11);
    _objc_release(puVar10);
    if (puVar20 != (undefined *)0x0) {
      puVar10 = puVar7;
      func_0x00010c0ef4a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar11;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(puVar20);
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    plStack_390 = (long *)0x0;
    puVar10 = puVar7;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar11;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar5 = *plStack_390;
      do {
        puVar20 = (undefined *)0x0;
        do {
          if (*plStack_390 != lVar5) {
            _objc_enumerationMutation(puVar11);
          }
          lVar17 = *(long *)(lStack_398 + (long)puVar20 * 8);
          lVar21 = lVar17;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar21 != 0) {
            func_0x00010c26b700(lVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar9);
            _objc_release(lVar17);
          }
          puVar20 = puVar20 + 1;
        } while (puVar10 != puVar20);
        puVar10 = puVar11;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar11);
    puVar10 = puVar9;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar16;
    func_0x00010be64080();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar11;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar20;
    func_0x00010c297ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf1f3c0();
    _objc_release(puVar12);
    _objc_release(puVar20);
    _objc_release(puVar11);
    if ((int)puVar13 != 0) {
      puVar11 = puVar7;
      func_0x00010c0ef4a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar11;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar20;
      func_0x00010c297c00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c15a3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar20);
      _objc_release(puVar11);
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      lStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      plStack_3d0 = (long *)0x0;
      puVar11 = puVar7;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar11;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar20;
      func_0x00010c297c00();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010c2981c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar20);
      _objc_release(puVar11);
      puVar11 = puVar14;
      func_0x00010bf52a60();
      if (puVar11 != (undefined *)0x0) {
        lVar21 = *plStack_3d0;
        do {
          puVar20 = (undefined *)0x0;
          do {
            if (*plStack_3d0 != lVar21) {
              _objc_enumerationMutation(puVar14);
            }
            uVar18 = *(undefined8 *)(lStack_3d8 + (long)puVar20 * 8);
            uVar3 = uVar18;
            func_0x00010c297e20();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((int)uVar4 != 0) {
              func_0x00010c0d4f60();
              _objc_retainAutoreleasedReturnValue();
              lVar21 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
              uVar3 = *(undefined8 *)(lVar21 + 0x28);
              *(undefined8 *)(lVar21 + 0x28) = uVar18;
              _objc_release(uVar3);
              goto LAB_107f25560;
            }
            puVar20 = puVar20 + 1;
          } while (puVar11 != puVar20);
          puVar11 = puVar14;
          func_0x00010bf52a60();
        } while (puVar11 != (undefined *)0x0);
      }
LAB_107f25560:
      _objc_release(puVar14);
      _objc_release(puVar13);
    }
    puStack_4a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_498 = 0xc2000000;
    pcStack_490 = FUN_107f26364;
    puStack_488 = &UNK_110a13830;
    _objc_copyWeak(auStack_3f0,auStack_2a0);
    uStack_448 = *(undefined8 *)(param_1 + 0xa8);
    uStack_450 = *(undefined8 *)(param_1 + 0xa0);
    uStack_440 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_438 = *(undefined8 *)(param_1 + 0x60);
    uStack_430 = *(undefined8 *)(param_1 + 0x98);
    uStack_420 = *(undefined8 *)(param_1 + 0x78);
    uStack_428 = *(undefined8 *)(param_1 + 0x70);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uStack_480 = uVar3;
    _objc_retain(uVar4);
    uStack_418 = *(undefined8 *)(param_1 + 0x68);
    uStack_410 = *(undefined8 *)(param_1 + 0x50);
    uStack_478 = uVar4;
    _objc_retain(lVar5);
    uStack_400 = *(undefined8 *)(param_1 + 0x90);
    uStack_408 = *(undefined8 *)(param_1 + 0x88);
    uStack_3f8 = *(undefined8 *)(param_1 + 0x80);
    lStack_470 = lVar5;
    _objc_retain(puVar8);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_468 = puVar8;
    _objc_retain(uVar3);
    uStack_3e8 = *(undefined8 *)(param_1 + 0xb8);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uStack_460 = uVar3;
    _objc_retain(uVar4);
    ppuVar15 = &puStack_4a0;
    uStack_458 = uVar4;
    _objc_retainBlock();
    if (lVar2 == 0) {
      (*(code *)ppuVar15[2])(ppuVar15);
    }
    else {
      uVar3 = *(undefined8 *)(lVar16 + 0x38);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100bc0718(lVar2,uVar3,ppuVar15);
      _objc_release(uVar3);
    }
    _objc_release(ppuVar15);
    _objc_release(uStack_458);
    _objc_release(uStack_460);
    _objc_release(puStack_468);
    _objc_release(lStack_470);
    _objc_release(uStack_478);
    _objc_release(uStack_480);
    _objc_destroyWeak(auStack_3f0);
    _objc_release(lVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lStack_340);
    _objc_release(ppuStack_338);
    _objc_release(ppuVar6);
    _objc_release(uStack_308);
    _objc_release(uStack_310);
    _objc_destroyWeak(auStack_2b0);
    _objc_destroyWeak(auStack_2a0);
    __Block_object_dispose(&uStack_298,8);
    _objc_release(uStack_270);
    __Block_object_dispose(&uStack_268,8);
    _objc_release(uStack_240);
    __Block_object_dispose(&uStack_1b8,8);
    _objc_release(uStack_190);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_1e8);
    _objc_destroyWeak(&uStack_268);
    uVar4 = 8;
    __Block_object_dispose(&uStack_1b8);
    __Unwind_Resume();
    _objc_retain(uVar4);
    lVar16 = *(long *)(*(long *)(lVar16 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined8 *)(lVar16 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 107f25888; end: 107f258bf;  */

void FUN_107f25888(long param_1,undefined8 param_2)

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



/* Entry: 107f258c0; end: 107f2598b;  */

void FUN_107f258c0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010bdc84a0(lVar1);
    }
    else {
      lVar5 = param_2;
      func_0x00010c0d3c80();
      lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar5;
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010bf51e00();
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar3 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
      _objc_release(uVar3);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f2598c; end: 107f2614b;  */

ulong FUN_107f2598c(long param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  double dVar26;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_2;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x80;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_107f260fc;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    uVar3 = param_2;
    func_0x00010c2a0360();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar17 = *(undefined8 *)(lVar19 + 0x28);
    *(ulong *)(lVar19 + 0x28) = uVar3;
    _objc_release(uVar17);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
      func_0x00010bdc84a0();
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010bf1d3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar17);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c13cf20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    uVar17 = uVar4;
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c0d00e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    puVar6 = PTR_PTR_1126d8638;
    _objc_alloc();
    func_0x00010c03fe60();
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar6;
    func_0x00010c13cf20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar23;
    func_0x00010bf529e0();
    _objc_release(puVar23);
    if (puVar9 != (undefined *)0x0) {
      puVar23 = (undefined *)0x0;
      do {
        puVar9 = puVar6;
        func_0x00010c13cf20();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar10;
        func_0x00010c1536e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar9;
        func_0x00010bf44740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        dVar26 = 0.0;
        _objc_retain(puVar11);
        puVar9 = puVar11;
        func_0x00010bf52a60();
        lVar19 = lRam0000000000000000;
        while (puVar9 != (undefined *)0x0) {
          puVar21 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar19) {
              _objc_enumerationMutation(puVar11);
            }
            uVar24 = *(undefined8 *)((long)puVar21 * 8);
            uVar22 = *(undefined8 *)(lVar2 + 0x80);
            uVar4 = *(undefined8 *)(lVar2 + 0x170);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfaf180();
            _objc_retainAutoreleasedReturnValue();
            lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 8);
            uVar18 = *(undefined8 *)(lVar20 + 0x28);
            *(undefined8 *)(lVar20 + 0x28) = uVar22;
            _objc_release(uVar18);
            _objc_release(uVar4);
            if (((puVar23 == (undefined *)0x0) &&
                (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0)) &&
               (func_0x00010bf45da0(puVar10), 0.20000000298023224 <= dVar26)) {
              uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
              func_0x00010bf51e00();
              lVar20 = *(long *)(*(long *)(param_1 + 0x48) + 8);
              uVar22 = *(undefined8 *)(lVar20 + 0x28);
              *(undefined8 *)(lVar20 + 0x28) = uVar4;
              _objc_release(uVar22);
            }
            puVar12 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d0a0(uVar24);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            func_0x00010befa120(puVar7);
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf45da0(puVar10);
            func_0x00010c0df720(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(puVar12);
            _objc_release(uVar24);
            puVar21 = puVar21 + 1;
          } while (puVar9 != puVar21);
          puVar9 = puVar11;
          func_0x00010bf52a60();
        }
        _objc_release(puVar11);
        _objc_release(puVar11);
        _objc_release(puVar10);
        puVar23 = puVar23 + 1;
        puVar9 = puVar6;
        func_0x00010c13cf20();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf529e0();
        _objc_release(puVar9);
      } while (puVar23 < puVar10);
    }
    puVar23 = puVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar23;
    func_0x00010bf51e00();
    lVar19 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar4 = *(undefined8 *)(lVar19 + 0x28);
    *(undefined **)(lVar19 + 0x28) = puVar9;
    _objc_release(uVar4);
    _objc_release(puVar23);
    puVar23 = puVar8;
    func_0x00010bf51e00();
    lVar19 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar4 = *(undefined8 *)(lVar19 + 0x28);
    *(undefined **)(lVar19 + 0x28) = puVar23;
    _objc_release(uVar4);
    puVar23 = puVar6;
    func_0x00010c0d00e0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18) = (long)(int)puVar23;
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar17);
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  uVar1 = (undefined4)*(undefined8 *)(lVar2 + 0x78);
  func_0x00010c271080();
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x18) = uVar1;
  if (((*(byte *)(param_1 + 0x89) & 1) == 0) && (*(char *)(param_1 + 0x8a) != '\x01'))
  goto LAB_107f260fc;
  uVar3 = param_2;
  func_0x00010c2710a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
LAB_107f260d8:
    func_0x00010bdc84a0();
  }
  else {
    uVar13 = uVar3;
    func_0x00010c0cff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar13 == 0) goto LAB_107f260d8;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c086780();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar14;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    while (uVar13 != 0) {
      uVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(uVar14);
        }
        uVar17 = *(undefined8 *)(uVar25 * 8);
        if (*(char *)(param_1 + 0x89) == '\x01') {
          uVar4 = uVar17;
          func_0x00010bf306a0();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar4;
          func_0x00010bf51e00();
          func_0x00010befa120(puVar5);
          _objc_release(uVar22);
          _objc_release(uVar4);
        }
        if (*(char *)(param_1 + 0x8a) == '\x01') {
          func_0x00010bf8dce0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          _objc_release(uVar17);
        }
        uVar25 = uVar25 + 1;
      } while (uVar13 != uVar25);
      uVar13 = uVar14;
      func_0x00010bf52a60();
    }
    _objc_release(uVar14);
    puVar7 = puVar5;
    func_0x00010bf51e00();
    lVar19 = *(long *)(*(long *)(param_1 + 0x70) + 8);
    uVar17 = *(undefined8 *)(lVar19 + 0x28);
    *(undefined **)(lVar19 + 0x28) = puVar7;
    _objc_release(uVar17);
    puVar7 = puVar6;
    func_0x00010bf51e00();
    lVar19 = *(long *)(*(long *)(param_1 + 0x78) + 8);
    uVar17 = *(undefined8 *)(lVar19 + 0x28);
    *(undefined **)(lVar19 + 0x28) = puVar7;
    _objc_release(uVar17);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(uVar3);
LAB_107f260fc:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c1536e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar15;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar17);
  _objc_release(uVar3);
  _objc_release(uVar15);
  return (ulong)((uint)uVar17 ^ 1);
}



/* Entry: 107f2614c; end: 107f261b7;  */

uint FUN_107f2614c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1536e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 107f261b8; end: 107f26363;  */

void FUN_107f261b8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x80,param_2 + 0x80);
  return;
}



/* Entry: 107f26364; end: 107f266cb;  */

void FUN_107f26364(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lVar1 = param_2 + 0xb0;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_107f266a0;
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x28);
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28);
    func_0x00010c08fa60();
    if (lVar2 != 0) goto LAB_107f263c8;
  }
  else {
LAB_107f263c8:
    func_0x00010c12d360(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x28),param_3,
                        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28));
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x28),param_3,
                        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x28));
  }
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c241220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x28);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 8) + 0x28);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x28);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x80) + 8) + 0x18);
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x88) + 8) + 0x28);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0670c0(lVar1,param_3,uVar3,uVar10,uVar9,uVar12,uVar13,uVar14,uVar5,uVar15,uVar11,
                      uVar6,uVar4,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x98) + 8) + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa0) + 8) + 0x28),
                      (long)*(int *)(*(long *)(*(long *)(param_2 + 0xa8) + 8) + 0x18),0x100);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(lVar1 + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c241220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_2 + 0x40);
  func_0x00010c0c7520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  if (lVar7 == 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c0c7520(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x28);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 8) + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x28);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,
                      *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x80) + 8) + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96400(uVar5,param_3,uVar6,uVar3,lVar2,uVar9,uVar10,uVar11,uVar4,puVar8,
                      *(undefined8 *)(param_2 + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x88) + 8) + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28),
                      *(undefined8 *)(param_2 + 0x30),
                      *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x98) + 8) + 0x28),
                      *(undefined4 *)(*(long *)(*(long *)(param_2 + 0xa8) + 8) + 0x18));
  _objc_release(puVar8);
  if (lVar7 == 0) {
    _objc_release(lVar2);
  }
  _objc_release(lVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _CACurrentMediaTime();
  uVar3 = NEON_fminnm(param_1 - *(double *)(param_2 + 0xb8),0x4020000000000000);
  uVar6 = *(undefined8 *)(lVar1 + 0x38);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107f266cc;
  puStack_90 = &UNK_110841f80;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar5);
  uStack_88 = uVar5;
  lStack_80 = lVar1;
  func_0x00010c0f7fe0(uVar3,uVar6,param_3,&puStack_a8);
  _objc_release(uStack_88);
LAB_107f266a0:
  _objc_release(lVar1);
  return;
}



/* Entry: 107f266cc; end: 107f26b03;  */

void FUN_107f266cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf69da0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95760(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f26b04; end: 107f26b8f; -[SCGallerySearchIndexer _shouldForceFetchSnap:] */

bool FUN_107f26b04(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar4;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010b5fa088();
  iVar2 = (int)uVar3;
  func_0x00010b5fa4c8();
  if ((iVar2 == 0) || (uVar3 = param_3, func_0x00010c080ca0(), (uVar3 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf59960(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf433a0();
    bVar1 = uVar4 == 1;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107f26b90; end: 107f26d47; -[SCGallerySearchIndexer _normalizeString:] */

void FUN_107f26b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137284c8 != -1) {
    func_0x00010002a2fc(0x1137284c8,&PTR___NSConcreteGlobalBlock_110a13890);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar4 = (ulong)puRam00000001137284c0;
      func_0x00010bf4b900();
      if ((uVar4 & 1) == 0) {
        func_0x00010befa120(puVar2);
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar5 = puVar2;
  func_0x00010bf446e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = (ulong)puRam00000001137284c0;
  puRam00000001137284c0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107f26d48; end: 107f27113;  */

void FUN_107f26d48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110e6fab8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137284c0;
  puRam00000001137284c0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f27114; end: 107f271eb; -[SCGallerySearchIndexer _tokenize:] */

void FUN_107f27114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  _objc_retain(param_3);
  func_0x00010c2a4bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bf44700(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c0d3c80(uVar3);
  _objc_release(uVar3);
  func_0x00010c12d360(uVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  uVar3 = uVar4;
  func_0x00010bf51e00(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f271ec; end: 107f2724f; -[SCGallerySearchIndexer _joinTags:] */

void FUN_107f271ec(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf529e0();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf446e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107f27250; end: 107f272cb; -[SCGallerySearchIndexer _tagsRecoveredFromJoinedString:] */

void FUN_107f27250(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0d3c80();
    _objc_release(param_3);
    func_0x00010c12d360(lVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    lVar2 = lVar1;
    func_0x00010bf51e00(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107f272cc; end: 107f273af; -[SCGallerySearchIndexer _saveTagClusterWithSnapId:clusterName:database:] */

undefined *
FUN_107f272cc(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined *param_5,undefined *param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined8 *puStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  long lStack_260;
  long lStack_258;
  
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_3;
  puVar4 = param_4;
  puVar5 = param_5;
  if ((param_3 != 0) && (param_4 != (undefined *)0x0)) {
    lVar15 = *(long *)(param_1 + 200);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf9b080(param_5);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release();
    param_1 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = lVar15;
  puVar3 = puVar4;
  puVar8 = puVar5;
  if ((lVar15 != 0) && (puVar4 != (undefined *)0x0)) {
    lVar11 = *(long *)(param_1 + 0xd0);
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    _objc_retain(lVar15);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf9b080(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar15);
    _objc_release();
    param_1 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = lVar11;
  puVar4 = puVar3;
  puVar5 = puVar8;
  if ((lVar11 != 0) && (puVar3 != (undefined *)0x0)) {
    lVar15 = *(long *)(param_1 + 0xb0);
    _objc_retain(puVar8);
    _objc_retain(puVar3);
    _objc_retain(lVar11);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf9b080(puVar8);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(lVar11);
    _objc_release();
    param_1 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(param_1 + 0xe8);
  puVar9 = puVar5;
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  _objc_retain(lVar15);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  puVar8 = puVar6;
  func_0x00010bf9b080();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(puVar6 + 0xf0);
  puVar6 = param_6;
  _objc_retain(param_6);
  iVar10 = (int)puVar6;
  _objc_retain(puVar8);
  _objc_retain(uVar14);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_6;
  puVar3 = puVar6;
  func_0x00010bf9b080();
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(uVar14);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar15);
    _objc_retain(puVar3);
    _objc_retain(puVar9);
    puStack_278 = &uStack_280;
    uStack_280 = 0;
    uStack_270 = 0x2020000000;
    uStack_268 = 1;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_260 = lVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf9b080();
    *(char *)(puStack_278 + 3) = (char)puVar5;
    _objc_release(puVar6);
    _objc_initWeak(auStack_288,puVar4);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2c0 = 0xc2000000;
    pcStack_2b8 = FUN_107f279c8;
    puStack_2b0 = &UNK_110a138b0;
    _objc_copyWeak(auStack_290,auStack_288);
    puStack_298 = &uStack_280;
    _objc_retain(puVar9);
    puStack_2a8 = puVar9;
    _objc_retain(lVar15);
    ppuVar7 = &puStack_2c8;
    lStack_2a0 = lVar15;
    func_0x00010bf97ce0(puVar3);
    if (iVar10 != 0) {
      _objc_initWeak(auStack_2d0,puVar4);
      puStack_2f8 = puVar6;
      uStack_2f0 = 0xc2000000;
      pcStack_2e8 = FUN_107f27b00;
      puStack_2e0 = &UNK_1108434b0;
      _objc_copyWeak(auStack_2d8,auStack_2d0);
      func_0x000100162d98("APPSTORE",&puStack_2f8);
      _objc_destroyWeak(auStack_2d8);
      _objc_destroyWeak(auStack_2d0);
    }
    bVar1 = *(byte *)(puStack_278 + 3);
    _objc_release(lStack_2a0);
    _objc_release(puStack_2a8);
    _objc_destroyWeak(auStack_290);
    _objc_destroyWeak(auStack_288);
    __Block_object_dispose(&uStack_280,8);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
      return (undefined *)(ulong)(bVar1 & 1);
    }
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_290);
    _objc_destroyWeak(auStack_288);
    puVar6 = (undefined *)0x8;
    __Block_object_dispose(&uStack_280);
    __Unwind_Resume();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    _objc_retain(ppuVar7);
    lVar11 = lVar15 + 0x38;
    _objc_loadWeakRetained();
    if (lVar11 != 0) {
      puVar4 = puVar6;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      lVar13 = *(long *)(*(long *)(lVar15 + 0x30) + 8);
      puVar6 = puVar4;
      if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
        *(undefined1 *)(lVar13 + 0x18) = 0;
      }
      else {
        uVar2 = (undefined1)*(undefined8 *)(lVar15 + 0x20);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9b080();
        *(undefined1 *)(*(long *)(*(long *)(lVar15 + 0x30) + 8) + 0x18) = uVar2;
        _objc_release(puVar4);
      }
    }
    _objc_release(lVar11);
    _objc_release(ppuVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      puVar6 = puVar6 + 0x20;
      _objc_loadWeakRetained();
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c153b40(*(undefined8 *)(puVar6 + 0x70));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return puVar6;
    }
    return puVar6;
  }
  return puVar5;
}



/* Entry: 107f273b0; end: 107f27493; -[SCGallerySearchIndexer _saveLocationClusterWithSnapId:clusterName:database:] */

undefined *
FUN_107f273b0(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined *param_5,undefined *param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  long lStack_200;
  long lStack_1f8;
  
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  if ((param_3 != 0) && (param_4 != (undefined *)0x0)) {
    lVar15 = *(long *)(param_1 + 0xd0);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf9b080(param_5);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release();
    param_1 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = lVar15;
  puVar4 = puVar3;
  puVar8 = puVar5;
  if ((lVar15 != 0) && (puVar3 != (undefined *)0x0)) {
    lVar11 = *(long *)(param_1 + 0xb0);
    _objc_retain(puVar5);
    _objc_retain(puVar3);
    _objc_retain(lVar15);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf9b080(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(lVar15);
    _objc_release();
    param_1 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(param_1 + 0xe8);
  puVar9 = puVar8;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  _objc_retain(lVar11);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  puVar5 = puVar6;
  func_0x00010bf9b080();
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(puVar6 + 0xf0);
  puVar6 = param_6;
  _objc_retain(param_6);
  iVar10 = (int)puVar6;
  _objc_retain(puVar5);
  _objc_retain(uVar14);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_6;
  puVar8 = puVar6;
  func_0x00010bf9b080();
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(uVar14);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar15);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    puStack_218 = &uStack_220;
    uStack_220 = 0;
    uStack_210 = 0x2020000000;
    uStack_208 = 1;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_200 = lVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf9b080();
    *(char *)(puStack_218 + 3) = (char)puVar5;
    _objc_release(puVar6);
    _objc_initWeak(auStack_228,puVar3);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_107f279c8;
    puStack_250 = &UNK_110a138b0;
    _objc_copyWeak(auStack_230,auStack_228);
    puStack_238 = &uStack_220;
    _objc_retain(puVar9);
    puStack_248 = puVar9;
    _objc_retain(lVar15);
    ppuVar7 = &puStack_268;
    lStack_240 = lVar15;
    func_0x00010bf97ce0(puVar8);
    if (iVar10 != 0) {
      _objc_initWeak(auStack_270,puVar3);
      puStack_298 = puVar6;
      uStack_290 = 0xc2000000;
      pcStack_288 = FUN_107f27b00;
      puStack_280 = &UNK_1108434b0;
      _objc_copyWeak(auStack_278,auStack_270);
      func_0x000100162d98("APPSTORE",&puStack_298);
      _objc_destroyWeak(auStack_278);
      _objc_destroyWeak(auStack_270);
    }
    bVar1 = *(byte *)(puStack_218 + 3);
    _objc_release(lStack_240);
    _objc_release(puStack_248);
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_228);
    __Block_object_dispose(&uStack_220,8);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_230);
      _objc_destroyWeak(auStack_228);
      puVar6 = (undefined *)0x8;
      __Block_object_dispose(&uStack_220);
      __Unwind_Resume();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar6);
      _objc_retain(ppuVar7);
      lVar11 = lVar15 + 0x38;
      _objc_loadWeakRetained();
      if (lVar11 != 0) {
        puVar3 = puVar6;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        lVar13 = *(long *)(*(long *)(lVar15 + 0x30) + 8);
        puVar6 = puVar3;
        if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
          *(undefined1 *)(lVar13 + 0x18) = 0;
        }
        else {
          uVar2 = (undefined1)*(undefined8 *)(lVar15 + 0x20);
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b080();
          *(undefined1 *)(*(long *)(*(long *)(lVar15 + 0x30) + 8) + 0x18) = uVar2;
          _objc_release(puVar3);
        }
      }
      _objc_release(lVar11);
      _objc_release(ppuVar7);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        puVar6 = puVar6 + 0x20;
        _objc_loadWeakRetained();
        if (puVar6 != (undefined *)0x0) {
          func_0x00010c153b40(*(undefined8 *)(puVar6 + 0x70));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar6);
        return puVar6;
      }
      return puVar6;
    }
    return (undefined *)(ulong)(bVar1 & 1);
  }
  return puVar4;
}



/* Entry: 107f27494; end: 107f27577; -[SCGallerySearchIndexer _saveDateTagWithSnapId:dateTag:database:] */

undefined *
FUN_107f27494(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined *param_5,undefined *param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_3;
  puVar4 = param_4;
  puVar5 = param_5;
  if ((param_3 != 0) && (param_4 != (undefined *)0x0)) {
    lVar15 = *(long *)(param_1 + 0xb0);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf9b080(param_5);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release();
    param_1 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(param_1 + 0xe8);
  puVar9 = puVar5;
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  _objc_retain(lVar15);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  puVar8 = puVar6;
  func_0x00010bf9b080();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(puVar6 + 0xf0);
  puVar6 = param_6;
  _objc_retain(param_6);
  iVar10 = (int)puVar6;
  _objc_retain(puVar8);
  _objc_retain(uVar14);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_6;
  puVar3 = puVar6;
  func_0x00010bf9b080();
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(uVar14);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar15);
    _objc_retain(puVar3);
    _objc_retain(puVar9);
    puStack_1b8 = &uStack_1c0;
    uStack_1c0 = 0;
    uStack_1b0 = 0x2020000000;
    uStack_1a8 = 1;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_1a0 = lVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf9b080();
    *(char *)(puStack_1b8 + 3) = (char)puVar5;
    _objc_release(puVar6);
    _objc_initWeak(auStack_1c8,puVar4);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_107f279c8;
    puStack_1f0 = &UNK_110a138b0;
    _objc_copyWeak(auStack_1d0,auStack_1c8);
    puStack_1d8 = &uStack_1c0;
    _objc_retain(puVar9);
    puStack_1e8 = puVar9;
    _objc_retain(lVar15);
    ppuVar7 = &puStack_208;
    lStack_1e0 = lVar15;
    func_0x00010bf97ce0(puVar3);
    if (iVar10 != 0) {
      _objc_initWeak(auStack_210,puVar4);
      puStack_238 = puVar6;
      uStack_230 = 0xc2000000;
      pcStack_228 = FUN_107f27b00;
      puStack_220 = &UNK_1108434b0;
      _objc_copyWeak(auStack_218,auStack_210);
      func_0x000100162d98("APPSTORE",&puStack_238);
      _objc_destroyWeak(auStack_218);
      _objc_destroyWeak(auStack_210);
    }
    bVar1 = *(byte *)(puStack_1b8 + 3);
    _objc_release(lStack_1e0);
    _objc_release(puStack_1e8);
    _objc_destroyWeak(auStack_1d0);
    _objc_destroyWeak(auStack_1c8);
    __Block_object_dispose(&uStack_1c0,8);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return (undefined *)(ulong)(bVar1 & 1);
    }
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_1d0);
    _objc_destroyWeak(auStack_1c8);
    puVar6 = (undefined *)0x8;
    __Block_object_dispose(&uStack_1c0);
    __Unwind_Resume();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    _objc_retain(ppuVar7);
    lVar11 = lVar15 + 0x38;
    _objc_loadWeakRetained();
    if (lVar11 != 0) {
      puVar4 = puVar6;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      lVar13 = *(long *)(*(long *)(lVar15 + 0x30) + 8);
      puVar6 = puVar4;
      if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
        *(undefined1 *)(lVar13 + 0x18) = 0;
      }
      else {
        uVar2 = (undefined1)*(undefined8 *)(lVar15 + 0x20);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9b080();
        *(undefined1 *)(*(long *)(*(long *)(lVar15 + 0x30) + 8) + 0x18) = uVar2;
        _objc_release(puVar4);
      }
    }
    _objc_release(lVar11);
    _objc_release(ppuVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      puVar6 = puVar6 + 0x20;
      _objc_loadWeakRetained();
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c153b40(*(undefined8 *)(puVar6 + 0x70));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return puVar6;
    }
    return puVar6;
  }
  return puVar5;
}



/* Entry: 107f27578; end: 107f2765b; -[SCGallerySearchIndexer _updateLanguageIdWithSnapId:languageId:database:] */

ulong FUN_107f27578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,ulong param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  ulong uStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  long lStack_140;
  long lStack_138;
  
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(undefined8 *)(param_1 + 0xe8);
  uVar5 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  puVar8 = puVar3;
  func_0x00010bf9b080();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return uVar6;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(puVar3 + 0xf0);
  uVar6 = param_6;
  _objc_retain(param_6);
  iVar10 = (int)uVar6;
  _objc_retain(puVar8);
  _objc_retain(uVar15);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_6;
  puVar9 = puVar3;
  func_0x00010bf9b080();
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(uVar15);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return uVar6;
  }
  ___stack_chk_fail();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar11);
  _objc_retain(puVar9);
  _objc_retain(uVar5);
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x2020000000;
  uStack_148 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_140 = lVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf9b080();
  *(char *)(puStack_158 + 3) = (char)uVar6;
  _objc_release(puVar3);
  _objc_initWeak(auStack_168,puVar4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_107f279c8;
  puStack_190 = &UNK_110a138b0;
  _objc_copyWeak(auStack_170,auStack_168);
  puStack_178 = &uStack_160;
  _objc_retain(uVar5);
  uStack_188 = uVar5;
  _objc_retain(lVar11);
  ppuVar7 = &puStack_1a8;
  lStack_180 = lVar11;
  func_0x00010bf97ce0(puVar9);
  if (iVar10 != 0) {
    _objc_initWeak(auStack_1b0,puVar4);
    puStack_1d8 = puVar3;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_107f27b00;
    puStack_1c0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_1b8,auStack_1b0);
    func_0x000100162d98("APPSTORE",&puStack_1d8);
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_1b0);
  }
  bVar1 = *(byte *)(puStack_158 + 3);
  _objc_release(lStack_180);
  _objc_release(uStack_188);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uVar5);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return (ulong)(bVar1 & 1);
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  uVar6 = 8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar6);
  _objc_retain(ppuVar7);
  lVar12 = lVar11 + 0x38;
  _objc_loadWeakRetained();
  if (lVar12 != 0) {
    uVar5 = uVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar14 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
    uVar6 = uVar5;
    if ((*(byte *)(lVar14 + 0x18) & 1) == 0) {
      *(undefined1 *)(lVar14 + 0x18) = 0;
    }
    else {
      uVar2 = (undefined1)*(undefined8 *)(lVar11 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b080();
      *(undefined1 *)(*(long *)(*(long *)(lVar11 + 0x30) + 8) + 0x18) = uVar2;
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar12);
  _objc_release(ppuVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    uVar6 = uVar6 + 0x20;
    _objc_loadWeakRetained();
    if (uVar6 != 0) {
      func_0x00010c153b40(*(undefined8 *)(uVar6 + 0x70));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return uVar6;
  }
  return uVar6;
}



/* Entry: 107f2765c; end: 107f27773; -[SCGallerySearchIndexer _updateTagVersionBySnapId:languageId:tagVersion:database:] */

ulong FUN_107f2765c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(param_1 + 0xf0);
  uVar7 = param_6;
  _objc_retain(param_6);
  iVar10 = (int)uVar7;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  puVar9 = puVar4;
  func_0x00010bf9b080();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return uVar7;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar14);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_e0 = lVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010bf9b080();
  *(char *)(puStack_f8 + 3) = (char)uVar5;
  _objc_release(puVar4);
  _objc_initWeak(auStack_108,puVar3);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_107f279c8;
  puStack_130 = &UNK_110a138b0;
  _objc_copyWeak(auStack_110,auStack_108);
  puStack_118 = &uStack_100;
  _objc_retain(param_5);
  uStack_128 = param_5;
  _objc_retain(lVar14);
  ppuVar8 = &puStack_148;
  lStack_120 = lVar14;
  func_0x00010bf97ce0(puVar9);
  if (iVar10 != 0) {
    _objc_initWeak(auStack_150,puVar3);
    puStack_178 = puVar4;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_107f27b00;
    puStack_160 = &UNK_1108434b0;
    _objc_copyWeak(auStack_158,auStack_150);
    func_0x000100162d98("APPSTORE",&puStack_178);
    _objc_destroyWeak(auStack_158);
    _objc_destroyWeak(auStack_150);
  }
  bVar1 = *(byte *)(puStack_f8 + 3);
  _objc_release(lStack_120);
  _objc_release(uStack_128);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
    uVar7 = 8;
    __Block_object_dispose(&uStack_100);
    __Unwind_Resume();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar7);
    _objc_retain(ppuVar8);
    lVar11 = lVar14 + 0x38;
    _objc_loadWeakRetained();
    if (lVar11 != 0) {
      uVar6 = uVar7;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      lVar13 = *(long *)(*(long *)(lVar14 + 0x30) + 8);
      uVar7 = uVar6;
      if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
        *(undefined1 *)(lVar13 + 0x18) = 0;
      }
      else {
        uVar2 = (undefined1)*(undefined8 *)(lVar14 + 0x20);
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9b080();
        *(undefined1 *)(*(long *)(*(long *)(lVar14 + 0x30) + 8) + 0x18) = uVar2;
        _objc_release(puVar3);
      }
    }
    _objc_release(lVar11);
    _objc_release(ppuVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      uVar7 = uVar7 + 0x20;
      _objc_loadWeakRetained();
      if (uVar7 != 0) {
        func_0x00010c153b40(*(undefined8 *)(uVar7 + 0x70));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar7);
      return uVar7;
    }
    return uVar7;
  }
  return (ulong)(bVar1 & 1);
}



/* Entry: 107f27774; end: 107f279c7; -[SCGallerySearchIndexer _replaceVisualTagsConfidenceWithSnapId:visualTags:database:shouldNotifyListener:] */

ulong FUN_107f27774(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,int param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
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
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf9b080();
  *(char *)(puStack_88 + 3) = (char)uVar4;
  _objc_release(puVar3);
  _objc_initWeak(auStack_98,param_1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107f279c8;
  puStack_c0 = &UNK_110a138b0;
  _objc_copyWeak(auStack_a0,auStack_98);
  puStack_a8 = &uStack_90;
  _objc_retain(param_5);
  uStack_b8 = param_5;
  _objc_retain(param_3);
  ppuVar8 = &puStack_d8;
  lStack_b0 = param_3;
  func_0x00010bf97ce0(param_4);
  if (param_6 != 0) {
    _objc_initWeak(auStack_e0,param_1);
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_107f27b00;
    puStack_f0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e8,auStack_e0);
    func_0x000100162d98("APPSTORE",&puStack_108);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
  }
  bVar1 = *(byte *)(puStack_88 + 3);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (ulong)(bVar1 & 1);
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  uVar7 = 8;
  __Block_object_dispose(&uStack_90);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar7);
  _objc_retain(ppuVar8);
  lVar5 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    uVar6 = uVar7;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar10 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    uVar7 = uVar6;
    if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
      *(undefined1 *)(lVar10 + 0x18) = 0;
    }
    else {
      uVar2 = (undefined1)*(undefined8 *)(param_3 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b080();
      *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = uVar2;
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar5);
  _objc_release(ppuVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    uVar7 = uVar7 + 0x20;
    _objc_loadWeakRetained();
    if (uVar7 != 0) {
      func_0x00010c153b40(*(undefined8 *)(uVar7 + 0x70));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return uVar7;
  }
  return uVar7;
}



/* Entry: 107f279c8; end: 107f27aff;  */

void FUN_107f279c8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    param_2 = lVar3;
    if ((*(byte *)(lVar6 + 0x18) & 1) == 0) {
      *(undefined1 *)(lVar6 + 0x18) = 0;
    }
    else {
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b080();
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained();
    if (param_2 != 0) {
      func_0x00010c153b40(*(undefined8 *)(param_2 + 0x70));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107f27b00; end: 107f27b37;  */

void FUN_107f27b00(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c153b40(*(undefined8 *)(param_1 + 0x70),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f27b38; end: 107f27b97; -[SCGallerySearchIndexer invalidate] */

void FUN_107f27b38(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x160);
  func_0x00010bfec280();
  if (iVar1 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 107f27b98; end: 107f27bb7; -[SCGallerySearchIndexer _isInvalidated] */

bool FUN_107f27b98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 107f27bb8; end: 107f27ccb; -[SCGallerySearchIndexer _addSnapToRetryIfNeededWithSnap:fromSnap:indexer:shouldUpload:] */

void FUN_107f27bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar4 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    puVar1 = PTR_PTR_1126d85e0;
    _objc_alloc(PTR_PTR_1126d85e0);
    func_0x00010c046f80();
    func_0x00010befa120(uVar4,param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2,param_2,uVar4);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c22e620();
    if ((int)uVar4 != 0) {
      *param_6 = 0;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f27ccc; end: 107f27f2b; -[SCGallerySearchIndexer .cxx_destruct] */

void FUN_107f27ccc(long param_1)

{
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
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
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f27f2c; end: 107f2802b; -[SCGallerySearchIndexer debugInfoFromSearchIndexer:completionHandler:] */

void FUN_107f27f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
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



/* Entry: 107f2802c; end: 107f280db;  */

void FUN_107f2802c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    func_0x00010bf529e0();
    uVar5 = *(undefined8 *)(lVar3 + 0x68);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107f280dc;
    puStack_60 = &UNK_1108a5290;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    uStack_50 = uVar4;
    uStack_48 = uVar5;
    func_0x00010007380c(uVar1,&puStack_78);
    _objc_release(uStack_58);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 107f280dc; end: 107f280ef;  */

void FUN_107f280dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f280ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107f280f0; end: 107f280f7; -[SCWaitingForFacePayload tagsStringWithoutFace] */

undefined8 FUN_107f280f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f280f8; end: 107f280ff; -[SCWaitingForFacePayload setTagsStringWithoutFace:] */

void FUN_107f280f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107f28100; end: 107f28107; -[SCWaitingForFacePayload memDataIds] */

undefined8 FUN_107f28100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f28108; end: 107f28137; -[SCWaitingForFacePayload setMemDataIds:] */

void FUN_107f28108(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f28138; end: 107f2813f; -[SCWaitingForFacePayload tagVersion] */

undefined8 FUN_107f28138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f28140; end: 107f2816f; -[SCWaitingForFacePayload setTagVersion:] */

void FUN_107f28140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f28170; end: 107f28177; -[SCWaitingForFacePayload backupStatus] */

undefined8 FUN_107f28170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f28178; end: 107f281a7; -[SCWaitingForFacePayload setBackupStatus:] */

void FUN_107f28178(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f281a8; end: 107f281ef; -[SCWaitingForFacePayload .cxx_destruct] */

void FUN_107f281a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f281f0; end: 107f281f7; -[SCGallerySearchTagUploaderEligibilityResult eligibleSyncedSnapIdSet] */

undefined8 FUN_107f281f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f281f8; end: 107f281ff; -[SCGallerySearchTagUploaderEligibilityResult setEligibleSyncedSnapIdSet:] */

void FUN_107f281f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107f28200; end: 107f28207; -[SCGallerySearchTagUploaderEligibilityResult ineligibleSnapIds] */

undefined8 FUN_107f28200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f28208; end: 107f2820f; -[SCGallerySearchTagUploaderEligibilityResult setIneligibleSnapIds:] */

void FUN_107f28208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107f28210; end: 107f2823f; -[SCGallerySearchTagUploaderEligibilityResult .cxx_destruct] */

void FUN_107f28210(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f28240; end: 107f28503; -[SCGallerySearchTagUploader initWithMemoriesSearchDatabase:networker:dataObjectContext:docObjectContext:coreConfigProvider:galleryProfile:faceTaggingDataProvider:faceTaggingPermissionsManager:] */

undefined8 *
FUN_107f28240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126fbb10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    uVar5 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x000108ec1ed4();
    puVar1[0xe] = uVar4;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_10);
    uVar5 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar5 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar5);
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



/* Entry: 107f28504; end: 107f2850b; -[SCGallerySearchTagUploader dedicatedQueue] */

void FUN_107f28504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 107f2850c; end: 107f2859b; -[SCGallerySearchTagUploader runWithServiceTerm:] */

void FUN_107f2850c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107f2859c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f2859c; end: 107f289a3;  */

void FUN_107f2859c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010be41400();
  if ((uVar2 & 1) == 0) {
    _dispatch_group_create();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
    func_0x00010bf529e0();
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      _dispatch_group_enter(uVar2);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_a0 = puVar12;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107f289a4;
      puStack_88 = &UNK_110842e18;
      _objc_retain(uVar2);
      uStack_80 = uVar2;
      func_0x00010be97140(uVar5);
      _objc_release(uStack_80);
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      func_0x00010bf002e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x00010bfadf80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf8d5c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfed620();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf529e0();
      if (lVar8 != 0) {
        lVar8 = lVar7;
        func_0x00010bf00560(lVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
        puStack_c8 = puVar12;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_107f289ac;
        puStack_b0 = &UNK_110a138e0;
        _objc_retain(lVar7);
        lStack_a8 = lVar7;
        func_0x00010bfaea20(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d500(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
        func_0x00010c12d4a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
        func_0x00010c12d4a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
        _objc_release(uVar11);
        _objc_release(lStack_a8);
        _objc_release(lVar8);
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
      puStack_f0 = puVar12;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x107f289f8;
      puStack_d8 = &UNK_110a138e0;
      _objc_retain(lVar4);
      lStack_d0 = lVar4;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar10;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      func_0x00010bf529e0();
      bVar1 = lVar9 != 0;
      if (lVar9 != 0) {
        _dispatch_group_enter(uVar2);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_110 = 0xc2000000;
        uStack_108 = 0x107f28a4c;
        puStack_100 = &UNK_110842e18;
        _objc_retain(uVar2);
        puVar12 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = uVar2;
        func_0x00010bec67c0(uVar11);
        _objc_release(uStack_f8);
      }
      _objc_release(lVar8);
      _objc_release(lVar10);
      _objc_release(lStack_d0);
      _objc_release(lVar7);
      _objc_release(lVar4);
      _objc_release(lVar6);
      _objc_release(uVar5);
    }
    if (lVar3 == 0 && !bVar1) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c127f00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95760(uVar11);
      _objc_release(uVar5);
    }
    else {
      _objc_initWeak(auStack_120,*(undefined8 *)(param_1 + 0x20));
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uStack_148 = 0xc2000000;
      pcStack_140 = FUN_107f28a54;
      puStack_138 = &UNK_110841fb0;
      puStack_150 = puVar12;
      _objc_copyWeak(auStack_128,auStack_120);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar11);
      uStack_130 = uVar11;
      func_0x000100bc0718(uVar2,uVar5,&puStack_150);
      _objc_release(uVar5);
      _objc_release(uStack_130);
      _objc_destroyWeak(auStack_128);
      _objc_destroyWeak(auStack_120);
    }
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107f289a4; end: 107f289ab;  */

void FUN_107f289a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107f289ac; end: 107f28a43;  */

undefined8 FUN_107f289ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107f28a44; end: 107f28a53;  */

void FUN_107f28a44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107f28a54; end: 107f28ab7;  */

void FUN_107f28a54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010c127f00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95760(uVar3,param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f28ab8; end: 107f28dd7; -[SCGallerySearchTagUploader _submitUploadTagsRequestWithSnapTagsList:existingSnapTagsList:syncedSnapIds:serviceTerm:completion:] */

void FUN_107f28ab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined **param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puStack_150;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126d8640;
  _objc_alloc_init();
  func_0x00010c205780();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = param_7;
  if (param_7 == (undefined **)0x0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107f28dd8;
    puStack_90 = &UNK_110841f80;
    ppuVar4 = &puStack_a8;
    puStack_150 = &uStack_88;
    _objc_retain(param_6);
    uStack_88 = param_6;
    lStack_80 = param_1;
  }
  _objc_retainBlock();
  _objc_initWeak(auStack_b0,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920(PTR_PTR_1126bbf20);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_107f28e14;
  puStack_d8 = &UNK_110a13980;
  _objc_copyWeak(auStack_b8,auStack_b0);
  _objc_retain(param_5);
  uStack_d0 = param_5;
  _objc_retain(param_4);
  uStack_c8 = param_4;
  _objc_retain(ppuVar4);
  ppuStack_c0 = ppuVar4;
  _objc_copyWeak(auStack_f8,auStack_b0);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(ppuVar4);
  func_0x00010c25f400(uVar5);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_f8);
  _objc_release(ppuStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar4);
  if (param_7 == (undefined **)0x0) {
    _objc_release(*puStack_150);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f28dd8; end: 107f28e13;  */

void FUN_107f28dd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c127f00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95760(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f28e14; end: 107f29003;  */

void FUN_107f28e14(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d8648;
    _objc_alloc();
    func_0x00010c0206e0();
    puVar3 = puVar2;
    func_0x00010c15f8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c067fc0();
    _objc_release(puVar3);
    lVar5 = param_2;
    func_0x00010c252ee0();
    if ((lVar5 == 200) && (((ulong)puVar4 & 0xfffffffffffffffe) == 2000)) {
      _objc_initWeak(auStack_58,lVar1);
      uVar6 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_68,auStack_58);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      puStack_60 = puVar4;
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar9);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar7);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
    }
    else {
      func_0x00010c12d500(*(undefined8 *)(lVar1 + 0x48));
      func_0x00010c12d4a0(*(undefined8 *)(lVar1 + 0x50));
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107f29004; end: 107f29197;  */

void FUN_107f29004(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_68,lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x00010c066920(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107f29198; end: 107f292eb;  */

void FUN_107f29198(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x40) == 2000) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      lVar3 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar3);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
      if (lVar2 != 0) {
        lVar4 = *plStack_110;
        do {
          lVar5 = 0;
          do {
            if (*plStack_110 != lVar4) {
              _objc_enumerationMutation(lVar3);
            }
            func_0x00010c0bb100(*(undefined8 *)(lVar1 + 0x30),param_2,
                                *(undefined8 *)(lStack_118 + lVar5 * 8),1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            lVar5 = lVar5 + 1;
          } while (lVar2 != lVar5);
          lVar2 = lVar3;
          func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
        } while (lVar2 != 0);
      }
      _objc_release(lVar3);
    }
    func_0x00010c12d500(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c12d4a0(*(undefined8 *)(lVar1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c12d500(*(undefined8 *)(lVar2 + 0x48),param_2,*(undefined8 *)(lVar1 + 0x20));
    func_0x00010c12d4a0(*(undefined8 *)(lVar2 + 0x50),param_2,*(undefined8 *)(lVar1 + 0x28));
    (**(code **)(*(long *)(lVar1 + 0x30) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107f292ec; end: 107f2933f;  */

void FUN_107f292ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d500(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12d4a0(*(undefined8 *)(lVar1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x28));
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f29340; end: 107f2966f; -[SCGallerySearchTagUploader _retryWaitForFaceProcessedWithServiceTerm:completion:] */

void FUN_107f29340(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1d0 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lStack_1d8 = param_4;
  if (lVar2 == 0) {
    if (param_4 == 0) {
      func_0x00010c127f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95760(lStack_1d0);
      _objc_release(param_1);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4);
      param_1 = unaff_x22;
    }
  }
  else {
    _dispatch_group_create();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(lVar1);
    lStack_1c8 = lVar1;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar5 = *plStack_130;
      unaff_x21 = &UNK_11085fa78;
      do {
        lVar6 = 0;
        do {
          if (*plStack_130 != lVar5) {
            _objc_enumerationMutation(lStack_1c8);
          }
          uVar7 = *(undefined8 *)(lStack_138 + lVar6 * 8);
          lVar3 = *(long *)(param_1 + 0x58);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            _dispatch_group_enter(lVar2);
            uVar4 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010bfca1c0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_178 = 0xc2000000;
            pcStack_170 = FUN_107f29670;
            puStack_168 = &UNK_11085fa78;
            lStack_160 = param_1;
            _objc_retain(lVar3);
            lStack_158 = lVar3;
            uStack_150 = uVar7;
            _objc_retain(lVar2);
            lStack_148 = lVar2;
            func_0x00010c0e3040(uVar4);
            _objc_release(uVar4);
            _objc_release(lStack_148);
            _objc_release(lStack_158);
          }
          _objc_release(lVar3);
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lStack_1c8;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lStack_1c8);
    _objc_initWeak(auStack_188,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x107f29948;
    puStack_1a8 = &UNK_110848378;
    _objc_copyWeak(auStack_190,auStack_188);
    lVar1 = lStack_1d8;
    _objc_retain(lStack_1d8);
    lVar5 = lStack_1d0;
    lStack_198 = lVar1;
    _objc_retain(lStack_1d0);
    lStack_1a0 = lVar5;
    param_2 = uVar7;
    func_0x000100bc0718(lVar2,uVar7,&puStack_1c0);
    _objc_release(uVar7);
    _objc_release(lStack_1a0);
    _objc_release(lStack_198);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    _objc_release(lVar2);
    lVar1 = lStack_1c8;
    param_1 = lVar2;
  }
  _objc_release(lVar1);
  _objc_release(lStack_1d8);
  lVar2 = lStack_1d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_188);
  lVar5 = lVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_107f29670;
  lStack_210 = param_1;
  puStack_208 = unaff_x21;
  lStack_200 = lVar1;
  lStack_1f8 = lVar2;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x40);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_107f2975c;
  puStack_240 = &UNK_1108475b0;
  uVar9 = *(undefined8 *)(lVar5 + 0x28);
  uVar4 = *(undefined8 *)(lVar5 + 0x20);
  uStack_238 = param_2;
  _objc_retain(*(undefined8 *)(lVar5 + 0x28));
  uVar10 = *(undefined8 *)(lVar5 + 0x38);
  uVar8 = *(undefined8 *)(lVar5 + 0x30);
  uStack_230 = uVar4;
  uStack_228 = uVar9;
  _objc_retain(*(undefined8 *)(lVar5 + 0x38));
  uStack_220 = uVar8;
  uStack_218 = uVar10;
  _objc_retain(param_2);
  func_0x00010007380c(uVar7,&puStack_258);
  _objc_release(uVar7);
  _objc_release(uStack_218);
  _objc_release(uStack_228);
  _objc_release(uStack_238);
  _objc_release(param_2);
  return;
}



/* Entry: 107f29670; end: 107f2975b;  */

void FUN_107f29670(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107f2975c;
  puStack_60 = &UNK_1108475b0;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_2;
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uStack_40 = uVar3;
  uStack_38 = uVar5;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 107f2975c; end: 107f298c3;  */

void FUN_107f2975c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  FUN_107f298c4();
  if (iVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bdd29e0(uVar3,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2684c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beca640(lVar5,param_2,uVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar5 == 0) {
      lVar6 = *(long *)(param_1 + 0x30);
      func_0x00010c2684c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar5);
      lVar6 = lVar5;
    }
    lVar7 = lVar6;
    func_0x00010c08fa60();
    if (lVar7 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0c7520(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c268360(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf14ce0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc8480(uVar10,param_2,uVar1,uVar4,uVar8,lVar6,uVar9);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar4);
    }
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58),param_2,
                        *(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 107f298c4; end: 107f299bf;  */

uint FUN_107f298c4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    uVar4 = (uint)lVar3 ^ 1;
    _objc_release(lVar1);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(param_1);
  return uVar4 & 1;
}



/* Entry: 107f299c0; end: 107f29ba3; -[SCGallerySearchTagUploader _tagsStringBySettingFaceTag:inTagsJsonString:] */

void FUN_107f299c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = param_4;
  func_0x00010c08fa60();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_107f29b68;
  }
  puVar1 = param_4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_4);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puVar6 = puVar2;
    if (puVar3 == (undefined *)0x0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar4);
      puVar5 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar4);
      puVar3 = puVar2;
      if (((ulong)puVar5 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar2);
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c0d3c80(puVar2);
        _objc_release(puVar2);
        goto LAB_107f29ac0;
      }
      _objc_retain(param_4);
    }
    else {
LAB_107f29ac0:
      func_0x00010c1d0640(puVar6);
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        _objc_retain(param_4);
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010c008340();
      }
      _objc_release(puVar3);
      _objc_release(puVar6);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_107f29b68:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107f29ba4; end: 107f29de3; -[SCGallerySearchTagUploader _handleFaceDataForEnqueueSnapId:tagsInOneSnapBuilder:faceDataValue:memDataIds:tagVersion:backupStatus:] */

void FUN_107f29ba4(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  FUN_107f298c4();
  if ((uVar1 & 1) == 0) {
    ppuVar2 = (undefined **)PTR_PTR_1126d8650;
    _objc_alloc_init(PTR_PTR_1126d8650);
    ppuVar3 = param_4;
    func_0x00010bf21f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    ppuVar4 = ppuVar3;
    func_0x00010c271e60(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211980(ppuVar2,param_2,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    func_0x00010c1c5820(ppuVar2,param_2,param_6);
    _objc_release(param_6);
    func_0x00010c211900(ppuVar2,param_2,param_7);
    _objc_release(param_7);
    func_0x00010c16ea40(ppuVar2,param_2,param_8);
    _objc_release(param_8);
    func_0x00010c1d0640(param_1[0xb],param_2,ppuVar2,param_3);
    _objc_release(param_3);
    ppuVar3 = (undefined **)PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_1;
    func_0x00010c127f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2254a0(ppuVar3,param_2,ppuVar4,param_1);
  }
  else {
    ppuVar2 = param_1;
    func_0x00010bdd29e0(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    func_0x00010c199b60(param_4,param_2,ppuVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    ppuVar3 = param_4;
    func_0x00010bf21f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    ppuVar4 = ppuVar3;
    func_0x00010c271e60(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8480(param_1,param_2,param_3,param_6,param_7,ppuVar4,param_8);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_3);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107f29de4; end: 107f29f73; -[SCGallerySearchTagUploader _addSnapTagsToUploadWithSnapId:memDataIds:tagVersion:tagsString:backupStatus:] */

void FUN_107f29de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8658;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c204680();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c5820(puVar1,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c211900(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c211960(puVar1,param_2,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x48),param_2,puVar2);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x50),param_2,param_7,param_3);
  _objc_release(param_7);
  _objc_release(param_3);
  uVar3 = *(ulong *)(param_1 + 0x48);
  func_0x00010bf529e0();
  if (99 < uVar3) {
    puVar4 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf69da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2254a0(puVar4,param_2,lVar5,param_1);
    _objc_release(lVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f29f74; end: 107f2a497; -[SCGallerySearchTagUploader _base64StringFromFaceDataArray:] */

void FUN_107f29f74(undefined8 param_1,undefined **param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d8660;
  _objc_alloc_init();
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar3 == (undefined *)0x0) {
      _objc_release(param_3);
      puVar3 = puVar2;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar15 = puVar3;
        func_0x00010bf15da0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        _objc_retain();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_retain(param_2);
        _objc_opt_class(puVar3);
        puVar2 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar3);
        puVar3 = param_3;
        if (((ulong)puVar2 & 1) == 0) {
          puVar3 = (undefined *)0x0;
        }
        _objc_retain(puVar3);
        puVar15 = param_3;
        if (((ulong)puVar2 & 1) == 0) {
          func_0x00010c296f60(param_3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar3);
        _objc_release(param_2);
        _objc_release(param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
      return;
    }
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar14 = *(undefined **)((long)puVar15 * 8);
      if (puVar14 != (undefined *)0x0) {
        param_2 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
        _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
        puVar4 = puVar14;
        _objc_opt_isKindOfClass(puVar14,param_2);
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = puVar14;
          FUN_107f2a498(puVar14,&PTR____CFConstantStringClassReference_110ec7398);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar14;
          FUN_107f2a498(puVar14,&PTR____CFConstantStringClassReference_110ec73b8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar14;
          FUN_107f2a498(puVar14,&PTR____CFConstantStringClassReference_110ec73d8);
          _objc_retainAutoreleasedReturnValue();
          param_2 = &PTR____CFConstantStringClassReference_110ec73f8;
          puVar7 = puVar14;
          FUN_107f2a498(puVar14,&PTR____CFConstantStringClassReference_110ec73f8);
          _objc_retainAutoreleasedReturnValue();
          if (((puVar4 != (undefined *)0x0 && puVar5 != (undefined *)0x0) &&
              puVar6 != (undefined *)0x0) && puVar7 != (undefined *)0x0) {
            puVar8 = PTR_PTR_1126d8668;
            _objc_alloc_init(PTR_PTR_1126d8668);
            func_0x00010c067ec0(puVar4);
            func_0x00010c227660(puVar8);
            func_0x00010c067ec0(puVar5);
            func_0x00010c227820(puVar8);
            func_0x00010c067ec0(puVar6);
            func_0x00010c225700(puVar8);
            func_0x00010c067ec0(puVar7);
            func_0x00010c1a7d60(puVar8);
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            _objc_retain(puVar14);
            _objc_opt_class(puVar9);
            puVar10 = puVar14;
            _objc_opt_isKindOfClass(puVar14,puVar9);
            puVar9 = puVar14;
            if (((ulong)puVar10 & 1) == 0) {
              func_0x00010c296f60();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(puVar14);
            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_retain(puVar9);
            _objc_opt_class(puVar10);
            puVar13 = puVar9;
            _objc_opt_isKindOfClass(puVar9,puVar10);
            puVar10 = puVar9;
            if (((ulong)puVar13 & 1) == 0) {
              puVar10 = (undefined *)0x0;
            }
            _objc_retain(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar9);
            _objc_retain(puVar10);
            puVar9 = puVar10;
            func_0x00010c08fa60();
            puVar13 = puVar10;
            if (puVar9 == (undefined *)0x0) {
LAB_107f2a300:
              _objc_release(puVar13);
            }
            else {
              puVar9 = puVar10;
              func_0x00010bf44740();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar9;
              func_0x00010bf529e0();
              if (puVar13 == (undefined *)0x2) {
                puVar13 = puVar9;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar13;
                func_0x00010c08fa60();
                _objc_release(puVar13);
                if (puVar11 == (undefined *)0x0) goto LAB_107f2a2c0;
                puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
                _objc_alloc();
                puVar13 = puVar9;
                func_0x00010c0dfd40(puVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bff6b20();
                _objc_release(puVar13);
                puVar13 = puVar11;
                func_0x00010c08fa60();
                if (puVar13 == (undefined *)0x0) {
                  puVar13 = (undefined *)0x0;
                }
                else {
                  puVar13 = PTR_PTR_1126d8680;
                  func_0x00010c0f40e0();
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_release(puVar11);
              }
              else {
LAB_107f2a2c0:
                puVar13 = (undefined *)0x0;
              }
              _objc_release(puVar9);
              _objc_release(puVar10);
              if (puVar13 != (undefined *)0x0) {
                func_0x00010c17d8a0(puVar8);
                goto LAB_107f2a300;
              }
            }
            FUN_107f2a498(puVar14,&PTR____CFConstantStringClassReference_110ec7438);
            _objc_retainAutoreleasedReturnValue();
            param_2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            puVar13 = puVar14;
            _objc_opt_isKindOfClass(puVar14,param_2);
            puVar9 = puVar14;
            if (((ulong)puVar13 & 1) == 0) {
              puVar9 = (undefined *)0x0;
            }
            _objc_retain(puVar9);
            _objc_release(puVar14);
            if (puVar9 != (undefined *)0x0) {
              func_0x00010c282760(puVar14);
              func_0x00010c1807e0(puVar8);
            }
            puVar14 = puVar2;
            func_0x00010bf6faa0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar14);
            _objc_release(puVar9);
            _objc_release(puVar10);
            _objc_release(puVar8);
          }
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar3 != puVar15);
    puVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f2a498; end: 107f2a543;  */

void FUN_107f2a498(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = param_1;
  if ((uVar3 & 1) == 0) {
    func_0x00010c296f60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107f2a544; end: 107f2ab9f; -[SCGallerySearchTagUploader enqueueSnap:entryId:memDataIds:locationTags:timeTags:metaTags:visualTagToConfidenceMap:tagVersion:languageId:tagClusterName:locationClusterName:caption:tinyClipCaptionToConfidenceMaps:tinyClipModelVersion:] */

void FUN_107f2a544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16)

{
  undefined8 uVar1;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  _objc_retain(param_3);
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
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x107f2a7c8;
  puStack_e0 = &UNK_110a13a10;
  uStack_b0 = param_9;
  uStack_a8 = param_11;
  uStack_a0 = param_12;
  uStack_98 = param_13;
  uStack_90 = param_14;
  uStack_70 = param_16;
  uStack_88 = param_15;
  uStack_80 = param_10;
  lStack_d8 = param_1;
  uStack_d0 = param_3;
  uStack_c8 = param_6;
  uStack_c0 = param_7;
  uStack_b8 = param_8;
  uStack_78 = param_5;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_f8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(param_5);
  _objc_release(param_10);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 107f2aba0; end: 107f2aca7;  */

void FUN_107f2aba0(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107f2aca8;
  puStack_70 = &UNK_110853a60;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = param_2;
  _objc_retain(uVar2);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar3;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  return;
}



/* Entry: 107f2aca8; end: 107f2ae33;  */

void FUN_107f2aca8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    func_0x00010bfca1c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107f2ae34;
    puStack_88 = &UNK_110a139e0;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x30));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = uVar5;
    uStack_78 = uVar6;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = uVar4;
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = uVar5;
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = uVar6;
    _objc_retain(uVar4);
    uStack_58 = uVar4;
    func_0x00010c0e3040(uVar1,param_2,&puStack_a0);
    _objc_release(uVar1);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = uVar2;
  func_0x00010c271e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc8480(uVar1,param_2,uVar5,uVar4,uVar6,uVar3,*(undefined8 *)(param_1 + 0x48));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f2ae34; end: 107f2af5b;  */

void FUN_107f2ae34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107f2af5c;
  puStack_70 = &UNK_11085fb98;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar3;
  uStack_60 = uVar4;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  uStack_50 = param_2;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar3;
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar4;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
  return;
}



/* Entry: 107f2af5c; end: 107f2af73;  */

void FUN_107f2af5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be29310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleFaceDataForEnqueueSnapId__112567e60,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 107f2af74; end: 107f2af7b; -[SCGallerySearchTagUploader invalidate] */

void FUN_107f2af74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x68),PTR_s_increment_1125d8a68);
  return;
}



/* Entry: 107f2af7c; end: 107f2af8f; -[SCGallerySearchTagUploader regularScheduleNotifier] */

void FUN_107f2af7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x404e000000000000,PTR_PTR_1126c3c40,PTR_s_scheduleAfterSeconds__112631918);
  return;
}


