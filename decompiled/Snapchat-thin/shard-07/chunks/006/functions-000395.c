/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10572ae0c; end: 10572ae2f;  */

undefined8 FUN_10572ae0c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10572ae30; end: 10572ae8f;  */

void FUN_10572ae30(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_10572b018(FUN_10572afbc);
  _objc_retainBlock(&puStack_48);
  func_0x00010572b038();
  func_0x00010572b050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10572ae90; end: 10572aeb7;  */

undefined8 FUN_10572ae90(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10572aeb8; end: 10572af17;  */

void FUN_10572aeb8(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_10572b018(0x10572afe8);
  _objc_retainBlock(&puStack_48);
  func_0x00010572b038();
  func_0x00010572b050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10572af18; end: 10572af5f; -[SCCSnapPlaybackViewSnapPlaybackViewContext initWithRenderSize:] */

void FUN_10572af18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e9fd0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10572af60; end: 10572af73; +[SCCSnapPlaybackViewSnapPlaybackViewContext valdiMarshallableObjectDescriptor] */

void FUN_10572af60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108adbe0;
  param_1[1] = &PTR_DAT_1108adc70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10572af74; end: 10572afa7; -[SCCSnapPlaybackViewSnapPlaybackViewModel init] */

void FUN_10572af74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e9fd8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10572afa8; end: 10572afbb; +[SCCSnapPlaybackViewSnapPlaybackViewModel valdiMarshallableObjectDescriptor] */

void FUN_10572afa8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108adca0;
  param_1[1] = &PTR_DAT_1108add30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10572afbc; end: 10572b017;  */

void FUN_10572afbc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10572b018; end: 10572b057;  */

void FUN_10572b018(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10572b058; end: 10572b377; -[SCUberAvatarContainer initWithUberAvatarConfiguration:viewOptions:avatarDownloadInfo:avatarUIOptimizations:grapheneRegistry:bitmojiImageFetcher:imageDownloader:usernameProvider:userId:delegate:circumstanceEngine:] */

undefined8 *
FUN_10572b058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e9fe0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1a08;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[7];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200(puVar1[0xc]);
    _objc_release(uVar2);
    func_0x00010c231b60();
    func_0x00010c1d5da0(puVar1[0xc]);
    func_0x00010c106c00(puVar1[4]);
    func_0x00010c1e0040(puVar1[0xc]);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1[0xc]);
    func_0x00010beae740(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 10572b378; end: 10572b65f; -[SCUberAvatarContainer _setupObservables] */

void FUN_10572b378(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10572b660;
  puStack_78 = &UNK_11084eff0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf870a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ec0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10572b6d0;
  puStack_a0 = &UNK_1108add40;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf870a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ec0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10572b660; end: 10572b6cf;  */

void FUN_10572b660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee4f20(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572b6d0; end: 10572b75f;  */

void FUN_10572b6d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee46a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572b760; end: 10572b787; -[SCUberAvatarContainer view] */

void FUN_10572b760(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10572b788; end: 10572b7c7; -[SCUberAvatarContainer _updateWithUsername:] */

void FUN_10572b788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be88290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__refreshAvatarFromSource__11257fa40,
             &PTR____CFConstantStringClassReference_110daccd8);
  return;
}



/* Entry: 10572b7c8; end: 10572b807; -[SCUberAvatarContainer _updateWithConfiguration:] */

void FUN_10572b7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be88290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__refreshAvatarFromSource__11257fa40,
             &PTR____CFConstantStringClassReference_110df9f78);
  return;
}



/* Entry: 10572b808; end: 10572bb0f; -[SCUberAvatarContainer _refreshAvatarFromSource:] */

void FUN_10572b808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_10572bb10;
    uStack_60 = 0x10572bb20;
    uStack_58 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10572bb10;
    uStack_90 = 0x10572bb20;
    uStack_88 = 0;
    _CACurrentMediaTime();
    func_0x00010c0bcba0(*(undefined8 *)(param_1 + 0x68));
    _CACurrentMediaTime();
    puVar1 = PTR_PTR_1126bd8c8;
    func_0x00010bf46920(PTR_PTR_1126bd8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf12e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf12e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x60));
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10572bb10; end: 10572bb27;  */

void FUN_10572bb10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10572bb28; end: 10572bda3;  */

void FUN_10572bb28(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  uVar1 = param_2;
  FUN_10572ea00(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_10572fbd8(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0d0400(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105730028();
  _objc_release(uVar7);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10572bb10;
  uStack_70 = 0x10572bb20;
  uStack_68 = 0;
  uVar7 = param_2;
  func_0x00010bf13e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c01a0();
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126b4600;
  _objc_alloc(PTR_PTR_1126b4600);
  func_0x00010bff7e80();
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_5;
    FUN_10572d388(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b4608;
  _objc_alloc();
  func_0x00010bff7b20();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined ***)(lVar6 + 0x28) = &PTR____CFConstantStringClassReference_110dc7978;
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_2);
  return;
}



/* Entry: 10572bda4; end: 10572be33;  */

void FUN_10572bda4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b45f8;
  func_0x00010c246860(PTR_PTR_1126b45f8,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10572be34; end: 10572c03b;  */

void FUN_10572be34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  FUN_10573082c(param_2,*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x30),
                *(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_1057313bc(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0d0400(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105731aa4();
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126b4600;
  _objc_alloc(PTR_PTR_1126b4600);
  func_0x00010bff7e80();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10572bb10;
  uStack_60 = 0x10572bb20;
  uStack_58 = 0;
  uVar6 = param_2;
  func_0x00010bf13e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0180();
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126b4608;
  _objc_alloc();
  func_0x00010bff7b20();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar4;
  _objc_release(uVar6);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined ***)(lVar5 + 0x28) = &PTR____CFConstantStringClassReference_110df9f98;
  _objc_release(uVar6);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10572c03c; end: 10572c087;  */

void FUN_10572c03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b45f8;
  func_0x00010c246860(PTR_PTR_1126b45f8,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10572c088; end: 10572c193;  */

void FUN_10572c088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x000107d227d0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf4f6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x000107d0d3c4(param_2,param_3,param_4,param_5,uVar1,param_6,1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined ***)(lVar4 + 0x28) = &PTR____CFConstantStringClassReference_110dcadf8;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10572c194; end: 10572c347;  */

void FUN_10572c194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b4860;
  _objc_retain(param_3);
  func_0x00010bfad760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x000108fec800(puVar1,param_3,0,0,0,0,1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined ***)(lVar4 + 0x28) = &PTR____CFConstantStringClassReference_110df9fb8;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10572c348; end: 10572c3a7;  */

void FUN_10572c348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000108fecbc8(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110df9ff8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572c3a8; end: 10572c443; -[SCUberAvatarContainer _updateWithViewOptions:] */

void FUN_10572c3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bf13d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + 0x60));
  _objc_release(uVar1);
  func_0x00010bf4c400(param_7);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010c181e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x60),
             PTR_s_setContentEdgeInsets__11263e1b0);
  return;
}



/* Entry: 10572c444; end: 10572c61f; -[SCUberAvatarContainer handleTap:] */

void FUN_10572c444(long param_1,undefined8 param_2)

{
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000108ffe49c(0x3ff19999a0000000,*(undefined8 *)(param_1 + 0x60));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10572c540;
  puStack_30 = &UNK_1108adec0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10572c580;
  puStack_58 = &UNK_1108adef0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10572c5c0;
  puStack_80 = &UNK_1108adf20;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10572c5f0;
  puStack_a8 = &UNK_1108adf50;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10572c624;
  puStack_d0 = &UNK_1108adfc0;
  lStack_c8 = param_1;
  lStack_a0 = param_1;
  lStack_78 = param_1;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0bcba0(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_48,&puStack_70,&puStack_98,
                      &puStack_c0,&PTR___NSConcreteGlobalBlock_1108adfa0,&puStack_e8);
  return;
}



/* Entry: 10572c620; end: 10572c623;  */

void FUN_10572c620(void)

{
  return;
}



/* Entry: 10572c624; end: 10572c653;  */

void FUN_10572c624(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7ce60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10572c654; end: 10572c71b; -[SCUberAvatarContainer .cxx_destruct] */

void FUN_10572c654(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 10572c71c; end: 10572ce1f; -[SCUberAvatarEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572c71c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
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
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  
  lVar28 = (long)_DAT_1127289a4;
  lVar1 = param_2 + lVar28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126bd8d8;
    _objc_alloc();
    lVar1 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010bf13300();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c29dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf88ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c0ec160();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2 + lVar28;
    _objc_loadWeakRetained();
    func_0x00010bf132c0();
    lVar14 = param_2 + _DAT_1127289ac;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_2 + _DAT_1127289b0;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_2 + _DAT_1127289b4;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2 + _DAT_1127289b8;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_2 + _DAT_1127289bc;
    _objc_loadWeakRetained();
    lVar27 = lVar25;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ec0(param_1);
    _objc_release(lVar27);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
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
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    param_2 = param_2 + lVar28;
    _objc_loadWeakRetained(param_2);
    lVar1 = param_2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar1);
    _objc_release(param_2);
  }
  else {
    lVar1 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = param_2 + lVar28;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf13300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        puVar4 = PTR_PTR_1126ae810;
        _objc_opt_new();
        uVar26 = *(undefined8 *)(param_2 + _DAT_1127289c4);
        *(undefined **)(param_2 + _DAT_1127289c4) = puVar4;
        _objc_release(uVar26);
        lVar28 = param_2 + lVar28;
        _objc_loadWeakRetained(lVar28);
        lVar1 = lVar28;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        _objc_storeWeak(param_2 + _DAT_1127289c8,lVar1);
        _objc_release(lVar1);
        _objc_release(lVar28);
                    /* WARNING: Could not recover jumptable at 0x00010be3b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__initializeAvatarView_11256c610);
        return;
      }
      return;
    }
    puVar4 = PTR_PTR_1126bd8d0;
    _objc_alloc();
    lVar1 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar25 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c29dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar6 = lVar7;
    func_0x00010bf88ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar8 = lVar9;
    func_0x00010c0ec160();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2 + _DAT_1127289a8;
    _objc_loadWeakRetained();
    lVar10 = lVar11;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2 + _DAT_1127289ac;
    _objc_loadWeakRetained();
    lVar12 = lVar13;
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_2 + _DAT_1127289b0;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_2 + _DAT_1127289b4;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_2 + _DAT_1127289b8;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar19;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2 + lVar28;
    _objc_loadWeakRetained();
    lVar22 = lVar20;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_2 + _DAT_1127289bc;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ee0();
    lVar27 = (long)_DAT_1127289c0;
    uVar26 = *(undefined8 *)(param_2 + lVar27);
    *(undefined **)(param_2 + lVar27) = puVar4;
    _objc_release(uVar26);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar20);
    _objc_release(lVar21);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar12);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar25);
    _objc_release(lVar1);
    puVar4 = (undefined *)(param_2 + lVar28);
    _objc_loadWeakRetained(puVar4);
    puVar3 = puVar4;
    func_0x00010c29c060();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_2 + lVar27);
    func_0x00010c29bf00(uVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ca20(puVar3);
    _objc_release(uVar26);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10572ce20; end: 10572d16f; -[SCUberAvatarEntryPoint _initializeAvatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572ce20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126b1a08;
  _objc_opt_new();
  lVar3 = param_1 + _DAT_1127289b0;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(puVar2,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c18b5e0(puVar2,param_2,param_1);
  lVar9 = (long)_DAT_1127289a4;
  lVar3 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0ec160();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c231b60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar1 = 3;
  if ((int)lVar5 == 0) {
    uVar1 = 1;
  }
  func_0x00010c1d5da0(puVar2,param_2,uVar1);
  lVar3 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0ec160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106c00();
  func_0x00010c1e0040(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf13300();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0e0ec0(lVar5,param_2,lVar6,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10572d170;
  puStack_80 = &UNK_11088b6c8;
  _objc_retain(puVar2);
  lVar8 = lVar7;
  puStack_78 = puVar2;
  func_0x00010c25ff60(lVar7,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29dfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0e0ec0(lVar5,param_2,lVar6,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10572d1e0;
  puStack_a8 = &UNK_1108adff0;
  puStack_a0 = puVar2;
  _objc_retain(puVar2);
  lVar8 = lVar7;
  func_0x00010c25ff60(lVar7,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ca20();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puStack_a0);
  _objc_release(puStack_78);
  _objc_release(puVar2);
  return;
}



/* Entry: 10572d170; end: 10572d1df;  */

void FUN_10572d170(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b4608;
  _objc_opt_class(PTR_PTR_1126b4608);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10572d1e0; end: 10572d27b;  */

void FUN_10572d1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf13d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + 0x20));
  _objc_release(uVar1);
  func_0x00010bf4c400(param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c181e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20),
             PTR_s_setContentEdgeInsets__11263e1b0);
  return;
}



/* Entry: 10572d27c; end: 10572d2af; -[SCUberAvatarEntryPoint handleTapOnBitmojiFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572d27c(long param_1)

{
  param_1 = param_1 + _DAT_1127289c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7ce60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572d2b0; end: 10572d2e3; -[SCUberAvatarEntryPoint handleTapOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572d2b0(long param_1)

{
  param_1 = param_1 + _DAT_1127289c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572d2e4; end: 10572d2e7; -[SCUberAvatarEntryPoint handleLongPressOnStoryIconFromAvatarView:] */

void FUN_10572d2e4(void)

{
  return;
}



/* Entry: 10572d2e8; end: 10572d387; -[SCUberAvatarEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572d2e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127289a4);
  _objc_destroyWeak(param_1 + _DAT_1127289b4);
  _objc_destroyWeak(param_1 + _DAT_1127289b0);
  _objc_destroyWeak(param_1 + _DAT_1127289a8);
  _objc_destroyWeak(param_1 + _DAT_1127289ac);
  _objc_destroyWeak(param_1 + _DAT_1127289bc);
  _objc_destroyWeak(param_1 + _DAT_1127289b8);
  _objc_storeStrong(param_1 + _DAT_1127289c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127289c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127289c4,0);
  return;
}



/* Entry: 10572d388; end: 10572d417;  */

void FUN_10572d388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bd8e0;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9340(0x4000000000000000,0x3ff8000000000000,puVar1,param_2,puVar2,param_1,0,0);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10572d418; end: 10572d6d7; -[SCUberAvatarViewController initWithUberAvatarConfiguration:avatarViewModel:viewOptions:avatarDownloadInfo:avatarUIOptimizations:avatarViewAnimationScale:bitmojiImageFetcher:imageDownloader:usernameProvider:userId:delegate:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10572d418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
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
  puStack_78 = PTR_PTR_1126e9fe8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_1127289cc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127289d0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127289d4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127289d8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127289dc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127289e0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127289e4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127289e8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127289ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127289ec) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127289f0) = param_1;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127289f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127289f4) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127289f8,param_13);
    lVar5 = (long)_DAT_1127289fc;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
  }
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
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10572d6d8; end: 10572d7cf; -[SCUberAvatarViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572d6d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e9fe8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  puVar1 = PTR_PTR_1126b1a08;
  _objc_opt_new();
  lVar4 = (long)_DAT_112728a00;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127289e4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar2);
  lVar3 = (long)_DAT_1127289dc;
  func_0x00010c231b60();
  func_0x00010c1d5da0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c106c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1e0040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1682c0(*(undefined8 *)(param_1 + _DAT_1127289f0),*(undefined8 *)(param_1 + lVar4));
  func_0x00010c222380(param_1);
  return;
}



