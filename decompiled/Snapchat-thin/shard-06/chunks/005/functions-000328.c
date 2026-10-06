/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10495e674; end: 10495e67b; -[FBSDKEventBindingManager swizzler] */

undefined8 FUN_10495e674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10495e67c; end: 10495e687; -[FBSDKEventBindingManager setSwizzler:] */

void FUN_10495e67c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10495e688; end: 10495e68f; -[FBSDKEventBindingManager isStarted] */

undefined1 FUN_10495e688(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10495e690; end: 10495e697; -[FBSDKEventBindingManager setIsStarted:] */

void FUN_10495e690(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10495e698; end: 10495e69f; -[FBSDKEventBindingManager reactBindings] */

undefined8 FUN_10495e698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10495e6a0; end: 10495e6ab; -[FBSDKEventBindingManager setReactBindings:] */

void FUN_10495e6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10495e6ac; end: 10495e6b7; -[FBSDKEventBindingManager setValidClasses:] */

void FUN_10495e6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10495e6b8; end: 10495e6bf; -[FBSDKEventBindingManager hasReactNative] */

undefined1 FUN_10495e6b8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10495e6c0; end: 10495e6c7; -[FBSDKEventBindingManager setHasReactNative:] */

void FUN_10495e6c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10495e6c8; end: 10495e6cf; -[FBSDKEventBindingManager eventBindings] */

undefined8 FUN_10495e6c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10495e6d0; end: 10495e6db; -[FBSDKEventBindingManager setEventBindings:] */

void FUN_10495e6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10495e6dc; end: 10495e72f; -[FBSDKEventBindingManager .cxx_destruct] */

void FUN_10495e6dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10495e730; end: 10495e73b; +[FBSDKFeatureExtractor rulesFromKeyProvider] */

void FUN_10495e730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d2a0);
  return;
}



/* Entry: 10495e73c; end: 10495e74b; +[FBSDKFeatureExtractor setRulesFromKeyProvider:] */

void FUN_10495e73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d2a0,param_3);
  return;
}



/* Entry: 10495e74c; end: 10495e797; +[FBSDKFeatureExtractor configureWithRulesFromKeyProvider:] */

void FUN_10495e74c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126adec0;
  func_0x00010bf39c40();
  if (puVar1 == param_1) {
    func_0x00010c1eee20(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10495e798; end: 10495e99f; +[FBSDKFeatureExtractor initialize] */

void FUN_10495e798(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
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
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110da38f8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110da3918;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db2d38;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110db04d8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110da3938;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110da3958;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db04f8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110db0518;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_68,&ppuStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puRam000000011369d2a8;
  puRam000000011369d2a8 = puVar2;
  _objc_release(uVar3);
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e025d8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110db9e78;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110da3978;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110e9e1d8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110da3998;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110da39b8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110db0518;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110db0538;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110e9e158;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110da39d8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110db1158;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110db2d38;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110db0558;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110eacdf8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110db04d8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110db04f8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110da39f8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e75c98;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_d0,&ppuStack_118,9)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puRam000000011369d2b0;
  puRam000000011369d2b0 = puVar2;
  _objc_release(uVar3);
  ppuStack_138 = &PTR____CFConstantStringClassReference_110db2d38;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110db04d8;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110db04f8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110db0518;
  pppuVar4 = &ppuStack_138;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puRam000000011369d2b8;
  puRam000000011369d2b8 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  pppuVar5 = pppuVar4;
  func_0x00010c075f00(pppuVar4,param_2,puVar2);
  if ((int)pppuVar5 != 0) {
    func_0x00010c142660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bfc9ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uRam000000011369d2c0;
    uRam000000011369d2c0 = uVar6;
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar4);
  return;
}



/* Entry: 10495e9a0; end: 10495ea27; +[FBSDKFeatureExtractor loadRulesForKey:] */

void FUN_10495e9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c142660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfc9ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uRam000000011369d2c0;
    uRam000000011369d2c0 = uVar3;
    _objc_release(uVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10495ea28; end: 10495eb4f; +[FBSDKFeatureExtractor getTextFeature:withScreenName:] */

void FUN_10495ea28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar4 = PTR_PTR_1126add78;
  _objc_retain();
  _objc_retain();
  func_0x00010c0b6660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)PTR__kCFBundleNameKey_11034aba8;
  puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010bf71e60(puVar4,param_2,puVar2,uVar5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da3a98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c0b5ac0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10495eb50; end: 10495eee3; +[FBSDKFeatureExtractor getDenseFeatures:] */

undefined **
FUN_10495eb50(undefined **param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5,undefined *param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined *unaff_x19;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  uint uVar15;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined *puVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined *apuStack_250 [16];
  long lStack_1d0;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain();
  if (lRam000000011369d2c0 == 0) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    ppuVar13 = (undefined **)PTR_PTR_1126add78;
    puVar12 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar13;
    func_0x00010c0d3c80();
    _objc_release(ppuVar13);
    _objc_release(puVar12);
    puStack_138 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_150 = puVar3;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = ppuVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = unaff_x23;
    func_0x00010c0d3c80();
    func_0x00010c11a080(param_1);
    _objc_release(ppuVar13);
    _objc_release(unaff_x23);
    ppuStack_140 = ppuVar9;
    func_0x00010bfb1920(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_148 = param_1;
    func_0x00010c0f40a0();
    ppuStack_158 = param_1;
    _objc_release(ppuVar9);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain();
    puVar3 = unaff_x24;
    func_0x00010bf52a60();
    if (puVar3 == (undefined *)0x0) {
      unaff_x25 = (undefined *)0x0;
    }
    else {
      unaff_x25 = (undefined *)0x0;
      lVar11 = *plStack_120;
      unaff_x23 = &PTR_PTR_1126b1000;
      unaff_x27 = &PTR____CFConstantStringClassReference_110da3ad8;
      do {
        puVar12 = (undefined *)0x0;
        puVar4 = unaff_x25;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(unaff_x24);
          }
          puVar16 = PTR_PTR_1126add78;
          unaff_x28 = *(undefined **)(lStack_128 + (long)puVar12 * 8);
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x00010bf71e60();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar16;
          func_0x00010bf1f3c0();
          _objc_release(puVar16);
          unaff_x25 = puVar4;
          if ((int)puVar14 != 0) {
            unaff_x25 = unaff_x28;
            _objc_retain();
            _objc_release(puVar4);
          }
          puVar12 = puVar12 + 1;
          puVar4 = unaff_x25;
        } while (puVar3 != puVar12);
        puVar3 = unaff_x24;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(unaff_x24);
    param_1 = ppuStack_140;
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0();
    if ((int)puVar3 == 0) {
      unaff_x26 = (undefined *)0x0;
    }
    else {
      unaff_x26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      puVar3 = PTR_PTR_1126add78;
      func_0x00010bf64b60(PTR_PTR_1126add78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340();
      _objc_release(puVar3);
    }
    param_3 = puStack_138;
    unaff_x19 = puStack_150;
    ppuVar13 = ppuStack_158;
    ppuVar9 = ppuStack_148;
    puVar3 = unaff_x25;
    param_4 = unaff_x24;
    param_6 = unaff_x26;
    func_0x00010c0db1e0();
    lVar11 = 0;
    do {
      *(float *)((long)ppuVar13 + lVar11) =
           *(float *)((long)ppuVar9 + lVar11) + *(float *)((long)ppuVar13 + lVar11);
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x78);
    _free();
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x19);
    _objc_release(param_1);
  }
  puVar12 = param_3;
  _objc_release();
  iVar1 = (int)puVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10495eee4;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c0 = unaff_x28;
  ppuStack_1b8 = unaff_x27;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = unaff_x24;
  ppuStack_198 = unaff_x23;
  ppuStack_190 = ppuVar13;
  ppuStack_188 = param_1;
  puStack_180 = param_3;
  puStack_178 = unaff_x19;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  puVar12 = PTR_PTR_1126add78;
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40();
  ppuVar13 = &PTR____CFConstantStringClassReference_110da3ad8;
  puVar16 = puVar3;
  func_0x00010bf71e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar12;
  func_0x00010bf1f3c0();
  _objc_release(puVar12);
  if (((ulong)puVar4 & 1) != 0) {
    uVar10 = 1;
    goto LAB_10495f1c8;
  }
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126add78;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010bf71e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar12;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (puVar4 == (undefined *)0x0) {
    uVar10 = 0;
LAB_10495f0d4:
    puVar16 = puVar12;
    _objc_retain();
    puVar4 = puVar16;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar16);
        }
        uVar20 = *(undefined8 *)((long)puVar14 * 8);
        func_0x00010c0d3c80();
        iVar2 = iVar1;
        func_0x00010c11a080();
        if (iVar2 != 0) {
          func_0x00010bf09f20(PTR_PTR_1126add78);
          uVar10 = 1;
        }
        _objc_release(uVar20);
        puVar14 = puVar14 + 1;
      } while (puVar4 != puVar14);
      puVar4 = puVar16;
      func_0x00010bf52a60();
    }
    _objc_release(puVar16);
    ppuVar9 = &PTR____CFConstantStringClassReference_110da3af8;
    puVar16 = puVar3;
    ppuVar13 = ppuVar5;
    func_0x00010bf71e80(PTR_PTR_1126add78);
  }
  else {
    uVar10 = 0;
    uVar15 = 0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar12);
        }
        puVar14 = PTR_PTR_1126add78;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010bf71e60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar14;
        func_0x00010bf1f3c0();
        _objc_release(puVar14);
        uVar10 = (uint)puVar6 | uVar10;
        uVar15 = (uint)puVar6 | uVar15;
        puVar16 = puVar16 + 1;
      } while (puVar4 != puVar16);
      ppuVar13 = apuStack_250;
      ppuVar9 = (undefined **)0x10;
      puVar4 = puVar12;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
    if ((uVar15 & 1) == 0) goto LAB_10495f0d4;
    puVar16 = puVar12;
    func_0x00010befa160(param_4);
  }
  _objc_release(puVar12);
  _objc_release(ppuVar5);
