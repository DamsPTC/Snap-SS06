/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f0c67c; end: 104f0c67f; -[SCMemoriesPreviewShareSheetExportImpl shareSheetDismissedWithShareDestination:] */

void FUN_104f0c67c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissShareSheet_11255e720);
  return;
}



/* Entry: 104f0c680; end: 104f0cafb; -[SCMemoriesPreviewShareSheetExportImpl _generateTextConfiguration] */

void FUN_104f0c680(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104f0cafc;
  uStack_60 = 0x104f0cb0c;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_104f0cafc;
  uStack_90 = 0x104f0cb0c;
  uStack_88 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_104f0cafc;
  uStack_c0 = 0x104f0cb0c;
  uStack_b8 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar1);
    puVar4 = puVar1;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfbf720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010beec820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010842d260(puVar6,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    func_0x00010c051840();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x40);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bfbf7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar2 = 0;
    _dispatch_semaphore_create();
    _objc_retain();
    func_0x00010c297260(puVar6);
    _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
    puVar1 = (undefined *)puStack_78[5];
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)(param_1 + 0x48);
      _objc_loadWeakRetained(puVar1);
      puVar4 = puVar1;
      func_0x00010c2946e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      puVar1 = *(undefined **)(param_1 + 0x40);
      func_0x00010c269d40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bfbf720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar4 = puVar5;
      func_0x00010beec820(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x00010842d260(puVar7,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b0800;
      _objc_alloc(PTR_PTR_1126b0800);
      func_0x00010c051840();
    }
    else {
      func_0x00010842d1cc();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b24a8;
      _objc_alloc(PTR_PTR_1126b24a8);
      uVar3 = puStack_d8[5];
      func_0x00010c094540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c024300(puVar7);
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126b0800;
      _objc_alloc(PTR_PTR_1126b0800);
      puVar5 = PTR_PTR_1126b24b0;
      _objc_alloc(PTR_PTR_1126b24b0);
      func_0x00010c027880();
      func_0x00010c051840(puVar4);
    }
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar2);
  }
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f0cafc; end: 104f0cb13;  */

void FUN_104f0cafc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f0cb14; end: 104f0cbfb;  */

void FUN_104f0cb14(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c097b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010c097b80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(long *)(lVar3 + 0x28) = lVar1;
      _objc_release(uVar2);
      lVar1 = param_2;
      func_0x00010c095760();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(long *)(lVar3 + 0x28) = lVar1;
      _objc_release(uVar2);
      lVar1 = param_2;
      func_0x00010c0922e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(long *)(lVar3 + 0x28) = lVar1;
      _objc_release(uVar2);
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f0cbfc; end: 104f0d1f7; -[SCMemoriesPreviewShareSheetExportImpl _generateShareableMediaWithExportPolicy:] */

void FUN_104f0cbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 *puStack_278;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x00010be52e80(param_1);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104f0cafc;
  uStack_88 = 0x104f0cb0c;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_80 = puVar1;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b24b8;
  if ((*(long *)(param_1 + 0x18) == 0) && ((*(byte *)(param_1 + 0x60) & 1) == 0)) {
    _objc_alloc(PTR_PTR_1126b24b8);
    func_0x00010c03b480(0x3f800000);
    func_0x00010befa120(puVar2);
  }
  else {
    _objc_alloc(PTR_PTR_1126b24b8);
    func_0x00010c03b480(0x40000000);
    func_0x00010befa120(puVar2);
  }
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126b24c0;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010bff0fa0();
  _objc_release(puVar1);
  _objc_initWeak(auStack_b0,puVar3);
  _objc_initWeak(auStack_b8,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104f0d1f8;
  puStack_d0 = &UNK_110854350;
  _objc_copyWeak(auStack_c8,auStack_b0);
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x00010c178040(puVar3);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_104f0d2cc;
  puStack_f8 = &UNK_110842e18;
  _objc_retain(puVar3);
  puStack_f0 = puVar3;
  func_0x0001000d76cc("APPSTORE",&puStack_110);
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_104f0cafc;
  uStack_120 = 0x104f0cb0c;
  uStack_118 = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = 0;
  puStack_138 = &uStack_140;
  _dispatch_semaphore_create();
  puVar5 = PTR_PTR_1126ae720;
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_104f0d2d4;
  puStack_150 = &UNK_11084ae38;
  _objc_copyWeak(auStack_148,auStack_b8);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_104f0d314;
  puStack_1a0 = &UNK_11085aa48;
  _objc_copyWeak(auStack_178,auStack_b8);
  puStack_188 = &uStack_a8;
  _objc_retain(puVar5);
  puStack_198 = puVar5;
  puStack_180 = &uStack_140;
  uStack_170 = uVar7;
  _objc_retain(uVar4);
  puStack_208 = puVar1;
  uStack_200 = 0xc2000000;
  uStack_1f8 = 0x104f0d408;
  puStack_1f0 = &UNK_11085aa78;
  uStack_190 = uVar4;
  _objc_copyWeak(auStack_1c8,auStack_b8);
  puStack_1d8 = &uStack_a8;
  _objc_retain(puVar5);
  puStack_1e8 = puVar5;
  puStack_1d0 = &uStack_140;
  uStack_1c0 = uVar7;
  _objc_retain(uVar4);
  puStack_238 = puVar1;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_104f0d530;
  puStack_220 = &UNK_11085aaa8;
  uStack_1e0 = uVar4;
  _objc_copyWeak(auStack_210,auStack_b8);
  _objc_retain(puVar3);
  puStack_268 = puVar1;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_104f0d574;
  puStack_250 = &UNK_11085aad8;
  puStack_218 = puVar3;
  _objc_copyWeak(auStack_240,auStack_b8);
  _objc_retain(uVar4);
  uStack_248 = uVar4;
  func_0x00010bece580(param_1);
  _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar6);
  puStack_2a0 = puVar1;
  uStack_298 = 0xc2000000;
  pcStack_290 = FUN_104f0d5dc;
  puStack_288 = &UNK_110851b50;
  _objc_retain(puVar3);
  puStack_280 = puVar3;
  _objc_copyWeak(auStack_270,auStack_b8);
  puStack_278 = &uStack_140;
  func_0x0001000d76cc("APPSTORE",&puStack_2a0);
  uVar7 = puStack_a0[5];
  _objc_retain(uVar7);
  _objc_destroyWeak(auStack_270);
  _objc_release(puStack_280);
  _objc_release(uStack_248);
  _objc_destroyWeak(auStack_240);
  _objc_release(puStack_218);
  _objc_destroyWeak(auStack_210);
  _objc_release(uStack_1e0);
  _objc_release(puStack_1e8);
  _objc_destroyWeak(auStack_1c8);
  _objc_release(uStack_190);
  _objc_release(puStack_198);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_148);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  _objc_release(puStack_f0);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 104f0d1f8; end: 104f0d29f;  */

void FUN_104f0d1f8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f0d2a0;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03620();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f0d2a0; end: 104f0d2cb;  */

void FUN_104f0d2a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe26c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f0d2cc; end: 104f0d2d3;  */

void FUN_104f0d2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_showProgressOverlay_11266bfc8);
  return;
}



/* Entry: 104f0d2d4; end: 104f0d313;  */

void FUN_104f0d2d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be201c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f0d314; end: 104f0d52f;  */

