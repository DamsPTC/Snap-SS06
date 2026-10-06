/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106923488; end: 1069234eb; -[SCStoriesSnapReadReceiptCoordinator _fetchViewHistoryDidFailWithStatusCode:] */

void FUN_106923488(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069234ec; end: 1069235bb; -[SCStoriesSnapReadReceiptCoordinator _didCompleteFetchViewHistoryResponse:] */

void FUN_1069234ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134f60();
  _objc_release(uVar3);
  lVar1 = param_3;
  func_0x00010c29d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf51e00(lVar1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0(lVar2);
  func_0x00010c0a6640(uVar3,param_2,1,lVar1 == 0);
  _objc_release(uVar3);
  func_0x00010be73620(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1069235bc; end: 10692364f; -[SCStoriesSnapReadReceiptCoordinator _persistViewReportsToDocObjectContext:] */

void FUN_1069235bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106923650;
  puStack_40 = &UNK_110841f20;
  lStack_38 = param_1;
  _objc_retain(param_3);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  func_0x0001084f3e34(*(undefined8 *)(param_1 + 8),param_3,ppuVar1);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106923650; end: 106923693;  */

void FUN_106923650(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf208;
  func_0x00010bf009c0(PTR_PTR_1126cf208);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04560(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106923694; end: 1069236a3; -[SCStoriesSnapReadReceiptCoordinator announceReadReceiptsDidUpdateWithRequest:] */

void FUN_106923694(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_didUpdateWithStoriesSnapReadRece_1125bd430,
             param_3,*(undefined1 *)(param_1 + 0x53));
  return;
}



/* Entry: 1069236a4; end: 106923727; -[SCStoriesSnapReadReceiptCoordinator .cxx_destruct] */

void FUN_1069236a4(long param_1)

{
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



/* Entry: 106923728; end: 106923783; -[SCStoriesSnapReadReceiptUploader syncPremiumReadReceiptsToServerShouldFlush:] */

void FUN_106923728(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106923784;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 106923784; end: 106923793;  */

void FUN_106923784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec9bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__syncPremiumRecordsToServerShoul_112590098,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106923794; end: 106923997; -[SCStoriesSnapReadReceiptUploader _syncPremiumRecordsToServerShouldFlush:] */

void FUN_106923794(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x0001084f7714(uVar2,100);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    if (((param_3 & 1) == 0) && (uVar3 < 0x14)) {
      puVar4 = *(undefined **)(param_1 + 0x28);
      func_0x00010c269d40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ad600();
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106923998;
      puStack_60 = &UNK_11094afb0;
      _objc_retain();
      uVar3 = uVar2;
      puStack_58 = puVar4;
      func_0x000100504554(uVar2,&puStack_78);
      _objc_initWeak(auStack_80,param_1);
      uVar6 = *(undefined8 *)(param_1 + 8);
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106923a10;
      puStack_90 = &UNK_11085adb8;
      _objc_retain(puVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_88 = puVar4;
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_b0,auStack_80);
      _objc_retain(uVar3);
      _objc_retain(puVar4);
      func_0x00010c0f8500(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_b0);
      _objc_release(puStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_release(uVar3);
      _objc_release(puStack_58);
    }
    _objc_release(puVar4);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 106923998; end: 106923a0f;  */

void FUN_106923998(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x0001084f2e7c(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106923a10; end: 106923a23;  */

undefined8 * FUN_106923a10(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uStack_324;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  byte bStack_276;
  byte bStack_275;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined *apuStack_220 [3];
  undefined1 uStack_201;
  undefined **appuStack_200 [3];
  byte bStack_1e6;
  byte bStack_1e5;
  undefined *apuStack_1b8 [3];
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar7);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_2 == (undefined8 *)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  puVar2 = &uStack_201;
  func_0x0001084fde00(puVar2);
  func_0x000100aac340(apuStack_220,uVar7);
  func_0x000107c281a0(appuStack_200,0xc,puVar2,apuStack_220);
  puVar2 = &uStack_291;
  func_0x0001084fe0c4();
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_DAT_110a504b0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  uStack_2d8 = 1;
  plStack_2a0 = (long *)0x0;
  bStack_276 = puVar2[0x1a];
  bStack_275 = puVar2[0x1b];
  uStack_288 = 0xb;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_DAT_110a50380;
  pppuStack_250 = &ppuStack_308;
  plStack_228 = (long *)0x0;
  lStack_240 = 0;
  lStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  bStack_176 = bStack_1e6 | bStack_276;
  bStack_175 = bStack_1e5 & bStack_275;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108629c8;
  pppuStack_150 = &ppuStack_290;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  lStack_320 = 0;
  lStack_318 = 0;
  uStack_310 = 0;
  uStack_324 = 0;
  puVar3 = &uStack_120;
  puStack_258 = puVar2;
  pppuStack_158 = appuStack_200;
  func_0x000107c310cc(puVar3,&ppuStack_190,&lStack_320,&uStack_324);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_320 != 0) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  plVar6 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar6 = plStack_228;
  ppuStack_290 = &PTR_DAT_110a50380;
  plStack_228 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  plVar6 = plStack_2a0;
  ppuStack_308 = &PTR_DAT_110a504b0;
  plStack_2a0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar6 = plStack_198;
  appuStack_200[0] = &PTR_SUB_110862700;
  plStack_198 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  ppuStack_290 = apuStack_1b8;
  func_0x000107c27dd4(&ppuStack_290);
  ppuStack_290 = apuStack_220;
  func_0x000107c27dd4(&ppuStack_290);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126d9ef0;
      func_0x0001084fe930(PTR_PTR_1126d9ef0,*(undefined8 *)((long)puVar8 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        *(undefined8 *)(puVar5 + 0x50) = 1;
      }
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  *puVar4 = &PTR_DAT_110a50380;
  plVar6 = (long *)puVar4[0xd];
  puVar4[0xd] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)puVar4[0xc];
  puVar4[0xc] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (puVar4[9] != 0) {
    puVar4[10] = puVar4[9];
    __ZdlPv();
  }
  return puVar4;
}



/* Entry: 106923a24; end: 106923abf;  */

void FUN_106923a24(long param_1,int param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      func_0x00010c0ad600(uVar1);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c0ad600(uVar1);
      _objc_release(uVar1);
      func_0x00010bee5c20(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106923ac0; end: 106923d43; -[SCStoriesSnapReadReceiptUploader _uploadPremiumReadReceipts:readReceiptIds:] */

undefined8 ****
FUN_106923ac0(long param_1,undefined8 param_2,undefined8 ****param_3,undefined8 ****param_4)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined **ppuVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 ****unaff_x26;
  undefined8 ***pppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 ***pppuStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 ***pppuStack_280;
  undefined **ppuStack_278;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 ***pppuStack_200;
  undefined8 ***pppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 ***pppuStack_148;
  undefined1 auStack_140 [8];
  undefined8 **ppuStack_138;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  ppppuVar2 = param_4;
  func_0x00010bf52a60();
  if (ppppuVar2 != (undefined8 ****)0x0) {
    unaff_x25 = *plStack_120;
    do {
      unaff_x26 = (undefined8 ****)0x0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + (long)unaff_x26 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad620();
        _objc_release(uVar3);
        unaff_x26 = (undefined8 ****)((long)unaff_x26 + 1);
      } while (ppppuVar2 != unaff_x26);
      ppppuVar2 = param_4;
      func_0x00010bf52a60();
    } while (ppppuVar2 != (undefined8 ****)0x0);
  }
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppppuVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11094b000);
  func_0x00010c0ad5e0(uVar3);
  _objc_release(ppppuVar2);
  _objc_release(uVar3);
  _objc_initWeak(&ppuStack_138,param_1);
  ppppuVar4 = *(undefined8 *****)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar5 = *(undefined8 *****)(param_1 + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_106923d4c;
  puStack_150 = &UNK_11084b7a0;
  ppuVar6 = &puStack_168;
  ppppuVar2 = (undefined8 ****)&ppuStack_138;
  _objc_copyWeak(auStack_140);
  _objc_retain(param_4);
  ppppuVar7 = param_3;
  pppuStack_148 = param_4;
  func_0x00010c28e480(ppppuVar4);
  _objc_release(ppppuVar5);
  _objc_release(ppppuVar4);
  _objc_release(pppuStack_148);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(&ppuStack_138);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(&ppuStack_138);
    __Unwind_Resume(param_3);
    pcStack_178 = FUN_106923d44;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_1c0 = unaff_x26;
    lStack_1b8 = unaff_x25;
    uStack_1b0 = unaff_x24;
    ppuStack_1a8 = ppuVar6;
    pppuStack_1a0 = ppppuVar4;
    pppuStack_198 = ppppuVar5;
    pppuStack_190 = param_4;
    pppuStack_188 = param_3;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain();
    if (ppppuVar2 == (undefined8 ****)0x0) {
      ppppuVar11 = (undefined8 ****)0x0;
    }
    else {
      ppuStack_238 = &PTR____CFConstantStringClassReference_110dc60f8;
      param_4 = ppppuVar2;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_230 = &PTR____CFConstantStringClassReference_110e4f338;
      ppppuVar5 = ppppuVar2;
      pppuStack_200 = param_4;
      func_0x00010c11b1e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_228 = &PTR____CFConstantStringClassReference_110e651d8;
      ppppuVar4 = ppppuVar2;
      pppuStack_1f8 = ppppuVar5;
      func_0x00010c25e5c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_220 = &PTR____CFConstantStringClassReference_110e651f8;
      pppuStack_1f0 = ppppuVar4;
      func_0x00010c25e5e0(ppppuVar2);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_218 = &PTR____CFConstantStringClassReference_110e65178;
      ppppuVar7 = ppppuVar2;
      ppuStack_1e8 = ppuVar6;
      func_0x00010bf4dac0();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar1 = (int)ppppuVar7 - 1;
      if (uVar1 < 3) {
        ppuStack_1e0 = (undefined **)(&PTR_PTR_11094b090)[uVar1];
      }
      else {
        ppuStack_1e0 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      ppuStack_210 = &PTR____CFConstantStringClassReference_110e65218;
      func_0x00010bf08ca0(ppppuVar2);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_208 = &PTR____CFConstantStringClassReference_110e65238;
      puStack_1d8 = puVar8;
      func_0x00010c22a980(ppppuVar2);
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = &pppuStack_200;
      ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_1d0 = puVar9;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(ppuVar6);
      _objc_release(ppppuVar4);
      _objc_release(ppppuVar5);
      _objc_release(param_4);
    }
    ppppuVar10 = ppppuVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      pcStack_248 = FUN_106925094;
      lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_280 = ppppuVar11;
      ppuStack_278 = ppuVar6;
      pppuStack_270 = ppppuVar4;
      pppuStack_268 = ppppuVar5;
      pppuStack_260 = param_4;
      pppuStack_258 = ppppuVar2;
      ppuStack_250 = &puStack_180;
      _objc_retain();
      if (ppppuVar10 == (undefined8 ****)0x0) {
        ppppuVar11 = (undefined8 ****)0x0;
      }
      else {
        ppppuVar2 = ppppuVar10;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar7 = ppppuVar10;
        pppuStack_2b0 = ppppuVar2;
        func_0x00010bfb83a0();
        uVar1 = (int)ppppuVar7 - 1;
        if (uVar1 < 3) {
          ppuStack_2a8 = (undefined **)(&PTR_PTR_11094b0a8)[uVar1];
        }
        else {
          ppuStack_2a8 = &PTR____CFConstantStringClassReference_110db8b78;
        }
        ppppuVar7 = ppppuVar10;
        func_0x00010c25b720();
        uVar1 = (int)ppppuVar7 - 1;
        if (uVar1 < 9) {
          ppuStack_2a0 = (undefined **)(&PTR_PTR_11094b0c0)[uVar1];
        }
        else {
          ppuStack_2a0 = &PTR____CFConstantStringClassReference_110db8b78;
        }
        ppppuVar5 = ppppuVar10;
        func_0x00010c121800();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        pppuStack_298 = ppppuVar5;
        func_0x00010c22a980(ppppuVar10);
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar7 = &pppuStack_2b0;
        ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_290 = puVar8;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(ppppuVar5);
        _objc_release(ppppuVar2);
      }
      _objc_release(ppppuVar10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
        ___stack_chk_fail();
        puVar8 = PTR_PTR_1126cf218;
        _objc_retain(ppppuVar7);
        _objc_alloc_init(puVar8);
        func_0x00010c05f360(ppppuVar10);
        _objc_release(ppppuVar7);
        _objc_release(puVar8);
        return ppppuVar10;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar11);
    return ppppuVar11;
  }
  return param_3;
}



/* Entry: 106923d44; end: 106923d4b;  */

undefined * FUN_106923d44(undefined8 param_1,undefined *param_2,undefined **param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *puVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_2 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dc60f8;
    unaff_x20 = param_2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110e4f338;
    unaff_x21 = param_2;
    puStack_90 = unaff_x20;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e651d8;
    unaff_x22 = param_2;
    puStack_88 = unaff_x21;
    func_0x00010c25e5c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110e651f8;
    puStack_80 = unaff_x22;
    func_0x00010c25e5e0(param_2);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110e65178;
    puVar6 = param_2;
    puStack_78 = unaff_x23;
    func_0x00010bf4dac0();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = (int)puVar6 - 1;
    if (uVar1 < 3) {
      ppuStack_70 = (undefined **)(&PTR_PTR_11094b090)[uVar1];
    }
    else {
      ppuStack_70 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e65218;
    func_0x00010bf08ca0(param_2);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e65238;
    puStack_68 = puVar2;
    func_0x00010c22a980(param_2);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_90;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_d8 = FUN_106925094;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_110 = puVar6;
    puStack_108 = unaff_x23;
    puStack_100 = unaff_x22;
    puStack_f8 = unaff_x21;
    puStack_f0 = unaff_x20;
    puStack_e8 = param_2;
    puStack_e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      puStack_140 = puVar3;
      func_0x00010bfb83a0();
      uVar1 = (int)puVar6 - 1;
      if (uVar1 < 3) {
        ppuStack_138 = (undefined **)(&PTR_PTR_11094b0a8)[uVar1];
      }
      else {
        ppuStack_138 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      puVar6 = puVar2;
      func_0x00010c25b720();
      uVar1 = (int)puVar6 - 1;
      if (uVar1 < 9) {
        ppuStack_130 = (undefined **)(&PTR_PTR_11094b0c0)[uVar1];
      }
      else {
        ppuStack_130 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      puVar4 = puVar2;
      func_0x00010c121800();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_128 = puVar4;
      func_0x00010c22a980(puVar2);
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = &puStack_140;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_120 = puVar5;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      puVar6 = PTR_PTR_1126cf218;
      _objc_retain(param_3);
      _objc_alloc_init(puVar6);
      func_0x00010c05f360(puVar2);
      _objc_release(param_3);
      _objc_release(puVar6);
      return puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 106923d4c; end: 106923f13;  */

void FUN_106923d4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad620();
        _objc_release(uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0ad680(uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    func_0x00010be01920(lVar2);
    _objc_release(uVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f7fc0(*(undefined8 *)(lVar2 + 0x20));
  return;
}



/* Entry: 106923f14; end: 106923f6f; -[SCStoriesSnapReadReceiptUploader syncReadReceiptsToServerShouldFlush:] */

void FUN_106923f14(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106923f70;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 106923f70; end: 106923f7f;  */

void FUN_106923f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec9c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__syncReadReceiptsToServerShouldF_1125900b0,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106923f80; end: 106924187; -[SCStoriesSnapReadReceiptUploader _syncReadReceiptsToServerShouldFlush:] */

void FUN_106923f80(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x0001084f7a04(uVar2,100);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    if (((param_3 & 1) == 0) && (uVar3 < 0x14)) {
      puVar4 = *(undefined **)(param_1 + 0x28);
      func_0x00010c269d40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ad600();
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106924188;
      puStack_68 = &UNK_11094b020;
      lStack_60 = param_1;
      _objc_retain();
      uVar3 = uVar2;
      puStack_58 = puVar4;
      func_0x000100504554(uVar2,&puStack_80);
      _objc_initWeak(auStack_88,param_1);
      uVar6 = *(undefined8 *)(param_1 + 8);
      puStack_b0 = puVar1;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106924258;
      puStack_98 = &UNK_11085adb8;
      _objc_retain(puVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_90 = puVar4;
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_b8,auStack_88);
      _objc_retain(uVar3);
      _objc_retain(puVar4);
      func_0x00010c0f8500(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_b8);
      _objc_release(puStack_90);
      _objc_destroyWeak(auStack_88);
      _objc_release(uVar3);
      _objc_release(puStack_58);
    }
    _objc_release(puVar4);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 106924188; end: 106924257;  */

void FUN_106924188(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar1 = param_2;
  func_0x00010c2423e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if (((uVar2 & 1) == 0) && (lVar1 = param_2, func_0x00010bfb83a0(), lVar1 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x0001084f3010(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106924258; end: 1069242a7;  */

void FUN_106924258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf51e00(uVar1);
  func_0x0001084f5cf4(param_2,uVar1,1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069242a8; end: 106924343;  */

void FUN_1069242a8(long param_1,int param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      func_0x00010c0ad600(uVar1);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c0ad600(uVar1);
      _objc_release(uVar1);
      func_0x00010bee5d80(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106924344; end: 1069245cb; -[SCStoriesSnapReadReceiptUploader _uploadSnapReadReceipts:readReceiptIds:] */

undefined1 * FUN_106924344(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined8 unaff_x24;
  long lVar11;
  long lVar12;
  undefined1 *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad620();
        _objc_release(uVar3);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11094b070);
  func_0x00010c0ad5e0(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_138,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1069245d4;
  puStack_150 = &UNK_11084b7a0;
  puVar4 = auStack_138;
  _objc_copyWeak(auStack_140);
  _objc_retain(param_4);
  ppuVar9 = (undefined1 **)0x0;
  lStack_148 = param_4;
  func_0x00010bf173c0(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lStack_148);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(param_3);
  pcStack_178 = FUN_1069245cc;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1b0 = unaff_x24;
  ppuStack_1a8 = &puStack_168;
  uStack_1a0 = uVar3;
  uStack_198 = uVar5;
  lStack_190 = param_4;
  puStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (puVar4 == (undefined1 *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    puStack_1e0 = puVar6;
    func_0x00010bfb83a0();
    uVar1 = (int)puVar7 - 1;
    if (uVar1 < 3) {
      ppuStack_1d8 = (undefined **)(&PTR_PTR_11094b0a8)[uVar1];
    }
    else {
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    puVar7 = puVar4;
    func_0x00010c25b720();
    uVar1 = (int)puVar7 - 1;
    if (uVar1 < 9) {
      ppuStack_1d0 = (undefined **)(&PTR_PTR_11094b0c0)[uVar1];
    }
    else {
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    puVar7 = puVar4;
    func_0x00010c121800();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_1c8 = puVar7;
    func_0x00010c22a980(puVar4);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &puStack_1e0;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1c0 = puVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126cf218;
  _objc_retain(ppuVar9);
  _objc_alloc_init(puVar10);
  func_0x00010c05f360(puVar4);
  _objc_release(ppuVar9);
  _objc_release(puVar10);
  return puVar4;
}



/* Entry: 1069245cc; end: 1069245d3;  */

undefined * FUN_1069245cc(undefined8 param_1,undefined *param_2,undefined **param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    puStack_70 = puVar2;
    func_0x00010bfb83a0();
    uVar1 = (int)puVar5 - 1;
    if (uVar1 < 3) {
      ppuStack_68 = (undefined **)(&PTR_PTR_11094b0a8)[uVar1];
    }
    else {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    puVar5 = param_2;
    func_0x00010c25b720();
    uVar1 = (int)puVar5 - 1;
    if (uVar1 < 9) {
      ppuStack_60 = (undefined **)(&PTR_PTR_11094b0c0)[uVar1];
    }
    else {
      ppuStack_60 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    puVar3 = param_2;
    func_0x00010c121800();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_58 = puVar3;
    func_0x00010c22a980(param_2);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_70;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126cf218;
  _objc_retain(param_3);
  _objc_alloc_init(puVar5);
  func_0x00010c05f360(param_2);
  _objc_release(param_3);
  _objc_release(puVar5);
  return param_2;
}



/* Entry: 1069245d4; end: 106924787;  */

void FUN_1069245d4(long param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar8);
    lVar4 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar5 = *(undefined8 *)(lVar3 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad620();
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0ad680(uVar5);
    _objc_release(uVar5);
    param_3 = *(undefined8 *)(param_1 + 0x20);
    param_4 = param_2;
    func_0x00010be01940(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_initWeak(auStack_188,lVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(lVar3 + 8);
  if (param_4 == 0) {
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_106924a30;
    puStack_1f0 = &UNK_11085adb8;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    uStack_1e8 = param_3;
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_210,auStack_188);
    _objc_retain(param_3);
    func_0x00010c0f8500(uVar5);
    _objc_release(uVar6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_210);
    uVar5 = uStack_1e8;
  }
  else {
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_106924990;
    puStack_198 = &UNK_11085adb8;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    uStack_190 = param_3;
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = puVar2;
    uStack_1d8 = 0xc2000000;
    pcStack_1d0 = FUN_1069249a0;
    puStack_1c8 = &UNK_11084b7a0;
    _objc_copyWeak(auStack_1b8,auStack_188);
    _objc_retain(param_3);
    uStack_1c0 = param_3;
    func_0x00010c0f8500(uVar5);
    _objc_release(uVar6);
    _objc_release(uStack_1c0);
    _objc_destroyWeak(auStack_1b8);
    uVar5 = uStack_190;
  }
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_188);
  _objc_release(param_3);
  return;
}



/* Entry: 106924788; end: 10692498f; -[SCStoriesSnapReadReceiptUploader _didUploadPremiumReadReceipts:success:] */

void FUN_106924788(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (param_4 == 0) {
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106924a30;
    puStack_c0 = &UNK_11085adb8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_b8 = param_3;
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_58);
    _objc_retain(param_3);
    func_0x00010c0f8500(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_e0);
    uVar3 = uStack_b8;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106924990;
    puStack_68 = &UNK_11085adb8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = param_3;
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1069249a0;
    puStack_98 = &UNK_11084b7a0;
    _objc_copyWeak(auStack_88,auStack_58);
    _objc_retain(param_3);
    uStack_90 = param_3;
    func_0x00010c0f8500(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    uVar3 = uStack_60;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106924990; end: 10692499f;  */

void FUN_106924990(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  long lVar10;
  double dVar11;
  undefined4 uStack_5fc;
  long lStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined **ppuStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  double dStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long lStack_590;
  undefined8 uStack_588;
  long *plStack_580;
  long *plStack_578;
  undefined1 uStack_561;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined **ppuStack_528;
  undefined4 uStack_520;
  undefined2 uStack_510;
  undefined2 uStack_50e;
  undefined1 *puStack_4f0;
  undefined ***pppuStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long lStack_4a8;
  undefined4 uStack_3dc;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [31];
  undefined1 uStack_3a1;
  undefined **appuStack_3a0 [9];
  undefined1 auStack_358 [24];
  long *plStack_340;
  long *plStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_278;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar7);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_2 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  puVar2 = &uStack_191;
  func_0x0001084fde00(puVar2);
  func_0x000100aac340(auStack_1b0,uVar7);
  func_0x000107c281a0(appuStack_190,0xc,puVar2,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar3 = &uStack_120;
  pppuVar8 = appuStack_190;
  func_0x000107c310cc(puVar3,pppuVar8,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar3);
      }
      pppuVar8 = *(undefined ****)((long)puVar9 * 8);
      puVar5 = PTR_PTR_1126d9ef0;
      func_0x0001084fee94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar4 != puVar9);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  lVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar8);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar10 == 0) {
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_330,lVar10);
  }
  puVar2 = &uStack_3a1;
  func_0x0001084ff7d8(puVar2);
  func_0x000100aac340(auStack_3c0,pppuVar8);
  func_0x000107c281a0(appuStack_3a0,0xc,puVar2,auStack_3c0);
  puStack_3d8 = (undefined1 *)0x0;
  puStack_3d0 = (undefined1 *)0x0;
  uStack_3c8 = 0;
  uStack_3dc = 0;
  puVar3 = &uStack_330;
  func_0x000107c310cc(puVar3,appuStack_3a0,&puStack_3d8,&uStack_3dc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_3d8 != (undefined1 *)0x0) {
    puStack_3d0 = puStack_3d8;
    __ZdlPv();
  }
  plVar1 = plStack_338;
  appuStack_3a0[0] = &PTR_SUB_110862700;
  plStack_338 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_340;
  plStack_340 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_3d8 = auStack_358;
  func_0x000107c27dd4(&puStack_3d8);
  puStack_3d8 = auStack_3c0;
  func_0x000107c27dd4(&puStack_3d8);
  func_0x000107c27da8(&uStack_308);
  _objc_release(uStack_318);
  _objc_release(uStack_320);
  dVar11 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126d9ee8;
      func_0x000108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)((long)puVar9 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(lVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar4 != puVar9);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(pppuVar8);
  lVar6 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(pppuVar8);
  _objc_release(lVar10);
  __Unwind_Resume();
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar6 == 0) {
    uStack_530 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_560,lVar6);
  }
  puVar2 = &uStack_561;
  func_0x0001084ff950();
  uStack_5d8 = CONCAT44(uStack_5d8._4_4_,0xf);
  uStack_5c8 = CONCAT44(uStack_5c8._4_4_,0x100);
  ppuStack_5e0 = &PTR_DAT_11086d7d0;
  uStack_5a0 = 0;
  uStack_5a8 = 0;
  lStack_590 = 0;
  lStack_598 = 0;
  plStack_580 = (long *)0x0;
  uStack_588 = 0;
  plStack_578 = (long *)0x0;
  uStack_50e = *(undefined2 *)(puVar2 + 0x1a);
  uStack_520 = 6;
  uStack_510 = 0x100;
  ppuStack_528 = &PTR_DAT_11089b010;
  lStack_4d8 = 0;
  lStack_4e0 = 0;
  plStack_4c8 = (long *)0x0;
  uStack_4d0 = 0;
  plStack_4c0 = (long *)0x0;
  lStack_5f8 = 0;
  lStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5fc = 0;
  puVar3 = &uStack_560;
  dStack_5b0 = dVar11 * 1000.0;
  puStack_4f0 = puVar2;
  pppuStack_4e8 = &ppuStack_5e0;
  func_0x000107c310cc(puVar3,&ppuStack_528,&lStack_5f8,&uStack_5fc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_5f8 != 0) {
    lStack_5f0 = lStack_5f8;
    __ZdlPv();
  }
  plVar1 = plStack_4c0;
  ppuStack_528 = &PTR_DAT_11089b010;
  plStack_4c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4c8;
  plStack_4c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4e0 != 0) {
    lStack_4d8 = lStack_4e0;
    __ZdlPv();
  }
  plVar1 = plStack_578;
  ppuStack_5e0 = &PTR_DAT_11086d7d0;
  plStack_578 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_580;
  plStack_580 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_598 != 0) {
    lStack_590 = lStack_598;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_538);
  _objc_release(uStack_548);
  _objc_release(uStack_550);
  uStack_5d8 = 0;
  ppuStack_5e0 = (undefined **)0x0;
  uStack_5c8 = 0;
  plStack_5d0 = (long *)0x0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5a8 = 0;
  dStack_5b0 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_5d0;
    do {
      puVar9 = (undefined8 *)0x0;
      do {
        if (*plStack_5d0 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        puVar5 = PTR_PTR_1126d9ee8;
        func_0x000108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(uStack_5d8 + (long)puVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(lVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      } while (puVar4 != puVar9);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar6 == 0) {
    uStack_530 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_560,lVar6);
  }
  puVar2 = &uStack_561;
  func_0x0001084ffbe8();
  uStack_5d8 = CONCAT44(uStack_5d8._4_4_,0xf);
  uStack_5c8 = CONCAT44(uStack_5c8._4_4_,0x100);
  dStack_5b0 = 4.94065645841247e-324;
  ppuStack_5e0 = &PTR_DAT_110a504b0;
  uStack_5a0 = 0;
  uStack_5a8 = 0;
  lStack_590 = 0;
  lStack_598 = 0;
  plStack_580 = (long *)0x0;
  uStack_588 = 0;
  plStack_578 = (long *)0x0;
  uStack_50e = *(undefined2 *)(puVar2 + 0x1a);
  uStack_520 = 10;
  uStack_510 = 0x100;
  ppuStack_528 = &PTR_DAT_110a50380;
  pppuStack_4e8 = &ppuStack_5e0;
  lStack_4d8 = 0;
  lStack_4e0 = 0;
  plStack_4c8 = (long *)0x0;
  uStack_4d0 = 0;
  plStack_4c0 = (long *)0x0;
  lStack_5f8 = 0;
  lStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5fc = 0;
  puVar3 = &uStack_560;
  puStack_4f0 = puVar2;
  func_0x000107c310cc(puVar3,&ppuStack_528,&lStack_5f8,&uStack_5fc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_5f8 != 0) {
    lStack_5f0 = lStack_5f8;
    __ZdlPv();
  }
  plVar1 = plStack_4c0;
  ppuStack_528 = &PTR_DAT_110a50380;
  plStack_4c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4c8;
  plStack_4c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4e0 != 0) {
    lStack_4d8 = lStack_4e0;
    __ZdlPv();
  }
  plVar1 = plStack_578;
  ppuStack_5e0 = &PTR_DAT_110a504b0;
  plStack_578 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_580;
  plStack_580 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_598 != 0) {
    lStack_590 = lStack_598;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_538);
  _objc_release(uStack_548);
  _objc_release(uStack_550);
  puVar4 = puVar3;
  func_0x00010bf0a540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x000100504554();
  _objc_release(puVar4);
  func_0x0001084f5cf4(lVar6,puVar9,0);
  _objc_release(puVar9);
  _objc_release(puVar3);
  lVar10 = lVar6;
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(lVar6);
  __Unwind_Resume(lVar10);
  func_0x00010c241220(puVar9);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069249a0; end: 106924a2f;  */

void FUN_1069249a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0ad640(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106924a30; end: 106924a43;  */

undefined8 * FUN_106924a30(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uStack_324;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  byte bStack_276;
  byte bStack_275;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined *apuStack_220 [3];
  undefined1 uStack_201;
  undefined **appuStack_200 [3];
  byte bStack_1e6;
  byte bStack_1e5;
  undefined *apuStack_1b8 [3];
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar7);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_2 == (undefined8 *)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  puVar2 = &uStack_201;
  func_0x0001084fde00(puVar2);
  func_0x000100aac340(apuStack_220,uVar7);
  func_0x000107c281a0(appuStack_200,0xc,puVar2,apuStack_220);
  puVar2 = &uStack_291;
  func_0x0001084fe0c4();
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_DAT_110a504b0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  uStack_2d8 = 0;
  plStack_2a0 = (long *)0x0;
  bStack_276 = puVar2[0x1a];
  bStack_275 = puVar2[0x1b];
  uStack_288 = 0xb;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_DAT_110a50380;
  pppuStack_250 = &ppuStack_308;
  plStack_228 = (long *)0x0;
  lStack_240 = 0;
  lStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  bStack_176 = bStack_1e6 | bStack_276;
  bStack_175 = bStack_1e5 & bStack_275;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108629c8;
  pppuStack_150 = &ppuStack_290;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  lStack_320 = 0;
  lStack_318 = 0;
  uStack_310 = 0;
  uStack_324 = 0;
  puVar3 = &uStack_120;
  puStack_258 = puVar2;
  pppuStack_158 = appuStack_200;
  func_0x000107c310cc(puVar3,&ppuStack_190,&lStack_320,&uStack_324);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_320 != 0) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  plVar6 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar6 = plStack_228;
  ppuStack_290 = &PTR_DAT_110a50380;
  plStack_228 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  plVar6 = plStack_2a0;
  ppuStack_308 = &PTR_DAT_110a504b0;
  plStack_2a0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar6 = plStack_198;
  appuStack_200[0] = &PTR_SUB_110862700;
  plStack_198 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  ppuStack_290 = apuStack_1b8;
  func_0x000107c27dd4(&ppuStack_290);
  ppuStack_290 = apuStack_220;
  func_0x000107c27dd4(&ppuStack_290);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126d9ef0;
      func_0x0001084fe930(PTR_PTR_1126d9ef0,*(undefined8 *)((long)puVar8 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        *(undefined8 *)(puVar5 + 0x50) = 0;
      }
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  *puVar4 = &PTR_DAT_110a50380;
  plVar6 = (long *)puVar4[0xd];
  puVar4[0xd] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)puVar4[0xc];
  puVar4[0xc] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (puVar4[9] != 0) {
    puVar4[10] = puVar4[9];
    __ZdlPv();
  }
  return puVar4;
}



/* Entry: 106924a44; end: 106924ad3;  */

void FUN_106924a44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0ad640(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106924ad4; end: 106924cdb; -[SCStoriesSnapReadReceiptUploader _didUploadSnapReceipts:success:] */

void FUN_106924ad4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (param_4 == 0) {
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106924d7c;
    puStack_c0 = &UNK_11085adb8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_b8 = param_3;
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_58);
    _objc_retain(param_3);
    func_0x00010c0f8500(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_e0);
    uVar3 = uStack_b8;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106924cdc;
    puStack_68 = &UNK_11085adb8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = param_3;
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106924cec;
    puStack_98 = &UNK_11084b7a0;
    _objc_copyWeak(auStack_88,auStack_58);
    _objc_retain(param_3);
    uStack_90 = param_3;
    func_0x00010c0f8500(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    uVar3 = uStack_60;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106924cdc; end: 106924ceb;  */

void FUN_106924cdc(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  double dVar10;
  undefined4 uStack_3ec;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  double dStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined1 uStack_351;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined **ppuStack_318;
  undefined4 uStack_310;
  undefined2 uStack_300;
  undefined2 uStack_2fe;
  undefined1 *puStack_2e0;
  undefined ***pppuStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long lStack_298;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar7);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (param_2 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  puVar2 = &uStack_191;
  func_0x0001084ff7d8(puVar2);
  func_0x000100aac340(auStack_1b0,uVar7);
  func_0x000107c281a0(appuStack_190,0xc,puVar2,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar3 = &uStack_120;
  func_0x000107c310cc(puVar3,appuStack_190,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  dVar10 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126d9ee8;
      func_0x000108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)((long)puVar8 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  lVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar6 == 0) {
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_350,lVar6);
  }
  puVar2 = &uStack_351;
  func_0x0001084ff950();
  uStack_3c8 = CONCAT44(uStack_3c8._4_4_,0xf);
  uStack_3b8 = CONCAT44(uStack_3b8._4_4_,0x100);
  ppuStack_3d0 = &PTR_DAT_11086d7d0;
  uStack_390 = 0;
  uStack_398 = 0;
  lStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  uStack_2fe = *(undefined2 *)(puVar2 + 0x1a);
  uStack_310 = 6;
  uStack_300 = 0x100;
  ppuStack_318 = &PTR_DAT_11089b010;
  lStack_2c8 = 0;
  lStack_2d0 = 0;
  plStack_2b8 = (long *)0x0;
  uStack_2c0 = 0;
  plStack_2b0 = (long *)0x0;
  lStack_3e8 = 0;
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3ec = 0;
  puVar3 = &uStack_350;
  dStack_3a0 = dVar10 * 1000.0;
  puStack_2e0 = puVar2;
  pppuStack_2d8 = &ppuStack_3d0;
  func_0x000107c310cc(puVar3,&ppuStack_318,&lStack_3e8,&uStack_3ec);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  plVar1 = plStack_2b0;
  ppuStack_318 = &PTR_DAT_11089b010;
  plStack_2b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2b8;
  plStack_2b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2d0 != 0) {
    lStack_2c8 = lStack_2d0;
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_DAT_11086d7d0;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_328);
  _objc_release(uStack_338);
  _objc_release(uStack_340);
  uStack_3c8 = 0;
  ppuStack_3d0 = (undefined **)0x0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  dStack_3a0 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar9 = *plStack_3c0;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_3c0 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        puVar5 = PTR_PTR_1126d9ee8;
        func_0x000108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(uStack_3c8 + (long)puVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(lVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar4 != puVar8);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar6 == 0) {
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_350,lVar6);
  }
  puVar2 = &uStack_351;
  func_0x0001084ffbe8();
  uStack_3c8 = CONCAT44(uStack_3c8._4_4_,0xf);
  uStack_3b8 = CONCAT44(uStack_3b8._4_4_,0x100);
  dStack_3a0 = 4.94065645841247e-324;
  ppuStack_3d0 = &PTR_DAT_110a504b0;
  uStack_390 = 0;
  uStack_398 = 0;
  lStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  uStack_2fe = *(undefined2 *)(puVar2 + 0x1a);
  uStack_310 = 10;
  uStack_300 = 0x100;
  ppuStack_318 = &PTR_DAT_110a50380;
  pppuStack_2d8 = &ppuStack_3d0;
  lStack_2c8 = 0;
  lStack_2d0 = 0;
  plStack_2b8 = (long *)0x0;
  uStack_2c0 = 0;
  plStack_2b0 = (long *)0x0;
  lStack_3e8 = 0;
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3ec = 0;
  puVar3 = &uStack_350;
  puStack_2e0 = puVar2;
  func_0x000107c310cc(puVar3,&ppuStack_318,&lStack_3e8,&uStack_3ec);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  plVar1 = plStack_2b0;
  ppuStack_318 = &PTR_DAT_110a50380;
  plStack_2b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2b8;
  plStack_2b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2d0 != 0) {
    lStack_2c8 = lStack_2d0;
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_DAT_110a504b0;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_328);
  _objc_release(uStack_338);
  _objc_release(uStack_340);
  puVar4 = puVar3;
  func_0x00010bf0a540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x000100504554();
  _objc_release(puVar4);
  func_0x0001084f5cf4(lVar6,puVar8,0);
  _objc_release(puVar8);
  _objc_release(puVar3);
  lVar9 = lVar6;
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(lVar6);
  __Unwind_Resume(lVar9);
  func_0x00010c241220(puVar8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106924cec; end: 106924d7b;  */

void FUN_106924cec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0ad640(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106924d7c; end: 106924d8f;  */

undefined8 * FUN_106924d7c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined4 uStack_644;
  long lStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined ***pppuStack_628;
  undefined ***pppuStack_620;
  undefined8 uStack_618;
  undefined4 uStack_610;
  undefined ***pppuStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  undefined1 uStack_5b1;
  undefined **ppuStack_5b0;
  undefined4 uStack_5a8;
  undefined2 uStack_598;
  byte bStack_596;
  byte bStack_595;
  undefined1 *puStack_578;
  undefined ****ppppuStack_570;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined *apuStack_540 [3];
  undefined1 uStack_521;
  undefined **ppuStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined *apuStack_4d8 [3];
  long *plStack_4c0;
  long *plStack_4b8;
  undefined **ppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  undefined **ppuStack_478;
  undefined4 uStack_470;
  undefined2 uStack_460;
  byte bStack_45e;
  byte bStack_45d;
  undefined ***pppuStack_440;
  undefined ***pppuStack_438;
  undefined **ppuStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long *plStack_418;
  long *plStack_410;
  undefined ***pppuStack_408;
  undefined ***pppuStack_400;
  long lStack_3f8;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_324;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  byte bStack_276;
  byte bStack_275;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined *apuStack_220 [3];
  undefined1 uStack_201;
  undefined **appuStack_200 [3];
  byte bStack_1e6;
  byte bStack_1e5;
  undefined *apuStack_1b8 [3];
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  puVar18 = &uStack_370;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar14);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (param_2 == (undefined8 *)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  puVar2 = &uStack_201;
  func_0x0001084ff7d8(puVar2);
  func_0x000100aac340(apuStack_220,uVar14);
  func_0x000107c281a0(appuStack_200,0xc,puVar2,apuStack_220);
  puVar2 = &uStack_291;
  func_0x0001084fe0c4();
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_DAT_110a504b0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  uStack_2d8 = 0;
  plStack_2a0 = (long *)0x0;
  bStack_276 = puVar2[0x1a];
  bStack_275 = puVar2[0x1b];
  uStack_288 = 0xb;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_DAT_110a50380;
  pppuStack_250 = &ppuStack_308;
  plStack_228 = (long *)0x0;
  lStack_240 = 0;
  lStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  bStack_176 = bStack_1e6 | bStack_276;
  bStack_175 = bStack_1e5 & bStack_275;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108629c8;
  pppuStack_150 = &ppuStack_290;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  lStack_320 = 0;
  lStack_318 = 0;
  uStack_310 = 0;
  uStack_324 = 0;
  puVar16 = &uStack_120;
  pppuVar15 = &ppuStack_190;
  puStack_258 = puVar2;
  pppuStack_158 = appuStack_200;
  func_0x000107c310cc(puVar16,pppuVar15,&lStack_320,&uStack_324);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_320 != 0) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  plVar13 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar13 = plStack_228;
  ppuStack_290 = &PTR_DAT_110a50380;
  plStack_228 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  plVar13 = plStack_2a0;
  ppuStack_308 = &PTR_DAT_110a504b0;
  plStack_2a0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar13 = plStack_198;
  appuStack_200[0] = &PTR_SUB_110862700;
  plStack_198 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  ppuStack_290 = apuStack_1b8;
  func_0x000107c27dd4(&ppuStack_290);
  ppuStack_290 = apuStack_220;
  func_0x000107c27dd4(&ppuStack_290);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  _objc_retain(puVar16);
  puVar3 = puVar16;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar17 = *plStack_360;
    do {
      puVar18 = (undefined8 *)0x0;
      do {
        if (*plStack_360 != lVar17) {
          _objc_enumerationMutation(puVar16);
        }
        pppuVar15 = *(undefined ****)(lStack_368 + (long)puVar18 * 8);
        puVar4 = PTR_PTR_1126d9ee8;
        func_0x0001085004e4();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          *(undefined8 *)(puVar4 + 0x58) = 0;
        }
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
      } while (puVar3 != puVar18);
      puVar3 = puVar16;
      puVar18 = &uStack_370;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar16);
  _objc_release(puVar16);
  _objc_release(uVar14);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar16);
  _objc_release(puVar16);
  _objc_release(uVar14);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar15);
  _objc_retain(puVar18);
  _objc_opt_class(PTR_PTR_1126cc378);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_480 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    ppuStack_488 = (undefined **)0x0;
    uStack_490 = 0;
    uStack_4a8 = 0;
    ppuStack_4b0 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_4b0,puVar3);
  }
  puVar2 = &uStack_521;
  func_0x00010850276c(puVar2);
  pppuVar5 = pppuVar15;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_400 = pppuVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100aac340(apuStack_540,puVar4);
  func_0x000107c281a0(&ppuStack_520,0xc,puVar2,apuStack_540);
  puVar2 = &uStack_5b1;
  func_0x0001085028e4();
  pppuVar6 = pppuVar15;
  func_0x00010bf4dac0();
  pppuStack_620 = (undefined ***)CONCAT44(pppuStack_620._4_4_,0xf);
  uStack_610 = 0x100;
  pppuStack_628 = (undefined ***)&PTR_DAT_110a50440;
  ppuVar19 = (undefined **)0x0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  lStack_5d8 = 0;
  lStack_5e0 = 0;
  plStack_5c8 = (long *)0x0;
  uStack_5d0 = 0;
  plStack_5c0 = (long *)0x0;
  bStack_596 = puVar2[0x1a];
  bStack_595 = puVar2[0x1b];
  uStack_5a8 = 10;
  uStack_598 = 0x100;
  ppuStack_5b0 = &PTR_DAT_110a503e0;
  lStack_560 = 0;
  lStack_568 = 0;
  plStack_550 = (long *)0x0;
  uStack_558 = 0;
  plStack_548 = (long *)0x0;
  bStack_45e = uStack_508._2_1_ | bStack_596;
  bStack_45d = uStack_508._3_1_ & bStack_595;
  uStack_470 = 4;
  uStack_460 = 0x100;
  ppuStack_478 = &PTR_DAT_1108629c8;
  pppuStack_438 = &ppuStack_5b0;
  plStack_410 = (long *)0x0;
  plStack_418 = (long *)0x0;
  uStack_420 = 0;
  uStack_428 = 0;
  ppuStack_430 = (undefined **)0x0;
  lStack_640 = 0;
  lStack_638 = 0;
  uStack_630 = 0;
  uStack_644 = 0;
  pppuVar7 = &ppuStack_4b0;
  pppuStack_5f8 = pppuVar6;
  puStack_578 = puVar2;
  ppppuStack_570 = &pppuStack_628;
  pppuStack_440 = &ppuStack_520;
  func_0x000107c310cc(pppuVar7,&ppuStack_478,&lStack_640,&uStack_644);
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = pppuVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar7);
  if (lStack_640 != 0) {
    lStack_638 = lStack_640;
    __ZdlPv();
  }
  plVar13 = plStack_410;
  ppuStack_478 = &PTR_DAT_1108629c8;
  plStack_410 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_418;
  plStack_418 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (ppuStack_430 != (undefined **)0x0) {
    __ZdlPv();
  }
  plVar13 = plStack_548;
  ppuStack_5b0 = &PTR_DAT_110a503e0;
  plStack_548 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_550;
  plStack_550 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_568 != 0) {
    lStack_560 = lStack_568;
    __ZdlPv();
  }
  plVar13 = plStack_5c0;
  pppuStack_628 = (undefined ***)&PTR_DAT_110a50440;
  plStack_5c0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_5c8;
  plStack_5c8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_5e0 != 0) {
    lStack_5d8 = lStack_5e0;
    __ZdlPv();
  }
  plVar13 = plStack_4b8;
  ppuStack_520 = &PTR_SUB_110862700;
  plStack_4b8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_4c0;
  plStack_4c0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  ppuStack_5b0 = apuStack_4d8;
  func_0x000107c27dd4(&ppuStack_5b0);
  ppuStack_5b0 = apuStack_540;
  func_0x000107c27dd4(&ppuStack_5b0);
  _objc_release(puVar4);
  _objc_release(pppuVar5);
  func_0x000107c27da8(&ppuStack_488);
  _objc_release(uStack_498);
  _objc_release(uStack_4a0);
  if (pppuVar6 == (undefined ***)0x0) {
    puVar4 = PTR_PTR_1126cc378;
    _objc_alloc(PTR_PTR_1126cc378);
    pppuVar7 = pppuVar15;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0(pppuVar15);
    func_0x00010bf4dac0(pppuVar15);
    func_0x00010c29e4e0(pppuVar15);
    pppuVar5 = pppuVar15;
    func_0x00010c25e5c0(pppuVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e5e0(pppuVar15);
    func_0x00010bf08ca0(pppuVar15);
    pppuVar9 = pppuVar15;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dd20(puVar4);
    _objc_release(pppuVar9);
    _objc_release(pppuVar5);
    _objc_release(pppuVar7);
    puVar10 = PTR_PTR_1126d9ef8;
    func_0x000108502e60(PTR_PTR_1126d9ef8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    pppuVar7 = pppuVar15;
    func_0x00010bf08ca0();
    pppuVar5 = pppuVar6;
    func_0x00010bf08ca0();
    if ((int)pppuVar7 <= (int)pppuVar5) {
      pppuVar7 = pppuVar15;
      func_0x00010bf08ca0();
      pppuVar5 = pppuVar6;
      func_0x00010bf08ca0();
      if ((int)pppuVar7 == (int)pppuVar5) {
        pppuVar7 = pppuVar15;
        func_0x00010c25e5e0();
        pppuVar5 = pppuVar6;
        func_0x00010c25e5e0();
        if ((int)pppuVar5 < (int)pppuVar7) goto code_r0x0001084f66fc;
      }
      pppuVar7 = pppuVar15;
      func_0x00010c25e5c0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar6;
      func_0x00010c25e5c0(pppuVar6);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar7;
      func_0x00010c0720c0();
      if ((int)pppuVar9 != 0) {
        pppuVar9 = pppuVar15;
        func_0x00010c298be0();
        pppuVar8 = pppuVar6;
        func_0x00010c298be0();
        if (pppuVar9 == pppuVar8) {
          pppuVar9 = pppuVar15;
          func_0x00010c22a980();
          _objc_release(pppuVar5);
          _objc_release(pppuVar7);
          if (pppuVar9 == (undefined ***)0x0) {
            puVar16 = (undefined8 *)0x0;
            goto code_r0x0001084f6ab8;
          }
          goto code_r0x0001084f66fc;
        }
      }
      _objc_release(pppuVar5);
      _objc_release(pppuVar7);
    }
code_r0x0001084f66fc:
    puVar10 = PTR_PTR_1126d9ef8;
    func_0x000108503140(PTR_PTR_1126d9ef8,pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar15;
    func_0x00010bf08ca0();
    pppuVar9 = pppuVar6;
    func_0x00010bf08ca0();
    pppuVar7 = pppuVar15;
    if ((int)pppuVar5 <= (int)pppuVar9) {
      pppuVar7 = pppuVar6;
    }
    uVar1 = SUB84(pppuVar7,0);
    func_0x00010bf08ca0();
    if (puVar10 != (undefined *)0x0) {
      *(undefined4 *)(puVar10 + 0x18) = uVar1;
    }
    func_0x00010c29e4e0(pppuVar15);
    if (puVar10 != (undefined *)0x0) {
      *(undefined ***)(puVar10 + 0x38) = ppuVar19;
    }
    pppuVar7 = pppuVar15;
    func_0x00010c25e5c0(pppuVar15);
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar10);
    }
    _objc_release(pppuVar7);
    pppuVar7 = pppuVar15;
    func_0x00010c25e5e0();
    if (puVar10 != (undefined *)0x0) {
      *(int *)(puVar10 + 0x14) = (int)pppuVar7;
    }
    pppuVar7 = pppuVar15;
    func_0x00010c298be0();
    if (puVar10 != (undefined *)0x0) {
      *(undefined ****)(puVar10 + 0x28) = pppuVar7;
    }
  }
  puVar2 = (undefined1 *)puVar18;
  func_0x00010c269d40(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b31c0();
  _objc_release(puVar2);
  func_0x00010c25ed40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  pppuVar7 = pppuVar15;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_408 = pppuVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_4f0 = 0;
    ppuVar19 = (undefined **)0x0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_518 = 0;
    ppuStack_520 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_520,puVar3);
  }
  ppuVar11 = apuStack_540;
  func_0x0001084fde00(ppuVar11);
  func_0x000100aac340(&ppuStack_5b0,puVar4);
  func_0x000107c281a0(&ppuStack_478,0xc,ppuVar11,&ppuStack_5b0);
  pppuStack_628 = (undefined ***)0x0;
  pppuStack_620 = (undefined ***)0x0;
  uStack_618 = 0;
  ppuStack_4b0 = (undefined **)((ulong)ppuStack_4b0 & 0xffffffff00000000);
  pppuVar5 = &ppuStack_520;
  func_0x000107c310cc(pppuVar5,&ppuStack_478,&pppuStack_628,&ppuStack_4b0);
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = pppuVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar5);
  if (pppuStack_628 != (undefined ***)0x0) {
    pppuStack_620 = pppuStack_628;
    __ZdlPv();
  }
  plVar13 = plStack_410;
  ppuStack_478 = &PTR_SUB_110862700;
  plStack_410 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_418;
  plStack_418 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  pppuStack_628 = &ppuStack_430;
  func_0x000107c27dd4(&pppuStack_628);
  pppuStack_628 = &ppuStack_5b0;
  func_0x000107c27dd4(&pppuStack_628);
  func_0x000107c27da8(&uStack_4f8);
  _objc_release(uStack_508);
  _objc_release(uStack_510);
  _objc_release(puVar4);
  _objc_release(puVar3);
  pppuVar5 = pppuVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar9);
  _objc_release(puVar4);
  _objc_release(pppuVar7);
  pppuVar7 = (undefined ***)PTR_PTR_1126d9ef0;
  if (pppuVar5 == (undefined ***)0x0) {
    func_0x0001084fe5ac(PTR_PTR_1126d9ef0,pppuVar15);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001084fe930(PTR_PTR_1126d9ef0,pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar15;
    func_0x00010c25e5c0(pppuVar15);
    _objc_retainAutoreleasedReturnValue();
    if (pppuVar7 != (undefined ***)0x0) {
      _objc_setProperty_nonatomic_copy(pppuVar7);
    }
    _objc_release(pppuVar9);
    pppuVar9 = pppuVar15;
    func_0x00010c25e5e0();
    if (pppuVar7 != (undefined ***)0x0) {
      *(int *)((long)pppuVar7 + 0x14) = (int)pppuVar9;
    }
    pppuVar9 = pppuVar15;
    func_0x00010c298be0();
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar7[0xb] = (undefined **)pppuVar9;
    }
    pppuVar9 = pppuVar15;
    func_0x00010bf08ca0();
    if (pppuVar7 != (undefined ***)0x0) {
      *(int *)(pppuVar7 + 3) = (int)pppuVar9;
    }
    func_0x00010c29e4e0(pppuVar15);
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar7[7] = ppuVar19;
    }
    pppuVar9 = pppuVar15;
    func_0x00010c22a980();
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar7[0xd] = (undefined **)((long)pppuVar7[0xd] + (long)pppuVar9);
    }
  }
  func_0x00010c25ed40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pppuVar7);
  _objc_release(pppuVar5);
  _objc_release(puVar10);
  puVar16 = (undefined8 *)0x1;
code_r0x0001084f6ab8:
  _objc_release(pppuVar6);
  _objc_release(puVar18);
  _objc_release(pppuVar15);
  puVar12 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
    ___stack_chk_fail();
    _objc_release(pppuVar7);
    _objc_release(pppuVar6);
    _objc_release(puVar18);
    _objc_release(pppuVar15);
    _objc_release(puVar3);
    __Unwind_Resume();
    *puVar12 = &PTR_DAT_110a503e0;
    plVar13 = (long *)puVar12[0xd];
    puVar12[0xd] = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    plVar13 = (long *)puVar12[0xc];
    puVar12[0xc] = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    if (puVar12[9] != 0) {
      puVar12[10] = puVar12[9];
      __ZdlPv();
    }
    return puVar12;
  }
  return puVar16;
}



/* Entry: 106924d90; end: 106924e1f;  */

void FUN_106924d90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0ad640(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106924e20; end: 106924e73; -[SCStoriesSnapReadReceiptUploader .cxx_destruct] */

void FUN_106924e20(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106924e74; end: 106925093;  */

undefined * FUN_106924e74(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *puVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dc60f8;
    unaff_x20 = param_1;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110e4f338;
    unaff_x21 = param_1;
    puStack_90 = unaff_x20;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e651d8;
    unaff_x22 = param_1;
    puStack_88 = unaff_x21;
    func_0x00010c25e5c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110e651f8;
    puVar6 = param_1;
    puStack_80 = unaff_x22;
    func_0x00010c25e5e0(param_1);
    func_0x00010c0df760(unaff_x23,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110e65178;
    puVar6 = param_1;
    puStack_78 = unaff_x23;
    func_0x00010bf4dac0();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = (int)puVar6 - 1;
    if (uVar1 < 3) {
      ppuStack_70 = (undefined **)(&PTR_PTR_11094b090)[uVar1];
    }
    else {
      ppuStack_70 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e65218;
    puVar6 = param_1;
    func_0x00010bf08ca0(param_1);
    func_0x00010c0df760(puVar2,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e65238;
    puVar6 = param_1;
    puStack_68 = puVar2;
    func_0x00010c22a980(param_1);
    func_0x00010c0df7c0(puVar3,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_90;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,&ppuStack_c8,7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_d8 = FUN_106925094;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_110 = puVar6;
    puStack_108 = unaff_x23;
    puStack_100 = unaff_x22;
    puStack_f8 = unaff_x21;
    puStack_f0 = unaff_x20;
    puStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      ppuStack_168 = &PTR____CFConstantStringClassReference_110dba818;
      puVar3 = puVar2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_160 = &PTR____CFConstantStringClassReference_110e651b8;
      puVar6 = puVar2;
      puStack_140 = puVar3;
      func_0x00010bfb83a0();
      uVar1 = (int)puVar6 - 1;
      if (uVar1 < 3) {
        ppuStack_138 = (undefined **)(&PTR_PTR_11094b0a8)[uVar1];
      }
      else {
        ppuStack_138 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      ppuStack_158 = &PTR____CFConstantStringClassReference_110e65198;
      puVar6 = puVar2;
      func_0x00010c25b720();
      uVar1 = (int)puVar6 - 1;
      if (uVar1 < 9) {
        ppuStack_130 = (undefined **)(&PTR_PTR_11094b0c0)[uVar1];
      }
      else {
        ppuStack_130 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      ppuStack_150 = &PTR____CFConstantStringClassReference_110e65258;
      puVar4 = puVar2;
      func_0x00010c121800();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110e65238;
      puVar6 = puVar2;
      puStack_128 = puVar4;
      func_0x00010c22a980(puVar2);
      func_0x00010c0df7c0(puVar5,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      param_3 = &puStack_140;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_120 = puVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,&ppuStack_168,5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      puVar6 = PTR_PTR_1126cf218;
      _objc_retain(param_3);
      _objc_alloc_init(puVar6);
      func_0x00010c05f360(puVar2,param_2,param_3,puVar6);
      _objc_release(param_3);
      _objc_release(puVar6);
      return puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 106925094; end: 106925243;  */

undefined * FUN_106925094(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dba818;
    puVar2 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e651b8;
    puVar5 = param_1;
    puStack_70 = puVar2;
    func_0x00010bfb83a0();
    uVar1 = (int)puVar5 - 1;
    if (uVar1 < 3) {
      ppuStack_68 = (undefined **)(&PTR_PTR_11094b0a8)[uVar1];
    }
    else {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e65198;
    puVar5 = param_1;
    func_0x00010c25b720();
    uVar1 = (int)puVar5 - 1;
    if (uVar1 < 9) {
      ppuStack_60 = (undefined **)(&PTR_PTR_11094b0c0)[uVar1];
    }
    else {
      ppuStack_60 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e65258;
    puVar3 = param_1;
    func_0x00010c121800();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e65238;
    puVar5 = param_1;
    puStack_58 = puVar3;
    func_0x00010c22a980(param_1);
    func_0x00010c0df7c0(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_70;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,&ppuStack_98,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126cf218;
  _objc_retain(param_3);
  _objc_alloc_init(puVar5);
  func_0x00010c05f360(param_1,param_2,param_3,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
  return param_1;
}



/* Entry: 106925244; end: 1069252af; -[SCStoriesSnapReadReceiptLogger initWithUserTrackedLogger:] */

undefined8 FUN_106925244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf218;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c05f360(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1069252b0; end: 106925353; -[SCStoriesSnapReadReceiptLogger initWithUserTrackedLogger:metricsLogger:] */

undefined1 *
FUN_1069252b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3d90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106925354; end: 106925363; -[SCStoriesSnapReadReceiptLogger logErrorFetchExpiredSnapWithStoryType:] */

void FUN_106925354(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar13 = (undefined8 *)0x1;
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar18 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_11094b2e8;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b2e8,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar13 = puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar13 = puVar4;
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_106926860;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar4 = puVar13;
  puVar17 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar13);
  puVar16 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar3);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar4 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_e0,puVar4);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar7 = &UNK_11094b338;
    unaff_x23 = &uStack_118;
    puVar4 = &uStack_118;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b338,puVar4,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar1 = 0;
    puVar16 = auStack_f8;
    puVar17 = param_4;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar13);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar15 = &uStack_1a0;
  pcStack_128 = FUN_106926a90;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar14 = puVar4;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar16;
  puStack_148 = puVar3;
  puStack_140 = puVar13;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar7);
  plVar18 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = &UNK_11094b388;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b388,&uStack_1a0,puVar4);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar14 = puVar15;
    puVar17 = puVar4;
    puVar16 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar14 = puVar15;
      puVar17 = puVar4;
      puVar16 = &uStack_1a0;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106926c04;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar13 = puVar14;
  puVar15 = puVar17;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar16;
  plStack_1c8 = plVar18;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar6);
  _objc_retain(puVar14);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar13 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_200,puVar13);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar3 = &UNK_11094b3d8;
    unaff_x23 = &uStack_238;
    puVar13 = &uStack_238;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b3d8,puVar13,puVar17);
    puStack_220 = unaff_x23;
    func_0x00010007e5dc(&puStack_220);
    lVar1 = 0;
    puVar4 = auStack_218;
    puVar15 = puVar17;
    do {
      if ((&cStack_1e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_248 = FUN_106926e34;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar16 = puVar13;
  puVar17 = puVar15;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar4;
  puStack_268 = puVar2;
  puStack_260 = puVar14;
  puStack_258 = puVar6;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar3);
  _objc_retain(puVar13);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar4 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_2a0,puVar4);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar7 = &UNK_11094b428;
    unaff_x23 = &uStack_2d8;
    puVar16 = &uStack_2d8;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b428,puVar16,puVar15);
    puStack_2c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2c0);
    lVar1 = 0;
    puVar4 = auStack_2b8;
    puVar17 = puVar15;
    do {
      if ((&cStack_289)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar13);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar3);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_2e8 = FUN_106927064;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar4;
  puStack_308 = puVar2;
  puStack_300 = puVar13;
  puStack_2f8 = puVar3;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar7);
  _objc_retain(puVar16);
  if (puVar5 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_358,puVar2);
    _objc_retain(puVar16);
    if (puVar16 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar16);
      puVar13 = puVar16;
      func_0x00010bdc3520(puVar16);
    }
    _objc_release(puVar16);
    func_0x00010002b838(auStack_340,puVar13);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar6 = &UNK_11094b478;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b478,&uStack_378,puVar17);
    puStack_360 = &uStack_378;
    func_0x00010007e5dc(&puStack_360);
    lVar1 = 0;
    do {
      if ((&cStack_329)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar16);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar16);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(puVar16);
  _objc_release(puVar7);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar3 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar7 = puVar3;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar6 & 1) == 0) && (puVar6 = puVar7, func_0x00010bfdc3e0(), (int)puVar6 == 0))
  goto LAB_1069274c0;
  puVar6 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar5);
  func_0x00010c1863a0(puVar6);
  puVar10 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106925364; end: 106925397; -[SCStoriesSnapReadReceiptLogger logFetchedViewReportsResponse:emptyResponse:] */

void FUN_106925364(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined **ppuStack_508;
  undefined8 *puStack_500;
  undefined **ppuStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined **ppuStack_468;
  undefined8 *puStack_460;
  undefined **ppuStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined **ppuStack_348;
  undefined8 *puStack_340;
  undefined **ppuStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar4 = &PTR____CFConstantStringClassReference_110e65338;
  if ((int)param_4 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e65358;
  }
  if (param_3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad2d8;
  }
  lVar1 = *(long *)(param_1 + 8);
  puVar17 = (undefined8 *)0x1;
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar4;
  _objc_retain(ppuVar4);
  if (lVar1 != 0) {
    plVar22 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f3a2c29;
    }
    else {
      ppuVar2 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_11094b1a8;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b1a8,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar17 = puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar17 = puVar5;
    }
  }
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  puVar18 = &uStack_100;
  pcStack_88 = FUN_106926228;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar2;
  puVar5 = puVar17;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar3[1];
    ppuVar4 = (undefined **)&UNK_11094b1f8;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)ppuVar3[1];
      _objc_retain(ppuVar2);
      if (ppuVar2 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f3a2c29;
      }
      else {
        ppuVar4 = ppuVar2;
        _objc_retainAutorelease(ppuVar2);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar2);
      unaff_x23 = auStack_e0;
      func_0x00010002b838(auStack_e0,ppuVar4);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      param_4 = (undefined8 *)((long)puVar17 * 10);
      ppuVar4 = (undefined **)&UNK_11094b1f8;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b1f8,&uStack_100,param_4);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar5 = puVar18;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar5 = puVar18;
      }
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  __Unwind_Resume();
  puVar18 = &uStack_180;
  pcStack_108 = FUN_1069263c0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar4;
  puVar17 = puVar5;
  ppuStack_110 = &puStack_90;
  _objc_retain(ppuVar4);
  if (ppuVar3 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar3[1];
    ppuVar2 = (undefined **)&UNK_11094b248;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)ppuVar3[1];
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f3a2c29;
      }
      else {
        ppuVar2 = ppuVar4;
        _objc_retainAutorelease(ppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar4);
      unaff_x23 = auStack_160;
      func_0x00010002b838(auStack_160,ppuVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      param_4 = (undefined8 *)((long)puVar5 * 10);
      ppuVar2 = (undefined **)&UNK_11094b248;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b248,&uStack_180,param_4);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar17 = puVar18;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar17 = puVar18;
      }
    }
  }
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  puVar18 = &uStack_200;
  pcStack_188 = FUN_106926558;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar2;
  puVar5 = puVar17;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar3[1];
    ppuVar4 = (undefined **)&UNK_11094b298;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)ppuVar3[1];
      _objc_retain(ppuVar2);
      if (ppuVar2 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f3a2c29;
      }
      else {
        ppuVar4 = ppuVar2;
        _objc_retainAutorelease(ppuVar2);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar2);
      unaff_x23 = auStack_1e0;
      func_0x00010002b838(auStack_1e0,ppuVar4);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      ppuVar4 = (undefined **)&UNK_11094b298;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b298,&uStack_200,puVar17);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar5 = puVar18;
      param_4 = puVar17;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar5 = puVar18;
        param_4 = puVar17;
      }
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  __Unwind_Resume();
  puVar18 = &uStack_280;
  pcStack_208 = FUN_1069266ec;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar4;
  puVar17 = puVar5;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(ppuVar4);
  if (ppuVar3 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar3[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f3a2c29;
    }
    else {
      ppuVar2 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x23 = auStack_260;
    func_0x00010002b838(auStack_260,ppuVar2);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    ppuVar2 = (undefined **)&UNK_11094b2e8;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b2e8,&uStack_280,puVar5);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar17 = puVar18;
    param_4 = puVar5;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar17 = puVar18;
      param_4 = puVar5;
    }
  }
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  pcStack_288 = FUN_106926860;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar2;
  puVar5 = puVar17;
  puVar21 = param_4;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(ppuVar2);
  _objc_retain(puVar17);
  puVar18 = (undefined8 *)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f3a2c29;
    }
    else {
      ppuVar4 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,ppuVar4);
    _objc_retain(puVar17);
    if (puVar17 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar17);
      puVar5 = puVar17;
      func_0x00010bdc3520(puVar17);
    }
    _objc_release(puVar17);
    func_0x00010002b838(auStack_2e0,puVar5);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    ppuVar4 = (undefined **)&UNK_11094b338;
    unaff_x23 = &uStack_318;
    puVar5 = &uStack_318;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b338,puVar5,param_4);
    puStack_300 = unaff_x23;
    func_0x00010007e5dc(&puStack_300);
    lVar1 = 0;
    puVar18 = auStack_2f8;
    puVar21 = param_4;
    do {
      if ((&cStack_2c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar17);
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar17);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar17);
  _objc_release(ppuVar2);
  ppuVar6 = ppuVar3;
  __Unwind_Resume();
  puVar20 = &uStack_3a0;
  pcStack_328 = FUN_106926a90;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar4;
  puVar19 = puVar5;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar18;
  ppuStack_348 = ppuVar3;
  puStack_340 = puVar17;
  ppuStack_338 = ppuVar2;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(ppuVar4);
  plVar22 = (long *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar6[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f3a2c29;
    }
    else {
      ppuVar2 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x23 = auStack_380;
    func_0x00010002b838(auStack_380,ppuVar2);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_368,1);
    ppuVar7 = (undefined **)&UNK_11094b388;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b388,&uStack_3a0,puVar5);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    puVar19 = puVar20;
    puVar21 = puVar5;
    puVar18 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar19 = puVar20;
      puVar21 = puVar5;
      puVar18 = &uStack_3a0;
    }
  }
  ppuVar2 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  ppuVar6 = ppuVar2;
  __Unwind_Resume();
  pcStack_3a8 = FUN_106926c04;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar7;
  puVar17 = puVar19;
  puVar20 = puVar21;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar18;
  plStack_3c8 = plVar22;
  ppuStack_3c0 = ppuVar2;
  ppuStack_3b8 = ppuVar4;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(ppuVar7);
  _objc_retain(puVar19);
  puVar5 = (undefined8 *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar6[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f3a2c29;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x24 = auStack_418;
    func_0x00010002b838(auStack_418,ppuVar4);
    _objc_retain(puVar19);
    if (puVar19 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar19);
      puVar17 = puVar19;
      func_0x00010bdc3520(puVar19);
    }
    _objc_release(puVar19);
    func_0x00010002b838(auStack_400,puVar17);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    ppuVar3 = (undefined **)&UNK_11094b3d8;
    unaff_x23 = &uStack_438;
    puVar17 = &uStack_438;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b3d8,puVar17,puVar21);
    puStack_420 = unaff_x23;
    func_0x00010007e5dc(&puStack_420);
    lVar1 = 0;
    puVar5 = auStack_418;
    puVar20 = puVar21;
    do {
      if ((&cStack_3e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar19);
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar19);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar19);
  _objc_release(ppuVar7);
  ppuVar6 = ppuVar4;
  __Unwind_Resume();
  pcStack_448 = FUN_106926e34;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  puVar18 = puVar17;
  puVar21 = puVar20;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar5;
  ppuStack_468 = ppuVar4;
  puStack_460 = puVar19;
  ppuStack_458 = ppuVar7;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(ppuVar3);
  _objc_retain(puVar17);
  puVar5 = (undefined8 *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar6[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f3a2c29;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x24 = auStack_4b8;
    func_0x00010002b838(auStack_4b8,ppuVar4);
    _objc_retain(puVar17);
    if (puVar17 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar17);
      puVar5 = puVar17;
      func_0x00010bdc3520(puVar17);
    }
    _objc_release(puVar17);
    func_0x00010002b838(auStack_4a0,puVar5);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    func_0x00010007e1e8(&uStack_4d8,auStack_4b8,&lStack_488,2);
    ppuVar2 = (undefined **)&UNK_11094b428;
    unaff_x23 = &uStack_4d8;
    puVar18 = &uStack_4d8;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b428,puVar18,puVar20);
    puStack_4c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4c0);
    lVar1 = 0;
    puVar5 = auStack_4b8;
    puVar21 = puVar20;
    do {
      if ((&cStack_489)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar17);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar17);
  if (cStack_4a1 < '\0') {
    __ZdlPv(auStack_4b8[0]);
  }
  _objc_release(puVar17);
  _objc_release(ppuVar3);
  ppuVar6 = ppuVar4;
  __Unwind_Resume();
  pcStack_4e8 = FUN_106927064;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar2;
  puStack_520 = unaff_x24;
  puStack_518 = unaff_x23;
  puStack_510 = puVar5;
  ppuStack_508 = ppuVar4;
  puStack_500 = puVar17;
  ppuStack_4f8 = ppuVar3;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(ppuVar2);
  _objc_retain(puVar18);
  if (ppuVar6 != (undefined **)0x0) {
    plVar22 = (long *)ppuVar6[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f3a2c29;
    }
    else {
      ppuVar4 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_558,ppuVar4);
    _objc_retain(puVar18);
    if (puVar18 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar18);
      puVar17 = puVar18;
      func_0x00010bdc3520(puVar18);
    }
    _objc_release(puVar18);
    func_0x00010002b838(auStack_540,puVar17);
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    func_0x00010007e1e8(&uStack_578,auStack_558,&lStack_528,2);
    ppuVar7 = (undefined **)&UNK_11094b478;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b478,&uStack_578,puVar21);
    puStack_560 = &uStack_578;
    func_0x00010007e5dc(&puStack_560);
    lVar1 = 0;
    do {
      if ((&cStack_529)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar18);
  ppuVar4 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar18);
  if (cStack_541 < '\0') {
    __ZdlPv(auStack_558[0]);
  }
  _objc_release(puVar18);
  _objc_release(ppuVar2);
  __Unwind_Resume(ppuVar4);
  _objc_retain();
  puVar8 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  puVar9 = puVar8;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bfdace0();
  if ((((ulong)puVar10 & 1) == 0) && (puVar10 = puVar9, func_0x00010bfdc3e0(), (int)puVar10 == 0))
  goto LAB_1069274c0;
  puVar10 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar11 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar12 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar13 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar14 = puVar9;
  func_0x00010bfdace0();
  if ((int)puVar14 == 0) {
    puVar14 = puVar9;
    func_0x00010bfdc3e0();
    if ((int)puVar14 != 0) {
      puVar14 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar15 = puVar9;
      func_0x00010c241ea0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar14);
      _objc_release(puVar16);
      _objc_release(puVar15);
      func_0x00010c204de0(puVar13);
      goto LAB_106927438;
    }
  }
  else {
    puVar14 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar15 = puVar9;
    func_0x00010c11dc40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar14);
    _objc_release(puVar16);
    _objc_release(puVar15);
    func_0x00010c1e6620(puVar13);
