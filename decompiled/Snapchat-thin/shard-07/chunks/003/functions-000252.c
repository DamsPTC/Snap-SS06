/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10549fcc4; end: 10549fcd7; -[SCBitmojiGLBFetcher optimizationParamsForFeature:] */

void FUN_10549fcc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b9680,PTR_s_optimizationParamsForFeature_con_112618a68,param_3,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10549fcd8; end: 10549fd13; -[SCBitmojiGLBFetcher .cxx_destruct] */

void FUN_10549fcd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10549fd14; end: 10549fdf3; +[SCBitmojiGLBHelper optimizationParamsForFeature:configProvider:] */

void FUN_10549fd14(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  _objc_retain(param_4);
  if (param_3 == 0x12) {
    func_0x00010bf1f440(param_4,param_2,&PTR____CFConstantStringClassReference_110de2158,0,0);
    puVar1 = PTR_PTR_1126b9690;
    _objc_alloc(PTR_PTR_1126b9690);
    uVar3 = 0x3d800000;
    uVar2 = 0x3e000000;
  }
  else if (param_3 == 3) {
    func_0x00010bf1f440(param_4,param_2,&PTR____CFConstantStringClassReference_110de2178,0,0);
    puVar1 = PTR_PTR_1126b9690;
    _objc_alloc(PTR_PTR_1126b9690);
    uVar2 = 0x3f800000;
    uVar3 = 0x3f800000;
  }
  else {
    puVar1 = PTR_PTR_1126b9690;
    _objc_alloc(PTR_PTR_1126b9690);
    uVar2 = 0x3f800000;
    uVar3 = 0x3f800000;
  }
  func_0x00010c00f840(uVar2,uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10549fdf4; end: 10549fee3; +[SCBitmojiGLBHelper isGLBCachedForAvatar:avatarType:feature:configProvider:contentDelivery:] */

bool FUN_10549fdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010c0ec140(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  uVar2 = param_3;
  func_0x00010b0e7438(param_3,param_4,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0295e0(puVar1);
  _objc_release(uVar2);
  lVar3 = param_7;
  func_0x00010c11d220(param_7);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_1);
  return lVar3 == 0;
}



/* Entry: 10549fee4; end: 10549ff63;  */

void FUN_10549fee4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be240a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10549ff64; end: 1054a006f; -[SCBitmojiGLBServiceProvider _glbFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10549ff64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b96a0;
  _objc_alloc(PTR_PTR_1126b96a0);
  lVar2 = param_1;
  FUN_1054a0070(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112723f48;
    _objc_loadWeakRetained(lVar6);
  }
  lVar4 = lVar6;
  func_0x00010c273160(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001054a0094(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0032e0(puVar1,param_2,lVar3,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a0070; end: 1054a00b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054a0070(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112723f40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054a00b8; end: 1054a0207; -[SCBitmojiGLBServiceProvider _sceneDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054a00b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126b96a8;
  _objc_alloc(PTR_PTR_1126b96a8);
  lVar2 = param_1;
  FUN_1054a0070(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x0001054a0094(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112723f4c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar6 = lVar9;
  func_0x00010bf12e00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_112723f50;
    _objc_loadWeakRetained(lVar8);
  }
  func_0x00010c002fa0(puVar1,param_2,lVar3,lVar5,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a0208; end: 1054a026f; -[SCBitmojiGLBServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054a0208(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112723f50);
  _objc_destroyWeak(param_1 + _DAT_112723f4c);
  _objc_destroyWeak(param_1 + _DAT_112723f48);
  _objc_destroyWeak(param_1 + _DAT_112723f44);
  _objc_destroyWeak(param_1 + _DAT_112723f40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112723f3c);
  return;
}



/* Entry: 1054a0270; end: 1054a0437; -[SCBitmojiSceneDataFetcher initWithContentDelivery:configProvider:bitmojiAvatarDataServices:unifiedGRPCServices:] */

undefined8 *
FUN_1054a0270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e8718;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
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
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    _objc_retain();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    _objc_retain(puVar4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(param_6);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054a0438; end: 1054a052f;  */

void FUN_1054a0438(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,5000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,5000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcfa00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b96b0;
  _objc_alloc(PTR_PTR_1126b96b0);
  func_0x00010c058f80();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054a0530; end: 1054a0bb7; -[SCBitmojiSceneDataFetcher fetchSceneDataForSceneId:avatarId:friendAvatarId:avatarType:surface:optimizationParams:] */

void FUN_1054a0530(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  undefined1 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_3);
  if ((param_6 == 1) || (puVar1 = param_3, param_6 == 2)) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  lVar16 = param_1;
  func_0x00010bee6880();
  lVar2 = lVar16;
  FUN_10549beb0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b08b8;
  _objc_alloc();
  lVar6 = param_1;
  func_0x00010bdd7a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010be91d20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b1060;
  _objc_alloc();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110de21f8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126b1378;
  func_0x00010c1081a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4133c68000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b9620;
  _objc_opt_new();
  func_0x00010c181bc0();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_1054a0bb8;
  uStack_98 = 0x1054a0bc8;
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfc4660();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_1054a0bb8;
  uStack_c8 = 0x1054a0bc8;
  puVar12 = PTR_PTR_1126ae560;
  uStack_90 = uVar11;
  _objc_alloc_init();
  puStack_c0 = puVar12;
  _objc_initWeak(auStack_f0,param_1);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar11);
  if (param_5 == 0) {
    func_0x00010bf43d60(puStack_e0[5]);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x30);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
      puVar12 = PTR_PTR_1126b96b8;
      _objc_alloc_init();
      lVar14 = param_5;
      func_0x000108d39b60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16da00(puVar12);
      _objc_release(lVar14);
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_1054a0bd0;
      puStack_110 = &UNK_11088e7e8;
      _objc_copyWeak(auStack_f8,auStack_f0);
      puStack_100 = &uStack_e8;
      _objc_retain(param_5);
      lStack_108 = param_5;
      func_0x00010bfc2e40(uVar15);
      _objc_release(uVar15);
      _objc_release(lStack_108);
      _objc_destroyWeak(auStack_f8);
      _objc_release(puVar12);
    }
    else {
      func_0x00010bf43d60(puStack_e0[5]);
    }
    _objc_release(lVar13);
  }
  puVar12 = PTR_PTR_1126ae6b8;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_copyWeak(auStack_148,auStack_f0);
  _objc_retain(puVar7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_140 = param_7;
  _objc_retain(uVar11);
  _objc_retain(param_5);
  lStack_138 = param_6;
  _objc_retain(param_8);
  uStack_130 = (undefined1)lVar16;
  func_0x00010bf54280(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(uVar11);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_f0);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(puStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_f0);
    __Block_object_dispose(&uStack_e8,8);
    lVar16 = 8;
    __Block_object_dispose(&uStack_b8);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
    *(undefined8 *)(lVar16 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1054a0bb8; end: 1054a0bcf;  */

void FUN_1054a0bb8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054a0bd0; end: 1054a0c43;  */

void FUN_1054a0bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be262e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054a0c44; end: 1054a1023;  */

void FUN_1054a0c44(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,param_1 + 0x90);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar10);
  _objc_retain(puVar1);
  uVar4 = uVar2;
  func_0x00010bf88ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126ae558;
  uStack_98 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 8) + 0x28);
  puVar5 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + 0x28);
  puStack_90 = puVar5;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar14);
  func_0x00010c297260(puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  puVar7 = PTR_PTR_1126b0418;
  _objc_retain(uVar4);
  func_0x00010bf54280(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  param_2 = param_2 + 0x48;
  _objc_loadWeakRetained(param_2);
  func_0x00010be704e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054a1024; end: 1054a105f;  */

void FUN_1054a1024(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be704e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054a1060; end: 1054a11ff;  */

void FUN_1054a1060(long param_1,undefined *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar3 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x50);
    func_0x00010bf1f440();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010900661c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    FUN_10549c1f8(puVar4,uVar9,uVar1,puVar3,uVar10,puVar5,lVar8 != 2,uVar2,uVar6,
                  *(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
  }
  _objc_release(puVar3);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054a1200; end: 1054a1207;  */

void FUN_1054a1200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1054a1208; end: 1054a1347;  */

void FUN_1054a1208(long param_1,long param_2)

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
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x90,param_2 + 0x90);
  return;
}



/* Entry: 1054a1348; end: 1054a145b; -[SCBitmojiSceneDataFetcher _handleAvatarDataCompleted:friendAvatarId:response:error:] */

void FUN_1054a1348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    lVar1 = param_5;
    func_0x00010bf1ec00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 != 0) {
      lVar1 = param_5;
      func_0x00010bf1ec00(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x0001054a3958();
      func_0x00010c0df760(puVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c220220(*(undefined8 *)(param_1 + 0x30),param_2,puVar3,param_4);
      func_0x00010bf43d60(param_3,param_2,puVar3);
      _objc_release(puVar3);
      goto LAB_1054a1428;
    }
  }
  func_0x00010bf43ca0(param_3,param_2,param_6);
LAB_1054a1428:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054a145c; end: 1054a153b; -[SCBitmojiSceneDataFetcher _parseSceneDataWithContentKey:pageInfo:avatarId:sceneId:sceneDataPromise:] */

void FUN_1054a145c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1054a153c;
  puStack_40 = &UNK_11088e698;
  uStack_38 = param_7;
  _objc_retain(param_7);
  func_0x00010c13e480(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054a153c; end: 1054a15ab;  */

void FUN_1054a153c(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if ((param_2 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110de2298,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054a15ac; end: 1054a1643; -[SCBitmojiSceneDataFetcher _cacheKeyForSceneId:] */

void FUN_1054a15ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c25d780(uVar2,param_2,&PTR____CFConstantStringClassReference_110de21d8,
                      &PTR____CFConstantStringClassReference_110dd8fb8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a1644; end: 1054a16f3; -[SCBitmojiSceneDataFetcher _requestWithURLString:] */

void FUN_1054a1644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1058;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01b360();
  puVar2 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054a16f4; end: 1054a1887; -[SCBitmojiSceneDataFetcher _retrieveAssetWithContentKey:pageInfo:observer:] */

void FUN_1054a16f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1054a17d4;
  puStack_40 = &UNK_11088e698;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c13e480(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054a1888; end: 1054a189f; -[SCBitmojiSceneDataFetcher _useStagingDomain] */

void FUN_1054a1888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110db0f18,0,0);
  return;
}



/* Entry: 1054a18a0; end: 1054a197b; -[SCBitmojiSceneDataFetcher .cxx_destruct] */

void FUN_1054a18a0(long param_1)

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



/* Entry: 1054a197c; end: 1054a1987;  */

bool FUN_1054a197c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1054a1988; end: 1054a1a17;  */

undefined * FUN_1054a1988(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc038 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de22d8,
                        &UNK_10ddb0140,&UNK_10ddb018c,6,FUN_1054a1a18,0,&UNK_10ddb01a4);
    do {
      if (puRam00000001136bc038 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc038;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc038,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc038 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc038;
}



/* Entry: 1054a1a18; end: 1054a1a2f;  */

uint FUN_1054a1a18(uint param_1)

{
  return (uint)(param_1 < 0xe) & 0x3807U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 1054a1a30; end: 1054a1aab;  */

undefined * FUN_1054a1a30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc040 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de22f8,
                        &UNK_10ddb01b9,&UNK_10ddb01dc,4,FUN_1054a1aac,0);
    do {
      if (puRam00000001136bc040 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc040;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc040,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc040 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc040;
}



/* Entry: 1054a1aac; end: 1054a1ab7;  */

bool FUN_1054a1aac(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1054a1ab8; end: 1054a1b1f; +[SceneAvatarData descriptor] */

void FUN_1054a1ab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3add0,
                        &PTR____CFConstantStringClassReference_110de2318,&PTR_DAT_1130daff8,
                        &PTR_DAT_1130db190,3,0x20,0x1c);
    puRam00000001136bc048 = puVar1;
  }
  return;
}



/* Entry: 1054a1b20; end: 1054a1b87; +[ScenePropData descriptor] */

void FUN_1054a1b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ae20,
                        &PTR____CFConstantStringClassReference_110de2338,&PTR_DAT_1130daff8,
                        &PTR_s_id_p_1130db050,2,0x18,0x1c);
    puRam00000001136bc050 = puVar1;
  }
  return;
}



/* Entry: 1054a1b88; end: 1054a1bef; +[SceneCameraData descriptor] */

void FUN_1054a1b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ae70,
                        &PTR____CFConstantStringClassReference_110de2358,&PTR_DAT_1130daff8,
                        &PTR_s_id_p_1130db010,1,0x10,0x1c);
    puRam00000001136bc058 = puVar1;
  }
  return;
}



/* Entry: 1054a1bf0; end: 1054a1c57; +[SceneLightData descriptor] */

void FUN_1054a1bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3aec0,
                        &PTR____CFConstantStringClassReference_110de2378,&PTR_DAT_1130daff8,
                        &PTR_s_id_p_1130db030,1,0x10,0x1c);
    puRam00000001136bc060 = puVar1;
  }
  return;
}



/* Entry: 1054a1c58; end: 1054a1cbf; +[SceneExtraData descriptor] */

void FUN_1054a1c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3af10,
                        &PTR____CFConstantStringClassReference_110de2398,&PTR_DAT_1130daff8,
                        &PTR_s_height_1130db510,0x10,0x50,0x1c);
    puRam00000001136bc068 = puVar1;
  }
  return;
}