LAB_10495f1c8:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return (undefined **)(ulong)(uVar10 & 1);
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  ppuVar7 = (undefined **)0x1e;
  _calloc(0x1e,4);
  ppuVar5 = ppuVar13;
  func_0x00010bf529e0();
  fVar17 = 0.0;
  if (0.0 <= (float)ppuVar5 + -1.0) {
    fVar17 = (float)ppuVar5 + -1.0;
  }
  *(float *)((long)ppuVar7 + 0xc) = fVar17;
  puVar12 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar13;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar5;
  func_0x00010bf529e0();
  *(float *)((long)ppuVar7 + 0x24) = (float)ppuVar13;
  _objc_release(ppuVar5);
  _objc_release(puVar12);
  puVar12 = puVar3;
  func_0x00010c06d9e0();
  if ((int)puVar12 != 0) {
    *(float *)((long)ppuVar7 + 0x24) = (float)ppuVar13 + -1.0;
  }
  uVar20 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)((long)ppuVar7 + 0x34) = uVar20;
  ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar5 = ppuVar13;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar5 = ppuVar9;
  }
  _objc_retain(ppuVar5);
  uVar18 = (undefined4)uVar20;
  _objc_retain();
  puVar12 = puVar3;
  func_0x00010c06d9e0();
  ppuVar8 = ppuVar13;
  if ((int)puVar12 != 0) {
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283260(puVar3);
  }
  func_0x00010c125a00(puVar3);
  *(undefined4 *)((long)ppuVar7 + 0x3c) = uVar18;
  func_0x00010c125a00(puVar3);
  *(undefined4 *)(ppuVar7 + 8) = uVar18;
  func_0x00010c125a00(puVar3);
  *(undefined4 *)((long)ppuVar7 + 0x44) = uVar18;
  puVar12 = param_6;
  func_0x00010bf4bb00();
  uVar18 = 0x3f800000;
  if ((int)puVar12 == 0) {
    uVar18 = 0;
  }
  *(undefined4 *)(ppuVar7 + 9) = uVar18;
  func_0x00010c125a60(puVar3);
  *(undefined4 *)((long)ppuVar7 + 0x4c) = uVar18;
  func_0x00010c125a60(puVar3);
  *(undefined4 *)(ppuVar7 + 10) = uVar18;
  func_0x00010c125a60(puVar3);
  uVar19 = uVar18;
  _objc_release(param_6);
  *(undefined4 *)((long)ppuVar7 + 0x54) = uVar18;
  func_0x00010c125a00(puVar3);
  *(undefined4 *)(ppuVar7 + 0xb) = uVar19;
  func_0x00010c125a00(puVar3);
  *(undefined4 *)(ppuVar7 + 0xc) = uVar19;
  func_0x00010c125a60(puVar3);
  *(undefined4 *)((long)ppuVar7 + 100) = uVar19;
  func_0x00010c125a60(puVar3);
  *(undefined4 *)((long)ppuVar7 + 0x6c) = uVar19;
  func_0x00010c125a00(puVar3);
  *(undefined4 *)(ppuVar7 + 0xe) = uVar19;
  func_0x00010c125a00(puVar3);
  *(undefined4 *)((long)ppuVar7 + 0x74) = uVar19;
  _objc_release(ppuVar13);
  _objc_release(ppuVar8);
  _objc_release(ppuVar5);
  _objc_release(param_6);
  _objc_release(ppuVar9);
  _objc_release(puVar16);
  return ppuVar7;
}



/* Entry: 10495eee4; end: 10495f217; +[FBSDKFeatureExtractor pruneTree:siblings:] */

ulong FUN_10495eee4(int param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  undefined *puVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar3 = PTR_PTR_1126add78;
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40();
  ppuVar7 = &PTR____CFConstantStringClassReference_110da3ad8;
  puVar14 = param_3;
  func_0x00010bf71e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf1f3c0();
  _objc_release(puVar3);
  if (((ulong)puVar4 & 1) != 0) {
    uVar11 = 1;
    goto LAB_10495f1c8;
  }
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126add78;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010bf71e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar4 == (undefined *)0x0) {
    uVar11 = 0;
LAB_10495f0d4:
    puVar14 = puVar3;
    _objc_retain();
    puVar4 = puVar14;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar14);
        }
        uVar18 = *(undefined8 *)((long)puVar12 * 8);
        func_0x00010c0d3c80();
        iVar2 = param_1;
        func_0x00010c11a080();
        if (iVar2 != 0) {
          func_0x00010bf09f20(PTR_PTR_1126add78);
          uVar11 = 1;
        }
        _objc_release(uVar18);
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = puVar14;
      func_0x00010bf52a60();
    }
    _objc_release(puVar14);
    ppuVar10 = &PTR____CFConstantStringClassReference_110da3af8;
    puVar14 = param_3;
    ppuVar7 = ppuVar5;
    func_0x00010bf71e80(PTR_PTR_1126add78);
  }
  else {
    uVar11 = 0;
    uVar13 = 0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        puVar12 = PTR_PTR_1126add78;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010bf71e60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar12;
        func_0x00010bf1f3c0();
        _objc_release(puVar12);
        uVar11 = (uint)puVar6 | uVar11;
        uVar13 = (uint)puVar6 | uVar13;
        puVar14 = puVar14 + 1;
      } while (puVar4 != puVar14);
      ppuVar7 = apuStack_f0;
      ppuVar10 = (undefined **)0x10;
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
    if ((uVar13 & 1) == 0) goto LAB_10495f0d4;
    puVar14 = puVar3;
    func_0x00010befa160(param_4);
  }
  _objc_release(puVar3);
  _objc_release(ppuVar5);