LAB_106927438:
    _objc_release(puVar14);
  }
  func_0x00010c1ac580(puVar12);
  func_0x00010c1c73c0(puVar11);
  func_0x00010c1863a0(puVar10);
  ppuVar2 = ppuVar4;
  func_0x00010c0fee00(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
LAB_1069274c0:
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106925398; end: 1069253a7; -[SCStoriesSnapReadReceiptLogger logViewStatesNotReadyWhenProvidingMetadataType:] */

void FUN_106925398(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 auStack_5d8 [2];
  char cStack_5c1;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined *puStack_588;
  undefined8 *puStack_580;
  undefined *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar13 = (undefined8 *)0x1;
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar18 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_11094b158;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b158,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar13 = puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar13 = puVar5;
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar14 = &uStack_100;
  pcStack_88 = FUN_1069260b4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar5 = puVar13;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_11094b1a8;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b1a8,&uStack_100,puVar13);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = puVar14;
    param_4 = puVar13;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = puVar14;
      param_4 = puVar13;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar14 = &uStack_180;
  pcStack_108 = FUN_106926228;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar13 = puVar5;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_11094b1f8;
    (**(code **)(*plVar18 + 0x28))();
    if ((int)plVar18 != 0) {
      plVar18 = *(long **)(puVar3 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x23 = auStack_160;
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      param_4 = (undefined8 *)((long)puVar5 * 10);
      puVar2 = &UNK_11094b1f8;
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b1f8,&uStack_180,param_4);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar13 = puVar14;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar13 = puVar14;
      }
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar14 = &uStack_200;
  pcStack_188 = FUN_1069263c0;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar5 = puVar13;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar3 + 8);
    puVar7 = &UNK_11094b248;
    (**(code **)(*plVar18 + 0x28))();
    if ((int)plVar18 != 0) {
      plVar18 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f3a2c29;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x23 = auStack_1e0;
      func_0x00010002b838(auStack_1e0,puVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      param_4 = (undefined8 *)((long)puVar13 * 10);
      puVar7 = &UNK_11094b248;
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b248,&uStack_200,param_4);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar5 = puVar14;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar5 = puVar14;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar14 = &uStack_280;
  pcStack_208 = FUN_106926558;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar13 = puVar5;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_11094b298;
    (**(code **)(*plVar18 + 0x28))();
    if ((int)plVar18 != 0) {
      plVar18 = *(long **)(puVar3 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x23 = auStack_260;
      func_0x00010002b838(auStack_260,puVar2);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar2 = &UNK_11094b298;
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b298,&uStack_280,puVar5);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar13 = puVar14;
      param_4 = puVar5;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar13 = puVar14;
        param_4 = puVar5;
      }
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar14 = &uStack_300;
  pcStack_288 = FUN_1069266ec;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar5 = puVar13;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_2e0;
    func_0x00010002b838(auStack_2e0,puVar3);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_11094b2e8;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b2e8,&uStack_300,puVar13);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar5 = puVar14;
    param_4 = puVar13;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar5 = puVar14;
      param_4 = puVar13;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_308 = FUN_106926860;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar13 = puVar5;
  puVar17 = param_4;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  puVar14 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_378;
    func_0x00010002b838(auStack_378,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar13 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_360,puVar13);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
    puVar2 = &UNK_11094b338;
    unaff_x23 = &uStack_398;
    puVar13 = &uStack_398;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b338,puVar13,param_4);
    puStack_380 = unaff_x23;
    func_0x00010007e5dc(&puStack_380);
    lVar1 = 0;
    puVar14 = auStack_378;
    puVar17 = param_4;
    do {
      if ((&cStack_349)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar5);
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar16 = &uStack_420;
  pcStack_3a8 = FUN_106926a90;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar15 = puVar13;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar14;
  puStack_3c8 = puVar3;
  puStack_3c0 = puVar5;
  puStack_3b8 = puVar7;
  pppuStack_3b0 = &pppuStack_310;
  _objc_retain(puVar2);
  plVar18 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_400;
    func_0x00010002b838(auStack_400,puVar3);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x00010007e1e8(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar6 = &UNK_11094b388;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b388,&uStack_420,puVar13);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x00010007e5dc(&puStack_408);
    puVar15 = puVar16;
    puVar17 = puVar13;
    puVar14 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar15 = puVar16;
      puVar17 = puVar13;
      puVar14 = &uStack_420;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_428 = FUN_106926c04;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar13 = puVar15;
  puVar16 = puVar17;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar14;
  plStack_448 = plVar18;
  puStack_440 = puVar3;
  puStack_438 = puVar2;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar6);
  _objc_retain(puVar15);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_498;
    func_0x00010002b838(auStack_498,puVar2);
    _objc_retain(puVar15);
    if (puVar15 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar13 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_480,puVar13);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    func_0x00010007e1e8(&uStack_4b8,auStack_498,&lStack_468,2);
    puVar7 = &UNK_11094b3d8;
    unaff_x23 = &uStack_4b8;
    puVar13 = &uStack_4b8;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b3d8,puVar13,puVar17);
    puStack_4a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4a0);
    lVar1 = 0;
    puVar5 = auStack_498;
    puVar16 = puVar17;
    do {
      if ((&cStack_469)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar15);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  if (cStack_481 < '\0') {
    __ZdlPv(auStack_498[0]);
  }
  _objc_release(puVar15);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_4c8 = FUN_106926e34;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar14 = puVar13;
  puVar17 = puVar16;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar5;
  puStack_4e8 = puVar2;
  puStack_4e0 = puVar15;
  puStack_4d8 = puVar6;
  pppuStack_4d0 = &pppuStack_430;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_538;
    func_0x00010002b838(auStack_538,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar5 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_520,puVar5);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x00010007e1e8(&uStack_558,auStack_538,&lStack_508,2);
    puVar3 = &UNK_11094b428;
    unaff_x23 = &uStack_558;
    puVar14 = &uStack_558;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b428,puVar14,puVar16);
    puStack_540 = unaff_x23;
    func_0x00010007e5dc(&puStack_540);
    lVar1 = 0;
    puVar5 = auStack_538;
    puVar17 = puVar16;
    do {
      if ((&cStack_509)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar13);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_521 < '\0') {
    __ZdlPv(auStack_538[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_568 = FUN_106927064;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = puVar5;
  puStack_588 = puVar2;
  puStack_580 = puVar13;
  puStack_578 = puVar7;
  pppuStack_570 = &pppuStack_4d0;
  _objc_retain(puVar3);
  _objc_retain(puVar14);
  if (puVar4 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_5d8,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar13 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_5c0,puVar13);
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    func_0x00010007e1e8(&uStack_5f8,auStack_5d8,&lStack_5a8,2);
    puVar6 = &UNK_11094b478;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b478,&uStack_5f8,puVar17);
    puStack_5e0 = &uStack_5f8;
    func_0x00010007e5dc(&puStack_5e0);
    lVar1 = 0;
    do {
      if ((&cStack_5a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_5c1 < '\0') {
    __ZdlPv(auStack_5d8[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar3);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar3 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar7 = puVar3;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar6 & 1) == 0) && (puVar6 = puVar7, func_0x00010bfdc3e0(), (int)puVar6 == 0))
  goto LAB_1069274c0;
  puVar6 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar4 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar4);
  func_0x00010c1863a0(puVar6);
  puVar10 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar6);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069253a8; end: 1069253b7; -[SCStoriesSnapReadReceiptLogger logViewStatesUpdatedWithType:reason:] */

void FUN_1069253a8(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 *puStack_680;
  undefined8 auStack_678 [2];
  char cStack_661;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  undefined8 *puStack_620;
  long *plStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 auStack_5d8 [2];
  char cStack_5c1;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  undefined8 *puStack_580;
  long *plStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined8 *puStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar18 = (undefined8 *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = param_4;
  puVar2 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar22 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (long *)0x0) {
      plVar19 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar19 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,plVar19);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    plVar19 = (long *)&UNK_11094b108;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    puVar18 = (undefined8 *)0x1;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b108,puVar2,1);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    puVar4 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_3);
  plVar22 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  plVar3 = plVar22;
  __Unwind_Resume();
  puVar16 = &uStack_120;
  pcStack_a8 = FUN_106925f40;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = plVar19;
  puVar15 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  plStack_c8 = plVar22;
  puStack_c0 = param_3;
  plStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar19);
  plVar22 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar22 = (long *)plVar3[1];
    _objc_retain(plVar19);
    if (plVar19 == (long *)0x0) {
      plVar21 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar21 = plVar19;
      _objc_retainAutorelease(plVar19);
      func_0x00010bdc3520();
    }
    _objc_release(plVar19);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,plVar21);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    plVar21 = (long *)&UNK_11094b158;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b158,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar15 = puVar16;
    puVar18 = puVar2;
    puVar4 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar15 = puVar16;
      puVar18 = puVar2;
      puVar4 = &uStack_120;
    }
  }
  plVar3 = plVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar19);
  _objc_release(plVar19);
  plVar20 = plVar3;
  __Unwind_Resume();
  puVar16 = &uStack_1a0;
  pcStack_128 = FUN_1069260b4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar21;
  puVar2 = puVar15;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar4;
  plStack_148 = plVar22;
  plStack_140 = plVar3;
  plStack_138 = plVar19;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar21);
  plVar19 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    _objc_retain(plVar21);
    if (plVar21 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar21;
      _objc_retainAutorelease(plVar21);
      func_0x00010bdc3520();
    }
    _objc_release(plVar21);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,plVar22);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    plVar5 = (long *)&UNK_11094b1a8;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b1a8,&uStack_1a0,puVar15);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar2 = puVar16;
    puVar18 = puVar15;
    puVar4 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar16;
      puVar18 = puVar15;
      puVar4 = &uStack_1a0;
    }
  }
  plVar22 = plVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar21);
  _objc_release(plVar21);
  plVar20 = plVar22;
  __Unwind_Resume();
  puVar16 = &uStack_220;
  pcStack_1a8 = FUN_106926228;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar5;
  puVar15 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar4;
  plStack_1c8 = plVar19;
  plStack_1c0 = plVar22;
  plStack_1b8 = plVar21;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar5);
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    plVar3 = (long *)&UNK_11094b1f8;
    (**(code **)(*plVar19 + 0x28))();
    if ((int)plVar19 != 0) {
      plVar20 = (long *)plVar20[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        plVar19 = (long *)&UNK_10f3a2c29;
      }
      else {
        plVar19 = plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      unaff_x23 = auStack_200;
      func_0x00010002b838(auStack_200,plVar19);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
      puVar18 = (undefined8 *)((long)puVar2 * 10);
      plVar3 = (long *)&UNK_11094b1f8;
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11094b1f8,&uStack_220,puVar18);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      puVar15 = puVar16;
      puVar4 = &uStack_220;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        puVar15 = puVar16;
        puVar4 = &uStack_220;
      }
    }
  }
  plVar19 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar21 = plVar19;
  __Unwind_Resume();
  puVar16 = &uStack_2a0;
  pcStack_228 = FUN_1069263c0;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = plVar3;
  puVar2 = puVar15;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar4;
  plStack_248 = plVar20;
  plStack_240 = plVar19;
  plStack_238 = plVar5;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar3);
  if (plVar21 != (long *)0x0) {
    plVar19 = (long *)plVar21[1];
    plVar22 = (long *)&UNK_11094b248;
    (**(code **)(*plVar19 + 0x28))();
    if ((int)plVar19 != 0) {
      plVar21 = (long *)plVar21[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar19 = (long *)&UNK_10f3a2c29;
      }
      else {
        plVar19 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_280;
      func_0x00010002b838(auStack_280,plVar19);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
      puVar18 = (undefined8 *)((long)puVar15 * 10);
      plVar22 = (long *)&UNK_11094b248;
      (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11094b248,&uStack_2a0,puVar18);
      puStack_288 = (undefined1 *)&uStack_2a0;
      func_0x00010007e5dc(&puStack_288);
      puVar2 = puVar16;
      puVar4 = &uStack_2a0;
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
        puVar2 = puVar16;
        puVar4 = &uStack_2a0;
      }
    }
  }
  plVar19 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar20 = plVar19;
  __Unwind_Resume();
  puVar16 = &uStack_320;
  pcStack_2a8 = FUN_106926558;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar22;
  puVar15 = puVar2;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar4;
  plStack_2c8 = plVar21;
  plStack_2c0 = plVar19;
  plStack_2b8 = plVar3;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar22);
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    plVar5 = (long *)&UNK_11094b298;
    (**(code **)(*plVar19 + 0x28))();
    if ((int)plVar19 != 0) {
      plVar20 = (long *)plVar20[1];
      _objc_retain(plVar22);
      if (plVar22 == (long *)0x0) {
        plVar19 = (long *)&UNK_10f3a2c29;
      }
      else {
        plVar19 = plVar22;
        _objc_retainAutorelease(plVar22);
        func_0x00010bdc3520();
      }
      _objc_release(plVar22);
      unaff_x23 = auStack_300;
      func_0x00010002b838(auStack_300,plVar19);
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
      plVar5 = (long *)&UNK_11094b298;
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11094b298,&uStack_320,puVar2);
      puStack_308 = (undefined1 *)&uStack_320;
      func_0x00010007e5dc(&puStack_308);
      puVar15 = puVar16;
      puVar18 = puVar2;
      puVar4 = &uStack_320;
      if (cStack_2e9 < '\0') {
        __ZdlPv(auStack_300[0]);
        puVar15 = puVar16;
        puVar18 = puVar2;
        puVar4 = &uStack_320;
      }
    }
  }
  plVar19 = plVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar22);
  _objc_release(plVar22);
  plVar3 = plVar19;
  __Unwind_Resume();
  puVar16 = &uStack_3a0;
  pcStack_328 = FUN_1069266ec;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = plVar5;
  puVar2 = puVar15;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar4;
  plStack_348 = plVar20;
  plStack_340 = plVar19;
  plStack_338 = plVar22;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar5);
  plVar19 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar19 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = auStack_380;
    func_0x00010002b838(auStack_380,plVar22);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_368,1);
    plVar21 = (long *)&UNK_11094b2e8;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b2e8,&uStack_3a0,puVar15);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    puVar2 = puVar16;
    puVar18 = puVar15;
    puVar4 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar2 = puVar16;
      puVar18 = puVar15;
      puVar4 = &uStack_3a0;
    }
  }
  plVar22 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar20 = plVar22;
  __Unwind_Resume();
  pcStack_3a8 = FUN_106926860;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar21;
  puVar15 = puVar2;
  puVar16 = puVar18;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar4;
  plStack_3c8 = plVar19;
  plStack_3c0 = plVar22;
  plStack_3b8 = plVar5;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(plVar21);
  _objc_retain(puVar2);
  puVar4 = (undefined8 *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    _objc_retain(plVar21);
    if (plVar21 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar21;
      _objc_retainAutorelease(plVar21);
      func_0x00010bdc3520();
    }
    _objc_release(plVar21);
    unaff_x24 = auStack_418;
    func_0x00010002b838(auStack_418,plVar22);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_400,puVar4);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    plVar3 = (long *)&UNK_11094b338;
    unaff_x23 = &uStack_438;
    puVar15 = &uStack_438;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b338,puVar15,puVar18);
    puStack_420 = unaff_x23;
    func_0x00010007e5dc(&puStack_420);
    lVar1 = 0;
    puVar4 = auStack_418;
    puVar16 = puVar18;
    do {
      if ((&cStack_3e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar2);
  plVar19 = plVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar2);
  _objc_release(plVar21);
  plVar5 = plVar19;
  __Unwind_Resume();
  puVar17 = &uStack_4c0;
  pcStack_448 = FUN_106926a90;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = plVar3;
  puVar18 = puVar15;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar4;
  plStack_468 = plVar19;
  puStack_460 = puVar2;
  plStack_458 = plVar21;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(plVar3);
  plVar19 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar19 = (long *)plVar5[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,plVar22);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_488,1);
    plVar22 = (long *)&UNK_11094b388;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b388,&uStack_4c0,puVar15);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar18 = puVar17;
    puVar16 = puVar15;
    puVar4 = &uStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar18 = puVar17;
      puVar16 = puVar15;
      puVar4 = &uStack_4c0;
    }
  }
  plVar21 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar20 = plVar21;
  __Unwind_Resume();
  pcStack_4c8 = FUN_106926c04;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar22;
  puVar2 = puVar18;
  puVar15 = puVar16;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar4;
  plStack_4e8 = plVar19;
  plStack_4e0 = plVar21;
  plStack_4d8 = plVar3;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(plVar22);
  _objc_retain(puVar18);
  puVar4 = (undefined8 *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    _objc_retain(plVar22);
    if (plVar22 == (long *)0x0) {
      plVar21 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar21 = plVar22;
      _objc_retainAutorelease(plVar22);
      func_0x00010bdc3520();
    }
    _objc_release(plVar22);
    unaff_x24 = auStack_538;
    func_0x00010002b838(auStack_538,plVar21);
    _objc_retain(puVar18);
    if (puVar18 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar18);
      puVar2 = puVar18;
      func_0x00010bdc3520(puVar18);
    }
    _objc_release(puVar18);
    func_0x00010002b838(auStack_520,puVar2);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x00010007e1e8(&uStack_558,auStack_538,&lStack_508,2);
    plVar5 = (long *)&UNK_11094b3d8;
    unaff_x23 = &uStack_558;
    puVar2 = &uStack_558;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b3d8,puVar2,puVar16);
    puStack_540 = unaff_x23;
    func_0x00010007e5dc(&puStack_540);
    lVar1 = 0;
    puVar4 = auStack_538;
    puVar15 = puVar16;
    do {
      if ((&cStack_509)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar18);
  plVar19 = plVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar18);
  if (cStack_521 < '\0') {
    __ZdlPv(auStack_538[0]);
  }
  _objc_release(puVar18);
  _objc_release(plVar22);
  plVar3 = plVar19;
  __Unwind_Resume();
  pcStack_568 = FUN_106926e34;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = plVar5;
  puVar16 = puVar2;
  puVar17 = puVar15;
  puStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = puVar4;
  plStack_588 = plVar19;
  puStack_580 = puVar18;
  plStack_578 = plVar22;
  pppuStack_570 = &pppuStack_4d0;
  _objc_retain(plVar5);
  _objc_retain(puVar2);
  puVar4 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar19 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x24 = auStack_5d8;
    func_0x00010002b838(auStack_5d8,plVar22);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_5c0,puVar4);
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    func_0x00010007e1e8(&uStack_5f8,auStack_5d8,&lStack_5a8,2);
    plVar21 = (long *)&UNK_11094b428;
    unaff_x23 = &uStack_5f8;
    puVar16 = &uStack_5f8;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b428,puVar16,puVar15);
    puStack_5e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_5e0);
    lVar1 = 0;
    puVar4 = auStack_5d8;
    puVar17 = puVar15;
    do {
      if ((&cStack_5a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar2);
  plVar19 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_5c1 < '\0') {
    __ZdlPv(auStack_5d8[0]);
  }
  _objc_release(puVar2);
  _objc_release(plVar5);
  plVar3 = plVar19;
  __Unwind_Resume();
  pcStack_608 = FUN_106927064;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = plVar21;
  puStack_640 = unaff_x24;
  puStack_638 = unaff_x23;
  puStack_630 = puVar4;
  plStack_628 = plVar19;
  puStack_620 = puVar2;
  plStack_618 = plVar5;
  pppuStack_610 = &pppuStack_570;
  _objc_retain(plVar21);
  _objc_retain(puVar16);
  if (plVar3 != (long *)0x0) {
    plVar19 = (long *)plVar3[1];
    _objc_retain(plVar21);
    if (plVar21 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar21;
      _objc_retainAutorelease(plVar21);
      func_0x00010bdc3520();
    }
    _objc_release(plVar21);
    func_0x00010002b838(auStack_678,plVar22);
    _objc_retain(puVar16);
    if (puVar16 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar16);
      puVar2 = puVar16;
      func_0x00010bdc3520(puVar16);
    }
    _objc_release(puVar16);
    func_0x00010002b838(auStack_660,puVar2);
    uStack_698 = 0;
    uStack_690 = 0;
    uStack_688 = 0;
    func_0x00010007e1e8(&uStack_698,auStack_678,&lStack_648,2);
    plVar22 = (long *)&UNK_11094b478;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b478,&uStack_698,puVar17);
    puStack_680 = &uStack_698;
    func_0x00010007e5dc(&puStack_680);
    lVar1 = 0;
    do {
      if ((&cStack_649)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_660 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar16);
  plVar19 = plVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar16);
  if (cStack_661 < '\0') {
    __ZdlPv(auStack_678[0]);
  }
  _objc_release(puVar16);
  _objc_release(plVar21);
  __Unwind_Resume(plVar19);
  _objc_retain();
  puVar6 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(plVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(plVar22);
  puVar7 = puVar6;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar8 & 1) == 0) && (puVar8 = puVar7, func_0x00010bfdc3e0(), (int)puVar8 == 0))
  goto LAB_1069274c0;
  puVar8 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar9 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar10 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar11 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar12 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar12 == 0) {
    puVar12 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar12 != 0) {
      puVar12 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar13 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar12);
      _objc_release(puVar14);
      _objc_release(puVar13);
      func_0x00010c204de0(puVar11);
      goto LAB_106927438;
    }
  }
  else {
    puVar12 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar13 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar12);
    _objc_release(puVar14);
    _objc_release(puVar13);
    func_0x00010c1e6620(puVar11);
