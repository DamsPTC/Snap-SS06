/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0eefb4; end: 10b0ef007; -[SCNContentManagerReadStream free] */

void FUN_10b0eefb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10b0ef008; end: 10b0ef013; -[SCNContentManagerReadStream .cxx_destruct] */

void FUN_10b0ef008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ef014; end: 10b0ef117; -[SCNoOpContentResultImpl initWithContentKey:status:error:assertionEnabled:] */

undefined8 *
FUN_10b0ef014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112705c90;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
    puVar3 = PTR_PTR_1126dfb18;
    _objc_alloc();
    uVar2 = param_5;
    func_0x00010b7f5650(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f3a0();
    uVar4 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b0ef118; end: 10b0ef11f; -[SCNoOpContentResultImpl getTotalSize] */

undefined8 FUN_10b0ef118(void)

{
  return 0;
}



/* Entry: 10b0ef120; end: 10b0ef127; -[SCNoOpContentResultImpl getPrefetchSize] */

undefined8 FUN_10b0ef120(void)

{
  return 0;
}



/* Entry: 10b0ef128; end: 10b0ef12f; -[SCNoOpContentResultImpl getAvailableSize] */

undefined8 FUN_10b0ef128(void)

{
  return 0;
}



/* Entry: 10b0ef130; end: 10b0ef137; -[SCNoOpContentResultImpl pushBytesToWriteStream:start:count:] */

undefined8 FUN_10b0ef130(void)

{
  return 0;
}



/* Entry: 10b0ef138; end: 10b0ef15f; -[SCNoOpContentResultImpl getContentKey] */

void FUN_10b0ef138(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0ef160; end: 10b0ef167; -[SCNoOpContentResultImpl getStatus] */

undefined8 FUN_10b0ef160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0ef168; end: 10b0ef16f; -[SCNoOpContentResultImpl createReadStream] */

undefined8 FUN_10b0ef168(void)

{
  return 0;
}



/* Entry: 10b0ef170; end: 10b0ef177; -[SCNoOpContentResultImpl retrieveIfSingleFile] */

undefined8 FUN_10b0ef170(void)

{
  return 0;
}



/* Entry: 10b0ef178; end: 10b0ef19f; -[SCNoOpContentResultImpl getMetrics] */

void FUN_10b0ef178(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0ef1a0; end: 10b0ef1a7; -[SCNoOpContentResultImpl getIsStreaming] */

undefined8 FUN_10b0ef1a0(void)

{
  return 0;
}



/* Entry: 10b0ef1a8; end: 10b0ef1ab; -[SCNoOpContentResultImpl updateStreamingRequestContext:] */

void FUN_10b0ef1a8(void)

{
  return;
}



/* Entry: 10b0ef1ac; end: 10b0ef1b3; -[SCNoOpContentResultImpl getCurrentStreamingRequestContext] */

undefined8 FUN_10b0ef1ac(void)

{
  return 0;
}



/* Entry: 10b0ef1b4; end: 10b0ef1b7; -[SCNoOpContentResultImpl free] */

void FUN_10b0ef1b4(void)

{
  return;
}



/* Entry: 10b0ef1b8; end: 10b0ef1bf; -[SCNoOpContentResultImpl getIsZipArchive] */

undefined8 FUN_10b0ef1b8(void)

{
  return 0;
}



/* Entry: 10b0ef1c0; end: 10b0ef1c7; -[SCNoOpContentResultImpl getZipEntryData:] */

undefined8 FUN_10b0ef1c0(void)

{
  return 0;
}



/* Entry: 10b0ef1c8; end: 10b0ef1cf; -[SCNoOpContentResultImpl getZipArchiveForLocalContent] */

undefined8 FUN_10b0ef1c8(void)

{
  return 0;
}



/* Entry: 10b0ef1d0; end: 10b0ef1d7; -[SCNoOpContentResultImpl getFilePath] */

undefined8 FUN_10b0ef1d0(void)

{
  return 0;
}



/* Entry: 10b0ef1d8; end: 10b0ef1df; -[SCNoOpContentResultImpl getZipEntryFilePath:] */

undefined8 FUN_10b0ef1d8(void)

{
  return 0;
}



/* Entry: 10b0ef1e0; end: 10b0ef1e3; -[SCNoOpContentResultImpl addDownloadCompletionListener:] */

void FUN_10b0ef1e0(void)

{
  return;
}



/* Entry: 10b0ef1e4; end: 10b0ef1eb; -[SCNoOpContentResultImpl getIsAuthoritative] */

undefined8 FUN_10b0ef1e4(void)

{
  return 0;
}



/* Entry: 10b0ef1ec; end: 10b0ef1f3; -[SCNoOpContentResultImpl hasEncryptionData] */

undefined8 FUN_10b0ef1ec(void)

{
  return 0;
}



/* Entry: 10b0ef1f4; end: 10b0ef1fb; -[SCNoOpContentResultImpl getErrorMessage] */

undefined8 FUN_10b0ef1f4(void)

{
  return 0;
}



/* Entry: 10b0ef1fc; end: 10b0ef203; -[SCNoOpContentResultImpl stitchFilePath] */

undefined8 FUN_10b0ef1fc(void)

{
  return 0;
}



/* Entry: 10b0ef204; end: 10b0ef20b; -[SCNoOpContentResultImpl streamingProtocol] */

undefined8 FUN_10b0ef204(void)

{
  return 0;
}



/* Entry: 10b0ef20c; end: 10b0ef213; -[SCNoOpContentResultImpl resolvedUrl] */

undefined8 FUN_10b0ef20c(void)

{
  return 0;
}



/* Entry: 10b0ef214; end: 10b0ef21b; -[SCNoOpContentResultImpl isEncrypted] */

undefined8 FUN_10b0ef214(void)

{
  return 0;
}



/* Entry: 10b0ef21c; end: 10b0ef21f; -[SCNoOpContentResultImpl logConsumed:bytesRange:] */

void FUN_10b0ef21c(void)

{
  return;
}



/* Entry: 10b0ef220; end: 10b0ef24f; -[SCNoOpContentResultImpl .cxx_destruct] */

void FUN_10b0ef220(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ef250; end: 10b0ef2c7; -[SCNContentManagerBufferedContentFetcher initWithCpp:] */

undefined1 * FUN_10b0ef250(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705c98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0f04e8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27f08(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ef2c8; end: 10b0ef3af; +[SCNContentManagerBufferedContentFetcher create:contentFetcher:] */

void FUN_10b0ef2c8(void)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f05dc();
  func_0x00010b0f0524();
  func_0x00010b0f0550();
  FUN_10b10ae30(auStack_50);
  FUN_10b0f50fc(auStack_60);
  FUN_10b13cdf8(auStack_40,auStack_50,auStack_60);
  func_0x0001052a1374(auStack_60);
  func_0x0001052a1398(auStack_50);
  puVar1 = auStack_40;
  FUN_10b0f0090(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f08(auStack_40);
  func_0x00010b0f0500();
  func_0x00010b0f04f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0ef3b0; end: 10b0ef483; +[SCNContentManagerBufferedContentFetcher getUserScoped:] */

void FUN_10b0ef3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_70;
  func_0x00010b0f0524();
  func_0x000107c27f20(auStack_58,param_3);
  FUN_10b13cfac(&uStack_40,auStack_58);
  func_0x00010b0f0600();
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b0ef484(&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f0570();
  func_0x0001052a18c8(&uStack_40);
  func_0x00010b0f04f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0ef484; end: 10b0ef6b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b0ef484(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long alStack_68 [7];
  
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  alStack_68[5] = 0;
  alStack_68[6] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  func_0x0001052a15fc(alStack_68 + 3,param_1,alStack_68 + 1);
  func_0x0001052a1650(alStack_68 + 5,alStack_68 + 3);
  func_0x0001052a18c8(alStack_68 + 3);
  func_0x0001052a18c8(alStack_68 + 1);
  func_0x000107c27b48(alStack_68);
  func_0x000107c27b4c(alStack_68 + 3,alStack_68[0]);
  lStack_78 = alStack_68[0];
  alStack_68[0] = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = alStack_68[5] + 0x48;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  puStack_80 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_68[5];
  func_0x0001052a1688();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_78;
    puVar1 = puStack_80;
    *puVar4 = &PTR_FUN_110cb9ce8;
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(alStack_68[5] + 0x90);
    *(undefined8 **)(alStack_68[5] + 0x90) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    func_0x0001052a1650(&lStack_90,alStack_68 + 5);
  }
  func_0x000107c2798c(&lStack_a0);
  if (lStack_90 != 0) {
    lStack_a0 = lStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        FUN_10b0f04e8();
      } while (extraout_w10 != 0);
    }
    FUN_10b0f0230(&puStack_80);
    func_0x00010b0f05f8();
  }
  uStack_a8 = alStack_68[4];
  uStack_b0 = alStack_68[3];
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  func_0x0001052a18c8(&lStack_90);
  func_0x00010b0f04bc(&puStack_80);
  func_0x000107c27b58(alStack_68 + 3);
  lVar3 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar3 != 0) {
    func_0x00010b0f0660();
  }
  func_0x0001052a18c8(alStack_68 + 5);
  func_0x000107c27b58(&uStack_b0);
  _objc_release(0);
  func_0x00010b0f04f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0ef6b4; end: 10b0ef743; +[SCNContentManagerBufferedContentFetcher getGlobalScoped] */

void FUN_10b0ef6b4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b13dab4(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b0ef484(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f0564();
  func_0x00010b0f05f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ef744; end: 10b0ef833; -[SCNContentManagerBufferedContentFetcher fetchFullContent:contentBundle:] */

void FUN_10b0ef744(void)

{
  undefined1 *puVar1;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [120];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f05dc();
  func_0x00010b0f0524();
  func_0x00010b0f0550();
  FUN_10b49b094(auStack_b8);
  func_0x00010b0f064c(auStack_c8);
  func_0x00010b0f0618(auStack_40);
  func_0x00010b0f0578();
  func_0x00010529fe04(auStack_b8);
  puVar1 = auStack_40;
  FUN_10b0f0fe4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010529fe38(auStack_40);
  func_0x00010b0f0500();
  func_0x00010b0f04f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0ef834; end: 10b0ef95b; -[SCNContentManagerBufferedContentFetcher fetchContentRange:contentBundle:range:] */

void FUN_10b0ef834(void)

{
  undefined1 *puVar1;
  undefined8 in_x4;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [120];
  undefined1 auStack_50 [16];
  
  func_0x00010b0f05dc();
  func_0x00010b0f0524();
  func_0x00010b0f0550();
  _objc_retain(in_x4);
  FUN_10b49b094(auStack_c8);
  func_0x00010b0f064c(auStack_d8);
  FUN_10b101880();
  func_0x00010b0f0654(auStack_50);
  func_0x00010b0f0608();
  func_0x00010529fe04(auStack_c8);
  puVar1 = auStack_50;
  FUN_10b0f0fe4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010529fe38(auStack_50);
  func_0x00010b0f05b8();
  func_0x00010b0f0500();
  func_0x00010b0f04f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0ef95c; end: 10b0efa8b; -[SCNContentManagerBufferedContentFetcher prefetchContent:requestContext:prefetchSignals:] */

void FUN_10b0ef95c(void)

{
  undefined1 *puVar1;
  undefined8 in_x4;
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [120];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010b0f05dc();
  func_0x00010b0f0524();
  func_0x00010b0f0550();
  _objc_retain(in_x4);
  func_0x00010b0f05a8(auStack_60);
  FUN_10b49b094(auStack_d8);
  FUN_10b0efa8c(auStack_118,in_x4);
  func_0x00010b0f0654(auStack_50);
  func_0x00010529fe04(auStack_d8);
  func_0x00010529fde0(auStack_60);
  puVar1 = auStack_50;
  FUN_10b1006f8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a00dc(auStack_50);
  func_0x00010b0f05b8();
  func_0x00010b0f0500();
  func_0x00010b0f04f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0efa8c; end: 10b0efaff;  */

void FUN_10b0efa8c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b0f0558();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 7) = 0;
  }
  else {
    FUN_10b100f20(&uStack_58);
    unaff_x20[1] = uStack_50;
    *unaff_x20 = uStack_58;
    unaff_x20[3] = uStack_40;
    unaff_x20[2] = uStack_48;
    unaff_x20[5] = uStack_30;
    unaff_x20[4] = uStack_38;
    unaff_x20[6] = uStack_28;
    *(undefined1 *)(unaff_x20 + 7) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0efb00; end: 10b0efba3; -[SCNContentManagerBufferedContentFetcher getContentStatusResult:] */

void FUN_10b0efb00(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  func_0x00010b0f0508();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b0f05a8(auStack_58);
  (**(code **)(*plVar2 + 0x28))(auStack_48,plVar2,auStack_58);
  func_0x00010b0f0578();
  puVar1 = auStack_48;
  FUN_10b0f0678(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f04f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0efba4; end: 10b0efc23; -[SCNContentManagerBufferedContentFetcher hasDownloadStarted:] */

undefined8 FUN_10b0efba4(undefined8 param_1)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b0f0508();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b0f05a8(auStack_40);
  func_0x00010b0f0638(*(undefined8 *)(*plVar1 + 0x30));
  func_0x00010b0f0610();
  func_0x00010b0f04f8();
  return param_1;
}



/* Entry: 10b0efc24; end: 10b0efca3; -[SCNContentManagerBufferedContentFetcher isDownloadComplete:] */

undefined8 FUN_10b0efc24(undefined8 param_1)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b0f0508();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b0f05a8(auStack_40);
  func_0x00010b0f0638(*(undefined8 *)(*plVar1 + 0x38));
  func_0x00010b0f0610();
  func_0x00010b0f04f8();
  return param_1;
}



/* Entry: 10b0efca4; end: 10b0efd3b; -[SCNContentManagerBufferedContentFetcher getCachePolicyManager] */

void FUN_10b0efca4(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x40))(auStack_30);
  FUN_10b0f3690(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f058c();
  func_0x0001052a0348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0efd3c; end: 10b0efe17; -[SCNContentManagerBufferedContentFetcher linkContent:contentBundle:] */

void FUN_10b0efd3c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [72];
  
  func_0x00010b0f05dc();
  func_0x00010b0f0524();
  func_0x00010b0f0550();
  FUN_10b0f571c(auStack_98);
  func_0x00010b0f064c(auStack_a8);
  func_0x00010b0f0618(auStack_78);
  func_0x00010b0f0578();
  func_0x00010b0f0600();
  puVar1 = auStack_78;
  func_0x00010563299c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a038c(auStack_78);
  func_0x00010b0f0500();
  func_0x00010b0f04f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0efe18; end: 10b0effbf; -[SCNContentManagerBufferedContentFetcher retrieveSyncIfCached:range:] */

void FUN_10b0efe18(long param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [72];
  char cStack_50;
  long lStack_48;
  
  func_0x00010b0f05dc();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b0f0524();
  func_0x00010b0f0550();
  plVar6 = *(long **)(param_1 + 0x18);
  func_0x00010b0f05a8(auStack_a8);
  FUN_10b0effc0(auStack_c0);
  puVar4 = auStack_a8;
  (**(code **)(*plVar6 + 0x50))(auStack_98,plVar6,puVar4,auStack_c0);
  func_0x00010b0f0608();
  puVar3 = PTR_PTR_1126b9638;
  if (cStack_50 == '\x01') {
    func_0x0001052a0450(auStack_98);
    func_0x000107c31724();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010563299c(auStack_98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b0f0534();
  func_0x0001052a08f8(auStack_98);
  func_0x00010b0f0500();
  func_0x00010b0f04f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar4;
  func_0x00010b0f0534();
  func_0x0001052a08f8(auStack_98);
  if ((int)puVar4 == 1) {
    func_0x00010b0f05b0();
    func_0x00010bd47250(&UNK_10f72b321);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b0eff94);
    (*pcVar2)();
  }
  func_0x00010b0f0500();
  func_0x00010b0f04f8();
  func_0x00010b0f0598();
  func_0x00010b0f0558();
  bVar1 = unaff_x19 == 0;
  if (bVar1) {
    *(undefined1 *)unaff_x20 = 0;
  }
  else {
    FUN_10b101880();
    *unaff_x20 = unaff_x19;
    unaff_x20[1] = (long)puVar5;
  }
  *(bool *)(unaff_x20 + 2) = !bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0effc0; end: 10b0f000f;  */

void FUN_10b0effc0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010b0f0558();
  bVar1 = unaff_x19 == 0;
  if (bVar1) {
    *(undefined1 *)unaff_x20 = 0;
  }
  else {
    FUN_10b101880();
    *unaff_x20 = unaff_x19;
    unaff_x20[1] = param_2;
  }
  *(bool *)(unaff_x20 + 2) = !bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f0010; end: 10b0f008f;  */

void FUN_10b0f0010(void)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x00010b0f0558();
  if (unaff_x19 == 0) {
    plVar1 = (long *)0x10;
    ___cxa_allocate_exception();
    func_0x00010527a174();
    ___cxa_throw(plVar1,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
    ___cxa_free_exception();
    func_0x00010b0f052c();
    if (*plVar1 != 0) {
      FUN_10b0f0150();
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
  unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x20);
  *unaff_x20 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b0f04e8();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f0090; end: 10b0f00bb;  */

void FUN_10b0f0090(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0f0150();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f00bc; end: 10b0f010f; -[SCNContentManagerBufferedContentFetcher .cxx_destruct] */

void FUN_10b0f00bc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cb9cc8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27f08((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f0110; end: 10b0f014f; -[SCNContentManagerBufferedContentFetcher .cxx_construct] */

undefined8 * FUN_10b0f0110(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b0f04e8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0f0150; end: 10b0f01c3;  */

void FUN_10b0f0150(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cb9cc8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b0f04e8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0f01c4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f058c();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f01c4; end: 10b0f022f;  */

void FUN_10b0f01c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b7f70;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0f04e8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c27f08(&uStack_30);
  return;
}



/* Entry: 10b0f0230; end: 10b0f042b;  */

void FUN_10b0f0230(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10b0f04e8();
    } while (extraout_w10 != 0);
    do {
      FUN_10b0f04e8();
    } while (extraout_w10_00 != 0);
  }
  uVar1 = *param_1;
  uStack_68 = param_2;
  lStack_60 = param_3;
  func_0x0001052a1980(auStack_58,&uStack_68);
  FUN_10b0f0090(auStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar1);
  func_0x00010b0f0534();
  func_0x000107c27f08(auStack_58);
  func_0x0001052a18c8(&uStack_68);
  func_0x0001052a18c8(&uStack_78);
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10b0f042c; end: 10b0f042f;  */

undefined8 * FUN_10b0f042c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9ce8;
  func_0x00010b0f04bc(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f0430; end: 10b0f0443;  */

void FUN_10b0f0430(void)

{
  FUN_10b0f0490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f0444; end: 10b0f048f;  */

void FUN_10b0f0444(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10b0f04e8();
    } while (extraout_w10 != 0);
  }
  FUN_10b0f0230(param_1 + 8);
  func_0x00010b0f0570();
  return;
}



/* Entry: 10b0f0490; end: 10b0f04e7;  */

undefined8 * FUN_10b0f0490(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9ce8;
  func_0x00010b0f04bc(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f04e8; end: 10b0f0677;  */

void FUN_10b0f04e8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0f0678; end: 10b0f06ab;  */

void FUN_10b0f0678(void)

{
  _objc_alloc(PTR_PTR_1126dfb20);
  func_0x00010c01ecc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f06ac; end: 10b0f0723; -[SCNContentManagerBufferedContentFetcherResult initWithCpp:] */

undefined1 * FUN_10b0f06ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705ca0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b0f202c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010529fe38(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0f0724; end: 10b0f0773; -[SCNContentManagerBufferedContentFetcherResult cancel] */

void FUN_10b0f0724(void)

{
  long extraout_x8;
  
  func_0x00010b0f238c();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10b0f0774; end: 10b0f099b; -[SCNContentManagerBufferedContentFetcherResult consumeFuture] */

void FUN_10b0f0774(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b0f238c();
  func_0x00010b0f235c();
  func_0x00010b0f22cc();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f209c();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052a42fc(auStack_60,auStack_e0,&uStack_70);
  func_0x0001052a4324(&uStack_50,auStack_60);
  func_0x0001052a4560(auStack_60);
  func_0x0001052a4560(&uStack_70);
  func_0x000107c27b48(&uStack_78);
  func_0x000107c27b4c(auStack_60,uStack_78);
  func_0x00010b0f211c();
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_50;
  func_0x0001052a4348();
  if ((int)uVar1 == 0) {
    func_0x00010b0f21f0();
    func_0x00010b0f21a8(&PTR_FUN_110cb9d38);
    if (extraout_x8 != 0) {
      func_0x00010b0f21c8();
    }
  }
  else {
    func_0x0001052a4324(&lStack_a0,&uStack_50);
  }
  func_0x00010b0f22b4();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010b0f202c();
      } while (extraout_w10 != 0);
    }
    FUN_10b0f1184(auStack_90);
    func_0x0001052a4560(&lStack_b0);
  }
  func_0x00010b0f23b8();
  func_0x0001052a4560();
  puVar2 = auStack_90;
  func_0x00010b0f1404();
  func_0x00010b0f2244();
  func_0x00010b0f23ac();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010b0f2020();
  }
  func_0x0001052a4560(&uStack_50);
  func_0x000107c27b58(auStack_c0);
  _objc_release(0);
  func_0x00010b0f2068();
  func_0x00010b0f227c();
  func_0x0001052a4560(auStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f099c; end: 10b0f0bc3; -[SCNContentManagerBufferedContentFetcherResult contentLength] */

void FUN_10b0f099c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b0f238c();
  func_0x00010b0f235c();
  func_0x00010b0f22cc();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f209c();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052a484c(auStack_60,auStack_e0,&uStack_70);
  func_0x0001052a4874(&uStack_50,auStack_60);
  func_0x0001052a4ab0(auStack_60);
  func_0x0001052a4ab0(&uStack_70);
  func_0x000107c27b48(&uStack_78);
  func_0x000107c27b4c(auStack_60,uStack_78);
  func_0x00010b0f211c();
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_50;
  func_0x0001052a4898();
  if ((int)uVar1 == 0) {
    func_0x00010b0f21f0();
    func_0x00010b0f21a8(&PTR_FUN_110cb9d78);
    if (extraout_x8 != 0) {
      func_0x00010b0f21c8();
    }
  }
  else {
    func_0x0001052a4874(&lStack_a0,&uStack_50);
  }
  func_0x00010b0f22b4();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010b0f202c();
      } while (extraout_w10 != 0);
    }
    FUN_10b0f1428(auStack_90);
    func_0x0001052a4ab0(&lStack_b0);
  }
  func_0x00010b0f23b8();
  func_0x0001052a4ab0();
  puVar2 = auStack_90;
  func_0x00010b0f16b4();
  func_0x00010b0f2244();
  func_0x00010b0f23ac();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010b0f2020();
  }
  func_0x0001052a4ab0(&uStack_50);
  func_0x000107c27b58(auStack_c0);
  _objc_release(0);
  func_0x00010b0f2068();
  func_0x00010b0f2274();
  func_0x0001052a4ab0(auStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f0bc4; end: 10b0f0c4b; -[SCNContentManagerBufferedContentFetcherResult stitchFilePath] */

void FUN_10b0f0bc4(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010b0f238c();
  func_0x00010b0f235c();
  func_0x00010b0f22cc();
  FUN_10b0f0c4c(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f2090();
  func_0x00010b0f2210();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f0c4c; end: 10b0f0cc3;  */

void FUN_10b0f0c4c(void)

{
  undefined1 auStack_40 [16];
  
  func_0x00010b0f2218();
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f209c();
  FUN_10b0f16d8(auStack_40);
  func_0x000107c27b58(auStack_40);
  func_0x00010b0f22a4();
  func_0x00010b0f2068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f0cc4; end: 10b0f0d6f; -[SCNContentManagerBufferedContentFetcherResult setRequestContext:] */

void FUN_10b0f0cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_a8 [120];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b49b094(auStack_a8,param_3);
  (**(code **)(*plVar1 + 0x30))(plVar1,auStack_a8);
  func_0x00010529fe04(auStack_a8);
  func_0x00010b0f2068();
  return;
}



/* Entry: 10b0f0d70; end: 10b0f0ecf; -[SCNContentManagerBufferedContentFetcherResult associateCachePolicy:cachePolicy:serializedFeatureMetadata:] */

void FUN_10b0f0d70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &uStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_10b0f571c(auStack_70,param_3);
  FUN_10b0f30c4(auStack_88,param_4);
  func_0x000107c28248(auStack_a8,param_5);
  (**(code **)(*plVar2 + 0x38))(&uStack_50,plVar2,auStack_70,auStack_88,auStack_a8);
  func_0x000107c279c4(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  uStack_b8 = uStack_48;
  uStack_c0 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b0f0ed0(&uStack_c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f2164();
  func_0x00010b0f225c();
  func_0x00010b0f20a8();
  func_0x00010b0f20b0();
  func_0x00010b0f2068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f0ed0; end: 10b0f0f47;  */

void FUN_10b0f0ed0(void)

{
  undefined1 auStack_40 [16];
  
  func_0x00010b0f2218();
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f209c();
  FUN_10b0f1bb0(auStack_40);
  func_0x000107c27b58(auStack_40);
  func_0x00010b0f22a4();
  func_0x00010b0f2068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f0f48; end: 10b0f0fe3; -[SCNContentManagerBufferedContentFetcherResult logConsumed:bytesRange:] */

void FUN_10b0f0f48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b0effc0(auStack_48,param_4);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_3,auStack_48);
  func_0x00010b0f2068();
  return;
}



/* Entry: 10b0f0fe4; end: 10b0f100f;  */

void FUN_10b0f0fe4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0f10a4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f1010; end: 10b0f1063; -[SCNContentManagerBufferedContentFetcherResult .cxx_destruct] */

void FUN_10b0f1010(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cb9d18;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010529fe38((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f1064; end: 10b0f10a3; -[SCNContentManagerBufferedContentFetcherResult .cxx_construct] */

undefined8 * FUN_10b0f1064(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0f10a4; end: 10b0f1117;  */

void FUN_10b0f10a4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cb9d18;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0f1118);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f20c8();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f1118; end: 10b0f1183;  */

void FUN_10b0f1118(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb28;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010529fe38(&uStack_30);
  return;
}



/* Entry: 10b0f1184; end: 10b0f137b;  */

void FUN_10b0f1184(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [72];
  
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b0f202c();
    } while (extraout_w10_00 != 0);
  }
  uStack_98 = param_2;
  lStack_90 = param_3;
  func_0x0001052a460c(auStack_88,&uStack_98);
  func_0x00010b0f23e4();
  if ((bool)in_ZR) {
    func_0x0001052a46c4(auStack_88);
    func_0x000107c31724();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0f22bc();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bcc1ca8(auStack_88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0f22bc();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b0f210c();
  func_0x00010b0f2344();
  func_0x00010b0f20a8();
  func_0x0001052a4808(auStack_88);
  func_0x0001052a4560(&uStack_98);
  func_0x0001052a4560(&uStack_a8);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b0f137c; end: 10b0f137f;  */

undefined8 * FUN_10b0f137c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9d38;
  func_0x00010b0f1404(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f1380; end: 10b0f1393;  */

void FUN_10b0f1380(void)

{
  FUN_10b0f13d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f1394; end: 10b0f13d7;  */

void FUN_10b0f1394(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b0f2378();
  if (param_3 != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
  }
  FUN_10b0f1184(param_1 + 8);
  func_0x00010b0f227c();
  return;
}



/* Entry: 10b0f13d8; end: 10b0f1427;  */

undefined8 * FUN_10b0f13d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9d38;
  func_0x00010b0f1404(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f1428; end: 10b0f162b;  */

void FUN_10b0f1428(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 auStack_88 [9];
  
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b0f202c();
    } while (extraout_w10_00 != 0);
  }
  uStack_98 = param_2;
  lStack_90 = param_3;
  func_0x0001052a4b5c(auStack_88,&uStack_98);
  func_0x00010b0f23e4();
  if ((bool)in_ZR) {
    puVar1 = auStack_88;
    func_0x0001052a4c14();
    func_0x000107c28140(*puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bcc1ca8(auStack_88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0f22bc();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b0f210c();
  func_0x00010b0f2344();
  func_0x00010b0f20a8();
  func_0x0001052a4cf0(auStack_88);
  func_0x0001052a4ab0(&uStack_98);
  func_0x0001052a4ab0(&uStack_a8);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b0f162c; end: 10b0f162f;  */

undefined8 * FUN_10b0f162c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9d78;
  func_0x00010b0f16b4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f1630; end: 10b0f1643;  */

void FUN_10b0f1630(void)

{
  FUN_10b0f1688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f1644; end: 10b0f1687;  */

void FUN_10b0f1644(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b0f2378();
  if (param_3 != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
  }
  FUN_10b0f1428(param_1 + 8);
  func_0x00010b0f2274();
  return;
}



/* Entry: 10b0f1688; end: 10b0f16d7;  */

undefined8 * FUN_10b0f1688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9d78;
  func_0x00010b0f16b4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f16d8; end: 10b0f183f;  */

void FUN_10b0f16d8(void)

{
  long lVar1;
  undefined1 *puVar2;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long alStack_90 [3];
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b0f2364();
  func_0x0001052a4d28(auStack_40);
  func_0x0001052a4d50(aiStack_30,auStack_40);
  func_0x0001052a4f84(auStack_40);
  func_0x0001052a4f84(auStack_50);
  func_0x000107c27b48(&uStack_58);
  func_0x000107c27b4c(auStack_40,uStack_58);
  func_0x00010b0f20d4();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4d74();
  if (aiStack_30[0] == 0) {
    puVar2 = auStack_68;
    FUN_10b0f1910(alStack_90);
    func_0x00010b0f22f4();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x00010b0f2020();
      lVar1 = alStack_90[0];
      alStack_90[0] = 0;
      if (lVar1 != 0) {
        func_0x00010b0f2020();
      }
    }
  }
  else {
    func_0x0001052a4d50(&lStack_78,aiStack_30);
  }
  func_0x00010b0f21d8();
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x00010b0f202c();
      } while (extraout_w10 != 0);
    }
    FUN_10b0f1840(auStack_68,&lStack_a0);
    func_0x0001052a4f84(&lStack_a0);
  }
  func_0x00010b0f2398();
  func_0x0001052a4f84();
  puVar2 = auStack_68;
  FUN_10b0f1b74();
  func_0x00010b0f22ac();
  func_0x00010b0f23cc();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010b0f2020();
  }
  func_0x0001052a4f84(aiStack_30);
  return;
}



/* Entry: 10b0f1840; end: 10b0f190f;  */

void FUN_10b0f1840(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = *param_2;
  lStack_38 = param_2[1];
  if (lStack_38 == 0) {
    lStack_38 = 0;
  }
  else {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b0f19d0(param_1,&uStack_40);
  func_0x0001052a4f84(&uStack_40);
  func_0x00010b0f2210();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b0f1910; end: 10b0f193b;  */

void FUN_10b0f1910(void)

{
  func_0x00010b0f21f0();
  func_0x00010b0f22dc(&PTR_FUN_110cb9db8);
  return;
}



/* Entry: 10b0f193c; end: 10b0f193f;  */

undefined8 * FUN_10b0f193c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9db8;
  FUN_10b0f1b74(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f1940; end: 10b0f1953;  */

void FUN_10b0f1940(void)

{
  FUN_10b0f19a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f1954; end: 10b0f19a3;  */

void FUN_10b0f1954(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
  }
  FUN_10b0f1840(param_1 + 8,&uStack_30);
  func_0x0001052a4f84(&uStack_30);
  return;
}



/* Entry: 10b0f19a4; end: 10b0f19cf;  */

undefined8 * FUN_10b0f19a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9db8;
  FUN_10b0f1b74(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f19d0; end: 10b0f1adb;  */

void FUN_10b0f19d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [72];
  
  func_0x0001052a5030(auStack_78,param_2);
  FUN_10b0f1adc(auStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f2144();
  func_0x00010c220160();
  func_0x00010b0f20a8();
  func_0x0001052a51d4(auStack_78);
  return;
}



/* Entry: 10b0f1adc; end: 10b0f1b73;  */

void FUN_10b0f1adc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9638;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001052a50e8();
    func_0x000107c27f28();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bcc1ca8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b0f2068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f1b74; end: 10b0f1baf;  */

undefined8 FUN_10b0f1b74(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b0f2084();
  func_0x00010b0f2350();
  return unaff_x19;
}



/* Entry: 10b0f1bb0; end: 10b0f1d0f;  */

void FUN_10b0f1bb0(void)

{
  long lVar1;
  undefined1 *puVar2;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long alStack_90 [3];
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 auStack_58 [3];
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b0f2364();
  func_0x0001052a5474(auStack_40);
  func_0x0001052a549c(aiStack_30,auStack_40);
  func_0x0001052a55c0(auStack_40);
  func_0x00010b0f225c();
  func_0x000107c27b48(auStack_58);
  func_0x000107c27b4c(auStack_40,auStack_58[0]);
  func_0x00010b0f20d4();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a54c0();
  if (aiStack_30[0] == 0) {
    puVar2 = auStack_68;
    FUN_10b0f1de8(alStack_90);
    func_0x00010b0f22f4();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x00010b0f2020();
      lVar1 = alStack_90[0];
      alStack_90[0] = 0;
      if (lVar1 != 0) {
        func_0x00010b0f2020();
      }
    }
  }
  else {
    func_0x0001052a549c(&lStack_78,aiStack_30);
  }
  func_0x00010b0f21d8();
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x00010b0f202c();
      } while (extraout_w10 != 0);
    }
    FUN_10b0f1d10(auStack_68,&lStack_a0);
    func_0x00010b0f2164();
  }
  func_0x00010b0f2398();
  func_0x0001052a55c0();
  puVar2 = auStack_68;
  FUN_10b0f1fe4();
  func_0x00010b0f22ac();
  func_0x00010b0f23cc();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010b0f2020();
  }
  func_0x0001052a55c0(aiStack_30);
  return;
}



/* Entry: 10b0f1d10; end: 10b0f1de7;  */

void FUN_10b0f1d10(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = *param_2;
  lStack_48 = param_2[1];
  if (lStack_48 == 0) {
    lStack_38 = 0;
  }
  else {
    plVar1 = (long *)(lStack_48 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lStack_38 = lStack_48;
    } while (cVar2 != '\0');
  }
  uStack_40 = uStack_50;
  FUN_10b0f1ea8(param_1,&uStack_40);
  func_0x0001052a55c0(&uStack_40);
  func_0x0001052a55c0(&uStack_50);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b0f1de8; end: 10b0f1e13;  */

void FUN_10b0f1de8(void)

{
  func_0x00010b0f21f0();
  func_0x00010b0f22dc(&PTR_FUN_110cb9df8);
  return;
}



/* Entry: 10b0f1e14; end: 10b0f1e17;  */

undefined8 * FUN_10b0f1e14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9df8;
  FUN_10b0f1fe4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f1e18; end: 10b0f1e2b;  */

void FUN_10b0f1e18(void)

{
  FUN_10b0f1e7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


