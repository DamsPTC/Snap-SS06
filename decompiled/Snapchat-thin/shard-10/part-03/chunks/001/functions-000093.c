/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107eb2068; end: 107eb20d3; -[SCCloudSyncLoggerImpl _cloudSyncDbOperationSnapStateToString:] */

undefined ** FUN_107eb2068(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ec24f8;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf97a20();
    if (lVar1 - 1U < 7) {
      ppuVar2 = (undefined **)(&PTR_PTR_110a10e48)[lVar1 - 1U];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ea0078;
    }
  }
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 107eb20d4; end: 107eb20fb; -[SCCloudSyncLoggerImpl _cloudSyncBackupStatusToString:] */

undefined ** FUN_107eb20d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 9) {
    return (undefined **)(&PTR_PTR_110a10e80)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 107eb20fc; end: 107eb211f; -[SCCloudSyncLoggerImpl _cloudSyncNetworkRetryCountToString:] */

undefined ** FUN_107eb20fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 9) {
    return (undefined **)(&PTR_PTR_110a10ec8)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110ec2778;
}



/* Entry: 107eb2120; end: 107eb2127; -[SCCloudSyncLoggerImpl grapheneRegistry] */

undefined8 FUN_107eb2120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107eb2128; end: 107eb212f; -[SCCloudSyncLoggerImpl crashLogger] */

undefined8 FUN_107eb2128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107eb2130; end: 107eb2137; -[SCCloudSyncLoggerImpl userTrackedLogger] */

undefined8 FUN_107eb2130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107eb2138; end: 107eb21a3; -[SCCloudSyncLoggerImpl .cxx_destruct] */

void FUN_107eb2138(long param_1)

{
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



/* Entry: 107eb21a4; end: 107eb22b7; -[SCGalleryLoggerGcsInfo initWithBeginTime:snapId:gcsURL:contentType:assetDescriptor:dataSizeInBytes:] */

undefined1 *
FUN_107eb21a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fb908;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107eb22b8; end: 107eb22db; -[SCGalleryLoggerGcsInfo gcsPath] */

void FUN_107eb22b8(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bfbe630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107eb22dc; end: 107eb22ff; -[SCGalleryLoggerGcsInfo host] */

void FUN_107eb22dc(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bfe4450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107eb2300; end: 107eb236b; +[SCGalleryLoggerGcsInfo gcsPath:] */

void FUN_107eb2300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057bc0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c0f5800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107eb236c; end: 107eb23d7; +[SCGalleryLoggerGcsInfo host:] */

void FUN_107eb236c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057bc0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfe4420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107eb23d8; end: 107eb23df; -[SCGalleryLoggerGcsInfo beginTime] */

undefined8 FUN_107eb23d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107eb23e0; end: 107eb23e7; -[SCGalleryLoggerGcsInfo snapId] */

undefined8 FUN_107eb23e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107eb23e8; end: 107eb23ef; -[SCGalleryLoggerGcsInfo gcsURL] */

undefined8 FUN_107eb23e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107eb23f0; end: 107eb23f7; -[SCGalleryLoggerGcsInfo contentType] */

undefined8 FUN_107eb23f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107eb23f8; end: 107eb23ff; -[SCGalleryLoggerGcsInfo assetDescriptor] */

undefined8 FUN_107eb23f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107eb2400; end: 107eb2407; -[SCGalleryLoggerGcsInfo dataSizeInBytes] */

undefined8 FUN_107eb2400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107eb2408; end: 107eb244f; -[SCGalleryLoggerGcsInfo .cxx_destruct] */

void FUN_107eb2408(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107eb2450; end: 107eb24a3; +[SCMediaRenderedLowResUpload sharedInstance] */

void FUN_107eb2450(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728238 != -1) {
    func_0x00010002a2fc(0x113728238,&PTR___NSConcreteGlobalBlock_110a10f10);
  }
  uVar1 = uRam0000000113728240;
  _objc_retain(uRam0000000113728240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb24a4; end: 107eb24cf;  */

void FUN_107eb24a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d8258;
  _objc_alloc_init();
  uVar1 = puRam0000000113728240;
  puRam0000000113728240 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107eb24d0; end: 107eb257f; -[SCMediaRenderedLowResUpload init] */

undefined1 * FUN_107eb24d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb910;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107eb2580; end: 107eb2753; -[SCMediaRenderedLowResUpload resumeUploadRenderedLowresMediaWithURL:snap:renderedLowresMediaData:networker:logger:additionalHTTPHeaders:callbackQueue:successBlock:failureBlock:] */

void FUN_107eb2580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107eb2754;
  puStack_b0 = &UNK_1108a01a0;
  uStack_78 = param_9;
  uStack_70 = param_10;
  uStack_68 = param_11;
  uStack_a8 = param_5;
  uStack_a0 = param_7;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_6;
  uStack_80 = param_8;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_c8);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 107eb2754; end: 107eb29e3;  */

void FUN_107eb2754(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_opt_isKindOfClass(uVar6,puVar1);
  if ((uVar6 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf18ec0(uVar4);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar12);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar5);
    func_0x00010c25f500(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107eb27d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x10))(lVar2,0,0,0);
      return;
    }
  }
  return;
}



/* Entry: 107eb29e4; end: 107eb2aff;  */

void FUN_107eb29e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252ee0(param_2);
  func_0x00010bf95a60(uVar1);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107eb2b00; end: 107eb2b0b; -[SCMediaRenderedLowResUpload .cxx_destruct] */

void FUN_107eb2b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107eb2b0c; end: 107eb2e53; -[SCBackgroundMediaUploadFinishNotifier initWithSnapIds:dataObjectContext:] */

undefined8 *
FUN_107eb2b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined **unaff_x22;
  int iVar10;
  undefined *puVar11;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_108 = PTR_PTR_1126fb918;
  puVar2 = &uStack_110;
  puVar6 = PTR_s_init_1125d9248;
  uStack_110 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0x41b2cc0300000000;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar7 = puVar2[3];
    puVar2[3] = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar2[2];
    puVar2[2] = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126bc810;
    func_0x00010bfa72c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf529e0();
    puVar2[5] = puVar9;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(puVar4);
    puVar9 = puVar4;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar8 = *plStack_140;
      unaff_x22 = &puStack_180;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(puVar4);
          }
          iVar10 = (int)*(undefined8 *)(lStack_148 + (long)puVar11 * 8);
          iVar1 = iVar10;
          func_0x00010bf19ac0();
          if (iVar1 == 1) {
            puVar2[4] = puVar2[4] + 1;
          }
          else {
            func_0x00010bf19ac0();
            if (iVar10 == 2) {
              _objc_initWeak(auStack_158,puVar2);
              puVar5 = PTR_PTR_1126bc810;
              uVar7 = puVar2[3];
              func_0x00010c11de00(uVar7);
              _objc_retainAutoreleasedReturnValue();
              puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_178 = 0xc2000000;
              pcStack_170 = FUN_107eb2e74;
              puStack_168 = &UNK_110a10fd0;
              puVar6 = auStack_158;
              _objc_copyWeak(auStack_160,puVar6);
              func_0x00010c0e0700(puVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar7);
              func_0x00010befa120(puVar2[2]);
              _objc_release(puVar5);
              _objc_destroyWeak(auStack_160);
              _objc_destroyWeak(auStack_158);
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar9 != puVar11);
        puVar9 = puVar4;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    puVar9 = (undefined *)puVar2[4];
    if ((puVar9 != (undefined *)0x0) && (puVar11 = puVar4, func_0x00010bf529e0(), puVar9 == puVar11)
       ) {
      puVar2[1] = 0;
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 4);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume(param_3);
  func_0x00010bf19ac0(puVar6);
  return (undefined8 *)(ulong)((int)puVar6 != 0);
}