LAB_106927438:
    _objc_release(puVar12);
  }
  func_0x00010c1ac580(puVar10);
  func_0x00010c1c73c0(puVar9);
  func_0x00010c1863a0(puVar8);
  plVar22 = plVar19;
  func_0x00010c0fee00(plVar19);
  _objc_retainAutoreleasedReturnValue();
  plVar21 = plVar22;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(plVar21);
  _objc_release(plVar22);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar19);
  return;
}



/* Entry: 1069253b8; end: 1069253cb; -[SCStoriesSnapReadReceiptLogger logReadReceiptSavedWithExpirationSource:storyType:] */

void FUN_1069253b8(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar16 = (undefined8 *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar18 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_11094b338;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    puVar16 = (undefined8 *)0x1;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b338,puVar3,1);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    puVar7 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar15 = &uStack_120;
  pcStack_a8 = FUN_106926a90;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar14 = puVar3;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar7;
  puStack_c8 = puVar4;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar18 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f3a2c29;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar8 = &UNK_11094b388;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b388,&uStack_120,puVar3);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar14 = puVar15;
    puVar16 = puVar3;
    puVar7 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar14 = puVar15;
      puVar16 = puVar3;
      puVar7 = &uStack_120;
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar4;
  __Unwind_Resume();
  pcStack_128 = FUN_106926c04;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar3 = puVar14;
  puVar15 = puVar16;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar7;
  plStack_148 = plVar18;
  puStack_140 = puVar4;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar8);
  _objc_retain(puVar14);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar6 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar3 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_180,puVar3);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar5 = &UNK_11094b3d8;
    unaff_x23 = &uStack_1b8;
    puVar3 = &uStack_1b8;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b3d8,puVar3,puVar16);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar1 = 0;
    puVar7 = auStack_198;
    puVar15 = puVar16;
    do {
      if ((&cStack_169)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar8);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106926e34;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar16 = puVar3;
  puVar17 = puVar15;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar7;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar14;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar5);
  _objc_retain(puVar3);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar7 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_220,puVar7);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar4 = &UNK_11094b428;
    unaff_x23 = &uStack_258;
    puVar16 = &uStack_258;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b428,puVar16,puVar15);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar1 = 0;
    puVar7 = auStack_238;
    puVar17 = puVar15;
    do {
      if ((&cStack_209)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_268 = FUN_106927064;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar4;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar7;
  puStack_288 = puVar2;
  puStack_280 = puVar3;
  puStack_278 = puVar5;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar4);
  _objc_retain(puVar16);
  if (puVar6 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_2d8,puVar2);
    _objc_retain(puVar16);
    if (puVar16 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar16);
      puVar3 = puVar16;
      func_0x00010bdc3520(puVar16);
    }
    _objc_release(puVar16);
    func_0x00010002b838(auStack_2c0,puVar3);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar8 = &UNK_11094b478;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b478,&uStack_2f8,puVar17);
    puStack_2e0 = &uStack_2f8;
    func_0x00010007e5dc(&puStack_2e0);
    lVar1 = 0;
    do {
      if ((&cStack_2a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar16);
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar16);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar16);
  _objc_release(puVar4);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar4 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar4;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bfdace0();
  if ((((ulong)puVar5 & 1) == 0) && (puVar5 = puVar8, func_0x00010bfdc3e0(), (int)puVar5 == 0))
  goto LAB_1069274c0;
  puVar5 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar9 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar10 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar11 = puVar8;
  func_0x00010bfdace0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar8;
    func_0x00010bfdc3e0();
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar12 = puVar8;
      func_0x00010c241ea0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c204de0(puVar10);
      goto LAB_106927438;
    }
  }
  else {
    puVar11 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar12 = puVar8;
    func_0x00010c11dc40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c1e6620(puVar10);
LAB_106927438:
    _objc_release(puVar11);
  }
  func_0x00010c1ac580(puVar9);
  func_0x00010c1c73c0(puVar6);
  func_0x00010c1863a0(puVar5);
  puVar11 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_1069274c0:
  _objc_release(puVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069253cc; end: 1069253db; -[SCStoriesSnapReadReceiptLogger logReadReceiptsPrunedWithStateType:count:] */

void FUN_1069253cc(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar6 = param_4;
  puVar14 = param_4;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar17 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_11094b388;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b388,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = puVar4;
    puVar14 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = puVar4;
      puVar14 = param_4;
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_106926c04;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar4 = puVar6;
  puVar15 = puVar14;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  puVar18 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar3);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_e0,puVar4);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar7 = &UNK_11094b3d8;
    unaff_x23 = &uStack_118;
    puVar4 = &uStack_118;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b3d8,puVar4,puVar14);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar1 = 0;
    puVar18 = auStack_f8;
    puVar15 = puVar14;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar6);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106926e34;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar14 = puVar4;
  puVar16 = puVar15;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar18;
  puStack_148 = puVar3;
  puStack_140 = puVar6;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar4);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar6 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_180,puVar6);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar8 = &UNK_11094b428;
    unaff_x23 = &uStack_1b8;
    puVar14 = &uStack_1b8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b428,puVar14,puVar15);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar1 = 0;
    puVar6 = auStack_198;
    puVar16 = puVar15;
    do {
      if ((&cStack_169)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106927064;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar6;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar4;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar8);
  _objc_retain(puVar14);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_238,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar6 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_220,puVar6);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar3 = &UNK_11094b478;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b478,&uStack_258,puVar16);
    puStack_240 = &uStack_258;
    func_0x00010007e5dc(&puStack_240);
    lVar1 = 0;
    do {
      if ((&cStack_209)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar8);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar7 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar7;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bfdace0();
  if ((((ulong)puVar8 & 1) == 0) && (puVar8 = puVar3, func_0x00010bfdc3e0(), (int)puVar8 == 0))
  goto LAB_1069274c0;
  puVar8 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar9 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar10 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar11 = puVar3;
  func_0x00010bfdace0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar3;
    func_0x00010bfdc3e0();
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar12 = puVar3;
      func_0x00010c241ea0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c204de0(puVar10);
      goto LAB_106927438;
    }
  }
  else {
    puVar11 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar12 = puVar3;
    func_0x00010c11dc40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c1e6620(puVar10);
LAB_106927438:
    _objc_release(puVar11);
  }
  func_0x00010c1ac580(puVar9);
  func_0x00010c1c73c0(puVar5);
  func_0x00010c1863a0(puVar8);
  puVar11 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar8);
