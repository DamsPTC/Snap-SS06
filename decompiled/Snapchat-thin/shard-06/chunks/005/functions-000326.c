/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104954eec; end: 104954f77; +[FBSDKCrashShield featureForString:] */

undefined * FUN_104954eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = uRam000000011369d080;
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  puVar3 = PTR_PTR_1126add78;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar2);
  func_0x00010bf71e60(puVar3,param_2,uVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar3;
  func_0x00010c067ec0(puVar3);
  _objc_release(puVar3);
  return puVar2;
}



/* Entry: 104954f78; end: 104955227; +[FBSDKCrashShield _getFeature:] */

void FUN_104954f78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_210;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126add78;
  func_0x00010bf0a0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lRam000000011369d078;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain();
  puStack_210 = puVar2;
  func_0x00010bf52a60();
  if (puStack_210 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar11 = *plStack_1a0;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        puVar13 = PTR_PTR_1126add78;
        func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,
                            *(undefined8 *)(lStack_1a8 + (long)puVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010be1dc40(param_1,param_2,puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        lVar5 = lVar3;
        _objc_retain();
        lVar6 = lVar5;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          lVar9 = *plStack_1e0;
          do {
            lVar10 = 0;
            do {
              if (*plStack_1e0 != lVar9) {
                _objc_enumerationMutation(lVar5);
              }
              lVar1 = lRam000000011369d078;
              puVar8 = PTR_PTR_1126add78;
              puVar13 = *(undefined **)(lStack_1e8 + lVar10 * 8);
              puVar7 = PTR__OBJC_CLASS___NSObject_1126b1300;
              func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x00010bf71e60(puVar8,param_2,lVar1,puVar13,puVar7);
              _objc_retainAutoreleasedReturnValue();
              if ((lVar4 != 0) &&
                 (puVar7 = puVar8, func_0x00010bf4b900(puVar8,param_2,lVar4),
                 ((ulong)puVar7 & 1) != 0)) {
                _objc_retain(puVar13);
                _objc_release(puVar8);
                _objc_release(lVar5);
                _objc_release(lVar4);
                goto LAB_1049551d0;
              }
              _objc_release(puVar8);
              lVar10 = lVar10 + 1;
            } while (lVar6 != lVar10);
            lVar6 = lVar5;
            func_0x00010bf52a60(lVar5,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar6 != 0);
        }
        _objc_release(lVar5);
        _objc_release(lVar4);
        puVar12 = puVar12 + 1;
      } while (puVar12 != puStack_210);
      puStack_210 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1b0,auStack_f0,0x10);
      puVar13 = (undefined *)0x0;
    } while (puStack_210 != (undefined *)0x0);
  }