LAB_10495f1c8:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (ulong)(uVar11 & 1);
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar8 = 0x1e;
  _calloc(0x1e,4);
  ppuVar5 = ppuVar7;
  func_0x00010bf529e0();
  fVar15 = 0.0;
  if (0.0 <= (float)ppuVar5 + -1.0) {
    fVar15 = (float)ppuVar5 + -1.0;
  }
  *(float *)(uVar8 + 0xc) = fVar15;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar5;
  func_0x00010bf529e0();
  *(float *)(uVar8 + 0x24) = (float)ppuVar7;
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c06d9e0();
  if ((int)puVar3 != 0) {
    *(float *)(uVar8 + 0x24) = (float)ppuVar7 + -1.0;
  }
  uVar18 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(uVar8 + 0x34) = uVar18;
  ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar5 = ppuVar7;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar5 = ppuVar10;
  }
  _objc_retain(ppuVar5);
  uVar16 = (undefined4)uVar18;
  _objc_retain();
  puVar3 = param_3;
  func_0x00010c06d9e0();
  ppuVar9 = ppuVar7;
  if ((int)puVar3 != 0) {
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283260(param_3);
  }
  func_0x00010c125a00(param_3);
  *(undefined4 *)(uVar8 + 0x3c) = uVar16;
  func_0x00010c125a00(param_3);
  *(undefined4 *)(uVar8 + 0x40) = uVar16;
  func_0x00010c125a00(param_3);
  *(undefined4 *)(uVar8 + 0x44) = uVar16;
  uVar18 = param_6;
  func_0x00010bf4bb00();
  uVar16 = 0x3f800000;
  if ((int)uVar18 == 0) {
    uVar16 = 0;
  }
  *(undefined4 *)(uVar8 + 0x48) = uVar16;
  func_0x00010c125a60(param_3);
  *(undefined4 *)(uVar8 + 0x4c) = uVar16;
  func_0x00010c125a60(param_3);
  *(undefined4 *)(uVar8 + 0x50) = uVar16;
  func_0x00010c125a60(param_3);
  uVar17 = uVar16;
  _objc_release(param_6);
  *(undefined4 *)(uVar8 + 0x54) = uVar16;
  func_0x00010c125a00(param_3);
  *(undefined4 *)(uVar8 + 0x58) = uVar17;
  func_0x00010c125a00(param_3);
  *(undefined4 *)(uVar8 + 0x60) = uVar17;
  func_0x00010c125a60(param_3);
  *(undefined4 *)(uVar8 + 100) = uVar17;
  func_0x00010c125a60(param_3);
  *(undefined4 *)(uVar8 + 0x6c) = uVar17;
  func_0x00010c125a00(param_3);
  *(undefined4 *)(uVar8 + 0x70) = uVar17;
  func_0x00010c125a00(param_3);
  *(undefined4 *)(uVar8 + 0x74) = uVar17;
  _objc_release(ppuVar7);
  _objc_release(ppuVar9);
  _objc_release(ppuVar5);
  _objc_release(param_6);
  _objc_release(ppuVar10);
  _objc_release(puVar14);
  return uVar8;
}



/* Entry: 10495f218; end: 10495f5d3; +[FBSDKFeatureExtractor nonparseFeatures:siblings:screenname:viewTreeString:] */

long FUN_10495f218(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined **param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar1 = 0x1e;
  _calloc(0x1e,4);
  uVar2 = param_4;
  func_0x00010bf529e0();
  fVar8 = 0.0;
  if (0.0 <= (float)uVar2 + -1.0) {
    fVar8 = (float)uVar2 + -1.0;
  }
  *(float *)(lVar1 + 0xc) = fVar8;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar2;
  func_0x00010bf529e0();
  *(float *)(lVar1 + 0x24) = (float)uVar4;
  _objc_release(uVar2);
  _objc_release(puVar3);
  uVar11 = param_1;
  func_0x00010c06d9e0();
  if ((int)uVar11 != 0) {
    *(float *)(lVar1 + 0x24) = (float)uVar4 + -1.0;
  }
  uVar11 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar1 + 0x34) = uVar11;
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar5 = ppuVar6;
  if (param_5 != (undefined **)0x0) {
    ppuVar5 = param_5;
  }
  _objc_retain(ppuVar5);
  uVar9 = (undefined4)uVar11;
  _objc_retain();
  uVar11 = param_1;
  func_0x00010c06d9e0();
  ppuVar7 = ppuVar6;
  if ((int)uVar11 != 0) {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283260(param_1);
  }
  func_0x00010c125a00(param_1);
  *(undefined4 *)(lVar1 + 0x3c) = uVar9;
  func_0x00010c125a00(param_1);
  *(undefined4 *)(lVar1 + 0x40) = uVar9;
  func_0x00010c125a00(param_1);
  *(undefined4 *)(lVar1 + 0x44) = uVar9;
  uVar11 = param_6;
  func_0x00010bf4bb00();
  uVar9 = 0x3f800000;
  if ((int)uVar11 == 0) {
    uVar9 = 0;
  }
  *(undefined4 *)(lVar1 + 0x48) = uVar9;
  func_0x00010c125a60(param_1);
  *(undefined4 *)(lVar1 + 0x4c) = uVar9;
  func_0x00010c125a60(param_1);
  *(undefined4 *)(lVar1 + 0x50) = uVar9;
  func_0x00010c125a60(param_1);
  uVar10 = uVar9;
  _objc_release(param_6);
  *(undefined4 *)(lVar1 + 0x54) = uVar9;
  func_0x00010c125a00(param_1);
  *(undefined4 *)(lVar1 + 0x58) = uVar10;
  func_0x00010c125a00(param_1);
  *(undefined4 *)(lVar1 + 0x60) = uVar10;
  func_0x00010c125a60(param_1);
  *(undefined4 *)(lVar1 + 100) = uVar10;
  func_0x00010c125a60(param_1);
  *(undefined4 *)(lVar1 + 0x6c) = uVar10;
  func_0x00010c125a00(param_1);
  *(undefined4 *)(lVar1 + 0x70) = uVar10;
  func_0x00010c125a00(param_1);
  *(undefined4 *)(lVar1 + 0x74) = uVar10;
  _objc_release(ppuVar6);
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10495f5d4; end: 10495f5df;  */

void FUN_10495f5d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_isButton__1125f9088,param_2);
  return;
}



/* Entry: 10495f5e0; end: 10495fbcf; +[FBSDKFeatureExtractor parseFeatures:] */