LAB_1069274c0:
  _objc_release(puVar3);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069253dc; end: 1069253eb; -[SCStoriesSnapReadReceiptLogger logReadReceiptEnqueueToEndpoint:decision:] */

void FUN_1069253dc(long param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar15 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  puVar3 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar6 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar17 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_11094b3d8;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    uVar15 = 1;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b3d8,puVar3,1);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    puVar6 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_3);
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_106926e34;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar14 = puVar3;
  uVar16 = uVar15;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar6;
  puStack_c8 = puVar4;
  puStack_c0 = param_3;
  puStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f3a2c29;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar6 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_100,puVar6);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar8 = &UNK_11094b428;
    unaff_x23 = &uStack_138;
    puVar14 = &uStack_138;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b428,puVar14,uVar15);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar1 = 0;
    puVar6 = auStack_118;
    uVar16 = uVar15;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar3);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar7 = puVar4;
  __Unwind_Resume();
  pcStack_148 = FUN_106927064;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar6;
  puStack_168 = puVar4;
  puStack_160 = puVar3;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar8);
  _objc_retain(puVar14);
  if (puVar7 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar7 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1b8,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar3 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_1a0,puVar3);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar5 = &UNK_11094b478;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b478,&uStack_1d8,uVar16);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar1 = 0;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar8);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar4 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar8 = puVar4;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bfdace0();
  if ((((ulong)puVar5 & 1) == 0) && (puVar5 = puVar8, func_0x00010bfdc3e0(), (int)puVar5 == 0))
  goto LAB_1069274c0;
  puVar5 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar7 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar9 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar10 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar11 = puVar8;
  func_0x00010bfdace0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar8;
    func_0x00010bfdc3e0();
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar12 = puVar8;
      func_0x00010c241ea0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c204de0(puVar10);
      goto LAB_106927438;
    }
  }
  else {
    puVar11 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar12 = puVar8;
    func_0x00010c11dc40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c1e6620(puVar10);
LAB_106927438:
    _objc_release(puVar11);
  }
  func_0x00010c1ac580(puVar9);
  func_0x00010c1c73c0(puVar7);
  func_0x00010c1863a0(puVar5);
  puVar11 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_1069274c0:
  _objc_release(puVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069253ec; end: 1069253ff; -[SCStoriesSnapReadReceiptLogger logReadReceiptUploadResultToEndpoint:result:count:] */

void FUN_1069253ec(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  uVar14 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar6 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar15 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_11094b428;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11094b428,puVar3,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    puVar6 = auStack_78;
    uVar14 = param_5;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_106927064;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar6;
  puStack_c8 = puVar4;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar5 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f3a2c29;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar6 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_100,puVar6);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11094b478;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11094b478,&uStack_138,uVar14);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar1 = 0;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar3);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Unwind_Resume(puVar4);
  _objc_retain();
  puVar2 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar2;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar5 & 1) == 0) && (puVar5 = puVar7, func_0x00010bfdc3e0(), (int)puVar5 == 0))
  goto LAB_1069274c0;
  puVar5 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar8 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar9 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar10 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar11 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar12 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c204de0(puVar10);
      goto LAB_106927438;
    }
  }
  else {
    puVar11 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar12 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c1e6620(puVar10);
LAB_106927438:
    _objc_release(puVar11);
  }
  func_0x00010c1ac580(puVar9);
  func_0x00010c1c73c0(puVar8);
  func_0x00010c1863a0(puVar5);
  puVar11 = puVar4;
  func_0x00010c0fee00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106925400; end: 106925413; -[SCStoriesSnapReadReceiptLogger logReadReceiptPostUploadToEndpoint:result:count:] */