LAB_1049551d0:
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126add78;
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar13;
  func_0x00010bfda7c0();
  if ((int)puVar8 == 0) {
    puVar8 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bfda7c0();
    _objc_release(puVar8);
    _objc_release(puVar13);
    if ((int)puVar7 != 0) goto LAB_1049552d0;
    puVar13 = (undefined *)0x0;
  }
  else {
    _objc_release(puVar13);
LAB_1049552d0:
    puVar8 = puVar12;
    func_0x00010bfb1920(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104955228; end: 10495532f; +[FBSDKCrashShield _getClassName:] */

void FUN_104955228(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126add78;
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bfda7c0();
  if ((int)puVar3 == 0) {
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfda7c0();
    _objc_release(puVar3);
    _objc_release(puVar5);
    if ((int)puVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_104955308;
    }
  }
  else {
    _objc_release(puVar5);
  }
  puVar3 = puVar2;
  func_0x00010bfb1920(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c260c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_104955308:
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104955330; end: 10495540f; -[FBSDKDialogConfiguration initWithName:URL:appVersions:] */

undefined1 *
FUN_104955330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_38 = PTR_PTR_1126e3338;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104955410; end: 104955417; +[FBSDKDialogConfiguration supportsSecureCoding] */

undefined8 FUN_104955410(void)

{
  return 1;
}



/* Entry: 104955418; end: 10495556f; -[FBSDKDialogConfiguration initWithCoder:] */

undefined8 FUN_104955418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar1);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110ddd938);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  func_0x00010c226900(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da31d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02d4c0(param_1,param_2,uVar2,uVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 104955570; end: 1049555df; -[FBSDKDialogConfiguration encodeWithCoder:] */

void FUN_104955570(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dbf1b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ddd938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049555e0; end: 1049555e3; -[FBSDKDialogConfiguration copyWithZone:] */

void FUN_1049555e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1049555e4; end: 1049555eb; -[FBSDKDialogConfiguration appVersions] */

undefined8 FUN_1049555e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1049555ec; end: 1049555f3; -[FBSDKDialogConfiguration name] */

undefined8 FUN_1049555ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049555f4; end: 1049555fb; -[FBSDKDialogConfiguration URL] */

undefined8 FUN_1049555f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049555fc; end: 104955637; -[FBSDKDialogConfiguration .cxx_destruct] */

void FUN_1049555fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104955638; end: 1049556e3; -[FBSDKDomainConfiguration initWithTimestamp:domainInfo:] */

undefined1 *
FUN_104955638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3340;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x18),param_4);
    *(undefined8 *)((long)puVar3 + 0x10) = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 1049556e4; end: 1049558df; +[FBSDKDomainConfiguration setDefaultDomainInfo] */

void FUN_1049556e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110da3238;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110da3258;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110da3278;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110da31f8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110da3218;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_a8,&ppuStack_b8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110da3298;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110da3258;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110da3278;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110da31f8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110da31f8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c8,&ppuStack_d8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110da2798;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110da3258;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110da3278;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110da31f8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110da31f8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_e8,&ppuStack_f8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110da32b8;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110da32d8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110da32f8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110da3218;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110da31f8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110da3318;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar4;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_110,&ppuStack_128,3
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011369d088;
  puRam000000011369d088 = puVar7;
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126ade70;
  _objc_alloc();
  func_0x00010c052900();
  uVar1 = puRam000000011369d090;
  puRam000000011369d090 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(puRam000000011369d090);
  return;
}



/* Entry: 1049558e0; end: 10495592b; +[FBSDKDomainConfiguration defaultDomainConfiguration] */

void FUN_1049558e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ade70;
  _objc_alloc();
  func_0x00010c052900();
  uVar1 = puRam000000011369d090;
  puRam000000011369d090 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(puRam000000011369d090);
  return;
}



/* Entry: 10495592c; end: 104955933; +[FBSDKDomainConfiguration supportsSecureCoding] */

undefined8 FUN_10495592c(void)

{
  return 1;
}



/* Entry: 104955934; end: 104955a5f; -[FBSDKDomainConfiguration initWithCoder:] */

undefined8 FUN_104955934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar1);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dc1558);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  func_0x00010c0309a0(puVar1,param_2,puVar3);
  uVar4 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da3338);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c052900(param_1,param_2,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 104955a60; end: 104955abb; -[FBSDKDomainConfiguration encodeWithCoder:] */

void FUN_104955a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110dc1558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104955abc; end: 104955abf; -[FBSDKDomainConfiguration copyWithZone:] */

void FUN_104955abc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104955ac0; end: 104955ac7; -[FBSDKDomainConfiguration timestamp] */

undefined8 FUN_104955ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104955ac8; end: 104955acf; -[FBSDKDomainConfiguration version] */

undefined8 FUN_104955ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104955ad0; end: 104955ad7; -[FBSDKDomainConfiguration domainInfo] */

undefined8 FUN_104955ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104955ad8; end: 104955b07; -[FBSDKDomainConfiguration .cxx_destruct] */

void FUN_104955ad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104955b08; end: 104955b0f; -[FBSDKDomainConfigurationManager init] */

void FUN_104955b08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithDomainConfiguration__1125e1298,0);
  return;
}



/* Entry: 104955b10; end: 104955ba3; -[FBSDKDomainConfigurationManager initWithDomainConfiguration:] */

undefined1 * FUN_104955b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3348;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined **)((long)puVar2 + 0x30) = puVar3;
    _objc_release(uVar4);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x38),param_3);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104955ba4; end: 104955bff; +[FBSDKDomainConfigurationManager sharedInstance] */

void FUN_104955ba4(void)

{
  if (lRam000000011369d0a0 != -1) {
    func_0x00010bda8770();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d098);
  return;
}



/* Entry: 104955c00; end: 104955c9f; -[FBSDKDomainConfigurationManager configureWithSettings:dataStore:graphRequestFactory:graphRequestConnectionFactory:] */