/* Entry: 107eb2e54; end: 107eb2e73;  */

bool FUN_107eb2e54(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf19ac0(param_2);
  return (int)param_2 != 0;
}



/* Entry: 107eb2e74; end: 107eb2f1b;  */

void FUN_107eb2e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf4b900();
    if (((int)uVar1 != 0) && (uVar1 = param_2, func_0x00010bf19ac0(), (int)uVar1 == 1)) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    }
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
      func_0x00010bdd24e0(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107eb2f1c; end: 107eb2f97; -[SCBackgroundMediaUploadFinishNotifier _backgroundUploadFinished] */

void FUN_107eb2f1c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8b40();
  _objc_release(puVar1);
  return;
}



/* Entry: 107eb2f98; end: 107eb2fa3;  */

void FUN_107eb2f98(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  return;
}



/* Entry: 107eb2fa4; end: 107eb2fab; -[SCBackgroundMediaUploadFinishNotifier waitUntil:] */

undefined8 FUN_107eb2fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107eb2fac; end: 107eb2fdb; -[SCBackgroundMediaUploadFinishNotifier .cxx_destruct] */

void FUN_107eb2fac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107eb2fdc; end: 107eb345f; -[SCBackupOnCellularChangeNotifier initWithFeatureSettingsService:networkConnectivityMonitor:memoriesExperimentService:memoriesUserDefaultsManager:] */