void FUN_106925400(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

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
  long *plVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar12 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_11094b478;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094b478,&uStack_98,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume(puVar3);
  _objc_retain();
  puVar4 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfdace0();
  if ((((ulong)puVar5 & 1) == 0) && (puVar5 = puVar2, func_0x00010bfdc3e0(), (int)puVar5 == 0))
  goto LAB_1069274c0;
  puVar5 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar7 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar8 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar9 = puVar2;
  func_0x00010bfdace0();
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    func_0x00010bfdc3e0();
    if ((int)puVar9 != 0) {
      puVar9 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar10 = puVar2;
      func_0x00010c241ea0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar9);
      _objc_release(puVar11);
      _objc_release(puVar10);
      func_0x00010c204de0(puVar8);
      goto LAB_106927438;
    }
  }
  else {
    puVar9 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar10 = puVar2;
    func_0x00010c11dc40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar10);
    func_0x00010c1e6620(puVar8);
LAB_106927438:
    _objc_release(puVar9);
  }
  func_0x00010c1ac580(puVar7);
  func_0x00010c1c73c0(puVar6);
  func_0x00010c1863a0(puVar5);
  puVar9 = puVar3;
  func_0x00010c0fee00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_1069274c0:
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106925414; end: 106925bcf; -[SCStoriesSnapReadReceiptLogger logReadReceiciptsUploadToEndpoint:params:] */

void FUN_106925414(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf529e0(param_4);
  func_0x00010c0ad680(param_1);
  lVar11 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar11 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e65058;
    lVar11 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar11 == 0) goto LAB_106925b78;
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    _objc_retain(param_4);
    lVar11 = param_4;
    func_0x00010bf52a60();
    if (lVar11 != 0) {
      lVar7 = *plStack_3e0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_3e0 != lVar7) {
            _objc_enumerationMutation(param_4);
          }
          puVar12 = *(undefined **)(lStack_3e8 + lVar10 * 8);
          puVar2 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar2);
          puVar2 = puVar12;
          func_0x00010c0e00e0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          if (puVar3 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar1);
          }
          else {
            puVar3 = puVar1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            _objc_release(puVar3);
            _objc_release(puVar2);
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar12);
          }
          _objc_release(puVar2);
          lVar10 = lVar10 + 1;
        } while (lVar11 != lVar10);
        lVar11 = param_4;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
    }
    _objc_release(param_4);
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_428 = 0;
    puStack_430 = (undefined *)0x0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    _objc_retain(puVar1);
    ppuVar6 = &puStack_430;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    puVar3 = puVar1;
    if (puVar2 != (undefined *)0x0) {
      lVar11 = *plStack_420;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_420 != lVar11) {
            _objc_enumerationMutation(puVar1);
          }
          uVar8 = *(undefined8 *)(lStack_428 + (long)puVar12 * 8);
          uVar9 = *(undefined8 *)(param_1 + 8);
          puVar13 = puVar1;
          func_0x00010c0e00e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar13;
          func_0x00010c067fc0();
          FUN_106926558(uVar9,uVar8,puVar4);
          _objc_release(puVar13);
          puVar12 = puVar12 + 1;
        } while (puVar2 != puVar12);
        ppuVar6 = &puStack_430;
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 8);
    lVar11 = param_4;
    func_0x00010bf529e0(param_4);
    FUN_106926558(uVar8,param_3,lVar11);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    _objc_retain(param_4);
    lVar11 = param_4;
    func_0x00010bf52a60();
    if (lVar11 != 0) {
      lVar7 = *plStack_320;
      do {
        lVar10 = 0;
        do {
          if (*plStack_320 != lVar7) {
            _objc_enumerationMutation(param_4);
          }
          puVar13 = *(undefined **)(lStack_328 + lVar10 * 8);
          puVar2 = puVar13;
          func_0x00010c0e00e0(puVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar2);
          puVar2 = puVar13;
          func_0x00010c0e00e0(puVar13);
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar3);
          }
          else {
            puVar12 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            _objc_release(puVar12);
            _objc_release(puVar2);
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar13;
            func_0x00010c0e00e0(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(puVar12);
          }
          _objc_release(puVar2);
          puVar2 = puVar13;
          func_0x00010c0e00e0(puVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar2);
          puVar2 = puVar13;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar1);
          }
          else {
            puVar12 = puVar1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            _objc_release(puVar12);
            _objc_release(puVar2);
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar13);
          }
          _objc_release(puVar2);
          lVar10 = lVar10 + 1;
        } while (lVar11 != lVar10);
        lVar11 = param_4;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
    }
    _objc_release(param_4);
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar11 = *plStack_360;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_360 != lVar11) {
            _objc_enumerationMutation(puVar3);
          }
          uVar8 = *(undefined8 *)(lStack_368 + (long)puVar12 * 8);
          uVar9 = *(undefined8 *)(param_1 + 8);
          puVar13 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar13;
          func_0x00010c067fc0();
          FUN_106926228(uVar9,uVar8,puVar4);
          _objc_release(puVar13);
          puVar12 = puVar12 + 1;
        } while (puVar2 != puVar12);
        puVar2 = puVar3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    puStack_3b0 = (undefined *)0x0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    _objc_retain(puVar1);
    ppuVar6 = &puStack_3b0;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar11 = *plStack_3a0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_3a0 != lVar11) {
            _objc_enumerationMutation(puVar1);
          }
          uVar8 = *(undefined8 *)(lStack_3a8 + (long)puVar12 * 8);
          uVar9 = *(undefined8 *)(param_1 + 8);
          puVar13 = puVar1;
          func_0x00010c0e00e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar13;
          func_0x00010c067fc0();
          FUN_1069263c0(uVar9,uVar8,puVar4);
          _objc_release(puVar13);
          puVar12 = puVar12 + 1;
        } while (puVar2 != puVar12);
        ppuVar6 = &puStack_3b0;
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
LAB_106925b78:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    ppuVar5 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar5 != (undefined **)0x0) {
      lVar11 = *(long *)(param_3 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar11 != 0) {
        puVar1 = PTR_PTR_1126cf220;
        _objc_alloc_init(PTR_PTR_1126cf220);
        func_0x00010c204680();
        func_0x00010c1d6d60(puVar1);
        func_0x00010c0b2e60(lVar11);
        _objc_release(puVar1);
      }
      _objc_release(lVar11);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
    return;
  }
  return;
}



/* Entry: 106925bd0; end: 106925c6b; -[SCStoriesSnapReadReceiptLogger logReadReceiptNetworkEventWithSnapId:outcome:] */

void FUN_106925bd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126cf220;
      _objc_alloc_init(PTR_PTR_1126cf220);
      func_0x00010c204680();
      func_0x00010c1d6d60(puVar2,param_2,param_4);
      func_0x00010c0b2e60(lVar1,param_2,puVar2);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106925c6c; end: 106925c9b; -[SCStoriesSnapReadReceiptLogger .cxx_destruct] */

void FUN_106925c6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106925c9c; end: 106925d0f; -[SCGrapheneReadReceiptMetric2 init] */

undefined1 * FUN_106925c9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3d98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106925d10; end: 106925f3f;  */