void FUN_104955c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1fe440(param_1,param_2,param_3);
  func_0x00010c1898c0(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1a42e0(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1a42c0(param_1,param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 104955ca0; end: 104955d43; -[FBSDKDomainConfigurationManager cachedDomainConfiguration] */

void FUN_104955ca0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c09b3e0(param_1,param_2,0);
  puVar1 = param_1;
  func_0x00010bf87de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ade70;
    func_0x00010bf693c0(PTR_PTR_1126ade70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104955d44; end: 10495613f; -[FBSDKDomainConfigurationManager loadDomainConfigurationWithCompletionBlock:] */

/* WARNING: Removing unreachable block (ram,0x0001049560ac) */

void FUN_104955d44(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010bf87de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010bf64720();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa16e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar1 = uVar2;
    func_0x00010c075f00(uVar2,param_2,puVar3);
    if ((int)uVar1 != 0) {
      puVar3 = PTR_PTR_1126addf0;
      func_0x00010bf58b60(PTR_PTR_1126addf0,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ade70;
      func_0x00010bf39c40(PTR_PTR_1126ade70);
      puVar5 = puVar3;
      func_0x00010bf67020(puVar3,param_2,puVar4,
                          *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190e80(param_1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(uVar2);
  }
  uVar1 = param_1;
  func_0x00010c134660();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf87de0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_1;
      func_0x00010bf87de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010be05a80(param_1,param_2,uVar6);
      if ((uVar7 & 1) == 0) {
        _objc_release(uVar6);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        uVar7 = param_1;
        func_0x00010bf87de0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c298be0();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (0 < (long)uVar8) {
          if (param_3 != 0) {
            (**(code **)(param_3 + 0x10))(param_3);
          }
          goto LAB_104956078;
        }
      }
    }
  }
  puVar3 = PTR_PTR_1126add78;
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf44020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010bf09f20(puVar3,param_2,uVar1,lVar9);
    _objc_release(lVar9);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c09cda0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1bebc0(param_1,param_2,1);
    uVar1 = param_1;
    func_0x00010c227f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c136c20(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bfcde00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf56540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c215b40(0x4010000000000000,uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104956140;
    puStack_60 = &UNK_1107b94c8;
    uStack_58 = param_1;
    func_0x00010befafc0(uVar2,param_2,uVar6,&puStack_78);
    func_0x00010c24d960(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar6);
  }
LAB_104956078:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 104956140; end: 1049561ab;  */

void FUN_104956140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1ebaa0(uVar1,param_2,1);
  func_0x00010c114e60(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049561ac; end: 10495651b; -[FBSDKDomainConfigurationManager processLoadRequestResponse:error:] */

void FUN_1049561ac(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lStack_140;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126add78;
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126add78;
    func_0x00010bf09f40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126add78;
    puVar3 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retain();
    puVar3 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar12 = *(undefined8 *)((long)puVar11 * 8);
        uVar8 = uVar12;
        func_0x00010c0e00e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar7);
        _objc_release(uVar12);
        _objc_release(uVar8);
        puVar11 = puVar11 + 1;
      } while (puVar3 != puVar11);
      puVar3 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar3 = PTR_PTR_1126ade70;
    _objc_alloc(PTR_PTR_1126ade70);
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf51e00(puVar7);
    func_0x00010c052900(puVar3);
    func_0x00010c190e80(param_1);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar11);
    uVar8 = param_1;
    func_0x00010bf87de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfefc0(param_1);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    lStack_140 = param_4;
  }
  else {
    func_0x00010bdfefc0(param_1);
  }
  while( true ) {
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) break;
    ___stack_chk_fail();
    while (param_2 != 1) {
      __Unwind_Resume();
    }
    _objc_begin_catch();
    _objc_end_catch();
    param_4 = lStack_140;
  }
  return;
}



/* Entry: 10495651c; end: 104956647; -[FBSDKDomainConfigurationManager requestToLoadDomainConfiguration:] */

undefined * FUN_10495651c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_b8;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfcde20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puVar4 = puVar2;
  puVar5 = puVar1;
  func_0x00010bf565a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  _objc_retain();
  puVar3 = puVar5;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (puVar3 == (undefined *)0x0) {
    _objc_storeStrong(puVar1 + 0x38,puVar4);
    uVar9 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined8 *)(puVar1 + 0x40) = 0;
    _objc_release(uVar9);
    puVar4 = (undefined *)0x0;
  }
  else {
    if (*(long *)(puVar1 + 0x38) != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23cd40(PTR_PTR_1126add38);
      _objc_release(puVar4);
    }
    _objc_storeStrong(puVar1 + 0x40,puVar5);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = *(undefined8 *)(puVar1 + 0x48);
  *(undefined **)(puVar1 + 0x48) = puVar4;
  _objc_release(uVar9);
  if (puVar2 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf64720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar1[8] = 0;
  _objc_sync_exit(puVar1);
  _objc_release(puVar1);
  dVar12 = 0.0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  lVar6 = *(long *)(puVar1 + 0x30);
  _objc_retain();
  puVar7 = &uStack_180;
  lVar8 = lVar6;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar10 = *plStack_170;
    do {
      lVar11 = 0;
      do {
        if (*plStack_170 != lVar10) {
          _objc_enumerationMutation(lVar6);
        }
        (**(code **)(*(long *)(lStack_178 + lVar11 * 8) + 0x10))();
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      puVar7 = &uStack_180;
      lVar8 = lVar6;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar6);
  func_0x00010c12adc0(*(undefined8 *)(puVar1 + 0x30));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar1);
  __Unwind_Resume(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(puVar7);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar7);
  _objc_release(puVar1);
  return (undefined *)(ulong)(dVar12 < 3600.0);
}



/* Entry: 104956648; end: 1049568c3; -[FBSDKDomainConfigurationManager _didProcessConfigurationFromNetwork:error:] */

ulong FUN_104956648(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain();
  lVar2 = param_4;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (lVar2 == 0) {
    _objc_storeStrong(param_1 + 0x38,param_3);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar7);
    puVar3 = (undefined *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x38) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23cd40(PTR_PTR_1126add38);
      _objc_release(puVar3);
    }
    _objc_storeStrong(param_1 + 0x40,param_4);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar3;
  _objc_release(uVar7);
  if (uVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf64720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780();
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  dVar10 = 0.0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x30);
  _objc_retain();
  puVar6 = &uStack_120;
  lVar4 = lVar5;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        (**(code **)(*(long *)(lStack_118 + lVar9 * 8) + 0x10))();
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      puVar6 = &uStack_120;
      lVar4 = lVar5;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar1;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(puVar6);
  func_0x00010bf64de0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar6);
  _objc_release(puVar3);
  return (ulong)(dVar10 < 3600.0);
}



/* Entry: 1049568c4; end: 10495693b; -[FBSDKDomainConfigurationManager _domainConfigurationTimestampIsValid:] */

bool FUN_1049568c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1 < 3600.0;
}