undefined8 *
FUN_107eb2fdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_a0 = PTR_PTR_1126fb920;
  puVar1 = &uStack_a8;
  puVar3 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_a8 = param_1;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar10 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar10);
    _objc_retain(param_3);
    uVar10 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar10);
    _objc_retain(param_4);
    uVar10 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar10);
    _objc_retain(param_5);
    uVar10 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar10);
    _objc_retain(param_6);
    uVar10 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar10 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar10);
    puVar3 = puVar1;
    func_0x00010beb29e0();
    uVar10 = 0;
    if ((int)puVar3 == 0) {
      uVar10 = 0x41b2cc0300000000;
    }
    puVar1[4] = uVar10;
    _objc_initWeak(&uStack_b0,puVar1);
    uVar10 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010c0d7de0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107eb3460;
    puStack_c0 = &UNK_110876508;
    _objc_copyWeak(auStack_b8,&uStack_b0);
    uVar4 = uVar11;
    func_0x00010c25ff60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar10);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar12 = puVar1[3];
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar5;
    puStack_90 = puVar6;
    puStack_88 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[2];
    func_0x00010c11de00(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &uStack_b0;
    _objc_copyWeak(auStack_e0);
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    func_0x00010c0e0c60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[1];
    puVar1[1] = uVar12;
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_e0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(&uStack_b0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(&uStack_b0);
  __Unwind_Resume();
  _objc_retain(puVar3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 != 0) &&
     (((puVar1 = puVar3, func_0x00010bf5e480(), puVar1 == (undefined8 *)0x1 ||
       (puVar1 = puVar3, func_0x00010bf5e480(), puVar1 == (undefined8 *)0x4)) &&
      (lVar9 = param_3, func_0x00010beb29e0(), (int)lVar9 != 0)))) {
    func_0x00010bee45a0(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 107eb3460; end: 107eb351b;  */

void FUN_107eb3460(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) &&
     (((lVar1 = param_2, func_0x00010bf5e480(), lVar1 == 1 ||
       (lVar1 = param_2, func_0x00010bf5e480(), lVar1 == 4)) &&
      (lVar1 = param_1, func_0x00010beb29e0(), (int)lVar1 != 0)))) {
    func_0x00010bee45a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107eb351c; end: 107eb3563; -[SCBackupOnCellularChangeNotifier dealloc] */

void FUN_107eb351c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126fb920;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107eb3564; end: 107eb35ef; -[SCBackupOnCellularChangeNotifier _updateWithBackupOnCellular:] */

void FUN_107eb3564(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8b40();
  _objc_release(puVar1);
  return;
}



/* Entry: 107eb35f0; end: 107eb3613;  */

void FUN_107eb35f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x41b2cc0300000000;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
  return;
}



/* Entry: 107eb3614; end: 107eb36db; -[SCBackupOnCellularChangeNotifier _shouldBackupNow] */

bool FUN_107eb3614(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf48f60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf642a0();
    if ((uVar4 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010bfbcb00();
      if (iVar1 != 0) {
        uVar5 = *(ulong *)(param_1 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c0b85c0();
        _objc_release(uVar5);
        if ((uVar4 & 1) != 0) {
          return true;
        }
        lVar2 = *(long *)(param_1 + 0x30);
        func_0x00010c269d40(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf3e3c0();
        _objc_release(lVar2);
        return lVar3 < 1;
      }
    }
  }
  return false;
}



/* Entry: 107eb36dc; end: 107eb36e3; -[SCBackupOnCellularChangeNotifier waitUntil:] */

undefined8 FUN_107eb36dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107eb36e4; end: 107eb374f; -[SCBackupOnCellularChangeNotifier .cxx_destruct] */

void FUN_107eb36e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107eb3750; end: 107eb38c3; -[SCNetworkConnectivityNotifier initWithNetworkConnectivity:networkConnectivityMonitor:] */

undefined8 *
FUN_107eb3750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fb928;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    puVar1[2] = 0x41b2cc0300000000;
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,puVar1);
    uVar5 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0d7a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107eb38c4; end: 107eb3923;  */

void FUN_107eb38c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5e480(param_2);
  _objc_release(param_2);
  func_0x00010c0d7a20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107eb3924; end: 107eb392b; -[SCNetworkConnectivityNotifier waitUntil:] */

undefined8 FUN_107eb3924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107eb392c; end: 107eb39ef; -[SCNetworkConnectivityNotifier networkConnectivityStatusDidChange:] */

void FUN_107eb392c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8b40();
  _objc_release(puVar1);
  return;
}



/* Entry: 107eb39f0; end: 107eb39ff;  */

void FUN_107eb39f0(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 107eb3a00; end: 107eb3a0b; -[SCNetworkConnectivityNotifier .cxx_destruct] */

void FUN_107eb3a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107eb3a0c; end: 107eb3a13; -[SCUploadDataCapNotifier initWithDependencyProvider:cloudSyncOperation:featureSettingsService:] */

void FUN_107eb3a0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithDependencyProvider_cloud_1125e07a8);
  return;
}



/* Entry: 107eb3a14; end: 107eb3efb; -[SCUploadDataCapNotifier initWithDependencyProvider:cloudSyncOperation:featureSettingsService:performer:] */

undefined8 ***
FUN_107eb3a14(undefined8 ***param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5,
             undefined8 **param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 != 0) {
    uVar1 = param_3;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf3e3c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (0 < (long)uVar3) {
      uVar1 = param_3;
      func_0x00010c0ca000();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b85c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        uVar1 = param_5;
        func_0x00010bfbcb00();
        if ((uVar1 & 1) == 0) {
          func_0x00010c1a19e0(param_5);
        }
        puStack_58 = PTR_PTR_1126fb930;
        pppuVar4 = &ppuStack_60;
        ppuStack_60 = param_1;
        _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
        if (pppuVar4 != (undefined8 ***)0x0) {
          pppuVar4[1] = (undefined8 **)0x41b2cc0300000000;
          if (param_6 == (undefined8 **)0x0) {
            ppuVar7 = (undefined8 **)PTR_PTR_1126ae790;
            _objc_alloc();
            func_0x00010c021520();
            ppuVar5 = pppuVar4[2];
            pppuVar4[2] = ppuVar7;
          }
          else {
            _objc_retain(param_6);
            ppuVar5 = pppuVar4[2];
            pppuVar4[2] = param_6;
          }
          _objc_release(ppuVar5);
          ppuVar7 = pppuVar4[2];
          _objc_retain(param_3);
          _objc_retain(param_4);
          _objc_retain(pppuVar4);
          func_0x00010c0f7fc0(ppuVar7);
          _objc_release(pppuVar4);
          _objc_release(param_4);
          _objc_release(param_3);
        }
        _objc_retain(pppuVar4);
        pppuVar6 = pppuVar4;
        goto LAB_107eb3af0;
      }
    }
  }
  pppuVar4 = param_1;
  pppuVar6 = (undefined8 ***)0x0;
LAB_107eb3af0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(pppuVar4);
  return pppuVar6;
}



/* Entry: 107eb3efc; end: 107eb3f03; -[SCUploadDataCapNotifier waitUntil:] */

undefined8 FUN_107eb3efc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107eb3f04; end: 107eb3f7f; -[SCUploadDataCapNotifier _updateWaitTimeAndNotifyServiceLoop] */

void FUN_107eb3f04(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8b40();
  _objc_release(puVar1);
  return;
}



/* Entry: 107eb3f80; end: 107eb3f8b;  */

void FUN_107eb3f80(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  return;
}



/* Entry: 107eb3f8c; end: 107eb3f97; -[SCUploadDataCapNotifier .cxx_destruct] */

void FUN_107eb3f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107eb3f98; end: 107eb41eb; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE initWithProfile:entryPlaceholder:addSnapEntity:dataVaultEncryption:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107eb3f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fb938;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_5;
    func_0x00010c23f220(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar5 = lVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010bdc1800(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770ffc);
    *(long *)((long)puVar1 + (long)_DAT_112770ffc) = lVar5;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112771000;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112771004;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771008);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771008) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    func_0x00010bf6f520();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277100c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277100c) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    FUN_107ee87e4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771010);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771010) = uVar3;
    _objc_release(uVar4);
    lVar5 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771014);
    *(long *)((long)puVar1 + (long)_DAT_112771014) = lVar5;
    _objc_release(uVar3);
    uVar3 = param_7;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771018);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771018) = uVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107eb41ec; end: 107eb41f3; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE type] */

