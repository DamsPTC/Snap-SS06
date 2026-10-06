/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085ea048; end: 1085ea0db; -[SCTV3HeadlessSessionController _stringFromPushType:] */

void FUN_1085ea048(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3 - 0x1c;
  if ((uVar2 < 0xb) && ((0x7fbU >> (ulong)((uint)uVar2 & 0x1f) & 1) != 0)) {
    puVar3 = (&PTR_PTR_110a5a7e0)[uVar2];
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ee5478);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085ea0dc; end: 1085ea17b; -[SCTV3HeadlessSessionController _convoMetadataForNotification:] */

void FUN_1085ea0dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  puVar2 = PTR_PTR_1126b55b8;
  if (lVar1 - 0x21U < 6) {
    func_0x00010bfce840(PTR_PTR_1126b55b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c15de20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7ef20(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085ea17c; end: 1085ea25b; -[SCTV3HeadlessSessionController _removeCallKitNotificationForTalkContext:] */

void FUN_1085ea17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x80);
  uVar1 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar4 != 0) {
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d300();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    uVar1 = param_3;
    func_0x00010bf4e8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar5,param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085ea25c; end: 1085ea33f; -[SCTV3HeadlessSessionController .cxx_destruct] */

void FUN_1085ea25c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085ea340; end: 1085eaa9f; -[SCTV3SessionWrapper initWithTalkContext:callIntent:callingSession:talkCoreDispatcher:chatTransportServices:identityServices:talkContextMutableFactory:screenCaptureServices:callSuperResolutionServices:batteryObserver:notificationPool:applicationLifecycleEvents:localFrameProvider:platformEventSubject:rendererManagerBridge:callPageConfig:] */

undefined8 *
FUN_1085ea340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_80 = PTR_PTR_1126fd058;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf0ae40(param_6);
    _objc_retain(param_3);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c064480(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175ca0(puVar1);
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126da5d8;
    _objc_alloc_init();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126da5e0;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126da5e8;
    _objc_alloc();
    func_0x00010c0505a0();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126da5f0;
    _objc_alloc();
    func_0x00010c030020();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar1[0x15] = 3;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar1[0x1f] = 0;
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0x1d];
    puVar3 = PTR_PTR_1126da5c0;
    _objc_alloc(PTR_PTR_1126da5c0);
    func_0x00010c04bde0();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    *(undefined4 *)((long)puVar1 + 0x104) = 3;
    puVar1[0x24] = 0;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    uVar4 = puVar1[0x21];
    func_0x00010bf50700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1085eaaa0;
    puStack_98 = &UNK_110a59480;
    _objc_retain(param_8);
    uVar2 = uVar4;
    uStack_90 = param_8;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_initWeak(auStack_b8,puVar1);
    uVar7 = puVar1[0x14];
    uVar4 = puVar1[1];
    func_0x00010c0f98a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ea0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1085eaaf8;
    puStack_c8 = &UNK_110842c58;
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar2 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar5 = puVar1[0x21];
    func_0x00010bf50700(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1085eab48;
    puStack_f0 = &UNK_110a59480;
    _objc_retain(param_8);
    uVar2 = uVar5;
    uStack_e8 = param_8;
    func_0x00010c2656e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[1];
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_110,auStack_b8);
    uVar7 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x00010bec8440(puVar1);
    _objc_destroyWeak(auStack_110);
    _objc_release(uStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
  }
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085eaaa0; end: 1085eab47;  */

void FUN_1085eaaa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf517c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12a300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085eab48; end: 1085eac03;  */

void FUN_1085eab48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf51800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074920();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bf517c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292be0(0x4008000000000000,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085eac04; end: 1085eac3b;  */

void FUN_1085eac04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c288f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085eac3c; end: 1085eac8f; -[SCTV3SessionWrapper dealloc] */

void FUN_1085eac3c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bdfb3a0();
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x98));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x90));
  puStack_28 = PTR_PTR_1126fd058;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085eac90; end: 1085eac97; -[SCTV3SessionWrapper addListener:] */

void FUN_1085eac90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1085eac98; end: 1085eac9f; -[SCTV3SessionWrapper removeListener:] */

void FUN_1085eac98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1085eaca0; end: 1085eaca7; -[SCTV3SessionWrapper addExtraListener:] */

void FUN_1085eaca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1085eaca8; end: 1085eacaf; -[SCTV3SessionWrapper removeExtraListener:] */

void FUN_1085eaca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1085eacb0; end: 1085eaceb; -[SCTV3SessionWrapper createToken] */

void FUN_1085eacb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da5f8;
  _objc_alloc_init(PTR_PTR_1126da5f8);
  func_0x00010befc480(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085eacec; end: 1085ead23; -[SCTV3SessionWrapper flushTokenUpdates:] */

void FUN_1085eacec(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
  func_0x00010bf4bb20();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be947d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resolveActiveCallUI_112582b90);
    return;
  }
  return;
}