/* Entry: 1054a1cc0; end: 1054a1d27; +[MovieData descriptor] */

void FUN_1054a1cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3af60,
                        &PTR____CFConstantStringClassReference_110de23b8,&PTR_DAT_1130daff8,
                        &PTR_DAT_1130db090,2,0x10,0x1c);
    puRam00000001136bc070 = puVar1;
  }
  return;
}



/* Entry: 1054a1d28; end: 1054a1d8f; +[ViewBox descriptor] */

void FUN_1054a1d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3afb0,
                        &PTR____CFConstantStringClassReference_110de23d8,&PTR_DAT_1130daff8,
                        &PTR_DAT_1130db1f0,4,0x14,0x1c);
    puRam00000001136bc078 = puVar1;
  }
  return;
}



/* Entry: 1054a1d90; end: 1054a1df7; +[Transform2D descriptor] */

void FUN_1054a1d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b000,
                        &PTR____CFConstantStringClassReference_110de23f8,&PTR_DAT_1130daff8,
                        &PTR_DAT_1130db270,5,0x18,0x1c);
    puRam00000001136bc080 = puVar1;
  }
  return;
}



/* Entry: 1054a1df8; end: 1054a1e5f; +[S3AssetPath descriptor] */

void FUN_1054a1df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b050,
                        &PTR____CFConstantStringClassReference_110de2418,&PTR_DAT_1130daff8,
                        &PTR_s_bucket_1130db0d0,2,0x18,0x1c);
    puRam00000001136bc088 = puVar1;
  }
  return;
}