/* Entry: 10495693c; end: 10495699b; -[FBSDKDomainConfigurationManager clearCache] */

void FUN_10495693c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c190e80(param_1,param_2,0);
  func_0x00010c190ea0(param_1,param_2,0);
  func_0x00010c190ec0(param_1,param_2,0);
  func_0x00010bf64720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10495699c; end: 1049569a3; -[FBSDKDomainConfigurationManager graphRequestFactory] */

undefined8 FUN_10495699c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049569a4; end: 1049569af; -[FBSDKDomainConfigurationManager setGraphRequestFactory:] */

void FUN_1049569a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1049569b0; end: 1049569b7; -[FBSDKDomainConfigurationManager graphRequestConnectionFactory] */

undefined8 FUN_1049569b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049569b8; end: 1049569c3; -[FBSDKDomainConfigurationManager setGraphRequestConnectionFactory:] */

void FUN_1049569b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1049569c4; end: 1049569cb; -[FBSDKDomainConfigurationManager settings] */

undefined8 FUN_1049569c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049569cc; end: 1049569d7; -[FBSDKDomainConfigurationManager setSettings:] */

void FUN_1049569cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049569d8; end: 1049569df; -[FBSDKDomainConfigurationManager dataStore] */

undefined8 FUN_1049569d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049569e0; end: 1049569eb; -[FBSDKDomainConfigurationManager setDataStore:] */

void FUN_1049569e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1049569ec; end: 1049569f3; -[FBSDKDomainConfigurationManager completionBlocks] */

undefined8 FUN_1049569ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049569f4; end: 1049569ff; -[FBSDKDomainConfigurationManager setCompletionBlocks:] */

void FUN_1049569f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 104956a00; end: 104956a07; -[FBSDKDomainConfigurationManager domainConfiguration] */