undefined4 * FUN_10495f5e0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = (undefined4 *)0x1e;
  _calloc(0x1e,4);
  ppuVar3 = (undefined **)PTR_PTR_1126add78;
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  ppuVar4 = (undefined **)PTR_PTR_1126add78;
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  ppuVar5 = (undefined **)PTR_PTR_1126add78;
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  ppuVar6 = ppuVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar7 = ppuVar6;
  }
  _objc_retain();
  _objc_release(ppuVar6);
  ppuVar8 = ppuVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar6 = ppuVar8;
  }
  _objc_retain();
  _objc_release(ppuVar8);
  ppuVar9 = ppuVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar8 = ppuVar9;
  }
  _objc_retain();
  _objc_release(ppuVar9);
  ppuVar9 = &PTR____CFConstantStringClassReference_110da3bd8;
  func_0x00010bf44740(&PTR____CFConstantStringClassReference_110da3bd8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bfb64c0();
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  if ((int)lVar16 != 0) {
    *puVar1 = 0x3f800000;
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_110da3bf8;
  func_0x00010bf44740(&PTR____CFConstantStringClassReference_110da3bf8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bfb64c0();
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  if ((int)lVar16 != 0) {
    puVar1[1] = 0x3f800000;
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_110da3c18;
  func_0x00010bf44740(&PTR____CFConstantStringClassReference_110da3c18);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bfb64c0();
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  if ((int)lVar16 != 0) {
    puVar1[2] = 0x3f800000;
  }
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bfb64c0();
  _objc_release(puVar11);
  _objc_release(puVar10);
  if ((int)lVar16 != 0) {
    puVar1[4] = 0x3f800000;
  }
  ppuVar9 = ppuVar8;
  func_0x00010bf4bb00();
  if (((int)ppuVar9 != 0) && (ppuVar9 = ppuVar8, func_0x00010bf4bb00(), (int)ppuVar9 != 0)) {
    puVar1[5] = 0x3f800000;
  }
  ppuVar9 = ppuVar8;
  func_0x00010bf4bb00();
  if (((((ulong)ppuVar9 & 1) != 0) || (ppuVar9 = ppuVar8, func_0x00010bf4bb00(), (int)ppuVar9 != 0))
     && (ppuVar9 = ppuVar8, func_0x00010bf4bb00(), (int)ppuVar9 != 0)) {
    puVar1[6] = 0x3f800000;
  }
  ppuVar9 = ppuVar6;
  func_0x00010bf4bb00();
  if ((((ulong)ppuVar9 & 1) != 0) || (ppuVar9 = ppuVar7, func_0x00010bf4bb00(), (int)ppuVar9 != 0))
  {
    puVar1[7] = 0x3f800000;
  }
  ppuVar9 = ppuVar8;
  func_0x00010bf4bb00();
  if ((int)ppuVar9 != 0) {
    puVar1[8] = 0x3f800000;
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_110da3c78;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bfb64c0();
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  if ((int)lVar16 != 0) {
    puVar1[10] = 0x3f800000;
  }
  puVar1[0xb] = 0;
  ppuVar9 = ppuVar8;
  func_0x00010bf4bb00();
  if (((int)ppuVar9 != 0) && (ppuVar9 = ppuVar8, func_0x00010bf4bb00(), (int)ppuVar9 != 0)) {
    puVar1[0xc] = 0x3f800000;
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_110da3af8;
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf529e0();
  if (uVar17 != 0) {
    uVar17 = 0;
    do {
      ppuVar12 = (undefined **)PTR_PTR_1126add78;
      func_0x00010bf09f40();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1;
      ppuVar9 = ppuVar12;
      func_0x00010c0f40a0();
      lVar16 = 0;
      do {
        *(float *)((long)puVar1 + lVar16) =
             *(float *)(lVar13 + lVar16) + *(float *)((long)puVar1 + lVar16);
        lVar16 = lVar16 + 4;
      } while (lVar16 != 0x78);
      _objc_release(ppuVar12);
      uVar17 = uVar17 + 1;
      uVar14 = uVar2;
      func_0x00010bf529e0();
    } while (uVar17 < uVar14);
  }
  _objc_release(uVar2);
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  ppuVar7 = ppuVar9;
  if (ppuVar9 == (undefined **)0x0) {
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  puVar10 = PTR_PTR_1126add78;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bf71e60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c067ec0();
  _objc_release(puVar10);
  _objc_release(ppuVar7);
  _objc_release(ppuVar9);
  return (undefined4 *)(ulong)((uint)puVar11 >> 4 & 1);
}



/* Entry: 10495fbd0; end: 10495fc77; +[FBSDKFeatureExtractor isButton:] */

uint FUN_10495fbd0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain();
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  puVar3 = PTR_PTR_1126add78;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bf71e60(puVar3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da3cb8,puVar2)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c067ec0();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return (uint)puVar2 >> 4 & 1;
}



/* Entry: 10495fc78; end: 10495febf; +[FBSDKFeatureExtractor update:text:hint:] */

undefined8 *
FUN_10495fc78(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  long unaff_x27;
  long lVar18;
  undefined8 *unaff_x28;
  undefined1 *puVar19;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [128];
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
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
  _objc_retain();
  _objc_retain();
  puVar2 = PTR_PTR_1126add78;
  ppuVar16 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bf71e60(puVar2,param_2,param_3,&PTR____CFConstantStringClassReference_110dbf1d8,puVar1
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126add78;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bf71e60(puVar2,param_2,param_3,&PTR____CFConstantStringClassReference_110e41778,puVar3
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    puStack_140 = puVar1;
    func_0x00010bf06ba0(param_4,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
  }
  puVar2 = puVar3;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    puStack_140 = puVar3;
    func_0x00010bf06ba0(param_5,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
  }
  puVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da3af8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(puVar4);
        }
        func_0x00010c283260(param_1,param_2,*(undefined8 *)(lStack_128 + (long)unaff_x28 * 8),
                            param_4,param_5);
        unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
      } while (puVar5 != unaff_x28);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      puVar5 = puVar4;
      func_0x00010bf52a60();
      ppuVar16 = (undefined **)0x0;
    } while (puVar5 != (undefined8 *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar5 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10495fec0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  ppuStack_190 = ppuVar16;
  puStack_188 = puVar4;
  puStack_180 = puVar3;
  puStack_178 = puVar1;
  uStack_170 = param_5;
  uStack_168 = param_1;
  uStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  _objc_retain();
  puVar4 = &uStack_2f0;
  puVar13 = auStack_230;
  puVar5 = puVar6;
  func_0x00010bf52a60();
  if (puVar5 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    lVar15 = *plStack_2e0;
    do {
      puVar17 = (undefined8 *)0x0;
      do {
        if (*plStack_2e0 != lVar15) {
          _objc_enumerationMutation(puVar6);
        }
        puVar14 = *(undefined8 **)(lStack_2e8 + (long)puVar17 * 8);
        lStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        plStack_320 = (long *)0x0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        puVar8 = puVar7;
        _objc_retain();
        puVar13 = auStack_2b0;
        puVar9 = puVar8;
        func_0x00010bf52a60();
        if (puVar9 != (undefined1 *)0x0) {
          lVar18 = *plStack_320;
          do {
            puVar19 = (undefined1 *)0x0;
            do {
              if (*plStack_320 != lVar18) {
                _objc_enumerationMutation(puVar8);
              }
              uVar10 = *(ulong *)(lStack_328 + (long)puVar19 * 8);
              puVar4 = puVar14;
              func_0x00010bf4bb00(uVar10,param_2,puVar14);
              if ((uVar10 & 1) != 0) {
                _objc_release(puVar8);
                puVar17 = (undefined8 *)0x1;
                goto LAB_104960044;
              }
              puVar19 = puVar19 + 1;
            } while (puVar9 != puVar19);
            puVar13 = auStack_2b0;
            puVar9 = puVar8;
            func_0x00010bf52a60(puVar8,param_2,&uStack_330,puVar13,0x10);
          } while (puVar9 != (undefined1 *)0x0);
        }
        _objc_release(puVar8);
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar17 != puVar5);
      puVar4 = &uStack_2f0;
      puVar13 = auStack_230;
      puVar5 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,puVar4,puVar13,0x10);
      puVar17 = (undefined8 *)0x0;
    } while (puVar5 != (undefined8 *)0x0);
  }
LAB_104960044:
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return puVar17;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126add78;
  func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126add78;
    func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,puVar4,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010c08fa60(puVar2);
      puVar12 = puVar3;
      func_0x00010c0c1b40(puVar3,param_2,puVar2,0,0,puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(puVar12);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 10495fec0; end: 10496009b; +[FBSDKFeatureExtractor foundIndicators:inValues:] */

undefined8 * FUN_10495fec0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
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
  _objc_retain();
  _objc_retain();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain();
  puVar5 = &uStack_1b0;
  puVar11 = auStack_f0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    lVar13 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        puVar12 = *(undefined8 **)(lStack_1a8 + lVar14 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar2 = param_4;
        _objc_retain();
        puVar11 = auStack_170;
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar15 = *plStack_1e0;
          do {
            lVar16 = 0;
            do {
              if (*plStack_1e0 != lVar15) {
                _objc_enumerationMutation(lVar2);
              }
              uVar4 = *(ulong *)(lStack_1e8 + lVar16 * 8);
              puVar5 = puVar12;
              func_0x00010bf4bb00(uVar4,param_2,puVar12);
              if ((uVar4 & 1) != 0) {
                _objc_release(lVar2);
                puVar12 = (undefined8 *)0x1;
                goto LAB_104960044;
              }
              lVar16 = lVar16 + 1;
            } while (lVar3 != lVar16);
            puVar11 = auStack_170;
            lVar3 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,puVar11,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar1);
      puVar5 = &uStack_1b0;
      puVar11 = auStack_f0;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar5,puVar11,0x10);
      puVar12 = (undefined8 *)0x0;
    } while (lVar1 != 0);
  }
LAB_104960044:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar6 = PTR_PTR_1126add78;
  func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = PTR_PTR_1126add78;
    func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,puVar5,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c08fa60(puVar6);
      puVar10 = puVar8;
      func_0x00010c0c1b40(puVar8,param_2,puVar6,0,0,puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(puVar10);
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  return puVar5;
}



/* Entry: 10496009c; end: 1049601b7; +[FBSDKFeatureExtractor regextMatch:text:] */

undefined4
FUN_10496009c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126add78;
  func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,param_3,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c08fa60(puVar1);
      puVar5 = puVar3;
      func_0x00010c0c1b40(puVar3,param_2,puVar1,0,0,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf529e0();
      uVar6 = 0;
      if (puVar4 != (undefined *)0x0) {
        uVar6 = 0x3f800000;
      }
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1049601b8; end: 1049603af; +[FBSDKFeatureExtractor regexMatch:event:textType:matchText:] */

undefined4
FUN_1049601b8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  
  uVar1 = uRam000000011369d2c0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar1,param_3,&PTR____CFConstantStringClassReference_110da3cd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uRam000000011369d2a8;
  func_0x00010c0e00e0(uRam000000011369d2a8,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uRam000000011369d2b0;
  func_0x00010c0e00e0(uRam000000011369d2b0,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar6 = uVar4;
  func_0x00010c0e00e0(uVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uRam000000011369d2b8;
  func_0x00010c0e00e0(uRam000000011369d2b8,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar9 = uVar7;
  func_0x00010c0e00e0(uVar7,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c125a60(param_2,param_3,uVar9,param_7);
  _objc_release(param_7);
  _objc_release(uVar9);
  return param_1;
}



/* Entry: 1049603b0; end: 10496044f; +[FBSDKGateKeeperManager initialize] */

void FUN_1049603b0(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126adec8;
  func_0x00010bf39c40();
  if (puVar2 == param_1) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puRam000000011369d2c8;
    puRam000000011369d2c8 = puVar3;
    _objc_release(puVar2);
    uVar1 = uRam000000011369d2d0;
    uRam000000011369d2d0 = 0;
    _objc_release(uVar1);
    uVar1 = uRam000000011369d2d8;
    uRam000000011369d2d8 = 0;
    _objc_release(uVar1);
    uVar1 = uRam000000011369d2e0;
    uRam000000011369d2e0 = 0;
    _objc_release(uVar1);
    uVar1 = uRam000000011369d2e8;
    uRam000000011369d2e8 = 0;
    _objc_release(uVar1);
    uRam000000011369d2f0 = 0;
  }
  return;
}



/* Entry: 104960450; end: 104960547; +[FBSDKGateKeeperManager configureWithSettings:graphRequestFactory:graphRequestConnectionFactory:store:] */

void FUN_104960450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = uRam000000011369d2e8;
  uRam000000011369d2e8 = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = uRam000000011369d2d8;
  uRam000000011369d2d8 = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = uRam000000011369d2e0;
  uRam000000011369d2e0 = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = uRam000000011369d2d0;
  uRam000000011369d2d0 = param_6;
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uRam000000011369d2f0 = 1;
  return;
}



/* Entry: 104960548; end: 1049605e3; +[FBSDKGateKeeperManager boolForKey:defaultValue:] */

long FUN_104960548(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c09b5e0(param_1,param_2,0);
  lVar1 = lRam000000011369d2f8;
  func_0x00010c0e00e0(lRam000000011369d2f8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lRam000000011369d2f8;
    func_0x00010c0e00e0(lRam000000011369d2f8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    param_4 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_4;
}



/* Entry: 1049605e4; end: 10496097f; +[FBSDKGateKeeperManager loadGateKeepers:] */

void FUN_1049605e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if ((bRam000000011369d2f0 & 1) == 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110da3d38);
    goto LAB_1049608e4;
  }
  lVar2 = lRam000000011369d2e8;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puRam000000011369d2f8 = (undefined *)0x0;
    _objc_release();
LAB_1049608c8:
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    if (puRam000000011369d2f8 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c2573e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfa16e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
      uVar4 = uVar5;
      func_0x00010c075f00();
      if ((int)uVar4 != 0) {
        puVar6 = PTR_PTR_1126addf0;
        func_0x00010bf58b60(PTR_PTR_1126addf0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
        puVar9 = PTR_PTR_1126add78;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        func_0x00010bf39c40();
        func_0x00010bf39c40();
        func_0x00010c226900(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bf67040(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puRam000000011369d2f8;
        puRam000000011369d2f8 = puVar9;
        _objc_release(puVar1);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(uVar5);
      _objc_release(puVar3);
    }
    uVar4 = param_1;
    func_0x00010be1a5a0();
    puVar3 = PTR_PTR_1126add78;
    if ((int)uVar4 != 0) goto LAB_1049608c8;
    lVar10 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010bf09f20(puVar3);
    _objc_release(lVar10);
    if ((bRam000000011369d300 & 1) == 0) {
      bRam000000011369d300 = 1;
      uVar4 = param_1;
      func_0x00010bf39c40(param_1);
      func_0x00010c136c40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bfcde00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010bf56540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c215b40(0x4010000000000000,uVar11);
      func_0x00010befafc0(uVar11);
      func_0x00010c24d960(uVar11);
      _objc_release(uVar11);
      _objc_release(uVar4);
    }
  }
  _objc_release(lVar2);
LAB_1049608e4:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 104960980; end: 104960993;  */

void FUN_104960980(long param_1)

{
  uRam000000011369d301 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c114e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_processLoadRequestResponse_error_112622db8);
  return;
}



/* Entry: 104960994; end: 104960b4b; +[FBSDKGateKeeperManager requestToLoadGateKeepers] */

void FUN_104960994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110e17ad8,
                      &PTR____CFConstantStringClassReference_110ed2b78);
  puVar5 = PTR_PTR_1126add78;
  uVar2 = uRam000000011369d2e8;
  func_0x00010c1530c0(uRam000000011369d2e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar5,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da3d78);
  _objc_release(uVar2);
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110da3d98,
                      &PTR____CFConstantStringClassReference_110fb00d8);
  puVar5 = PTR_PTR_1126add78;
  puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar5,param_2,puVar1,puVar4,&PTR____CFConstantStringClassReference_110dd5c18)
  ;
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bfcde20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uRam000000011369d2e8;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110da3db8;
  uVar7 = uVar2;
  func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf565a0(param_1,param_2,puVar5,puVar1,0,0,10,0,uVar7,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104960b4c; end: 104960fcb; +[FBSDKGateKeeperManager processLoadRequestResponse:error:] */

ulong FUN_104960b4c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *unaff_x22;
  long lVar10;
  undefined *unaff_x23;
  undefined *puVar11;
  undefined8 unaff_x24;
  undefined *puVar12;
  double dVar13;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uStack_148 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uRam000000011369d300 = 0;
  if (param_4 != 0) goto LAB_104960f10;
  puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uStack_158 = param_4;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puRam000000011369d308;
  puRam000000011369d308 = puVar12;
  uStack_150 = param_1;
  _objc_release(puVar1);
  puVar1 = puRam000000011369d2f8;
  func_0x00010c0d3c80();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010c0d8420();
  }
  puVar12 = PTR_PTR_1126add78;
  puStack_140 = puVar1;
  func_0x00010bf71fc0();
  _objc_retainAutoreleasedReturnValue();
  unaff_x22 = PTR_PTR_1126add78;
  puStack_160 = puVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar12);
  puVar1 = PTR_PTR_1126add78;
  puStack_168 = unaff_x22;
  if (unaff_x22 == (undefined *)0x0) {
LAB_104960e44:
    puStack_138 = (undefined *)0x0;
  }
  else {
    puVar12 = unaff_x22;
    func_0x00010c0e00e0(unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    if (puVar1 == (undefined *)0x0) goto LAB_104960e44;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    _objc_retain();
    puStack_138 = puVar1;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      unaff_x22 = (undefined *)*puStack_120;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_120 != unaff_x22) {
            _objc_enumerationMutation(puStack_138);
          }
          puVar2 = PTR_PTR_1126add78;
          func_0x00010bf71fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126add78;
          puVar3 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3f0e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = PTR_PTR_1126add78;
          puVar4 = puVar2;
          func_0x00010c0e00e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0df6c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if ((puVar2 != (undefined *)0x0) &&
             (puVar11 != (undefined *)0x0 && puVar3 != (undefined *)0x0)) {
            func_0x00010bf71e80(PTR_PTR_1126add78);
          }
          _objc_release(puVar3);
          _objc_release(puVar11);
          _objc_release(puVar2);
          puVar12 = puVar12 + 1;
        } while (puVar1 != puVar12);
        puVar1 = puStack_138;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puStack_138);
    puVar12 = puStack_140;
    func_0x00010bf51e00();
    puVar1 = puRam000000011369d2f8;
    puRam000000011369d2f8 = puVar12;
    _objc_release(puVar1);
  }
  unaff_x23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = uRam000000011369d2e8;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  uStack_170 = uVar5;
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = uStack_150;
  func_0x00010c2573e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1780();
  _objc_release(unaff_x24);
  _objc_release(puVar1);
  _objc_release(unaff_x23);
  _objc_release(puStack_138);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_140);
  param_1 = uStack_150;
  param_4 = uStack_158;
LAB_104960f10:
  uVar6 = param_4;
  func_0x00010bdfefe0(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  uVar9 = uStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar9;
  }
  ___stack_chk_fail();
  _objc_sync_exit(uStack_150);
  __Unwind_Resume(uVar9);
  puVar8 = &uStack_280;
  pcStack_178 = FUN_104960fcc;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1b0 = unaff_x24;
  puStack_1a8 = unaff_x23;
  puStack_1a0 = unaff_x22;
  uStack_198 = param_4;
  uStack_190 = uVar9;
  uStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0(uRam000000011369d2c8);
  dVar13 = 0.0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  _objc_retain();
  puVar12 = puVar1;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    lVar10 = *plStack_270;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_270 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        lVar7 = *(long *)(lStack_278 + (long)puVar11 * 8);
        (**(code **)(lVar7 + 0x10))(lVar7,uVar6);
        puVar11 = puVar11 + 1;
      } while (puVar12 != puVar11);
      puVar12 = puVar1;
      puVar8 = &uStack_280;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return uVar6;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (puVar8 == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  else {
    _objc_retain(puVar8);
    func_0x00010bf64de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar8);
    uVar9 = (ulong)(dVar13 < 3600.0);
    _objc_release(puVar1);
  }
  return uVar9;
}



/* Entry: 104960fcc; end: 104961103; +[FBSDKGateKeeperManager _didProcessGKFromNetwork:] */

ulong FUN_104960fcc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0(uRam000000011369d2c8);
  dVar8 = 0.0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar6 = *plStack_100;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(puVar1);
        }
        lVar3 = *(long *)(lStack_108 + (long)puVar7 * 8);
        (**(code **)(lVar3 + 0x10))(lVar3,param_3);
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = puVar1;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (puVar4 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(puVar4);
    func_0x00010bf64de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar4);
    uVar5 = (ulong)(dVar8 < 3600.0);
    _objc_release(puVar1);
  }
  return uVar5;
}