/* Entry: 1054a1e60; end: 1054a1ec7; +[MultiPanelS3AssetPath descriptor] */

void FUN_1054a1e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b0a0,
                        &PTR____CFConstantStringClassReference_110de2438,&PTR_DAT_1130daff8,
                        &PTR_s_bucket_1130db110,2,0x18,0x1c);
    puRam00000001136bc090 = puVar1;
  }
  return;
}



/* Entry: 1054a1ec8; end: 1054a1f2f; +[AnimatedBitmojiData descriptor] */

void FUN_1054a1ec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b0f0,
                        &PTR____CFConstantStringClassReference_110de2458,&PTR_DAT_1130daff8,
                        &PTR_DAT_1130db150,2,8,0x1c);
    puRam00000001136bc098 = puVar1;
  }
  return;
}



/* Entry: 1054a1f30; end: 1054a1fbb; +[LayerData descriptor] */

undefined * FUN_1054a1f30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b140,
                        &PTR____CFConstantStringClassReference_110de2478,&PTR_DAT_1130daff8,
                        &PTR_DAT_1130db3d0,10,0x50,0x1c);
    func_0x00010c229040();
    puRam00000001136bc0a0 = puVar1;
  }
  return puRam00000001136bc0a0;
}



/* Entry: 1054a1fbc; end: 1054a20b3; +[SceneData descriptor] */