undefined8 FUN_104956a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104956a08; end: 104956a13; -[FBSDKDomainConfigurationManager setDomainConfiguration:] */

void FUN_104956a08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104956a14; end: 104956a1b; -[FBSDKDomainConfigurationManager loadingDomainConfiguration] */

undefined1 FUN_104956a14(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104956a1c; end: 104956a23; -[FBSDKDomainConfigurationManager setLoadingDomainConfiguration:] */

void FUN_104956a1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104956a24; end: 104956a2b; -[FBSDKDomainConfigurationManager domainConfigurationError] */

undefined8 FUN_104956a24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104956a2c; end: 104956a37; -[FBSDKDomainConfigurationManager setDomainConfigurationError:] */

void FUN_104956a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104956a38; end: 104956a3f; -[FBSDKDomainConfigurationManager domainConfigurationErrorTimestamp] */

undefined8 FUN_104956a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104956a40; end: 104956a4b; -[FBSDKDomainConfigurationManager setDomainConfigurationErrorTimestamp:] */

void FUN_104956a40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 104956a4c; end: 104956a53; -[FBSDKDomainConfigurationManager requeryFinishedForAppStart] */

undefined1 FUN_104956a4c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104956a54; end: 104956a5b; -[FBSDKDomainConfigurationManager setRequeryFinishedForAppStart:] */

void FUN_104956a54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 104956a5c; end: 104956ad3; -[FBSDKDomainConfigurationManager .cxx_destruct] */

void FUN_104956a5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104956ad4; end: 104956b07; -[FBSDKDomainHandler init] */

void FUN_104956ad4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3350;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104956b08; end: 104956b63; +[FBSDKDomainHandler sharedInstance] */

void FUN_104956b08(void)

{
  if (lRam000000011369d0b0 != -1) {
    func_0x00010bda8784();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d0a8);
  return;
}



/* Entry: 104956b64; end: 104956c27; -[FBSDKDomainHandler configureWithGraphRequestFactory:settings:dataStore:graphRequestFactory:graphRequestConnectionFactory:] */

void FUN_104956b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c190ee0(param_1,param_2,param_3);
  func_0x00010bf87e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47ac0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104956c28; end: 104956c77; -[FBSDKDomainHandler loadDomainConfigurationWithCompletionBlock:] */

void FUN_104956c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf87e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b3e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104956c78; end: 104956d17; +[FBSDKDomainHandler isAuthenticatedForGamingDomain] */

undefined * FUN_104956c78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126a5d98;
  func_0x00010bf5e0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c13b700();
  if ((int)puVar4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126a5d98;
    func_0x00010bf5e0e0(PTR_PTR_1126a5d98);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfcdd00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 104956d18; end: 104956e27; -[FBSDKDomainHandler isGraphVideoRequest:] */

undefined8 FUN_104956d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain();
  func_0x00010bf39c40();
  func_0x00010bfc39e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar5;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    lVar3 = param_1;
    func_0x00010bfdcf80(param_1,param_2,&PTR____CFConstantStringClassReference_110da3418);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if ((int)lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dacf38);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar4 == 2) {
        uVar5 = 1;
        goto LAB_104956e0c;
      }
    }
  }
  uVar5 = 0;
LAB_104956e0c:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 104956e28; end: 104956f33; -[FBSDKDomainHandler getDefaultDomainPrefix:] */

void FUN_104956e28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010bf87e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf26fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf87e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010c0dff20(uVar2,param_2,&PTR____CFConstantStringClassReference_110da32b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da3438);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104956f34; end: 104957053; -[FBSDKDomainHandler getAttOptInDomainPrefixForEndpoint:useAlternativeDefaultDomainPrefix:] */