/* Entry: 104961104; end: 10496118f; +[FBSDKGateKeeperManager _gateKeeperTimestampIsValid:] */

bool FUN_104961104(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_4 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_4);
    func_0x00010bf64de0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(param_4);
    bVar1 = param_1 < 3600.0;
    _objc_release(puVar2);
  }
  return bVar1;
}



/* Entry: 104961190; end: 1049611cf; +[FBSDKGateKeeperManager _gateKeeperIsValid] */

undefined8 FUN_104961190(ulong param_1)

{
  if ((cRam000000011369d301 == '\x01' && lRam000000011369d308 != 0) &&
     (func_0x00010be1a5c0(), (param_1 & 1) != 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 1049611d0; end: 1049611db; +[FBSDKGateKeeperManager graphRequestFactory] */

void FUN_1049611d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d2d8);
  return;
}



/* Entry: 1049611dc; end: 1049611e7; +[FBSDKGateKeeperManager settings] */

void FUN_1049611dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d2e8);
  return;
}



/* Entry: 1049611e8; end: 1049611f3; +[FBSDKGateKeeperManager graphRequestConnectionFactory] */

void FUN_1049611e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d2e0);
  return;
}



/* Entry: 1049611f4; end: 1049611ff; +[FBSDKGateKeeperManager gateKeepers] */