/* Entry: 1085ead24; end: 1085ead5b; -[SCTV3SessionWrapper invalidateToken:] */

void FUN_1085ead24(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
  func_0x00010c12eb80();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be947d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resolveActiveCallUI_112582b90);
    return;
  }
  return;
}



/* Entry: 1085ead5c; end: 1085eada7; -[SCTV3SessionWrapper dispose] */

void FUN_1085ead5c(long param_1)

{
  func_0x00010c255780(*(undefined8 *)(param_1 + 0x48));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010bdfb3a0(param_1);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010c160740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085eada8; end: 1085eadab; -[SCTV3SessionWrapper state] */

void FUN_1085eada8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf288b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_callingSessionState_1125a7bd0);
  return;
}



/* Entry: 1085eadac; end: 1085eadef; -[SCTV3SessionWrapper localParticipant] */

void FUN_1085eadac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf288a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085eadf0; end: 1085eadf7; -[SCTV3SessionWrapper talkSessionState] */

undefined8 FUN_1085eadf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1085eadf8; end: 1085eae47; -[SCTV3SessionWrapper updateMuteStatus:] */

void FUN_1085eadf8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1085eae48;
  puStack_20 = &UNK_110a5a838;
  uStack_18 = param_3;
  func_0x00010be98020(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1085eae48; end: 1085eaecf;  */

void FUN_1085eae48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da600;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04f9c0();
  puVar2 = PTR_PTR_1126da608;
  func_0x00010bf100c0(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085eaed0; end: 1085eb057; -[SCTV3SessionWrapper updatePublishedMedia:isMuted:completion:] */

void FUN_1085eaed0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf288a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c6080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c150e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = uVar4;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c079ba0();
    if ((uVar2 & 1) == 0) {
      puVar5 = PTR_PTR_1126da610;
      _objc_alloc();
      uVar2 = uVar4;
      func_0x00010bf0ed00(uVar4);
      func_0x00010bff5160(puVar5,param_2,uVar2);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _objc_release(uVar1);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1085eb058;
  puStack_78 = &UNK_110a5a858;
  puStack_70 = puVar5;
  uStack_68 = param_5;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_5);
  _objc_retain(puVar5);
  func_0x00010be98020(param_1,param_2,&puStack_90);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 1085eb058; end: 1085eb1b3;  */

void FUN_1085eb058(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = PTR_PTR_1126da618;
    _objc_alloc();
    func_0x00010bff51e0();
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010c1f6e20(puVar1);
    }
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126da620;
      _objc_alloc(PTR_PTR_1126da620);
      func_0x00010c029d40();
      puVar3 = PTR_PTR_1126da608;
      func_0x00010c287880(PTR_PTR_1126da608);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      goto LAB_1085eb128;
    }
  }
  puVar3 = PTR_PTR_1126da608;
  func_0x00010bf83440(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
LAB_1085eb128:
  func_0x00010c0d9840(param_2);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1085eb1b4;
    puStack_50 = &UNK_110849530;
    _objc_retain(lVar4);
    lStack_48 = lVar4;
    func_0x000107c312cc("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
  }
  _objc_release(puVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 1085eb1b4; end: 1085eb1bf;  */

void FUN_1085eb1b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085eb1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1085eb1c0; end: 1085eb1cb; -[SCTV3SessionWrapper dismissCall] */

void FUN_1085eb1c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__runOnTalkCoreThreadWithPlatform_1125839a8,
             &PTR___NSConcreteGlobalBlock_110a5a8a8);
  return;
}



/* Entry: 1085eb1cc; end: 1085eb223;  */

void FUN_1085eb1cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_2);
  func_0x00010bf83440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085eb224; end: 1085eb273; -[SCTV3SessionWrapper reportNotificationDisplayType:deliveryMechanism:] */

void FUN_1085eb224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc0000000;
  pcStack_30 = FUN_1085eb274;
  puStack_28 = &UNK_110a5a8c8;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x00010be98020(param_1,param_2,&puStack_40);
  return;
}



/* Entry: 1085eb274; end: 1085eb31f;  */

void FUN_1085eb274(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126da628;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_1085f87fc(uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fde0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126da608;
  func_0x00010c0dbf20(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085eb320; end: 1085eb37b; -[SCTV3SessionWrapper reportNotificationFailed:senderUserId:missedCallReason:] */

void FUN_1085eb320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_5 == 1) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc0000000;
    pcStack_28 = FUN_1085eb37c;
    puStack_20 = &UNK_110a5a8e8;
    uStack_18 = 1;
    func_0x00010be98020(param_1,param_2,&puStack_38);
  }
  return;
}



/* Entry: 1085eb37c; end: 1085eb3ff;  */