/* Entry: 10572d7d0; end: 10572dbf3; -[SCUberAvatarViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572d7d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  
  puStack_80 = PTR_PTR_1126e9fe8;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  _objc_initWeak(auStack_90,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar11 = (long)_DAT_1127289cc;
  if (*(long *)(param_1 + lVar11) == 0) {
    lVar11 = *(long *)(param_1 + _DAT_1127289d0);
    if (lVar11 == 0) goto LAB_10572dabc;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar11;
    func_0x00010c0e0ec0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10572dcac;
    puStack_f0 = &UNK_1108485e8;
    puVar10 = auStack_e8;
    _objc_copyWeak(puVar10,auStack_90);
    lVar9 = lVar8;
    func_0x00010c25ff60(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar11);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127289e8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10572dbf4;
    puStack_a0 = &UNK_11084eff0;
    puVar10 = auStack_98;
    _objc_copyWeak(puVar10,auStack_90);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf870a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0e0ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10572dc64;
    puStack_c8 = &UNK_1108add40;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_c0);
  }
  _objc_destroyWeak(puVar10);
LAB_10572dabc:
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127289d4);
  func_0x00010bf870a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ec0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_110,auStack_90);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_90);
  return;
}



/* Entry: 10572dbf4; end: 10572dc63;  */