void FUN_106925d10(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 *puStack_680;
  undefined8 auStack_678 [2];
  char cStack_661;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  undefined8 *puStack_620;
  long *plStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 auStack_5d8 [2];
  char cStack_5c1;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  undefined8 *puStack_580;
  long *plStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined8 *puStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = param_2;
  puVar1 = param_3;
  puVar17 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar19 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar19 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,plVar19);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    plVar19 = (long *)&UNK_11094b108;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b108,puVar1,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar18 = 0;
    puVar3 = auStack_78;
    puVar17 = param_4;
    do {
      if ((&cStack_49)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(param_3);
  plVar22 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar2 = plVar22;
  __Unwind_Resume();
  puVar15 = &uStack_120;
  pcStack_a8 = FUN_106925f40;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = plVar19;
  puVar14 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar3;
  plStack_c8 = plVar22;
  puStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar19);
  plVar22 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar22 = (long *)plVar2[1];
    _objc_retain(plVar19);
    if (plVar19 == (long *)0x0) {
      plVar21 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar21 = plVar19;
      _objc_retainAutorelease(plVar19);
      func_0x00010bdc3520();
    }
    _objc_release(plVar19);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,plVar21);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    plVar21 = (long *)&UNK_11094b158;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11094b158,&uStack_120,puVar1);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar14 = puVar15;
    puVar17 = puVar1;
    puVar3 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar14 = puVar15;
      puVar17 = puVar1;
      puVar3 = &uStack_120;
    }
  }
  plVar2 = plVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar19);
  _objc_release(plVar19);
  plVar20 = plVar2;
  __Unwind_Resume();
  puVar15 = &uStack_1a0;
  pcStack_128 = FUN_1069260b4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar21;
  puVar1 = puVar14;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar3;
  plStack_148 = plVar22;
  plStack_140 = plVar2;
  plStack_138 = plVar19;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar21);
  plVar19 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    _objc_retain(plVar21);
    if (plVar21 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar21;
      _objc_retainAutorelease(plVar21);
      func_0x00010bdc3520();
    }
    _objc_release(plVar21);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,plVar22);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    plVar4 = (long *)&UNK_11094b1a8;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b1a8,&uStack_1a0,puVar14);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar1 = puVar15;
    puVar17 = puVar14;
    puVar3 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar1 = puVar15;
      puVar17 = puVar14;
      puVar3 = &uStack_1a0;
    }
  }
  plVar22 = plVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar21);
  _objc_release(plVar21);
  plVar20 = plVar22;
  __Unwind_Resume();
  puVar15 = &uStack_220;
  pcStack_1a8 = FUN_106926228;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar4;
  puVar14 = puVar1;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar3;
  plStack_1c8 = plVar19;
  plStack_1c0 = plVar22;
  plStack_1b8 = plVar21;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar4);
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    plVar2 = (long *)&UNK_11094b1f8;
    (**(code **)(*plVar19 + 0x28))();
    if ((int)plVar19 != 0) {
      plVar20 = (long *)plVar20[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar19 = (long *)&UNK_10f3a2c29;
      }
      else {
        plVar19 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = auStack_200;
      func_0x00010002b838(auStack_200,plVar19);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
      puVar17 = (undefined8 *)((long)puVar1 * 10);
      plVar2 = (long *)&UNK_11094b1f8;
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11094b1f8,&uStack_220,puVar17);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      puVar14 = puVar15;
      puVar3 = &uStack_220;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        puVar14 = puVar15;
        puVar3 = &uStack_220;
      }
    }
  }
  plVar19 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar21 = plVar19;
  __Unwind_Resume();
  puVar15 = &uStack_2a0;
  pcStack_228 = FUN_1069263c0;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = plVar2;
  puVar1 = puVar14;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar3;
  plStack_248 = plVar20;
  plStack_240 = plVar19;
  plStack_238 = plVar4;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar2);
  if (plVar21 != (long *)0x0) {
    plVar19 = (long *)plVar21[1];
    plVar22 = (long *)&UNK_11094b248;
    (**(code **)(*plVar19 + 0x28))();
    if ((int)plVar19 != 0) {
      plVar21 = (long *)plVar21[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar19 = (long *)&UNK_10f3a2c29;
      }
      else {
        plVar19 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      unaff_x23 = auStack_280;
      func_0x00010002b838(auStack_280,plVar19);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
      puVar17 = (undefined8 *)((long)puVar14 * 10);
      plVar22 = (long *)&UNK_11094b248;
      (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11094b248,&uStack_2a0,puVar17);
      puStack_288 = (undefined1 *)&uStack_2a0;
      func_0x00010007e5dc(&puStack_288);
      puVar1 = puVar15;
      puVar3 = &uStack_2a0;
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
        puVar1 = puVar15;
        puVar3 = &uStack_2a0;
      }
    }
  }
  plVar19 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar20 = plVar19;
  __Unwind_Resume();
  puVar15 = &uStack_320;
  pcStack_2a8 = FUN_106926558;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar22;
  puVar14 = puVar1;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar3;
  plStack_2c8 = plVar21;
  plStack_2c0 = plVar19;
  plStack_2b8 = plVar2;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar22);
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    plVar4 = (long *)&UNK_11094b298;
    (**(code **)(*plVar19 + 0x28))();
    if ((int)plVar19 != 0) {
      plVar20 = (long *)plVar20[1];
      _objc_retain(plVar22);
      if (plVar22 == (long *)0x0) {
        plVar19 = (long *)&UNK_10f3a2c29;
      }
      else {
        plVar19 = plVar22;
        _objc_retainAutorelease(plVar22);
        func_0x00010bdc3520();
      }
      _objc_release(plVar22);
      unaff_x23 = auStack_300;
      func_0x00010002b838(auStack_300,plVar19);
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
      plVar4 = (long *)&UNK_11094b298;
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11094b298,&uStack_320,puVar1);
      puStack_308 = (undefined1 *)&uStack_320;
      func_0x00010007e5dc(&puStack_308);
      puVar14 = puVar15;
      puVar17 = puVar1;
      puVar3 = &uStack_320;
      if (cStack_2e9 < '\0') {
        __ZdlPv(auStack_300[0]);
        puVar14 = puVar15;
        puVar17 = puVar1;
        puVar3 = &uStack_320;
      }
    }
  }
  plVar19 = plVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar22);
  _objc_release(plVar22);
  plVar2 = plVar19;
  __Unwind_Resume();
  puVar15 = &uStack_3a0;
  pcStack_328 = FUN_1069266ec;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = plVar4;
  puVar1 = puVar14;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar3;
  plStack_348 = plVar20;
  plStack_340 = plVar19;
  plStack_338 = plVar22;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar4);
  plVar19 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar19 = (long *)plVar2[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = auStack_380;
    func_0x00010002b838(auStack_380,plVar22);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_368,1);
    plVar21 = (long *)&UNK_11094b2e8;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b2e8,&uStack_3a0,puVar14);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    puVar1 = puVar15;
    puVar17 = puVar14;
    puVar3 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar1 = puVar15;
      puVar17 = puVar14;
      puVar3 = &uStack_3a0;
    }
  }
  plVar22 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar20 = plVar22;
  __Unwind_Resume();
  pcStack_3a8 = FUN_106926860;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar21;
  puVar14 = puVar1;
  puVar15 = puVar17;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar3;
  plStack_3c8 = plVar19;
  plStack_3c0 = plVar22;
  plStack_3b8 = plVar4;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(plVar21);
  _objc_retain(puVar1);
  puVar3 = (undefined8 *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    _objc_retain(plVar21);
    if (plVar21 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar21;
      _objc_retainAutorelease(plVar21);
      func_0x00010bdc3520();
    }
    _objc_release(plVar21);
    unaff_x24 = auStack_418;
    func_0x00010002b838(auStack_418,plVar22);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_400,puVar3);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    plVar2 = (long *)&UNK_11094b338;
    unaff_x23 = &uStack_438;
    puVar14 = &uStack_438;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b338,puVar14,puVar17);
    puStack_420 = unaff_x23;
    func_0x00010007e5dc(&puStack_420);
    lVar18 = 0;
    puVar3 = auStack_418;
    puVar15 = puVar17;
    do {
      if ((&cStack_3e9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar1);
  plVar19 = plVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar21);
  plVar4 = plVar19;
  __Unwind_Resume();
  puVar16 = &uStack_4c0;
  pcStack_448 = FUN_106926a90;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = plVar2;
  puVar17 = puVar14;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar3;
  plStack_468 = plVar19;
  puStack_460 = puVar1;
  plStack_458 = plVar21;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(plVar2);
  plVar19 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar19 = (long *)plVar4[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x23 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,plVar22);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_488,1);
    plVar22 = (long *)&UNK_11094b388;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b388,&uStack_4c0,puVar14);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar17 = puVar16;
    puVar15 = puVar14;
    puVar3 = &uStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar17 = puVar16;
      puVar15 = puVar14;
      puVar3 = &uStack_4c0;
    }
  }
  plVar21 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar20 = plVar21;
  __Unwind_Resume();
  pcStack_4c8 = FUN_106926c04;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar22;
  puVar1 = puVar17;
  puVar14 = puVar15;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar3;
  plStack_4e8 = plVar19;
  plStack_4e0 = plVar21;
  plStack_4d8 = plVar2;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(plVar22);
  _objc_retain(puVar17);
  puVar3 = (undefined8 *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar19 = (long *)plVar20[1];
    _objc_retain(plVar22);
    if (plVar22 == (long *)0x0) {
      plVar21 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar21 = plVar22;
      _objc_retainAutorelease(plVar22);
      func_0x00010bdc3520();
    }
    _objc_release(plVar22);
    unaff_x24 = auStack_538;
    func_0x00010002b838(auStack_538,plVar21);
    _objc_retain(puVar17);
    if (puVar17 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar17);
      puVar1 = puVar17;
      func_0x00010bdc3520(puVar17);
    }
    _objc_release(puVar17);
    func_0x00010002b838(auStack_520,puVar1);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x00010007e1e8(&uStack_558,auStack_538,&lStack_508,2);
    plVar4 = (long *)&UNK_11094b3d8;
    unaff_x23 = &uStack_558;
    puVar1 = &uStack_558;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b3d8,puVar1,puVar15);
    puStack_540 = unaff_x23;
    func_0x00010007e5dc(&puStack_540);
    lVar18 = 0;
    puVar3 = auStack_538;
    puVar14 = puVar15;
    do {
      if ((&cStack_509)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar17);
  plVar19 = plVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar17);
  if (cStack_521 < '\0') {
    __ZdlPv(auStack_538[0]);
  }
  _objc_release(puVar17);
  _objc_release(plVar22);
  plVar2 = plVar19;
  __Unwind_Resume();
  pcStack_568 = FUN_106926e34;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = plVar4;
  puVar15 = puVar1;
  puVar16 = puVar14;
  puStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = puVar3;
  plStack_588 = plVar19;
  puStack_580 = puVar17;
  plStack_578 = plVar22;
  pppuStack_570 = &pppuStack_4d0;
  _objc_retain(plVar4);
  _objc_retain(puVar1);
  puVar3 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar19 = (long *)plVar2[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_5d8;
    func_0x00010002b838(auStack_5d8,plVar22);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_5c0,puVar3);
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    func_0x00010007e1e8(&uStack_5f8,auStack_5d8,&lStack_5a8,2);
    plVar21 = (long *)&UNK_11094b428;
    unaff_x23 = &uStack_5f8;
    puVar15 = &uStack_5f8;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b428,puVar15,puVar14);
    puStack_5e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_5e0);
    lVar18 = 0;
    puVar3 = auStack_5d8;
    puVar16 = puVar14;
    do {
      if ((&cStack_5a9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar1);
  plVar19 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_5c1 < '\0') {
    __ZdlPv(auStack_5d8[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar4);
  plVar2 = plVar19;
  __Unwind_Resume();
  pcStack_608 = FUN_106927064;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = plVar21;
  puStack_640 = unaff_x24;
  puStack_638 = unaff_x23;
  puStack_630 = puVar3;
  plStack_628 = plVar19;
  puStack_620 = puVar1;
  plStack_618 = plVar4;
  pppuStack_610 = &pppuStack_570;
  _objc_retain(plVar21);
  _objc_retain(puVar15);
  if (plVar2 != (long *)0x0) {
    plVar19 = (long *)plVar2[1];
    _objc_retain(plVar21);
    if (plVar21 == (long *)0x0) {
      plVar22 = (long *)&UNK_10f3a2c29;
    }
    else {
      plVar22 = plVar21;
      _objc_retainAutorelease(plVar21);
      func_0x00010bdc3520();
    }
    _objc_release(plVar21);
    func_0x00010002b838(auStack_678,plVar22);
    _objc_retain(puVar15);
    if (puVar15 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar1 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_660,puVar1);
    uStack_698 = 0;
    uStack_690 = 0;
    uStack_688 = 0;
    func_0x00010007e1e8(&uStack_698,auStack_678,&lStack_648,2);
    plVar22 = (long *)&UNK_11094b478;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11094b478,&uStack_698,puVar16);
    puStack_680 = &uStack_698;
    func_0x00010007e5dc(&puStack_680);
    lVar18 = 0;
    do {
      if ((&cStack_649)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_660 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar15);
  plVar19 = plVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  if (cStack_661 < '\0') {
    __ZdlPv(auStack_678[0]);
  }
  _objc_release(puVar15);
  _objc_release(plVar21);
  __Unwind_Resume(plVar19);
  _objc_retain();
  puVar5 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(plVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(plVar22);
  puVar6 = puVar5;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfdace0();
  if ((((ulong)puVar7 & 1) == 0) && (puVar7 = puVar6, func_0x00010bfdc3e0(), (int)puVar7 == 0))
  goto LAB_1069274c0;
  puVar7 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar8 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar9 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar10 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar11 = puVar6;
  func_0x00010bfdace0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar6;
    func_0x00010bfdc3e0();
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar12 = puVar6;
      func_0x00010c241ea0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c204de0(puVar10);
      goto LAB_106927438;
    }
  }
  else {
    puVar11 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar12 = puVar6;
    func_0x00010c11dc40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c1e6620(puVar10);
LAB_106927438:
    _objc_release(puVar11);
  }
  func_0x00010c1ac580(puVar9);
  func_0x00010c1c73c0(puVar8);
  func_0x00010c1863a0(puVar7);
  plVar22 = plVar19;
  func_0x00010c0fee00(plVar19);
  _objc_retainAutoreleasedReturnValue();
  plVar21 = plVar22;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(plVar21);
  _objc_release(plVar22);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
LAB_1069274c0:
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar19);
  return;
}



/* Entry: 106925f40; end: 1069260b3;  */

void FUN_106925f40(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 auStack_5d8 [2];
  char cStack_5c1;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined *puStack_588;
  undefined8 *puStack_580;
  undefined *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11094b158;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b158,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar13 = &uStack_100;
  pcStack_88 = FUN_1069260b4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_11094b1a8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b1a8,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = puVar13;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = puVar13;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar13 = &uStack_180;
  pcStack_108 = FUN_106926228;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar3 = puVar5;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_11094b1f8;
    (**(code **)(*plVar17 + 0x28))();
    if ((int)plVar17 != 0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f3a2c29;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x23 = auStack_160;
      func_0x00010002b838(auStack_160,puVar1);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      param_4 = (undefined8 *)((long)puVar5 * 10);
      puVar1 = &UNK_11094b1f8;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b1f8,&uStack_180,param_4);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar3 = puVar13;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar3 = puVar13;
      }
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar13 = &uStack_200;
  pcStack_188 = FUN_1069263c0;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar5 = puVar3;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    puVar7 = &UNK_11094b248;
    (**(code **)(*plVar17 + 0x28))();
    if ((int)plVar17 != 0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      unaff_x23 = auStack_1e0;
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      param_4 = (undefined8 *)((long)puVar3 * 10);
      puVar7 = &UNK_11094b248;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b248,&uStack_200,param_4);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar5 = puVar13;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar5 = puVar13;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar13 = &uStack_280;
  pcStack_208 = FUN_106926558;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar3 = puVar5;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_11094b298;
    (**(code **)(*plVar17 + 0x28))();
    if ((int)plVar17 != 0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f3a2c29;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x23 = auStack_260;
      func_0x00010002b838(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar1 = &UNK_11094b298;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b298,&uStack_280,puVar5);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar3 = puVar13;
      param_4 = puVar5;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar3 = puVar13;
        param_4 = puVar5;
      }
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar13 = &uStack_300;
  pcStack_288 = FUN_1069266ec;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar5 = puVar3;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_2e0;
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_11094b2e8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b2e8,&uStack_300,puVar3);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar5 = puVar13;
    param_4 = puVar3;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar5 = puVar13;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_308 = FUN_106926860;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar3 = puVar5;
  puVar16 = param_4;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  puVar13 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_378;
    func_0x00010002b838(auStack_378,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_360,puVar3);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
    puVar1 = &UNK_11094b338;
    unaff_x23 = &uStack_398;
    puVar3 = &uStack_398;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b338,puVar3,param_4);
    puStack_380 = unaff_x23;
    func_0x00010007e5dc(&puStack_380);
    lVar18 = 0;
    puVar13 = auStack_378;
    puVar16 = param_4;
    do {
      if ((&cStack_349)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar15 = &uStack_420;
  pcStack_3a8 = FUN_106926a90;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar14 = puVar3;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar13;
  puStack_3c8 = puVar2;
  puStack_3c0 = puVar5;
  puStack_3b8 = puVar7;
  pppuStack_3b0 = &pppuStack_310;
  _objc_retain(puVar1);
  plVar17 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_400;
    func_0x00010002b838(auStack_400,puVar2);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x00010007e1e8(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar6 = &UNK_11094b388;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b388,&uStack_420,puVar3);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x00010007e5dc(&puStack_408);
    puVar14 = puVar15;
    puVar16 = puVar3;
    puVar13 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar14 = puVar15;
      puVar16 = puVar3;
      puVar13 = &uStack_420;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_428 = FUN_106926c04;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar3 = puVar14;
  puVar15 = puVar16;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar13;
  plStack_448 = plVar17;
  puStack_440 = puVar2;
  puStack_438 = puVar1;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar6);
  _objc_retain(puVar14);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_498;
    func_0x00010002b838(auStack_498,puVar1);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar3 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_480,puVar3);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    func_0x00010007e1e8(&uStack_4b8,auStack_498,&lStack_468,2);
    puVar7 = &UNK_11094b3d8;
    unaff_x23 = &uStack_4b8;
    puVar3 = &uStack_4b8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b3d8,puVar3,puVar16);
    puStack_4a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4a0);
    lVar18 = 0;
    puVar5 = auStack_498;
    puVar15 = puVar16;
    do {
      if ((&cStack_469)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar14);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_481 < '\0') {
    __ZdlPv(auStack_498[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_4c8 = FUN_106926e34;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar13 = puVar3;
  puVar16 = puVar15;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar5;
  puStack_4e8 = puVar1;
  puStack_4e0 = puVar14;
  puStack_4d8 = puVar6;
  pppuStack_4d0 = &pppuStack_430;
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_538;
    func_0x00010002b838(auStack_538,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_520,puVar5);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x00010007e1e8(&uStack_558,auStack_538,&lStack_508,2);
    puVar2 = &UNK_11094b428;
    unaff_x23 = &uStack_558;
    puVar13 = &uStack_558;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b428,puVar13,puVar15);
    puStack_540 = unaff_x23;
    func_0x00010007e5dc(&puStack_540);
    lVar18 = 0;
    puVar5 = auStack_538;
    puVar16 = puVar15;
    do {
      if ((&cStack_509)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_521 < '\0') {
    __ZdlPv(auStack_538[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_568 = FUN_106927064;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = puVar5;
  puStack_588 = puVar1;
  puStack_580 = puVar3;
  puStack_578 = puVar7;
  pppuStack_570 = &pppuStack_4d0;
  _objc_retain(puVar2);
  _objc_retain(puVar13);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_5d8,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar3 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_5c0,puVar3);
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    func_0x00010007e1e8(&uStack_5f8,auStack_5d8,&lStack_5a8,2);
    puVar6 = &UNK_11094b478;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b478,&uStack_5f8,puVar16);
    puStack_5e0 = &uStack_5f8;
    func_0x00010007e5dc(&puStack_5e0);
    lVar18 = 0;
    do {
      if ((&cStack_5a9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar13);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_5c1 < '\0') {
    __ZdlPv(auStack_5d8[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar2);
  __Unwind_Resume(puVar1);
  _objc_retain();
  puVar2 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar7 = puVar2;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar6 & 1) == 0) && (puVar6 = puVar7, func_0x00010bfdc3e0(), (int)puVar6 == 0))
  goto LAB_1069274c0;
  puVar6 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar4 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar4);
  func_0x00010c1863a0(puVar6);
  puVar10 = puVar1;
  func_0x00010c0fee00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar6);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069260b4; end: 106926227;  */

void FUN_1069260b4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined *puStack_508;
  undefined8 *puStack_500;
  undefined *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined *puStack_468;
  undefined8 *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11094b1a8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b1a8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar13 = &uStack_100;
  pcStack_88 = FUN_106926228;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    puVar7 = &UNK_11094b1f8;
    (**(code **)(*plVar17 + 0x28))();
    if ((int)plVar17 != 0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      unaff_x23 = auStack_e0;
      func_0x00010002b838(auStack_e0,puVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      param_4 = (undefined8 *)((long)puVar5 * 10);
      puVar7 = &UNK_11094b1f8;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b1f8,&uStack_100,param_4);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar3 = puVar13;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar3 = puVar13;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar13 = &uStack_180;
  pcStack_108 = FUN_1069263c0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar5 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_11094b248;
    (**(code **)(*plVar17 + 0x28))();
    if ((int)plVar17 != 0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f3a2c29;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x23 = auStack_160;
      func_0x00010002b838(auStack_160,puVar1);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      param_4 = (undefined8 *)((long)puVar3 * 10);
      puVar1 = &UNK_11094b248;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b248,&uStack_180,param_4);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar5 = puVar13;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar5 = puVar13;
      }
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar13 = &uStack_200;
  pcStack_188 = FUN_106926558;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    puVar7 = &UNK_11094b298;
    (**(code **)(*plVar17 + 0x28))();
    if ((int)plVar17 != 0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      unaff_x23 = auStack_1e0;
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar7 = &UNK_11094b298;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b298,&uStack_200,puVar5);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar3 = puVar13;
      param_4 = puVar5;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar3 = puVar13;
        param_4 = puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar13 = &uStack_280;
  pcStack_208 = FUN_1069266ec;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar5 = puVar3;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_260;
    func_0x00010002b838(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_11094b2e8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b2e8,&uStack_280,puVar3);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar5 = puVar13;
    param_4 = puVar3;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar5 = puVar13;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  pcStack_288 = FUN_106926860;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar16 = param_4;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar13 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_2e0,puVar3);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar7 = &UNK_11094b338;
    unaff_x23 = &uStack_318;
    puVar3 = &uStack_318;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b338,puVar3,param_4);
    puStack_300 = unaff_x23;
    func_0x00010007e5dc(&puStack_300);
    lVar18 = 0;
    puVar13 = auStack_2f8;
    puVar16 = param_4;
    do {
      if ((&cStack_2c9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar15 = &uStack_3a0;
  pcStack_328 = FUN_106926a90;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar14 = puVar3;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar13;
  puStack_348 = puVar2;
  puStack_340 = puVar5;
  puStack_338 = puVar1;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar7);
  plVar17 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_380;
    func_0x00010002b838(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar6 = &UNK_11094b388;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b388,&uStack_3a0,puVar3);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    puVar14 = puVar15;
    puVar16 = puVar3;
    puVar13 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar14 = puVar15;
      puVar16 = puVar3;
      puVar13 = &uStack_3a0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_3a8 = FUN_106926c04;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar5 = puVar14;
  puVar15 = puVar16;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar13;
  plStack_3c8 = plVar17;
  puStack_3c0 = puVar1;
  puStack_3b8 = puVar7;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar6);
  _objc_retain(puVar14);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_418;
    func_0x00010002b838(auStack_418,puVar1);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar5 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_400,puVar5);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    puVar2 = &UNK_11094b3d8;
    unaff_x23 = &uStack_438;
    puVar5 = &uStack_438;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b3d8,puVar5,puVar16);
    puStack_420 = unaff_x23;
    func_0x00010007e5dc(&puStack_420);
    lVar18 = 0;
    puVar3 = auStack_418;
    puVar15 = puVar16;
    do {
      if ((&cStack_3e9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar14);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_448 = FUN_106926e34;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar13 = puVar5;
  puVar16 = puVar15;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar3;
  puStack_468 = puVar1;
  puStack_460 = puVar14;
  puStack_458 = puVar6;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_4b8;
    func_0x00010002b838(auStack_4b8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_4a0,puVar3);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    func_0x00010007e1e8(&uStack_4d8,auStack_4b8,&lStack_488,2);
    puVar7 = &UNK_11094b428;
    unaff_x23 = &uStack_4d8;
    puVar13 = &uStack_4d8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b428,puVar13,puVar15);
    puStack_4c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4c0);
    lVar18 = 0;
    puVar3 = auStack_4b8;
    puVar16 = puVar15;
    do {
      if ((&cStack_489)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar5);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_4a1 < '\0') {
    __ZdlPv(auStack_4b8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_4e8 = FUN_106927064;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puStack_520 = unaff_x24;
  puStack_518 = unaff_x23;
  puStack_510 = puVar3;
  puStack_508 = puVar1;
  puStack_500 = puVar5;
  puStack_4f8 = puVar2;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_558,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar5 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_540,puVar5);
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    func_0x00010007e1e8(&uStack_578,auStack_558,&lStack_528,2);
    puVar6 = &UNK_11094b478;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b478,&uStack_578,puVar16);
    puStack_560 = &uStack_578;
    func_0x00010007e5dc(&puStack_560);
    lVar18 = 0;
    do {
      if ((&cStack_529)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar13);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_541 < '\0') {
    __ZdlPv(auStack_558[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  _objc_retain();
  puVar2 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar7 = puVar2;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar6 & 1) == 0) && (puVar6 = puVar7, func_0x00010bfdc3e0(), (int)puVar6 == 0))
  goto LAB_1069274c0;
  puVar6 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar4 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar4);
  func_0x00010c1863a0(puVar6);
  puVar10 = puVar1;
  func_0x00010c0fee00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar6);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106926228; end: 1069263bf;  */

