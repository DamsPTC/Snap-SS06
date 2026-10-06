/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10561e2f4; end: 10561e3ab; -[SCBoltDataUploadProgressMonitor addRequestKey:forUniqueMediaId:] */

void FUN_10561e2f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10561e3ac;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10561e3ac; end: 10561e4ef;  */

void FUN_10561e3ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined1 **)(param_1 + 0x28);
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(param_1 + 0x30));
  puVar3 = *(undefined1 **)(param_1 + 0x28);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,0,
                        *(undefined8 *)(param_1 + 0x28));
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(lVar1);
    puVar5 = auStack_c8;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      unaff_x22 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != unaff_x22) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010c2512c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                              *(undefined8 *)(param_1 + 0x30),
                              *(undefined8 *)(lStack_108 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        puVar5 = auStack_c8;
        lVar2 = lVar1;
        puVar4 = &uStack_110;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    puVar3 = (undefined1 *)puVar4;
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10561e4f0;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  lStack_130 = lVar1;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_10561e5a8;
  puStack_160 = &UNK_11084a9e8;
  lStack_158 = lVar2;
  puStack_150 = puVar3;
  puStack_148 = puVar5;
  _objc_retain(puVar5);
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar6,param_2,&puStack_178);
  _objc_release(puStack_148);
  _objc_release(puStack_150);
  _objc_release(puVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 10561e4f0; end: 10561e5a7; -[SCBoltDataUploadProgressMonitor startMonitoringUploadProgressWithUniqueMediaId:progressHandler:] */

void FUN_10561e4f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10561e5a8;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561e5a8; end: 10561e6ef;  */

void FUN_10561e5a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar3 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c0e00e0(puVar3,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,puVar3,
                          *(undefined8 *)(param_1 + 0x28));
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf51e00(uVar4);
    uVar5 = uVar4;
    _objc_retainBlock();
    func_0x00010befa120(puVar3,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    lStack_50 = *(long *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(lStack_50 + 0x10);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10561e6f0;
    puStack_58 = &UNK_110841f80;
    _objc_retain(uVar5);
    uStack_48 = uVar5;
    func_0x00010c0f7fe0(0x405e000000000000,uVar4,param_2,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c2512c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,lVar1,
                        *(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10561e6f0; end: 10561e823;  */

void FUN_10561e6f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),0,0);
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + 0x20,0);
  _objc_storeStrong(lVar2 + 0x18,0);
  _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 10561e824; end: 10561e86b; -[SCBoltDataUploadProgressMonitor .cxx_destruct] */

void FUN_10561e824(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10561e86c; end: 10561ea73; -[SCBoltDataUploadProxy initWithConfigProviderLazy:directUploaderLazy:resumableUploaderLazy:uploadProgressMonitorLazy:urlExpirationSafetyMargin:dynamicUploadLocationProviderLazy:uploadLocationManagerLazy:circumstanceEngine:] */

undefined1 *
FUN_10561e86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126e9690;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc628;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28e040();
    func_0x00010c059ca0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc630;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc638;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10561ea74; end: 10561ea8b; -[SCBoltDataUploadProxy _shouldRetryMemories] */

void FUN_10561ea74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df2b18,0,0);
  return;
}



/* Entry: 10561ea8c; end: 10561ea93; -[SCBoltDataUploadProxy _shouldFailFirstUpload] */

undefined8 FUN_10561ea8c(void)

{
  return 0;
}



/* Entry: 10561ea94; end: 10561eaab; -[SCBoltDataUploadProxy _enableExponentialBackoff] */

void FUN_10561ea94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df2b38,0,0);
  return;
}



/* Entry: 10561eaac; end: 10561eac3; -[SCBoltDataUploadProxy _enableRetries] */

void FUN_10561eaac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df2b58,0,0);
  return;
}



/* Entry: 10561eac4; end: 10561eaef; -[SCBoltDataUploadProxy _immediateRetryCount] */

long FUN_10561eac4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110df2b78,3,0);
  return (long)(int)uVar1;
}



/* Entry: 10561eaf0; end: 10561eb07; -[SCBoltDataUploadProxy _sendEstimatedTimeToUpload] */

void FUN_10561eaf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df2b98,0,0);
  return;
}



/* Entry: 10561eb08; end: 10561eb93; -[SCBoltDataUploadProxy _useUploadLocationRevampForMediaSource:] */

undefined8 FUN_10561eb08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  puVar2 = PTR_PTR_1126bc640;
  _objc_alloc_init(PTR_PTR_1126bc640);
  func_0x00010c1c52c0();
  func_0x00010c1c3e60(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110df2bb8,0,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10561eb94; end: 10561ec4b; -[SCBoltDataUploadProxy uploadWithRequest:callbackPerformer:successBlock:failureBlock:] */

void FUN_10561eb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be08f80(param_1);
  uVar2 = param_1;
  func_0x00010beb3a60();
  func_0x00010bee5f00(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,0,(char)uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10561ec4c; end: 10561ec6f; -[SCBoltDataUploadProxy _shouldRetryMediaSource:] */

undefined8 FUN_10561ec4c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    return 1;
  }
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010beb56d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldRetryMemories_11258af58);
    return param_1;
  }
  return 0;
}



/* Entry: 10561ec70; end: 10561f24b; -[SCBoltDataUploadProxy _uploadWithRequest:callbackPerformer:successBlock:failureBlock:allowRetries:retryCount:shouldFailFirstUpload:] */