void FUN_104956f34(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf87e00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf26fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf87e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c0dff20(puVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c0dff20(puVar1,param_2,&PTR____CFConstantStringClassReference_110da3258);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    func_0x00010bfc49c0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da3438);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104957054; end: 104957173; -[FBSDKDomainHandler getAttOptOutDomainPrefixForEndpoint:useAlternativeDefaultDomainPrefix:] */

void FUN_104957054(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf87e00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf26fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf87e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c0dff20(puVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c0dff20(puVar1,param_2,&PTR____CFConstantStringClassReference_110da3278);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    func_0x00010bfc49c0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da3438);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104957174; end: 1049572ff; -[FBSDKDomainHandler getATTScopeEndpointForGraphPath:] */

ulong FUN_104957174(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf87e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf26fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf87e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  uVar10 = 0;
  if (lVar6 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        uVar10 = *(ulong *)(lVar11 * 8);
        uVar7 = param_3;
        func_0x00010bfdcf80();
        if ((uVar7 & 1) != 0) {
          _objc_retain();
          goto LAB_1049572a4;
        }
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
    uVar10 = 0;
  }
LAB_1049572a4:
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    iVar1 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    if (iVar1 == 0) {
      func_0x00010bf87e00();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_3;
      func_0x00010bf26fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar10;
      func_0x00010bf87e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(param_3);
      uVar10 = uVar7;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      if (uVar8 == 0) {
        uVar2 = 0;
      }
      else {
        uVar10 = uVar8;
        func_0x00010bf1f3c0(uVar8);
        uVar2 = (uint)uVar10;
      }
      iVar1 = 2;
      func_0x000100029b9c(2,0xe,5,0);
      uVar10 = (ulong)(iVar1 != 0 & uVar2);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      uVar10 = 1;
    }
    return uVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return uVar10;
}



/* Entry: 104957300; end: 10495740f; -[FBSDKDomainHandler isDomainHandlingEnabled] */

uint FUN_104957300(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    func_0x00010bf87e00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf26fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf87e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(param_1);
    lVar3 = lVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      lVar3 = lVar5;
      func_0x00010bf1f3c0(lVar5);
      uVar2 = (uint)lVar3;
    }
    iVar1 = 2;
    func_0x000100029b9c(2,0xe,5,0);
    uVar2 = iVar1 != 0 & uVar2;
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 104957410; end: 1049574a7; +[FBSDKDomainHandler getCleanedGraphPathFromRequest:] */

void FUN_104957410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bfcdd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110dacf38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c25d0a0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049574a8; end: 10495767f; -[FBSDKDomainHandler getURLPrefixForSingleRequest:isAdvertiserTrackingEnabled:] */

void FUN_1049574a8(undefined *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain();
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,5,0);
  if ((((iVar1 == 0) || (puVar2 = PTR_PTR_1126ade80, func_0x00010c0733c0(), (int)puVar2 == 0)) &&
      (puVar2 = param_1, func_0x00010c074820(), (int)puVar2 == 0)) &&
     ((puVar2 = PTR_PTR_1126add50, func_0x00010c06ca60(), (int)puVar2 == 0 &&
      (puVar2 = param_1, func_0x00010c070ce0(), (int)puVar2 != 0)))) {
    puVar2 = param_1;
    func_0x00010bf39c40();
    func_0x00010bfc39e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfdcf80();
    if (((int)puVar3 == 0) || (uVar4 = param_3, func_0x00010bfb4780(), (uVar4 & 1) != 0)) {
      puVar3 = param_1;
      func_0x00010bfc1dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28fdc0(param_3);
      if (puVar3 == (undefined *)0x0) {
        func_0x00010bfc49c0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_4 == 0) {
        func_0x00010bfc28e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfc28c0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
    }
    else {
      func_0x00010c28fdc0(param_3);
      func_0x00010bfc49c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
  else {
    param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104957680; end: 10495793f; -[FBSDKDomainHandler getURLPrefixForBatchRequest:isAdvertiserTrackingEnabled:] */

undefined * FUN_104957680(undefined *param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126add50;
  func_0x00010c06ca60();
  if (((int)puVar1 == 0) && (puVar1 = param_1, func_0x00010c070ce0(), (int)puVar1 != 0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_3;
    _objc_retain();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      uVar9 = 1;
    }
    else {
      lVar10 = *plStack_120;
      uVar9 = 1;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar2);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar4 = uVar11;
          func_0x00010c134680(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c28fdc0();
          _objc_release(uVar4);
          puVar1 = param_1;
          func_0x00010bf39c40();
          uVar4 = uVar11;
          func_0x00010c134680(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfc39e0(puVar1,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar6 = puVar1;
          func_0x00010bfdcf80(puVar1,param_2,&PTR____CFConstantStringClassReference_110da3238);
          if ((int)puVar6 == 0) {
LAB_1049577e4:
            puVar6 = param_1;
            func_0x00010bfc1dc0(param_1,param_2,puVar1);
            _objc_retainAutoreleasedReturnValue();
            if ((param_4 != 0) && (puVar6 != (undefined *)0x0)) {
              func_0x00010c134680(uVar11);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar11;
              func_0x00010c28fdc0();
              func_0x00010bfc28c0(param_1,param_2,puVar6,uVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar11);
              _objc_release(puVar6);
              _objc_release(puVar1);
              _objc_release(lVar2);
              goto LAB_1049578f8;
            }
            _objc_release(puVar6);
          }
          else {
            uVar4 = uVar11;
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar4;
            func_0x00010bfb4780();
            _objc_release(uVar4);
            if ((int)uVar7 != 0) goto LAB_1049577e4;
          }
          uVar9 = (uint)uVar5 & uVar9;
          _objc_release(puVar1);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    func_0x00010bfc49c0(param_1,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da3438);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1049578f8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return *(undefined **)(param_3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 104957940; end: 104957947; -[FBSDKDomainHandler domainConfigurationProvider] */

undefined8 FUN_104957940(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104957948; end: 104957953; -[FBSDKDomainHandler setDomainConfigurationProvider:] */

void FUN_104957948(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 104957954; end: 10495795f; -[FBSDKDomainHandler .cxx_destruct] */

void FUN_104957954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104957960; end: 1049579fb; +[FBSDKDynamicFrameworkLoader shared] */

void FUN_104957960(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x1049579d4;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369d0b8 != -1) {
    func_0x00010002a2fc(0x11369d0b8,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d0c0);
  return;
}



/* Entry: 1049579fc; end: 1049579ff; -[FBSDKDynamicFrameworkLoader safariViewControllerClass] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049579fc(void)

{
  if (lRam000000011369d220 != -1) {
    func_0x00010bda8798();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(_DAT_11369d218);
  return;
}



/* Entry: 104957a00; end: 104957a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104957a00(void)

{
  if (lRam000000011369d220 != -1) {
    func_0x00010bda8798();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(_DAT_11369d218);
  return;
}



/* Entry: 104957a30; end: 104957a33; -[FBSDKDynamicFrameworkLoader asIdentifierManagerClass] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104957a30(void)

{
  if (lRam000000011369d210 != -1) {
    func_0x00010bda87b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(_DAT_11369d208);
  return;
}



/* Entry: 104957a34; end: 104957a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104957a34(void)

{
  if (lRam000000011369d210 != -1) {
    func_0x00010bda87b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(_DAT_11369d208);
  return;
}



/* Entry: 104957a64; end: 104957ac7; +[FBSDKDynamicFrameworkLoader loadkSecRandomDefault] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957a64(void)

{
  if (lRam000000011369d0d0 != -1) {
    func_0x00010bda87d0();
  }
  return *_DAT_11369d0c8;
}



/* Entry: 104957ac8; end: 104957afb;  */

void FUN_104957ac8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  (*(code *)*param_1)();
  _dlsym();
  *(undefined8 **)param_1[2] = puVar1;
  return;
}



/* Entry: 104957afc; end: 104957b2f; +[FBSDKDynamicFrameworkLoader loadkSecAttrAccessible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957afc(void)

{
  if (lRam000000011369d0e0 != -1) {
    func_0x00010bda8800();
  }
  return *_DAT_11369d0d8;
}



/* Entry: 104957b30; end: 104957b63; +[FBSDKDynamicFrameworkLoader loadkSecAttrAccessibleAfterFirstUnlockThisDeviceOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957b30(void)

{
  if (lRam000000011369d0f0 != -1) {
    func_0x00010bda881c();
  }
  return *_DAT_11369d0e8;
}



/* Entry: 104957b64; end: 104957b97; +[FBSDKDynamicFrameworkLoader loadkSecAttrAccount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957b64(void)

{
  if (lRam000000011369d100 != -1) {
    func_0x00010bda8838();
  }
  return *_DAT_11369d0f8;
}



/* Entry: 104957b98; end: 104957bcb; +[FBSDKDynamicFrameworkLoader loadkSecAttrService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957b98(void)

{
  if (lRam000000011369d110 != -1) {
    func_0x00010bda8854();
  }
  return *_DAT_11369d108;
}



/* Entry: 104957bcc; end: 104957bff; +[FBSDKDynamicFrameworkLoader loadkSecValueData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957bcc(void)

{
  if (lRam000000011369d120 != -1) {
    func_0x00010bda8870();
  }
  return *_DAT_11369d118;
}



/* Entry: 104957c00; end: 104957c33; +[FBSDKDynamicFrameworkLoader loadkSecClassGenericPassword] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957c00(void)

{
  if (lRam000000011369d130 != -1) {
    func_0x00010bda888c();
  }
  return *_DAT_11369d128;
}



/* Entry: 104957c34; end: 104957c67; +[FBSDKDynamicFrameworkLoader loadkSecAttrAccessGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957c34(void)

{
  if (lRam000000011369d140 != -1) {
    func_0x00010bda88a8();
  }
  return *_DAT_11369d138;
}



/* Entry: 104957c68; end: 104957c9b; +[FBSDKDynamicFrameworkLoader loadkSecMatchLimitOne] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957c68(void)

{
  if (lRam000000011369d150 != -1) {
    func_0x00010bda88c4();
  }
  return *_DAT_11369d148;
}



/* Entry: 104957c9c; end: 104957ccf; +[FBSDKDynamicFrameworkLoader loadkSecMatchLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957c9c(void)

{
  if (lRam000000011369d160 != -1) {
    func_0x00010bda88e0();
  }
  return *_DAT_11369d158;
}



/* Entry: 104957cd0; end: 104957d03; +[FBSDKDynamicFrameworkLoader loadkSecReturnData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957cd0(void)

{
  if (lRam000000011369d170 != -1) {
    func_0x00010bda88fc();
  }
  return *_DAT_11369d168;
}



/* Entry: 104957d04; end: 104957d37; +[FBSDKDynamicFrameworkLoader loadkSecClass] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104957d04(void)

{
  if (lRam000000011369d180 != -1) {
    func_0x00010bda8918();
  }
  return *_DAT_11369d178;
}



/* Entry: 104957d38; end: 104957d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104957d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (lRam000000011369d190 != -1) {
    func_0x00010bda8934();
  }
                    /* WARNING: Could not recover jumptable at 0x000104957d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_11369d188)(param_1,param_2,param_3);
  return;
}



/* Entry: 104957d90; end: 104957ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104957d90(undefined8 param_1,undefined8 param_2)

{
  if (lRam000000011369d1a0 != -1) {
    func_0x00010bda8950();
  }
                    /* WARNING: Could not recover jumptable at 0x000104957dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_11369d198)(param_1,param_2);
  return;
}



/* Entry: 104957ea8; end: 104957ed7;  */

undefined8 FUN_104957ea8(void)

{
  if (lRam000000011369d250 != -1) {
    func_0x00010bda89c0();
  }
  return uRam000000011369d248;
}



/* Entry: 104957ed8; end: 104957fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104957ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (lRam000000011369d1e0 != -1) {
    func_0x00010bda89d4();
  }
                    /* WARNING: Could not recover jumptable at 0x000104957f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_11369d1d8)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 104957fa8; end: 10495804b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104957fa8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (lRam000000011369d200 != -1) {
    func_0x00010bda8a0c();
  }
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_e8 = param_3[9];
  uStack_f0 = param_3[8];
  uStack_d8 = param_3[0xb];
  uStack_e0 = param_3[10];
  uStack_c8 = param_3[0xd];
  uStack_d0 = param_3[0xc];
  uStack_b8 = param_3[0xf];
  uStack_c0 = param_3[0xe];
  uStack_128 = param_3[1];
  uStack_130 = *param_3;
  uStack_118 = param_3[3];
  uStack_120 = param_3[2];
  uStack_108 = param_3[5];
  uStack_110 = param_3[4];
  uStack_f8 = param_3[7];
  uStack_100 = param_3[6];
  (*_DAT_11369d1f8)(param_1,&uStack_b0,&uStack_130);
  return;
}



/* Entry: 10495804c; end: 10495810b;  */

undefined8 FUN_10495804c(void)

{
  if (lRam000000011369d260 != -1) {
    func_0x00010bda8a28();
  }
  return uRam000000011369d258;
}



/* Entry: 10495810c; end: 104958137;  */

void FUN_10495810c(undefined8 *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110da3478;
  FUN_104958138();
  *param_1 = ppuVar1;
  return;
}



/* Entry: 104958138; end: 1049581ff;  */

undefined * FUN_104958138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da3458);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bfad0c0();
  _dlopen();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23cd40(PTR_PTR_1126add38);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 104958200; end: 1049582af;  */

void FUN_104958200(undefined8 *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110da34d8;
  FUN_104958138();
  *param_1 = ppuVar1;
  return;
}