undefined8 FUN_107eb41ec(void)

{
  return 1;
}



/* Entry: 107eb41f4; end: 107eb41fb; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE analyticsType] */

undefined8 FUN_107eb41f4(void)

{
  return 10;
}



/* Entry: 107eb41fc; end: 107eb422b; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb41fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770ffc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb422c; end: 107eb42c3; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb422c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771004);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uStack_30 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d8260);
    func_0x00010c03ac00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eb42c4; end: 107eb4333; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb42c4(void)

{
  _objc_alloc(PTR_PTR_1126d8260);
  func_0x00010c03ac00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eb4334; end: 107eb463f; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107eb4334(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar2 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a5a50);
  if (uVar4 == 0 || (int)uVar2 == 0) {
    ppuVar3 = (undefined1 **)param_1;
    puVar10 = (undefined1 *)0x0;
  }
  else {
    puStack_58 = PTR_PTR_1126fb938;
    puStack_60 = param_1;
    _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar8 = param_4;
      func_0x00010bf51e00();
      uVar7 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112770ffc);
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112770ffc) = uVar8;
      _objc_release(uVar7);
      uVar4 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771000);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771000) = uVar4;
      _objc_release(uVar8);
      uVar4 = param_3;
      func_0x00010bf973c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771004);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771004) = uVar4;
      _objc_release(uVar8);
      uVar4 = param_3;
      func_0x00010c242480();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)_DAT_112771008;
      uVar8 = *(undefined8 *)((long)ppuVar3 + lVar12);
      *(ulong *)((long)ppuVar3 + lVar12) = uVar4;
      _objc_release(uVar8);
      uVar4 = param_3;
      func_0x00010bf6f600();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11277100c);
      *(ulong *)((long)ppuVar3 + (long)_DAT_11277100c) = uVar4;
      _objc_release(uVar8);
      uVar4 = param_3;
      func_0x00010c0ce240();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)_DAT_112771010;
      uVar8 = *(undefined8 *)((long)ppuVar3 + lVar11);
      *(ulong *)((long)ppuVar3 + lVar11) = uVar4;
      _objc_release(uVar8);
      uVar4 = param_3;
      func_0x00010bf64980();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771014);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771014) = uVar4;
      _objc_release(uVar8);
      uVar4 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771018);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771018) = uVar4;
      _objc_release(uVar8);
      if (*(long *)((long)ppuVar3 + lVar11) == 0) {
        uVar7 = 1;
        FUN_107ee8880();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)((long)ppuVar3 + lVar11);
        *(undefined8 *)((long)ppuVar3 + lVar11) = uVar8;
        _objc_release(uVar9);
        _objc_release(uVar7);
      }
      uVar4 = param_3;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 != 0) {
        lVar11 = *(long *)((long)ppuVar3 + lVar12);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar4);
        if (lVar11 == 0) {
          puVar1 = PTR_PTR_1126bf910;
          func_0x00010c2aebc0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010bf8b0c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c192ce0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)((long)ppuVar3 + lVar12);
          *(undefined **)((long)ppuVar3 + lVar12) = puVar6;
          _objc_release(uVar8);
          _objc_release(puVar5);
          _objc_release(uVar4);
          _objc_release(puVar1);
        }
      }
      _objc_release(param_3);
    }
    _objc_retain(ppuVar3);
    puVar10 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  return puVar10;
}



/* Entry: 107eb4640; end: 107eb4ec3; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb4640(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126af4c0;
  lVar12 = (long)_DAT_112771004;
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126af4d0;
  lVar13 = (long)_DAT_112771008;
  uVar1 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0 && puVar3 == (undefined *)0x0) {
    lVar6 = *(long *)(param_1 + lVar13);
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR_PTR_1126af4d0;
    if (lVar6 == 0) {
      uVar10 = *(ulong *)(param_1 + lVar13);
      FUN_107ee8f54(uVar10,param_3,param_6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((uVar10 & 1) == 0) {
        uVar11 = *(undefined8 *)(param_1 + lVar12);
        func_0x00010bf97200(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar1 = *(undefined8 *)(param_1 + lVar13);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar4 = *(undefined8 *)(param_1 + lVar13);
        func_0x00010c0c5180(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520(puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = 2;
        func_0x00010baa2848();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1ac0(param_5);
        _objc_release(uVar5);
        _objc_release(puVar9);
        _objc_release(uVar4);
        _objc_release(puVar8);
        _objc_release(uVar1);
        _objc_release(puVar7);
        goto LAB_107eb4bd0;
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010bf8b0c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa72e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (puVar7 != (undefined *)0x0) {
        _objc_retain(param_1);
        _objc_release(puVar7);
        goto LAB_107eb4e70;
      }
    }
    _objc_retain(param_1);
  }
  else {
    if (puVar2 != (undefined *)0x0 || puVar3 == (undefined *)0x0) {
      if (puVar2 == (undefined *)0x0) {
        lVar6 = *(long *)(param_1 + lVar13);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar7 = PTR_PTR_1126af4d0;
        if (lVar6 == 0) {
          uVar10 = *(ulong *)(param_1 + lVar13);
          FUN_107ee8f54(uVar10,param_3,param_6);
          if ((uVar10 & 1) == 0) {
            uVar5 = *(undefined8 *)(param_1 + lVar13);
            uVar1 = param_5;
            func_0x00010bfcdfa0(param_5);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = param_5;
            func_0x00010bf53fa0(param_5);
            _objc_retainAutoreleasedReturnValue();
            FUN_107ec62d8(uVar5,param_3,3,&PTR____CFConstantStringClassReference_110ec2838,uVar1,
                          uVar4);
            _objc_release(uVar4);
            _objc_release(uVar1);
            puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            uVar1 = *(undefined8 *)(param_1 + lVar12);
            func_0x00010bf97200(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520(puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            uVar4 = *(undefined8 *)(param_1 + lVar13);
            func_0x00010c241220(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520(puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            uVar5 = *(undefined8 *)(param_1 + lVar13);
            func_0x00010c0c5180(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520(puVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = 6;
            func_0x00010baa2848();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(param_5);
            _objc_release(uVar11);
            _objc_release(puVar9);
            _objc_release(uVar5);
            _objc_release(puVar8);
            _objc_release(uVar4);
            _objc_release(puVar7);
            _objc_release(uVar1);
            param_1 = (undefined *)0x0;
            goto LAB_107eb4e70;
          }
        }
        else {
          uVar1 = *(undefined8 *)(param_1 + lVar13);
          func_0x00010bf8b0c0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa72e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          if (puVar7 != (undefined *)0x0) {
            _objc_retain(param_1);
            _objc_release(puVar7);
            goto LAB_107eb4e70;
          }
        }
        _objc_retain(param_1);
      }
      else if (puVar3 == (undefined *)0x0) {
        puVar7 = PTR_PTR_1126bf8c8;
        func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1968c0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = PTR_PTR_1126d7f18;
        _objc_alloc(PTR_PTR_1126d7f18);
        func_0x00010c00e960();
        param_1 = PTR_PTR_1126d8268;
        _objc_alloc(PTR_PTR_1126d8268);
        puVar9 = puVar7;
        func_0x00010bf21f60(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03abc0(param_1);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      else {
        uVar1 = *(undefined8 *)(param_1 + lVar12);
        func_0x00010bf97200(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar4 = *(undefined8 *)(param_1 + lVar13);
        func_0x00010c241220(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar5 = *(undefined8 *)(param_1 + lVar13);
        func_0x00010c0c5180(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1ac0(param_5);
        _objc_release(puVar9);
        _objc_release(uVar5);
        _objc_release(puVar8);
        _objc_release(uVar4);
        _objc_release(puVar7);
        _objc_release(uVar1);
        param_1 = (undefined *)0x0;
      }
      goto LAB_107eb4e70;
    }
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf97200(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar1 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c0c5180(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0();
    _objc_release(uVar5);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(puVar8);
    _objc_release(uVar1);
    _objc_release(puVar7);
LAB_107eb4bd0:
    _objc_release(uVar11);
    param_1 = (undefined *)0x0;
  }
LAB_107eb4e70:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107eb4ec4; end: 107eb51b3; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107eb4ec4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bf8e8;
  func_0x00010bf5a9e0(PTR_PTR_1126bf8e8,param_2,*(undefined8 *)(param_1 + _DAT_11277100c));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf8f0;
  func_0x00010bf5aa20(PTR_PTR_1126bf8f0,param_2,*(undefined8 *)(param_1 + _DAT_112771010));
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112771008;
  puVar3 = PTR_PTR_1126bc7f8;
  func_0x00010bf5a9c0(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + lVar8));
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112771000;
  func_0x00010c1d7bc0();
  puVar4 = puVar1;
  func_0x00010c0fd8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c580(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0fd920(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8100(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1a7000(puVar3,param_2,0);
  puVar4 = PTR_PTR_1126bc830;
  func_0x00010bf5a940(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + _DAT_112771004));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0fd8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066e00(puVar4,param_2,puVar6,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uStack_78 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_107ee8c84();
  func_0x00010c207320(puVar4,param_2,puVar6);
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010c241220(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c0f7a20(puVar4);
  func_0x00010c1da4e0(puVar4,param_2,(int)puVar5 + 1);
  puVar5 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,*(undefined8 *)(param_1 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0fd860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f40(puVar5,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return 1;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 107eb51b4; end: 107eb51bb; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE isOperationValidBeforeRemoteSync:dataObjectContext:] */