void FUN_10561ec70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,long param_8,char param_9
                  )

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined1 uStack_88;
  char cStack_87;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar8);
  _objc_initWeak(auStack_80,param_1);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10561f24c;
  puStack_c8 = &UNK_1108a09d0;
  _objc_copyWeak(auStack_98,auStack_80);
  _objc_retain(param_3);
  lStack_c0 = param_3;
  lStack_90 = param_8;
  uStack_88 = param_7;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  uStack_a8 = param_5;
  _objc_retain(param_6);
  cStack_87 = param_9;
  uStack_a0 = param_6;
  _objc_retain(uVar8);
  ppuVar1 = &puStack_e0;
  uStack_b0 = uVar8;
  _objc_retainBlock();
  puStack_128 = puVar7;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10561f530;
  puStack_110 = &UNK_1108a0a00;
  _objc_retain(param_3);
  lStack_108 = param_3;
  lStack_e8 = param_8;
  _objc_retain(uVar8);
  uStack_100 = uVar8;
  _objc_retain(param_4);
  uStack_f8 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_128;
  uStack_f0 = param_5;
  _objc_retainBlock();
  if ((param_9 == '\0') || (param_8 != 0)) {
    FUN_1056210d0();
    lVar3 = param_1;
    func_0x00010be9f0e0();
    if ((int)lVar3 != 0) {
      puVar7 = PTR_PTR_1126b7410;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28d9a0();
      _objc_release(puVar7);
    }
    func_0x00010c0c67c0(param_3);
    lVar3 = param_1;
    func_0x00010bee6960();
    if ((int)lVar3 == 0) {
      ppuVar4 = (undefined **)PTR_PTR_1126bc658;
      _objc_alloc(PTR_PTR_1126bc658);
      func_0x00010c059c80();
      lVar3 = param_3;
      func_0x00010c28da40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        puVar7 = *(undefined **)(param_1 + 0x30);
        func_0x00010c269d40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c67c0(param_3);
        func_0x00010bf0b760(param_3);
        func_0x00010bfcbba0(puVar7);
      }
      else {
        lVar3 = param_3;
        func_0x00010c28da40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bfec9e0();
        _objc_release(lVar3);
        if (lVar5 != 0) {
          func_0x00010c28eb60(*(undefined8 *)(param_1 + 0x10));
          goto LAB_10561f154;
        }
        puVar7 = *(undefined **)(param_1 + 0x30);
        func_0x00010c269d40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c67c0(param_3);
        func_0x00010bf0b760(param_3);
        func_0x00010bfcbba0(puVar7);
      }
    }
    else {
      lVar3 = param_3;
      func_0x00010c28da40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = param_3;
        func_0x00010c28da40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bfec9e0();
        _objc_release(lVar3);
        if (lVar5 != 0) {
          func_0x00010c28eb60(*(undefined8 *)(param_1 + 0x10));
          goto LAB_10561f15c;
        }
      }
      ppuVar4 = (undefined **)PTR_PTR_1126bc648;
      _objc_alloc();
      lVar3 = param_3;
      func_0x00010bf4c700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0b760();
      func_0x00010c0c67c0();
      func_0x00010c28e280();
      func_0x00010c03eec0(ppuVar4);
      _objc_release(lVar3);
      puVar7 = PTR_PTR_1126bc650;
      _objc_alloc(PTR_PTR_1126bc650);
      func_0x00010c059c80();
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcbbc0();
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
  }
  else {
    _objc_retain(ppuVar1);
    func_0x00010c0f7fc0(param_4);
    ppuVar4 = ppuVar1;
  }
LAB_10561f154:
  _objc_release(ppuVar4);
LAB_10561f15c:
  _objc_release(ppuVar2);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(lStack_108);
  _objc_release(ppuVar1);
  _objc_release(uStack_b0);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(lStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561f24c; end: 10561f4b3;  */

void FUN_10561f24c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x48;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (*(char *)(param_2 + 0x58) != '\x01')) ||
     (lVar5 = *(long *)(param_2 + 0x50), lVar2 = lVar1, func_0x00010be37960(), lVar2 <= lVar5)) {
LAB_10561f3e0:
    FUN_105630d7c(*(undefined8 *)(param_2 + 0x30),*(long *)(param_2 + 0x50) != 0,1);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(uVar3);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_3);
  }
  else {
    func_0x00010c0c67c0(*(undefined8 *)(param_2 + 0x20));
    lVar2 = lVar1;
    func_0x00010beb56a0();
    if ((int)lVar2 == 0) goto LAB_10561f3e0;
    lVar6 = *(long *)(param_2 + 0x50);
    lVar2 = lVar1;
    func_0x00010be37960();
    lVar5 = lVar1;
    func_0x00010be08b20();
    if ((int)lVar5 == 0) {
      func_0x00010bee5f00(lVar1);
      goto LAB_10561f460;
    }
    func_0x00010bfc2ce0(*(undefined8 *)(lVar1 + 0x58));
    uVar3 = 0;
    _dispatch_time(0,(long)(param_1 * 1000000.0));
    uVar4 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10561f4b4;
    puStack_90 = &UNK_1108a09a0;
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    lStack_88 = lVar1;
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    uStack_80 = uVar7;
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uStack_78 = uVar8;
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    uStack_70 = uVar7;
    _objc_retain(uVar8);
    uStack_60 = *(undefined8 *)(param_2 + 0x50);
    uStack_57 = *(undefined1 *)(param_2 + 0x59);
    uStack_68 = uVar8;
    uStack_58 = lVar6 < lVar2;
    func_0x00010058c530(uVar3,uVar4,&puStack_a8);
    _objc_release(uVar4);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    uVar3 = uStack_80;
  }
  _objc_release(uVar3);
LAB_10561f460:
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10561f4b4; end: 10561f4ef;  */

void FUN_10561f4b4(long param_1,undefined8 param_2)

{
  func_0x00010bee5f00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x50),
                      *(long *)(param_1 + 0x48) + 1,*(undefined1 *)(param_1 + 0x51));
  return;
}



/* Entry: 10561f4f0; end: 10561f52f;  */

void FUN_10561f4f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c11a860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10561f530; end: 10561f5e7;  */

