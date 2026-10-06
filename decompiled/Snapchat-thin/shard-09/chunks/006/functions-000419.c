/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f96490; end: 106f964e7;  */

void FUN_106f96490(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f99e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f964e8; end: 106f964eb; -[SCSpectaclesMalibuPeripheral channelDidClose:] */

void FUN_106f964e8(void)

{
  return;
}



/* Entry: 106f964ec; end: 106f96627; -[SCSpectaclesMalibuPeripheral channel:didReadRSSI:error:] */

void FUN_106f964ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f96628; end: 106f9665b;  */

void FUN_106f96628(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e6e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f9665c; end: 106f96673; -[SCSpectaclesMalibuPeripheral delegate] */

void FUN_106f9665c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f96674; end: 106f9667f; -[SCSpectaclesMalibuPeripheral setDelegate:] */

void FUN_106f96674(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106f96680; end: 106f96687; -[SCSpectaclesMalibuPeripheral performer] */

undefined8 FUN_106f96680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f96688; end: 106f966b7; -[SCSpectaclesMalibuPeripheral setPerformer:] */

void FUN_106f96688(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f966b8; end: 106f966bf; -[SCSpectaclesMalibuPeripheral peripheral] */

undefined8 FUN_106f966b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f966c0; end: 106f966ef; -[SCSpectaclesMalibuPeripheral setPeripheral:] */

void FUN_106f966c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f966f0; end: 106f966f7; -[SCSpectaclesMalibuPeripheral RSSI] */

undefined8 FUN_106f966f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f966f8; end: 106f96727; -[SCSpectaclesMalibuPeripheral setRSSI:] */

void FUN_106f966f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f96728; end: 106f9672f; -[SCSpectaclesMalibuPeripheral stream] */

undefined8 FUN_106f96728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106f96730; end: 106f9675f; -[SCSpectaclesMalibuPeripheral setStream:] */

void FUN_106f96730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f96760; end: 106f96767; -[SCSpectaclesMalibuPeripheral messageBuffer] */

undefined8 FUN_106f96760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106f96768; end: 106f96797; -[SCSpectaclesMalibuPeripheral setMessageBuffer:] */

void FUN_106f96768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f96798; end: 106f9679f; -[SCSpectaclesMalibuPeripheral encryptor] */

undefined8 FUN_106f96798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106f967a0; end: 106f967cf; -[SCSpectaclesMalibuPeripheral setEncryptor:] */

void FUN_106f967a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f967d0; end: 106f967d7; -[SCSpectaclesMalibuPeripheral encryptionDisabled] */

undefined1 FUN_106f967d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106f967d8; end: 106f967df; -[SCSpectaclesMalibuPeripheral setEncryptionDisabled:] */

void FUN_106f967d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106f967e0; end: 106f967e7; -[SCSpectaclesMalibuPeripheral outstandingRequests] */

undefined8 FUN_106f967e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106f967e8; end: 106f96817; -[SCSpectaclesMalibuPeripheral setOutstandingRequests:] */

void FUN_106f967e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f96818; end: 106f9681f; -[SCSpectaclesMalibuPeripheral outstandingNonceExchangeMessage] */

undefined8 FUN_106f96818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106f96820; end: 106f9684f; -[SCSpectaclesMalibuPeripheral setOutstandingNonceExchangeMessage:] */

void FUN_106f96820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f96850; end: 106f96857; -[SCSpectaclesMalibuPeripheral nextFreeRequestId] */

undefined1 FUN_106f96850(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106f96858; end: 106f9685f; -[SCSpectaclesMalibuPeripheral setNextFreeRequestId:] */

void FUN_106f96858(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106f96860; end: 106f968df; -[SCSpectaclesMalibuPeripheral .cxx_destruct] */

void FUN_106f96860(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106f968e0; end: 106f96963; -[SCSpectaclesMalibuPushResponseMessage initWithPushMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106f968e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8120;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761d00;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f96964; end: 106f9696b; -[SCSpectaclesMalibuPushResponseMessage responseStatus] */

undefined8 FUN_106f96964(void)

{
  return 5;
}



/* Entry: 106f9696c; end: 106f97f93; -[SCSpectaclesMalibuPushResponseMessage crashReports] */

undefined * FUN_106f9696c(undefined **param_1,undefined8 param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_1;
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfd5e60();
  _objc_release();
  puVar25 = PTR____NSArray0__struct_11034ab48;
  if ((int)ppuVar3 != 0) {
    func_0x00010c11c180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010bf54060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar25;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    ppuVar3 = ppuVar2;
    func_0x00010bfd4240();
    if ((int)ppuVar3 != 0) {
      ppuVar3 = ppuVar2;
      func_0x00010bf04ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d3990;
      _objc_alloc(PTR_PTR_1126d3990);
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110e8fcb8;
      ppuVar7 = ppuVar3;
      func_0x00010bfad400();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110e8fd38;
      ppuVar8 = ppuVar3;
      ppuStack_a8 = ppuVar7;
      func_0x00010bf98940(ppuVar3);
      func_0x00010c0df820(puVar25,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110e8fcd8;
      ppuVar8 = ppuVar3;
      puStack_a0 = puVar25;
      func_0x00010c0993c0(ppuVar3);
      func_0x00010c0df820(puVar9,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110e8ff98;
      ppuVar8 = ppuVar2;
      puStack_98 = puVar9;
      func_0x00010c266f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar8;
      func_0x00010c0db220();
      func_0x00010c0df820(puVar11,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e8ffb8;
      ppuVar10 = ppuVar2;
      puStack_90 = puVar11;
      func_0x00010c266f00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar10;
      func_0x00010bf02260();
      func_0x00010c0df820(puVar13,param_2,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110e8ffd8;
      ppuVar12 = ppuVar2;
      puStack_88 = puVar13;
      func_0x00010c266f00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar12;
      func_0x00010c09db80();
      func_0x00010c0df820(puVar15,param_2,ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110e8fd58;
      ppuVar14 = ppuVar2;
      puStack_80 = puVar15;
      func_0x00010c0ac120();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar14 != (undefined **)0x0) {
        ppuStack_78 = ppuVar14;
      }
      puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_a8,&ppuStack_e0
                          ,7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar3;
      func_0x00010bf53e60(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c006440(puVar6,param_2,puVar5,puVar16,ppuVar17);
      func_0x00010befa120(puVar4,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(ppuVar17);
      _objc_release(puVar16);
      _objc_release(ppuVar14);
      _objc_release(puVar15);
      _objc_release(ppuVar12);
      _objc_release(puVar13);
      _objc_release(ppuVar10);
      _objc_release(puVar11);
      _objc_release(ppuVar8);
      _objc_release(puVar9);
      _objc_release(puVar25);
      _objc_release(ppuVar7);
      _objc_release(ppuVar3);
    }
    ppuVar3 = ppuVar2;
    func_0x00010bfdc660();
    if ((int)ppuVar3 != 0) {
      ppuVar3 = ppuVar2;
      func_0x00010c246480();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126d3a60;
      _objc_alloc(PTR_PTR_1126d3a60);
      puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_150 = &PTR____CFConstantStringClassReference_110e8fff8;
      ppuVar7 = ppuVar3;
      func_0x00010bfa0e00(ppuVar3);
      func_0x00010c0df820(puVar25,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110e704f8;
      ppuVar7 = ppuVar3;
      puStack_118 = puVar25;
      func_0x00010c0f6c00(ppuVar3);
      func_0x00010c0df820(puVar9,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_140 = &PTR____CFConstantStringClassReference_110e90018;
      ppuVar7 = ppuVar3;
      puStack_110 = puVar9;
      func_0x00010bf98c60(ppuVar3);
      func_0x00010c0df820(puVar11,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_138 = &PTR____CFConstantStringClassReference_110e8ff98;
      ppuVar7 = ppuVar2;
      puStack_108 = puVar11;
      func_0x00010c266f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c0db220();
      func_0x00010c0df820(puVar13,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_130 = &PTR____CFConstantStringClassReference_110e8ffb8;
      ppuVar8 = ppuVar2;
      puStack_100 = puVar13;
      func_0x00010c266f00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar8;
      func_0x00010bf02260();
      func_0x00010c0df820(puVar15,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_128 = &PTR____CFConstantStringClassReference_110e8ffd8;
      ppuVar10 = ppuVar2;
      puStack_f8 = puVar15;
      func_0x00010c266f00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar10;
      func_0x00010c09db80();
      func_0x00010c0df820(puVar6,param_2,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_120 = &PTR____CFConstantStringClassReference_110e8fd58;
      ppuVar12 = ppuVar2;
      puStack_f0 = puVar6;
      func_0x00010c0ac120();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar12 != (undefined **)0x0) {
        ppuStack_e8 = ppuVar12;
      }
      puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_118,
                          &ppuStack_150,7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c006440(puVar16,param_2,puVar5,puVar18,
                          &PTR____CFConstantStringClassReference_110daafd8);
      func_0x00010befa120(puVar4,param_2,puVar16);
      _objc_release(puVar16);
      _objc_release(puVar18);
      _objc_release(ppuVar12);
      _objc_release(puVar6);
      _objc_release(ppuVar10);
      _objc_release(puVar15);
      _objc_release(ppuVar8);
      _objc_release(puVar13);
      _objc_release(ppuVar7);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar25);
      _objc_release(ppuVar3);
    }
    ppuVar3 = ppuVar2;
    func_0x00010bfd7a80();
    if ((int)ppuVar3 != 0) {
      ppuVar3 = ppuVar2;
      func_0x00010bfd3780();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126d3998;
      _objc_alloc();
      puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_210 = &PTR____CFConstantStringClassReference_110e6faf8;
      ppuVar7 = ppuVar3;
      func_0x00010c11ee80(ppuVar3);
      func_0x00010c0df820(puVar25,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_208 = &PTR____CFConstantStringClassReference_110e6fb18;
      ppuVar7 = ppuVar3;
      puStack_1b0 = puVar25;
      func_0x00010c11eea0(ppuVar3);
      func_0x00010c0df820(puVar9,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_200 = &PTR____CFConstantStringClassReference_110e6fb38;
      ppuVar7 = ppuVar3;
      puStack_1a8 = puVar9;
      func_0x00010c11eee0(ppuVar3);
      func_0x00010c0df820(puVar11,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e6fb58;
      ppuVar7 = ppuVar3;
      puStack_1a0 = puVar11;
      func_0x00010c11ef20(ppuVar3);
      func_0x00010c0df820(puVar13,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e706f8;
      ppuVar7 = ppuVar3;
      puStack_198 = puVar13;
      func_0x00010c11eec0(ppuVar3);
      func_0x00010c0df820(puVar15,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e704d8;
      ppuVar7 = ppuVar3;
      puStack_190 = puVar15;
      func_0x00010c0b5b20(ppuVar3);
      func_0x00010c0df820(puVar6,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e704f8;
      ppuVar7 = ppuVar3;
      puStack_188 = puVar6;
      func_0x00010c0f6c00(ppuVar3);
      func_0x00010c0df820(puVar16,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e8fe98;
      ppuVar7 = ppuVar3;
      puStack_180 = puVar16;
      func_0x00010c2beb80(ppuVar3);
      func_0x00010c0df820(puVar18,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e8ff98;
      ppuVar7 = ppuVar2;
      puStack_178 = puVar18;
      func_0x00010c266f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c0db220();
      func_0x00010c0df820(puVar20,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e8ffb8;
      ppuVar8 = ppuVar2;
      puStack_170 = puVar20;
      func_0x00010c266f00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar8;
      func_0x00010bf02260();
      func_0x00010c0df820(puVar21,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e8ffd8;
      ppuVar10 = ppuVar2;
      puStack_168 = puVar21;
      func_0x00010c266f00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar10;
      func_0x00010c09db80();
      func_0x00010c0df820(puVar22,param_2,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e8fd58;
      ppuVar12 = ppuVar2;
      puStack_160 = puVar22;
      func_0x00010c0ac120();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_158 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar12 != (undefined **)0x0) {
        ppuStack_158 = ppuVar12;
      }
      puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1b0,
                          &ppuStack_210,0xc);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c006440(puVar19,param_2,puVar5,puVar23,
                          &PTR____CFConstantStringClassReference_110daafd8);
      func_0x00010befa120(puVar4,param_2,puVar19);
      _objc_release(puVar19);
      _objc_release(puVar23);
      _objc_release(ppuVar12);
      _objc_release(puVar22);
      _objc_release(ppuVar10);
      _objc_release(puVar21);
      _objc_release(ppuVar8);
      _objc_release(puVar20);
      _objc_release(ppuVar7);
      _objc_release(puVar18);
      _objc_release(puVar16);
      _objc_release(puVar6);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar25);
      _objc_release(ppuVar3);
    }
    ppuVar3 = ppuVar2;
    func_0x00010bfde680();
    if ((int)ppuVar3 != 0) {
      ppuVar3 = ppuVar2;
      func_0x00010c2a2880();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126d39a0;
      _objc_alloc();
      puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_2d0 = &PTR____CFConstantStringClassReference_110e6faf8;
      ppuVar7 = ppuVar3;
      func_0x00010c11ee80(ppuVar3);
      func_0x00010c0df820(puVar25,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_2c8 = &PTR____CFConstantStringClassReference_110e6fb18;
      ppuVar7 = ppuVar3;
      puStack_270 = puVar25;
      func_0x00010c11eea0(ppuVar3);
      func_0x00010c0df820(puVar9,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e6fb38;
      ppuVar7 = ppuVar3;
      puStack_268 = puVar9;
      func_0x00010c11eee0(ppuVar3);
      func_0x00010c0df820(puVar11,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_2b8 = &PTR____CFConstantStringClassReference_110e6fb58;
      ppuVar7 = ppuVar3;
      puStack_260 = puVar11;
      func_0x00010c11ef20(ppuVar3);
      func_0x00010c0df820(puVar13,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_2b0 = &PTR____CFConstantStringClassReference_110e706f8;
      ppuVar7 = ppuVar3;
      puStack_258 = puVar13;
      func_0x00010c11eec0(ppuVar3);
      func_0x00010c0df820(puVar15,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_2a8 = &PTR____CFConstantStringClassReference_110e704d8;
      ppuVar7 = ppuVar3;
      puStack_250 = puVar15;
      func_0x00010c0b5b20(ppuVar3);
      func_0x00010c0df820(puVar6,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_2a0 = &PTR____CFConstantStringClassReference_110e704f8;
      ppuVar7 = ppuVar3;
      puStack_248 = puVar6;
      func_0x00010c0f6c00(ppuVar3);
      func_0x00010c0df820(puVar16,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_298 = &PTR____CFConstantStringClassReference_110e8fe98;
      ppuVar7 = ppuVar3;
      puStack_240 = puVar16;
      func_0x00010c2beb80(ppuVar3);
      func_0x00010c0df820(puVar18,param_2,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_290 = &PTR____CFConstantStringClassReference_110e8ff98;
      ppuVar7 = ppuVar2;
      puStack_238 = puVar18;
      func_0x00010c266f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c0db220();
      func_0x00010c0df820(puVar20,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_288 = &PTR____CFConstantStringClassReference_110e8ffb8;
      ppuVar8 = ppuVar2;
      puStack_230 = puVar20;
      func_0x00010c266f00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar8;
      func_0x00010bf02260();
      func_0x00010c0df820(puVar21,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_280 = &PTR____CFConstantStringClassReference_110e8ffd8;
      ppuVar10 = ppuVar2;
      puStack_228 = puVar21;
      func_0x00010c266f00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar10;
      func_0x00010c09db80();
      func_0x00010c0df820(puVar22,param_2,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_278 = &PTR____CFConstantStringClassReference_110e8fd58;
      ppuVar12 = ppuVar2;
      puStack_220 = puVar22;
      func_0x00010c0ac120();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_218 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar12 != (undefined **)0x0) {
        ppuStack_218 = ppuVar12;
      }
      puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_270,
                          &ppuStack_2d0,0xc);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c006440(puVar19,param_2,puVar5,puVar23,
                          &PTR____CFConstantStringClassReference_110daafd8);
      func_0x00010befa120(puVar4,param_2,puVar19);
      _objc_release(puVar19);
      _objc_release(puVar23);
      _objc_release(ppuVar12);
      _objc_release(puVar22);
      _objc_release(ppuVar10);
      _objc_release(puVar21);
      _objc_release(ppuVar8);
      _objc_release(puVar20);
      _objc_release(ppuVar7);
      _objc_release(puVar18);
      _objc_release(puVar16);
      _objc_release(puVar6);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar25);
      _objc_release(ppuVar3);
    }
    ppuVar3 = ppuVar2;
    func_0x00010bfd4020();
    if ((int)ppuVar3 != 0) {
      ppuVar3 = ppuVar2;
      func_0x00010bf022c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar3;
      func_0x00010bfd4000();
      _objc_release(ppuVar3);
      if ((int)ppuVar7 != 0) {
        ppuVar3 = ppuVar2;
        func_0x00010bf022c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar3;
        func_0x00010bf02240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        puVar15 = PTR_PTR_1126d39b8;
        _objc_alloc(PTR_PTR_1126d39b8);
        ppuStack_350 = &PTR____CFConstantStringClassReference_110e8fed8;
        ppuVar3 = ppuVar7;
        func_0x00010bfbbf80();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_348 = &PTR____CFConstantStringClassReference_110e8fcd8;
        ppuVar8 = ppuVar7;
        ppuStack_310 = ppuVar3;
        func_0x00010c0993c0(ppuVar7);
        func_0x00010c0df820(puVar25,param_2,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_340 = &PTR____CFConstantStringClassReference_110e8fcb8;
        ppuVar8 = ppuVar7;
        puStack_308 = puVar25;
        func_0x00010bfac9c0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_338 = &PTR____CFConstantStringClassReference_110dedb98;
        ppuVar10 = ppuVar7;
        ppuStack_300 = ppuVar8;
        func_0x00010bf14900();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_330 = &PTR____CFConstantStringClassReference_110e8ff98;
        ppuVar12 = ppuVar2;
        ppuStack_2f8 = ppuVar10;
        func_0x00010c266f00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar12;
        func_0x00010c0db220();
        func_0x00010c0df820(puVar9,param_2,ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_328 = &PTR____CFConstantStringClassReference_110e8ffb8;
        ppuVar14 = ppuVar2;
        puStack_2f0 = puVar9;
        func_0x00010c266f00(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar14;
        func_0x00010bf02260();
        func_0x00010c0df820(puVar11,param_2,ppuVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_320 = &PTR____CFConstantStringClassReference_110e8ffd8;
        ppuVar17 = ppuVar2;
        puStack_2e8 = puVar11;
        func_0x00010c266f00(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = ppuVar17;
        func_0x00010c09db80();
        func_0x00010c0df820(puVar13,param_2,ppuVar24);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_318 = &PTR____CFConstantStringClassReference_110e8fd58;
        ppuVar24 = ppuVar2;
        puStack_2e0 = puVar13;
        func_0x00010c0ac120();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_2d8 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar24 != (undefined **)0x0) {
          ppuStack_2d8 = ppuVar24;
        }
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_310,
                            &ppuStack_350,8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c006440(puVar15,param_2,puVar5,puVar6,
                            &PTR____CFConstantStringClassReference_110daafd8);
        func_0x00010befa120(puVar4,param_2,puVar15);
        _objc_release(puVar15);
        _objc_release(puVar6);
        _objc_release(ppuVar24);
        _objc_release(puVar13);
        _objc_release(ppuVar17);
        _objc_release(puVar11);
        _objc_release(ppuVar14);
        _objc_release(puVar9);
        _objc_release(ppuVar12);
        _objc_release(ppuVar10);
        _objc_release(ppuVar8);
        _objc_release(puVar25);
        _objc_release(ppuVar3);
        _objc_release(ppuVar7);
      }
    }
    ppuVar3 = ppuVar2;
    func_0x00010bfd4020();
    if ((int)ppuVar3 != 0) {
      ppuVar3 = ppuVar2;
      func_0x00010bf022c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar3;
      func_0x00010bfd4040();
      _objc_release(ppuVar3);
      if ((int)ppuVar7 != 0) {
        ppuVar3 = ppuVar2;
        func_0x00010bf022c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar3;
        func_0x00010bf022e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        puVar16 = PTR_PTR_1126d39b0;
        _objc_alloc(PTR_PTR_1126d39b0);
        puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_3d0 = &PTR____CFConstantStringClassReference_110e704f8;
        ppuVar3 = ppuVar7;
        func_0x00010c0f6c00(ppuVar7);
        func_0x00010c0df820(puVar25,param_2,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_3c8 = &PTR____CFConstantStringClassReference_110e704d8;
        ppuVar3 = ppuVar7;
        puStack_390 = puVar25;
        func_0x00010c0b5b20(ppuVar7);
        func_0x00010c0df820(puVar9,param_2,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_3c0 = &PTR____CFConstantStringClassReference_110e704b8;
        ppuVar3 = ppuVar7;
        puStack_388 = puVar9;
        func_0x00010c247f60(ppuVar7);
        func_0x00010c0df820(puVar11,param_2,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_3b8 = &PTR____CFConstantStringClassReference_110dedb98;
        ppuVar3 = ppuVar7;
        puStack_380 = puVar11;
        func_0x00010bf14900();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_3b0 = &PTR____CFConstantStringClassReference_110e8ff98;
        ppuVar8 = ppuVar2;
        ppuStack_378 = ppuVar3;
        func_0x00010c266f00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar8;
        func_0x00010c0db220();
        func_0x00010c0df820(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_3a8 = &PTR____CFConstantStringClassReference_110e8ffb8;
        ppuVar10 = ppuVar2;
        puStack_370 = puVar13;
        func_0x00010c266f00(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar10;
        func_0x00010bf02260();
        func_0x00010c0df820(puVar15,param_2,ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_3a0 = &PTR____CFConstantStringClassReference_110e8ffd8;
        ppuVar12 = ppuVar2;
        puStack_368 = puVar15;
        func_0x00010c266f00(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar12;
        func_0x00010c09db80();
        func_0x00010c0df820(puVar6,param_2,ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_398 = &PTR____CFConstantStringClassReference_110e8fd58;
        ppuVar14 = ppuVar2;
        puStack_360 = puVar6;
        func_0x00010c0ac120();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_358 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar14 != (undefined **)0x0) {
          ppuStack_358 = ppuVar14;
        }
        puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_390,
                            &ppuStack_3d0,8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c006440(puVar16,param_2,puVar5,puVar18,
                            &PTR____CFConstantStringClassReference_110daafd8);
        func_0x00010befa120(puVar4,param_2,puVar16);
        _objc_release(puVar16);
        _objc_release(puVar18);
        _objc_release(ppuVar14);
        _objc_release(puVar6);
        _objc_release(ppuVar12);
        _objc_release(puVar15);
        _objc_release(ppuVar10);
        _objc_release(puVar13);
        _objc_release(ppuVar8);
        _objc_release(ppuVar3);
        _objc_release(puVar11);
        _objc_release(puVar9);
        _objc_release(puVar25);
        _objc_release(ppuVar7);
      }
    }
    ppuVar3 = ppuVar2;
    func_0x00010bfd4020();
    if ((int)ppuVar3 != 0) {
      ppuVar3 = ppuVar2;
      func_0x00010bf022c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar3;
      func_0x00010bfd87e0();
      _objc_release(ppuVar3);
      if ((int)ppuVar7 != 0) {
        ppuVar3 = ppuVar2;
        func_0x00010bf022c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar3;
        func_0x00010c099a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x000107db67f8();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010c27dd80(ppuVar7);
        ppuVar10 = ppuVar3;
        func_0x00010bf979e0(ppuVar3,param_2,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        puVar13 = PTR_PTR_1126d3a68;
        _objc_alloc(PTR_PTR_1126d3a68);
        ppuStack_440 = &PTR____CFConstantStringClassReference_110dad058;
        ppuStack_438 = &PTR____CFConstantStringClassReference_110dae8f8;
        ppuVar3 = ppuVar7;
        ppuStack_408 = ppuVar10;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_430 = &PTR____CFConstantStringClassReference_110dedb98;
        ppuVar8 = ppuVar7;
        ppuStack_400 = ppuVar3;
        func_0x00010bf14900();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_428 = &PTR____CFConstantStringClassReference_110e8ff98;
        ppuVar12 = ppuVar2;
        ppuStack_3f8 = ppuVar8;
        func_0x00010c266f00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar12;
        func_0x00010c0db220();
        func_0x00010c0df820(puVar25,param_2,ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_420 = &PTR____CFConstantStringClassReference_110e8ffb8;
        ppuVar14 = ppuVar2;
        puStack_3f0 = puVar25;
        func_0x00010c266f00(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar14;
        func_0x00010bf02260();
        func_0x00010c0df820(puVar9,param_2,ppuVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_418 = &PTR____CFConstantStringClassReference_110e8ffd8;
        ppuVar17 = ppuVar2;
        puStack_3e8 = puVar9;
        func_0x00010c266f00(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = ppuVar17;
        func_0x00010c09db80();
        func_0x00010c0df820(puVar11,param_2,ppuVar24);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_410 = &PTR____CFConstantStringClassReference_110e8fd58;
        ppuVar24 = ppuVar2;
        puStack_3e0 = puVar11;
        func_0x00010c0ac120();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_3d8 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar24 != (undefined **)0x0) {
          ppuStack_3d8 = ppuVar24;
        }
        puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_408,
                            &ppuStack_440,7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c006440(puVar13,param_2,puVar5,puVar15,
                            &PTR____CFConstantStringClassReference_110daafd8);
        func_0x00010befa120(puVar4,param_2,puVar13);
        _objc_release(puVar13);
        _objc_release(puVar15);
        _objc_release(ppuVar24);
        _objc_release(puVar11);
        _objc_release(ppuVar17);
        _objc_release(puVar9);
        _objc_release(ppuVar14);
        _objc_release(puVar25);
        _objc_release(ppuVar12);
        _objc_release(ppuVar8);
        _objc_release(ppuVar3);
        _objc_release(ppuVar10);
        _objc_release(ppuVar7);
      }
    }
    puVar25 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c11c180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf98e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar3;
    func_0x00010bf990e0();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    uVar1 = (int)ppuVar7 - 1;
    if (uVar1 < 9) {
      puVar25 = *(undefined **)(&UNK_10de19610 + (ulong)uVar1 * 8);
    }
    else {
      puVar25 = (undefined *)0x1;
    }
    return puVar25;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return puVar25;
}



/* Entry: 106f97f94; end: 106f9800b; -[SCSpectaclesMalibuPushResponseMessage nrfErrorType] */

undefined8 FUN_106f97f94(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf98e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf990e0();
  _objc_release(uVar3);
  _objc_release(param_1);
  uVar1 = (int)uVar2 - 1;
  if (uVar1 < 9) {
    uVar3 = *(undefined8 *)(&UNK_10de19610 + (ulong)uVar1 * 8);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 106f9800c; end: 106f98047; -[SCSpectaclesMalibuPushResponseMessage hasNrfError] */

undefined8 FUN_106f9800c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd6ca0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f98048; end: 106f98083; -[SCSpectaclesMalibuPushResponseMessage hasCharging] */

undefined8 FUN_106f98048(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd5360();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f98084; end: 106f980c3; -[SCSpectaclesMalibuPushResponseMessage charging] */

bool FUN_106f98084(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf35ac0();
  _objc_release(param_1);
  return (int)uVar1 == 1;
}



/* Entry: 106f980c4; end: 106f980ff; -[SCSpectaclesMalibuPushResponseMessage hasBluetoothEvent] */

undefined8 FUN_106f980c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd4b20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f98100; end: 106f98157; -[SCSpectaclesMalibuPushResponseMessage bluetoothEvent] */

undefined8 FUN_106f98100(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1e5c0();
  _objc_release(param_1);
  uVar1 = (int)uVar2 - 1;
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10de19658 + (ulong)uVar1 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106f98158; end: 106f981d7; -[SCSpectaclesMalibuPushResponseMessage ipAddress] */

void FUN_106f98158(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd80c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c11c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c06afe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f981d8; end: 106f9826b; -[SCSpectaclesMalibuPushResponseMessage wifiFrequency] */

void FUN_106f981d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde820();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c11c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2a5340();
    func_0x00010c0df820(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f9826c; end: 106f982ff; -[SCSpectaclesMalibuPushResponseMessage uploadToCloudEvent] */

undefined8 FUN_106f9826c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfddfc0();
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c11c180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c28e920();
    _objc_release(param_1);
    uVar1 = (int)uVar3 - 2;
    if (uVar1 < 0xd) {
      uVar3 = *(undefined8 *)(&UNK_10de19670 + (ulong)uVar1 * 8);
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 106f98300; end: 106f9838f; -[SCSpectaclesMalibuPushResponseMessage videoRecordingHasStarted] */

bool FUN_106f98300(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdc7c0();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c11c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c2483a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf9a440();
    bVar1 = (int)uVar4 == 5;
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106f98390; end: 106f9841f; -[SCSpectaclesMalibuPushResponseMessage photoCaptureHasStarted] */

bool FUN_106f98390(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdc7c0();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c11c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c2483a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf9a440();
    bVar1 = (int)uVar4 == 0xd;
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106f98420; end: 106f98517; -[SCSpectaclesMalibuPushResponseMessage mediaCount] */

void FUN_106f98420(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8f60();
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c11c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29bec0();
    func_0x00010c11c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0fb780();
    func_0x00010c0df820(puVar6,param_2,(int)uVar5 + (int)uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f98518; end: 106f9858b; -[SCSpectaclesMalibuPushResponseMessage encryptionLayerFailure] */

undefined8 FUN_106f98518(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c11c180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd6a40();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c11c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf93f00();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f9858c; end: 106f985bb; -[SCSpectaclesMalibuPushResponseMessage genericResponseProtocol] */

void FUN_106f9858c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e900f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e900f8);
  return;
}



/* Entry: 106f985bc; end: 106f985eb; -[SCSpectaclesMalibuPushResponseMessage genericResponseData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f985bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761d00);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f985ec; end: 106f985fb; -[SCSpectaclesMalibuPushResponseMessage pushMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f985ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761d00);
}



/* Entry: 106f985fc; end: 106f9860f; -[SCSpectaclesMalibuPushResponseMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f985fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761d00,0);
  return;
}



/* Entry: 106f98610; end: 106f9869b; -[SCSpectaclesMalibuRpcResponseMessage initWithRpcResponse:request:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f98610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8128;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRequest__1125ed4b8,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761d04;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f9869c; end: 106f98757; -[SCSpectaclesMalibuRpcResponseMessage responseStatus] */

undefined8 FUN_106f9869c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252d60();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    uVar3 = 4;
  }
  else {
    lVar1 = param_1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    if (lVar2 == 0xf) {
      func_0x00010c142400();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c252d60();
      _objc_release(param_1);
      _objc_release(lVar1);
      uVar3 = 4;
      if (((uint)lVar2 & 0xff) != 0x83) {
        uVar3 = 2;
      }
    }
    else {
      _objc_release(lVar1);
      uVar3 = 2;
    }
  }
  return uVar3;
}



/* Entry: 106f98758; end: 106f9881b; -[SCSpectaclesMalibuRpcResponseMessage batteryLevel] */

void FUN_106f98758(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf177c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdc600();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf177c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c246020();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f9881c; end: 106f98877; -[SCSpectaclesMalibuRpcResponseMessage hasBatteryLevelStatus] */

undefined8 FUN_106f9881c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf177c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc620();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f98878; end: 106f98933; -[SCSpectaclesMalibuRpcResponseMessage batteryLevelStatus] */

undefined8 FUN_106f98878(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf177c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfdc620();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    func_0x00010c142400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf177c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c246040();
    _objc_release(uVar2);
    _objc_release(param_1);
    uVar1 = (int)uVar3 - 1;
    if (uVar1 < 3) {
      return *(undefined8 *)(&UNK_10de196d8 + (ulong)uVar1 * 8);
    }
  }
  return 0;
}



/* Entry: 106f98934; end: 106f989f7; -[SCSpectaclesMalibuRpcResponseMessage guppyBatteryLevel] */

void FUN_106f98934(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc6200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd48a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfc6200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf17500();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f989f8; end: 106f98aaf; -[SCSpectaclesMalibuRpcResponseMessage voltageLevel] */

void FUN_106f989f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf177c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf177c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0d80();
    func_0x00010c0df760(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f98ab0; end: 106f98b0b; -[SCSpectaclesMalibuRpcResponseMessage hasCharging] */

undefined8 FUN_106f98ab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf35b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8100();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f98b0c; end: 106f98b67; -[SCSpectaclesMalibuRpcResponseMessage charging] */

undefined8 FUN_106f98b0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf35b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e400();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f98b68; end: 106f98bc3; -[SCSpectaclesMalibuRpcResponseMessage requestAuthzCode] */

undefined8 FUN_106f98b68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c134ae0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f98bc4; end: 106f98c27; -[SCSpectaclesMalibuRpcResponseMessage cloudUploadClientId] */

void FUN_106f98bc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f98c28; end: 106f98c37; +[SCSpectaclesMalibuRpcResponseMessage _convertMLBAPState:] */

long FUN_106f98c28(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 106f98c38; end: 106f98e7b; -[SCSpectaclesMalibuRpcResponseMessage knownWifiAPList] */

undefined * FUN_106f98c38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  lVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcc400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfcc400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c2a5260();
    func_0x00010bf0a0e0(puVar6,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_1;
    func_0x00010c142400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bfcc400();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010c2a5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar1);
          }
          uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          puVar3 = PTR_PTR_1126c1510;
          _objc_alloc(PTR_PTR_1126c1510);
          lVar4 = param_1;
          _objc_opt_class(param_1);
          uVar5 = uVar7;
          func_0x00010c252440(uVar7);
          func_0x00010bde9240(lVar4,param_2,uVar5);
          func_0x00010c24cc00(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04bfa0(puVar3,param_2,lVar4,uVar7);
          func_0x00010befa120(puVar6,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(uVar7);
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010c13bcc0();
  return (undefined *)(ulong)(lVar1 == 4);
}



/* Entry: 106f98e7c; end: 106f98e97; -[SCSpectaclesMalibuRpcResponseMessage setWifiAPListResponse] */

bool FUN_106f98e7c(long param_1)

{
  func_0x00010c13bcc0();
  return param_1 == 4;
}



/* Entry: 106f98e98; end: 106f98f4f; -[SCSpectaclesMalibuRpcResponseMessage lastCloudUploadTime] */

void FUN_106f98e98(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc6cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfc6cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    func_0x00010bf655e0((double)(uVar2 & 0xffffffff),puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f98f50; end: 106f9900b; -[SCSpectaclesMalibuRpcResponseMessage serialNumber] */

void FUN_106f98f50(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bfca140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfca140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c271dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106f9900c; end: 106f990eb; -[SCSpectaclesMalibuRpcResponseMessage firmwareVersion] */

void FUN_106f9900c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfccc80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdd1e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c0c68;
    _objc_alloc(PTR_PTR_1126c0c68);
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfccc80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c268120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar4,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f990ec; end: 106f991f7; -[SCSpectaclesMalibuRpcResponseMessage hardwareVersion] */

void FUN_106f990ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1e980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c0c70;
    _objc_alloc(PTR_PTR_1126c0c70);
    uVar1 = param_1;
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1e980();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd3840();
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf1e980();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd3860();
    func_0x00010c00c380(puVar6,param_2,0,uVar3 & 0xffffffff,uVar5 & 0xffffffff);
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f991f8; end: 106f99243; -[SCSpectaclesMalibuRpcResponseMessage hasDeviceColor] */

bool FUN_106f991f8(long param_1)

{
  long lVar1;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfc5d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106f99244; end: 106f992ab; -[SCSpectaclesMalibuRpcResponseMessage deviceColor] */

long FUN_106f99244(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfc5d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb6b00();
  _objc_release(uVar2);
  _objc_release(param_1);
  lVar1 = (uVar3 & 0xffffffff) + 5;
  if (6 < (uint)uVar3) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 106f992ac; end: 106f9936f; -[SCSpectaclesMalibuRpcResponseMessage storagePercentage] */

void FUN_106f992ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd46a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfc2c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf12a40();
    func_0x00010c0df820(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f99370; end: 106f993cb; -[SCSpectaclesMalibuRpcResponseMessage hasStorageLevelStatus] */

undefined8 FUN_106f99370(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcb40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f993cc; end: 106f99483; -[SCSpectaclesMalibuRpcResponseMessage storageLevelStatus] */

undefined8 FUN_106f993cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfc2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcb40();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c142400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfc2c20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c252d60();
    _objc_release(uVar3);
    _objc_release(param_1);
    uVar3 = 2;
    if ((int)uVar1 != 1) {
      uVar3 = 0;
    }
    if ((int)uVar1 == 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 106f99484; end: 106f99543; -[SCSpectaclesMalibuRpcResponseMessage nordicTemperature] */

void FUN_106f99484(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcb160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd9860();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db280();
    func_0x00010c0df740(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f99544; end: 106f99607; -[SCSpectaclesMalibuRpcResponseMessage socTemperature] */

void FUN_106f99544(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcb160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd4080();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf02340();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f99608; end: 106f996cb; -[SCSpectaclesMalibuRpcResponseMessage wifiTemperature] */

void FUN_106f99608(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcb160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde8a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2a5640();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f996cc; end: 106f9978f; -[SCSpectaclesMalibuRpcResponseMessage coulombCounterTemperature] */

void FUN_106f996cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcb160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd5de0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529a0();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f99790; end: 106f997eb; -[SCSpectaclesMalibuRpcResponseMessage hasTemperatureLevelStatus] */

undefined8 FUN_106f99790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfcb160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcb40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f997ec; end: 106f9989b; -[SCSpectaclesMalibuRpcResponseMessage temperatureStatus] */

int FUN_106f997ec(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcb160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfdcb40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x00010c142400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c252d60();
    _objc_release(uVar2);
    _objc_release(param_1);
    iVar1 = 0;
    if ((uint)uVar3 < 3) {
      iVar1 = (uint)uVar3 + 1;
    }
  }
  return iVar1;
}



/* Entry: 106f9989c; end: 106f998eb; -[SCSpectaclesMalibuRpcResponseMessage hasFirmwareUpdateResponse] */

uint FUN_106f9989c(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27dd80();
  _objc_release(param_1);
  return (uint)(uVar1 < 0x14) & 0xb8000U >> (ulong)((uint)uVar1 & 0x1f);
}



/* Entry: 106f998ec; end: 106f99943; -[SCSpectaclesMalibuRpcResponseMessage firmwareUpdateResponseType] */

undefined8 FUN_106f998ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27dd80();
  _objc_release(param_1);
  if (lVar1 - 0xfU < 5) {
    uVar2 = *(undefined8 *)(&UNK_10de196f0 + (lVar1 - 0xfU) * 8);
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 106f99944; end: 106f9998f; -[SCSpectaclesMalibuRpcResponseMessage hasPatchApplied] */

bool FUN_106f99944(long param_1)

{
  long lVar1;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf084a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106f99990; end: 106f999db; -[SCSpectaclesMalibuRpcResponseMessage patchApplied] */

bool FUN_106f99990(long param_1)

{
  long lVar1;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf084a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106f999dc; end: 106f99aef; -[SCSpectaclesMalibuRpcResponseMessage firmwareDigest] */

void FUN_106f999dc(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar3 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar3;
  func_0x00010c27dd80();
  _objc_release(ppuVar3);
  if (ppuVar1 == (undefined **)0xf) {
    ppuVar3 = param_1;
    func_0x00010c142400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010c252d60();
    _objc_release(ppuVar3);
    if ((int)ppuVar1 == 0x83) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_106f99adc;
    }
    ppuVar3 = param_1;
    func_0x00010c142400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010bfc59c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bfd64e0();
    _objc_release(ppuVar1);
    _objc_release(ppuVar3);
    if ((int)ppuVar2 != 0) {
      func_0x00010c142400(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = param_1;
      func_0x00010bfc59c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar1;
      func_0x00010bf7eda0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(param_1);
      goto LAB_106f99adc;
    }
  }
  ppuVar3 = (undefined **)0x0;
LAB_106f99adc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106f99af0; end: 106f99cb3; -[SCSpectaclesMalibuRpcResponseMessage backgroundUpdateParameters] */

void FUN_106f99af0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc2cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  puVar6 = (undefined *)0x0;
  if (uVar2 != 0) {
    func_0x00010c142400();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfc2cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010bfdd2c0();
    if (((((int)uVar2 == 0) || (uVar2 = uVar1, func_0x00010bfdd300(), (int)uVar2 == 0)) ||
        (uVar2 = uVar1, func_0x00010bfdd5a0(), (int)uVar2 == 0)) ||
       ((uVar2 = uVar1, func_0x00010bfd6920(), (int)uVar2 == 0 ||
        (uVar2 = uVar1, func_0x00010bfde900(), (int)uVar2 == 0)))) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126c0c68;
      _objc_alloc(PTR_PTR_1126c0c68);
      uVar2 = uVar1;
      func_0x00010c26a260(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar3,param_2,uVar2);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010c26fb60(uVar1);
      uVar4 = uVar1;
      func_0x00010bf8d100(uVar1);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600((double)(long)((uVar2 & 0xffffffff) - uVar4) / 1000.0,
                          PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2a7280(uVar1);
      puVar6 = PTR_PTR_1126d3098;
      uVar4 = uVar1;
      func_0x00010c269f40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f4e60((double)(uVar2 & 0xffffffff) / 1000.0,puVar6,param_2,puVar3,uVar4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f99cb4; end: 106f99cdb; +[SCSpectaclesMalibuRpcResponseMessage _descriptionForFailureReason:] */

undefined ** FUN_106f99cb4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 4U < 6) {
    return (undefined **)(&PTR_PTR_110986198)[param_3 - 4U];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 106f99cdc; end: 106f99e0b; -[SCSpectaclesMalibuRpcResponseMessage backgroundUpdateFailureReason] */

undefined * FUN_106f99cdc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc2cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c088ae0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_opt_class();
    func_0x00010bdfaf80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = param_1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar5,param_2,&PTR____CFConstantStringClassReference_110e78258,
                        (long)(int)lVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_1);
    lVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2913c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return (undefined *)(ulong)(lVar2 != 0);
}



/* Entry: 106f99e0c; end: 106f99e57; -[SCSpectaclesMalibuRpcResponseMessage receivedUserAssociationDoneMessage] */

bool FUN_106f99e0c(long param_1)

{
  long lVar1;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2913c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106f99e58; end: 106f99e5f; -[SCSpectaclesMalibuRpcResponseMessage hasBluetoothEvent] */

undefined8 FUN_106f99e58(void)

{
  return 0;
}



/* Entry: 106f99e60; end: 106f99e67; -[SCSpectaclesMalibuRpcResponseMessage bluetoothEvent] */

undefined8 FUN_106f99e60(void)

{
  return 0;
}



/* Entry: 106f99e68; end: 106f99eff; -[SCSpectaclesMalibuRpcResponseMessage hasWifiState] */

bool FUN_106f99e68(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a5580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c2a5620();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106f99f00; end: 106f99f87; -[SCSpectaclesMalibuRpcResponseMessage wifiOn] */

bool FUN_106f99f00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a5580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_1);
  }
  return lVar2 != 0;
}



/* Entry: 106f99f88; end: 106f9a037; -[SCSpectaclesMalibuRpcResponseMessage peerPublicKey] */

void FUN_106f99f88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c086640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdac20();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c086640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f9a038; end: 106f9a0e7; -[SCSpectaclesMalibuRpcResponseMessage peerVerificationNonce] */

void FUN_106f9a038(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c086640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9820();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c086640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0db0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f9a0e8; end: 106f9a197; -[SCSpectaclesMalibuRpcResponseMessage peerVerificationCiphertext] */

void FUN_106f9a0e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0f71c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd54e0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0f71c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf397c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f9a198; end: 106f9a247; -[SCSpectaclesMalibuRpcResponseMessage peerVerificationTag] */

void FUN_106f9a198(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0f71c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd1e0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0f71c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c268120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f9a248; end: 106f9a2f7; -[SCSpectaclesMalibuRpcResponseMessage encryptionSetupNonce] */

void FUN_106f9a248(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf93fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9820();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf93fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0db0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f9a2f8; end: 106f9a43f; -[SCSpectaclesMalibuRpcResponseMessage mediaCount] */

void FUN_106f9a2f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar1 = param_1;
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd8f60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfc7680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29bec0();
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bfc7680();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0fb780();
    func_0x00010c0df820(puVar8,param_2,(int)uVar7 + (int)uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106f9a440; end: 106f9a48b; -[SCSpectaclesMalibuRpcResponseMessage contentCleared] */

bool FUN_106f9a440(long param_1)

{
  long lVar1;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf3aee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106f9a48c; end: 106f9a4d7; -[SCSpectaclesMalibuRpcResponseMessage shipmodeSet] */

bool FUN_106f9a48c(long param_1)

{
  long lVar1;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c22c960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106f9a4d8; end: 106f9a533; -[SCSpectaclesMalibuRpcResponseMessage hasLocationEnabled] */

undefined8 FUN_106f9a4d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc7240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde340();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f9a534; end: 106f9a59f; -[SCSpectaclesMalibuRpcResponseMessage locationEnabled] */

void FUN_106f9a534(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfd8a20();
  if ((int)uVar1 != 0) {
    func_0x00010c142400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfc7240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106f9a5a0; end: 106f9a5cf; -[SCSpectaclesMalibuRpcResponseMessage genericResponseProtocol] */

void FUN_106f9a5a0(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e900d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e900d8);
  return;
}