void FUN_10572dbf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee4f20(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572dc64; end: 10572dcab;  */

void FUN_10572dc64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee46a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572dcac; end: 10572dd2b;  */

void FUN_10572dcac(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b4608;
  _objc_opt_class(PTR_PTR_1126b4608);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4580();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10572dd2c; end: 10572dd73;  */

void FUN_10572dd2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572dd74; end: 10572ddb3; -[SCUberAvatarViewController _updateWithUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572dd74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728a04);
  *(undefined8 *)(param_1 + _DAT_112728a04) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be88270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshAvatar_11257fa38);
  return;
}



/* Entry: 10572ddb4; end: 10572ddf3; -[SCUberAvatarViewController _updateWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572ddb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728a08);
  *(undefined8 *)(param_1 + _DAT_112728a08) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be88270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshAvatar_11257fa38);
  return;
}



/* Entry: 10572ddf4; end: 10572df73; -[SCUberAvatarViewController _refreshAvatar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572ddf4(long param_1,undefined8 param_2)

{
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_138 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10572df74;
  uStack_30 = 0x10572df84;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10572df8c;
  puStack_68 = &UNK_1108ae020;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10572e28c;
  puStack_98 = &UNK_1108ae050;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10572e51c;
  puStack_c8 = &UNK_1108ae080;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10572e614;
  puStack_f0 = &UNK_1108ae0b0;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x10572e6e8;
  puStack_118 = &UNK_1108ae0e0;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_10572e790;
  puStack_140 = &UNK_1108ae110;
  puStack_110 = puStack_138;
  puStack_e8 = puStack_138;
  lStack_c0 = param_1;
  puStack_b8 = puStack_138;
  lStack_90 = param_1;
  puStack_88 = puStack_138;
  lStack_60 = param_1;
  puStack_58 = puStack_138;
  puStack_48 = puStack_138;
  func_0x00010c0bcba0(*(undefined8 *)(param_1 + _DAT_112728a08),param_2,&puStack_80,&puStack_b0,
                      &puStack_e0,&puStack_108,&puStack_130,&puStack_158);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112728a00));
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  return;
}



/* Entry: 10572df74; end: 10572df8b;  */