void FUN_1049611f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d2f8);
  return;
}



/* Entry: 104961200; end: 10496120b; +[FBSDKGateKeeperManager store] */

void FUN_104961200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d2d0);
  return;
}



/* Entry: 10496120c; end: 104961227; +[FBSDKGraphErrorRecoveryProcessor new] */

void FUN_10496120c(void)

{
  _objc_alloc(PTR_PTR_1126aded0);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104961228; end: 104961297; -[FBSDKGraphErrorRecoveryProcessor init] */

undefined8 FUN_104961228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add30;
  func_0x00010bf5df00(PTR_PTR_1126add30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefce0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 104961298; end: 10496130f; -[FBSDKGraphErrorRecoveryProcessor initWithAccessTokenString:] */

undefined1 * FUN_104961298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3380;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + 8),param_3);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104961310; end: 104961573; -[FBSDKGraphErrorRecoveryProcessor processError:request:delegate:] */

undefined8
FUN_104961310(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar6 = param_5;
  func_0x00010c13b700();
  if (((int)uVar6 != 0) &&
     (uVar6 = param_5, func_0x00010c115b60(param_5,param_2,param_1,param_3), (int)uVar6 == 0)) {
    uVar6 = 0;
    goto LAB_104961538;
  }
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 == 0) ||
     (lVar1 = lVar2, func_0x00010c13b700(lVar2,param_2,PTR_s_unsignedIntegerValue_11267e418),
     (int)lVar1 == 0)) {
LAB_10496152c:
    uVar6 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010c2827c0();
    if (lVar1 == 2) {
      lVar1 = param_4;
      func_0x00010c273280();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
      if (lVar1 != 0) {
        lVar3 = param_4;
        func_0x00010c273280();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        func_0x00010beecce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0720c0(lVar3,param_2,uVar6);
        _objc_release(uVar6);
        _objc_release(lVar3);
        _objc_release(lVar1);
        if ((int)lVar4 == 0) goto LAB_10496152c;
        lVar1 = param_3;
        func_0x00010c1242a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e90c0(param_1,param_2,lVar1);
        _objc_release(lVar1);
        uVar6 = param_1;
        func_0x00010c1242a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_104961574;
        puStack_80 = &UNK_1108500c8;
        uVar5 = param_5;
        _objc_retain();
        lVar1 = param_3;
        uStack_78 = uVar5;
        uStack_70 = param_1;
        _objc_retain();
        lStack_68 = lVar1;
        func_0x00010bf0d9a0(uVar6,param_2,lVar1,&puStack_98);
        _objc_release(uVar6);
        _objc_release(lStack_68);
        _objc_release(uStack_78);
        uVar6 = 1;
      }
    }
    else {
      if (lVar1 != 1) goto LAB_10496152c;
      uVar6 = 1;
      func_0x00010c115b40(param_5,param_2,param_1,1,0);
    }
  }
  _objc_release(lVar2);