undefined8 FUN_107eb51b4(void)

{
  return 1;
}



/* Entry: 107eb51bc; end: 107eb55b7; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb51bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_f0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puVar1 = PTR_PTR_1126bc810;
  lVar11 = (long)_DAT_112771008;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c241220(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar2 = puVar1;
  func_0x00010bf19ac0();
  puStack_f0 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)puVar2 == 1) {
    puVar2 = puVar1;
    func_0x00010c241220(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puStack_f0 = (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126d8270;
  _objc_alloc();
  func_0x00010c0093a0();
  _objc_release(param_5);
  uStack_78 = *(undefined8 *)(param_1 + lVar11);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)(param_1 + _DAT_11277100c);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_1 + _DAT_112771010);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  FUN_107ee8930(puVar3,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112771004);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_107eb55b8;
  puStack_b8 = &UNK_110a11000;
  uStack_98 = in_stack_00000020;
  uStack_90 = in_stack_00000028;
  lStack_b0 = param_1;
  uStack_a8 = param_7;
  uStack_a0 = param_3;
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_3);
  _objc_retain(param_7);
  puVar4 = puVar6;
  FUN_107eecc84(param_3,puVar6,uVar7,0,puStack_f0,puVar2,param_6,param_7,param_4,0,10,uVar9,
                in_stack_00000020,&puStack_d0);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puStack_f0);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(param_6 + 0x20);
  uVar7 = *(undefined8 *)(param_6 + 0x30);
  _objc_retain(puVar4);
  func_0x00010c0f98a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7800(uVar10);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 107eb55b8; end: 107eb5667;  */