void FUN_104f0d314(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    puVar2 = PTR_PTR_1126b1c68;
    func_0x00010bfe94e0(PTR_PTR_1126b1c68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(lVar1 + 200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bef1820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar6;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f0d530; end: 104f0d573;  */

void FUN_104f0d530(float param_1,long param_2)

{
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdf85a0((double)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f0d574; end: 104f0d5db;  */

void FUN_104f0d574(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x70) = param_2;
    _objc_release(uVar2);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f0d5dc; end: 104f0d61f;  */

void FUN_104f0d5dc(long param_1)

{
  func_0x00010bfe26c0(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be53ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f0d620; end: 104f0d77b; -[SCMemoriesPreviewShareSheetExportImpl _transcodeGallerySnapWithExportPolicy:imageCompletion:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:] */

void FUN_104f0d620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_48,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104f0d77c;
  puStack_88 = &UNK_11085ab38;
  uStack_80 = param_1;
  uStack_78 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_70 = param_7;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_a0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104f0d77c; end: 104f0d883;  */

void FUN_104f0d77c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar1 + 0x18) == 0) && ((*(byte *)(lVar1 + 0x60) & 1) == 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x58);
    _objc_copyWeak(auStack_48,param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010bfe9420(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bece990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s__transcodeVideoSnapWithExportPol_112591408,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104f0d884; end: 104f0d963;  */

void FUN_104f0d884(long param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar1 != 0) {
    if (param_3 == (undefined *)0x0) {
      if (*(long *)(lVar1 + 0x10) == 0) {
        lVar3 = 0x28;
        puVar2 = param_2;
      }
      else {
        _objc_retainAutorelease(param_2);
        func_0x00010bdc1020();
        func_0x00010bfe9260(0x3ff0000000000000,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        lVar3 = 0x28;
        param_2 = puVar2;
      }
    }
    else {
      lVar3 = 0x20;
      puVar2 = param_3;
    }
    (**(code **)(*(long *)(param_1 + lVar3) + 0x10))(*(long *)(param_1 + lVar3),puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f0d964; end: 104f0d9db;  */

void FUN_104f0d964(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 104f0d9dc; end: 104f0dc17; -[SCMemoriesPreviewShareSheetExportImpl _transcodeVideoSnapWithExportPolicy:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:] */

void FUN_104f0d9dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  _objc_initWeak(auStack_80,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104f0dc18;
  puStack_a0 = &UNK_11085ab68;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retain(param_4);
  ppuVar2 = &puStack_b8;
  uStack_90 = param_4;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c0811c0();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(param_5);
    _objc_retain(ppuVar2);
    func_0x00010c29a0e0(uVar3);
    _objc_release(ppuVar2);
    uVar3 = param_5;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(param_5);
    _objc_retain(uVar3);
    _objc_retain(ppuVar2);
    func_0x00010c29a0e0(uVar4);
    _objc_release(ppuVar2);
    _objc_release(uVar3);
    _objc_release(param_5);
  }
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f0dc18; end: 104f0dcbf;  */

void FUN_104f0dc18(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_4);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f0dcc0; end: 104f0de6b;  */

void FUN_104f0dcc0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  func_0x00010c1e4740(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1585e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1585e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b7e0();
  uVar6 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar7 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uVar4 = 0x4086800000000000;
  if (iVar1 == 0) {
    uVar4 = uVar6;
  }
  uVar8 = 0x4094000000000000;
  if (iVar1 == 0) {
    uVar8 = uVar7;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  _objc_retain(param_2);
  func_0x00010c279e20(uVar4,uVar8,uVar6,uVar7,param_2);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 104f0de6c; end: 104f0de73;  */

void FUN_104f0de6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_assetURL_1125a07a0);
  return;
}



/* Entry: 104f0de74; end: 104f0decf;  */

void FUN_104f0de74(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c09e0e0(&uStack_50,param_2);
  }
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f0ded0; end: 104f0df8b;  */

void FUN_104f0ded0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfacf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f0df8c; end: 104f0df9b;  */

void FUN_104f0df8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104f0df98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,param_3,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104f0df9c; end: 104f0e05f;  */

void FUN_104f0df9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c1e4740(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar3 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _objc_retain(param_2);
  func_0x00010bfae7c0(uVar2,uVar3,param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104f0e060; end: 104f0e0cf;  */

void FUN_104f0e060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_4,*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f0e0d0; end: 104f0e187; -[SCMemoriesPreviewShareSheetExportImpl _showLowDiskErrorAlertIfNeeded] */

void FUN_104f0e0d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f0e188;
  puStack_48 = &UNK_110849200;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000107e003a4(uVar2,uVar1,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f0e188; end: 104f0e21b;  */

void FUN_104f0e188(long param_1,ulong param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  if ((param_2 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104f0e21c;
    puStack_30 = &UNK_1108434b0;
    _objc_copyWeak(auStack_28,param_1 + 0x20);
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104f0e21c; end: 104f0e247;  */

void FUN_104f0e21c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f0e248; end: 104f0e27b; -[SCMemoriesPreviewShareSheetExportImpl _logLowDiskSpaceError] */

void FUN_104f0e248(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f0e27c; end: 104f0e2c7; -[SCMemoriesPreviewShareSheetExportImpl _logExportStartWithSnapCount:] */

void FUN_104f0e27c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f0e2c8; end: 104f0e397; -[SCMemoriesPreviewShareSheetExportImpl _logGallerySnapShareWithItemProvider:] */

void FUN_104f0e2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5f400();
  func_0x00010bf9d0a0(uVar5,param_2,param_3,0,uVar2,uVar4,*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb8));
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104f0e398; end: 104f0e3fb; -[SCMemoriesPreviewShareSheetExportImpl _dismissShareSheet] */

void FUN_104f0e398(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c150700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c9420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f0e3fc; end: 104f0e4b7; -[SCMemoriesPreviewShareSheetExportImpl _debounceSetProgressWithProgressController:progress:] */

void FUN_104f0e3fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  double dStack_38;
  
  dVar1 = param_1;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  dVar1 = dVar1 - *(double *)(param_2 + 0x68);
  if (0.10000000149011612 < dVar1) {
    _CACurrentMediaTime();
    *(double *)(param_2 + 0x68) = dVar1;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104f0e4b8;
    puStack_48 = &UNK_110848c48;
    _objc_retain(param_4);
    uStack_40 = param_4;
    dStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104f0e4b8; end: 104f0e4db;  */

void FUN_104f0e4b8(long param_1)

{
  double dVar1;
  
  dVar1 = (double)NEON_fminnm(*(undefined8 *)(param_1 + 0x28),0x3feccccccccccccd);
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)dVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setProgress_animated__112656bd0,1);
  return;
}



/* Entry: 104f0e4dc; end: 104f0e5bb; -[SCMemoriesPreviewShareSheetExportImpl _dismissShareSheetFromCancelPreviewExport] */

void FUN_104f0e4dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0c8920(*(undefined8 *)(param_1 + 0xb0));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  FUN_104f0c410(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x000104f0c4a8(0,uVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfccc0(param_1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be03610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissShareSheet_11255e720);
  return;
}



/* Entry: 104f0e5bc; end: 104f0e6e3; -[SCMemoriesPreviewShareSheetExportImpl .cxx_destruct] */

void FUN_104f0e5bc(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f0e6e4; end: 104f0e757; -[SCMemoriesPreviewExportLoggingService initWithPreviewExportLogger:] */

undefined1 * FUN_104f0e6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4fe0;
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



/* Entry: 104f0e758; end: 104f0e75f; -[SCMemoriesPreviewExportLoggingService previewExportLogger] */

undefined8 FUN_104f0e758(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f0e760; end: 104f0e76b; -[SCMemoriesPreviewExportLoggingService .cxx_destruct] */

void FUN_104f0e760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f0e76c; end: 104f0ecef; -[SCMemoriesSnapPreviewEditEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0e76c(undefined **param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_1;
  FUN_104f0ecf0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined **)0x0) {
    lVar16 = 0;
  }
  else {
    lVar16 = (long)param_1 + (long)_DAT_112716dbc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar16;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  puVar5 = PTR_PTR_1126af4d0;
  ppuVar3 = ppuVar1;
  func_0x00010c241220(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined **)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = (undefined *)((long)param_1 + (long)_DAT_112716d9c);
    _objc_loadWeakRetained();
  }
  puVar4 = puVar17;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar4);
  _objc_release(puVar17);
  _objc_release(ppuVar3);
  lVar16 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar16;
  func_0x00010bfa7040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (puVar5 != (undefined *)0x0) {
    puVar17 = puVar5;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar17 != (undefined *)0x0) {
      puVar18 = PTR_PTR_1126b24c8;
      _objc_alloc();
      puStack_f8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_100 = ppuVar1;
      func_0x00010bfbb120();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == (undefined **)0x0) goto LAB_104f0ec9c;
      lStack_d0 = (long)param_1 + (long)_DAT_112716da4;
      _objc_loadWeakRetained();
      puVar17 = puVar18;
      while( true ) {
        lVar16 = lStack_d0;
        func_0x00010c0c84c0();
        _objc_retainAutoreleasedReturnValue();
        if (param_1 == (undefined **)0x0) {
          lStack_d8 = 0;
        }
        else {
          lStack_d8 = (long)param_1 + (long)_DAT_112716da0;
          _objc_loadWeakRetained();
        }
        lVar7 = lStack_d8;
        func_0x00010bf93a20();
        _objc_retainAutoreleasedReturnValue();
        if (param_1 == (undefined **)0x0) {
          lStack_e0 = 0;
        }
        else {
          lStack_e0 = (long)param_1 + (long)_DAT_112716da8;
          _objc_loadWeakRetained();
        }
        lVar8 = lStack_e0;
        func_0x00010bf4c240();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = param_1;
        func_0x000104f0ed14();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar3;
        func_0x00010c15a860();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = param_1;
        func_0x000104f0ed14();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar10;
        func_0x00010c0c57a0();
        _objc_retainAutoreleasedReturnValue();
        if (param_1 == (undefined **)0x0) {
          lVar19 = 0;
        }
        else {
          lVar19 = (long)param_1 + (long)_DAT_112716db4;
          _objc_loadWeakRetained();
        }
        lVar12 = lVar19;
        func_0x00010bfcdfa0();
        _objc_retainAutoreleasedReturnValue();
        if (param_1 == (undefined **)0x0) {
          lVar20 = 0;
        }
        else {
          lVar20 = (long)param_1 + (long)_DAT_112716db0;
          _objc_loadWeakRetained();
        }
        lVar13 = lVar20;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        if (param_1 == (undefined **)0x0) {
          lVar21 = 0;
        }
        else {
          lVar21 = (long)param_1 + (long)_DAT_112716dc0;
          _objc_loadWeakRetained();
        }
        lVar14 = lVar21;
        func_0x00010c23ffe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c017280();
        puVar18 = (undefined *)(long)_DAT_112716d88;
        uVar15 = *(undefined8 *)((long)param_1 + (long)puVar18);
        *(undefined **)((long)param_1 + (long)puVar18) = puVar17;
        _objc_release(uVar15);
        _objc_release(lVar14);
        _objc_release(lVar21);
        _objc_release(lVar13);
        _objc_release(lVar20);
        _objc_release(lVar12);
        _objc_release(lVar19);
        _objc_release(ppuVar11);
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
        _objc_release(ppuVar3);
        _objc_release(lVar8);
        _objc_release(lStack_e0);
        _objc_release(lVar7);
        _objc_release(lStack_d8);
        _objc_release(lVar16);
        _objc_release(lStack_d0);
        _objc_release(ppuStack_100);
        _objc_release(puStack_f8);
        _objc_initWeak(auStack_80,param_1);
        uVar15 = *(undefined8 *)((long)param_1 + (long)puVar18);
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_104f0ed38;
        puStack_a0 = &UNK_11085ad88;
        param_1 = &puStack_b8;
        _objc_copyWeak(auStack_88,auStack_80);
        _objc_retain(puVar5);
        puStack_98 = puVar5;
        _objc_retain(lVar6);
        lStack_90 = lVar6;
        func_0x00010c142c20(uVar15);
        _objc_release(lStack_90);
        _objc_release(puStack_98);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_80);
LAB_104f0ec30:
        _objc_release(lVar6);
        _objc_release(puVar5);
        _objc_release(lVar2);
        _objc_release(ppuVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
        ___stack_chk_fail();
LAB_104f0ec9c:
        lStack_d0 = 0;
        puVar17 = puVar18;
      }
      return;
    }
  }
  ppuVar3 = ppuVar1;
  func_0x00010c150700(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c9b00();
  _objc_release(ppuVar3);
  goto LAB_104f0ec30;
}



/* Entry: 104f0ecf0; end: 104f0ed37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0ecf0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716d94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f0ed38; end: 104f0f0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0ed38(long param_1,int param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uStack_d0;
  undefined *puStack_b0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar11 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar11 == 0) goto LAB_104f0ee34;
  if (param_2 == 0) {
    if (param_8 != 0) {
      lVar1 = lVar11 + _DAT_112716d94;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bfbb120();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107dffcbc();
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_104f0ee04;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar4 = lVar11;
    func_0x00010c110a60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puStack_b0 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puStack_b0 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar6 = lVar2;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      uStack_d0 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar7 = lVar11 + _DAT_112716d94;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bfbb120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10dc00(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar7);
    if (lVar6 != 0) {
      _objc_release(puVar12);
      _objc_release(uStack_d0);
    }
    if (lVar1 != 0) {
      _objc_release(puStack_b0);
    }
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(uVar10);
  }
  else {
LAB_104f0ee04:
    lVar1 = lVar11 + _DAT_112716d94;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c9b00();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_104f0ee34:
  _objc_release(lVar11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar9 = (long)_DAT_112716d8c;
    lVar11 = *(long *)(param_3 + lVar9);
    if (lVar11 == 0) {
      lVar11 = param_3 + _DAT_112716d90;
      _objc_loadWeakRetained();
      lVar1 = lVar11;
      func_0x00010c0c93c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf22420();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_3 + lVar9);
      *(long *)(param_3 + lVar9) = lVar4;
      _objc_release(uVar10);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar11);
      lVar11 = *(long *)(param_3 + lVar9);
    }
    _objc_retain(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
    return;
  }
  return;
}



/* Entry: 104f0f0d0; end: 104f0f18b; -[SCMemoriesSnapPreviewEditEntryPoint previewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0f0d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112716d8c;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    lVar5 = param_1 + _DAT_112716d90;
    _objc_loadWeakRetained();
    lVar1 = lVar5;
    func_0x00010c0c93c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf22420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 104f0f18c; end: 104f0f1d3; -[SCMemoriesSnapPreviewEditEntryPoint galleryPreviewControllerWillDismiss:] */

void FUN_104f0f18c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_104f0ecf0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c9b00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f0f1d4; end: 104f0f21b; -[SCMemoriesSnapPreviewEditEntryPoint galleryPreviewControllerDidDismiss:] */

void FUN_104f0f1d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_104f0ecf0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c9b00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f0f21c; end: 104f0f263; -[SCMemoriesSnapPreviewEditEntryPoint galleryPreviewControllerDidCancel:] */

void FUN_104f0f21c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_104f0ecf0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c9b00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f0f264; end: 104f0f2ab; -[SCMemoriesSnapPreviewEditEntryPoint galleryPreviewController:presentingViewController:didFailToLoadContent:] */

void FUN_104f0f264(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_104f0ecf0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c9b00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f0f2ac; end: 104f0f387; -[SCMemoriesSnapPreviewEditEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0f2ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112716dc0);
  _objc_destroyWeak(param_1 + _DAT_112716dbc);
  _objc_destroyWeak(param_1 + _DAT_112716d90);
  _objc_destroyWeak(param_1 + _DAT_112716db8);
  _objc_destroyWeak(param_1 + _DAT_112716db4);
  _objc_destroyWeak(param_1 + _DAT_112716db0);
  _objc_destroyWeak(param_1 + _DAT_112716dac);
  _objc_destroyWeak(param_1 + _DAT_112716da8);
  _objc_destroyWeak(param_1 + _DAT_112716da4);
  _objc_destroyWeak(param_1 + _DAT_112716da0);
  _objc_destroyWeak(param_1 + _DAT_112716d9c);
  _objc_destroyWeak(param_1 + _DAT_112716d98);
  _objc_destroyWeak(param_1 + _DAT_112716d94);
  _objc_storeStrong(param_1 + _DAT_112716d8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716d88,0);
  return;
}



/* Entry: 104f0f388; end: 104f0f503; -[SCMemoriesLogoutUserDataScrubber initWithCurrentUserId:docObjectContext:composerServices:circumstanceEngine:grapheneRegistry:userBlizzardLogger:] */

undefined1 *
FUN_104f0f388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e4fe8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b24d0;
    func_0x00010c22b6a0(PTR_PTR_1126b24d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9b40();
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f0f504; end: 104f0f5a3; +[SCMemoriesLogoutUserDataScrubber clearAllUserDataExceptUserId:composerServices:] */

void FUN_104f0f504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010bdc2600(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2268e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bddfdc0(param_1,param_2,puVar2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f0f5a4; end: 104f0f747; +[SCMemoriesLogoutUserDataScrubber clearLogoutUserDataWithCurrentUserId:expireDurationInDays:composerServices:grapheneRegistry:] */

void FUN_104f0f5a4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b24d8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c14ea80(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec17f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be782c0(param_1,param_2,param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddfdc0(param_1,param_2,uVar2,param_5);
  _objc_release(param_5);
  uVar3 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar4 = uVar3;
  func_0x00010c0c8b00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b24e0;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = puVar1;
  func_0x00010c0dff20(puVar1,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf529e0(uVar2);
  func_0x00010bf59dc0(puVar8,param_2,puVar6 != (undefined *)0x0,1 < uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar4,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f0f748; end: 104f0f7e3; +[SCMemoriesLogoutUserDataScrubber hasLogoutUserDataWithCurrentUserId:] */

undefined8 FUN_104f0f748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b24d8;
  _objc_retain(param_3);
  func_0x00010c14ea80(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec17f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be34140(param_1,param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 104f0f7e4; end: 104f0f823; +[SCMemoriesLogoutUserDataScrubber hasEnoughFreeDisk] */

bool FUN_104f0f7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_18;
  
  lStack_18 = 0;
  puVar1 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440(PTR_PTR_1126b24e8,param_2,&lStack_18);
  return (lStack_18 == 0 && (undefined *)0x7cffffff < puVar1) &&
         (lStack_18 != 0 || puVar1 != (undefined *)0x7d000000);
}



/* Entry: 104f0f824; end: 104f0fc0f; +[SCMemoriesLogoutUserDataScrubber updateDataLossStatusFromDocObjectContext:retainedUserHashSet:shouldReportMetrics:currentUserName:currentUserId:grapheneRegistry:userBlizzardLogger:] */

void FUN_104f0f824(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,int param_5,
                  long param_6,long param_7,ulong param_8,undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lStack_170;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    lVar2 = param_3;
    func_0x000108dfe4ec();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_retain(lVar3);
    lStack_170 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lStack_170 != 0) {
      do {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar11 = *(ulong *)(lVar9 * 8);
          uVar1 = uVar11;
          func_0x00010c2923e0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc2600(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          if (param_6 != 0 && param_7 != 0) {
            uVar1 = uVar11;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar1;
            func_0x00010c0720c0();
            if ((int)uVar5 != 0) {
              uVar5 = uVar11;
              func_0x00010c292e20();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c0720c0();
              _objc_release(uVar5);
              _objc_release(uVar1);
              if ((uVar6 & 1) != 0) goto LAB_104f0fa64;
              uVar1 = param_8;
              func_0x00010c269d40(param_8);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar1;
              func_0x00010c0c8b00();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR_PTR_1126b24e0;
              func_0x00010bf56380(PTR_PTR_1126b24e0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfec2a0(uVar5);
              _objc_release(puVar7);
              _objc_release(uVar5);
            }
            _objc_release(uVar1);
          }
LAB_104f0fa64:
          uVar1 = param_4;
          func_0x00010bf4b900();
          if ((uVar1 & 1) == 0) {
            if ((param_5 != 0) && (uVar1 = uVar11, func_0x00010c0f7960(), (int)uVar1 != 0)) {
              uVar1 = uVar11;
              func_0x00010c0f7960();
              uVar5 = uVar11;
              func_0x00010c0f7960(uVar11);
              uVar6 = uVar11;
              func_0x00010c292e20(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2923e0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              param_2 = 0;
              func_0x000108dfff54(1,0,0,uVar1 & 0xffffffff,uVar5 & 0xffffffff,uVar6,uVar11,param_9);
              _objc_release(uVar11);
              _objc_release(uVar6);
            }
            func_0x00010c0f8500(param_3);
          }
          _objc_release(puVar4);
          lVar9 = lVar9 + 1;
        } while (lStack_170 != lVar9);
        lStack_170 = lVar3;
        func_0x00010bf52a60();
      } while (lStack_170 != 0);
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108dfe64c(param_2,uVar10);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 104f0fc10; end: 104f0fc63;  */

void FUN_104f0fc10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108dfe64c(param_2,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f0fc64; end: 104f0fdc7; +[SCMemoriesLogoutUserDataScrubber _prepareExculdeUserHashSetWithCurrentUserId:expireDurationInDays:userHashDict:] */

void FUN_104f0fc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104f0fdc8;
  uStack_60 = 0x104f0fdd8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2268e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = puVar2;
  _objc_release(puVar1);
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_5);
  uVar3 = puStack_78[5];
  func_0x00010bf51e00(uVar3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f0fdc8; end: 104f0fddf;  */

void FUN_104f0fdc8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f0fde0; end: 104f0fe8b;  */

void FUN_104f0fde0(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010be40400();
    if ((uVar2 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f0fe8c; end: 104f0ff0f; +[SCMemoriesLogoutUserDataScrubber _clearAllUserDataExceptUserHashSet:composerServices:] */

void FUN_104f0fe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b24f0;
  _objc_retain(param_3);
  func_0x00010c295440(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b4e0(puVar1,param_2,param_3,param_4);
  _objc_release(param_4);
  func_0x00010bf3b200(PTR_PTR_1126b24d8,param_2,&PTR____CFConstantStringClassReference_110ec17f8,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f0ff10; end: 104f10047; +[SCMemoriesLogoutUserDataScrubber _isExpiredForFileDir:expireDurationInDays:] */

uint FUN_104f0ff10(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  undefined *puVar8;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = *(undefined **)PTR__NSURLContentModificationDateKey_11034aaf8;
  puStack_50 = puVar8;
  _objc_retain(param_4);
  uVar7 = 1;
  func_0x00010bf0a140(puVar2,param_3,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = 0;
  plVar6 = &lStack_58;
  uVar3 = param_4;
  puVar5 = puVar2;
  func_0x00010c13b4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar1 = lStack_58;
  _objc_release(puVar2);
  if (lVar1 == 0) {
    uVar4 = uVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    uVar7 = (uint)(param_1 < (double)param_5 * 24.0 * 60.0 * -60.0);
    _objc_release(uVar4);
    puVar5 = puVar8;
  }
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(plVar6);
  puVar2 = puVar5;
  func_0x00010bf529e0();
  if (puVar2 < (undefined *)0x2) {
    puVar2 = puVar5;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x1) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,plVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010bf4b900(puVar5,param_3,puVar2);
      uVar7 = (uint)puVar8 ^ 1;
      _objc_release(puVar2);
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 1;
  }
  _objc_release(plVar6);
  _objc_release(puVar5);
  return uVar7;
}



/* Entry: 104f10048; end: 104f100f7; +[SCMemoriesLogoutUserDataScrubber _hasLogoutUserDataForUserHash:currentUserId:] */

uint FUN_104f10048(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    uVar1 = param_3;
    func_0x00010bf529e0();
    if (uVar1 == 1) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf4b900(param_3,param_2,puVar2);
      uVar3 = (uint)uVar1 ^ 1;
      _objc_release(puVar2);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 104f100f8; end: 104f10103; -[SCMemoriesLogoutUserDataScrubber kindName] */

undefined ** FUN_104f100f8(void)

{
  return &PTR____CFConstantStringClassReference_110dbab78;
}



/* Entry: 104f10104; end: 104f103c3; -[SCMemoriesLogoutUserDataScrubber removeExpiredContentAsyncForReason:dispatchGroup:] */

void FUN_104f10104(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar1);
    if (param_1 <= 3600.0) goto LAB_104f1037c;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = puVar1;
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b24d8;
  func_0x00010c14ea80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b24f8;
  puVar3 = puVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be34140();
  _objc_release(puVar3);
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126b24f8;
    func_0x00010be782c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar3 = puVar2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 == (undefined *)0x0) {
LAB_104f10368:
      _objc_release(puVar3);
    }
    else {
      uVar8 = 0;
      lVar9 = *plStack_130;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(puVar3);
          }
          puVar5 = puVar1;
          func_0x00010bf4b900();
          uVar8 = (uint)puVar5 ^ 1 | uVar8;
          puVar10 = puVar10 + 1;
        } while (puVar4 != puVar10);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
      _objc_release(puVar3);
      if ((uVar8 & 1) != 0) {
        if (param_5 != 0) {
          _dispatch_group_enter(param_5);
        }
        uVar7 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_104f103c4;
        puStack_160 = &UNK_110848ba8;
        lStack_158 = param_2;
        _objc_retain(puVar1);
        puStack_150 = puVar1;
        _objc_retain(param_5);
        lStack_148 = param_5;
        func_0x00010007380c(uVar7,&puStack_178);
        _objc_release(uVar7);
        _objc_release(lStack_148);
        puVar3 = puStack_150;
        goto LAB_104f10368;
      }
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
LAB_104f1037c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b24e0;
  func_0x00010bf563a0(PTR_PTR_1126b24e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar7);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010bddfdc0(PTR_PTR_1126b24f8);
  func_0x00010c284ec0(PTR_PTR_1126b24f8);
  if (*(long *)(param_5 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)();
    return;
  }
  return;
}



/* Entry: 104f103c4; end: 104f104a7;  */

void FUN_104f103c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b24e0;
  func_0x00010bf563a0(PTR_PTR_1126b24e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bddfdc0(PTR_PTR_1126b24f8,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c284ec0(PTR_PTR_1126b24f8,param_2,*(undefined8 *)(lVar1 + 0x18),
                      *(undefined8 *)(param_1 + 0x28),1,0,0,*(undefined8 *)(lVar1 + 0x30),
                      *(undefined8 *)(lVar1 + 0x38));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)();
    return;
  }
  return;
}



/* Entry: 104f104a8; end: 104f104ab; -[SCMemoriesLogoutUserDataScrubber removeAllUserSessionDataAsync] */

void FUN_104f104a8(void)

{
  return;
}



/* Entry: 104f104ac; end: 104f104af; -[SCMemoriesLogoutUserDataScrubber handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_104f104ac(void)

{
  return;
}



/* Entry: 104f104b0; end: 104f104b7; -[SCMemoriesLogoutUserDataScrubber reportMetrics] */

undefined8 FUN_104f104b0(void)

{
  return 0;
}



/* Entry: 104f104b8; end: 104f10523; -[SCMemoriesLogoutUserDataScrubber .cxx_destruct] */

void FUN_104f104b8(long param_1)

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



/* Entry: 104f10524; end: 104f1063b; -[SCMemoriesLogoutUserDataScrubberEntryPoint begin] */

void FUN_104f10524(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  FUN_104f1063c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c073c40();
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar2;
    func_0x00010c073d80();
    uStack_40 = (undefined4)uVar1;
  }
  else {
    uStack_40 = 1;
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = 0xffffffffffff8000;
  func_0x0001000819a8(0xffffffffffff8000,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f10660;
  puStack_50 = &UNK_11085ae18;
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010007380c(uVar3,&puStack_68);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 104f1063c; end: 104f1065f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1063c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716de4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f10660; end: 104f1069b;  */

void FUN_104f10660(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddf480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f1069c; end: 104f106f7; -[SCMemoriesLogoutUserDataScrubberEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1069c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112716de0);
  *(undefined8 *)(param_1 + _DAT_112716de0) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e4ff0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f106f8; end: 104f107e7; -[SCMemoriesLogoutUserDataScrubberEntryPoint _cleanupAllFromLoginOrRegister:] */

void FUN_104f106f8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  FUN_104f107e8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067940();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_104f1063c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010be930c0(param_1,param_2,uVar3);
    func_0x00010be95560(param_1);
    func_0x00010bddf7e0(param_1,param_2,uVar3);
  }
  func_0x00010be97f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104f107e8; end: 104f1080b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f107e8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716dec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f1080c; end: 104f10aa7; -[SCMemoriesLogoutUserDataScrubberEntryPoint _cleanupLoggedoutUsersDataIfNeededAndUpdateDataLossStatusForCurrentUserId:] */

void FUN_104f1080c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b24f8;
  func_0x00010bfd6b80();
  puVar4 = PTR_PTR_1126b24f8;
  uStack_70 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar5 = param_1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2268e0(uStack_70,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b24f8;
    FUN_104f10aa8(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a900(puVar4,param_2,param_3,uVar5);
  }
  else {
    FUN_104f10aa8(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x000104f10acc(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b8a0(puVar4,param_2,param_3,0xf,uVar5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uStack_70 = puVar4;
  }
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b24f8;
  uVar5 = param_1;
  func_0x000104f10af0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x000104f10b14();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x000104f10acc(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104f10b38();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284ec0(puVar4,param_2,uVar3,uStack_70,1,uVar9,param_3,uVar11,uVar12);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f10aa8; end: 104f10b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f10aa8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716e04);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f10b5c; end: 104f10dc7; -[SCMemoriesLogoutUserDataScrubberEntryPoint _runLogoutUserDataScrubberIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f10b5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar14;
  long lVar15;
  
  puVar4 = PTR_PTR_1126b24f8;
  lVar1 = param_1;
  FUN_104f1063c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd8bc0(puVar4,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)puVar4 != 0) {
    puVar4 = PTR_PTR_1126b24f8;
    _objc_alloc();
    lVar1 = param_1;
    FUN_104f1063c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x000104f10af0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x000104f10aa8(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = param_1 + _DAT_112716dfc;
      _objc_loadWeakRetained(lVar15);
    }
    lVar9 = lVar15;
    func_0x00010bf398e0(lVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x000104f10acc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x000104f10b38(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0076a0(puVar4,param_2,lVar3,lVar7,lVar8,lVar9,lVar11,lVar13);
    uVar14 = *(undefined8 *)(param_1 + _DAT_112716de0);
    *(undefined **)(param_1 + _DAT_112716de0) = puVar4;
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104f10dc8; end: 104f10eb7; -[SCMemoriesLogoutUserDataScrubberEntryPoint _resetLastSyncTimeForUserId:] */

void FUN_104f10dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_104f107e8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f10eb8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c0f8520(uVar2,param_2,&puStack_60,0,0);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104f10eb8; end: 104f10f2f;  */

void FUN_104f10eb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2500;
  func_0x00010bfa70c0(PTR_PTR_1126b2500,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7da0();
    func_0x00010c1b7c00(puVar2,param_2,0);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f10f30; end: 104f11197; -[SCMemoriesLogoutUserDataScrubberEntryPoint _restoreDataLossMetricsV1] */

void FUN_104f10f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = param_1;
  FUN_104f107e8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b2500;
  uVar1 = param_1;
  FUN_104f1063c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70c0(puVar5,param_2,uVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (puVar5 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126af4d0;
    func_0x00010bfab280(PTR_PTR_1126af4d0,param_2,puVar5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126af4c0;
    func_0x00010bf52d40(PTR_PTR_1126af4c0,param_2,puVar5,0,uVar3);
    if (0 < (long)(puVar8 + (long)puVar7)) {
      uVar1 = param_1;
      func_0x000104f10b14(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2946e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108dcd194();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x000104f10b14(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010bf8d9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108dcd294();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(param_1);
      goto LAB_104f11160;
    }
  }
  func_0x000108dcd194(0);
  func_0x000108dcd294(0);
  puVar7 = (undefined *)0x0;
  puVar8 = (undefined *)0x0;
LAB_104f11160:
  func_0x000108dcd374(puVar7);
  func_0x000108dcd464(puVar8);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104f11198; end: 104f11233; -[SCMemoriesLogoutUserDataScrubberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f11198(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112716e04);
  _objc_destroyWeak(param_1 + _DAT_112716e00);
  _objc_destroyWeak(param_1 + _DAT_112716dfc);
  _objc_destroyWeak(param_1 + _DAT_112716df8);
  _objc_destroyWeak(param_1 + _DAT_112716df4);
  _objc_destroyWeak(param_1 + _DAT_112716df0);
  _objc_destroyWeak(param_1 + _DAT_112716dec);
  _objc_destroyWeak(param_1 + _DAT_112716de8);
  _objc_destroyWeak(param_1 + _DAT_112716de4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716de0,0);
  return;
}



/* Entry: 104f11234; end: 104f115d3; -[SCMemoriesPickerQuickPostActionHandler initWithMemoriesPreviewPresenterBuilder:memoriesDataObjectContext:memoriesCloudFS:encryptedContentManager:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:circumstanceEngine:galleryLogger:userTrackedLogger:previewControllerDelegate:previewWorkflowDelegate:uiViewControllerTransitioningDelegate:snapDocDownloadingService:quickPostConfiguration:] */

undefined8 *
FUN_104f11234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126e4ff8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_14);
    _objc_storeWeak(puVar1 + 0xf,param_15);
    _objc_storeWeak(puVar1 + 0x10,param_16);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
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



/* Entry: 104f115d4; end: 104f11897; -[SCMemoriesPickerQuickPostActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_104f115d4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar9 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar9 == 0) {
      uVar5 = 0;
      goto LAB_104f11864;
    }
    uVar9 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2510;
    _objc_opt_class(PTR_PTR_1126b2510);
    uVar7 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar6);
    uVar1 = uVar9;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar9);
    if (uVar1 != 0) {
      uVar1 = uVar9;
      func_0x00010bf97060(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdfec00(param_1);
      goto LAB_104f11848;
    }
    uVar9 = 0;
  }
  else {
    uVar9 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1c58;
    _objc_opt_class(PTR_PTR_1126b1c58);
    uVar7 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar6);
    uVar1 = uVar9;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar9);
    uVar9 = uVar1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar9 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 0x70;
      _objc_loadWeakRetained(lVar3);
      lVar4 = param_1 + 0x78;
      _objc_loadWeakRetained(lVar4);
      uVar5 = uVar2;
      func_0x00010bf22420();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      _objc_release(uVar8);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uVar2);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = param_1;
      func_0x00010bf4b2e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 0x80;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c2917c0(*(undefined8 *)(param_1 + 0x90));
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c131bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c0d36c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27c4a0();
      func_0x00010c10dc40(uVar8);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(lVar3);
LAB_104f11848:
      _objc_release(uVar1);
    }
  }
  _objc_release(uVar9);
  uVar5 = 1;
LAB_104f11864:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 104f11898; end: 104f1196f; -[SCMemoriesPickerQuickPostActionHandler _didPickEntry:] */

void FUN_104f11898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f11970; end: 104f11be3;  */

undefined8 *
FUN_104f11970(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
             undefined **param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined **unaff_x24;
  long lVar19;
  undefined **unaff_x26;
  long lVar20;
  double dVar21;
  undefined8 uStack_400;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *apuStack_1b8 [16];
  long lStack_138;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar9 = &puStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)(param_2 + 0x28);
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126af4d0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = puVar2[3];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar5 = *(long *)(param_2 + 0x20);
    func_0x000107da0750(lVar5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    uStack_78 = *(undefined8 *)(param_2 + 0x20);
    param_5 = (undefined **)0x1;
    ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[3];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = ppuVar17;
    func_0x000107da0820(ppuVar17,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104f11be4;
    puStack_a8 = &UNK_11085ae98;
    param_3 = (undefined8 *)(param_2 + 0x28);
    _objc_copyWeak(auStack_80);
    _objc_retain(puVar4);
    puStack_a0 = puVar4;
    _objc_retain(unaff_x24);
    ppuStack_98 = unaff_x24;
    _objc_retain(puVar6);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    puStack_90 = puVar6;
    _objc_retain(uVar3);
    uStack_88 = uVar3;
    func_0x00010c0f7fc0(ppuVar17);
    _objc_release(ppuVar17);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    _objc_release(ppuStack_98);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_80);
    _objc_release(unaff_x24);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    param_4 = ppuVar9;
    unaff_x26 = &puStack_c0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x26 + 0x40));
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2 + 8;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined8 *)0x0) {
    param_1 = 0.0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    ppuVar17 = (undefined **)puVar2[4];
    _objc_retain(ppuVar17);
    param_4 = &uStack_200;
    param_5 = apuStack_1b8;
    ppuVar9 = ppuVar17;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      lVar5 = *plStack_1f0;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if (*plStack_1f0 != lVar5) {
            _objc_enumerationMutation(ppuVar17);
          }
          lVar8 = *(long *)(lStack_1f8 + (long)unaff_x24 * 8);
          func_0x00010c0e0160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar8 == 0) {
            puVar14 = puVar7 + 0x13;
            _objc_loadWeakRetained();
            func_0x000108df9400();
            goto LAB_104f11e24;
          }
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar9 != unaff_x24);
        param_4 = &uStack_200;
        param_5 = apuStack_1b8;
        ppuVar9 = ppuVar17;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar17);
    ppuVar9 = (undefined **)puVar2[4];
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar9;
    func_0x00010b5fa088();
    func_0x000106e1d104();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    puVar14 = (undefined8 *)PTR_PTR_1126b24c8;
    _objc_alloc();
    puVar10 = puVar7 + 0x13;
    _objc_loadWeakRetained();
    uVar3 = puVar7[4];
    param_8 = 1;
    param_9 = (undefined8 *)0x0;
    param_7 = puVar10;
    func_0x00010c017280();
    _objc_release(puVar10);
    _CACurrentMediaTime();
    puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_238 = 0xc2000000;
    pcStack_230 = FUN_104f11e98;
    puStack_228 = &UNK_11085ae68;
    unaff_x24 = &puStack_240;
    param_3 = puVar2 + 8;
    _objc_copyWeak(auStack_210);
    uVar18 = puVar2[4];
    uStack_208 = uVar3;
    _objc_retain(uVar18);
    uVar3 = puVar2[7];
    uStack_220 = uVar18;
    _objc_retain(uVar3);
    param_5 = &puStack_240;
    param_4 = (undefined8 *)0x0;
    uStack_218 = uVar3;
    func_0x00010c142c20(puVar14);
    _objc_release(uStack_218);
    _objc_release(uStack_220);
    _objc_destroyWeak(auStack_210);
LAB_104f11e24:
    _objc_release(puVar14);
    _objc_release(ppuVar17);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 6);
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = puVar7 + 6;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    dVar21 = (double)puVar7[7];
    puVar11 = (undefined8 *)puVar2[0xb];
    func_0x00010c269d40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar10;
    func_0x000107d9fdf0((param_1 - dVar21) * 1000.0,2,puVar10,puVar2[0xc]);
    _objc_release(puVar10);
    _objc_release(puVar11);
    if (((ulong)param_3 & 1) == 0) {
      if (param_9 == (undefined8 *)0x0) {
        uVar18 = puVar2[1];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2 + 0xe;
        _objc_loadWeakRetained(puVar14);
        puVar10 = puVar2 + 0xf;
        _objc_loadWeakRetained(puVar10);
        uVar3 = uVar18;
        func_0x00010bf22420();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = puVar2[2];
        puVar2[2] = uVar3;
        _objc_release(uVar15);
        _objc_release(puVar10);
        _objc_release(puVar14);
        _objc_release(uVar18);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = puVar7[4];
        _objc_retain(lVar20);
        lVar8 = lVar20;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar8 != 0) {
          lVar19 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar20);
            }
            uVar18 = *(undefined8 *)(lVar19 * 8);
            uVar3 = uVar18;
            func_0x00010c241220(uVar18);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar3);
            if (puVar14 != (undefined8 *)0x0) {
              uVar3 = uVar18;
              func_0x00010c241220(uVar18);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(puVar14);
              _objc_release(uVar3);
            }
            uVar3 = uVar18;
            func_0x00010c241220(uVar18);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar3);
            if (ppuVar9 != (undefined **)0x0) {
              uVar3 = uVar18;
              func_0x00010c241220(uVar18);
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = param_5;
              func_0x00010c0e00e0(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar10);
              _objc_release(uVar18);
              _objc_release(ppuVar9);
              _objc_release(uVar3);
            }
            lVar19 = lVar19 + 1;
          } while (lVar8 != lVar19);
          lVar8 = lVar20;
          func_0x00010bf52a60();
        }
        _objc_release(lVar20);
        uVar18 = puVar7[4];
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = puVar7[4];
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = (undefined8 *)puVar7[5];
        uVar3 = uVar15;
        func_0x00010b5f9bfc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        lVar8 = puVar2[0x12];
        func_0x00010c2917c0();
        if (lVar8 == 0xf) {
          puVar12 = (undefined8 *)puVar7[4];
          func_0x00010bfb1920(puVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = puVar2[2];
          puVar13 = puVar12;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2 + 0x13;
          _objc_loadWeakRetained();
          func_0x00010c2917c0();
          uStack_400 = puVar2[0x12];
          func_0x00010c131bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = puVar2[0x12];
          func_0x00010c0d36c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27c4a0();
          func_0x00010c10db00(uVar16);
        }
        else {
          uVar16 = puVar2[2];
          puVar12 = (undefined8 *)puVar7[4];
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar10;
          func_0x00010bf51e00();
          puVar11 = puVar2 + 0x13;
          _objc_loadWeakRetained();
          puVar7 = puVar2 + 0x10;
          _objc_loadWeakRetained();
          func_0x00010c2917c0();
          uStack_400 = puVar2[0x12];
          func_0x00010c0d36c0();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = puVar2[0x12];
          func_0x00010c131bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27c4a0();
          func_0x00010c10dc00(uVar16);
        }
        _objc_release(uVar15);
        _objc_release(uStack_400);
        _objc_release(puVar7);
        _objc_release(puVar11);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(uVar3);
        _objc_release(uVar18);
        _objc_release(puVar10);
        _objc_release(puVar4);
      }
      else {
        puVar7 = param_9;
        func_0x00010bf3ec40();
        puVar4 = PTR_PTR_1126b2518;
        if (puVar7 == (undefined8 *)0xda) {
          puVar7 = puVar2 + 0x13;
          _objc_loadWeakRetained(puVar7);
          func_0x00010c23ab00(puVar4);
        }
        else {
          puVar7 = puVar2 + 0x13;
          _objc_loadWeakRetained(puVar7);
          puVar14 = param_9;
          func_0x000107dffcbc();
        }
        _objc_release(puVar7);
      }
    }
  }
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined8 *)(ulong)(puVar14 == (undefined8 *)0x0);
}



/* Entry: 104f11be4; end: 104f11e97;  */

undefined8 *
FUN_104f11be4(double param_1,long param_2,ulong param_3,undefined8 *param_4,undefined **param_5,
             undefined8 param_6,undefined8 *param_7,undefined8 param_8,ulong param_9)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined **unaff_x24;
  long lVar20;
  long lVar21;
  double dVar22;
  undefined8 uStack_340;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_f8 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)(param_2 + 0x40);
  _objc_loadWeakRetained();
  if (puVar2 != (undefined8 *)0x0) {
    param_1 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    ppuVar16 = *(undefined ***)(param_2 + 0x20);
    _objc_retain(ppuVar16);
    param_4 = &uStack_140;
    param_5 = apuStack_f8;
    ppuVar4 = ppuVar16;
    func_0x00010bf52a60();
    if (ppuVar4 != (undefined **)0x0) {
      lVar18 = *plStack_130;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if (*plStack_130 != lVar18) {
            _objc_enumerationMutation(ppuVar16);
          }
          lVar3 = *(long *)(lStack_138 + (long)unaff_x24 * 8);
          func_0x00010c0e0160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 == 0) {
            puVar6 = puVar2 + 0x13;
            _objc_loadWeakRetained();
            func_0x000108df9400();
            goto LAB_104f11e24;
          }
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar4 != unaff_x24);
        param_4 = &uStack_140;
        param_5 = apuStack_f8;
        ppuVar4 = ppuVar16;
        func_0x00010bf52a60();
      } while (ppuVar4 != (undefined **)0x0);
    }
    _objc_release(ppuVar16);
    ppuVar4 = *(undefined ***)(param_2 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar4;
    func_0x00010b5fa088();
    func_0x000106e1d104();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar6 = (undefined8 *)PTR_PTR_1126b24c8;
    _objc_alloc();
    puVar5 = puVar2 + 0x13;
    _objc_loadWeakRetained();
    uVar17 = puVar2[4];
    param_8 = 1;
    param_9 = 0;
    param_7 = puVar5;
    func_0x00010c017280();
    _objc_release(puVar5);
    _CACurrentMediaTime();
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_104f11e98;
    puStack_168 = &UNK_11085ae68;
    unaff_x24 = &puStack_180;
    param_3 = param_2 + 0x40;
    _objc_copyWeak(auStack_150);
    uVar19 = *(undefined8 *)(param_2 + 0x20);
    uStack_148 = uVar17;
    _objc_retain(uVar19);
    uVar17 = *(undefined8 *)(param_2 + 0x38);
    uStack_160 = uVar19;
    _objc_retain(uVar17);
    param_5 = &puStack_180;
    param_4 = (undefined8 *)0x0;
    uStack_158 = uVar17;
    func_0x00010c142c20(puVar6);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_destroyWeak(auStack_150);
LAB_104f11e24:
    _objc_release(puVar6);
    _objc_release(ppuVar16);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 6);
  __Unwind_Resume();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar6 = puVar2 + 6;
  _objc_loadWeakRetained();
  if (puVar6 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    dVar22 = (double)puVar2[7];
    uVar7 = puVar6[0xb];
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x000107d9fdf0((param_1 - dVar22) * 1000.0,2,uVar8,puVar6[0xc]);
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((param_3 & 1) == 0) {
      if (param_9 == 0) {
        uVar19 = puVar6[1];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6 + 0xe;
        _objc_loadWeakRetained(puVar5);
        puVar9 = puVar6 + 0xf;
        _objc_loadWeakRetained(puVar9);
        uVar17 = uVar19;
        func_0x00010bf22420();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = puVar6[2];
        puVar6[2] = uVar17;
        _objc_release(uVar14);
        _objc_release(puVar9);
        _objc_release(puVar5);
        _objc_release(uVar19);
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = puVar2[4];
        _objc_retain(lVar21);
        lVar3 = lVar21;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar20 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar21);
            }
            uVar19 = *(undefined8 *)(lVar20 * 8);
            uVar17 = uVar19;
            func_0x00010c241220(uVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar17);
            if (puVar9 != (undefined8 *)0x0) {
              uVar17 = uVar19;
              func_0x00010c241220(uVar19);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar10);
              _objc_release(puVar9);
              _objc_release(uVar17);
            }
            uVar17 = uVar19;
            func_0x00010c241220(uVar19);
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar17);
            if (ppuVar4 != (undefined **)0x0) {
              uVar17 = uVar19;
              func_0x00010c241220(uVar19);
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = param_5;
              func_0x00010c0e00e0(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar19);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5);
              _objc_release(uVar19);
              _objc_release(ppuVar4);
              _objc_release(uVar17);
            }
            lVar20 = lVar20 + 1;
          } while (lVar3 != lVar20);
          lVar3 = lVar21;
          func_0x00010bf52a60();
        }
        _objc_release(lVar21);
        uVar19 = puVar2[4];
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = puVar2[4];
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = puVar2[5];
        uVar17 = uVar14;
        func_0x00010b5f9bfc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        lVar3 = puVar6[0x12];
        func_0x00010c2917c0();
        if (lVar3 == 0xf) {
          puVar11 = (undefined8 *)puVar2[4];
          func_0x00010bfb1920(puVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = puVar6[2];
          puVar12 = puVar11;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar6 + 0x13;
          _objc_loadWeakRetained();
          func_0x00010c2917c0();
          uStack_340 = puVar6[0x12];
          func_0x00010c131bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = puVar6[0x12];
          func_0x00010c0d36c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27c4a0();
          func_0x00010c10db00(uVar15);
        }
        else {
          uVar15 = puVar6[2];
          puVar11 = (undefined8 *)puVar2[4];
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar5;
          func_0x00010bf51e00();
          puVar9 = puVar6 + 0x13;
          _objc_loadWeakRetained();
          puVar2 = puVar6 + 0x10;
          _objc_loadWeakRetained();
          func_0x00010c2917c0();
          uStack_340 = puVar6[0x12];
          func_0x00010c0d36c0();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = puVar6[0x12];
          func_0x00010c131bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27c4a0();
          func_0x00010c10dc00(uVar15);
        }
        _objc_release(uVar14);
        _objc_release(uStack_340);
        _objc_release(puVar2);
        _objc_release(puVar9);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(uVar17);
        _objc_release(uVar19);
        _objc_release(puVar5);
        _objc_release(puVar10);
      }
      else {
        uVar8 = param_9;
        func_0x00010bf3ec40();
        puVar10 = PTR_PTR_1126b2518;
        if (uVar8 == 0xda) {
          puVar2 = puVar6 + 0x13;
          _objc_loadWeakRetained(puVar2);
          func_0x00010c23ab00(puVar10);
        }
        else {
          puVar2 = puVar6 + 0x13;
          _objc_loadWeakRetained(puVar2);
          uVar13 = param_9;
          func_0x000107dffcbc();
        }
        _objc_release(puVar2);
      }
    }
  }
  _objc_release(puVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined8 *)(ulong)(uVar13 == 0);
}



/* Entry: 104f11e98; end: 104f1253b;  */

ulong FUN_104f11e98(double param_1,long param_2,ulong param_3,ulong param_4,long param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined8 uStack_170;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    dVar20 = *(double *)(param_2 + 0x38);
    uVar2 = *(ulong *)(lVar1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x000107d9fdf0((param_1 - dVar20) * 1000.0,2,uVar3,*(undefined8 *)(lVar1 + 0x60));
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((param_3 & 1) == 0) {
      if (param_9 == 0) {
        uVar4 = *(undefined8 *)(lVar1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar1 + 0x70;
        _objc_loadWeakRetained(lVar10);
        lVar5 = lVar1 + 0x78;
        _objc_loadWeakRetained(lVar5);
        uVar6 = uVar4;
        func_0x00010bf22420();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(lVar1 + 0x10);
        *(undefined8 *)(lVar1 + 0x10) = uVar6;
        _objc_release(uVar16);
        _objc_release(lVar5);
        _objc_release(lVar10);
        _objc_release(uVar4);
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = *(long *)(param_2 + 0x20);
        _objc_retain(lVar19);
        lVar10 = lVar19;
        func_0x00010bf52a60();
        lVar5 = lRam0000000000000000;
        while (lVar10 != 0) {
          lVar18 = 0;
          do {
            if (lRam0000000000000000 != lVar5) {
              _objc_enumerationMutation(lVar19);
            }
            uVar4 = *(undefined8 *)(lVar18 * 8);
            uVar6 = uVar4;
            func_0x00010c241220(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar6);
            if (uVar14 != 0) {
              uVar6 = uVar4;
              func_0x00010c241220(uVar4);
              _objc_retainAutoreleasedReturnValue();
              uVar14 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar7);
              _objc_release(uVar14);
              _objc_release(uVar6);
            }
            uVar6 = uVar4;
            func_0x00010c241220(uVar4);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar6);
            if (lVar9 != 0) {
              uVar6 = uVar4;
              func_0x00010c241220(uVar4);
              _objc_retainAutoreleasedReturnValue();
              lVar9 = param_5;
              func_0x00010c0e00e0(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar8);
              _objc_release(uVar4);
              _objc_release(lVar9);
              _objc_release(uVar6);
            }
            lVar18 = lVar18 + 1;
          } while (lVar10 != lVar18);
          lVar10 = lVar19;
          func_0x00010bf52a60();
        }
        _objc_release(lVar19);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(ulong *)(param_2 + 0x28);
        uVar6 = uVar16;
        func_0x00010b5f9bfc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        lVar10 = *(long *)(lVar1 + 0x90);
        func_0x00010c2917c0();
        if (lVar10 == 0xf) {
          puVar11 = *(undefined **)(param_2 + 0x20);
          func_0x00010bfb1920(puVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = *(undefined8 *)(lVar1 + 0x10);
          puVar12 = puVar11;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar1 + 0x98;
          _objc_loadWeakRetained();
          func_0x00010c2917c0();
          uStack_170 = *(undefined8 *)(lVar1 + 0x90);
          func_0x00010c131bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = *(undefined8 *)(lVar1 + 0x90);
          func_0x00010c0d36c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27c4a0();
          func_0x00010c10db00(uVar17);
        }
        else {
          uVar17 = *(undefined8 *)(lVar1 + 0x10);
          puVar11 = *(undefined **)(param_2 + 0x20);
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar8;
          func_0x00010bf51e00();
          puVar13 = (undefined *)(lVar1 + 0x98);
          _objc_loadWeakRetained();
          lVar10 = lVar1 + 0x80;
          _objc_loadWeakRetained();
          func_0x00010c2917c0();
          uStack_170 = *(undefined8 *)(lVar1 + 0x90);
          func_0x00010c0d36c0();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = *(undefined8 *)(lVar1 + 0x90);
          func_0x00010c131bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27c4a0();
          func_0x00010c10dc00(uVar17);
        }
        _objc_release(uVar16);
        _objc_release(uStack_170);
        _objc_release(lVar10);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      else {
        uVar3 = param_9;
        func_0x00010bf3ec40();
        puVar7 = PTR_PTR_1126b2518;
        if (uVar3 == 0xda) {
          lVar10 = lVar1 + 0x98;
          _objc_loadWeakRetained(lVar10);
          func_0x00010c23ab00(puVar7);
        }
        else {
          lVar10 = lVar1 + 0x98;
          _objc_loadWeakRetained(lVar10);
          uVar14 = param_9;
          func_0x000107dffcbc();
        }
        _objc_release(lVar10);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(uVar14 == 0);
}



/* Entry: 104f1253c; end: 104f12573;  */

bool FUN_104f1253c(undefined8 param_1,long param_2)

{
  func_0x00010c23ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 104f12574; end: 104f1258b; -[SCMemoriesPickerQuickPostActionHandler containerViewController] */

void FUN_104f12574(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f1258c; end: 104f12597; -[SCMemoriesPickerQuickPostActionHandler setContainerViewController:] */

void FUN_104f1258c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 104f12598; end: 104f125af; -[SCMemoriesPickerQuickPostActionHandler workFlowDelegate] */

void FUN_104f12598(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f125b0; end: 104f125bb; -[SCMemoriesPickerQuickPostActionHandler setWorkFlowDelegate:] */

void FUN_104f125b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 104f125bc; end: 104f126af; -[SCMemoriesPickerQuickPostActionHandler .cxx_destruct] */

void FUN_104f125bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104f126b0; end: 104f12c63; -[SCMemoriesQuickPostEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f126b0(long param_1)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uStack_110;
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126b2520;
  _objc_alloc();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112716e64;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar21;
  func_0x00010c0c93c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_78 = 0;
    uStack_110 = 0;
    lVar22 = 0;
  }
  else {
    uStack_110 = *(undefined8 *)(param_1 + _DAT_112716e9c);
    _objc_retain();
    uStack_78 = param_1 + _DAT_112716e90;
    _objc_loadWeakRetained();
    lVar22 = param_1 + _DAT_112716e68;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar22;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112716e6c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar23;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112716e70;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar33;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112716e74;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar24;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_104f12c64();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c15a860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_104f12c64();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112716e7c;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar25;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112716e80;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar26;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112716e84;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar27;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112716e88;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar28;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000104f12c88();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112716e8c;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar29;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000104f12c88();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112716e94;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar30;
  func_0x00010c0c7640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_112716e98;
    _objc_loadWeakRetained();
  }
  func_0x00010c02ab20(puVar1);
  _objc_release(uStack_110);
  _objc_release(lVar35);
  _objc_release(lVar18);
  _objc_release(lVar30);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar29);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar28);
  _objc_release(lVar11);
  _objc_release(lVar27);
  _objc_release(lVar10);
  _objc_release(lVar26);
  _objc_release(lVar9);
  _objc_release(lVar25);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar24);
  _objc_release(lVar3);
  _objc_release(lVar33);
  _objc_release(lVar2);
  _objc_release(lVar23);
  _objc_release(lVar32);
  _objc_release(lVar22);
  _objc_release(uStack_78);
  _objc_release(lVar34);
  _objc_release(lVar21);
  puVar19 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar20 = PTR_PTR_1126b2528;
  _objc_alloc();
  lVar34 = (long)_DAT_112716e58;
  lVar21 = param_1 + lVar34;
  _objc_loadWeakRetained(lVar21);
  lVar22 = lVar21;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_112716e60;
    _objc_loadWeakRetained(lVar32);
  }
  lVar23 = lVar32;
  func_0x00010c0d79a0(lVar32);
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + lVar34;
  _objc_loadWeakRetained(lVar34);
  lVar2 = lVar34;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2917c0();
  func_0x00010c0408a0();
  lVar33 = (long)_DAT_112716e5c;
  uVar31 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar20;
  _objc_release(uVar31);
  _objc_release(lVar2);
  _objc_release(lVar34);
  _objc_release(lVar23);
  _objc_release(lVar32);
  _objc_release(lVar22);
  _objc_release(lVar21);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar33));
  _objc_release(puVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f12c64; end: 104f12cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f12c64(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716e78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f12cac; end: 104f12dab; -[SCMemoriesQuickPostEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f12cac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716e9c,0);
  _objc_destroyWeak(param_1 + _DAT_112716e98);
  _objc_destroyWeak(param_1 + _DAT_112716e94);
  _objc_destroyWeak(param_1 + _DAT_112716e90);
  _objc_destroyWeak(param_1 + _DAT_112716e8c);
  _objc_destroyWeak(param_1 + _DAT_112716e88);
  _objc_destroyWeak(param_1 + _DAT_112716e84);
  _objc_destroyWeak(param_1 + _DAT_112716e80);
  _objc_destroyWeak(param_1 + _DAT_112716e7c);
  _objc_destroyWeak(param_1 + _DAT_112716e78);
  _objc_destroyWeak(param_1 + _DAT_112716e74);
  _objc_destroyWeak(param_1 + _DAT_112716e70);
  _objc_destroyWeak(param_1 + _DAT_112716e6c);
  _objc_destroyWeak(param_1 + _DAT_112716e68);
  _objc_destroyWeak(param_1 + _DAT_112716e64);
  _objc_destroyWeak(param_1 + _DAT_112716e60);
  _objc_destroyWeak(param_1 + _DAT_112716e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716e5c,0);
  return;
}



/* Entry: 104f12dac; end: 104f1318b; -[SCMemoriesQuickPostRouteActionsImpl initWithMemoriesPreviewPresenterBuilder:memoriesPickerScopeExposer:memoriesPickerScopeServices:memoriesDataObjectContext:memoriesCloudFS:encryptedContentManager:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:circumstanceEngine:galleryLogger:userTrackedLogger:uiContainer:snapDocDownloadingService:quickPostConfiguration:memTwoTweaksProvider:memTwoPickerLauncher:] */

undefined8 *
FUN_104f12dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126e5000;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
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
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 104f1318c; end: 104f133e7; -[SCMemoriesQuickPostRouteActionsImpl presentMemoriesPickerWithDelegate:previewControllerDelegate:previewWorkflowDelegate:uiViewControllerTransitioningDelegate:] */

void FUN_104f1318c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_ffffffffffffff40;
  undefined2 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar16 = (undefined2)((ulong)in_stack_ffffffffffffff40 >> 0x30);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c233ba0(uVar4,param_2,0x12);
  if ((int)uVar4 == 0) {
    puVar5 = PTR_PTR_1126b1c60;
    _objc_alloc();
    lVar6 = *(long *)(param_1 + 0x80);
    func_0x00010c0c9280();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    if (lVar6 == 0) {
      func_0x000108dfda64();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x80);
    func_0x00010bf01380();
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x80);
    func_0x00010c231f60();
    uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x80);
    func_0x00010bf00fa0();
    func_0x00010c052c80(puVar5,param_2,lVar7,0,0,1,1,1,
                        CONCAT71((int7)(((ulong)CONCAT41(CONCAT31((int3)(CONCAT26(uVar16,
                                                  0x10000000000) >> 0x28),uVar3),uVar2) << 0x18) >>
                                       8),uVar1));
    if (lVar6 == 0) {
      _objc_release(lVar7);
    }
    _objc_release(lVar6);
    puVar8 = PTR_PTR_1126b2530;
    _objc_alloc(PTR_PTR_1126b2530);
    uVar15 = *(undefined8 *)(param_1 + 0x60);
    uVar14 = *(undefined8 *)(param_1 + 0x58);
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    uVar20 = *(undefined8 *)(param_1 + 0x80);
    uVar17 = param_4;
    uVar18 = param_5;
    uVar19 = param_6;
    func_0x00010c02ab00();
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
    uVar13 = *(undefined8 *)(param_1 + 0x70);
    puVar10 = PTR_PTR_1126aedf8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23840(uVar12,param_2,param_3,0,puVar9,puVar8,uVar13,puVar5,puVar10,
                        &PTR____CFConstantStringClassReference_110dbab98,uVar14,uVar15,uVar11,uVar17
                        ,uVar18,uVar19,uVar4,uVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar12);
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be7c6a0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f133e8; end: 104f136fb; -[SCMemoriesQuickPostRouteActionsImpl _presentMemTwoPickerWithDelegate:previewControllerDelegate:previewWorkflowDelegate:uiViewControllerTransitioningDelegate:] */

void FUN_104f133e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_138;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 0x80);
  func_0x00010c0c9280();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar2;
  if (lVar2 == 0) {
    func_0x000108dfda64();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
  }
  _objc_release(lVar2);
  _objc_initWeak(auStack_80,param_1);
  _objc_initWeak(auStack_88,param_3);
  _objc_initWeak(auStack_90,param_4);
  _objc_initWeak(auStack_98,param_5);
  _objc_initWeak(auStack_a0,param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf00fa0(*(undefined8 *)(param_1 + 0x80));
  func_0x00010bf01380(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c231f60(*(undefined8 *)(param_1 + 0x80));
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104f136fc;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,auStack_88);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_104f1376c;
  puStack_f0 = &UNK_11085aee8;
  _objc_copyWeak(auStack_e8,auStack_80);
  _objc_copyWeak(auStack_e0,auStack_90);
  _objc_copyWeak(auStack_d8,auStack_98);
  _objc_copyWeak(auStack_d0,auStack_a0);
  _objc_copyWeak(auStack_110,auStack_88);
  func_0x00010c10c700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lStack_138);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