void FUN_10572df74(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10572df8c; end: 10572e1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572df8c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  lVar6 = (long)_DAT_1127289d8;
  uVar1 = param_2;
  FUN_10572ea00(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6),
                *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127289e0));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_10572fbd8(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0d0400(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105730028();
  _objc_release(uVar7);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10572df74;
  uStack_70 = 0x10572df84;
  uStack_68 = 0;
  uVar7 = param_2;
  func_0x00010bf13e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c01a0();
  _objc_release(uVar7);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_5;
    FUN_10572d388(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b4600;
  _objc_alloc(PTR_PTR_1126b4600);
  func_0x00010bff7e80();
  puVar4 = PTR_PTR_1126b4608;
  _objc_alloc();
  func_0x00010bff7b20();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar7);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_2);
  return;
}



/* Entry: 10572e1fc; end: 10572e28b;  */

void FUN_10572e1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b45f8;
  func_0x00010c246860(PTR_PTR_1126b45f8,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10572e28c; end: 10572e4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572e28c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar8 = (long)_DAT_1127289d8;
  uVar1 = param_2;
  FUN_10573082c(param_2,*(undefined8 *)(lVar6 + lVar8),*(undefined8 *)(lVar6 + _DAT_1127289e0),
                *(undefined8 *)(lVar6 + _DAT_1127289ec),*(undefined8 *)(lVar6 + _DAT_112728a04));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_1057313bc(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0d0400(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105731aa4();
  _objc_release(uVar3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_10572d388(0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b4600;
  _objc_alloc(PTR_PTR_1126b4600);
  func_0x00010bff7e80();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10572df74;
  uStack_70 = 0x10572df84;
  uStack_68 = 0;
  uVar7 = param_2;
  func_0x00010bf13e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0180();
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126b4608;
  _objc_alloc();
  func_0x00010bff7b20();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar5;
  _objc_release(uVar7);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10572e4d0; end: 10572e51b;  */

void FUN_10572e4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b45f8;
  func_0x00010c246860(PTR_PTR_1126b45f8,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10572e51c; end: 10572e613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572e51c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x000107d227d0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127289d8);
  func_0x00010bf4f6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x000107d0d3c4(param_2,param_3,param_4,param_5,uVar1,param_6,1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10572e614; end: 10572e78f;  */

void FUN_10572e614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b4860;
  _objc_retain(param_3);
  func_0x00010bfad760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x000108fec800(puVar1,param_3,0,0,0,0,1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10572e790; end: 10572e7d3;  */

void FUN_10572e790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000108fecbc8(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572e7d4; end: 10572e877; -[SCUberAvatarViewController _updateWithViewOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572e7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bf13d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112728a00;
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar2));
  _objc_release(uVar1);
  func_0x00010bf4c400(param_7);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010c181e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar2),
             PTR_s_setContentEdgeInsets__11263e1b0);
  return;
}



/* Entry: 10572e878; end: 10572e887; -[SCUberAvatarViewController _updateWithAvatarViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572e878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112728a00),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 10572e888; end: 10572e8bb; -[SCUberAvatarViewController handleTapOnBitmojiFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572e888(long param_1)

{
  param_1 = param_1 + _DAT_1127289f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7ce60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572e8bc; end: 10572e8ef; -[SCUberAvatarViewController handleTapOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572e8bc(long param_1)

{
  param_1 = param_1 + _DAT_1127289f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572e8f0; end: 10572e8f3; -[SCUberAvatarViewController handleLongPressOnStoryIconFromAvatarView:] */

void FUN_10572e8f0(void)

{
  return;
}



/* Entry: 10572e8f4; end: 10572e9ff; -[SCUberAvatarViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572e8f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127289f4,0);
  _objc_storeStrong(param_1 + _DAT_112728a04,0);
  _objc_storeStrong(param_1 + _DAT_112728a08,0);
  _objc_storeStrong(param_1 + _DAT_112728a00,0);
  _objc_storeStrong(param_1 + _DAT_1127289fc,0);
  _objc_destroyWeak(param_1 + _DAT_1127289f8);
  _objc_storeStrong(param_1 + _DAT_1127289ec,0);
  _objc_storeStrong(param_1 + _DAT_1127289e8,0);
  _objc_storeStrong(param_1 + _DAT_1127289e4,0);
  _objc_storeStrong(param_1 + _DAT_1127289e0,0);
  _objc_storeStrong(param_1 + _DAT_1127289dc,0);
  _objc_storeStrong(param_1 + _DAT_1127289d8,0);
  _objc_storeStrong(param_1 + _DAT_1127289d4,0);
  _objc_storeStrong(param_1 + _DAT_1127289d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127289cc,0);
  return;
}



/* Entry: 10572ea00; end: 10572ec0b;  */

void FUN_10572ea00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10572ec0c;
  uStack_70 = 0x10572ec1c;
  uStack_68 = 0;
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0c00a0(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10572ec0c; end: 10572ec23;  */

void FUN_10572ec0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10572ec24; end: 10572edcf;  */

void FUN_10572ec24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar12;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_2);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010901cdb0(param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar5;
  func_0x00010bf1c0a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d0400(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa0480(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09ce80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  FUN_10572edd0(uVar2,uVar4,uVar6,uVar11,uVar7,uVar8,uVar9,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar11 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = uVar10;
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10572edd0; end: 10572f787;  */

void FUN_10572edd0(undefined **param_1,undefined **param_2,ulong param_3,int param_4,
                  undefined8 param_5,undefined *param_6,long param_7,undefined **param_8,
                  undefined8 param_9)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == 0) {
    uVar8 = 0;
  }
  else {
    _objc_retain(param_5);
    ppuStack_1b0 = &puStack_1b8;
    puStack_1b8 = (undefined *)0x0;
    uStack_1a8 = 0x2020000000;
    puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffffffffff00);
    puStack_f0 = puVar9;
    ppuStack_e8 = (undefined **)0xc2000000;
    pcStack_e0 = (code *)0x105730114;
    pcStack_d8 = (code *)&UNK_1108ae1d0;
    puStack_138 = puVar9;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x105730128;
    puStack_120 = &UNK_110847658;
    ppuStack_118 = ppuStack_1b0;
    ppuStack_d0 = ppuStack_1b0;
    func_0x00010c0bcb20(param_5);
    uVar8 = *(undefined1 *)(ppuStack_1b0 + 3);
    __Block_object_dispose(&puStack_1b8,8);
    _objc_release(param_5);
  }
  ppuVar2 = param_8;
  func_0x00010bf4f6c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_8;
  func_0x00010bf2db20();
  ppuVar12 = param_8;
  func_0x00010bf0e960();
  _objc_retain(param_5);
  _objc_retain(ppuVar2);
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10572ec0c;
  uStack_88 = 0x10572ec1c;
  puVar4 = PTR_PTR_1126b4858;
  ppuStack_a0 = &puStack_a8;
  func_0x00010bf1c100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_e8 = (undefined **)0xc2000000;
  pcStack_e0 = FUN_10573013c;
  pcStack_d8 = (code *)&UNK_1108ae200;
  ppuStack_c8 = &puStack_a8;
  puStack_80 = puVar4;
  _objc_retain(ppuVar2);
  uVar11 = SUB84(ppuVar12,0);
  uVar1 = SUB81(ppuVar3,0);
  uStack_c0._0_5_ = CONCAT14(uVar1,uVar11);
  uStack_c0 = CONCAT26(uStack_c0._6_2_,CONCAT15(uVar8,(undefined5)uStack_c0)) & 0xffff01ffffffffff;
  puStack_138 = puVar9;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105730198;
  puStack_120 = &UNK_1108ae230;
  ppuStack_110 = &puStack_a8;
  ppuStack_d0 = ppuVar2;
  _objc_retain(ppuVar2);
  uStack_108._0_5_ = CONCAT14(uVar1,uVar11);
  puStack_1b8 = puVar9;
  ppuStack_1b0 = (undefined **)0xc2000000;
  uStack_1a8 = 0x1057301f4;
  puStack_1a0 = &UNK_1108ae260;
  ppuStack_190 = &puStack_a8;
  ppuStack_118 = ppuVar2;
  _objc_retain(ppuVar2);
  uStack_188._0_5_ = CONCAT14(uVar1,uVar11);
  puStack_170 = puVar9;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x10573024c;
  puStack_158 = &UNK_1108ae230;
  ppuStack_198 = ppuVar2;
  ppuStack_148 = &puStack_a8;
  _objc_retain(ppuVar2);
  uStack_140._0_5_ = CONCAT14(uVar1,uVar11);
  ppuStack_150 = ppuVar2;
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar2);
  func_0x00010c0bcb20(param_5);
  ppuVar12 = (undefined **)ppuStack_a0[5];
  _objc_retain(ppuVar12);
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_150);
  _objc_release(ppuStack_198);
  _objc_release(ppuStack_118);
  _objc_release(ppuStack_d0);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(ppuVar2);
  _objc_release(param_5);
  puVar4 = param_6;
  FUN_10572fa04(param_6,param_5,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(puVar4);
  _objc_retain(ppuVar12);
  ppuVar3 = param_1;
  func_0x00010c0720c0();
  puVar9 = PTR_PTR_1126b4860;
  if ((int)ppuVar3 == 0) {
    ppuVar3 = param_2;
    func_0x00010c08fa60();
    if (ppuVar3 == (undefined **)0x0) {
      puVar9 = puVar4;
      func_0x000108feaf80(puVar4,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_a8 = (undefined *)0x0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_10572ec0c;
      uStack_88 = 0x10572ec1c;
      puVar10 = PTR_PTR_1126b4860;
      ppuStack_a0 = &puStack_a8;
      func_0x00010bf1c1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_e8 = (undefined **)0xc2000000;
      pcStack_e0 = (code *)0x105730358;
      pcStack_d8 = (code *)&UNK_1108ae2c0;
      ppuStack_b0 = &puStack_a8;
      puStack_80 = puVar10;
      _objc_retain(param_1);
      ppuStack_d0 = param_1;
      _objc_retain(param_2);
      ppuStack_c8 = param_2;
      _objc_retain(param_3);
      uStack_c0 = param_3;
      _objc_retain(ppuVar12);
      puStack_138 = puVar9;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x1057303a4;
      puStack_120 = &UNK_1108ae2f0;
      ppuStack_f8 = &puStack_a8;
      ppuStack_b8 = ppuVar12;
      _objc_retain(param_1);
      ppuStack_118 = param_1;
      _objc_retain(param_2);
      ppuStack_110 = param_2;
      _objc_retain(param_3);
      uStack_108 = param_3;
      _objc_retain(ppuVar12);
      puStack_170 = puVar9;
      uStack_168 = 0xc2000000;
      uStack_160 = 0x1057303f0;
      puStack_158 = &UNK_110850128;
      uStack_140 = &puStack_a8;
      ppuStack_100 = ppuVar12;
      _objc_retain(param_2);
      ppuStack_150 = param_2;
      _objc_retain(ppuVar12);
      puStack_1b8 = puVar9;
      ppuStack_1b0 = (undefined **)0xc2000000;
      uStack_1a8 = 0x105730440;
      puStack_1a0 = &UNK_1108ae2f0;
      ppuStack_178 = &puStack_a8;
      ppuStack_148 = ppuVar12;
      _objc_retain(param_1);
      ppuStack_198 = param_1;
      _objc_retain(param_2);
      ppuStack_190 = param_2;
      _objc_retain(param_3);
      uStack_188 = param_3;
      _objc_retain(ppuVar12);
      ppuStack_180 = ppuVar12;
      _objc_retain(param_2);
      _objc_retain(ppuVar12);
      _objc_retain(param_2);
      _objc_retain(ppuVar12);
      func_0x00010c0bcb20(param_5);
      puVar9 = ppuStack_a0[5];
      _objc_retain(puVar9);
      _objc_release(ppuVar12);
      _objc_release(param_2);
      _objc_release(ppuVar12);
      _objc_release(param_2);
      _objc_release(ppuStack_180);
      _objc_release(uStack_188);
      _objc_release(ppuStack_190);
      _objc_release(ppuStack_198);
      _objc_release(ppuStack_148);
      _objc_release(ppuStack_150);
      _objc_release(ppuStack_100);
      _objc_release(uStack_108);
      _objc_release(ppuStack_110);
      _objc_release(ppuStack_118);
      _objc_release(ppuStack_b8);
      _objc_release(uStack_c0);
      _objc_release(ppuStack_c8);
      _objc_release(ppuStack_d0);
      __Block_object_dispose(&puStack_a8,8);
      _objc_release(puStack_80);
    }
  }
  else {
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe94a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  _objc_release(ppuVar12);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  ppuVar3 = param_2;
  func_0x00010c08fa60();
  if (ppuVar3 == (undefined **)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_5);
    ppuStack_118 = &puStack_f0;
    puStack_f0 = (undefined *)0x0;
    pcStack_e0 = (code *)0x3032000000;
    pcStack_d8 = FUN_10572ec0c;
    ppuStack_d0 = (undefined **)0x10572ec1c;
    ppuStack_c8 = (undefined **)0x0;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x10573053c;
    puStack_120 = &UNK_1108ae1d0;
    ppuStack_e8 = ppuStack_118;
    func_0x00010c0bcb20(param_5);
    puVar10 = ppuStack_e8[5];
    _objc_retain(puVar10);
    __Block_object_dispose(&puStack_f0,8);
    _objc_release(ppuStack_c8);
    _objc_release(param_5);
  }
  puVar7 = PTR_PTR_1126bd8e8;
  if (param_7 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    func_0x000108ffef38(0,puVar5,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9660(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
  else {
    func_0x00010bfe9660(PTR_PTR_1126bd8e8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(ppuVar12);
  _objc_release(ppuVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10572f788; end: 10572f8b3;  */

void FUN_10572f788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = (undefined *)0x0;
  if (param_5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c0812e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d0400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa0480(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09ce80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_10572edd0(param_2,param_3,param_4,puVar1,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10572f8b4; end: 10572fa03;  */

void FUN_10572f8b4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x0;
    func_0x000108ffef38(0,puVar1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b4860;
    func_0x00010bfe94a0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfa0480(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d0400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_10572fa04(puVar1,uVar2,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x000108feaf80(puVar3,1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126bd8e8;
  func_0x00010bfe9660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar4;
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10572fa04; end: 10572fbd7;  */

void FUN_10572fa04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10572ec0c;
  uStack_40 = 0x10572ec1c;
  uStack_38 = 0;
  if (param_1 == 0) {
    uVar3 = param_3;
    func_0x000108ffe710(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126bd8f0;
    func_0x00010bf13160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_58[5];
    puStack_58[5] = puVar1;
    _objc_release(uVar2);
    func_0x00010c0bcb20(param_2);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c0bca00(param_1);
  }
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10572fbd8; end: 10572fd6f;  */

void FUN_10572fbd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10572ec0c;
  uStack_60 = 0x10572ec1c;
  uStack_58 = 0;
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0c00a0(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10572fd70; end: 10572ffe3;  */

void FUN_10572fd70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d0400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0bcb20(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10572ffe4; end: 105730027;  */

void FUN_10572ffe4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108fed074(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105730028; end: 1057300ef;  */

undefined8 FUN_105730028(undefined8 param_1)

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
  func_0x00010c0bcb20(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057300f0; end: 10573013b;  */

void FUN_1057300f0(long param_1,ulong param_2)

{
  if (param_2 < 5) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined8 *)(&UNK_10ddbc7e0 + param_2 * 8);
  }
  return;
}



/* Entry: 10573013c; end: 105730607;  */

void FUN_10573013c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b4858;
  func_0x00010bf1c100(PTR_PTR_1126b4858,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined4 *)(param_1 + 0x30),1,0,*(undefined1 *)(param_1 + 0x34),
                      *(undefined1 *)(param_1 + 0x35));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105730608; end: 10573061b;  */

void FUN_105730608(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10573061c; end: 105730647; +[SCGrapheneAvatarMetric configurationTranslation] */

void FUN_10573061c(void)

{
  _objc_alloc(PTR_PTR_1126bd8c8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105730648; end: 1057306e7; -[SCGrapheneAvatarMetric description] */

void FUN_105730648(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfa018;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dfa018,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9ff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1057306e8; end: 10573082b; -[SCGrapheneRegistry avatarGraphene] */

void FUN_1057306e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105730770;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfb80 != -1) {
    func_0x00010002a2fc(0x1136bfb80,&puStack_48);
  }
  uVar1 = uRam00000001136bfb78;
  _objc_retain(uRam00000001136bfb78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10573082c; end: 105730b1b;  */

void FUN_10573082c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105730b1c;
  uStack_80 = 0x105730b2c;
  uStack_78 = 0;
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_3);
  func_0x00010c0be140(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_98[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105730b1c; end: 105730b33;  */

void FUN_105730b1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105730b34; end: 105730c0f;  */

void FUN_105730b34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x000108ef2144(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d0400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c09ce80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfa0480(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_105730c10(param_2,uVar5,uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105730c10; end: 105730dbb;  */

void FUN_105730c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_105731b80(param_1,param_3,&PTR___NSConcreteGlobalBlock_1108ae3f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c25e980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105731f44;
  puStack_80 = &UNK_1108ae410;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = uVar2;
  func_0x000100504554(uVar2,&puStack_98);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105730dbc; end: 105730e8b;  */

void FUN_105730dbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0d0400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c09ce80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa0480(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_105730c10(param_2,uVar5,uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105730e8c; end: 1057312bb;  */

void FUN_105730e8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d0400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c09ce80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa0480();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar8);
  _objc_retain(param_2);
  uVar4 = param_2;
  FUN_105731b80(param_2,uVar1,&PTR___NSConcreteGlobalBlock_1108ae490);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(param_2);
  uVar5 = uVar4;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10573254c;
  puStack_90 = &UNK_1108ae4b0;
  uStack_88 = uVar6;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = uVar3;
  uStack_68 = uVar8;
  _objc_retain(uVar6);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar8);
  uVar4 = uVar5;
  func_0x000100504554(uVar5,&puStack_a8);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057312bc; end: 105731307;  */

void FUN_1057312bc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (2 < param_2) {
    param_2 = 3;
  }
  uVar1 = 0;
  func_0x00010bd86bb4(0,param_2,&PTR___NSConcreteGlobalBlock_1108ae370);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105731308; end: 1057313bb;  */

void FUN_105731308(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000108ffef38(0,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bd8e8;
  func_0x00010bfe9660(PTR_PTR_1126bd8e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057313bc; end: 1057314f7;  */

void FUN_1057313bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105730b1c;
  uStack_40 = 0x105730b2c;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010c0d0400(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0c0e00(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057314f8; end: 105731703;  */

void FUN_1057314f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105730b1c;
  uStack_70 = 0x105730b2c;
  uStack_68 = 0;
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  func_0x00010c0be140(uVar2);
  _objc_release(uVar2);
  lVar3 = puStack_88[5];
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar2 = uVar1;
    func_0x000108fed074(uVar1,puStack_88[5],*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 105731704; end: 105731783;  */

void FUN_105731704(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ef3c74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105731784; end: 1057317e3;  */

void FUN_105731784(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000108ef3c74(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057317e4; end: 105731aa3;  */

long FUN_1057317e4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  undefined8 uStack_138;
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
  lVar5 = param_2;
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar2 != 0) {
          func_0x00010bf1bae0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          uVar2 = *(undefined8 *)(lVar4 + 0x28);
          *(undefined8 *)(lVar4 + 0x28) = uVar3;
          _objc_release(uVar2);
          _objc_release(uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
  uStack_138 = 0x105731950;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(lVar5);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_250;
    do {
      lVar8 = 0;
      do {
        if (*plStack_250 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lStack_258 + lVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar2 != 0) {
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 8);
          uVar3 = *(undefined8 *)(lVar4 + 0x28);
          *(undefined8 *)(lVar4 + 0x28) = uVar6;
          _objc_release(uVar3);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = lVar5;
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return lVar1;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_105731aa4;
  lStack_280 = param_2;
  lStack_278 = lVar5;
  ppuStack_270 = &puStack_140;
  _objc_retain();
  puStack_298 = &uStack_2a0;
  uStack_2a0 = 0;
  uStack_290 = 0x2020000000;
  uStack_288 = 0;
  func_0x00010c0c0e00(lVar1);
  lVar5 = puStack_298[3];
  __Block_object_dispose(&uStack_2a0,8);
  _objc_release(lVar1);
  return lVar5;
}



/* Entry: 105731aa4; end: 105731b5b;  */

undefined8 FUN_105731aa4(undefined8 param_1)

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
  func_0x00010c0c0e00(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105731b5c; end: 105731b7f;  */

void FUN_105731b5c(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined8 *)(&UNK_10ddbc808 + param_3 * 8);
  }
  return;
}



/* Entry: 105731b80; end: 105731f3b;  */

void FUN_105731b80(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1e0 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_105730b1c;
  uStack_190 = 0x105730b2c;
  uStack_188 = 0;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_1057323c8;
  puStack_1c0 = &UNK_1108ae3c0;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x105732410;
  puStack_1e8 = &UNK_110850558;
  puStack_1b8 = puStack_1e0;
  puStack_1a8 = puStack_1e0;
  func_0x00010c0c0e00(param_2);
  if (puStack_1a8[5] == 0) {
    _objc_retain(param_1);
    puVar4 = param_1;
  }
  else {
    puStack_228 = puVar4;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_105732458;
    puStack_210 = &UNK_1108ae440;
    _objc_retain(param_3);
    puVar1 = param_1;
    lStack_208 = param_3;
    func_0x00010050471c(param_1,&puStack_228,&PTR___NSConcreteGlobalBlock_1108ae470);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar9 = puStack_1a8[5];
    _objc_retain(lVar9);
    lVar3 = lVar9;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar9);
        }
        puVar4 = puVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    _objc_retain(param_1);
    puVar4 = param_1;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        uVar10 = puStack_1a8[5];
        lVar5 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)((long)puVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(lVar5);
        if ((uVar10 & 1) == 0) {
          func_0x00010befa120(puVar2);
        }
        puVar8 = puVar8 + 1;
      } while (puVar4 != puVar8);
      puVar4 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lStack_208);
  }
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  uVar6 = 8;
  __Block_object_dispose(&uStack_1b0,8);
  __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_userId_112682320);
  return;
}



/* Entry: 105731f3c; end: 105731f43;  */

void FUN_105731f3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105731f44; end: 10573201f;  */

void FUN_105731f44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x000108ffe710(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  FUN_105732020(uVar1,uVar2,uVar4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105732020; end: 1057323c7;  */

void FUN_105732020(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126bd8f0;
  func_0x00010c25dba0(param_7);
  func_0x00010bf13160(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4858;
  uVar2 = param_4;
  func_0x00010bf4f6c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e960(param_4);
  func_0x00010bf2db20(param_4);
  func_0x00010bf1bb00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  lVar6 = param_2;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    puVar4 = puVar1;
    func_0x000108feaf80(puVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_105730b1c;
    uStack_88 = 0x105730b2c;
    _objc_retain(&PTR____CFConstantStringClassReference_110dd70d8);
    ppuStack_80 = &PTR____CFConstantStringClassReference_110dd70d8;
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0c0e00(param_5);
    puVar4 = PTR_PTR_1126b4860;
    func_0x00010bf1c1e0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(ppuStack_80);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
  if (param_6 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = 0;
    func_0x000108ffef38(0,puVar5,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    _objc_retain(param_6);
    lVar6 = param_6;
  }
  puVar5 = PTR_PTR_1126bd8e8;
  func_0x00010bfe9660(PTR_PTR_1126bd8e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