void FUN_1085eb37c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da630;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c02c2a0();
  puVar2 = PTR_PTR_1126da608;
  func_0x00010c0dbf60(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085eb400; end: 1085eb58f; -[SCTV3SessionWrapper _isAnyParticipantScreenSharing] */

long FUN_1085eb400(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  if (*(long *)(param_1 + 0xf8) == 1) {
    lVar6 = 1;
    lVar1 = param_1;
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
    func_0x00010bf288a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c12a2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    lVar6 = 0;
    if (lVar2 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(lVar1);
          }
          lVar3 = *(long *)(lStack_118 + lVar7 * 8);
          func_0x00010c0c6080();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c150e00();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c299160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar3);
          if ((lVar5 != 0) && (lVar4 = lVar5, func_0x00010c079ba0(), (int)lVar4 == 0)) {
            _objc_release(lVar5);
            lVar6 = 1;
            goto LAB_1085eb54c;
          }
          _objc_release(lVar5);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
      lVar6 = 0;
    }
LAB_1085eb54c:
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar6 = lVar1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    func_0x00010be3e1a0(lVar1);
    func_0x00010c1d9980(lVar6,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return lVar6;
}



/* Entry: 1085eb590; end: 1085eb5d3; -[SCTV3SessionWrapper _recomputeSuperResolutionPause] */

void FUN_1085eb590(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be3e1a0(param_1);
    func_0x00010c1d9980(lVar1,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085eb5d4; end: 1085eb793; -[SCTV3SessionWrapper _isRemoteCameraSinkId:] */

undefined8 FUN_1085eb5d4(long param_1,undefined8 param_2,undefined1 *param_3,undefined *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_e8 [128];
  long lStack_68;
  
  puVar13 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 == (undefined1 *)0x0) {
    uVar12 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010bf288a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c12a2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_4 = auStack_e8;
    lVar3 = lVar2;
    func_0x00010bf52a60();
    uVar12 = 0;
    if (lVar3 != 0) {
      lVar14 = *plStack_120;
      do {
        lVar15 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(lVar2);
          }
          puVar4 = *(undefined1 **)(lStack_128 + lVar15 * 8);
          func_0x00010c0c6080();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar4;
          func_0x00010c299160();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c23d040();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(puVar4);
          puVar1 = puVar5;
          func_0x00010c08fa60();
          if ((puVar1 != (undefined1 *)0x0) &&
             (puVar1 = param_3, puVar13 = (undefined8 *)puVar5, func_0x00010c0720c0(),
             ((ulong)puVar1 & 1) != 0)) {
            _objc_release(puVar5);
            uVar12 = 1;
            goto LAB_1085eb744;
          }
          _objc_release(puVar5);
          lVar15 = lVar15 + 1;
        } while (lVar3 != lVar15);
        param_4 = auStack_e8;
        lVar3 = lVar2;
        puVar13 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      uVar12 = 0;
    }
LAB_1085eb744:
    _objc_release(lVar2);
    puVar5 = (undefined1 *)puVar13;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (*(int *)(param_3 + 0x104) == 0) {
    uVar6 = *(ulong *)(param_3 + 0x108);
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c074920();
    if ((uVar8 & 1) == 0) {
      uVar8 = *(ulong *)(param_3 + 200);
      func_0x00010c0803e0();
      if ((uVar8 & 1) != 0) {
        puVar1 = param_3;
        func_0x00010be43300();
        _objc_release(uVar7);
        _objc_release(uVar6);
        if ((int)puVar1 != 0) {
          if (*(long *)(param_3 + 0x38) == 0) {
            uVar9 = *(undefined8 *)(param_3 + 0x30);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar9;
            func_0x00010bf28380();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar12;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar12);
            _objc_release(uVar9);
            uVar12 = uVar10;
            func_0x00010c0b78a0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(param_3 + 0x38);
            *(undefined8 *)(param_3 + 0x38) = uVar12;
            _objc_release(uVar9);
            _objc_release(uVar10);
          }
          puVar11 = PTR_PTR_1126da638;
          _objc_alloc(PTR_PTR_1126da638);
          func_0x00010c00c7e0();
          func_0x00010be3e1a0(param_3);
          func_0x00010c1d9980(puVar11);
          _objc_storeWeak(param_3 + 0x40,puVar11);
          goto LAB_1085eb8f8;
        }
        goto LAB_1085eb8ec;
      }
    }
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
LAB_1085eb8ec:
  _objc_retain(param_4);
  puVar11 = param_4;
LAB_1085eb8f8:
  uVar12 = *(undefined8 *)(param_3 + 0x58);
  func_0x00010c250360(uVar12);
  _objc_release(puVar11);
  _objc_release(param_4);
  _objc_release(puVar5);
  return uVar12;
}



/* Entry: 1085eb794; end: 1085eb93b; -[SCTV3SessionWrapper startRendering:callback:] */

undefined8 FUN_1085eb794(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(int *)(param_1 + 0x104) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x108);
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074920();
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 200);
      func_0x00010c0803e0();
      if ((uVar3 & 1) != 0) {
        lVar4 = param_1;
        func_0x00010be43300();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)lVar4 != 0) {
          if (*(long *)(param_1 + 0x38) == 0) {
            uVar5 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar5;
            func_0x00010bf28380();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            _objc_release(uVar5);
            uVar8 = uVar6;
            func_0x00010c0b78a0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x38) = uVar8;
            _objc_release(uVar5);
            _objc_release(uVar6);
          }
          puVar7 = PTR_PTR_1126da638;
          _objc_alloc(PTR_PTR_1126da638);
          func_0x00010c00c7e0();
          func_0x00010be3e1a0(param_1);
          func_0x00010c1d9980(puVar7);
          _objc_storeWeak(param_1 + 0x40,puVar7);
          goto LAB_1085eb8f8;
        }
        goto LAB_1085eb8ec;
      }
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
LAB_1085eb8ec:
  _objc_retain(param_4);
  puVar7 = param_4;