void FUN_1054a1fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b190,
                        &PTR____CFConstantStringClassReference_110de21f8,&PTR_DAT_1130daff8,
                        &PTR_DAT_1130db310,6,0x38,0x1c);
    puRam00000001136bc0a8 = puVar1;
  }
  return;
}



/* Entry: 1054a20b4; end: 1054a20bf;  */

bool FUN_1054a20b4(uint param_1)

{
  return param_1 < 0x13;
}



/* Entry: 1054a20c0; end: 1054a2127; +[CharacterMaskData descriptor] */

void FUN_1054a20c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b258,
                        &PTR____CFConstantStringClassReference_110de24b8,&PTR_DAT_1130db710,
                        &PTR_DAT_1130db728,4,0x20,0x1c);
    puRam00000001136bc0b8 = puVar1;
  }
  return;
}



/* Entry: 1054a2128; end: 1054a21ab; +[CharacterMaskData_MaskType descriptor] */

undefined * FUN_1054a2128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b280,
                        &PTR____CFConstantStringClassReference_110de24d8,&PTR_DAT_1130db710,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136bc0c0 = puVar1;
  }
  return puRam00000001136bc0c0;
}



/* Entry: 1054a21ac; end: 1054a221f; -[UNISCBitmojiAvatar initWithUnifiedGrpcService:] */