void FUN_107eb55b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c0f98a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7800(uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107eb5668; end: 107eb58a3; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb5668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126af4c0;
  lVar8 = (long)_DAT_112771004;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar1,param_2,uVar7,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126af4d0;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112771008);
  func_0x00010c241220(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar2,param_2,uVar7,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf97200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0e00e0(param_3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  uVar4 = uVar7;
  func_0x00010c0b4ca0(uVar7);
  func_0x00010c1fce60(puVar3,param_2,uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf12220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210e00(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c07b240(uVar4);
  func_0x00010c210ec0(puVar3,param_2,uVar4);
  puVar5 = puVar3;
  func_0x00010c0f7a20(puVar3);
  func_0x00010c1da4e0(puVar3,param_2,(int)puVar5 + -1);
  lVar6 = *(long *)(param_1 + lVar8);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c2711a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f40(puVar3,param_2,uVar4);
    _objc_release(uVar4);
  }
  puVar5 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  func_0x00010c210e20(puVar5,param_2,puVar1);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107eb58a4; end: 107eb58f7; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107eb58a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c13a8c0(param_4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb0c0();
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107eb58f8; end: 107eb5a63; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE changedSnapContextsWithEntryUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107eb58f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126d8278;
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar5 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112771004;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf97200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfbdda0(uVar3);
    lVar7 = param_1;
    func_0x00010c079400(param_1);
    func_0x00010c23f7c0(puVar4,param_2,lVar5,0,lVar1,uVar2,uVar3,lVar7,
                        *(undefined8 *)(param_1 + _DAT_112770ffc));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_3 + _DAT_112771008);
  func_0x00010bf8b0c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined *)(ulong)(lVar5 == 0);
}



/* Entry: 107eb5a64; end: 107eb5aa3; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE eligibleForOutOfOrderExecution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107eb5a64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771008);
  func_0x00010bf8b0c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 == 0;
}



/* Entry: 107eb5aa4; end: 107eb5ae3; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE doesNotRequireMediaUpload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107eb5aa4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771008);
  func_0x00010bf8b0c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107eb5ae4; end: 107eb5b23; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE isOperationFromRetryEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107eb5ae4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771004);
  func_0x00010c13f6e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107eb5b24; end: 107eb5b27; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE allMediaUploadsCompleteWithBoltDataUploader:] */

void FUN_107eb5b24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf879d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_doesNotRequireMediaUpload_1125bf818);
  return;
}



/* Entry: 107eb5b28; end: 107eb5b2f; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE needRunImmediately] */

undefined8 FUN_107eb5b28(void)

{
  return 0;
}



/* Entry: 107eb5b30; end: 107eb5b37; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

undefined8 FUN_107eb5b30(void)

{
  return 0;
}



/* Entry: 107eb5b38; end: 107eb5b3f; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

undefined8 FUN_107eb5b38(void)

{
  return 0;
}



/* Entry: 107eb5b40; end: 107eb6003; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE _updateEntriesFromNetworker:queue:snapsUploadInfo:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb5b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d8280;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2b1ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112771004;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf9e140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  func_0x00010c196ba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf977c0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c196b20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771008);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2046e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c15e520(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1fce80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf8b0a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c185380(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c07b240(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1b3980(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2063a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + lVar10);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  lVar4 = *(long *)(param_1 + lVar10);
  func_0x00010bf12220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf12220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1b7800(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  puVar3 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d8288;
  func_0x00010c2b1dc0(PTR_PTR_1126d8288);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1966e0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920(PTR_PTR_1126bbf20);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar8 = &PTR____CFConstantStringClassReference_110ec2858;
  func_0x00010c25f400(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d8290;
  _objc_retain(ppuVar8);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar8);
  puVar5 = puVar3;
  func_0x00010c15f8c0();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar5 == (undefined *)0x7d0) {
    puVar1 = puVar3;
    func_0x00010bf96fc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    (**(code **)(*(long *)(param_5 + 0x20) + 0x10))(*(long *)(param_5 + 0x20),puVar5);
  }
  else {
    lVar4 = *(long *)(param_5 + 0x28);
    func_0x00010c15f8c0(puVar3);
    puVar5 = puVar3;
    func_0x00010bf96fc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf148e0(puVar3);
    puVar7 = puVar3;
    func_0x00010bf66200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107eb6004; end: 107eb6173;  */

void FUN_107eb6004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x7d0) {
    puVar5 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eb6174; end: 107eb61bb;  */

void FUN_107eb6174(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99400(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eb61bc; end: 107eb64fb; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb61bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = (long)_DAT_112771004;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c18);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbdda0(uVar2);
  func_0x00010c0df760(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c38);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar6 = (long)_DAT_112771008;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e268d8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec28b8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15e520(uVar2);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21d8);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf59960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec28d8);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c07b240(uVar2);
  func_0x00010c25d8c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21f8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112770ffc));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2858,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar5 = *(long *)(param_1 + _DAT_112771018);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar5,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107eb64fc; end: 107eb6503; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE requiresSyncStatusUpdate] */

undefined8 FUN_107eb64fc(void)

{
  return 1;
}



/* Entry: 107eb6504; end: 107eb650b; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107eb6504(void)

{
  return 0;
}



/* Entry: 107eb650c; end: 107eb657b; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE snapPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107eb650c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_112771008);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_107eb657c;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_40 = *(undefined8 *)(puVar1 + _DAT_11277100c);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_107eb65ec;
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_60 = *(undefined8 *)(puVar1 + _DAT_112771010);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_50 = &puStack_30;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail();
        return (undefined *)0x1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 107eb657c; end: 107eb65eb; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE detailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107eb657c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_11277100c);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_107eb65ec;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_40 = *(undefined8 *)(puVar1 + _DAT_112771010);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      return (undefined *)0x1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 107eb65ec; end: 107eb665b; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE miniThumbnailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107eb65ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_112771010);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107eb665c; end: 107eb6663; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE numberOfSnaps] */

undefined8 FUN_107eb665c(void)

{
  return 1;
}