LAB_1085eb8f8:
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c250360(uVar8);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 1085eb93c; end: 1085eb943; -[SCTV3SessionWrapper stopRendering:] */

void FUN_1085eb93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2567d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_stopRendering__112673418);
  return;
}



/* Entry: 1085eb944; end: 1085eba1b; -[SCTV3SessionWrapper onLensStarted:] */

void FUN_1085eb944(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf850c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085eba1c; end: 1085eba4f;  */

void FUN_1085eba1c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085eba50; end: 1085ebaf7; -[SCTV3SessionWrapper onLensStopped] */

void FUN_1085eba50(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf850c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1085ebaf8; end: 1085ebb23;  */

void FUN_1085ebaf8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ebb24; end: 1085ebba7; -[SCTV3SessionWrapper sendUserVideoStreamVisibilityEvent:] */

void FUN_1085ebb24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1085ebba8;
  puStack_30 = &UNK_110a5a908;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be98020(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ebba8; end: 1085ebc0f;  */

void FUN_1085ebba8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_2);
  func_0x00010c2941e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ebc10; end: 1085ebc3f; -[SCTV3SessionWrapper setLensToRestore:] */

void FUN_1085ebc10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ebc40; end: 1085ebd6b; -[SCTV3SessionWrapper setAppliedLensObservable:] */

void FUN_1085ebc40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x98));
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ebd6c; end: 1085ebe17;  */

void FUN_1085ebd6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bf0a0(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085ebe18; end: 1085ebe2b;  */

void FUN_1085ebe18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onLensStopped_1125780e8);
  return;
}



/* Entry: 1085ebe2c; end: 1085ebe5b; -[SCTV3SessionWrapper setSharedLensController:] */

void FUN_1085ebe2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ebe5c; end: 1085ebe67; -[SCTV3SessionWrapper setDelegate:] */

void FUN_1085ebe5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 1085ebe68; end: 1085ebf0f; -[SCTV3SessionWrapper notifyScreenShotTaken] */