void FUN_106926228(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined *puStack_488;
  undefined8 *puStack_480;
  undefined *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11094b1f8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x23 = auStack_60;
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      param_4 = (undefined8 *)((long)param_3 * 10);
      puVar2 = &UNK_11094b1f8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b1f8,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar4 = puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar4 = puVar6;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar14 = &uStack_100;
  pcStack_88 = FUN_1069263c0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar8 = &UNK_11094b248;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f3a2c29;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x23 = auStack_e0;
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      param_4 = (undefined8 *)((long)puVar4 * 10);
      puVar8 = &UNK_11094b248;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b248,&uStack_100,param_4);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar6 = puVar14;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar6 = puVar14;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar14 = &uStack_180;
  pcStack_108 = FUN_106926558;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar4 = puVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_11094b298;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      unaff_x23 = auStack_160;
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_11094b298;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b298,&uStack_180,puVar6);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar4 = puVar14;
      param_4 = puVar6;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar4 = puVar14;
        param_4 = puVar6;
      }
    }
  }
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  __Unwind_Resume();
  puVar14 = &uStack_200;
  pcStack_188 = FUN_1069266ec;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_1e0;
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar8 = &UNK_11094b2e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b2e8,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = puVar14;
    param_4 = puVar4;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = puVar14;
      param_4 = puVar4;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_208 = FUN_106926860;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar4 = puVar6;
  puVar17 = param_4;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  puVar14 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_278;
    func_0x00010002b838(auStack_278,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_260,puVar4);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
    puVar2 = &UNK_11094b338;
    unaff_x23 = &uStack_298;
    puVar4 = &uStack_298;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b338,puVar4,param_4);
    puStack_280 = unaff_x23;
    func_0x00010007e5dc(&puStack_280);
    lVar18 = 0;
    puVar14 = auStack_278;
    puVar17 = param_4;
    do {
      if ((&cStack_249)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar6);
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar16 = &uStack_320;
  pcStack_2a8 = FUN_106926a90;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar15 = puVar4;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar14;
  puStack_2c8 = puVar3;
  puStack_2c0 = puVar6;
  puStack_2b8 = puVar8;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar2);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_300;
    func_0x00010002b838(auStack_300,puVar3);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar7 = &UNK_11094b388;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b388,&uStack_320,puVar4);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x00010007e5dc(&puStack_308);
    puVar15 = puVar16;
    puVar17 = puVar4;
    puVar14 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar15 = puVar16;
      puVar17 = puVar4;
      puVar14 = &uStack_320;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_328 = FUN_106926c04;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar4 = puVar15;
  puVar16 = puVar17;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar14;
  plStack_348 = plVar1;
  puStack_340 = puVar3;
  puStack_338 = puVar2;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar7);
  _objc_retain(puVar15);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,puVar2);
    _objc_retain(puVar15);
    if (puVar15 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar4 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_380,puVar4);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    puVar8 = &UNK_11094b3d8;
    unaff_x23 = &uStack_3b8;
    puVar4 = &uStack_3b8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b3d8,puVar4,puVar17);
    puStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_3a0);
    lVar18 = 0;
    puVar6 = auStack_398;
    puVar16 = puVar17;
    do {
      if ((&cStack_369)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar15);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar15);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_3c8 = FUN_106926e34;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar14 = puVar4;
  puVar17 = puVar16;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar6;
  puStack_3e8 = puVar2;
  puStack_3e0 = puVar15;
  puStack_3d8 = puVar7;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_438;
    func_0x00010002b838(auStack_438,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar6 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_420,puVar6);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
    puVar3 = &UNK_11094b428;
    unaff_x23 = &uStack_458;
    puVar14 = &uStack_458;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b428,puVar14,puVar16);
    puStack_440 = unaff_x23;
    func_0x00010007e5dc(&puStack_440);
    lVar18 = 0;
    puVar6 = auStack_438;
    puVar17 = puVar16;
    do {
      if ((&cStack_409)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_468 = FUN_106927064;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar6;
  puStack_488 = puVar2;
  puStack_480 = puVar4;
  puStack_478 = puVar8;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(puVar3);
  _objc_retain(puVar14);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_4d8,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar4 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_4c0,puVar4);
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    func_0x00010007e1e8(&uStack_4f8,auStack_4d8,&lStack_4a8,2);
    puVar7 = &UNK_11094b478;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b478,&uStack_4f8,puVar17);
    puStack_4e0 = &uStack_4f8;
    func_0x00010007e5dc(&puStack_4e0);
    lVar18 = 0;
    do {
      if ((&cStack_4a9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_4c1 < '\0') {
    __ZdlPv(auStack_4d8[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar3);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar3 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar8 = puVar3;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bfdace0();
  if ((((ulong)puVar7 & 1) == 0) && (puVar7 = puVar8, func_0x00010bfdc3e0(), (int)puVar7 == 0))
  goto LAB_1069274c0;
  puVar7 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar9 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar10 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar11 = puVar8;
  func_0x00010bfdace0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar8;
    func_0x00010bfdc3e0();
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar12 = puVar8;
      func_0x00010c241ea0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c204de0(puVar10);
      goto LAB_106927438;
    }
  }
  else {
    puVar11 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar12 = puVar8;
    func_0x00010c11dc40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c1e6620(puVar10);
LAB_106927438:
    _objc_release(puVar11);
  }
  func_0x00010c1ac580(puVar9);
  func_0x00010c1c73c0(puVar5);
  func_0x00010c1863a0(puVar7);
  puVar11 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
LAB_1069274c0:
  _objc_release(puVar8);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069263c0; end: 106926557;  */

void FUN_1069263c0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined *puStack_408;
  undefined8 *puStack_400;
  undefined *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11094b248;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x23 = auStack_60;
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      param_4 = (undefined8 *)((long)param_3 * 10);
      puVar2 = &UNK_11094b248;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b248,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar6 = puVar4;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar6 = puVar4;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar14 = &uStack_100;
  pcStack_88 = FUN_106926558;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar4 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar8 = &UNK_11094b298;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f3a2c29;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x23 = auStack_e0;
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar8 = &UNK_11094b298;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b298,&uStack_100,puVar6);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar4 = puVar14;
      param_4 = puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar4 = puVar14;
        param_4 = puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar14 = &uStack_180;
  pcStack_108 = FUN_1069266ec;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar6 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_160;
    func_0x00010002b838(auStack_160,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar2 = &UNK_11094b2e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b2e8,&uStack_180,puVar4);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar6 = puVar14;
    param_4 = puVar4;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar6 = puVar14;
      param_4 = puVar4;
    }
  }
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  __Unwind_Resume();
  pcStack_188 = FUN_106926860;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar4 = puVar6;
  puVar17 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  puVar14 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,puVar3);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_1e0,puVar4);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar8 = &UNK_11094b338;
    unaff_x23 = &uStack_218;
    puVar4 = &uStack_218;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b338,puVar4,param_4);
    puStack_200 = unaff_x23;
    func_0x00010007e5dc(&puStack_200);
    lVar18 = 0;
    puVar14 = auStack_1f8;
    puVar17 = param_4;
    do {
      if ((&cStack_1c9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar6);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar16 = &uStack_2a0;
  pcStack_228 = FUN_106926a90;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar8;
  puVar15 = puVar4;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar14;
  puStack_248 = puVar3;
  puStack_240 = puVar6;
  puStack_238 = puVar2;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(puVar8);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_280;
    func_0x00010002b838(auStack_280,puVar2);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar7 = &UNK_11094b388;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b388,&uStack_2a0,puVar4);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    puVar15 = puVar16;
    puVar17 = puVar4;
    puVar14 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar15 = puVar16;
      puVar17 = puVar4;
      puVar14 = &uStack_2a0;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_2a8 = FUN_106926c04;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar6 = puVar15;
  puVar16 = puVar17;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar14;
  plStack_2c8 = plVar1;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar8;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar7);
  _objc_retain(puVar15);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_318;
    func_0x00010002b838(auStack_318,puVar2);
    _objc_retain(puVar15);
    if (puVar15 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar6 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_300,puVar6);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar3 = &UNK_11094b3d8;
    unaff_x23 = &uStack_338;
    puVar6 = &uStack_338;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b3d8,puVar6,puVar17);
    puStack_320 = unaff_x23;
    func_0x00010007e5dc(&puStack_320);
    lVar18 = 0;
    puVar4 = auStack_318;
    puVar16 = puVar17;
    do {
      if ((&cStack_2e9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar15);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(puVar15);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_348 = FUN_106926e34;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar3;
  puVar14 = puVar6;
  puVar17 = puVar16;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar4;
  puStack_368 = puVar2;
  puStack_360 = puVar15;
  puStack_358 = puVar7;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(puVar3);
  _objc_retain(puVar6);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_3a0,puVar4);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
    puVar8 = &UNK_11094b428;
    unaff_x23 = &uStack_3d8;
    puVar14 = &uStack_3d8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b428,puVar14,puVar16);
    puStack_3c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_3c0);
    lVar18 = 0;
    puVar4 = auStack_3b8;
    puVar17 = puVar16;
    do {
      if ((&cStack_389)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar6);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_3e8 = FUN_106927064;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar8;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar4;
  puStack_408 = puVar2;
  puStack_400 = puVar6;
  puStack_3f8 = puVar3;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(puVar8);
  _objc_retain(puVar14);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_458,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar6 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_440,puVar6);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    puVar7 = &UNK_11094b478;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b478,&uStack_478,puVar17);
    puStack_460 = &uStack_478;
    func_0x00010007e5dc(&puStack_460);
    lVar18 = 0;
    do {
      if ((&cStack_429)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar8);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar3 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar8 = puVar3;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bfdace0();
  if ((((ulong)puVar7 & 1) == 0) && (puVar7 = puVar8, func_0x00010bfdc3e0(), (int)puVar7 == 0))
  goto LAB_1069274c0;
  puVar7 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar9 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar10 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar11 = puVar8;
  func_0x00010bfdace0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar8;
    func_0x00010bfdc3e0();
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar12 = puVar8;
      func_0x00010c241ea0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c204de0(puVar10);
      goto LAB_106927438;
    }
  }
  else {
    puVar11 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar12 = puVar8;
    func_0x00010c11dc40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c1e6620(puVar10);
LAB_106927438:
    _objc_release(puVar11);
  }
  func_0x00010c1ac580(puVar9);
  func_0x00010c1c73c0(puVar5);
  func_0x00010c1863a0(puVar7);
  puVar11 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
LAB_1069274c0:
  _objc_release(puVar8);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106926558; end: 1069266eb;  */

void FUN_106926558(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11094b298;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3a2c29;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x23 = auStack_60;
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_11094b298;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b298,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar4 = puVar6;
      param_4 = param_3;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar4 = puVar6;
        param_4 = param_3;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar14 = &uStack_100;
  pcStack_88 = FUN_1069266ec;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar8 = &UNK_11094b2e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b2e8,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = puVar14;
    param_4 = puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = puVar14;
      param_4 = puVar4;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_108 = FUN_106926860;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar4 = puVar6;
  puVar17 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  puVar14 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_160,puVar4);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar2 = &UNK_11094b338;
    unaff_x23 = &uStack_198;
    puVar4 = &uStack_198;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b338,puVar4,param_4);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar18 = 0;
    puVar14 = auStack_178;
    puVar17 = param_4;
    do {
      if ((&cStack_149)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar6);
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar16 = &uStack_220;
  pcStack_1a8 = FUN_106926a90;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar15 = puVar4;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar14;
  puStack_1c8 = puVar3;
  puStack_1c0 = puVar6;
  puStack_1b8 = puVar8;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar2);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_200;
    func_0x00010002b838(auStack_200,puVar3);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar7 = &UNK_11094b388;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b388,&uStack_220,puVar4);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar15 = puVar16;
    puVar17 = puVar4;
    puVar14 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar15 = puVar16;
      puVar17 = puVar4;
      puVar14 = &uStack_220;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_228 = FUN_106926c04;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar4 = puVar15;
  puVar16 = puVar17;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar14;
  plStack_248 = plVar1;
  puStack_240 = puVar3;
  puStack_238 = puVar2;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar7);
  _objc_retain(puVar15);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,puVar2);
    _objc_retain(puVar15);
    if (puVar15 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar4 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_280,puVar4);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar8 = &UNK_11094b3d8;
    unaff_x23 = &uStack_2b8;
    puVar4 = &uStack_2b8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b3d8,puVar4,puVar17);
    puStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2a0);
    lVar18 = 0;
    puVar6 = auStack_298;
    puVar16 = puVar17;
    do {
      if ((&cStack_269)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar15);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar15);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106926e34;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar14 = puVar4;
  puVar17 = puVar16;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar6;
  puStack_2e8 = puVar2;
  puStack_2e0 = puVar15;
  puStack_2d8 = puVar7;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar6 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_320,puVar6);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar3 = &UNK_11094b428;
    unaff_x23 = &uStack_358;
    puVar14 = &uStack_358;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b428,puVar14,puVar16);
    puStack_340 = unaff_x23;
    func_0x00010007e5dc(&puStack_340);
    lVar18 = 0;
    puVar6 = auStack_338;
    puVar17 = puVar16;
    do {
      if ((&cStack_309)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_368 = FUN_106927064;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar6;
  puStack_388 = puVar2;
  puStack_380 = puVar4;
  puStack_378 = puVar8;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(puVar3);
  _objc_retain(puVar14);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_3d8,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar4 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_3c0,puVar4);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar7 = &UNK_11094b478;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11094b478,&uStack_3f8,puVar17);
    puStack_3e0 = &uStack_3f8;
    func_0x00010007e5dc(&puStack_3e0);
    lVar18 = 0;
    do {
      if ((&cStack_3a9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(puVar14);
  _objc_release(puVar3);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar3 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar8 = puVar3;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bfdace0();
  if ((((ulong)puVar7 & 1) == 0) && (puVar7 = puVar8, func_0x00010bfdc3e0(), (int)puVar7 == 0))
  goto LAB_1069274c0;
  puVar7 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar9 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar10 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar11 = puVar8;
  func_0x00010bfdace0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar8;
    func_0x00010bfdc3e0();
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar12 = puVar8;
      func_0x00010c241ea0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c204de0(puVar10);
      goto LAB_106927438;
    }
  }
  else {
    puVar11 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar12 = puVar8;
    func_0x00010c11dc40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c1e6620(puVar10);
LAB_106927438:
    _objc_release(puVar11);
  }
  func_0x00010c1ac580(puVar9);
  func_0x00010c1c73c0(puVar5);
  func_0x00010c1863a0(puVar7);
  puVar11 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
LAB_1069274c0:
  _objc_release(puVar8);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069266ec; end: 10692685f;  */

void FUN_1069266ec(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11094b2e8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b2e8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106926860;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar16 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar15 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar7 = &UNK_11094b338;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b338,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar18 = 0;
    puVar15 = auStack_f8;
    puVar16 = param_4;
    do {
      if ((&cStack_c9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar14 = &uStack_1a0;
  pcStack_128 = FUN_106926a90;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar13 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar15;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar7);
  plVar17 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = &UNK_11094b388;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b388,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar13 = puVar14;
    puVar16 = puVar3;
    puVar15 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar13 = puVar14;
      puVar16 = puVar3;
      puVar15 = &uStack_1a0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106926c04;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar5 = puVar13;
  puVar14 = puVar16;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar15;
  plStack_1c8 = plVar17;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar6);
  _objc_retain(puVar13);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar5 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar2 = &UNK_11094b3d8;
    unaff_x23 = &uStack_238;
    puVar5 = &uStack_238;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b3d8,puVar5,puVar16);
    puStack_220 = unaff_x23;
    func_0x00010007e5dc(&puStack_220);
    lVar18 = 0;
    puVar3 = auStack_218;
    puVar14 = puVar16;
    do {
      if ((&cStack_1e9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar13);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_248 = FUN_106926e34;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar15 = puVar5;
  puVar16 = puVar14;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar3;
  puStack_268 = puVar1;
  puStack_260 = puVar13;
  puStack_258 = puVar6;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_2a0,puVar3);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar7 = &UNK_11094b428;
    unaff_x23 = &uStack_2d8;
    puVar15 = &uStack_2d8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b428,puVar15,puVar14);
    puStack_2c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2c0);
    lVar18 = 0;
    puVar3 = auStack_2b8;
    puVar16 = puVar14;
    do {
      if ((&cStack_289)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar5);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_2e8 = FUN_106927064;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar3;
  puStack_308 = puVar1;
  puStack_300 = puVar5;
  puStack_2f8 = puVar2;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar7);
  _objc_retain(puVar15);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_358,puVar1);
    _objc_retain(puVar15);
    if (puVar15 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar5 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_340,puVar5);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar6 = &UNK_11094b478;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b478,&uStack_378,puVar16);
    puStack_360 = &uStack_378;
    func_0x00010007e5dc(&puStack_360);
    lVar18 = 0;
    do {
      if ((&cStack_329)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(puVar15);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(puVar15);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  _objc_retain();
  puVar2 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar7 = puVar2;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar6 & 1) == 0) && (puVar6 = puVar7, func_0x00010bfdc3e0(), (int)puVar6 == 0))
  goto LAB_1069274c0;
  puVar6 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar4 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar4);
  func_0x00010c1863a0(puVar6);
  puVar10 = puVar1;
  func_0x00010c0fee00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar6);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106926860; end: 106926a8f;  */

void FUN_106926860(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar15 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11094b338;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b338,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar17 = 0;
    puVar6 = auStack_78;
    puVar15 = param_4;
    do {
      if ((&cStack_49)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar14 = &uStack_120;
  pcStack_a8 = FUN_106926a90;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar13 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar6;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar18 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = &UNK_11094b388;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b388,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar13 = puVar14;
    puVar15 = puVar2;
    puVar6 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar13 = puVar14;
      puVar15 = puVar2;
      puVar6 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106926c04;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar13;
  puVar14 = puVar15;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar6;
  plStack_148 = plVar18;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar4 = &UNK_11094b3d8;
    unaff_x23 = &uStack_1b8;
    puVar2 = &uStack_1b8;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b3d8,puVar2,puVar15);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar17 = 0;
    puVar6 = auStack_198;
    puVar14 = puVar15;
    do {
      if ((&cStack_169)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(puVar13);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar7);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106926e34;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar15 = puVar2;
  puVar16 = puVar14;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar6;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar13;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_220,puVar6);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar3 = &UNK_11094b428;
    unaff_x23 = &uStack_258;
    puVar15 = &uStack_258;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b428,puVar15,puVar14);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar17 = 0;
    puVar6 = auStack_238;
    puVar16 = puVar14;
    do {
      if ((&cStack_209)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_106927064;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar6;
  puStack_288 = puVar1;
  puStack_280 = puVar2;
  puStack_278 = puVar4;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar3);
  _objc_retain(puVar15);
  if (puVar5 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_2d8,puVar1);
    _objc_retain(puVar15);
    if (puVar15 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar2 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_2c0,puVar2);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar7 = &UNK_11094b478;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11094b478,&uStack_2f8,puVar16);
    puStack_2e0 = &uStack_2f8;
    func_0x00010007e5dc(&puStack_2e0);
    lVar17 = 0;
    do {
      if ((&cStack_2a9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(puVar15);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar15);
  _objc_release(puVar3);
  __Unwind_Resume(puVar1);
  _objc_retain();
  puVar3 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar4 & 1) == 0) && (puVar4 = puVar7, func_0x00010bfdc3e0(), (int)puVar4 == 0))
  goto LAB_1069274c0;
  puVar4 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar5);
  func_0x00010c1863a0(puVar4);
  puVar10 = puVar1;
  func_0x00010c0fee00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106926a90; end: 106926c03;  */