/* Entry: 107eb6664; end: 107eb6693; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE dataVaultEncryption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb6664(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771014);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb6694; end: 107eb672b; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE isPrivateWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107eb6694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112771004);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar1,param_2,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c07b240(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  return puVar2;
}



/* Entry: 107eb672c; end: 107eb67cb; -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb672c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771018,0);
  _objc_storeStrong(param_1 + _DAT_112771010,0);
  _objc_storeStrong(param_1 + _DAT_11277100c,0);
  _objc_storeStrong(param_1 + _DAT_112771008,0);
  _objc_storeStrong(param_1 + _DAT_112771014,0);
  _objc_storeStrong(param_1 + _DAT_112771004,0);
  _objc_storeStrong(param_1 + _DAT_112771000,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770ffc,0);
  return;
}



/* Entry: 107eb67cc; end: 107eb67d3; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE type] */

undefined8 FUN_107eb67cc(void)

{
  return 3;
}



/* Entry: 107eb67d4; end: 107eb67db; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE analyticsType] */

undefined8 FUN_107eb67d4(void)

{
  return 0xb;
}



/* Entry: 107eb67dc; end: 107eb6b03; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE initWithProfile:entryPlaceholder:addSnapEntities:dataVaultEncryption:userContext:] */

/* WARNING: Possible PIC construction at 0x000107eb68d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107eb68d4) */
/* WARNING: Removing unreachable block (ram,0x000107eb6930) */
/* WARNING: Removing unreachable block (ram,0x000107eb6944) */
/* WARNING: Removing unreachable block (ram,0x000107eb6960) */
/* WARNING: Removing unreachable block (ram,0x000107eb68c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107eb67dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_f8 = PTR_PTR_1126fb940;
  puVar1 = &uStack_100;
  puVar3 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    lVar6 = param_5;
    func_0x00010bf52a60();
    puVar2 = puRam0000000000000000;
    if (lVar6 != 0) goto code_r0x00010c23f220;
    lVar6 = param_5;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277101c);
    *(long *)((long)puVar1 + (long)_DAT_11277101c) = lVar6;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112771020;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112771024;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar4);
    lVar6 = param_5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771028);
    *(long *)((long)puVar1 + (long)_DAT_112771028) = lVar6;
    _objc_release(uVar4);
    lVar6 = param_5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277102c);
    *(long *)((long)puVar1 + (long)_DAT_11277102c) = lVar6;
    _objc_release(uVar4);
    lVar6 = param_5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771030);
    *(long *)((long)puVar1 + (long)_DAT_112771030) = lVar6;
    _objc_release(uVar4);
    uVar4 = param_6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771034);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771034) = uVar4;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112771038;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar3;
code_r0x00010c23f220:
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_snap_11266d6b0);
  return puVar2;
}



/* Entry: 107eb6b04; end: 107eb6b1b;  */

void FUN_107eb6b04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107eb6b1c; end: 107eb6fe3; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_107eb6b1c(undefined8 *****param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  long lVar13;
  undefined8 *****pppppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 ****ppppuStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  uVar4 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a5a58);
  if (uVar3 == 0 || (int)uVar4 == 0) {
    pppppuVar11 = param_1;
    pppppuVar14 = (undefined8 *****)0x0;
  }
  else {
    puStack_f8 = PTR_PTR_1126fb940;
    pppppuVar11 = &ppppuStack_100;
    ppppuStack_100 = param_1;
    _objc_msgSendSuper2(pppppuVar11,PTR_s_init_1125d9248);
    if (pppppuVar11 != (undefined8 *****)0x0) {
      _objc_retain(param_3);
      uVar10 = param_4;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)((long)pppppuVar11 + (long)_DAT_11277101c);
      *(undefined8 *)((long)pppppuVar11 + (long)_DAT_11277101c) = uVar10;
      _objc_release(uVar9);
      uVar3 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)pppppuVar11 + (long)_DAT_112771020);
      *(ulong *)((long)pppppuVar11 + (long)_DAT_112771020) = uVar3;
      _objc_release(uVar10);
      uVar3 = param_3;
      func_0x00010bf973c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)pppppuVar11 + (long)_DAT_112771024);
      *(ulong *)((long)pppppuVar11 + (long)_DAT_112771024) = uVar3;
      _objc_release(uVar10);
      uVar3 = param_3;
      func_0x00010c2424c0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)_DAT_112771028;
      uVar10 = *(undefined8 *)((long)pppppuVar11 + lVar15);
      *(ulong *)((long)pppppuVar11 + lVar15) = uVar3;
      _objc_release(uVar10);
      uVar3 = param_3;
      func_0x00010bf6f620();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)pppppuVar11 + (long)_DAT_11277102c);
      *(ulong *)((long)pppppuVar11 + (long)_DAT_11277102c) = uVar3;
      _objc_release(uVar10);
      uVar3 = param_3;
      func_0x00010c0ce260();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)_DAT_112771030;
      uVar10 = *(undefined8 *)((long)pppppuVar11 + lVar12);
      *(ulong *)((long)pppppuVar11 + lVar12) = uVar3;
      _objc_release(uVar10);
      uVar3 = param_3;
      func_0x00010bf64980();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)pppppuVar11 + (long)_DAT_112771034);
      *(ulong *)((long)pppppuVar11 + (long)_DAT_112771034) = uVar3;
      _objc_release(uVar10);
      uVar3 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf51e00();
      uVar10 = *(undefined8 *)((long)pppppuVar11 + (long)_DAT_112771038);
      *(ulong *)((long)pppppuVar11 + (long)_DAT_112771038) = uVar4;
      _objc_release(uVar10);
      _objc_release(uVar3);
      uVar3 = *(ulong *)((long)pppppuVar11 + lVar15);
      func_0x00010bf529e0();
      uVar4 = *(ulong *)((long)pppppuVar11 + lVar12);
      func_0x00010bf529e0();
      if (uVar4 < uVar3) {
        uVar10 = *(undefined8 *)((long)pppppuVar11 + lVar15);
        func_0x00010bf529e0();
        FUN_107ee8880();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)((long)pppppuVar11 + lVar12);
        *(undefined8 *)((long)pppppuVar11 + lVar12) = uVar10;
        _objc_release(uVar9);
      }
      uVar3 = param_3;
      func_0x00010bf8b0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (uVar4 != 0) {
        func_0x00010bf529e0(*(undefined8 *)((long)pppppuVar11 + lVar15));
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = *(long *)((long)pppppuVar11 + lVar15);
        _objc_retain(lVar16);
        lVar12 = lVar16;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar12 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar16);
            }
            lVar17 = *(long *)(lVar13 * 8);
            lVar5 = lVar17;
            func_0x00010bf8b0c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar5 == 0) {
              uVar3 = param_3;
              func_0x00010bf8b0e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(lVar17);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar17);
              _objc_release(uVar3);
              if (uVar4 != 0) {
                puVar6 = PTR_PTR_1126bf910;
                func_0x00010c2aebc0(PTR_PTR_1126bf910);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                func_0x00010c192ce0();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                _objc_release(puVar6);
                func_0x00010befa120(puVar2);
                _objc_release(puVar8);
              }
              _objc_release(uVar4);
            }
            else {
              func_0x00010befa120(puVar2);
            }
            lVar13 = lVar13 + 1;
          } while (lVar12 != lVar13);
          lVar12 = lVar16;
          func_0x00010bf52a60();
        }
        _objc_release(lVar16);
        uVar10 = *(undefined8 *)((long)pppppuVar11 + lVar15);
        *(undefined **)((long)pppppuVar11 + lVar15) = puVar2;
        _objc_release(uVar10);
      }
      _objc_release(param_3);
    }
    _objc_retain(pppppuVar11);
    pppppuVar14 = pppppuVar11;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppuVar14;
  }
  ___stack_chk_fail();
  pppppuVar11 = *(undefined8 ******)((long)pppppuVar11 + (long)_DAT_11277101c);
  _objc_retain(pppppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar11);
  return pppppuVar11;
}