undefined1 * FUN_1054a21ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8720;
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



/* Entry: 1054a2220; end: 1054a2303; -[UNISCBitmojiAvatar getAvatarWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a2220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b96c0;
  _objc_opt_class(PTR_PTR_1126b96c0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de24f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a2304; end: 1054a23e7; -[UNISCBitmojiAvatar getBasicAvatarDataWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a2304(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b96c8;
  _objc_opt_class(PTR_PTR_1126b96c8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2518,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a23e8; end: 1054a24cb; -[UNISCBitmojiAvatar createAvatarWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a23e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b96d0;
  _objc_opt_class(PTR_PTR_1126b96d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2538,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a24cc; end: 1054a25af; -[UNISCBitmojiAvatar updateAvatarWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a24cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b96d8;
  _objc_opt_class(PTR_PTR_1126b96d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2558,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a25b0; end: 1054a2693; -[UNISCBitmojiAvatar shadowSaveAvatarWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a25b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b96e0;
  _objc_opt_class(PTR_PTR_1126b96e0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2578,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a2694; end: 1054a2777; -[UNISCBitmojiAvatar getStylesWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a2694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b96e8;
  _objc_opt_class(PTR_PTR_1126b96e8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2598,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a2778; end: 1054a285b; -[UNISCBitmojiAvatar changeStyleWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a2778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b96f0;
  _objc_opt_class(PTR_PTR_1126b96f0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de25b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a285c; end: 1054a293f; -[UNISCBitmojiAvatar getSecondaryAvatarWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a285c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b96f8;
  _objc_opt_class(PTR_PTR_1126b96f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de25d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a2940; end: 1054a2a23; -[UNISCBitmojiAvatar getSecondaryAvatarWithGendersWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a2940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b9700;
  _objc_opt_class(PTR_PTR_1126b9700);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de25f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a2a24; end: 1054a2b07; -[UNISCBitmojiAvatar saveSecondaryAvatarWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a2a24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b9708;
  _objc_opt_class(PTR_PTR_1126b9708);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2618,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a2b08; end: 1054a2b13; -[UNISCBitmojiAvatar .cxx_destruct] */

void FUN_1054a2b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054a2b14; end: 1054a2b8f;  */

undefined * FUN_1054a2b14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc0c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de2638,
                        &UNK_10ddb0354,&UNK_10ddb036c,2,FUN_1054a2b90,0);
    do {
      if (puRam00000001136bc0c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc0c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc0c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc0c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc0c8;
}



/* Entry: 1054a2b90; end: 1054a2b9b;  */

bool FUN_1054a2b90(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1054a2b9c; end: 1054a2c17;  */

undefined * FUN_1054a2b9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc0d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de2658,
                        &UNK_10ddb0374,&UNK_10ddb0388,3,FUN_1054a2c18,0);
    do {
      if (puRam00000001136bc0d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc0d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc0d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc0d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc0d0;
}



/* Entry: 1054a2c18; end: 1054a2c33;  */

uint FUN_1054a2c18(uint param_1)

{
  return (uint)(param_1 < 4) & 0xbU >> (ulong)(param_1 & 0xf);
}



/* Entry: 1054a2c34; end: 1054a2c9b; +[SCBitmojiGetAvatarRequest descriptor] */

void FUN_1054a2c34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b370,
                        &PTR____CFConstantStringClassReference_110de2678,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db920,2,0x10,0x1c);
    puRam00000001136bc0d8 = puVar1;
  }
  return;
}