void FUN_10561f530(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  FUN_105630c64(*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x40) != 0,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10561f5e8; end: 10561f627;  */

void FUN_10561f5e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c11a860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10561f628; end: 10561f6e3;  */

void FUN_10561f628(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  func_0x00010c03fb40(puVar1);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  func_0x00010c03bd60();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10561f6e4; end: 10561f753; -[SCBoltDataUploadProxy startMonitoringUploadProgressWithUniqueMediaId:progressHandler:] */

void FUN_10561f6e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f520();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10561f754; end: 10561f7b7; -[SCBoltDataUploadProxy isBackgroundUploadComplete:] */

undefined8 FUN_10561f754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c06cf00();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 10561f7b8; end: 10561f847; -[SCBoltDataUploadProxy cancelUploadWithUniqueMediaId:completion:] */

void FUN_10561f7b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_s_cancelUploadWithUniqueMediaId_co_1125a96c0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_opt_respondsToSelector(uVar2,puVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    func_0x00010bf2f460(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10561f848; end: 10561f88b; -[SCBoltDataUploadProxy setUploadStatusDelegate:] */

void FUN_10561f848(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  func_0x00010c21cfc0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10561f88c; end: 10561f9cb; -[SCBoltDataUploadProxy _reportUploadMode:forRequest:] */

void FUN_10561f88c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = param_5;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 != 0) && (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 != 0)) {
    puVar3 = PTR_PTR_1126bc660;
    _objc_alloc(PTR_PTR_1126bc660);
    lVar2 = param_5;
    func_0x00010c28da40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    func_0x00010c02c540(puVar3,param_3,param_4,0,0,0,0,lVar2 != 0,(long)(param_1 * 1000.0));
    func_0x00010c28e780(param_2,param_3,lVar1,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10561f9cc; end: 10561fc73; -[SCBoltDataUploadProxy uploadLocationFetchResultWithUploadLocation:error:metrics:uploadWithRequest:callbackPerformer:successBlock:failureBlock:] */

void FUN_10561f9cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_4 == 0) {
    uVar2 = param_3;
    func_0x00010c28ea60();
    iVar1 = (int)uVar2;
    if (iVar1 < 1) {
      if (iVar1 != -0x4524111) {
        if (iVar1 != 0) goto LAB_10561faa8;
        lVar3 = param_6;
        func_0x00010c28da40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          func_0x00010be90580(param_1,param_2,2,param_6);
          lVar3 = *(long *)(param_1 + 8);
          func_0x00010c269d40(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28eb60();
        }
        else {
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0xc2000000;
          uStack_b0 = 0x10561fcfc;
          puStack_a8 = &UNK_11084aaa8;
          lStack_a0 = param_1;
          _objc_retain(param_9);
          lStack_98 = param_9;
          func_0x00010c0f7fc0(param_7,param_2,&puStack_c0);
          lVar3 = lStack_98;
        }
        goto LAB_10561faa4;
      }
    }
    else {
      if (iVar1 == 1) {
        func_0x00010be90580(param_1,param_2,1,param_6);
        func_0x00010c28eb60(*(undefined8 *)(param_1 + 0x10),param_2,param_6,param_3,param_5,0,
                            param_7,param_8,param_9);
        goto LAB_10561faa8;
      }
      if (iVar1 != 2) goto LAB_10561faa8;
    }
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x10561fddc;
    puStack_d8 = &UNK_11084aaa8;
    lStack_d0 = param_1;
    _objc_retain(param_9);
    lStack_c8 = param_9;
    func_0x00010c0f7fc0(param_7,param_2,&puStack_f0);
    lVar3 = lStack_c8;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10561fc74;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(param_4);
    lStack_70 = param_4;
    _objc_retain(param_9);
    lStack_68 = param_9;
    func_0x00010c0f7fc0(param_7,param_2,&puStack_90);
    _objc_release(lStack_68);
    lVar3 = lStack_70;
  }
LAB_10561faa4:
  _objc_release(lVar3);
LAB_10561faa8:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561fc74; end: 10561febb;  */

void FUN_10561fc74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  func_0x00010c03fb40();
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  func_0x00010c03bd60();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10561febc; end: 1056202d7; -[SCBoltDataUploadProxy clientUploadLocationFetchResultWithUploadLocation:error:locationAttribution:uploadWithRequest:callbackPerformer:successBlock:failureBlock:] */

void FUN_10561febc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_4 != 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1056202d8;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(param_4);
    lStack_88 = param_4;
    _objc_retain(param_9);
    uStack_80 = param_9;
    func_0x00010c0f7fc0(param_7);
    _objc_release(uStack_80);
    lVar3 = lStack_88;
    goto LAB_1056201fc;
  }
  lVar3 = param_3;
  func_0x00010c28e9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_b0,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105620360;
  puStack_d8 = &UNK_1108a0a30;
  _objc_copyWeak(auStack_b8,auStack_b0);
  _objc_retain(lVar3);
  lStack_d0 = lVar3;
  _objc_retain(param_6);
  lStack_c8 = param_6;
  _objc_retain(param_8);
  ppuVar4 = &puStack_f0;
  uStack_c0 = param_8;
  _objc_retainBlock();
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105620478;
  puStack_118 = &UNK_1108a0a60;
  _objc_copyWeak(auStack_f8,auStack_b0);
  _objc_retain(lVar3);
  lStack_110 = lVar3;
  _objc_retain(param_6);
  lStack_108 = param_6;
  _objc_retain(param_9);
  uStack_100 = param_9;
  ppuVar5 = &puStack_130;
  _objc_retainBlock();
  lVar6 = param_3;
  func_0x00010c28ea60();
  iVar2 = (int)lVar6;
  uVar7 = param_9;
  if (iVar2 < 1) {
    if (iVar2 == -0x4524111) {
LAB_10562011c:
      _objc_retain(param_9);
      func_0x00010c0f7fc0(param_7);
    }
    else {
      if (iVar2 != 0) goto LAB_10562019c;
      lVar6 = param_6;
      func_0x00010c28da40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010be90580(param_1);
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28eb60();
      }
      else {
        _objc_retain(param_9);
        func_0x00010c0f7fc0(param_7);
      }
    }
    _objc_release(uVar7);
  }
  else if (iVar2 == 1) {
    func_0x00010be90580(param_1);
    func_0x00010c28eb60(*(undefined8 *)(param_1 + 0x10));
  }
  else if (iVar2 == 2) goto LAB_10562011c;
LAB_10562019c:
  _objc_release(ppuVar5);
  _objc_release(uStack_100);
  _objc_release(lStack_108);
  _objc_release(lStack_110);
  _objc_destroyWeak(auStack_f8);
  _objc_release(ppuVar4);
  _objc_release(uStack_c0);
  _objc_release(lStack_c8);
  _objc_release(lStack_d0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
LAB_1056201fc:
  _objc_release(lVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056202d8; end: 10562035f;  */

void FUN_1056202d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  func_0x00010c03fb40();
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  func_0x00010c03bd60();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105620360; end: 105620477;  */

void FUN_105620360(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if ((lVar2 != 0) &&
       ((lVar2 = param_2, func_0x00010c252ee0(), lVar2 == 200 ||
        (lVar2 = param_2, func_0x00010c252ee0(), lVar2 == 0xc9)))) {
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf4c700(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c13b8c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257da0(uVar3);
      _objc_release(lVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105620478; end: 1056205db;  */

void FUN_105620478(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c252ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x38);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf4c700(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_2;
        func_0x00010c252ee0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_2;
        func_0x00010c11a860();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c13b720();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf001c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c257da0(uVar3);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar2);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
    }
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056205dc; end: 10562079b;  */

void FUN_1056205dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(uVar2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x28);
  puVar3 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  func_0x00010c03bd60();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10562079c; end: 105620827; -[SCBoltDataUploadProxy .cxx_destruct] */

void FUN_10562079c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105620828; end: 10562096f;  */

void FUN_105620828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126bc668;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010bf4d200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010bf4c2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105620970; end: 105620c77;  */

void FUN_105620970(undefined8 param_1,undefined **param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126bc530;
  func_0x00010c28e640(PTR_PTR_1126bc530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bdc2b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c252ee0(param_1);
  _objc_release(param_1);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2ac460(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar7);
  ppuVar9 = param_2;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  ppuVar10 = ppuVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  ppuVar11 = ppuVar10;
  func_0x00010c08fa60();
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(ppuVar10);
    puVar7 = puVar3;
    func_0x00010bfb1800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      ppuVar11 = (undefined **)0x0;
    }
    else {
      func_0x00010c11f2c0(puVar7);
      ppuVar11 = ppuVar10;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar10);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar1 = ppuVar11;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  puVar3 = puVar8;
  func_0x00010c2ac460(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar8);
  func_0x00010bfec320(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105620c78; end: 105620d4f;  */

long FUN_105620c78(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  _objc_retain();
  func_0x00010c127e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(param_1);
  puVar2 = puVar1;
  func_0x00010bfb1800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f2c0();
  uVar3 = param_1;
  func_0x00010c260c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010c067ec0(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return (long)((int)uVar4 + 1);
}



/* Entry: 105620d50; end: 105620e8f;  */

undefined8 FUN_105620d50(undefined8 param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain();
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else if (param_2 == 0) {
    uVar6 = 1;
  }
  else {
    lVar1 = param_2;
    func_0x00010c13d120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c13d140(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    FUN_105620e90(param_1,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      puVar4 = PTR_PTR_1126bc4c0;
      _objc_alloc();
      func_0x00010c0111a0(param_1);
      lVar1 = param_2;
      func_0x00010bf1f1c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c082b40();
      _objc_release(lVar1);
      uVar6 = 1;
      if ((int)puVar5 != 0) {
        uVar6 = 2;
      }
      _objc_release(puVar4);
    }
    else {
      lVar1 = param_2;
      func_0x00010bf26040();
      if (lVar1 < param_4) {
        uVar6 = 3;
      }
      else {
        lVar1 = param_2;
        func_0x00010c06da40();
        uVar6 = 4;
        if ((int)lVar1 != 0) {
          uVar6 = 5;
        }
      }
    }
  }
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 105620e90; end: 105620f2f;  */

undefined * FUN_105620e90(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if ((param_2 == 0) || (param_3 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf64de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf64e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c06d160();
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  return puVar3;
}



/* Entry: 105620f30; end: 105620f7b;  */

void FUN_105620f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105620f7c; end: 10562107b;  */

void FUN_105620f7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10562107c;
  uStack_40 = 0x10562108c;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf64080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be5c0();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10562107c; end: 105621093;  */

void FUN_10562107c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105621094; end: 1056210cb;  */

void FUN_105621094(long param_1,undefined8 param_2)

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



/* Entry: 1056210cc; end: 1056210cf;  */

void FUN_1056210cc(void)

{
  return;
}



/* Entry: 1056210d0; end: 1056211c3;  */

undefined8 FUN_1056210d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf64080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be5c0();
  _objc_release(uVar1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1056211c4; end: 1056211f3;  */

void FUN_1056211c4(long param_1,undefined8 param_2)

{
  func_0x00010c08fa60();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1056211f4; end: 1056212cb;  */

void FUN_1056211f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_2);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar1;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar4 = puVar3;
  func_0x00010bfad040();
  *(undefined **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = puVar4;
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1056212cc; end: 105621527;  */

undefined8 *
FUN_1056212cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar12 = 1;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  uVar8 = param_4;
  func_0x00010c076120();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar8 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110ddcc18;
  }
  else {
    func_0x00010bf94ee0(param_4);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c24fb40(param_4);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf94ee0(param_4);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf94ee0();
  func_0x00010c24fb40(param_4);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  puVar11 = PTR_PTR_1130ef7d8;
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar1 = puVar2;
  func_0x00010bf51e00();
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(uVar12);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(ppuVar4);
  puStack_110 = PTR_PTR_1126e9698;
  puVar1 = &uStack_118;
  uStack_118 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(uVar12);
    uVar8 = puVar1[2];
    puVar1[2] = uVar12;
    _objc_release(uVar8);
    puVar7 = PTR_PTR_1126bc670;
    _objc_alloc();
    func_0x00010c0033e0();
    uVar8 = puVar1[9];
    puVar1[9] = puVar7;
    _objc_release(uVar8);
    _objc_retain(param_9);
    uVar8 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar8);
    _objc_retain(puVar5);
    uVar8 = puVar1[4];
    puVar1[4] = puVar5;
    _objc_release(uVar8);
    puVar7 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar8 = puVar1[1];
    puVar1[1] = puVar7;
    _objc_release(uVar8);
    _objc_release(puVar9);
    _objc_retain(puVar11);
    uVar8 = puVar1[5];
    puVar1[5] = puVar11;
    _objc_release(uVar8);
    puVar1[6] = param_1;
    _objc_retain(param_8);
    uVar8 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar8);
    _objc_retain(puVar6);
    uVar8 = puVar1[10];
    puVar1[10] = puVar6;
    _objc_release(uVar8);
    _objc_retain(puVar10);
    uVar8 = puVar1[8];
    puVar1[8] = puVar10;
    _objc_release(uVar8);
    _objc_retain(ppuVar4);
    uVar8 = puVar1[0xc];
    puVar1[0xc] = ppuVar4;
    _objc_release(uVar8);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar8 = puVar1[0xe];
    puVar1[0xe] = puVar7;
    _objc_release(uVar8);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar8 = puVar1[0xf];
    puVar1[0xf] = puVar7;
    _objc_release(uVar8);
    puVar7 = PTR_PTR_1126ae720;
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_1056218a8;
    puStack_128 = &UNK_1108429c8;
    _objc_retain(ppuVar4);
    ppuStack_120 = ppuVar4;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[0xd];
    puVar1[0xd] = puVar7;
    _objc_release(uVar8);
    _objc_initWeak(auStack_148,puVar1);
    uVar8 = puVar1[1];
    _objc_copyWeak(auStack_150,auStack_148);
    func_0x00010c0f7fc0(uVar8);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
    _objc_release(ppuStack_120);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  return puVar1;
}



/* Entry: 105621528; end: 1056218a7; -[SCBoltResumableDataUploader initWithPreferences:itemValidationChecker:urlExpirationSafetyMargin:requestManager:contentDeliveryLazy:configProviderLazy:grapheneRegistryLazy:userBlizzardLoggerLazy:uploadProgressMonitorLazy:circumstanceEngine:] */

undefined8 *
FUN_105621528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_80 = PTR_PTR_1126e9698;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc670;
    _objc_alloc();
    func_0x00010c0033e0();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    puVar1[6] = param_1;
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1056218a8;
    puStack_98 = &UNK_1108429c8;
    _objc_retain(param_12);
    uStack_90 = param_12;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_b8,puVar1);
    uVar2 = puVar1[1];
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
  }
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



/* Entry: 1056218a8; end: 105621913;  */

void FUN_1056218a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110df2e38,100,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 105621914; end: 105621a0b; -[SCBoltResumableDataUploader uploadStateForUniqueMediaId:uploadStepMetricsTracker:] */

void FUN_105621914(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(ulong *)(param_2 + 0x40);
  dVar6 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf71ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _CACurrentMediaTime();
  func_0x00010c0a70e0(dVar6 - param_1,param_5);
  _objc_release(param_5);
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126bc678;
  _objc_opt_class(PTR_PTR_1126bc678);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105621a0c; end: 105621a0f; -[SCBoltResumableDataUploader cleanUp] */

void FUN_105621a0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddfdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearAllUploadStates_112555908);
  return;
}



/* Entry: 105621a10; end: 105621a9f; -[SCBoltResumableDataUploader cancelUploadWithUniqueMediaId:completion:] */

void FUN_105621a10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    func_0x00010bf2f440(lVar1);
  }
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105621aa0; end: 105621aa3; -[SCBoltResumableDataUploader uploadData:uniqueMediaId:callbackPerformer:successBlock:failureBlock:] */

void FUN_105621aa0(void)

{
  return;
}



/* Entry: 105621aa4; end: 105621bf3; -[SCBoltResumableDataUploader uploadWithRequest:callbackPerformer:successBlock:failureBlock:] */

void FUN_105621aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105621bf4;
  puStack_70 = &UNK_1108a0ab0;
  uStack_68 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = &puStack_88;
  _objc_retainBlock(ppuVar2);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105621c38;
  puStack_98 = &UNK_1108a0ae0;
  uStack_90 = param_6;
  _objc_retain(param_6);
  ppuVar3 = &puStack_b0;
  _objc_retainBlock();
  func_0x00010c28eb60(param_1,param_2,param_3,0,0,0,param_4,ppuVar2,ppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105621bf4; end: 105621c7b;  */

void FUN_105621bf4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c11a860(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105621c7c; end: 105621c83; -[SCBoltResumableDataUploader isBackgroundUploadComplete:] */

undefined8 FUN_105621c7c(void)

{
  return 0;
}



/* Entry: 105621c84; end: 105622127; -[SCBoltResumableDataUploader uploadWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_105621c84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar2 = param_3;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105622128;
  puStack_a0 = &UNK_1108a0b10;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(uVar2);
  uStack_98 = uVar2;
  _objc_retain(param_8);
  ppuVar3 = &puStack_b8;
  uStack_90 = param_8;
  _objc_retainBlock();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x105622188;
  puStack_d8 = &UNK_1108a0b40;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(uVar2);
  uStack_d0 = uVar2;
  _objc_retain(param_9);
  uStack_c8 = param_9;
  ppuVar4 = &puStack_f0;
  _objc_retainBlock();
  uStack_110 = 0;
  uStack_100 = 0x2020000000;
  uStack_f8 = 0;
  uVar6 = param_3;
  puStack_108 = &uStack_110;
  func_0x00010bf64080(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1056221ec;
  puStack_120 = &UNK_11084e620;
  puStack_118 = &uStack_110;
  func_0x00010c0be5c0();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(puStack_108 + 3) == '\x01') {
    puStack_198 = puVar1;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_105622200;
    puStack_180 = &UNK_1108a0760;
    puVar5 = auStack_140;
    _objc_copyWeak(puVar5,auStack_80);
    _objc_retain(param_3);
    uStack_178 = param_3;
    _objc_retain(param_4);
    uStack_170 = param_4;
    _objc_retain(param_5);
    uStack_168 = param_5;
    _objc_retain(param_6);
    uStack_160 = param_6;
    _objc_retain(param_7);
    uStack_158 = param_7;
    _objc_retain(ppuVar3);
    ppuStack_150 = ppuVar3;
    _objc_retain(ppuVar4);
    ppuStack_148 = ppuVar4;
    func_0x00010c0f7fc0(uVar6);
    _objc_release(ppuStack_148);
    _objc_release(ppuStack_150);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_release(uStack_168);
    _objc_release(uStack_170);
    uVar6 = uStack_178;
  }
  else {
    puVar5 = auStack_1a0;
    _objc_copyWeak(puVar5,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(ppuVar3);
    _objc_retain(ppuVar4);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    uVar6 = param_3;
  }
  _objc_release(uVar6);
  _objc_destroyWeak(puVar5);
  __Block_object_dispose(&uStack_110,8);
  _objc_release(ppuVar4);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105622128; end: 1056221e7;  */

void FUN_105622128(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bde1220();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056221e8; end: 1056221ff;  */

void FUN_1056221e8(void)

{
  return;
}



/* Entry: 105622200; end: 105622297;  */

void FUN_105622200(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105622298; end: 10562272b; -[SCBoltResumableDataUploader _uploadWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_105622298(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_100;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126bc680;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bf4c700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0188c0();
  _objc_release(lVar2);
  func_0x00010c21d0a0(puVar1);
  func_0x00010c1bf7c0(puVar1);
  lVar2 = param_3;
  func_0x00010bf4c700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c28e760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (param_3 == 0) {
    lStack_100 = 5;
  }
  else {
    lStack_100 = param_3;
    FUN_10562272c();
  }
  lVar2 = param_3;
  func_0x00010c28da40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    _objc_initWeak(auStack_70,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    lVar2 = param_3;
    func_0x00010bf4c700(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(param_3);
    _objc_retain(lVar3);
    _objc_retain(param_4);
    _objc_retain(puVar1);
    lStack_78 = lStack_100;
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010c13f060(uVar8);
    _objc_release(lVar2);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  else {
    lVar2 = param_3;
    func_0x00010c28da40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfec9e0();
    _objc_release(lVar2);
    lVar2 = param_3;
    lVar7 = param_3;
    if (lVar4 == 0) {
      lVar4 = param_3;
      FUN_105620f7c(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28da40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec19a0(param_1);
    }
    else {
      lVar4 = lVar3;
      func_0x00010c13d120(lVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_105620f7c(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28da40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf4c700(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010bf1f1c0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee5720(param_1);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10562272c; end: 105622797;  */

undefined8 FUN_10562272c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c0c67c0();
  if (((int)uVar2 == 1) || (uVar2 = param_1, func_0x00010c0c67c0(), (int)uVar2 == 5)) {
    uVar2 = 5;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0c67c0();
    uVar2 = 5;
    if ((int)uVar1 != 8) {
      uVar2 = 3;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105622798; end: 10562286b;  */

void FUN_105622798(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_105620f7c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4c700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec19c0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10562286c; end: 105622b8f; -[SCBoltResumableDataUploader _startStateMachineWithDataToUpload:cachedDataToUpload:uploadState:dulpUploadLocation:uniqueMediaId:requestKeySuffix:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_10562286c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  lVar1 = param_4;
  func_0x00010c08fa60(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13d920();
  lVar4 = param_5;
  FUN_105620d50(uVar5,param_5,lVar1 != 0,uVar3);
  _objc_release(uVar2);
  func_0x00010c0ae740(param_9);
  lVar1 = param_5;
  if (lVar4 < 3) {
    if (lVar4 == 0) {
      func_0x00010be73020(param_1);
      goto LAB_105622b28;
    }
    if (lVar4 == 1) {
      func_0x00010bec0860(param_1);
      goto LAB_105622b28;
    }
    if (lVar4 != 2) goto LAB_105622b28;
    func_0x00010bf1f1c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be12dc0(param_1);
  }
  else {
    if (lVar4 == 3) {
      func_0x00010c13d120(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_5;
      func_0x00010bf1f1c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee58a0(param_1);
      _objc_release(lVar4);
      _objc_release(lVar1);
      goto LAB_105622b28;
    }
    if (lVar4 == 4) {
      func_0x00010be95f40(param_1);
      goto LAB_105622b28;
    }
    if (lVar4 != 5) goto LAB_105622b28;
    func_0x00010c13d120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf26040();
    lVar4 = param_5;
    func_0x00010bf1f1c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee58a0(param_1);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
LAB_105622b28:
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105622b90; end: 105622def; -[SCBoltResumableDataUploader _startStateMachineWithChunkDataToUpload:chunkMetadata:uploadState:dulpUploadLocation:uniqueMediaId:requestKeySuffix:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_105622b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_initWeak(auStack_70,param_1);
  func_0x00010c08fa60(param_3);
  _objc_retain(param_9);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_retain(param_4);
  uStack_78 = param_10;
  _objc_retain(param_12);
  func_0x00010be13e00(param_1);
  _objc_release(param_12);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105622df0; end: 105623137;  */

void FUN_105622df0(long param_1,long param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0a57c0(*(undefined8 *)(param_1 + 0x20));
  if (param_5 == (undefined *)0x0) {
    if ((param_2 != 0) && (param_3 != (undefined *)0x0)) {
      lVar1 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar1);
      _objc_retain(param_3);
      _objc_retain(param_2);
      func_0x00010bee6260(lVar1);
      _objc_release(lVar1);
      param_1 = param_1 + 0x58;
      _objc_loadWeakRetained(param_1);
      func_0x00010bee5720();
      _objc_release(param_1);
      _objc_release(param_2);
      param_5 = param_3;
      goto LAB_1056230f8;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
    puVar2 = param_3;
    func_0x00010bf4d200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(uVar5);
    _objc_release(puVar2);
    param_5 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(param_5);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
    puVar2 = param_3;
    func_0x00010bf4d200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(uVar5);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(param_5);
  }
  _objc_release(uVar5);
LAB_1056230f8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105623138; end: 1056231f3;  */

void FUN_105623138(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1056231f4; end: 1056232c3;  */

void FUN_1056231f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c2a96a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7420(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64e40(0x4122750000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7440(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = param_2;
  func_0x00010bf21f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056232c4; end: 10562337f;  */

void FUN_1056232c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105623380; end: 105623583; -[SCBoltResumableDataUploader _persistAndStartUploadWithUploadData:dulpUploadLocation:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_105623380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c0b0880(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_70 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c14b600(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105623584; end: 1056237ff;  */

void FUN_105623584(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c0ac280(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  func_0x00010c0a57c0(*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)param_2 != 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010bec0860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf4d200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b26c0(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar2);
  return;
}



/* Entry: 105623800; end: 10562386f; -[SCBoltResumableDataUploader startMonitoringUploadProgressWithUniqueMediaId:progressHandler:] */

void FUN_105623800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f520();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105623870; end: 10562388f; -[SCBoltResumableDataUploader _startNewUploadSessionWithUploadData:dulpUploadLocation:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_105623870(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be12dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__fetchNewSessionUriAndUploadWith_112562510,param_4,param_3);
    return;
  }
  return;
}



/* Entry: 105623890; end: 105623a93; -[SCBoltResumableDataUploader _fetchNewSessionUriAndUploadWithUploadLocation:dataToUpload:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_105623890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c08fa60(param_4);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_70 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010be13e00(param_1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105623a94; end: 105623b57;  */

void FUN_105623a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5e60();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105623b58; end: 105623f03; -[SCBoltResumableDataUploader _uploadToNewSessionUriFromBeginning:uploadLocation:response:error:uploadData:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_105623b58(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x00010c0a57c0(param_9);
  if (param_6 == (undefined *)0x0) {
    if ((param_3 != 0) && (param_4 != (undefined *)0x0)) {
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_105623fc0;
      puStack_b8 = &UNK_1108a0bc0;
      _objc_retain(param_4);
      puStack_b0 = param_4;
      _objc_retain(param_3);
      lStack_a8 = param_3;
      func_0x00010bee6260(param_1,param_2,&puStack_d0,param_8,0,param_9);
      func_0x00010bee58a0(param_1,param_2,param_3,param_8,param_9,0,param_7,param_4,param_10,
                          param_11,param_12,param_13);
      _objc_release(lStack_a8);
      param_6 = puStack_b0;
      goto LAB_105623e94;
    }
    uVar1 = param_7;
    func_0x00010c08fa60(param_7);
    puVar2 = param_4;
    func_0x00010bf4d200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(param_9,param_2,0,uVar1,puVar2,param_5,0);
    _objc_release(puVar2);
    param_6 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110df2eb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(param_6,param_2,&PTR____CFConstantStringClassReference_110df2e58,puVar2,0x1e
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_105624090;
    puStack_f0 = &UNK_11084a9e8;
    _objc_retain(param_13);
    uStack_d8 = param_13;
    puStack_e8 = param_6;
    _objc_retain(param_9);
    uStack_e0 = param_9;
    _objc_retain(param_6);
    func_0x00010c0f7fc0(param_11,param_2,&puStack_108);
    _objc_release(uStack_e0);
    _objc_release(puStack_e8);
    uVar1 = uStack_d8;
  }
  else {
    uVar1 = param_7;
    func_0x00010c08fa60(param_7);
    puVar2 = param_4;
    func_0x00010bf4d200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(param_9,param_2,0,uVar1,puVar2,param_5,param_6);
    _objc_release(puVar2);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105623f04;
    puStack_88 = &UNK_11084a9e8;
    _objc_retain(param_13);
    uStack_70 = param_13;
    puStack_80 = param_6;
    _objc_retain(param_9);
    uStack_78 = param_9;
    _objc_retain(param_6);
    func_0x00010c0f7fc0(param_11,param_2,&puStack_a0);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    uVar1 = uStack_70;
  }
  _objc_release(uVar1);
LAB_105623e94:
  _objc_release(param_6);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105623f04; end: 105623fbf;  */

void FUN_105623f04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105623fc0; end: 10562408f;  */

void FUN_105623fc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c2a96a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7420(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64e40(0x4122750000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7440(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = param_2;
  func_0x00010bf21f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105624090; end: 10562414b;  */

void FUN_105624090(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10562414c; end: 10562439f; -[SCBoltResumableDataUploader _resumeUploadSessionWithUploadState:uploadData:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_10562414c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_3;
  func_0x00010bf1f1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ea60();
  func_0x00010c21d0a0(param_6);
  _objc_release(uVar1);
  func_0x00010c0b0880(param_6);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c08fa60(param_4);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_70 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010be239c0(param_1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056243a0; end: 10562448b;  */

void FUN_1056243a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13d120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f1c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2f220(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10562448c; end: 10562491b; -[SCBoltResumableDataUploader _handleRequestStartByteFetch:response:error:resumableURI:uploadLocation:uploadData:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_10562448c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  func_0x00010c0a57c0(param_10);
  lVar1 = param_4;
  func_0x00010c252ee0();
  if ((param_3 < 0) || (param_5 != 0)) {
    if (lVar1 < 400) {
      uVar4 = 3;
    }
    else {
      lVar1 = param_4;
      func_0x00010c252ee0();
      if (lVar1 < 500) {
        func_0x00010be8dd80(param_1,param_2,param_9,param_10);
        uVar4 = 2;
      }
      else {
        uVar4 = 3;
      }
    }
    func_0x00010c0ae780(param_10,param_2,uVar4);
    uVar4 = param_8;
    func_0x00010c08fa60(param_8);
    uVar2 = param_7;
    func_0x00010bf4d200(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(param_10,param_2,0,uVar4,uVar2,param_4,param_5);
    _objc_release(uVar2);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10562491c;
    puStack_88 = &UNK_11084a9e8;
    _objc_retain(param_14);
    uStack_70 = param_14;
    _objc_retain(param_5);
    lStack_80 = param_5;
    _objc_retain(param_10);
    uStack_78 = param_10;
    func_0x00010c0f7fc0(param_12,param_2,&puStack_a0);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_release(uStack_70);
  }
  else if ((lVar1 == 200) || (lVar1 = param_4, func_0x00010c252ee0(), lVar1 == 0xc9)) {
    func_0x00010c0ae780(param_10,param_2,1);
    uVar4 = param_8;
    func_0x00010c08fa60(param_8);
    uVar2 = param_7;
    func_0x00010bf4d200(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(param_10,param_2,1,uVar4,uVar2,0,0);
    _objc_release(uVar2);
    func_0x00010be8dd80(param_1,param_2,param_9,param_10);
    func_0x00010c12eec0(*(undefined8 *)(param_1 + 0x48),param_2,param_9);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1056249d8;
    puStack_c8 = &UNK_1108465d0;
    _objc_retain(param_7);
    uStack_c0 = param_7;
    _objc_retain(param_10);
    uStack_b8 = param_10;
    _objc_retain(param_13);
    uStack_a8 = param_13;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    func_0x00010c0f7fc0(param_12,param_2,&puStack_e0);
    _objc_release(lStack_b0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
  }
  else {
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc0000000;
    pcStack_f8 = FUN_105624b9c;
    puStack_f0 = &UNK_1108a0cb0;
    lStack_e8 = param_3;
    func_0x00010bee6260(param_1,param_2,&puStack_108,param_9,0,param_10);
    func_0x00010c0ae760(param_10,param_2,param_3);
    func_0x00010c18dc20(param_10,param_2,1);
    func_0x00010c0ae780(param_10,param_2,0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_8;
    func_0x00010c08fa60(param_8);
    func_0x00010c0df840(puVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be87a00(param_1,param_2,param_3,puVar3,param_9);
    _objc_release(puVar3);
    func_0x00010bee58a0(param_1,param_2,param_6,param_9,param_10,param_3,param_8,param_7,param_11,
                        param_12,param_13,param_14);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10562491c; end: 1056249d7;  */

void FUN_10562491c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1056249d8; end: 105624b9b;  */

void FUN_1056249d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4d200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0f40e0(PTR_PTR_1126bc668);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(0);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4d200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126bc618;
  _objc_alloc(PTR_PTR_1126bc618);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044a00(puVar5);
  _objc_release(uVar1);
  lVar7 = *(long *)(param_1 + 0x38);
  puVar6 = PTR_PTR_1126bc620;
  _objc_alloc(PTR_PTR_1126bc620);
  func_0x00010c252ee0(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf001c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd80(puVar6);
  (**(code **)(lVar7 + 0x10))(lVar7,puVar6);
  _objc_release(0);
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 105624b9c; end: 105624c0b;  */

void FUN_105624b9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c2a9be0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0300(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf21f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105624c0c; end: 105624fe3; -[SCBoltResumableDataUploader _fetchSessionUriWithUploadLocation:uniqueMediaId:uploadSize:uploadStepMetricsTracker:priority:callbackPerformer:failureBlock:uriBlock:] */

void FUN_105624c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 in_stack_00000008;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c21d0a0(param_6);
  func_0x00010c0a57c0(param_6);
  _objc_retain(param_3);
  func_0x00010bee6260(param_1);
  func_0x00010c0a4e00(param_6);
  func_0x00010c0b0880(param_6);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar7 = param_3;
  func_0x00010c28e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b4960;
  uVar7 = param_4;
  uVar9 = param_3;
  FUN_105620828(param_4,param_3,PTR_PTR_1130ef798);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf587e0(0x404e000000000000,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = param_6;
  func_0x00010c0c59e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1c4c40(puVar4);
  _objc_release(uVar7);
  lVar5 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf58d40();
  _objc_release(lVar5);
  if (-1 < lVar6) {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58d40();
    func_0x00010c1c3460(puVar4);
    _objc_release(uVar7);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_3);
  func_0x00010c25f660(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(in_stack_00000008);
  _objc_release(param_3);
  _objc_release(in_stack_00000008);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(in_stack_00000008);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  func_0x00010c2a96a0(uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bf21f60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105624fe4; end: 10562503f;  */

void FUN_105624fe4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c2a96a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf21f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105625040; end: 1056250f7;  */

void FUN_105625040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf001c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),puVar3,*(undefined8 *)(param_1 + 0x20),param_3,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1056250f8; end: 105625113;  */

void FUN_1056250f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000105625110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_3,param_4);
  return;
}



/* Entry: 105625114; end: 10562548b; -[SCBoltResumableDataUploader _getUploadStartByteWithDataLength:uniqueMediaId:uploadStepMetricsTracker:uploadState:priority:callbackPerformer:uploadStartByteBlock:] */

void FUN_105625114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_9);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar8 = param_6;
  func_0x00010bf1f1c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  FUN_105620828(param_4,uVar8,PTR_PTR_1130ef7a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126b4960;
  uVar8 = param_6;
  func_0x00010c13d120(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bf58760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010c0c59e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1c4c40(puVar3);
  _objc_release(uVar8);
  lVar6 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfab2e0();
  _objc_release(lVar6);
  if (-1 < lVar7) {
    func_0x00010c1edac0(puVar3);
    func_0x00010c1edb40(puVar3);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab2e0();
    func_0x00010c1c3460(puVar3);
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_9);
  _objc_retain(param_9);
  func_0x00010c25f660(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_9);
  _objc_release(param_9);
  _objc_release(param_9);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001056254a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar4 + 0x20) + 0x10))
            (*(long *)(puVar4 + 0x20),*(long *)(puVar4 + 0x28) + -1);
  return;
}



/* Entry: 10562548c; end: 1056254a3;  */

void FUN_10562548c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001056254a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x28) + -1,param_3,0);
  return;
}



/* Entry: 1056254a4; end: 1056255cf;  */

void FUN_1056254a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c252ee0();
  if (lVar2 == 0x134) {
    lVar2 = param_3;
    func_0x00010bf001c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010bf001c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      FUN_105620c78(lVar1);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2,param_3,0);
      _objc_release(lVar1);
      goto LAB_1056255b0;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
    uVar3 = 0xffffffffffffffff;
    uVar4 = param_4;
  }
  (*pcVar5)(lVar2,uVar3,param_3,uVar4);
LAB_1056255b0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056255d0; end: 105625e6f; -[SCBoltResumableDataUploader _uploadFromByteWithSessionURI:uniqueMediaId:uploadStepMetricsTracker:uploadStartByte:uploadData:uploadLocation:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_1056255d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1d8 = param_3;
  lStack_1b8 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uStack_1b0 = param_8;
  _objc_retain(param_8);
  uStack_1c8 = param_10;
  _objc_retain(param_10);
  uStack_1e0 = param_11;
  _objc_retain(param_11);
  uStack_1e8 = param_12;
  _objc_retain(param_12);
  func_0x00010c0b0880(param_5);
  uStack_1c0 = param_7;
  func_0x00010c08fa60();
  puStack_90 = PTR_PTR_1130ef7c0;
  puStack_88 = PTR_PTR_1130ef7c8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_1a0 = param_7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  puStack_1a8 = puVar2;
  _objc_release(puVar1);
  if (lStack_1b8 < 1) {
    _objc_retain(uStack_1c0);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puVar2;
    puStack_208 = puVar3;
    puStack_200 = puVar4;
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puStack_1a8);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puVar2;
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puStack_1a8);
    _objc_release(puVar1);
    _objc_release(puVar2);
    ppuVar12 = &PTR_PTR_1130ef7a8;
    uVar13 = uStack_1c0;
  }
  else {
    func_0x00010c08fa60(uStack_1c0);
    uVar13 = uStack_1c0;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puVar2;
    puStack_208 = puVar3;
    puStack_200 = puVar4;
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puStack_1a8);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c08fa60(uVar13);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puVar2;
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puStack_1a8);
    _objc_release(puVar1);
    _objc_release(puVar2);
    func_0x00010c08fa60(uVar13);
    func_0x00010c0b26a0(param_5);
    ppuVar12 = &PTR_PTR_1130ef7b0;
  }
  uVar7 = param_4;
  FUN_105620828(param_4,uStack_1b0,*ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b7410;
  uStack_1d0 = uVar7;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d9a0();
  func_0x00010c08fa60(uVar13);
  func_0x00010c0b2680(param_5);
  _objc_release(puVar1);
  _objc_initWeak(auStack_98,param_1);
  puStack_200 = (undefined *)0x2;
  uStack_1f8 = 3;
  puStack_210 = (undefined *)param_9;
  puStack_208 = (undefined *)0x1;
  puVar1 = PTR_PTR_1126b4960;
  func_0x00010bf58760(PTR_PTR_1126b4960);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c0c59e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4c40(puVar1);
  _objc_release(uVar7);
  lVar5 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c28db20();
  _objc_release(lVar5);
  if (-1 < lVar6) {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28db20();
    func_0x00010c1c3460(puVar1);
    _objc_release(uVar7);
  }
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105625e70;
  puStack_d0 = &UNK_1108a0dc0;
  _objc_copyWeak(auStack_b0,auStack_98);
  _objc_retain(param_4);
  lStack_a8 = lStack_1b8;
  uStack_c8 = param_4;
  _objc_retain(uVar13);
  uStack_a0 = uStack_1a0;
  uStack_c0 = uVar13;
  _objc_retain(param_5);
  uStack_b8 = param_5;
  func_0x00010c0d0d80(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar2;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105626070;
  puStack_128 = &UNK_1108a0df0;
  _objc_copyWeak(auStack_f8,auStack_98);
  _objc_retain(param_4);
  uStack_120 = param_4;
  _objc_retain(param_5);
  uVar11 = uStack_1b0;
  uStack_f0 = uStack_1a0;
  uStack_118 = param_5;
  _objc_retain(uStack_1b0);
  uVar9 = uStack_1c8;
  uStack_110 = uVar11;
  _objc_retain(uStack_1c8);
  uVar11 = uStack_1e0;
  uStack_108 = uVar9;
  _objc_retain(uStack_1e0);
  uStack_100 = uVar11;
  puStack_198 = puVar2;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x10562639c;
  puStack_180 = &UNK_1108a0e20;
  puVar10 = auStack_98;
  _objc_copyWeak(auStack_150);
  _objc_retain(param_4);
  uStack_178 = param_4;
  _objc_retain(param_5);
  uVar11 = uStack_1b0;
  uStack_148 = uStack_1a0;
  uStack_170 = param_5;
  _objc_retain(uStack_1b0);
  uVar9 = uStack_1c8;
  uStack_168 = uVar11;
  _objc_retain(uStack_1c8);
  uVar11 = uStack_1e8;
  uStack_160 = uVar9;
  _objc_retain(uStack_1e8);
  uStack_158 = uVar11;
  func_0x00010c25f660(uVar14);
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uStack_1d0;
  func_0x00010befb060();
  _objc_release(uVar9);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_1d0);
  _objc_release(uVar13);
  _objc_release(puStack_1a8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1c0);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar6 = lStack_1d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_98);
  lVar5 = lVar6;
  __Unwind_Resume();
  pcStack_218 = FUN_105625e70;
  uStack_260 = uVar7;
  ppuStack_258 = &puStack_198;
  uStack_250 = uVar14;
  uStack_248 = uVar9;
  uStack_240 = uVar13;
  uStack_238 = param_5;
  uStack_230 = param_4;
  lStack_228 = lVar6;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(uVar11);
  lVar6 = lVar5 + 0x38;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(lVar6 + 8);
    _objc_copyWeak(auStack_278,lVar5 + 0x38);
    _objc_retain(puVar10);
    uVar14 = *(undefined8 *)(lVar5 + 0x20);
    _objc_retain(uVar14);
    uStack_270 = *(undefined8 *)(lVar5 + 0x40);
    uVar9 = *(undefined8 *)(lVar5 + 0x28);
    _objc_retain(uVar9);
    uStack_268 = *(undefined8 *)(lVar5 + 0x48);
    uVar13 = *(undefined8 *)(lVar5 + 0x30);
    _objc_retain(uVar13);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(uVar13);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_278);
  }
  _objc_release(lVar6);
  _objc_release(uVar11);
  _objc_release(puVar10);
  return;
}



/* Entry: 105625e70; end: 105625fbf;  */

void FUN_105625e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    _objc_copyWeak(auStack_68,param_1 + 0x38);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105625fc0; end: 1056266ff;  */

void FUN_105625fc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08fa60(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee5ce0(lVar4,param_2,uVar1,uVar3,uVar7,uVar5,uVar2,puVar6,0);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105626700; end: 105626c97; -[SCBoltResumableDataUploader _uploadChunkDataWithSessionURI:chunkData:chunkMetadata:uniqueMediaId:uploadStepMetricsTracker:uploadLocation:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_105626700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x00010c0b0880(param_7);
  uVar3 = param_6;
  FUN_1056212cc(param_6,param_8,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c076120();
  ppuVar1 = &PTR_PTR_1130ef7b0;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR_PTR_1130ef7a8;
  }
  uVar4 = param_6;
  FUN_105620828(param_6,param_8,*ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d9a0();
  func_0x00010c08fa60(param_4);
  func_0x00010c0b2680(param_7);
  _objc_release(puVar5);
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR_PTR_1126b4960;
  func_0x00010bf58760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_7;
  func_0x00010c0c59e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4c40(puVar5);
  _objc_release(uVar8);
  lVar6 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c28db20();
  _objc_release(lVar6);
  if (-1 < lVar7) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28db20();
    func_0x00010c1c3460(puVar5);
    _objc_release(uVar8);
  }
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105626c98;
  puStack_b0 = &UNK_1108a0e50;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_5);
  uStack_a8 = param_5;
  _objc_retain(param_6);
  uStack_a0 = param_6;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_7);
  uStack_90 = param_7;
  func_0x00010c0d0d80(puVar5);
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_80);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x00010c25f660(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb060();
  _objc_release(uVar8);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105626c98; end: 105626def;  */

void FUN_105626c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_58,param_1 + 0x40);
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}