/* Entry: 107eb6fe4; end: 107eb7013; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb6fe4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277101c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb7014; end: 107eb70ab; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb7014(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771024);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uStack_30 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d8298);
    func_0x00010c03ac20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eb70ac; end: 107eb7117; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb70ac(void)

{
  _objc_alloc(PTR_PTR_1126d8298);
  func_0x00010c03ac20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eb7118; end: 107eb7783; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Possible PIC construction at 0x000107eb7318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107eb74fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107eb7550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107eb7500) */
/* WARNING: Removing unreachable block (ram,0x000107eb754c) */
/* WARNING: Removing unreachable block (ram,0x000107eb731c) */
/* WARNING: Removing unreachable block (ram,0x000107eb734c) */
/* WARNING: Removing unreachable block (ram,0x000107eb7554) */
/* WARNING: Removing unreachable block (ram,0x000107eb7588) */
/* WARNING: Removing unreachable block (ram,0x000107eb75fc) */
/* WARNING: Removing unreachable block (ram,0x000107eb7304) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb7118(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126af4c0;
  lVar16 = (long)_DAT_112771024;
  uVar1 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    lVar16 = (long)_DAT_112771028;
    uVar1 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af4d0;
    func_0x00010bfa7580();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    puVar18 = puVar3;
    func_0x00010bf52a60();
    puVar11 = puRam0000000000000000;
    if (puVar18 != (undefined *)0x0) goto code_r0x00010c241220;
    _objc_release(puVar3);
    lVar5 = *(long *)(param_1 + lVar16);
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar6;
    func_0x00010bf529e0();
    if (lVar10 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR_PTR_1126af4d0;
      func_0x00010bfa7580(PTR_PTR_1126af4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSSet_1126ae870;
      puVar7 = puVar11;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar11);
    }
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_1 + lVar16);
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      uVar17 = 0;
      do {
        puVar11 = *(undefined **)(param_1 + lVar16);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar11;
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar14 == (undefined *)0x0) {
          puVar14 = puVar11;
          param_2 = param_3;
          FUN_107ee8f54(puVar11,param_3,param_6);
          if ((int)puVar14 != 0) goto code_r0x00010c241220;
        }
        else {
          puVar14 = puVar18;
          func_0x00010bf529e0();
          if (puVar14 != (undefined *)0x0) {
            puVar14 = puVar11;
            func_0x00010bf8b0c0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar18;
            func_0x00010bf4b900();
            _objc_release(puVar14);
            if (((ulong)puVar12 & 1) != 0) goto code_r0x00010c241220;
          }
        }
        _objc_release(puVar11);
        uVar17 = uVar17 + 1;
        uVar13 = *(ulong *)(param_1 + lVar16);
        func_0x00010bf529e0();
      } while (uVar17 < uVar13);
    }
    puVar11 = puVar9;
    func_0x00010bf529e0();
    puVar14 = *(undefined **)(param_1 + lVar16);
    func_0x00010bf529e0();
    if (puVar11 == puVar14) {
      _objc_retain(param_1);
    }
    else {
      puVar11 = puVar9;
      func_0x00010bf529e0();
      if (puVar11 == (undefined *)0x0) {
        param_1 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar9;
        param_2 = puVar7;
        FUN_107ee8930(puVar9,puVar7,puVar8);
        _objc_retainAutoreleasedReturnValue();
        param_1 = PTR_PTR_1126d82a0;
        _objc_alloc(PTR_PTR_1126d82a0);
        func_0x00010c03aba0();
        _objc_release(puVar11);
      }
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar18);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf97200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5);
    _objc_release(puVar3);
    _objc_release(uVar1);
    param_1 = (undefined *)0x0;
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  puVar11 = param_2;
code_r0x00010c241220:
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar11,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107eb7784; end: 107eb778b;  */

void FUN_107eb7784(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107eb778c; end: 107eb77cf;  */

bool FUN_107eb778c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8b0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 107eb77d0; end: 107eb77df;  */

void FUN_107eb77d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_duplicatedFromSnapId_1125c05d8);
  return;
}