/* Entry: 1054a2c9c; end: 1054a2d03; +[SCBitmojiGetAvatarResponse descriptor] */

void FUN_1054a2c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b3c0,
                        &PTR____CFConstantStringClassReference_110de2698,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db7c0,1,0x10,0x1c);
    puRam00000001136bc0e0 = puVar1;
  }
  return;
}



/* Entry: 1054a2d04; end: 1054a2d6b; +[SCBitmojiGetBasicAvatarDataRequest descriptor] */

void FUN_1054a2d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b410,
                        &PTR____CFConstantStringClassReference_110de26b8,&PTR_DAT_1130db7a8,
                        &PTR_s_avatarId_1130db7e0,1,0x10,0x1c);
    puRam00000001136bc0e8 = puVar1;
  }
  return;
}



/* Entry: 1054a2d6c; end: 1054a2dd3; +[SCBitmojiGetBasicAvatarDataResponse descriptor] */

void FUN_1054a2d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b460,
                        &PTR____CFConstantStringClassReference_110de26d8,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db800,1,0x10,0x1c);
    puRam00000001136bc0f0 = puVar1;
  }
  return;
}



/* Entry: 1054a2dd4; end: 1054a2e3b; +[SCBitmojiCreateAvatarRequest descriptor] */

void FUN_1054a2dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc0f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b988,
                        &PTR____CFConstantStringClassReference_110de26f8,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db960,2,0x18,0x1c);
    puRam00000001136bc0f8 = puVar1;
  }
  return;
}



/* Entry: 1054a2e3c; end: 1054a2ebf; +[SCBitmojiCreateAvatarRequest_TouVersion descriptor] */

undefined * FUN_1054a2e3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b9b0,
                        &PTR____CFConstantStringClassReference_110de2718,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db820,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bc100 = puVar1;
  }
  return puRam00000001136bc100;
}



/* Entry: 1054a2ec0; end: 1054a2f27; +[SCBitmojiCreateAvatarResponse descriptor] */

void FUN_1054a2ec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b500,
                        &PTR____CFConstantStringClassReference_110de2738,&PTR_DAT_1130db7a8,
                        &PTR_s_avatarId_1130db840,1,0x10,0x1c);
    puRam00000001136bc108 = puVar1;
  }
  return;
}



/* Entry: 1054a2f28; end: 1054a2f8f; +[SCBitmojiUpdateAvatarRequest descriptor] */

void FUN_1054a2f28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b550,
                        &PTR____CFConstantStringClassReference_110de2758,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db9a0,2,0x18,0x1c);
    puRam00000001136bc110 = puVar1;
  }
  return;
}



/* Entry: 1054a2f90; end: 1054a2ff7; +[SCBitmojiUpdateAvatarResponse descriptor] */

void FUN_1054a2f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b5a0,
                        &PTR____CFConstantStringClassReference_110de2778,&PTR_DAT_1130db7a8,
                        &PTR_s_avatarId_1130db860,1,0x10,0x1c);
    puRam00000001136bc118 = puVar1;
  }
  return;
}



/* Entry: 1054a2ff8; end: 1054a305f; +[SCBitmojiShadowSaveAvatarRequest descriptor] */

void FUN_1054a2ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b5f0,
                        &PTR____CFConstantStringClassReference_110de2798,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db9e0,2,0x18,0x1c);
    puRam00000001136bc120 = puVar1;
  }
  return;
}



/* Entry: 1054a3060; end: 1054a30c7; +[SCBitmojiShadowSaveAvatarResponse descriptor] */

void FUN_1054a3060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b640,
                        &PTR____CFConstantStringClassReference_110de27b8,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db880,1,0x10,0x1c);
    puRam00000001136bc128 = puVar1;
  }
  return;
}