LAB_104961538:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 104961574; end: 1049615ab;  */

void FUN_104961574(long param_1,undefined8 param_2)

{
  func_0x00010c115b40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(*(long *)(param_1 + 0x28) + 0x10,0);
  return;
}



/* Entry: 1049615ac; end: 1049615b3; -[FBSDKGraphErrorRecoveryProcessor accessToken] */

undefined8 FUN_1049615ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1049615b4; end: 1049615cb; -[FBSDKGraphErrorRecoveryProcessor delegate] */

void FUN_1049615b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049615cc; end: 1049615d3; -[FBSDKGraphErrorRecoveryProcessor recoveryAttempter] */

undefined8 FUN_1049615cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049615d4; end: 1049615df; -[FBSDKGraphErrorRecoveryProcessor setRecoveryAttempter:] */

void FUN_1049615d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1049615e0; end: 1049615e7; -[FBSDKGraphErrorRecoveryProcessor _error] */

undefined8 FUN_1049615e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049615e8; end: 1049615f3; -[FBSDKGraphErrorRecoveryProcessor set_error:] */

void FUN_1049615e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049615f4; end: 104961637; -[FBSDKGraphErrorRecoveryProcessor .cxx_destruct] */

void FUN_1049615f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104961638; end: 10496163f; -[FBSDKGraphRequest initWithGraphPath:] */

void FUN_104961638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c018050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithGraphPath_useAlternative_1125e39f0,param_3,1);
  return;
}



/* Entry: 104961640; end: 104961713; -[FBSDKGraphRequest initWithGraphPath:useAlternativeDefaultDomainPrefix:] */

undefined **
FUN_104961640(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  ppuVar4 = ppuVar1;
  func_0x00010c017e60();
  _objc_release(param_3);
  _objc_release(ppuVar1);
  if (param_1 != (undefined **)0x0) {
    *(undefined1 *)((long)param_1 + 9) = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (ppuVar4 == &PTR____CFConstantStringClassReference_110deec98) {
    _objc_retain(uVar2);
    func_0x00010bf72080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017e80(ppuVar1);
    _objc_release(uVar2);
    _objc_retain(ppuVar1);
    _objc_release(puVar3);
  }
  else {
    _objc_retain(uVar2);
    func_0x00010c017e80(ppuVar1);
    _objc_release(uVar2);
    _objc_retain(ppuVar1);
  }
  ppuVar4 = ppuVar1;
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c018030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return ppuVar4;
}



/* Entry: 104961714; end: 104961853; -[FBSDKGraphRequest initWithGraphPath:HTTPMethod:] */

undefined8
FUN_104961714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == &PTR____CFConstantStringClassReference_110deec98) {
    _objc_retain(param_3);
    func_0x00010bf72080(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017e80(param_1);
    _objc_release(param_3);
    _objc_retain(param_1);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(param_3);
    func_0x00010c017e80(param_1);
    _objc_release(param_3);
    _objc_retain(param_1);
  }
  uVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c018030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return uVar2;
}



/* Entry: 104961854; end: 10496185b; -[FBSDKGraphRequest initWithGraphPath:parameters:] */

void FUN_104961854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c018030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithGraphPath_parameters_use_1125e39e8,param_3,param_4,1);
  return;
}



/* Entry: 10496185c; end: 104961887; -[FBSDKGraphRequest initWithGraphPath:parameters:useAlternativeDefaultDomainPrefix:] */

void FUN_10496185c(long param_1)

{
  undefined1 in_w4;
  
  func_0x00010c017ec0();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 9) = in_w4;
  }
  return;
}



/* Entry: 104961888; end: 10496188f; -[FBSDKGraphRequest initWithGraphPath:parameters:HTTPMethod:] */

void FUN_104961888(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c017eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGraphPath_parameters_HTT_1125e3988);
  return;
}



/* Entry: 104961890; end: 10496195b; -[FBSDKGraphRequest initWithGraphPath:parameters:HTTPMethod:useAlternativeDefaultDomainPrefix:] */

long FUN_104961890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010beecd60();
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017fc0(param_1,param_2,param_3,param_4,lVar1,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 9) = param_6;
  }
  return param_1;
}



/* Entry: 10496195c; end: 104961963; -[FBSDKGraphRequest initWithGraphPath:parameters:flags:] */

void FUN_10496195c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c017ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGraphPath_parameters_fla_1125e3998);
  return;
}



/* Entry: 104961964; end: 104961a17; -[FBSDKGraphRequest initWithGraphPath:parameters:flags:useAlternativeDefaultDomainPrefix:] */

long FUN_104961964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010beecd60();
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017f00(param_1,param_2,param_3,param_4,lVar1,
                      &PTR____CFConstantStringClassReference_110deec98,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 9) = param_6;
  }
  return param_1;
}



/* Entry: 104961a18; end: 104961a1f; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:] */

void FUN_104961a18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c017f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGraphPath_parameters_tok_1125e39b8);
  return;
}



/* Entry: 104961a20; end: 104961b37; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:useAlternativeDefaultDomainPrefix:] */

ulong FUN_104961a20(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,ulong param_7,undefined1 param_8)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017fc0(param_1,param_2,param_3,param_4,param_5,uVar2,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bfb24a0(param_1);
    func_0x00010c19da80(param_1,param_2,uVar1 | param_7);
    *(undefined1 *)(param_1 + 9) = param_8;
  }
  return param_1;
}



/* Entry: 104961b38; end: 104961c57; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:graphRequestConnectionFactory:] */

undefined8
FUN_104961b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017f80(param_1,param_2,param_3,param_4,param_5,param_6,uVar2,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104961c58; end: 104961c83; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:version:flags:graphRequestConnectionFactory:] */

void FUN_104961c58(void)

{
  func_0x00010c017fa0();
  return;
}



/* Entry: 104961c84; end: 104961d33; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:version:flags:useAlternativeDefaultDomainPrefix:graphRequestConnectionFactory:] */

ulong FUN_104961c84(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                   undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  ulong uVar1;
  
  _objc_retain(param_11);
  func_0x00010c017fc0(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bfb24a0(param_1);
    func_0x00010c19da80(param_1,param_2,uVar1 | param_8);
    *(undefined1 *)(param_1 + 9) = param_9;
    func_0x00010c1a42c0(param_1,param_2,param_11);
  }
  _objc_release(param_11);
  return param_1;
}



/* Entry: 104961d34; end: 104961d3b; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:version:HTTPMethod:] */

void FUN_104961d34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c017ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGraphPath_parameters_tok_1125e39d8);
  return;
}



/* Entry: 104961d3c; end: 104961d5f; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:forAppEvents:] */

void FUN_104961d3c(void)

{
  func_0x00010c017f40();
  return;
}



/* Entry: 104961d60; end: 104961e7f; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:forAppEvents:useAlternativeDefaultDomainPrefix:] */

ulong FUN_104961d60(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,ulong param_7,undefined1 param_8,
                   undefined1 param_9)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017fc0(param_1,param_2,param_3,param_4,param_5,uVar2,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bfb24a0(param_1);
    func_0x00010c19da80(param_1,param_2,uVar1 | param_7);
    *(undefined1 *)(param_1 + 8) = param_8;
    *(undefined1 *)(param_1 + 9) = param_9;
  }
  return param_1;
}



/* Entry: 104961e80; end: 104961ea3; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:version:HTTPMethod:forAppEvents:] */

void FUN_104961e80(void)

{
  func_0x00010c018000();
  return;
}



/* Entry: 104961ea4; end: 1049620db; -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:version:HTTPMethod:forAppEvents:useAlternativeDefaultDomainPrefix:] */