void FUN_106926a90(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11094b388;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094b388,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106926c04;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar14 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar18 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a2c29;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_11094b3d8;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094b3d8,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar17 = 0;
    puVar18 = auStack_f8;
    puVar14 = param_4;
    do {
      if ((&cStack_c9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_106926e34;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar13 = puVar3;
  puVar15 = puVar14;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar18;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_11094b428;
    unaff_x23 = &uStack_1b8;
    puVar13 = &uStack_1b8;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094b428,puVar13,puVar14);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar17 = 0;
    puVar5 = auStack_198;
    puVar15 = puVar14;
    do {
      if ((&cStack_169)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106927064;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  if (puVar4 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar5 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_220,puVar5);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar2 = &UNK_11094b478;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094b478,&uStack_258,puVar15);
    puStack_240 = &uStack_258;
    func_0x00010007e5dc(&puStack_240);
    lVar17 = 0;
    do {
      if ((&cStack_209)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(puVar13);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  _objc_retain();
  puVar6 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar6;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bfdace0();
  if ((((ulong)puVar7 & 1) == 0) && (puVar7 = puVar2, func_0x00010bfdc3e0(), (int)puVar7 == 0))
  goto LAB_1069274c0;
  puVar7 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar4 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar2;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar2;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar2;
      func_0x00010c241ea0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar2;
    func_0x00010c11dc40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar4);
  func_0x00010c1863a0(puVar7);
  puVar10 = puVar1;
  func_0x00010c0fee00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar7);
LAB_1069274c0:
  _objc_release(puVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106926c04; end: 106926e33;  */

void FUN_106926c04(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar14 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11094b3d8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b3d8,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar16 = 0;
    puVar5 = auStack_78;
    uVar14 = param_4;
    do {
      if ((&cStack_49)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106926e34;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar13 = puVar2;
  uVar15 = uVar14;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11094b428;
    unaff_x23 = &uStack_138;
    puVar13 = &uStack_138;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b428,puVar13,uVar14);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar16 = 0;
    puVar5 = auStack_118;
    uVar15 = uVar14;
    do {
      if ((&cStack_e9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106927064;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11094b478;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_11094b478,&uStack_1d8,uVar15);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar16 = 0;
    do {
      if ((&cStack_189)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar13);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  _objc_retain();
  puVar3 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar7 = puVar3;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010bfdace0();
  if ((((ulong)puVar4 & 1) == 0) && (puVar4 = puVar7, func_0x00010bfdc3e0(), (int)puVar4 == 0))
  goto LAB_1069274c0;
  puVar4 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar7;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar7;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar7;
      func_0x00010c241ea0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar7;
    func_0x00010c11dc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar6);
  func_0x00010c1863a0(puVar4);
  puVar10 = puVar1;
  func_0x00010c0fee00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar4);
LAB_1069274c0:
  _objc_release(puVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106926e34; end: 106927063;  */

void FUN_106926e34(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar13 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11094b428;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11094b428,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar5 = auStack_78;
    uVar13 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106927064;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a2c29;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_11094b478;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11094b478,&uStack_138,uVar13);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar14 = 0;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume(puVar3);
  _objc_retain();
  puVar1 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010bfdace0();
  if ((((ulong)puVar4 & 1) == 0) && (puVar4 = puVar6, func_0x00010bfdc3e0(), (int)puVar4 == 0))
  goto LAB_1069274c0;
  puVar4 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar7 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar9 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar10 = puVar6;
  func_0x00010bfdace0();
  if ((int)puVar10 == 0) {
    puVar10 = puVar6;
    func_0x00010bfdc3e0();
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar11 = puVar6;
      func_0x00010c241ea0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c204de0(puVar9);
      goto LAB_106927438;
    }
  }
  else {
    puVar10 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar11 = puVar6;
    func_0x00010c11dc40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c1e6620(puVar9);
LAB_106927438:
    _objc_release(puVar10);
  }
  func_0x00010c1ac580(puVar8);
  func_0x00010c1c73c0(puVar7);
  func_0x00010c1863a0(puVar4);
  puVar10 = puVar3;
  func_0x00010c0fee00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
LAB_1069274c0:
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106927064; end: 106927293;  */

void FUN_106927064(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a2c29;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11094b478;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094b478,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar11 = 0;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(puVar2);
  _objc_retain();
  puVar3 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfdace0();
  if ((((ulong)puVar4 & 1) == 0) && (puVar4 = puVar1, func_0x00010bfdc3e0(), (int)puVar4 == 0))
  goto LAB_1069274c0;
  puVar4 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar6 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar7 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar8 = puVar1;
  func_0x00010bfdace0();
  if ((int)puVar8 == 0) {
    puVar8 = puVar1;
    func_0x00010bfdc3e0();
    if ((int)puVar8 != 0) {
      puVar8 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar9 = puVar1;
      func_0x00010c241ea0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar8);
      _objc_release(puVar10);
      _objc_release(puVar9);
      func_0x00010c204de0(puVar7);
      goto LAB_106927438;
    }
  }
  else {
    puVar8 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar9 = puVar1;
    func_0x00010c11dc40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    func_0x00010c1e6620(puVar7);
LAB_106927438:
    _objc_release(puVar8);
  }
  func_0x00010c1ac580(puVar6);
  func_0x00010c1c73c0(puVar5);
  func_0x00010c1863a0(puVar4);
  puVar8 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_1069274c0:
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106927294; end: 10692780b;  */

void FUN_106927294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2378;
  func_0x00010bf4e860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdace0();
  if ((((ulong)puVar3 & 1) == 0) && (puVar3 = puVar2, func_0x00010bfdc3e0(), (int)puVar3 == 0))
  goto LAB_1069274c0;
  puVar3 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar4 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  puVar5 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  puVar6 = PTR_PTR_1126bc988;
  _objc_alloc_init(PTR_PTR_1126bc988);
  puVar7 = puVar2;
  func_0x00010bfdace0();
  if ((int)puVar7 == 0) {
    puVar7 = puVar2;
    func_0x00010bfdc3e0();
    if ((int)puVar7 != 0) {
      puVar7 = PTR_PTR_1126cf230;
      _objc_alloc_init(PTR_PTR_1126cf230);
      puVar8 = puVar2;
      func_0x00010c241ea0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c118940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(puVar7);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c204de0(puVar6);
      goto LAB_106927438;
    }
  }
  else {
    puVar7 = PTR_PTR_1126cf228;
    _objc_alloc_init(PTR_PTR_1126cf228);
    puVar8 = puVar2;
    func_0x00010c11dc40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c11dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6660(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c1e6620(puVar6);
LAB_106927438:
    _objc_release(puVar7);
  }
  func_0x00010c1ac580(puVar5);
  func_0x00010c1c73c0(puVar4);
  func_0x00010c1863a0(puVar3);
  uVar10 = param_1;
  func_0x00010c0fee00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_1069274c0:
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10692780c; end: 1069278fb;  */

void FUN_10692780c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c33a0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_11094b5f8);
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c0d3c80(uVar2);
  func_0x00010c206120(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126cf240;
  _objc_opt_new(PTR_PTR_1126cf240);
  func_0x00010c1d6840();
  _objc_release(param_2);
  func_0x00010c1eb0a0(puVar4);
  func_0x00010c205740(puVar4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1069278fc; end: 106927903;  */

void FUN_1069278fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23fe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapDoc_11266d9a8);
  return;
}



/* Entry: 106927904; end: 106927cc3;  */

void FUN_106927904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126ba668;
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  func_0x00010c205320();
  func_0x00010bf529e0();
  uVar2 = param_1;
  func_0x00010c131ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c245400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar9 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar10 = puVar9;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  ppuVar18 = &PTR___NSConcreteGlobalBlock_11094b638;
  uVar2 = param_2;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11094b638);
  _objc_release(param_2);
  puVar9 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release();
  FUN_106929d8c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = (undefined **)PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar12 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  func_0x00010bf21f60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar9;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b80();
  ppuVar16 = ppuVar11;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  uVar3 = param_3;
  func_0x000108606f6c();
  _objc_release(param_3);
  if ((int)uVar3 != 0) {
    puVar12 = PTR_PTR_1126be7b0;
    _objc_alloc_init(PTR_PTR_1126be7b0);
    func_0x00010c2ad920(ppuVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
  ppuVar11 = ppuVar16;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar16);
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(puVar10);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    _objc_retain(ppuVar18);
    ppuVar16 = ppuVar18;
    func_0x00010c240200(ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar18;
    func_0x00010c23fe00(ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
    ppuVar11 = ppuVar16;
    func_0x000107d6ae7c(ppuVar16,ppuVar17,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    _objc_release(ppuVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 106927cc4; end: 106927d53;  */

void FUN_106927cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c240200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x000107d6ae7c(uVar1,uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106927d54; end: 106927e57;  */

undefined1 FUN_106927d54(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106927e58; end: 106927e83;  */

void FUN_106927e58(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106927e84; end: 106928083;  */

void FUN_106927e84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106928084;
  uStack_70 = 0x106928094;
  uStack_68 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  uVar2 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0c1320(uVar2);
  _objc_release(uVar2);
  lVar1 = puStack_88[5];
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (*(int *)(puStack_a8 + 3) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = puStack_88[5];
    func_0x000108f139ec(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106928084; end: 10692809b;  */

void FUN_106928084(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10692809c; end: 1069281fb;  */

void FUN_10692809c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar7 != 0) {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0x11;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf0e700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000100bf119c();
  if (iVar1 == 0) {
    uVar6 = 0x11;
  }
  else {
    uVar6 = 0x1a;
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar6;
  return;
}



/* Entry: 1069281fc; end: 10692822f;  */

void FUN_1069281fc(long param_1,long param_2)

{
  if (param_2 == 1) {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x1a;
  }
  return;
}



/* Entry: 106928230; end: 106928293;  */

void FUN_106928230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x1e;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106928294; end: 1069282a7;  */

void FUN_106928294(void)

{
  return;
}



/* Entry: 1069282a8; end: 10692862b;  */

void FUN_1069282a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126be7c8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c212f20();
  _objc_release(param_1);
  uVar2 = param_2;
  func_0x00010c0d3c80(param_2);
  _objc_release(param_2);
  func_0x00010c16b820(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cf240;
  _objc_opt_new(PTR_PTR_1126cf240);
  func_0x00010c1d6840();
  _objc_release(param_5);
  func_0x00010c1eb260(puVar3);
  puVar4 = PTR_PTR_1126cf248;
  _objc_opt_new(PTR_PTR_1126cf248);
  func_0x00010c1eb060();
  func_0x00010c25b820(param_4);
  func_0x00010c20de40(puVar4);
  func_0x00010c205180(puVar3);
  func_0x00010c205740(puVar3);
  puVar5 = puVar3;
  func_0x0001069274f0(puVar3,param_4,0x22,0,0,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10692862c; end: 106928793;  */

void FUN_10692862c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0c5900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107d6b30c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbda0;
  _objc_opt_new(PTR_PTR_1126cbda0);
  func_0x00010c20a7e0();
  puVar3 = PTR_PTR_1126cbd98;
  _objc_opt_new(PTR_PTR_1126cbd98);
  func_0x00010c188200();
  puVar4 = PTR_PTR_1126cf240;
  _objc_opt_new(PTR_PTR_1126cf240);
  func_0x00010c1d6840();
  _objc_release(param_3);
  func_0x00010c1eb240(puVar4);
  func_0x00010c205740(puVar4);
  puVar5 = puVar4;
  func_0x0001069274f0(puVar4,param_2,2,1,param_1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106928794; end: 1069288ab;  */

void FUN_106928794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cbd98;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c194460();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cf240;
  _objc_opt_new(PTR_PTR_1126cf240);
  func_0x00010c1d6840();
  _objc_release(param_3);
  func_0x00010c1eb240(puVar2);
  func_0x00010c205740(puVar2);
  puVar3 = puVar2;
  func_0x0001069274f0(puVar2,param_2,1,1,0,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069288ac; end: 1069289fb;  */

void FUN_1069288ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_10692780c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = puVar2;
  uVar4 = param_4;
  uVar5 = param_5;
  FUN_106927904(puVar2,puVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(uVar5);
    _objc_retain(puVar2);
    puVar1 = puVar2;
    FUN_10692780c(puVar2,uVar4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_106927904();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069289fc; end: 106928aa7;  */

void FUN_1069289fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_10692780c(param_1,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106927904();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106928aa8; end: 106929d8b;  */

void FUN_106928aa8(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  long lVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  
  puVar2 = PTR_PTR_1126cf250;
  lVar32 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar28 = param_1;
  func_0x00010c0c5900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar28;
  func_0x000107d6b30c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cdd20(puVar2);
  _objc_release(uVar27);
  _objc_release(uVar28);
  puVar3 = PTR_PTR_1126cf258;
  _objc_opt_new();
  func_0x00010c16ba00();
  puVar4 = PTR_PTR_1126cf240;
  _objc_opt_new();
  func_0x00010c1d6840();
  _objc_release(param_3);
  func_0x00010c1eb120(puVar4);
  func_0x00010c205740(puVar4);
  puVar5 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c205320();
  uVar28 = param_1;
  func_0x00010c0c5900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar27 = uVar28;
  func_0x000107d6ad3c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar27);
  _objc_release(uVar28);
  puVar7 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar8 = puVar7;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release();
  FUN_106929d8c();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar33 = puVar5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = 3;
  uVar31 = 1;
  puVar24 = puVar9;
  puVar13 = puVar6;
  puVar30 = puVar11;
  func_0x00010c002b80();
  puVar12 = puVar34;
  uVar28 = param_5;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar12;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar34);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar33);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar32) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126cf260;
  lVar32 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar30);
  _objc_retain(uVar31);
  _objc_retain(puVar13);
  _objc_retain(puVar24);
  _objc_retain(uVar27);
  _objc_retain(uVar28);
  _objc_retain(puVar2);
  _objc_opt_new();
  puVar4 = PTR_PTR_1126bc778;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  puVar6 = puVar5;
  func_0x00010bfe5d80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar4);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126bc778;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar27);
  puVar8 = puVar7;
  func_0x00010bfe5d80(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar6);
  _objc_release(puVar8);
  func_0x00010c1d6120(puVar3);
  func_0x00010c1a3ae0(puVar3);
  puVar8 = PTR_PTR_1126be7c8;
  _objc_opt_new();
  func_0x00010c212f20();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cf248;
  _objc_opt_new();
  func_0x00010c1eb060();
  func_0x00010c25b820(puVar24);
  func_0x00010c20de40(puVar2);
  puVar34 = PTR_PTR_1126cf240;
  _objc_opt_new();
  func_0x00010c1eb260();
  func_0x00010c1d6840(puVar34);
  _objc_release(puVar13);
  func_0x00010c205740(puVar34);
  func_0x00010c1a3b00(puVar34);
  func_0x00010c205180(puVar34);
  _objc_retain(puVar34);
  _objc_retain(puVar24);
  _objc_retain(0);
  _objc_retain(puVar30);
  _objc_retain();
  _objc_retain(puVar3);
  puVar33 = puVar34;
  func_0x00010c0ed980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar33 != (undefined *)0x0) {
    puVar33 = puVar34;
    func_0x00010c0ed980(puVar34);
    _objc_retainAutoreleasedReturnValue();
    param_2 = puVar24;
    FUN_106927294();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6840(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar33);
  }
  puVar33 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c205320();
  puVar9 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar10 = puVar9;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar31);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release(puVar30);
  puVar11 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c1a3b00();
  _objc_release(puVar3);
  puVar12 = PTR_PTR_1126be6f0;
  _objc_opt_new();
  puVar13 = PTR_PTR_1126cf238;
  _objc_opt_new();
  puVar35 = puVar12;
  func_0x00010bf9e2e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a3ac0();
  _objc_release(puVar35);
  _objc_release();
  FUN_106929d8c();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar15 = puVar33;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar9;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar11;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = 3;
  puVar29 = puVar16;
  puVar23 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c002b80();
  puVar20 = puVar12;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar14;
  func_0x00010c2adc40();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  puVar25 = puVar13;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar22;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar14);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar10);
  _objc_release(puVar33);
  _objc_release(0);
  _objc_release(puVar24);
  _objc_release(puVar34);
  _objc_release(puVar30);
  _objc_release(uVar31);
  _objc_release(puVar24);
  _objc_release(puVar34);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar32) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar32 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126cf268;
  _objc_retain(puVar23);
  _objc_retain(puVar29);
  _objc_retain(uVar28);
  _objc_retain(puVar25);
  _objc_opt_new();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    func_0x00010c0b4ca0(param_2);
    func_0x00010c1adf00(puVar2);
  }
  else {
    func_0x00010c194460(puVar2);
  }
  puVar6 = PTR_PTR_1126cf270;
  _objc_opt_new();
  func_0x00010c1e7b60();
  puVar7 = PTR_PTR_1126cf240;
  _objc_opt_new();
  func_0x00010c1eb1e0();
  func_0x00010c1d6840(puVar7);
  _objc_release(uVar28);
  func_0x00010c205740(puVar7);
  puVar8 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c205320();
  puVar4 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar34 = puVar4;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  _objc_release(puVar4);
  puVar33 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release();
  FUN_106929d8c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2378;
  puVar5 = puVar25;
  func_0x00010bf4e860(puVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010c2429a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25ad40();
  _objc_release(puVar9);
  _objc_release(puVar5);
  puVar9 = puVar25;
  func_0x00010c25b820();
  puVar11 = puVar25;
  func_0x00010853a0e0();
  _objc_release(puVar25);
  puVar5 = PTR_PTR_1126be6d0;
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c78e8;
  if (((uint)puVar10 & ((uint)((int)puVar9 == 1) | (uint)puVar11)) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_alloc();
  puVar9 = puVar8;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar34;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar33;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = 3;
  puVar30 = puVar10;
  func_0x00010c002b80();
  puVar24 = puVar5;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar24;
  ppuVar26 = ppuVar1;
  func_0x00010c2b3e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar35 = puVar13;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar24);
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar23);
  _objc_release(puVar33);
  _objc_release(puVar34);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar32) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar32 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar30);
  puVar2 = PTR_PTR_1126ba668;
  if (puVar3 == (undefined *)0x0) {
    puVar35 = (undefined *)0x0;
  }
  else {
    _objc_retain(uVar28);
    _objc_retain(ppuVar26);
    _objc_opt_new();
    func_0x00010c185940();
    puVar4 = PTR_PTR_1126cf278;
    _objc_opt_new();
    func_0x00010c1d6840();
    _objc_release(ppuVar26);
    func_0x00010c205740(puVar4);
    puVar5 = puVar2;
    func_0x00010bf676a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d8e0();
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar7 = puVar6;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar28);
    _objc_release(puVar6);
    _objc_retain(puVar3);
    puVar6 = puVar3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar8;
    func_0x00010bf96ee0();
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar34 == 3) {
      puVar33 = puVar8;
      func_0x00010bf61ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar34 = (undefined *)0x0;
LAB_106929a48:
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
    else {
      puVar34 = puVar8;
      func_0x00010bf96ee0();
      _objc_release(puVar8);
      _objc_release(puVar6);
      if ((int)puVar34 == 2) {
        puVar6 = puVar3;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar34 = puVar8;
        func_0x00010bf1c2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar33 = (undefined *)0x0;
        goto LAB_106929a48;
      }
      puVar34 = (undefined *)0x0;
      puVar33 = (undefined *)0x0;
    }
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if ((puVar33 != (undefined *)0x0 || puVar34 != (undefined *)0x0) &&
       ((puVar33 == (undefined *)0x0 ||
        (puVar8 = puVar33, func_0x00010bfd8f20(), puVar6 = PTR____NSArray0__struct_11034ab48,
        ((ulong)puVar8 & 1) == 0)))) {
      if (puVar34 == (undefined *)0x0) {
LAB_106929c9c:
        puVar6 = puVar3;
        func_0x00010c0840e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf15da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar8 = PTR_PTR_1126c3108;
        _objc_alloc();
        puVar6 = puVar3;
        func_0x00010bf63640(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02df60();
        _objc_release(puVar6);
        puVar10 = puVar8;
        func_0x000107d6ae14();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar9);
      }
      else {
        puVar8 = puVar34;
        func_0x00010bfd61c0();
        puVar6 = PTR____NSArray0__struct_11034ab48;
        if ((int)puVar8 != 0) {
          puVar6 = puVar3;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010bf1c360();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bfd8f20();
          _objc_release(puVar8);
          _objc_release(puVar6);
          puVar6 = PTR____NSArray0__struct_11034ab48;
          if (((ulong)puVar9 & 1) == 0) goto LAB_106929c9c;
        }
      }
    }
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar3);
    puVar8 = PTR_PTR_1126be758;
    _objc_opt_new();
    puVar34 = puVar8;
    func_0x00010c205720();
    FUN_106929d8c();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar9 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b80();
    puVar12 = puVar33;
    func_0x00010c2b3ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar12;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar33);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar34);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar30);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar32) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126cf280;
    _objc_alloc(PTR_PTR_1126cf280);
    func_0x00010c04dde0();
    puVar35 = PTR_PTR_1126be958;
    _objc_alloc(PTR_PTR_1126be958);
    func_0x00010bff5300();
    _objc_release(puVar2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar35);
  return;
}



/* Entry: 106929d8c; end: 106929de7;  */

void FUN_106929d8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cf280;
  _objc_alloc(PTR_PTR_1126cf280);
  func_0x00010c04dde0();
  puVar2 = PTR_PTR_1126be958;
  _objc_alloc(PTR_PTR_1126be958);
  func_0x00010bff5300();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106929de8; end: 106929ee3; -[SCNativeStoryReplySender initWithCoreMessageSender:externalMediaPreparer:snapchatterPublicInfoFetcher:circumstanceEngine:] */

undefined1 *
FUN_106929de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f3da0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106929ee4; end: 10692a1f7; -[SCNativeStoryReplySender sendStoryReply:storySnap:conversationId:platformAnalytics:completion:] */

void FUN_106929ee4(long param_1,undefined1 *param_2,undefined *param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((((param_3 != (undefined *)0x0) && (param_4 != 0)) &&
      (lVar1 = param_5, func_0x00010c08fa60(), param_6 != 0)) && (lVar1 != 0)) {
    lVar1 = param_4;
    FUN_106927d54();
    if ((int)lVar1 == 0) {
      puVar7 = param_3;
      func_0x00010bea0600(param_1);
      goto LAB_10692a140;
    }
    lVar1 = param_4;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_78,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      param_2 = auStack_78;
      _objc_copyWeak(auStack_80);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      puVar7 = puVar5;
      func_0x00010c09d7c0(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar4);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_78);
      goto LAB_10692a140;
    }
  }
  param_2 = (undefined1 *)0xc;
  (**(code **)(param_7 + 0x10))(param_7);
LAB_10692a140:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar7 == (undefined *)0x0) && (param_2 != (undefined1 *)0x0)) {
    param_3 = param_3 + 0x48;
    _objc_loadWeakRetained(param_3);
    func_0x00010bea0600();
    _objc_release(param_3);
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x40) + 0x10))(*(long *)(param_3 + 0x40),0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10692a1f8; end: 10692a27b;  */

void FUN_10692a1f8(long param_1,long param_2,long param_3)

{
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (param_2 != 0)) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea0600();
    _objc_release(param_1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10692a27c; end: 10692aa73; -[SCNativeStoryReplySender _sendStoryReply:storySnap:recipientSnapchatter:conversationId:platformAnalytics:completion:] */

void FUN_10692a27c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar8 = param_4;
  func_0x000108534ba4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  FUN_106927e84(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0xc);
  }
  else {
    puVar2 = PTR_PTR_1126be788;
    _objc_opt_new();
    func_0x00010c1805c0();
    lVar3 = param_4;
    func_0x00010c15f2e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba720(puVar2);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bf5b080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df720(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_10692aa74;
    uStack_98 = 0x10692aa84;
    uStack_90 = 0;
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(param_7);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(param_7);
    _objc_retain(puVar2);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(param_7);
    _objc_retain(puVar2);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(puVar2);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(puVar2);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(param_7);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(param_7);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    _objc_retain(lVar8);
    _objc_retain(param_7);
    _objc_retain(puVar2);
    func_0x00010c0c0c80(param_3);
    if (puStack_b0[5] == 0) {
      (**(code **)(param_8 + 0x10))(param_8,0xc);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = param_6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c280(uVar5);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
    }
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(puVar2);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(puVar2);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(lVar8);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(lVar8);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 10692aa74; end: 10692aa8b;  */

void FUN_10692aa74(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10692aa8c; end: 10692ab4b;  */

void FUN_10692aa8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_106a361c8(0,param_2,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  FUN_1069282a8(uVar2,uVar1,param_3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10692ab4c; end: 10692ab97;  */

void FUN_10692ab4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000106928440(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10692ab98; end: 10692ad0b;  */

void FUN_10692ab98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0c5900(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c294d60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a360(uVar8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar8);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = param_2;
  FUN_10692862c(param_2,uVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  lVar4 = *(long *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  FUN_106928794(uVar1,*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28),
                *(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 8);
  uVar7 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10692ad0c; end: 10692ad57;  */

void FUN_10692ad0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_106928794(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10692ad58; end: 10692ae63;  */

void FUN_10692ad58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79660(uVar14);
  _objc_release(puVar1);
  _objc_release(uVar12);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar14 = param_2;
  FUN_1069288ac(param_2,lVar5,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  lVar2 = *(long *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = uVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar5);
  lVar9 = lVar5;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar5);
      }
      uVar14 = *(undefined8 *)(lVar2 + 0x20);
      uVar12 = *(undefined8 *)(lVar2 + 0x28);
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be79660(uVar14);
      _objc_release(puVar1);
      _objc_release(uVar12);
      lVar15 = lVar15 + 1;
    } while (lVar9 != lVar15);
    lVar9 = lVar5;
    func_0x00010bf52a60();
  }
  uVar14 = *(undefined8 *)(lVar2 + 0x38);
  lVar9 = lVar5;
  FUN_1069289fc(lVar5,uVar14,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28),
                *(undefined8 *)(lVar2 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(lVar2 + 0x50) + 8);
  uVar12 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = lVar9;
  _objc_release(uVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x10);
  _objc_retain(uVar14);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010c0c5900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a360(uVar13);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar13);
  uVar12 = *(undefined8 *)(lVar5 + 0x38);
  uVar3 = *(undefined8 *)(lVar5 + 0x40);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  uVar13 = uVar14;
  FUN_106928aa8(uVar14,uVar12,uVar3,uVar4,*(undefined8 *)(lVar5 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  lVar9 = *(long *)(*(long *)(lVar5 + 0x50) + 8);
  lVar5 = *(long *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = uVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b2378;
  uVar14 = *(undefined8 *)(lVar5 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(uVar12);
  func_0x00010bf4e860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  puVar6 = puVar1;
  func_0x00010bf43560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2429a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c25ad40();
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar14 = uVar12;
  func_0x000106928e10(uVar12,puVar8,uVar3,uVar4,*(undefined8 *)(lVar5 + 0x20),
                      *(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30),
                      *(undefined8 *)(lVar5 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  lVar5 = *(long *)(*(long *)(lVar5 + 0x40) + 8);
  uVar12 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar14;
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10692ae64; end: 10692aff7;  */

void FUN_10692ae64(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_2);
      }
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be79660(uVar12);
      _objc_release(puVar1);
      _objc_release(uVar9);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  lVar4 = param_2;
  FUN_1069289fc(param_2,uVar12,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(long *)(lVar10 + 0x28) = lVar4;
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
  _objc_retain(uVar12);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c0c5900();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a360(uVar11);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar11 = uVar12;
  FUN_106928aa8(uVar12,uVar9,uVar2,uVar3,*(undefined8 *)(param_2 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 8);
  lVar4 = *(long *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b2378;
  uVar12 = *(undefined8 *)(lVar4 + 0x20);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(uVar9);
  func_0x00010bf4e860(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar5 = puVar1;
  func_0x00010bf43560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2429a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25ad40();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar12 = uVar9;
  func_0x000106928e10(uVar9,puVar7,uVar2,uVar3,*(undefined8 *)(lVar4 + 0x20),
                      *(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),
                      *(undefined8 *)(lVar4 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 8);
  uVar9 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar12;
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10692aff8; end: 10692b29b;  */

void FUN_10692aff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0c5900();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a360(uVar11);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar11);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = param_2;
  FUN_106928aa8(param_2,uVar8,uVar1,uVar2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  lVar4 = *(long *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = uVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126b2378;
  uVar11 = *(undefined8 *)(lVar4 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar8);
  func_0x00010bf4e860(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar5 = puVar3;
  func_0x00010bf43560(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2429a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25ad40();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar11 = uVar8;
  func_0x000106928e10(uVar8,puVar7,uVar1,uVar2,*(undefined8 *)(lVar4 + 0x20),
                      *(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),
                      *(undefined8 *)(lVar4 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 8);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar11;
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10692b29c; end: 10692b2eb;  */

void FUN_10692b29c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000106929420(param_2,param_3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10692b2ec; end: 10692b3bb;  */

void FUN_10692b2ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x000106929838(param_2,uVar7,uVar2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  _objc_release(uVar7);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010beb4720();
  _objc_release(param_2);
  if (iVar4 != 0) {
    puVar6 = PTR_PTR_1126be7b0;
    _objc_alloc_init(PTR_PTR_1126be7b0);
    func_0x00010c1994c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 10692b3bc; end: 10692b51f; -[SCNativeStoryReplySender _prepareUploadForExternalMedia:trackingId:conversationIds:] */

void FUN_10692b3bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c240200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10a380(uVar5,param_2,uVar1,uVar2,uVar4,param_4,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10692b520; end: 10692b62f; -[SCNativeStoryReplySender _shouldMarkItemInstanceAsExternalContent:] */

undefined8 FUN_10692b520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96ee0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  if ((int)uVar2 == 3) {
    uVar4 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0ed1a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    if (((int)uVar3 == 4) || ((int)uVar3 == 2)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf1f440(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd79f8,0,0);
      goto LAB_10692b610;
    }
  }
  uVar4 = 0;
LAB_10692b610:
  _objc_release(param_3);
  return uVar4;
}