/* Entry: 1054a30c8; end: 1054a312f; +[SCBitmojiGetStylesRequest descriptor] */

void FUN_1054a30c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b690,
                        &PTR____CFConstantStringClassReference_110de27d8,&PTR_DAT_1130db7a8,0,0,4,
                        0x1c);
    puRam00000001136bc130 = puVar1;
  }
  return;
}



/* Entry: 1054a3130; end: 1054a3197; +[SCBitmojiGetStylesResponse descriptor] */

void FUN_1054a3130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc138 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b6e0,
                        &PTR____CFConstantStringClassReference_110de27f8,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db8a0,1,0x10,0x1c);
    puRam00000001136bc138 = puVar1;
  }
  return;
}



/* Entry: 1054a3198; end: 1054a31ff; +[SCBitmojiChangeStyleRequest descriptor] */

void FUN_1054a3198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b730,
                        &PTR____CFConstantStringClassReference_110de2818,&PTR_DAT_1130db7a8,
                        &PTR_s_style_1130db8c0,1,8,0x1c);
    puRam00000001136bc140 = puVar1;
  }
  return;
}



/* Entry: 1054a3200; end: 1054a3267; +[SCBitmojiChangeStyleResponse descriptor] */

void FUN_1054a3200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b780,
                        &PTR____CFConstantStringClassReference_110de2838,&PTR_DAT_1130db7a8,
                        &PTR_s_result_1130dba20,2,0x10,0x1c);
    puRam00000001136bc148 = puVar1;
  }
  return;
}



/* Entry: 1054a3268; end: 1054a32cf; +[SCBitmojiGetSecondaryAvatarRequest descriptor] */

void FUN_1054a3268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b7d0,
                        &PTR____CFConstantStringClassReference_110de2858,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130dba60,2,8,0x1c);
    puRam00000001136bc150 = puVar1;
  }
  return;
}



/* Entry: 1054a32d0; end: 1054a3337; +[SCBitmojiGetSecondaryAvatarResponse descriptor] */

void FUN_1054a32d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b820,
                        &PTR____CFConstantStringClassReference_110de2878,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130db8e0,1,0x10,0x1c);
    puRam00000001136bc158 = puVar1;
  }
  return;
}



/* Entry: 1054a3338; end: 1054a339f; +[SCBitmojiGetSecondaryAvatarWithGendersRequest descriptor] */

void FUN_1054a3338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b870,
                        &PTR____CFConstantStringClassReference_110de2898,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130dbb20,3,0x10,0x1c);
    puRam00000001136bc160 = puVar1;
  }
  return;
}



/* Entry: 1054a33a0; end: 1054a3407; +[SCBitmojiGetSecondaryAvatarWithGendersResponse descriptor] */

void FUN_1054a33a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b8c0,
                        &PTR____CFConstantStringClassReference_110de28b8,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130dbaa0,2,0x10,0x1c);
    puRam00000001136bc168 = puVar1;
  }
  return;
}



/* Entry: 1054a3408; end: 1054a346f; +[SCBitmojiSaveSecondaryAvatarRequest descriptor] */

void FUN_1054a3408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b910,
                        &PTR____CFConstantStringClassReference_110de28d8,&PTR_DAT_1130db7a8,
                        &PTR_DAT_1130dbae0,2,0x10,0x1c);
    puRam00000001136bc170 = puVar1;
  }
  return;
}



/* Entry: 1054a3470; end: 1054a3553; +[SCBitmojiSaveSecondaryAvatarResponse descriptor] */

void FUN_1054a3470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3b960,
                        &PTR____CFConstantStringClassReference_110de28f8,&PTR_DAT_1130db7a8,
                        &PTR_s_avatarId_1130db900,1,0x10,0x1c);
    puRam00000001136bc178 = puVar1;
  }
  return;
}



/* Entry: 1054a3554; end: 1054a355f;  */