undefined1 *
FUN_104961ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,long param_7,undefined1 param_8,undefined1 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e3388;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_5;
      func_0x00010bf51e00();
    }
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(long *)((long)puVar1 + 0x28) = lVar2;
    _objc_release(uVar4);
    if (param_6 == 0) {
      puVar6 = (undefined1 *)puVar1;
      func_0x00010bf39c40();
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010bfcdce0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
      *(undefined1 **)((long)puVar1 + 0x38) = puVar3;
      _objc_release(uVar4);
    }
    else {
      lVar2 = param_6;
      func_0x00010bf51e00();
      puVar6 = *(undefined1 **)((long)puVar1 + 0x38);
      *(long *)((long)puVar1 + 0x38) = lVar2;
    }
    _objc_release(puVar6);
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar5);
    lVar2 = param_7;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010c1a4fc0(puVar1);
    }
    else {
      lVar2 = param_7;
      func_0x00010bf51e00(param_7);
      func_0x00010c1a4fc0(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = *(long *)PTR____NSDictionary0___11034ab50;
    if (param_4 != 0) {
      lVar2 = param_4;
    }
    _objc_storeStrong((undefined1 *)((long)puVar1 + 0x20),lVar2);
    puVar6 = (undefined1 *)puVar1;
    func_0x00010bf39c40();
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c0747e0();
    _objc_release(puVar6);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010c19da80(puVar1);
    }
    puVar6 = (undefined1 *)puVar1;
    func_0x00010bf39c40();
    func_0x00010bfcde00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined1 **)((long)puVar1 + 0x40) = puVar6;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1049620dc; end: 1049620f3; -[FBSDKGraphRequest isGraphErrorRecoveryDisabled] */

ulong FUN_1049620dc(ulong param_1)

{
  func_0x00010bfb24a0();
  return param_1 >> 3 & 1;
}



/* Entry: 1049620f4; end: 10496212f; -[FBSDKGraphRequest setGraphErrorRecoveryDisabled:] */

void FUN_1049620f4(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bfb24a0();
  uVar1 = 8;
  if (param_3 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setFlags__1126450c0,uVar2 & 0xfffffffffffffff7 | uVar1);
  return;
}



/* Entry: 104962130; end: 1049621ff; -[FBSDKGraphRequest hasAttachments] */

undefined1 FUN_104962130(undefined8 param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar2 = PTR_PTR_1126add78;
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e40(puVar2);
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 104962200; end: 104962243;  */

void FUN_104962200(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  func_0x00010c06c800();
  if ((int)puVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 104962244; end: 1049622c3; -[FBSDKGraphRequest startWithCompletion:] */

void FUN_104962244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfcde00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf56540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010befafc0(uVar2,param_2,param_1,param_3);
  _objc_release(param_3);
  func_0x00010c24d960(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049622c4; end: 10496245b; +[FBSDKGraphRequest isForFetchingDomainConfiguration:] */

undefined8 FUN_1049622c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  func_0x00010bf39c40();
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfcdd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    uVar3 = param_3;
    func_0x00010bdc16c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar3 = param_3;
      func_0x00010c0f3840();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 != 0) {
        uVar4 = param_3;
        func_0x00010c0f3840();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar6 & 1) != 0) {
          uVar7 = 1;
          goto LAB_104962424;
        }
      }
    }
  }
  uVar7 = 0;
LAB_104962424:
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10496245c; end: 1049624e7; +[FBSDKGraphRequest isAttachment:] */

ulong FUN_10496245c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126aded8;
      func_0x00010bf39c40(PTR_PTR_1126aded8);
      uVar2 = param_3;
      func_0x00010c075f00(param_3,param_2,puVar1);
      goto LAB_1049624d0;
    }
  }
  uVar2 = 1;
LAB_1049624d0:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1049624e8; end: 1049624f3; +[FBSDKGraphRequest serializeURL:params:] */

void FUN_1049624e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_serializeURL_params_httpMethod__112635460,param_3,param_4,
             &PTR____CFConstantStringClassReference_110deec98);
  return;
}



/* Entry: 1049624f4; end: 1049624fb; +[FBSDKGraphRequest serializeURL:params:httpMethod:] */

void FUN_1049624f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_serializeURL_params_httpMethod_f_112635468);
  return;
}



/* Entry: 1049624fc; end: 1049626df; +[FBSDKGraphRequest serializeURL:params:httpMethod:forBatch:] */

void FUN_1049624fc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c10a7a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = param_3;
  func_0x00010c25cdc0(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = param_5;
  func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110dada18);
  if (((int)uVar4 == 0) || ((param_6 & 1) != 0)) {
    puVar2 = puVar3;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110dbff78;
    if (puVar2 != (undefined *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110df6378;
    }
    _objc_retain();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126add58;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1049626e0;
    puStack_68 = &UNK_1107b9968;
    uVar4 = param_5;
    uStack_58 = param_1;
    _objc_retain();
    uStack_60 = uVar4;
    func_0x00010c11d9e0(puVar2,param_2,uVar1,0,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dc5ed8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(puVar2);
    _objc_release(uStack_60);
  }
  else {
    puVar6 = param_3;
    _objc_retain(param_3);
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1049626e0; end: 10496276b;  */

void FUN_1049626e0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c06c800();
  if (iVar1 == 0) {
    uVar2 = param_2;
    _objc_retain(param_2);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      func_0x00010c23cd40(PTR_PTR_1126add38);
    }
    uVar2 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10496276c; end: 104962827; +[FBSDKGraphRequest preprocessParams:] */

void FUN_10496276c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfcdcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    puVar2 = param_3;
    _objc_retain(param_3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,lVar1,
                        &PTR____CFConstantStringClassReference_110dced78);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104962828; end: 104962833; +[FBSDKGraphRequest settings] */

void FUN_104962828(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d310);
  return;
}



/* Entry: 104962834; end: 104962843; +[FBSDKGraphRequest setSettings:] */

void FUN_104962834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d310,param_3);
  return;
}



/* Entry: 104962844; end: 10496284f; +[FBSDKGraphRequest accessTokenProvider] */

void FUN_104962844(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d318);
  return;
}



/* Entry: 104962850; end: 10496285b; +[FBSDKGraphRequest setAccessTokenProvider:] */

void FUN_104962850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369d318 = param_3;
  return;
}



/* Entry: 10496285c; end: 104962867; +[FBSDKGraphRequest graphRequestConnectionFactory] */

void FUN_10496285c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d320);
  return;
}



/* Entry: 104962868; end: 104962877; +[FBSDKGraphRequest setGraphRequestConnectionFactory:] */

void FUN_104962868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d320,param_3);
  return;
}



/* Entry: 104962878; end: 1049628d7; +[FBSDKGraphRequest configureWithSettings:currentAccessTokenStringProvider:graphRequestConnectionFactory:] */

void FUN_104962878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010c1fe440(param_1,param_2,param_3);
  func_0x00010c160e00(param_1,param_2,param_4);
  func_0x00010c1a42c0(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1049628d8; end: 1049628db; -[FBSDKGraphRequest description] */

void FUN_1049628d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_formattedDescription_1125cb1b8);
  return;
}



/* Entry: 1049628dc; end: 104962a2f; -[FBSDKGraphRequest formattedDescription] */

void FUN_1049628dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  lVar1 = param_1;
  func_0x00010bf39c40();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da3df8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfcdd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bfcdd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da3e18);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bdc16c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da3e38);
    _objc_release(lVar1);
  }
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da3e58);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104962a30; end: 104962a37; -[FBSDKGraphRequest HTTPMethod] */

undefined8 FUN_104962a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104962a38; end: 104962a3f; -[FBSDKGraphRequest setHTTPMethod:] */

void FUN_104962a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104962a40; end: 104962a47; -[FBSDKGraphRequest flags] */

undefined8 FUN_104962a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104962a48; end: 104962a4f; -[FBSDKGraphRequest setFlags:] */

void FUN_104962a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 104962a50; end: 104962a57; -[FBSDKGraphRequest parameters] */

undefined8 FUN_104962a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