void FUN_1085ebe68(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1085ebf10;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1085ebf10; end: 1085ebf83;  */

void FUN_1085ebf10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010bf5e540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf517c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c15c860(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ebf84; end: 1085ec02b; -[SCTV3SessionWrapper notifyScreenRecorded] */

void FUN_1085ebf84(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1085ec02c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1085ec02c; end: 1085ec0d3;  */

void FUN_1085ec02c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0xf8) == 0)) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c151340();
    if (lVar1 != 4) {
      uVar4 = 0;
      if (lVar1 != 1) {
        uVar4 = 0x4000000000000000;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010bf5e540(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf517c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c15c880(uVar4,*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ec0d4; end: 1085ec157; -[SCTV3SessionWrapper reportCallingAddedParticipants:] */

void FUN_1085ec0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1085ec158;
  puStack_30 = &UNK_110a5a908;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be98020(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ec158; end: 1085ec1df;  */

void FUN_1085ec158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da640;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0342e0();
  puVar2 = PTR_PTR_1126da608;
  func_0x00010c0f4ac0(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ec1e0; end: 1085ec21b; -[SCTV3SessionWrapper setDisposeReason:] */

void FUN_1085ec1e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085ec21c; end: 1085ec26b; -[SCTV3SessionWrapper notifyScreenShareWillStart:] */

bool FUN_1085ec21c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  if (lVar1 == 1) {
    func_0x00010bedef00(param_1,param_2,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = param_3;
    func_0x00010c0dd240(*(undefined8 *)(param_1 + 0x28));
  }
  return lVar1 != 1;
}



/* Entry: 1085ec26c; end: 1085ec343; -[SCTV3SessionWrapper _onStateUpdated:] */

void FUN_1085ec26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c160700(*(undefined8 *)(param_1 + 0x70));
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1085ec344;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  lStack_48 = param_1;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ec344; end: 1085ec397;  */

void FUN_1085ec344(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf288a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30d40(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085ec398; end: 1085ec3e7; -[SCTV3SessionWrapper _onTalkingStateChanged:] */

void FUN_1085ec398(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c086e80(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a5a958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160720(*(undefined8 *)(param_1 + 0x70),param_2,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085ec3e8; end: 1085ec3ef;  */

void FUN_1085ec3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1085ec3f0; end: 1085ec4a3; -[SCTV3SessionWrapper _startConnectedLensSelfStream] */

void FUN_1085ec3f0(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  if (*(long *)(param_1 + 0xb0) != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1085ec4a4;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000107c312cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
  }
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1085ec4a4; end: 1085ec4db;  */

void FUN_1085ec4a4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c272c20(*(undefined8 *)(param_1 + 0xb0),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ec4dc; end: 1085ec58f; -[SCTV3SessionWrapper _stopConnectedLensSelfStream] */

void FUN_1085ec4dc(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  if (*(long *)(param_1 + 0xb0) != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1085ec590;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000107c312cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
  }
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1085ec590; end: 1085ec5c7;  */

void FUN_1085ec590(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c272c20(*(undefined8 *)(param_1 + 0xb0),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ec5c8; end: 1085ec5cf; -[SCTV3SessionWrapper stopScreenCapture] */

void FUN_1085ec5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_stopScreenCapture_112673478);
  return;
}



/* Entry: 1085ec5d0; end: 1085ec6c7; -[SCTV3SessionWrapper _onLensStarted:] */

void FUN_1085ec5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar4);
  puVar1 = PTR_PTR_1126da648;
  _objc_opt_new(PTR_PTR_1126da648);
  puVar2 = PTR_PTR_1126da650;
  _objc_alloc(PTR_PTR_1126da650);
  uVar4 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c06f040(param_3);
  _objc_release(param_3);
  func_0x00010c024320(puVar2,param_2,uVar4,0,uVar3);
  func_0x00010c1ba8a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xf0);
  puVar2 = PTR_PTR_1126da608;
  func_0x00010c096a00(PTR_PTR_1126da608,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ec6c8; end: 1085ec73f; -[SCTV3SessionWrapper _onLensStopped] */

void FUN_1085ec6c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 8));
  puVar2 = PTR_PTR_1126da608;
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  puVar1 = PTR_PTR_1126da648;
  _objc_opt_new(PTR_PTR_1126da648);
  func_0x00010c096a00(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ec740; end: 1085ec75b; -[SCTV3SessionWrapper screenCaptureServices:injectFrame:] */

void FUN_1085ec740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + 0xf8) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0650f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x50),PTR_s_injectScreenFrame__1125f6e48,param_4);
    return;
  }
  return;
}



/* Entry: 1085ec75c; end: 1085ec827; -[SCTV3SessionWrapper screenCaptureServices:stateChanged:] */

void FUN_1085ec75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1085ec828;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ec828; end: 1085ec85b;  */

void FUN_1085ec828(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ec85c; end: 1085ec917; -[SCTV3SessionWrapper wasRemovedFromScreenCaptureServices:] */

void FUN_1085ec85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1085ec918;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ec918; end: 1085ec953;  */

void FUN_1085ec918(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x101) = 0;
    func_0x00010be6b3e0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ec954; end: 1085ecadb; -[SCTV3SessionWrapper _resolveActiveCallUI] */

void FUN_1085ec954(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x21;
  undefined8 unaff_x22;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf00c40();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    func_0x00010bee2c00(param_1);
  }
  else {
    unaff_x21 = 0;
    lVar7 = *plStack_120;
    uVar5 = 3;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar6 = *(ulong *)(lStack_128 + lVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c27ef60();
        uVar4 = 3 - (uVar5 & 0xffffffff);
        if (2 < (uint)uVar5) {
          uVar4 = 0;
        }
        if ((uint)uVar3 < 3 && uVar4 < 3 - (uVar3 & 0xffffffff)) {
          func_0x00010c076de0();
          unaff_x21 = uVar6;
          uVar5 = uVar3;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    func_0x00010bee2c00(param_1);
    unaff_x22 = 0;
    if ((int)uVar5 != 3) {
      if ((unaff_x21 & 1) == 0) {
        func_0x00010bdc4860(param_1);
      }
      else {
        func_0x00010bdc5040();
      }
      goto LAB_1085eca90;
    }
  }
  func_0x00010bdd2160(param_1);
LAB_1085eca90:
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1085ecadc;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  lStack_148 = lVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_168,lVar2);
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1085ecb98;
  puStack_188 = &UNK_110842a68;
  _objc_copyWeak(auStack_178,auStack_168);
  lStack_180 = lVar2;
  uStack_170 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_168);
  return;
}



/* Entry: 1085ecadc; end: 1085ecb97; -[SCTV3SessionWrapper _activate] */

void FUN_1085ecadc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085ecb98;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_50 = param_1;
  uStack_40 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1085ecb98; end: 1085ecc4f;  */

void FUN_1085ecb98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010be98020(*(undefined8 *)(param_1 + 0x20),param_2,&PTR___NSConcreteGlobalBlock_110a5a978
                     );
  *(undefined8 *)(lVar1 + 0xa8) = 2;
  if (*(char *)(lVar1 + 0xd1) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c6080();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      func_0x00010bebbc00(*(undefined8 *)(param_1 + 0x20));
    }
  }
  *(undefined1 *)(lVar1 + 0xd1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085ecc50; end: 1085eccd3;  */

void FUN_1085ecc50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da658;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04f9c0();
  puVar2 = PTR_PTR_1126da608;
  func_0x00010c09e140(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085eccd4; end: 1085ecd0b; -[SCTV3SessionWrapper _activateWithPausedVideo] */

void FUN_1085eccd4(long param_1,undefined8 param_2)

{
  func_0x00010be98020(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a5a998);
  *(undefined8 *)(param_1 + 0xa8) = 2;
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_1 + 0xd0);
  return;
}



/* Entry: 1085ecd0c; end: 1085ecd8f;  */

void FUN_1085ecd0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da658;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04f9c0();
  puVar2 = PTR_PTR_1126da608;
  func_0x00010c09e140(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ecd90; end: 1085ecda3; -[SCTV3SessionWrapper _background] */

void FUN_1085ecd90(long param_1)

{
  *(undefined8 *)(param_1 + 0xa8) = 1;
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_1 + 0xd0);
  return;
}



/* Entry: 1085ecda4; end: 1085ecdf7; -[SCTV3SessionWrapper _updateUiState:] */

void FUN_1085ecda4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined4 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined4 *)(param_1 + 0x104) = param_3;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1085ecdf8;
  puStack_20 = &UNK_110a5a9b8;
  uStack_18 = param_3;
  func_0x00010be98020(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1085ecdf8; end: 1085ece7f;  */

void FUN_1085ecdf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da660;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04bde0();
  puVar2 = PTR_PTR_1126da608;
  func_0x00010c27ef80(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ece80; end: 1085ed103; -[SCTV3SessionWrapper _subscribeToSessionEvents] */

void FUN_1085ece80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c15fe80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1085ed104;
  puStack_88 = &UNK_110a5a9d8;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c15fe80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf870c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar3 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1085ed104; end: 1085ed22f;  */

void FUN_1085ed104(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x00010bf288a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c07b880();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar6 = param_2;
    func_0x00010c252440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175ca0(uVar2);
    _objc_release(uVar6);
    uVar6 = param_2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c07b880();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar1 = (uint)uVar8 ^ 1;
    if (((uVar1 & 1) == 0) && ((uVar5 & 1) == 0)) {
      func_0x00010bebfb80(uVar2);
    }
    else if ((uVar1 & (uint)uVar5) == 1) {
      func_0x00010bec2ec0(uVar2);
    }
    func_0x00010be6b9c0(uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085ed230; end: 1085ed6bf;  */

undefined8 * FUN_1085ed230(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
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
  puVar10 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  puVar11 = param_2;
  func_0x00010c12a2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0();
  _objc_release(puVar11);
  puVar11 = param_2;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c244240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar13 != (undefined8 *)0x0) {
    puVar11 = param_2;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010c0c6080();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07efc0();
    func_0x00010c0df6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar15);
    _objc_release(puVar2);
    _objc_release(puVar11);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar2 = param_2;
  func_0x00010c12a2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = &uStack_130;
  puVar15 = puVar2;
  func_0x00010bf52a60();
  if (puVar15 != (undefined8 *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar11 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar2);
        }
        lVar14 = *(long *)(lStack_128 + (long)puVar11 * 8);
        lVar4 = lVar14;
        func_0x00010c244240();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar4 != 0) {
          func_0x00010c0c6080();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar14;
          func_0x00010bf0ed00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07efc0();
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar3);
          _objc_release(lVar5);
          _objc_release(lVar14);
        }
        _objc_release(lVar4);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar15 != puVar11);
      puVar11 = &uStack_130;
      puVar15 = puVar2;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined8 *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar10;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  puVar13 = puVar10;
  func_0x00010bf529e0();
  puVar2 = puVar11;
  func_0x00010bf529e0();
  if (puVar13 == puVar2) {
    puVar2 = puVar10;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar13 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar2);
        }
        puVar6 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar11;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == (undefined8 *)0x0 && puVar6 != (undefined8 *)0x0) {
          _objc_release(puVar6);
LAB_1085ed664:
          puVar13 = (undefined8 *)0x0;
          goto LAB_1085ed668;
        }
        puVar8 = puVar6;
        func_0x00010bf1f3c0();
        puVar9 = puVar7;
        func_0x00010bf1f3c0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        if ((int)puVar8 != (int)puVar9) goto LAB_1085ed664;
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (puVar13 != puVar15);
      puVar13 = puVar2;
      func_0x00010bf52a60();
    }
    puVar13 = (undefined8 *)0x1;
LAB_1085ed668:
    _objc_release(puVar2);
  }
  else {
    puVar13 = (undefined8 *)0x0;
  }
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  puVar10 = puVar10 + 4;
  _objc_loadWeakRetained();
  if (puVar10 != (undefined8 *)0x0) {
    func_0x00010be6bd00(puVar10);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 1085ed6c0; end: 1085ed70f;  */

void FUN_1085ed6c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6bd00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085ed710; end: 1085ed7f3; -[SCTV3SessionWrapper _onScreenStateChanged:] */

void FUN_1085ed710(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0xf8) == param_3) {
    return;
  }
  if (param_3 == 1) {
    lVar1 = param_1;
    func_0x00010bf288a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c12a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar2;
    _objc_release(uVar4);
    _objc_release(lVar1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    _objc_release(uVar4);
    if (param_3 == 0) goto LAB_1085ed7d4;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010bf5e540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f000(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_1085ed7d4:
                    /* WARNING: Could not recover jumptable at 0x00010bedef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateScreenState_enableAudio__112595568,param_3,
             *(undefined1 *)(param_1 + 0x100));
  return;
}



/* Entry: 1085ed7f4; end: 1085ed987; -[SCTV3SessionWrapper _updateScreenState:enableAudio:] */

void FUN_1085ed7f4(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0xf8);
  bVar1 = *(byte *)(param_1 + 0x100);
  *(long *)(param_1 + 0xf8) = param_3;
  *(char *)(param_1 + 0x100) = (char)param_4;
  puVar2 = PTR_PTR_1126da5c0;
  _objc_alloc(PTR_PTR_1126da5c0);
  if (param_3 == 1) {
    func_0x00010bfee2c0();
  }
  else {
    func_0x00010c04bde0();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe8));
  func_0x00010be872c0(param_1);
  if (((param_3 == 1) != (lVar7 == 1)) || (bVar1 != param_4)) {
    if (param_3 == 1) {
      puVar6 = PTR_PTR_1126da610;
      _objc_alloc(PTR_PTR_1126da610);
      func_0x00010bff5160();
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    lVar7 = param_1;
    func_0x00010bf288a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c6080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_1085f872c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    if (lVar5 != 0) {
      func_0x00010be98020(param_1);
      _objc_release(lVar5);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 1085ed988; end: 1085eda0f;  */

void FUN_1085ed988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da620;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c029d40();
  puVar2 = PTR_PTR_1126da608;
  func_0x00010c287880(PTR_PTR_1126da608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085eda10; end: 1085edab3; -[SCTV3SessionWrapper _runOnTalkCoreThreadWithPlatformEventSubject:] */

void FUN_1085eda10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085edab4;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010bf850c0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1085edab4; end: 1085edac3;  */

void FUN_1085edab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085edac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085edac4; end: 1085eddaf; -[SCTV3SessionWrapper _handleStateChange:] */

void FUN_1085edac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x108);
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    puVar4 = PTR_PTR_1126b55b8;
    func_0x00010bfce840(PTR_PTR_1126b55b8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183be0(uVar10,param_2,puVar4,uVar6);
    _objc_release(uVar6);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126da668;
    _objc_alloc(PTR_PTR_1126da668);
    uVar6 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b55b8;
    func_0x00010bfce840(PTR_PTR_1126b55b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005a00(puVar4,param_2,uVar6,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28ce60();
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
  func_0x00010bed4960(param_1,param_2,param_3);
  func_0x00010bedeec0(param_1,param_2,param_3);
  uVar6 = param_3;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf282e0();
  _objc_release(uVar6);
  if ((int)uVar10 == 0) {
    func_0x00010bde0760(param_1);
  }
  uVar6 = param_3;
  func_0x00010bf27fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  _objc_release(uVar10);
  func_0x00010be9e500(param_1);
  uVar6 = param_3;
  func_0x00010c12a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddd8c0(param_1,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010be872c0(param_1);
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar6 = param_3;
    func_0x00010c12a2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126da670;
    _objc_alloc(PTR_PTR_1126da670);
    uVar6 = uVar10;
    func_0x00010c0c6080(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c23d040();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c07b880(uVar10);
    func_0x00010c061160(puVar4,param_2,uVar8,uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c0e5f60(*(undefined8 *)(param_1 + 0xb0),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085eddb0; end: 1085ee147; -[SCTV3SessionWrapper _checkForRemoteScreenStreamStart:] */

void FUN_1085eddb0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *unaff_x23;
  undefined8 uVar12;
  ulong uVar13;
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
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xf8) != 1) goto LAB_1085ee104;
  if (*(long *)(param_1 + 0xe0) == 0) {
LAB_1085ee0f0:
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lVar11 = *(long *)(param_1 + 0xe0);
    _objc_retain(lVar11);
    lVar2 = lVar11;
    func_0x00010bf52a60(lVar11,param_2,&uStack_1b0,auStack_f0,0x10);
    if (lVar2 != 0) {
      lVar9 = *plStack_1a0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(lVar11);
          }
          uVar12 = *(undefined8 *)(lStack_1a8 + lVar10 * 8);
          uVar8 = uVar12;
          func_0x00010c244240(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar1,param_2,uVar12,uVar8);
          _objc_release(uVar8);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar11;
        func_0x00010bf52a60(lVar11,param_2,&uStack_1b0,auStack_f0,0x10);
        unaff_x23 = (undefined *)0x0;
      } while (lVar2 != 0);
    }
    _objc_release(lVar11);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_170,0x10);
    if (lVar2 == 0) {
      _objc_release(param_3);
      _objc_release(puVar1);
      goto LAB_1085ee0f0;
    }
    lVar11 = *plStack_1e0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(ulong *)(lStack_1e8 + lVar9 * 8);
        uVar3 = uVar13;
        func_0x00010c0c6080();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c150e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x00010c244240(uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010c0dff20(puVar1,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0c6080();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c150e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(uVar13);
        if (puVar7 == (undefined *)0x0) {
          if (uVar4 != 0) goto LAB_1085ee000;
        }
        else {
          unaff_x23 = puVar7;
          func_0x00010c299160();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x23;
          func_0x00010c079ba0();
          if ((int)puVar5 == 0 || uVar4 == 0) {
            _objc_release(unaff_x23);
          }
          else {
LAB_1085ee000:
            uVar3 = uVar4;
            func_0x00010c299160();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar3;
            func_0x00010c079ba0();
            _objc_release(uVar3);
            if (puVar7 != (undefined *)0x0) {
              _objc_release(unaff_x23);
            }
            if ((uVar13 & 1) == 0) {
              _objc_release(puVar7);
              _objc_release(uVar4);
              _objc_release(param_3);
              _objc_release(puVar1);
              _objc_retain(param_3);
              uVar8 = *(undefined8 *)(param_1 + 0xe0);
              *(long *)(param_1 + 0xe0) = param_3;
              _objc_release(uVar8);
              func_0x00010c256940(*(undefined8 *)(param_1 + 0x28));
              goto LAB_1085ee104;
            }
          }
          _objc_release(puVar7);
          _objc_release(uVar4);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar2 != 0);
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
  }
  _objc_release(uVar8);
LAB_1085ee104:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c18b5e0(*(undefined8 *)(param_3 + 0x28),param_2,param_3);
  *(undefined1 *)(param_3 + 0x101) = 1;
  return;
}



/* Entry: 1085ee148; end: 1085ee177; -[SCTV3SessionWrapper _registerAsScreenCaptureDelegate] */

void FUN_1085ee148(long param_1,undefined8 param_2)

{
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
  *(undefined1 *)(param_1 + 0x101) = 1;
  return;
}



/* Entry: 1085ee178; end: 1085ee203; -[SCTV3SessionWrapper _removeAsScreenCaptureDelegate] */

void FUN_1085ee178(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x101) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c12be60(uVar1,param_2,param_1);
    if (((int)uVar1 != 0) && (*(long *)(param_1 + 0xf8) != 0)) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      uVar1 = *(undefined8 *)(param_1 + 0xe8);
      puVar2 = PTR_PTR_1126da5c0;
      _objc_alloc(PTR_PTR_1126da5c0);
      func_0x00010c04bde0();
      func_0x00010c0d9840(uVar1,param_2,puVar2);
      _objc_release(puVar2);
      uVar1 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      _objc_release(uVar1);
    }
    *(undefined1 *)(param_1 + 0x101) = 0;
  }
  return;
}



/* Entry: 1085ee204; end: 1085ee26f; -[SCTV3SessionWrapper _selfDestructIfPossible] */

void FUN_1085ee204(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf282e0();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x78);
  func_0x00010bf529e0();
  if (lVar2 != 0 || (int)lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1085ee270; end: 1085ee333; -[SCTV3SessionWrapper _selfDestructLaterIfPossible] */

void FUN_1085ee270(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1085ee308;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000107c312d0("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1085ee334; end: 1085ee3e7; -[SCTV3SessionWrapper _destroyTalkCoreSession] */

void FUN_1085ee334(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1085ee3e8;
    puStack_48 = &UNK_110841f80;
    uStack_40 = uVar1;
    uStack_38 = uVar2;
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    func_0x00010bf850c0(uVar3,param_2,&puStack_60);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar3);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    func_0x00010be8b600(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 1085ee3e8; end: 1085ee437;  */

void FUN_1085ee3e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bf86d40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1085ee438; end: 1085ee48f; -[SCTV3SessionWrapper _onAVAudioSessionMediaServicesWereReset:] */

void FUN_1085ee438(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1085ee490;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 1085ee490; end: 1085ee537;  */

void FUN_1085ee490(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf282e0();
  _objc_release(uVar2);
  if ((int)uVar3 == 4) {
    func_0x00010c288f80(*(undefined8 *)(param_1 + 0x20));
    puVar1 = PTR_PTR_1126afca8;
    ppuVar4 = &PTR____CFConstantStringClassReference_110ee54b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ee54b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238700(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
    return;
  }
  return;
}