bool FUN_1054a3554(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1054a3560; end: 1054a35db;  */

undefined * FUN_1054a3560(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc188 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de2938,
                        &UNK_10ddb03b4,&UNK_10ddb03f8,5,FUN_1054a35dc,0);
    do {
      if (puRam00000001136bc188 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc188;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc188,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc188 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc188;
}



/* Entry: 1054a35dc; end: 1054a35e7;  */

bool FUN_1054a35dc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1054a35e8; end: 1054a3663;  */

undefined * FUN_1054a35e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc190 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de2958,
                        &UNK_10ddb040c,&UNK_10ddb0430,4,FUN_1054a3664,0);
    do {
      if (puRam00000001136bc190 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc190;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc190,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc190 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc190;
}



/* Entry: 1054a3664; end: 1054a3673;  */

bool FUN_1054a3664(uint param_1)

{
  return (param_1 & 0xfffffffa) == 0;
}



/* Entry: 1054a3674; end: 1054a36ef;  */

undefined * FUN_1054a3674(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc198 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de2978,
                        &UNK_10ddb0440,&UNK_10ddb0548,0x12,FUN_1054a36f0,0);
    do {
      if (puRam00000001136bc198 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc198;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc198,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc198 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc198;
}



/* Entry: 1054a36f0; end: 1054a370b;  */

uint FUN_1054a36f0(uint param_1)

{
  return (uint)(param_1 < 0x13) & 0x7ffafU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 1054a370c; end: 1054a3787;  */

undefined * FUN_1054a370c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc1a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de2998,
                        &UNK_10ddb0590,&UNK_10ddb05a8,3,FUN_1054a3788,0);
    do {
      if (puRam00000001136bc1a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc1a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc1a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc1a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc1a0;
}



/* Entry: 1054a3788; end: 1054a37a3;  */

uint FUN_1054a3788(uint param_1)

{
  return (uint)(param_1 < 4) & 0xbU >> (ulong)(param_1 & 0xf);
}



/* Entry: 1054a37a4; end: 1054a380b; +[PositionScaleTransform descriptor] */

void FUN_1054a37a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc1a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ba50,
                        &PTR____CFConstantStringClassReference_110de29b8,&PTR_DAT_1130dbb88,
                        &PTR_DAT_1130dbd80,4,0x28,0x1c);
    puRam00000001136bc1a8 = puVar1;
  }
  return;
}



/* Entry: 1054a380c; end: 1054a3873; +[HeadPieceMod descriptor] */

void FUN_1054a380c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc1b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3baa0,
                        &PTR____CFConstantStringClassReference_110de29d8,&PTR_DAT_1130dbb88,
                        &PTR_DAT_1130dbc20,2,0x18,0x1c);
    puRam00000001136bc1b0 = puVar1;
  }
  return;
}



/* Entry: 1054a3874; end: 1054a38db; +[CharacterData descriptor] */

void FUN_1054a3874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc1b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3baf0,
                        &PTR____CFConstantStringClassReference_110de29f8,&PTR_DAT_1130dbb88,
                        &PTR_DAT_1130dc1c0,0x13,0x80,0x1c);
    puRam00000001136bc1b8 = puVar1;
  }
  return;
}



/* Entry: 1054a38dc; end: 1054a398f; +[CharacterData_BodyType descriptor] */

undefined * FUN_1054a38dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc1c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3bb40,
                        &PTR____CFConstantStringClassReference_110de2a18,&PTR_DAT_1130dbb88,
                        &PTR_s_value_1130dbba0,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136bc1c0 = puVar1;
  }
  return puRam00000001136bc1c0;
}



/* Entry: 1054a3990; end: 1054a3a0b; +[CharacterData_BreastType descriptor] */

undefined * FUN_1054a3990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc1c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3bb90,
                        &PTR____CFConstantStringClassReference_110de2a38,&PTR_DAT_1130dbb88,
                        &PTR_s_value_1130dbbc0,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136bc1c8 = puVar1;
  }
  return puRam00000001136bc1c8;
}



/* Entry: 1054a3a0c; end: 1054a3a87; +[CharacterData_Proportion descriptor] */

undefined * FUN_1054a3a0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc1d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3bbe0,
                        &PTR____CFConstantStringClassReference_110de2a58,&PTR_DAT_1130dbb88,
                        &PTR_s_value_1130dbbe0,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136bc1d0 = puVar1;
  }
  return puRam00000001136bc1d0;
}


