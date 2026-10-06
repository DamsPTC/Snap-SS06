/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f323a8; end: 106f323ff;  */

void FUN_106f323a8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  func_0x00010bf6e340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1972e0(param_1);
  _objc_release(param_2);
  func_0x00010c23c1a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f32400; end: 106f3257f;  */

void FUN_106f32400(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [56];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010c23c020(*(undefined8 *)(param_1 + 0x20));
  lVar2 = param_2;
  func_0x00010bf529e0();
  if ((param_3 == (undefined *)0x0) && (lVar2 != 0)) {
    param_3 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained();
    if (param_3 != (undefined *)0x0) {
      FUN_106f32580(auStack_98,param_1 + 0x68);
      func_0x00010be8e3c0(param_3);
    }
  }
  else {
    if (param_3 == (undefined *)0x0) {
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1972e0(uVar3);
    _objc_release(puVar1);
    func_0x00010c23c1a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f32580; end: 106f32617;  */

void FUN_106f32580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _objc_retain(uVar1);
  *param_1 = uVar1;
  uVar1 = param_2[1];
  _objc_retain(uVar1);
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  _objc_retain(uVar1);
  param_1[2] = uVar1;
  uVar1 = param_2[3];
  _objc_retain(uVar1);
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  _objc_retain(uVar1);
  param_1[4] = uVar1;
  uVar1 = param_2[5];
  _objc_retain(uVar1);
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  _objc_retain(uVar1);
  param_1[6] = uVar1;
  return;
}



/* Entry: 106f32618; end: 106f32713;  */

void FUN_106f32618(undefined8 *param_1)

{
  _objc_release(*param_1);
  _objc_release(param_1[1]);
  _objc_release(param_1[2]);
  _objc_release(param_1[3]);
  _objc_release(param_1[4]);
  _objc_release(param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[6]);
  return;
}



/* Entry: 106f32714; end: 106f32c7b; -[SCPluginEffectSnapRendererImplV2 _renderSnapDocInEditor:toResponse:destination:snapSource:renderCTItemInstances:inputMedias:renderLogger:plugins:outputSnapDocPersistedData:durationMs:renderingPath:] */

void FUN_106f32714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined1 auStack_248 [56];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [136];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar9 = param_3;
  func_0x00010bee9200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar1 = param_3;
  func_0x00010be37940(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c1ad520(param_11);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_initWeak(auStack_120,param_3);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_106f32c7c;
  puStack_130 = &UNK_1108434b0;
  _objc_copyWeak(auStack_128,auStack_120);
  func_0x00010c178000(param_6);
  puVar2 = PTR__OBJC_CLASS___NSProgress_1126b8028;
  func_0x00010bf529e0(param_9);
  func_0x00010c117b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d33e0;
  lVar3 = param_5;
  func_0x00010c23fe00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290600(param_3);
  func_0x00010c0da360(param_3);
  func_0x00010c0da340(param_3);
  func_0x00010bf6fc60(puVar4);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  _objc_retain(param_9);
  lVar3 = param_9;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_180;
    do {
      lVar8 = 0;
      puVar7 = puVar4;
      do {
        if (*plStack_180 != lVar6) {
          _objc_enumerationMutation(param_9);
        }
        uVar9 = *(undefined8 *)(lStack_188 + lVar8 * 8);
        puVar5 = PTR__OBJC_CLASS___NSProgress_1126b8028;
        func_0x00010c117b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7660(puVar2);
        puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_208 = 0xc2000000;
        pcStack_200 = FUN_106f32ce0;
        puStack_1f8 = &UNK_110983a58;
        uStack_1f0 = param_3;
        _objc_retain(param_5);
        lStack_1e8 = param_5;
        uStack_1e0 = uVar9;
        _objc_retain(param_11);
        uStack_1d8 = param_11;
        uStack_1b0 = param_14;
        uStack_1a8 = param_15;
        _objc_retain(param_12);
        uStack_1d0 = param_12;
        _objc_retain(param_6);
        uStack_1c8 = param_6;
        uStack_1a0 = param_7;
        uStack_198 = param_8;
        _objc_retain(puVar5);
        puStack_1c0 = puVar5;
        _objc_retain(puVar2);
        puVar4 = puVar7;
        puStack_1b8 = puVar2;
        func_0x00010bfb2660(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puStack_1b8);
        _objc_release(puStack_1c0);
        _objc_release(uStack_1c8);
        _objc_release(uStack_1d0);
        _objc_release(uStack_1d8);
        _objc_release(lStack_1e8);
        _objc_release(puVar5);
        lVar8 = lVar8 + 1;
        puVar7 = puVar4;
      } while (lVar3 != lVar8);
      lVar3 = param_9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_9);
  _objc_copyWeak(auStack_268,auStack_120);
  _objc_retain(param_11);
  _objc_retain(param_6);
  uStack_260 = param_7;
  uStack_250 = param_2;
  FUN_106f32580(auStack_248,param_13);
  func_0x00010c297260(puVar4);
  FUN_106f32618(auStack_248);
  _objc_release(param_6);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_268);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_120);
  FUN_106f32618(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  FUN_106f32618(auStack_248);
  _objc_destroyWeak(auStack_268);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_120);
  FUN_106f32618(param_13);
  __Unwind_Resume();
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if ((param_5 != 0) && (*(long *)(param_5 + 0x78) != 0)) {
    uVar9 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ee40();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_5 + 0x78);
    *(undefined8 *)(param_5 + 0x78) = 0;
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106f32c7c; end: 106f32cdf;  */

void FUN_106f32c7c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ee40();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f32ce0; end: 106f32e17;  */

void FUN_106f32ce0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar3);
  func_0x00010be8e3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f32e18; end: 106f32ef3;  */

void FUN_106f32e18(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  param_1 = param_1 * 100.0;
  uVar2 = 0;
  func_0x00010c17fae0(*(undefined8 *)(param_2 + 0x20),param_3,(long)param_1);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfb67a0(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c288d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)(double)CONCAT44(uVar2,param_1),uVar1,PTR_s_updateProgress__11267fd70);
  return;
}



/* Entry: 106f32ef4; end: 106f3319f;  */

void FUN_106f32ef4(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_190 [56];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == (undefined *)0x0) {
      lVar3 = param_2;
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        lVar3 = param_2;
        func_0x00010bfb1920(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0;
        uStack_98 = 0x3032000000;
        pcStack_90 = FUN_106f331a0;
        uStack_88 = 0x106f331b0;
        uStack_80 = 0;
        uStack_d8 = 0;
        uStack_c8 = 0x3032000000;
        pcStack_c0 = FUN_106f331a0;
        uStack_b8 = 0x106f331b0;
        uStack_b0 = 0;
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_f8 = FUN_106f331b8;
        puStack_f0 = &UNK_110983a88;
        uStack_100 = 0xc2000000;
        puStack_d0 = &uStack_d8;
        puStack_a0 = &uStack_a8;
        _objc_copyWeak(auStack_e0,param_1 + 0x30);
        puStack_158 = puVar2;
        uStack_150 = 0xc2000000;
        pcStack_148 = FUN_106f33230;
        puStack_140 = &UNK_110983ab8;
        puStack_e8 = &uStack_a8;
        _objc_copyWeak(auStack_128,param_1 + 0x30);
        uStack_120 = *(undefined8 *)(param_1 + 0x38);
        uStack_110 = *(undefined8 *)(param_1 + 0x48);
        uStack_118 = *(undefined8 *)(param_1 + 0x40);
        puStack_138 = &uStack_d8;
        puStack_130 = &uStack_a8;
        func_0x00010c0be4e0(lVar3);
        FUN_106f32580(auStack_190,param_1 + 0x50);
        func_0x00010bde3280(lVar1);
        _objc_destroyWeak(auStack_128);
        _objc_destroyWeak(auStack_e0);
        __Block_object_dispose(&uStack_d8,8);
        _objc_release(uStack_b0);
        __Block_object_dispose(&uStack_a8,8);
        _objc_release(uStack_80);
        _objc_release(lVar3);
        param_3 = (undefined *)0x0;
        goto LAB_106f330fc;
      }
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1972e0(uVar4);
    _objc_release(puVar2);
    func_0x00010c23c1a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
LAB_106f330fc:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f331a0; end: 106f331b7;  */

void FUN_106f331a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f331b8; end: 106f3322f;  */

void FUN_106f331b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bebcae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f33230; end: 106f332e7;  */

void FUN_106f33230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_3;
    _objc_release(uVar2);
    lVar4 = lVar1;
    func_0x00010bebcb20(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar4;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f332e8; end: 106f33363;  */

void FUN_106f332e8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 106f33364; end: 106f336ff; -[SCPluginEffectSnapRendererImplV2 _renderSnapDocInEditor:withCTItemInstance:medias:renderLogger:durationMs:renderingPath:plugins:response:destination:snapSource:progressHandler:] */

void FUN_106f33364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 in_stack_00000020;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(in_stack_00000020);
  lStack_70 = 0;
  uVar2 = param_1;
  func_0x00010be755e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_70;
  _objc_retain(lStack_70);
  if (lVar1 == 0) {
    uVar3 = param_4;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c096c60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfd84e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar6 != 0) {
      uVar3 = param_4;
      func_0x00010c0840e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c096c60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe5ea0();
      func_0x00010c0df7c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06d00(param_6);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    puVar7 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_initWeak(auStack_78,param_1);
    func_0x00010bdce6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(uVar2);
    _objc_retain(puVar7);
    func_0x00010c297260(param_1);
    _objc_release(param_1);
    puVar8 = puVar7;
    func_0x00010bfbc3e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar7);
  }
  else {
    FUN_106f323a8(param_6,lVar1);
    puVar8 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(in_stack_00000020);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106f33700; end: 106f337e7;  */

void FUN_106f33700(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 != 0) && (param_3 == 0)) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c115920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010befa120(*(undefined8 *)(lVar1 + 0x80));
      }
      _objc_release(lVar2);
    }
    func_0x00010bf3a100(*(undefined8 *)(param_1 + 0x20));
    _objc_retain(0);
    if (param_2 == 0) {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010bf43d60();
    }
    _objc_release(0);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f337e8; end: 106f33b33; -[SCPluginEffectSnapRendererImplV2 _applyPlugin:toMedias:snapDocEditor:renderLogger:durationMs:renderingPath:response:destination:snapSource:progressHandler:] */

void FUN_106f337e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  func_0x00010c23c100(param_6);
  uVar4 = param_1;
  func_0x00010be61880();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106f33b34;
  puStack_a8 = &UNK_110983b48;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  uStack_80 = param_7;
  _objc_retain(param_3);
  uStack_98 = param_3;
  uStack_90 = param_1;
  _objc_retain(param_4);
  uVar5 = uVar4;
  uStack_88 = param_4;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_c8,param_1);
  puStack_f0 = puVar3;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_f8,auStack_c8);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_e8 = param_7;
  _objc_retain(uVar4);
  uStack_e0 = param_8;
  _objc_retain(param_9);
  uStack_d8 = param_10;
  uStack_d0 = param_11;
  _objc_retain(param_12);
  func_0x00010c297260(uVar5);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uVar5);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f33b34; end: 106f33c87;  */

void FUN_106f33b34(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_release(lVar5);
  }
  else {
    lVar1 = param_2;
    func_0x00010c277e80();
    _objc_release(lVar5);
    if (lVar1 != 0) {
      lVar5 = param_2;
      func_0x00010c277e80(param_2);
      goto LAB_106f33bb0;
    }
  }
  lVar5 = 0;
LAB_106f33bb0:
  puVar2 = PTR_PTR_1126d3498;
  _objc_alloc(PTR_PTR_1126d3498);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23fe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c270d80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (param_2 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_68,param_2);
  }
  func_0x00010af1efc8(puVar2,uVar4,uVar6,lVar5,&uStack_68);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c277c00(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c109ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f33c88; end: 106f33dcb;  */

void FUN_106f33c88(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010c23c0e0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = param_2;
  func_0x00010bf1f3c0();
  _objc_release(param_2);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((uVar2 & 1) != 0) {
    if (param_3 == 0) {
      puVar1 = (undefined *)(param_1 + 0x60);
      _objc_loadWeakRetained();
      if (puVar1 != (undefined *)0x0) {
        func_0x00010be2e5e0(puVar1);
      }
      goto LAB_106f33d6c;
    }
    func_0x00010bf3ec40(param_3);
  }
  func_0x00010bf99260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x30));
LAB_106f33d6c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f33dcc; end: 106f341b3; -[SCPluginEffectSnapRendererImplV2 _handlePreparedPlugin:snapDocEditor:withMedias:renderLogger:durationMs:musicSelection:renderingPath:resultPromise:response:destination:snapSource:progressHandler:] */

void FUN_106f33dcc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  uVar1 = param_3;
  func_0x00010c0839a0();
  if ((uVar1 & 1) == 0) {
    if (param_9 == 2) {
      func_0x00010be8e640(param_1);
    }
    else {
      func_0x00010c23c200(param_6);
      uVar4 = param_1;
      func_0x00010be37940(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010be987c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23c1e0(param_6);
      func_0x00010be8e280(param_1);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  else {
    func_0x00010c23c200(param_6);
    uVar4 = param_1;
    func_0x00010beea7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be987c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23c1e0(param_6);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf17b60();
    _objc_release(puVar2);
    _objc_initWeak(auStack_70,param_1);
    puStack_98 = puVar3;
    _objc_retain(uVar5);
    _objc_retain(param_10);
    uStack_78 = param_9 == 2;
    _objc_copyWeak(auStack_a0,auStack_70);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_6);
    uStack_90 = param_7;
    _objc_retain(param_8);
    _objc_retain(param_11);
    uStack_88 = param_12;
    uStack_80 = param_13;
    _objc_retain(param_14);
    func_0x00010beea8a0(param_1);
    _objc_release(param_14);
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_a0);
    _objc_release(param_10);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f341b4; end: 106f3429f;  */

void FUN_106f341b4(long param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x90) == '\x01') {
      FUN_106f342a0(*(undefined8 *)(param_1 + 0x20));
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      func_0x00010be8e640();
    }
    else {
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      func_0x00010be8e280();
    }
    _objc_release(param_1);
  }
  else {
    FUN_106f342a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f342a0; end: 106f3439f;  */

void FUN_106f342a0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined1 *in_x5;
  undefined8 *puVar11;
  undefined **in_x6;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [56];
  undefined1 auStack_2e0 [16];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
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
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar8 = auStack_c8;
  lVar15 = param_1;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar13 = *plStack_100;
    do {
      lVar14 = 0;
      do {
        if (*plStack_100 != lVar13) {
          _objc_enumerationMutation(param_1);
        }
        lVar12 = *(long *)(lStack_108 + lVar14 * 8);
        lVar1 = lVar12;
        func_0x00010c1494c0();
        if (lVar1 != 0) {
          func_0x00010c1494c0(lVar12);
          _CFRelease();
        }
        lVar14 = lVar14 + 1;
      } while (lVar15 != lVar14);
      puVar8 = auStack_c8;
      lVar15 = param_1;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_260;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = in_x5;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  _objc_retain(in_x5);
  puVar2 = (undefined1 *)puVar6;
  func_0x00010bf529e0();
  if (puVar2 == (undefined1 *)0x0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110e8e6d8;
    uVar10 = 0x20;
    puVar16 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    func_0x00010bf43ca0(in_x5);
    goto LAB_106f346b4;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  _objc_retain(puVar6);
  puVar2 = (undefined1 *)puVar6;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar15 = *plStack_230;
    do {
      puVar18 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar15) {
          _objc_enumerationMutation(puVar6);
        }
        puVar16 = PTR_PTR_1126d3380;
        _objc_alloc(PTR_PTR_1126d3380);
        func_0x00010c041340();
        func_0x00010befa120(puVar3);
        _objc_release(puVar16);
        puVar18 = puVar18 + 1;
      } while (puVar2 != puVar18);
      puVar2 = (undefined1 *)puVar6;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar6);
  puStack_248 = (undefined *)0x0;
  uStack_258 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_260 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_250 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  in_x6 = &puStack_248;
  ppuVar9 = (undefined **)0x0;
  uVar10 = 0;
  puVar2 = puVar8;
  func_0x00010c115660();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puStack_248;
  _objc_retain(puStack_248);
  puVar18 = puVar2;
  func_0x00010c1494c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar18;
  func_0x00010c111a60();
  if (puVar4 == (undefined1 *)0x0) {
LAB_106f34590:
    if (puVar18 == (undefined1 *)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      func_0x00010c111a60(puVar18);
      _CMSampleBufferGetImageBuffer();
      puVar17 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe7b60();
      _objc_retainAutoreleasedReturnValue();
    }
    FUN_106f342a0(puVar6);
    if ((puVar17 == (undefined *)0x0) || (puVar16 != (undefined *)0x0)) {
      puVar5 = puVar16;
      if (puVar16 == (undefined *)0x0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e8e718;
        uVar10 = 7;
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar5;
      }
      goto LAB_106f3468c;
    }
    ppuVar9 = (undefined **)0x0;
    uVar10 = 0;
    puVar16 = PTR_PTR_1126d34a0;
    func_0x00010bfe9560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    func_0x00010bf43d60(in_x5);
    _objc_release(puVar16);
    puVar16 = (undefined *)0x0;
  }
  else {
    func_0x00010c111a60(puVar18);
    _CMSampleBufferGetImageBuffer();
    puVar5 = PTR_PTR_1126d33e0;
    func_0x00010bf19ba0();
    if ((int)puVar5 == 0) goto LAB_106f34590;
    ppuVar9 = &PTR____CFConstantStringClassReference_110e8e6f8;
    uVar10 = 0x1b;
    puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar17;
LAB_106f3468c:
    func_0x00010bf43ca0(in_x5);
  }
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar18 = (undefined1 *)puVar11;
LAB_106f346b4:
  _objc_release(puVar16);
  _objc_release(in_x5);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    _objc_retain(ppuVar9);
    _objc_retain(uVar10);
    _objc_retain(puVar18);
    puVar16 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar16);
    _objc_initWeak(auStack_2e0,puVar6);
    _objc_copyWeak(auStack_320,auStack_2e0);
    FUN_106f32580(auStack_318,in_x6);
    _objc_retain(uVar10);
    ppuVar7 = ppuVar9;
    func_0x00010bfb2660(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar18);
    _objc_retain(puVar5);
    func_0x00010c297260(ppuVar7);
    _objc_release(ppuVar7);
    _objc_release(puVar5);
    _objc_release(puVar18);
    _objc_release(uVar10);
    FUN_106f32618(auStack_318);
    _objc_destroyWeak(auStack_320);
    _objc_destroyWeak(auStack_2e0);
    FUN_106f32618(in_x6);
    _objc_release(puVar18);
    _objc_release(uVar10);
    _objc_release(ppuVar9);
    _objc_release(puVar5);
    return;
  }
  return;
}



/* Entry: 106f343a0; end: 106f3470b; -[SCPluginEffectSnapRendererImplV2 _renderImageWithSampleBuffers:withRenderPlugin:renderLogger:resultPromise:] */

void FUN_106f343a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined1 *param_6,undefined **param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [56];
  undefined1 auStack_1d0 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_150;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e8e6d8;
    uVar6 = 0x20;
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010bf43ca0(param_6);
    goto LAB_106f346b4;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puVar10 = PTR_PTR_1126d3380;
        _objc_alloc(PTR_PTR_1126d3380);
        func_0x00010c041340();
        func_0x00010befa120(puVar2);
        _objc_release(puVar10);
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  puStack_138 = (undefined *)0x0;
  uStack_148 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_150 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_140 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  param_7 = &puStack_138;
  ppuVar5 = (undefined **)0x0;
  uVar6 = 0;
  lVar1 = param_4;
  func_0x00010c115660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puStack_138;
  _objc_retain(puStack_138);
  lVar9 = lVar1;
  func_0x00010c1494c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010c111a60();
  if (lVar12 == 0) {
LAB_106f34590:
    if (lVar9 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      func_0x00010c111a60(lVar9);
      _CMSampleBufferGetImageBuffer();
      puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe7b60();
      _objc_retainAutoreleasedReturnValue();
    }
    FUN_106f342a0(param_3);
    if ((puVar11 == (undefined *)0x0) || (puVar10 != (undefined *)0x0)) {
      puVar3 = puVar10;
      if (puVar10 == (undefined *)0x0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e8e718;
        uVar6 = 7;
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
      }
      goto LAB_106f3468c;
    }
    ppuVar5 = (undefined **)0x0;
    uVar6 = 0;
    puVar10 = PTR_PTR_1126d34a0;
    func_0x00010bfe9560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010bf43d60(param_6);
    _objc_release(puVar10);
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010c111a60(lVar9);
    _CMSampleBufferGetImageBuffer();
    puVar3 = PTR_PTR_1126d33e0;
    func_0x00010bf19ba0();
    if ((int)puVar3 == 0) goto LAB_106f34590;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e8e6f8;
    uVar6 = 0x1b;
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
LAB_106f3468c:
    func_0x00010bf43ca0(param_6);
  }
  _objc_release(puVar11);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(puVar2);
  puVar7 = (undefined1 *)puVar8;
LAB_106f346b4:
  _objc_release(puVar10);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    _objc_retain(ppuVar5);
    _objc_retain(uVar6);
    _objc_retain(puVar7);
    puVar10 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar10);
    _objc_initWeak(auStack_1d0,param_3);
    _objc_copyWeak(auStack_210,auStack_1d0);
    FUN_106f32580(auStack_208,param_7);
    _objc_retain(uVar6);
    ppuVar4 = ppuVar5;
    func_0x00010bfb2660(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    _objc_retain(puVar3);
    func_0x00010c297260(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(uVar6);
    FUN_106f32618(auStack_208);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(auStack_1d0);
    FUN_106f32618(param_7);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(ppuVar5);
    _objc_release(puVar3);
    return;
  }
  return;
}



/* Entry: 106f3470c; end: 106f3490f; -[SCPluginEffectSnapRendererImplV2 _completeResponse:withSnapDocEditorFuture:staticOverlayFromPlugin:renderLogger:outputSnapDocPersistedData:] */

void FUN_106f3470c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  _objc_initWeak(auStack_80,param_1);
  _objc_copyWeak(auStack_c0,auStack_80);
  FUN_106f32580(auStack_b8,param_7);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfb2660(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  FUN_106f32618(auStack_b8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_80);
  FUN_106f32618(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f34910; end: 106f349b7;  */

void FUN_106f34910(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_68 [56];
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106f32580(auStack_68,param_1 + 0x30);
    puVar2 = puVar1;
    func_0x00010bdce680(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f349b8; end: 106f34a23;  */

void FUN_106f349b8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



/* Entry: 106f34a24; end: 106f34afb;  */

void FUN_106f34a24(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010c1ec660(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1972e0(uVar3);
  _objc_release(lVar2);
  func_0x00010c23c1a0(*(undefined8 *)(param_1 + 0x20));
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010bf43d00();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f34afc; end: 106f34e43; -[SCPluginEffectSnapRendererImplV2 _renderVideoWithMedias:snapDocEditor:withRenderPlugin:renderLogger:durationMs:musicSelection:resultPromise:response:destination:snapSource:progressHandler:] */

void FUN_106f34afc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puVar1 = PTR_PTR_1126d33c0;
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c055280();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd65e0(param_1);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c13cb40();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x106f34d6c;
  puStack_c8 = &UNK_110983c38;
  uStack_c0 = param_10;
  uStack_a0 = param_9;
  uStack_88 = param_11;
  uStack_80 = param_12;
  uStack_90 = param_13;
  uStack_b8 = param_1;
  uStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_98 = param_4;
  _objc_retain(param_13);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_10);
  ppuVar4 = &puStack_e0;
  func_0x00010c297260(puVar2);
  _objc_release(puVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_c0);
  _objc_release(param_13);
  _objc_release(param_4);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar4 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  uVar6 = *(undefined8 *)(puVar1 + 0x28);
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(puVar1 + 0x48);
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8e2e0(uVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106f34e44; end: 106f3506f; -[SCPluginEffectSnapRendererImplV2 _renderNgsmeSnap:withRenderPlugin:renderLogger:resultPromise:destination:snapSource:originalSnapDoc:progressHandler:] */

void FUN_106f34e44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_1;
  func_0x00010bece6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bece7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar1;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf17b60();
  _objc_release(puVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = puVar5;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c25f8e0(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f35070; end: 106f35213;  */

void FUN_106f35070(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x78);
    *(undefined8 *)(lVar3 + 0x78) = 0;
    _objc_release(uVar4);
    if ((param_3 == 0) || (param_4 != 0)) {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28),param_2,param_4);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      lStack_58 = 0;
      func_0x00010c130120(0x4090e00000000000,0x409e000000000000,uVar4,param_2,&lStack_58);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_58;
      _objc_retain(lStack_58);
      if (lVar1 == 0) {
        puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
        uVar6 = *(undefined8 *)(param_3 + 8);
        _objc_retain(uVar6);
        func_0x00010c057ae0(puVar2,param_2,uVar6,0);
        _objc_release(uVar6);
        puVar5 = PTR_PTR_1126d34a0;
        func_0x00010c29bda0(PTR_PTR_1126d34a0,param_2,puVar2,uVar4,0,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar2);
      }
      else {
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28),param_2,lVar1);
      }
      _objc_release(uVar4);
      _objc_release(lVar1);
    }
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f35214; end: 106f35657; -[SCPluginEffectSnapRendererImplV2 _transcodeInputWithNGSMESnap:destination:snapSource:originalSnapDoc:] */

void FUN_106f35214(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126d33e0;
  if (param_6 == 0) {
LAB_106f35284:
    func_0x00010c290600(param_3);
    func_0x00010c0da360(param_3);
    func_0x00010c0da340(param_3);
    func_0x00010bf6fc60(puVar2);
  }
  else {
    if (param_6 == 7) {
      uVar11 = *(undefined8 *)(param_3 + 0x60);
      func_0x000109128634();
      puVar2 = PTR_PTR_1126ae780;
      _objc_alloc_init(PTR_PTR_1126ae780);
      func_0x00010c2056c0();
      iVar1 = (int)*(undefined8 *)(param_3 + 0x60);
      func_0x00010c067f00();
      lVar13 = (long)iVar1;
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bf7a8;
      func_0x00010af219f8();
      _objc_retainAutoreleasedReturnValue();
      param_2 = 0x4094000000000000;
      param_1 = 0x4086800000000000;
      uVar10 = 7;
      uVar12 = 1;
      goto LAB_106f353a0;
    }
    if (param_6 == 6) goto LAB_106f35284;
    param_2 = 0x4094000000000000;
    param_1 = 0x4086800000000000;
  }
  uVar11 = 8000000;
  puVar2 = PTR_PTR_1126bf7a8;
  func_0x00010af219f8();
  _objc_retainAutoreleasedReturnValue();
  if ((param_6 == 6) || (param_6 == 0)) {
    uVar10 = 3;
  }
  else {
    uVar10 = 0;
  }
  lVar13 = 0;
  uVar12 = 6;
LAB_106f353a0:
  if (puVar2 == (undefined *)0x0) {
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
  }
  else {
    *(undefined8 *)(puVar2 + 8) = uVar10;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0x10) = uVar12;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0xa0) = 0;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0xa8) = 0;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0x98) = 0x3ff0000000000000;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(long *)(puVar2 + 0x70) = lVar13;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0xf8) = 1;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0x58) = 0xf;
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  func_0x00010af2244c(param_1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    *(undefined8 *)(puVar2 + 0x38) = uVar11;
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126bf7b0;
  func_0x00010af20be0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    *(undefined8 *)(puVar3 + 8) = param_7;
    _objc_retain(puVar3);
  }
  _objc_release(puVar3);
  puVar4 = puVar3;
  func_0x00010af20ce8(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af228f4(puVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar2 != (undefined *)0x0) {
    puVar2[0x132] = 1;
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  puVar4 = puVar2;
  func_0x00010af22938();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bf7b8;
  func_0x00010af206d8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010af207cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af20854();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = PTR_PTR_1126bf7c0;
  _objc_alloc(PTR_PTR_1126bf7c0);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af1fd14(puVar7,param_5,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c26b260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bdc2c60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bf7c8;
    _objc_alloc(PTR_PTR_1126bf7c8);
    func_0x00010af1ff64();
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f35658; end: 106f3573b; -[SCPluginEffectSnapRendererImplV2 _transcodeOutput] */

void FUN_106f35658(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c26b260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bdc2c60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bf7c8;
  _objc_alloc(PTR_PTR_1126bf7c8);
  func_0x00010af1ff64();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f3573c; end: 106f357fb; -[SCPluginEffectSnapRendererImplV2 _snapDocWithOutputImage:] */

void FUN_106f3573c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x000108eb5cc8(param_5,0x5a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3080;
  func_0x00010bf64b00(PTR_PTR_1126b3080);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_5);
  _objc_release(param_5);
  func_0x00010bebcac0(param_1,param_2,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106f357fc; end: 106f358e7; -[SCPluginEffectSnapRendererImplV2 _snapDocWithOutputVideoAsset:destination:outputResolution:] */

void FUN_106f357fc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar3 = param_1;
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b3080;
  lVar1 = param_5;
  func_0x00010bdc2b80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad3e0(puVar2,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_58,param_5);
  }
  _CMTimeGetSeconds(&uStack_58);
  func_0x00010bebcac0(param_1,param_2,dVar3 * 1000.0,param_3,param_4,puVar2,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106f358e8; end: 106f358ff; -[SCPluginEffectSnapRendererImplV2 _snapDocWithMediaInput:mediaType:dimensions:durationMs:] */

/* WARNING: Removing unreachable block (ram,0x000107e635a0) */

void FUN_106f358e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain();
  _objc_retain(0);
  puVar2 = PTR_PTR_1126ae560;
  _objc_retain(uVar1);
  _objc_retain(uVar6);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126b25c0;
  _objc_opt_new(PTR_PTR_1126b25c0);
  puVar4 = puVar3;
  func_0x00010c0fee00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179060();
  _objc_release(puVar4);
  uVar5 = uVar6;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010bef9c20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  func_0x00010c297260(uVar6);
  _objc_release(uVar1);
  puVar4 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f35900; end: 106f35dbf; -[SCPluginEffectSnapRendererImplV2 _applyPersistedData:staticOverlayFromPlugin:processingMetadataAppliers:toSnapDocEditor:] */

void FUN_106f35900(long param_1,undefined8 param_2,long *param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined1 auStack_1b8 [312];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar9 = param_3;
  FUN_106f32580(auStack_1b8);
  func_0x00010c28a040(param_6);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_5);
      }
      func_0x00010bf08780(*(undefined8 *)(lVar11 * 8));
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = *param_3;
  func_0x00010bf529e0();
  puVar6 = puVar1;
  if (lVar2 == 0) {
    if (param_4 == 0) {
      puVar6 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126affe8;
      func_0x00010bfccec0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c130fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_retain(puVar1);
      func_0x00010c297260(uVar5);
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(uVar5);
    }
  }
  else {
    lVar11 = *param_3;
    _objc_retain(lVar11);
    lVar2 = lVar11;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar11);
        }
        puVar4 = PTR_PTR_1126affe8;
        func_0x00010bfccec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa9a0(param_6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfbfe00(0x4090e00000000000,0x409e000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(puVar1);
    func_0x00010c297260(uVar5);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(uVar5);
  }
  _objc_release(puVar1);
  FUN_106f32618(auStack_1b8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  plVar7 = param_3;
  FUN_106f32618();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    FUN_106f32618(auStack_1b8);
    FUN_106f32618(param_3);
    __Unwind_Resume();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(plVar9);
    if (plVar7[5] != 0) {
      func_0x00010c1ba8a0(plVar9);
    }
    if (plVar7[6] != 0) {
      func_0x00010c1a4560(plVar9);
    }
    if (plVar7[7] != 0) {
      func_0x00010c16b420(plVar9);
    }
    lVar10 = plVar7[8];
    if (lVar10 != 0) {
      func_0x000107e64874(plVar9);
    }
    if (plVar7[9] != 0) {
      plVar8 = plVar9;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dd500();
      _objc_release(plVar8);
    }
    lVar11 = plVar7[10];
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      plVar7 = plVar9;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      plVar8 = plVar7;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(plVar7);
      plVar7 = plVar8;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (plVar7 != (long *)0x0) {
        plVar13 = (long *)0x0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(plVar8);
          }
          uVar3 = *(undefined8 *)((long)plVar13 * 8);
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010bf0b760();
          if ((int)uVar5 == 5) {
            puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c165a40(uVar3);
            _objc_release(puVar1);
          }
          _objc_release(uVar3);
          plVar13 = (long *)((long)plVar13 + 1);
        } while (plVar7 != plVar13);
        plVar7 = plVar8;
        func_0x00010bf52a60();
      }
      _objc_release(plVar8);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
      return;
    }
    ___stack_chk_fail();
    lVar2 = *(long *)(lVar10 + 0x20);
    _objc_retain(lVar2);
    plVar9[4] = lVar2;
    lVar2 = *(long *)(lVar10 + 0x28);
    _objc_retain(lVar2);
    plVar9[5] = lVar2;
    lVar2 = *(long *)(lVar10 + 0x30);
    _objc_retain(lVar2);
    plVar9[6] = lVar2;
    lVar2 = *(long *)(lVar10 + 0x38);
    _objc_retain(lVar2);
    plVar9[7] = lVar2;
    lVar2 = *(long *)(lVar10 + 0x40);
    _objc_retain(lVar2);
    plVar9[8] = lVar2;
    lVar2 = *(long *)(lVar10 + 0x48);
    _objc_retain(lVar2);
    plVar9[9] = lVar2;
    lVar2 = *(long *)(lVar10 + 0x50);
    _objc_retain(lVar2);
    plVar9[10] = lVar2;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f35dc0; end: 106f35fbf;  */

void FUN_106f35dc0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c1ba8a0(param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c1a4560(param_2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c16b420(param_2);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    func_0x000107e64874(param_2);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = param_2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd500();
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lVar9 * 8);
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bf0b760();
        if ((int)uVar8 == 5) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c165a40(uVar4);
          _objc_release(puVar5);
        }
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(lVar6 + 0x20);
  _objc_retain(uVar8);
  *(undefined8 *)(param_2 + 0x20) = uVar8;
  uVar8 = *(undefined8 *)(lVar6 + 0x28);
  _objc_retain(uVar8);
  *(undefined8 *)(param_2 + 0x28) = uVar8;
  uVar8 = *(undefined8 *)(lVar6 + 0x30);
  _objc_retain(uVar8);
  *(undefined8 *)(param_2 + 0x30) = uVar8;
  uVar8 = *(undefined8 *)(lVar6 + 0x38);
  _objc_retain(uVar8);
  *(undefined8 *)(param_2 + 0x38) = uVar8;
  uVar8 = *(undefined8 *)(lVar6 + 0x40);
  _objc_retain(uVar8);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  uVar8 = *(undefined8 *)(lVar6 + 0x48);
  _objc_retain(uVar8);
  *(undefined8 *)(param_2 + 0x48) = uVar8;
  uVar8 = *(undefined8 *)(lVar6 + 0x50);
  _objc_retain(uVar8);
  *(undefined8 *)(param_2 + 0x50) = uVar8;
  return;
}



/* Entry: 106f35fc0; end: 106f35fdf;  */

void FUN_106f35fc0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



/* Entry: 106f35fe0; end: 106f361e7;  */

/* WARNING: Possible PIC construction at 0x000106f36198: Changing call to branch */

void FUN_106f35fe0(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar7 = *(undefined **)(param_3 + 0x20);
  if (param_4 == (undefined *)0x0) {
    puVar1 = puVar7;
    if (puVar7 == (undefined *)0x0) {
LAB_106f36194:
      puVar5 = *(undefined **)(param_3 + 0x30);
      uVar4 = *(undefined8 *)(param_3 + 0x38);
      goto code_r0x00010bf43d60;
    }
LAB_106f360bc:
    puVar2 = puVar1;
    _objc_retain(puVar2);
  }
  else {
    puVar1 = param_4;
    if (puVar7 == (undefined *)0x0) goto LAB_106f360bc;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(param_4);
    uVar4 = param_1;
    func_0x00010c14e120(param_4);
    func_0x00010bfe6cc0(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar2 == (undefined *)0x0) goto LAB_106f36194;
  }
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c130fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar3);
  func_0x00010c297260(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_4 + 0x20);
code_r0x00010bf43d60:
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_completeWithValue__1125ae900,puVar5);
  return;
}



/* Entry: 106f361e8; end: 106f361f3;  */

void FUN_106f361e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106f361f4; end: 106f36547; -[SCPluginEffectSnapRendererImplV2 _outputPersistedDataWithEditor:error:] */

void FUN_106f361f4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar2 = param_4;
  func_0x00010c0ff5a0(param_4,param_3,&PTR___NSConcreteGlobalBlock_110983cf8);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106f36568;
  puStack_70 = &UNK_110948be0;
  _objc_retain(param_4);
  lVar3 = lVar2;
  lStack_68 = param_4;
  func_0x00010c0b8620(lVar2,param_3,&puStack_88,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  lVar5 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == lVar5) {
    _objc_retain(lVar3);
    *param_1 = lVar3;
    lVar4 = lVar1;
    func_0x00010bfd78c0();
    if ((int)lVar4 != 0) {
      lVar4 = lVar1;
      func_0x00010bfce320();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf51e00();
      param_1[2] = lVar5;
      _objc_release(lVar4);
    }
    lVar4 = lVar1;
    func_0x00010bfd4420();
    if ((int)lVar4 != 0) {
      lVar4 = lVar1;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf51e00();
      param_1[3] = lVar5;
      _objc_release(lVar4);
    }
    lVar4 = lVar1;
    func_0x00010bfd84e0();
    if ((int)lVar4 != 0) {
      lVar4 = lVar1;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf51e00();
      param_1[1] = lVar5;
      _objc_release(lVar4);
    }
    lVar4 = lVar1;
    func_0x000107e64684();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x00010bf51e00();
      param_1[4] = lVar5;
    }
    lVar5 = lVar1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfda560();
    _objc_release(lVar5);
    if ((int)lVar6 != 0) {
      lVar5 = lVar1;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf51e00();
      param_1[5] = lVar7;
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    lVar5 = lVar1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = lVar8;
    func_0x00010c12c080();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    if (lVar6 != 0) {
      _objc_retain(lVar5);
      param_1[6] = lVar5;
    }
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar4);
  }
  else if (param_5 != (undefined8 *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_3,
                        &PTR____CFConstantStringClassReference_110e877f8,
                        &PTR____CFConstantStringClassReference_110e8e798,0x22);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar9;
  }
  _objc_release(lVar3);
  _objc_release(lStack_68);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106f36548; end: 106f36567;  */

bool FUN_106f36548(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c3a0(param_2);
  return (int)param_2 == 4;
}



/* Entry: 106f36568; end: 106f365a3;  */

void FUN_106f36568(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ff640(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f365a4; end: 106f3661b;  */

bool FUN_106f365a4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 1) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0b760();
    bVar1 = (int)uVar3 == 5;
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106f3661c; end: 106f36663;  */

void FUN_106f3661c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010853cd64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f36664; end: 106f36727; -[SCPluginEffectSnapRendererImplV2 preparePlaybackModel:destination:withPlugins:toResponse:] */

void FUN_106f36664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126d33e0;
  uStack_48 = 0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf5cdc0(puVar1,param_2,param_3,0,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be78e20(param_1,param_2,param_3,param_5,puVar1,param_4,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 106f36728; end: 106f369fb; -[SCPluginEffectSnapRendererImplV2 _preparePlaybackModel:withPlugins:renderCTItems:destination:response:] */

void FUN_106f36728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d33e0;
  func_0x00010bf4cb40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_7);
    goto LAB_106f36894;
  }
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8e7e0(param_1);
  lStack_68 = 0;
  lVar3 = param_1;
  func_0x00010be5eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lStack_68;
  _objc_retain(lStack_68);
  if (lVar7 == 0) {
    lStack_70 = 0;
    lVar4 = param_1;
    func_0x00010be06b40();
    lVar7 = lStack_70;
    _objc_retain(lStack_70);
    if (lVar7 != 0) goto LAB_106f36830;
    puVar5 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf17b60();
    _objc_release(puVar5);
    _objc_initWeak(auStack_78,param_1);
    puStack_90 = puVar6;
    _objc_retain(param_7);
    _objc_copyWeak(auStack_98,auStack_78);
    _objc_retain(puVar2);
    _objc_retain(param_5);
    _objc_retain(param_4);
    lStack_88 = lVar4;
    uStack_80 = param_6;
    func_0x00010c297260(lVar3);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_98);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_78);
  }
  else {
LAB_106f36830:
    func_0x00010bf43ca0(param_7);
    _objc_release(lVar7);
  }
  _objc_release(lVar3);
LAB_106f36894:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f369fc; end: 106f36aef;  */

void FUN_106f369fc(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if ((param_3 == (undefined *)0x0) && (lVar2 != 0)) {
    param_3 = (undefined *)(param_1 + 0x40);
    _objc_loadWeakRetained();
    if (param_3 != (undefined *)0x0) {
      func_0x00010be78be0(param_3);
    }
  }
  else {
    if (param_3 == (undefined *)0x0) {
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f36af0; end: 106f370d3; -[SCPluginEffectSnapRendererImplV2 _prepareNGSMESnapFromEditor:inputMedia:renderCTItems:renderPlugins:durationMs:destination:response:] */

void FUN_106f36af0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x00010be241a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be61880(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106f36ca4;
  puStack_b8 = &UNK_110983de8;
  uStack_b0 = param_9;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = param_3;
  uStack_a0 = param_5;
  lStack_98 = param_1;
  uStack_90 = param_6;
  uStack_88 = param_4;
  lStack_80 = lVar2;
  lStack_78 = lVar1;
  uStack_70 = param_7;
  uStack_68 = param_8;
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_9);
  func_0x00010c297260(lVar2,param_2,&puStack_d0,uVar3);
  _objc_release(lStack_78);
  _objc_release(lStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_9);
  return;
}



/* Entry: 106f370d4; end: 106f372ab;  */

void FUN_106f370d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c0839a0(), (int)lVar2 == 0)) {
    func_0x00010bdd65e0(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010beea7a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010be987c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(*(undefined8 *)(param_1 + 0x38));
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar10);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    func_0x00010beea8a0(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f372ac; end: 106f37317;  */

void FUN_106f372ac(long param_1,long param_2)

{
  _objc_retain(param_2);
  FUN_106f342a0(*(undefined8 *)(param_1 + 0x20));
  if (param_2 == 0) {
    func_0x00010bdd65e0(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f37318; end: 106f374eb; -[SCPluginEffectSnapRendererImplV2 mediasContainCustomTimeRanges:] */

undefined8 FUN_106f37318(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *unaff_x21;
  long unaff_x22;
  long lVar9;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  lStack_158 = 0;
  puStack_160 = (undefined *)0x0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_3);
  ppuVar6 = &puStack_160;
  ppuVar7 = (undefined **)auStack_100;
  lVar3 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar8 = 0;
  if (lVar3 != 0) {
    unaff_x22 = *plStack_150;
    do {
      lVar9 = 0;
      do {
        if (*plStack_150 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        puStack_188 = puVar1;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_106f374ec;
        puStack_170 = &UNK_110983e18;
        puStack_1b0 = puVar1;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_106f375ec;
        puStack_198 = &UNK_110983e48;
        ppuVar6 = &puStack_188;
        ppuVar7 = &puStack_1b0;
        puStack_190 = &uStack_120;
        puStack_168 = &uStack_120;
        func_0x00010c0be4e0(*(undefined8 *)(lStack_158 + lVar9 * 8));
        unaff_x21 = puVar1;
        if ((*(byte *)(puStack_118 + 3) & 1) != 0) {
          uVar8 = 1;
          goto LAB_106f37464;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      ppuVar6 = &puStack_160;
      ppuVar7 = (undefined **)auStack_100;
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar8 = 0;
  }
LAB_106f37464:
  _objc_release(param_3);
  __Block_object_dispose(&uStack_120,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar8;
  }
  ___stack_chk_fail();
  uVar5 = 8;
  __Block_object_dispose(&uStack_120,8);
  lVar3 = param_3;
  __Unwind_Resume();
  pcStack_1b8 = FUN_106f374ec;
  lStack_1e0 = unaff_x22;
  puStack_1d8 = unaff_x21;
  uStack_1d0 = uVar8;
  lStack_1c8 = param_3;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar5);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar7);
  if (ppuVar7 == (undefined **)0x0) {
    bVar2 = false;
    lStack_1f8 = 0;
    uStack_200 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_210,ppuVar7);
    if ((uStack_208 & 0x100000000) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = false;
      if ((((uStack_1f0 & 0x100000000) != 0) && (lStack_1e8 == 0)) && (-1 < lStack_1f8)) {
        uStack_238 = uStack_208;
        uStack_240 = uStack_210;
        lStack_228 = lStack_1f8;
        uStack_230 = uStack_200;
        lStack_218 = lStack_1e8;
        uStack_220 = uStack_1f0;
        uStack_268 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
        uStack_270 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
        uStack_258 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
        uStack_260 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
        uStack_248 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
        uStack_250 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
        puVar4 = &uStack_240;
        _CMTimeRangeEqual(puVar4,&uStack_270);
        bVar2 = (int)puVar4 == 0;
      }
    }
  }
  *(bool *)(*(long *)(*(long *)(lVar3 + 0x20) + 8) + 0x18) = bVar2;
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(uVar5);
  return uVar5;
}



/* Entry: 106f374ec; end: 106f375eb;  */

void FUN_106f374ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    bVar1 = false;
    lStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_60,param_4);
    if ((uStack_58 & 0x100000000) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      if ((((uStack_40 & 0x100000000) != 0) && (lStack_38 == 0)) && (-1 < lStack_48)) {
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        lStack_78 = lStack_48;
        uStack_80 = uStack_50;
        lStack_68 = lStack_38;
        uStack_70 = uStack_40;
        uStack_b8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
        uStack_c0 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
        uStack_a8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
        uStack_b0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
        uStack_98 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
        uStack_a0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
        puVar2 = &uStack_90;
        _CMTimeRangeEqual(puVar2,&uStack_c0);
        bVar1 = (int)puVar2 == 0;
      }
    }
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar1;
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f375ec; end: 106f37707;  */

void FUN_106f375ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    bVar1 = false;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_70,param_6);
    if ((uStack_68 & 0x100000000) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      if ((((uStack_50 & 0x100000000) != 0) && (lStack_48 == 0)) && (-1 < lStack_58)) {
        uStack_98 = uStack_68;
        uStack_a0 = uStack_70;
        lStack_88 = lStack_58;
        uStack_90 = uStack_60;
        lStack_78 = lStack_48;
        uStack_80 = uStack_50;
        uStack_c8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
        uStack_d0 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
        uStack_b8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
        uStack_c0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
        uStack_a8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
        uStack_b0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
        puVar2 = &uStack_a0;
        _CMTimeRangeEqual(puVar2,&uStack_d0);
        bVar1 = (int)puVar2 == 0;
      }
    }
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar1;
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f37708; end: 106f378df; -[SCPluginEffectSnapRendererImplV2 trackCountForMedias:] */

undefined * FUN_106f37708(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  puVar3 = &uStack_140;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar6 = *plStack_130;
    do {
      puVar4 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_138 + (long)puVar4 * 8);
        _objc_retain(puVar2);
        _objc_retain(puVar2);
        func_0x00010c0be4e0(uVar5);
        _objc_release(puVar2);
        _objc_release(puVar2);
        puVar4 = puVar4 + 1;
      } while (puVar1 != puVar4);
      puVar3 = &uStack_140;
      puVar1 = param_3;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf529e0();
  puVar1 = param_3;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x00010bf529e0(puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = *(undefined **)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_addObject__11259c1f0);
    return puVar2;
  }
  return param_3;
}



/* Entry: 106f378e0; end: 106f37903;  */

void FUN_106f378e0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 106f37904; end: 106f37a63; -[SCPluginEffectSnapRendererImplV2 _warmupWithSampleBuffers:withRenderPlugin:renderLogger:completion:] */

void FUN_106f37904(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
  }
  else {
    func_0x00010c23c140(param_5);
    uVar2 = param_4;
    func_0x00010c2a2160(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c297260(uVar2);
    _objc_release(uVar2);
    _objc_release(param_6);
    puVar3 = param_5;
  }
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f37a64; end: 106f37ab3;  */

void FUN_106f37a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c23c120(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f37ab4; end: 106f37f2f; -[SCPluginEffectSnapRendererImplV2 _buildNGSMESnapWithMedias:snapDocEditor:withRenderPlugins:renderLogger:durationMs:musicSelection:globalOverlayFuture:response:] */

void FUN_106f37ab4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9,undefined8 param_10)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  long lVar22;
  byte bVar23;
  undefined *puVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined *puStack_640;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined *puStack_538;
  undefined8 uStack_530;
  code *pcStack_528;
  undefined *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  code *pcStack_4e8;
  undefined *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_370;
  undefined *puStack_368;
  long lStack_2e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _CMTimeMake(&uStack_b0,param_7,1000);
  uVar16 = param_1;
  func_0x00010c0c72e0();
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_106f331a0;
  uStack_c0 = 0x106f331b0;
  uStack_b8 = 0;
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x3032000000;
  pcStack_f8 = FUN_106f331a0;
  uStack_f0 = 0x106f331b0;
  uStack_e8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_106f331a0;
  uStack_120 = 0x106f331b0;
  uStack_118 = 0;
  uVar27 = param_4;
  func_0x00010c23fe00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be6ebe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar27);
  if (param_9 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_9);
    puVar3 = param_9;
  }
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_106f37f30;
  puStack_1c0 = &UNK_110983f78;
  _objc_retain(param_3);
  uStack_148 = (undefined1)uVar16;
  lStack_1b8 = param_3;
  _objc_retain(puVar8);
  uStack_158 = uStack_a8;
  uStack_160 = uStack_b0;
  uStack_150 = uStack_a0;
  puStack_1b0 = puVar8;
  _objc_retain(param_10);
  puStack_178 = &uStack_e0;
  uStack_1a8 = param_10;
  uStack_1a0 = param_1;
  _objc_retain(puVar7);
  puStack_198 = puVar7;
  _objc_retain(puVar9);
  puStack_190 = puVar9;
  _objc_retain(param_6);
  puStack_170 = &uStack_140;
  puStack_168 = &uStack_110;
  uStack_188 = param_6;
  _objc_retain(param_5);
  ppuVar26 = &puStack_1d8;
  uStack_180 = param_5;
  _objc_retainBlock();
  puVar5 = PTR_PTR_1126ae558;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = param_8;
  uStack_90 = uVar2;
  puStack_88 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar26);
  func_0x00010c297260(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar26);
  _objc_release(ppuVar26);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(puStack_190);
  _objc_release(puStack_198);
  _objc_release(uStack_1a8);
  _objc_release(puStack_1b0);
  _objc_release(lStack_1b8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  __Block_object_dispose(&uStack_110,8);
  _objc_release(uStack_e8);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_110,8);
  __Block_object_dispose(&uStack_e0,8);
  __Unwind_Resume();
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_3 + 0x20);
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    uVar21 = 0;
    do {
      puVar7 = *(undefined **)(param_3 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uStack_440 = 0;
      puStack_518 = &uStack_440;
      uStack_430 = 0x3032000000;
      pcStack_428 = FUN_106f331a0;
      uStack_420 = 0x106f331b0;
      uStack_418 = 0;
      uStack_470 = 0;
      puStack_508 = &uStack_470;
      uStack_460 = 0x3032000000;
      pcStack_458 = FUN_106f331a0;
      uStack_450 = 0x106f331b0;
      uStack_448 = 0;
      puStack_500 = &uStack_4a0;
      uStack_4a0 = 0;
      uStack_490 = 0x3032000000;
      pcStack_488 = FUN_106f331a0;
      uStack_480 = 0x106f331b0;
      uStack_478 = 0;
      puStack_510 = &uStack_4c0;
      uStack_4c0 = 0;
      uStack_4b0 = 0x2020000000;
      uStack_4a8 = 0;
      puStack_4f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_4f0 = 0xc2000000;
      pcStack_4e8 = FUN_106f38ee0;
      puStack_4e0 = &UNK_110983ed8;
      puStack_538 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_530 = 0xc2000000;
      pcStack_528 = FUN_106f38f88;
      puStack_520 = &UNK_110983f08;
      puStack_4d8 = puStack_518;
      puStack_4d0 = puStack_508;
      puStack_4c8 = puStack_500;
      puStack_4b8 = puStack_510;
      puStack_498 = puStack_500;
      puStack_468 = puStack_508;
      puStack_438 = puStack_518;
      func_0x00010c0be4e0();
      bVar23 = *(byte *)(param_3 + 0x90);
      if (bVar23 == 1) {
        puVar8 = (undefined *)puStack_468[5];
        func_0x00010c25d700(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = *(undefined **)(param_3 + 0x28);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 == (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x28));
        }
        ppuVar14 = (undefined **)PTR_PTR_1126d33e0;
        ppuVar26 = (undefined **)puStack_4b8[3];
        if (puStack_498[5] == 0) {
          uStack_558 = 0;
          uStack_560 = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          uStack_568 = 0;
          uStack_570 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_570);
        }
        func_0x00010c2787e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar14;
        func_0x00010bf529e0();
        if (ppuVar11 == (undefined **)0x0) {
          ppuVar26 = &PTR____CFConstantStringClassReference_110e8e7f8;
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar11;
          func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x30));
LAB_106f383c8:
          _objc_release(ppuVar11);
          bVar23 = bVar23 ^ 1;
        }
        else {
          ppuVar12 = ppuVar14;
          func_0x00010befa160(puVar9);
          bVar23 = 1;
        }
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)(*(long *)(*(long *)(param_3 + 0x60) + 8) + 0x28) == 0) {
          lVar10 = *(long *)(param_3 + 0x38);
          func_0x00010be37940();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar10;
          func_0x00010bf529e0();
          if (lVar6 == 0) {
            lVar22 = *(long *)(param_3 + 0x38);
            func_0x00010bee9200();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar22;
            func_0x00010bf529e0();
            bVar1 = lVar6 == 1;
            _objc_release(lVar22);
          }
          else {
            bVar1 = false;
          }
          _objc_release(lVar10);
        }
        else {
          bVar1 = false;
        }
        puVar9 = PTR_PTR_1126d33e0;
        uStack_588 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_590 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_580 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        uStack_5a8 = *(undefined8 *)(param_3 + 0x80);
        uStack_5b0 = *(undefined8 *)(param_3 + 0x78);
        uStack_5a0 = *(undefined8 *)(param_3 + 0x88);
        _CMTimeRangeMake(&uStack_570,&uStack_590,&uStack_5b0);
        func_0x00010c2787e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar9;
        func_0x00010bf529e0();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010befa160(puVar8);
          ppuVar26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar26;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar26);
          ppuVar11 = (undefined **)PTR_PTR_1126bf6a8;
          _objc_alloc(PTR_PTR_1126bf6a8);
          ppuVar26 = ppuVar14;
          func_0x00010b742360();
          func_0x00010befa120(*(undefined8 *)(param_3 + 0x40));
          if (bVar1) {
            puVar3 = puVar8;
            func_0x00010bfaea20();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf529e0();
            if (puVar5 != (undefined *)0x0) {
              puVar5 = PTR_PTR_1126bf6a8;
              _objc_alloc();
              ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar12;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              ppuVar26 = ppuVar13;
              func_0x00010b742360(puVar5,0,0,ppuVar13,puVar3);
              _objc_release(ppuVar13);
              _objc_release(ppuVar12);
              func_0x00010befa120(*(undefined8 *)(param_3 + 0x40));
              _objc_release(puVar5);
            }
            _objc_release(puVar3);
          }
          ppuVar12 = ppuVar14;
          func_0x00010befa120(*(undefined8 *)(param_3 + 0x48));
          goto LAB_106f383c8;
        }
        ppuVar26 = &PTR____CFConstantStringClassReference_110e8e7f8;
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar14;
        func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x30));
        bVar23 = 0;
      }
      _objc_release(ppuVar14);
      _objc_release(puVar9);
      _objc_release(puVar8);
      __Block_object_dispose(&uStack_4c0,8);
      __Block_object_dispose(&uStack_4a0,8);
      _objc_release(uStack_478);
      __Block_object_dispose(&uStack_470,8);
      _objc_release(uStack_448);
      __Block_object_dispose(&uStack_440,8);
      _objc_release(uStack_418);
      _objc_release();
      if ((bVar23 & 1) == 0) goto LAB_106f38e28;
      uVar15 = *(ulong *)(param_3 + 0x20);
      func_0x00010bf529e0();
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar15);
  }
  if (*(char *)(param_3 + 0x90) == '\x01') {
    if (*(long *)(*(long *)(*(long *)(param_3 + 0x60) + 8) + 0x28) == 0) {
      lVar6 = *(long *)(param_3 + 0x28);
      func_0x00010bf529e0();
      bVar1 = lVar6 == 1;
    }
    else {
      bVar1 = false;
    }
    lVar22 = *(long *)(param_3 + 0x28);
    _objc_retain(lVar22);
    lVar6 = lVar22;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar22);
        }
        uVar27 = *(undefined8 *)(lVar25 * 8);
        puVar7 = PTR_PTR_1126bf6a8;
        _objc_alloc(PTR_PTR_1126bf6a8);
        uVar16 = *(undefined8 *)(param_3 + 0x28);
        func_0x00010c0e00e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b742360(puVar7,1,0,uVar27,uVar16);
        _objc_release(uVar16);
        func_0x00010befa120(*(undefined8 *)(param_3 + 0x40));
        if (bVar1) {
          lVar17 = *(long *)(param_3 + 0x28);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar17;
          func_0x00010bfaea20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar17);
          lVar17 = lVar18;
          func_0x00010bf529e0();
          if (lVar17 != 0) {
            puVar8 = PTR_PTR_1126bf6a8;
            _objc_alloc(PTR_PTR_1126bf6a8);
            func_0x00010b742360();
            func_0x00010befa120(*(undefined8 *)(param_3 + 0x40));
            _objc_release(puVar8);
          }
          _objc_release(lVar18);
        }
        func_0x00010befa120(*(undefined8 *)(param_3 + 0x48));
        _objc_release(puVar7);
        lVar25 = lVar25 + 1;
      } while (lVar6 != lVar25);
      lVar6 = lVar22;
      func_0x00010bf52a60();
    }
    _objc_release(lVar22);
    func_0x00010c246ba0(*(undefined8 *)(param_3 + 0x40));
  }
  if (*(long *)(*(long *)(*(long *)(param_3 + 0x60) + 8) + 0x28) != 0) {
    puVar7 = PTR_PTR_1126bf698;
    func_0x00010bf0b9a0(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bf6a0;
    _objc_alloc();
    puVar28 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
    uVar27 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_440 = uVar27;
    puStack_438 = puVar28;
    uStack_430 = uVar16;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puStack_438 = *(undefined8 **)(param_3 + 0x80);
    uStack_440 = *(undefined8 *)(param_3 + 0x78);
    uStack_430 = *(undefined8 *)(param_3 + 0x88);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_440 = uVar27;
    puStack_438 = puVar28;
    uStack_430 = uVar16;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b7425e0(0x3ff0000000000000,puVar8,puVar7,0,puVar9,puVar3,puVar5,0,0,0);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126bf6a8;
    _objc_alloc(PTR_PTR_1126bf6a8);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_368 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b742360(puVar9,0,3,puVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x40));
    if (*(long *)(param_3 + 0x50) != 0) {
      func_0x00010c1ad4c0();
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  if (*(long *)(*(long *)(*(long *)(param_3 + 0x68) + 8) + 0x28) != 0) {
    puVar7 = PTR_PTR_1126bf698;
    func_0x00010bfe94a0(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bf6a0;
    _objc_alloc();
    puVar28 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
    uVar27 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_440 = uVar27;
    puStack_438 = puVar28;
    uStack_430 = uVar16;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puStack_438 = *(undefined8 **)(param_3 + 0x80);
    uStack_440 = *(undefined8 *)(param_3 + 0x78);
    uStack_430 = *(undefined8 *)(param_3 + 0x88);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_440 = uVar27;
    puStack_438 = puVar28;
    uStack_430 = uVar16;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b7425e0(0x3ff0000000000000,puVar8,puVar7,2,puVar9,puVar3,puVar5,0,0,0);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126bf6a8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_370 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b742360(puVar9,2,1,&PTR____CFConstantStringClassReference_110e8e818,puVar3);
    _objc_release(puVar3);
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x40));
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126bf6b0;
  _objc_alloc();
  func_0x00010b742210();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar16 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  puStack_640 = PTR_PTR_1126bf488;
  if (*(long *)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28) == 0) {
    puStack_640 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    func_0x00010bf41dc0(0x4086800000000000,0x4094000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = *(long *)(param_3 + 0x58);
  _objc_retain(lVar22);
  lVar6 = lVar22;
  func_0x00010bf52a60();
  puVar9 = PTR__CGAffineTransformIdentity_110347008;
  lVar10 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar25 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar22);
      }
      puVar24 = *(undefined **)(param_3 + 0x48);
      _objc_retain(puVar24);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar20 = puVar24;
      if (puStack_640 != (undefined *)0x0) {
        uVar16 = *(undefined8 *)(param_3 + 0x48);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        puVar19 = PTR_PTR_1126bf4b0;
        _objc_alloc(PTR_PTR_1126bf4b0);
        puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_3f8 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c016a80(puVar19);
        _objc_release(puVar20);
        func_0x00010befa120(puVar4);
        puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_400 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        _objc_release(puVar19);
        _objc_release(puVar5);
      }
      puVar24 = PTR_PTR_1126d34a8;
      _objc_alloc(PTR_PTR_1126d34a8);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_408 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e140(puVar24);
      _objc_release(puVar5);
      func_0x00010befa120(puVar4);
      puVar19 = PTR_PTR_1126bf6b8;
      _objc_alloc(PTR_PTR_1126bf6b8);
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      puStack_468 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
      uStack_470 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_460 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puStack_498 = *(undefined8 **)(param_3 + 0x80);
      uStack_4a0 = *(undefined8 *)(param_3 + 0x78);
      uStack_490 = *(undefined8 *)(param_3 + 0x88);
      _CMTimeRangeMake(&uStack_440,&uStack_470,&uStack_4a0);
      func_0x00010c297240(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_468 = *(undefined8 **)(puVar9 + 8);
      uStack_470 = *(undefined8 *)puVar9;
      pcStack_458 = *(code **)(puVar9 + 0x18);
      uStack_460 = *(undefined8 *)(puVar9 + 0x10);
      uStack_448 = *(undefined8 *)(puVar9 + 0x28);
      uStack_450 = *(undefined8 *)(puVar9 + 0x20);
      uStack_440 = uStack_470;
      puStack_438 = puStack_468;
      uStack_430 = uStack_460;
      pcStack_428 = pcStack_458;
      uStack_420 = uStack_450;
      uStack_418 = uStack_448;
      func_0x00010b7432f8(puVar19,puVar5,&uStack_440,&uStack_470,2,0,0,puVar4,0);
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar19);
      _objc_release(puVar24);
      _objc_release(puVar4);
      _objc_release(puVar20);
      lVar25 = lVar25 + 1;
    } while (lVar6 != lVar25);
    lVar6 = lVar22;
    func_0x00010bf52a60();
  }
  _objc_release(lVar22);
  puVar9 = PTR_PTR_1126bf6c0;
  _objc_alloc();
  ppuVar26 = (undefined **)0x0;
  func_0x00010b743b10();
  ppuVar14 = (undefined **)PTR_PTR_1126bf678;
  _objc_alloc();
  func_0x00010af1f598();
  ppuVar12 = ppuVar14;
  func_0x00010bf43ce0(*(undefined8 *)(param_3 + 0x30));
  _objc_release(ppuVar14);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puStack_640);
  _objc_release(puVar8);
  _objc_release();
LAB_106f38e28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_4c0,8);
  __Block_object_dispose(&uStack_4a0,8);
  __Block_object_dispose(&uStack_470,8);
  __Block_object_dispose(&uStack_440,8);
  __Unwind_Resume();
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar26);
  puVar8 = PTR_PTR_1126bf698;
  func_0x00010bfe94a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(*(long *)(*(long *)(puVar7 + 0x20) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar7 + 0x20) + 8) + 0x28) = puVar8;
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(*(long *)(*(long *)(puVar7 + 0x28) + 8) + 0x28);
  *(undefined ***)(*(long *)(*(long *)(puVar7 + 0x28) + 8) + 0x28) = ppuVar12;
  _objc_retain(ppuVar12);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(*(long *)(*(long *)(puVar7 + 0x30) + 8) + 0x28);
  *(undefined ***)(*(long *)(*(long *)(puVar7 + 0x30) + 8) + 0x28) = ppuVar26;
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 106f37f30; end: 106f38edf;  */

void FUN_106f37f30(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  byte bVar22;
  undefined *puVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined *puStack_3f0;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar20 = 0;
    do {
      puVar3 = *(undefined **)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uStack_1f0 = 0;
      puStack_2c8 = &uStack_1f0;
      uStack_1e0 = 0x3032000000;
      pcStack_1d8 = FUN_106f331a0;
      uStack_1d0 = 0x106f331b0;
      uStack_1c8 = 0;
      uStack_220 = 0;
      puStack_2b8 = &uStack_220;
      uStack_210 = 0x3032000000;
      pcStack_208 = FUN_106f331a0;
      uStack_200 = 0x106f331b0;
      uStack_1f8 = 0;
      puStack_2b0 = &uStack_250;
      uStack_250 = 0;
      uStack_240 = 0x3032000000;
      pcStack_238 = FUN_106f331a0;
      uStack_230 = 0x106f331b0;
      uStack_228 = 0;
      puStack_2c0 = &uStack_270;
      uStack_270 = 0;
      uStack_260 = 0x2020000000;
      uStack_258 = 0;
      puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a0 = 0xc2000000;
      pcStack_298 = FUN_106f38ee0;
      puStack_290 = &UNK_110983ed8;
      puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2e0 = 0xc2000000;
      pcStack_2d8 = FUN_106f38f88;
      puStack_2d0 = &UNK_110983f08;
      puStack_288 = puStack_2c8;
      puStack_280 = puStack_2b8;
      puStack_278 = puStack_2b0;
      puStack_268 = puStack_2c0;
      puStack_248 = puStack_2b0;
      puStack_218 = puStack_2b8;
      puStack_1e8 = puStack_2c8;
      func_0x00010c0be4e0();
      bVar22 = *(byte *)(param_1 + 0x90);
      if (bVar22 == 1) {
        puVar4 = (undefined *)puStack_218[5];
        func_0x00010c25d700(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = *(undefined **)(param_1 + 0x28);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
        }
        ppuVar12 = (undefined **)PTR_PTR_1126d33e0;
        ppuVar25 = (undefined **)puStack_268[3];
        if (puStack_248[5] == 0) {
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_320);
        }
        func_0x00010c2787e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar12;
        func_0x00010bf529e0();
        if (ppuVar8 == (undefined **)0x0) {
          ppuVar25 = &PTR____CFConstantStringClassReference_110e8e7f8;
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar8;
          func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x30));
LAB_106f383c8:
          _objc_release(ppuVar8);
          bVar22 = bVar22 ^ 1;
        }
        else {
          ppuVar10 = ppuVar12;
          func_0x00010befa160(puVar5);
          bVar22 = 1;
        }
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) == 0) {
          lVar6 = *(long *)(param_1 + 0x38);
          func_0x00010be37940();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar6;
          func_0x00010bf529e0();
          if (lVar2 == 0) {
            lVar21 = *(long *)(param_1 + 0x38);
            func_0x00010bee9200();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar21;
            func_0x00010bf529e0();
            bVar1 = lVar2 == 1;
            _objc_release(lVar21);
          }
          else {
            bVar1 = false;
          }
          _objc_release(lVar6);
        }
        else {
          bVar1 = false;
        }
        puVar5 = PTR_PTR_1126d33e0;
        uStack_338 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_340 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_330 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        uStack_358 = *(undefined8 *)(param_1 + 0x80);
        uStack_360 = *(undefined8 *)(param_1 + 0x78);
        uStack_350 = *(undefined8 *)(param_1 + 0x88);
        _CMTimeRangeMake(&uStack_320,&uStack_340,&uStack_360);
        func_0x00010c2787e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bf529e0();
        if (puVar7 != (undefined *)0x0) {
          func_0x00010befa160(puVar4);
          ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar25;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar25);
          ppuVar8 = (undefined **)PTR_PTR_1126bf6a8;
          _objc_alloc(PTR_PTR_1126bf6a8);
          ppuVar25 = ppuVar12;
          func_0x00010b742360();
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
          if (bVar1) {
            puVar7 = puVar4;
            func_0x00010bfaea20();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010bf529e0();
            if (puVar9 != (undefined *)0x0) {
              puVar9 = PTR_PTR_1126bf6a8;
              _objc_alloc();
              ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar10;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              ppuVar25 = ppuVar11;
              func_0x00010b742360(puVar9,0,0,ppuVar11,puVar7);
              _objc_release(ppuVar11);
              _objc_release(ppuVar10);
              func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
              _objc_release(puVar9);
            }
            _objc_release(puVar7);
          }
          ppuVar10 = ppuVar12;
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x48));
          goto LAB_106f383c8;
        }
        ppuVar25 = &PTR____CFConstantStringClassReference_110e8e7f8;
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar12;
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x30));
        bVar22 = 0;
      }
      _objc_release(ppuVar12);
      _objc_release(puVar5);
      _objc_release(puVar4);
      __Block_object_dispose(&uStack_270,8);
      __Block_object_dispose(&uStack_250,8);
      _objc_release(uStack_228);
      __Block_object_dispose(&uStack_220,8);
      _objc_release(uStack_1f8);
      __Block_object_dispose(&uStack_1f0,8);
      _objc_release(uStack_1c8);
      _objc_release();
      if ((bVar22 & 1) == 0) goto LAB_106f38e28;
      uVar13 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar13);
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bf529e0();
      bVar1 = lVar2 == 1;
    }
    else {
      bVar1 = false;
    }
    lVar21 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar21);
    lVar2 = lVar21;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar21);
        }
        uVar26 = *(undefined8 *)(lVar24 * 8);
        puVar3 = PTR_PTR_1126bf6a8;
        _objc_alloc(PTR_PTR_1126bf6a8);
        uVar14 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b742360(puVar3,1,0,uVar26,uVar14);
        _objc_release(uVar14);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
        if (bVar1) {
          lVar15 = *(long *)(param_1 + 0x28);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar15;
          func_0x00010bfaea20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar15);
          lVar15 = lVar16;
          func_0x00010bf529e0();
          if (lVar15 != 0) {
            puVar4 = PTR_PTR_1126bf6a8;
            _objc_alloc(PTR_PTR_1126bf6a8);
            func_0x00010b742360();
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
            _objc_release(puVar4);
          }
          _objc_release(lVar16);
        }
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x48));
        _objc_release(puVar3);
        lVar24 = lVar24 + 1;
      } while (lVar2 != lVar24);
      lVar2 = lVar21;
      func_0x00010bf52a60();
    }
    _objc_release(lVar21);
    func_0x00010c246ba0(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) != 0) {
    puVar3 = PTR_PTR_1126bf698;
    func_0x00010bf0b9a0(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf6a0;
    _objc_alloc();
    puVar27 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
    uVar26 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar14 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_1f0 = uVar26;
    puStack_1e8 = puVar27;
    uStack_1e0 = uVar14;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = *(undefined8 **)(param_1 + 0x80);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
    puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_1f0 = uVar26;
    puStack_1e8 = puVar27;
    uStack_1e0 = uVar14;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b7425e0(0x3ff0000000000000,puVar4,puVar3,0,puVar5,puVar7,puVar9,0,0,0);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126bf6a8;
    _objc_alloc(PTR_PTR_1126bf6a8);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_118 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b742360(puVar5,0,3,puVar7,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar7);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
    if (*(long *)(param_1 + 0x50) != 0) {
      func_0x00010c1ad4c0();
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28) != 0) {
    puVar3 = PTR_PTR_1126bf698;
    func_0x00010bfe94a0(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf6a0;
    _objc_alloc();
    puVar27 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
    uVar26 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar14 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_1f0 = uVar26;
    puStack_1e8 = puVar27;
    uStack_1e0 = uVar14;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = *(undefined8 **)(param_1 + 0x80);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
    puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_1f0 = uVar26;
    puStack_1e8 = puVar27;
    uStack_1e0 = uVar14;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b7425e0(0x3ff0000000000000,puVar4,puVar3,2,puVar5,puVar7,puVar9,0,0,0);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126bf6a8;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b742360(puVar5,2,1,&PTR____CFConstantStringClassReference_110e8e818,puVar7);
    _objc_release(puVar7);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bf6b0;
  _objc_alloc();
  func_0x00010b742210();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  puStack_3f0 = PTR_PTR_1126bf488;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28) == 0) {
    puStack_3f0 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    func_0x00010bf41dc0(0x4086800000000000,0x4094000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar21);
  lVar2 = lVar21;
  func_0x00010bf52a60();
  puVar5 = PTR__CGAffineTransformIdentity_110347008;
  lVar6 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar21);
      }
      puVar23 = *(undefined **)(param_1 + 0x48);
      _objc_retain(puVar23);
      puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar19 = puVar23;
      if (puStack_3f0 != (undefined *)0x0) {
        uVar14 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        puVar18 = PTR_PTR_1126bf4b0;
        _objc_alloc(PTR_PTR_1126bf4b0);
        puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1a8 = puVar9;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c016a80(puVar18);
        _objc_release(puVar19);
        func_0x00010befa120(puVar17);
        puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1b0 = puVar9;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar23);
        _objc_release(puVar18);
        _objc_release(puVar9);
      }
      puVar23 = PTR_PTR_1126d34a8;
      _objc_alloc(PTR_PTR_1126d34a8);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1b8 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e140(puVar23);
      _objc_release(puVar9);
      func_0x00010befa120(puVar17);
      puVar18 = PTR_PTR_1126bf6b8;
      _objc_alloc(PTR_PTR_1126bf6b8);
      puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      puStack_218 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
      uStack_220 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_210 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puStack_248 = *(undefined8 **)(param_1 + 0x80);
      uStack_250 = *(undefined8 *)(param_1 + 0x78);
      uStack_240 = *(undefined8 *)(param_1 + 0x88);
      _CMTimeRangeMake(&uStack_1f0,&uStack_220,&uStack_250);
      func_0x00010c297240(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puStack_218 = *(undefined8 **)(puVar5 + 8);
      uStack_220 = *(undefined8 *)puVar5;
      pcStack_208 = *(code **)(puVar5 + 0x18);
      uStack_210 = *(undefined8 *)(puVar5 + 0x10);
      uStack_1f8 = *(undefined8 *)(puVar5 + 0x28);
      uStack_200 = *(undefined8 *)(puVar5 + 0x20);
      uStack_1f0 = uStack_220;
      puStack_1e8 = puStack_218;
      uStack_1e0 = uStack_210;
      pcStack_1d8 = pcStack_208;
      uStack_1d0 = uStack_200;
      uStack_1c8 = uStack_1f8;
      func_0x00010b7432f8(puVar18,puVar9,&uStack_1f0,&uStack_220,2,0,0,puVar17,0);
      _objc_release(puVar9);
      func_0x00010befa120(puVar7);
      _objc_release(puVar18);
      _objc_release(puVar23);
      _objc_release(puVar17);
      _objc_release(puVar19);
      lVar24 = lVar24 + 1;
    } while (lVar2 != lVar24);
    lVar2 = lVar21;
    func_0x00010bf52a60();
  }
  _objc_release(lVar21);
  puVar5 = PTR_PTR_1126bf6c0;
  _objc_alloc();
  ppuVar25 = (undefined **)0x0;
  func_0x00010b743b10();
  ppuVar12 = (undefined **)PTR_PTR_1126bf678;
  _objc_alloc();
  func_0x00010af1f598();
  ppuVar10 = ppuVar12;
  func_0x00010bf43ce0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(ppuVar12);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puStack_3f0);
  _objc_release(puVar4);
  _objc_release();
LAB_106f38e28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_270,8);
  __Block_object_dispose(&uStack_250,8);
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&uStack_1f0,8);
  __Unwind_Resume();
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar25);
  puVar4 = PTR_PTR_1126bf698;
  func_0x00010bfe94a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(puVar3 + 0x20) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar3 + 0x20) + 8) + 0x28) = puVar4;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(puVar3 + 0x28) + 8) + 0x28);
  *(undefined ***)(*(long *)(*(long *)(puVar3 + 0x28) + 8) + 0x28) = ppuVar10;
  _objc_retain(ppuVar10);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(puVar3 + 0x30) + 8) + 0x28);
  *(undefined ***)(*(long *)(*(long *)(puVar3 + 0x30) + 8) + 0x28) = ppuVar25;
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
  return;
}



/* Entry: 106f38ee0; end: 106f38f87;  */

void FUN_106f38ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bf698;
  func_0x00010bfe94a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f38f88; end: 106f3912f;  */

void FUN_106f38f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bf698;
  func_0x00010bf0b9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_4;
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_6;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106f39130; end: 106f39237;  */

void FUN_106f39130(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  return;
}



/* Entry: 106f39238; end: 106f3944f;  */

void FUN_106f39238(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  
  if (param_3 == 0) {
    _objc_retain(param_2);
    uVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3030;
    _objc_opt_class(PTR_PTR_1126b3030);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar5 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar7 = *(undefined8 *)(lVar9 + 0x28);
    *(ulong *)(lVar9 + 0x28) = uVar4;
    _objc_release(uVar7);
    uVar5 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar7 = *(undefined8 *)(lVar9 + 0x28);
    *(ulong *)(lVar9 + 0x28) = uVar4;
    _objc_release(uVar7);
    if (uVar1 != 0) {
      uVar4 = uVar2;
      func_0x00010bf0ef80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c08fa60();
      _objc_release(uVar4);
      if (uVar5 != 0) {
        puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        _objc_alloc();
        uVar4 = uVar2;
        func_0x00010bf0ef80(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0082a0();
        _objc_release(uVar4);
        func_0x00010bf0ffa0(auStack_68,uVar2);
        puVar8 = puVar3;
        func_0x000107fb6770(puVar3,auStack_68);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        uVar7 = *(undefined8 *)(lVar9 + 0x28);
        *(undefined **)(lVar9 + 0x28) = puVar8;
        _objc_release(uVar7);
        _objc_release(puVar3);
      }
    }
    _objc_release(uVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106f39450; end: 106f396fb; -[SCPluginEffectSnapRendererImplV2 _sampleBuffersFromImages:] */

undefined *
FUN_106f39450(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 *param_6,undefined8 param_7,undefined8 *param_8)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined *unaff_x20;
  undefined8 *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined1 *puVar11;
  undefined *unaff_x26;
  long unaff_x27;
  long lVar12;
  undefined8 *unaff_x28;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined *puStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *apuStack_3b8 [16];
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined *puStack_300;
  undefined1 *puStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_220;
  undefined8 *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_5;
  _objc_retain(param_5);
  puVar10 = param_5;
  func_0x00010bf529e0();
  if (puVar10 == (undefined8 *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puStack_1a8 = puVar4;
    _objc_retain(param_5);
    puVar6 = &uStack_140;
    param_6 = auStack_100;
    puVar10 = param_5;
    func_0x00010bf52a60();
    puVar4 = PTR__kCMTimeZero_110348670;
    puVar3 = PTR__kCMTimeInvalid_110348648;
    if (puVar10 != (undefined8 *)0x0) {
      unaff_x27 = *plStack_130;
      unaff_x28 = &uStack_190;
      unaff_x23 = *(undefined **)PTR__kCFAllocatorDefault_11034ab78;
      unaff_x22 = puVar10;
      puStack_1b0 = param_5;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_130 != unaff_x27) {
            _objc_enumerationMutation(puStack_1b0);
          }
          unaff_x25 = *(undefined **)(lStack_138 + (long)puVar10 * 8);
          func_0x00010c23d0a0(unaff_x25);
          puVar6 = (undefined8 *)0x8;
          uVar14 = param_2;
          func_0x00010c14e760(param_2,unaff_x25);
          iVar1 = param_3;
          func_0x00010c28fe20();
          if (iVar1 == 0) {
            func_0x00010bf54260(param_2,uVar14);
          }
          else {
            func_0x00010bf54220(param_2,uVar14);
          }
          param_5 = puStack_1b0;
          if (unaff_x25 == (undefined *)0x0) {
            _objc_release(puStack_1b0);
            puVar4 = (undefined *)0x0;
            unaff_x20 = puStack_1a8;
            goto LAB_106f396a0;
          }
          uStack_188 = *(undefined8 *)(puVar3 + 8);
          uStack_190 = *(undefined8 *)puVar3;
          uStack_180 = *(undefined8 *)(puVar3 + 0x10);
          uStack_170 = *(undefined8 *)(puVar4 + 8);
          param_2 = *(undefined8 *)puVar4;
          uStack_168 = *(undefined8 *)(puVar4 + 0x10);
          uStack_178 = param_2;
          uStack_160 = uStack_190;
          uStack_158 = uStack_188;
          uStack_150 = uStack_180;
          _CMVideoFormatDescriptionCreateForImageBuffer(unaff_x23,unaff_x25,&puStack_198);
          param_6 = (undefined1 *)0x0;
          param_8 = puStack_198;
          _CMSampleBufferCreateForImageBuffer
                    (unaff_x23,unaff_x25,1,0,0,puStack_198,&uStack_190,&lStack_1a0);
          if (puStack_198 != (undefined8 *)0x0) {
            _CFRelease();
          }
          if (lStack_1a0 != 0) {
            unaff_x26 = PTR_PTR_1126c8eb8;
            _objc_alloc();
            param_6 = (undefined1 *)0x0;
            param_8 = (undefined8 *)0x0;
            func_0x00010c0413a0();
            func_0x00010befa120(puStack_1a8);
            _objc_release(unaff_x26);
          }
          _CVPixelBufferRelease(unaff_x25);
          param_5 = puStack_1b0;
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (unaff_x22 != puVar10);
        puVar6 = &uStack_140;
        param_6 = auStack_100;
        unaff_x22 = puStack_1b0;
        func_0x00010bf52a60();
        unaff_x24 = puVar3;
      } while (unaff_x22 != (undefined8 *)0x0);
    }
    _objc_release(param_5);
    puVar4 = puStack_1a8;
    _objc_retain(puStack_1a8);
    unaff_x20 = puVar4;
    puVar3 = unaff_x24;
LAB_106f396a0:
    _objc_release(unaff_x20);
    unaff_x24 = puVar3;
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    ppuVar7 = &puStack_2e0;
    pcStack_1b8 = FUN_106f396fc;
    lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_210 = unaff_x28;
    lStack_208 = unaff_x27;
    puStack_200 = unaff_x26;
    puStack_1f8 = unaff_x25;
    puStack_1f0 = unaff_x24;
    puStack_1e8 = unaff_x23;
    puStack_1e0 = unaff_x22;
    puStack_1d8 = puVar4;
    puStack_1d0 = unaff_x20;
    puStack_1c8 = param_5;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain(param_6);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2d8 = 0;
    puStack_2e0 = (undefined *)0x0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    _objc_retain(param_6);
    puVar2 = param_6;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar12 = *plStack_2d0;
      do {
        puVar13 = (undefined1 *)0x0;
        do {
          if (*plStack_2d0 != lVar12) {
            _objc_enumerationMutation(param_6);
          }
          unaff_x23 = *(undefined **)(lStack_2d8 + (long)puVar13 * 8);
          unaff_x24 = unaff_x23;
          func_0x00010bf6eec0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x24;
          func_0x00010bf529e0();
          _objc_release(unaff_x24);
          unaff_x25 = (undefined *)0x0;
          if (puVar3 == (undefined *)0x0) {
LAB_106f3982c:
            func_0x00010befa120(puVar4);
          }
          else {
            unaff_x24 = unaff_x23;
            func_0x00010bf6eec0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x24;
            func_0x00010bf4b900();
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            if ((int)unaff_x26 != 0) goto LAB_106f3982c;
          }
          puVar13 = puVar13 + 1;
        } while (puVar2 != puVar13);
        puVar2 = param_6;
        ppuVar7 = &puStack_2e0;
        func_0x00010bf52a60();
        unaff_x22 = (undefined8 *)0x0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_6);
    puVar2 = param_6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_220) {
      ___stack_chk_fail();
      ppuVar8 = &puStack_400;
      pcStack_2e8 = FUN_106f398b0;
      lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_330 = unaff_x26;
      puStack_328 = unaff_x25;
      puStack_320 = unaff_x24;
      puStack_318 = unaff_x23;
      puStack_310 = unaff_x22;
      puStack_308 = puVar6;
      puStack_300 = puVar4;
      puStack_2f8 = param_6;
      ppuStack_2f0 = &puStack_1c0;
      _objc_retain(ppuVar7);
      func_0x00010be75420();
      _objc_retainAutoreleasedReturnValue();
      lStack_3f8 = 0;
      puStack_400 = (undefined *)0x0;
      uStack_3e8 = 0;
      plStack_3f0 = (long *)0x0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      _objc_retain();
      ppuVar9 = apuStack_3b8;
      puVar13 = puVar2;
      func_0x00010bf52a60();
      if (puVar13 != (undefined1 *)0x0) {
        lVar12 = *plStack_3f0;
        do {
          puVar11 = (undefined1 *)0x0;
          do {
            if (*plStack_3f0 != lVar12) {
              _objc_enumerationMutation(puVar2);
            }
            puVar4 = *(undefined **)(lStack_3f8 + (long)puVar11 * 8);
            ppuVar8 = ppuVar7;
            func_0x00010c101c80();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            if (puVar4 != (undefined *)0x0) goto LAB_106f399f8;
            puVar11 = puVar11 + 1;
          } while (puVar13 != puVar11);
          ppuVar9 = apuStack_3b8;
          puVar13 = puVar2;
          ppuVar8 = &puStack_400;
          func_0x00010bf52a60();
        } while (puVar13 != (undefined1 *)0x0);
      }
      _objc_release(puVar2);
      if (ppuVar7 == (undefined **)0x0) {
        puVar4 = PTR_PTR_1126d34b0;
        _objc_opt_new(PTR_PTR_1126d34b0);
        puVar5 = (undefined1 *)0x0;
LAB_106f399f8:
        _objc_release(puVar5);
      }
      else if (param_8 == (undefined8 *)0x0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        ppuVar8 = &PTR____CFConstantStringClassReference_110e877f8;
        ppuVar9 = &PTR____CFConstantStringClassReference_110e8e898;
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar4 = (undefined *)0x0;
        *param_8 = puVar3;
      }
      _objc_release(puVar2);
      _objc_release(ppuVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
        ___stack_chk_fail();
        _objc_retain(ppuVar8);
        if (ppuVar9 == (undefined **)0x9) {
          puVar4 = (undefined *)0x1;
        }
        else {
          puVar4 = (undefined *)0x1;
          puVar3 = PTR_PTR_1126d33e0;
          func_0x00010c2401e0();
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = PTR_PTR_1126d33e0;
            func_0x00010c2401e0();
            puVar4 = (undefined *)0x2;
            if ((int)puVar3 == 0) {
              puVar4 = (undefined *)0x0;
            }
          }
        }
        _objc_release(ppuVar8);
        return puVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106f396fc; end: 106f398af; -[SCPluginEffectSnapRendererImplV2 _pluginFactoriesForDestination:factories:] */

undefined *
FUN_106f396fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined *unaff_x25;
  long lVar10;
  long unaff_x26;
  long lVar11;
  long lVar12;
  undefined *puStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *apuStack_208 [16];
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  ppuVar5 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar7 = auStack_f0;
  uVar9 = 0x10;
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x23 = *(long *)(lStack_128 + lVar12 * 8);
        unaff_x24 = unaff_x23;
        func_0x00010bf6eec0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = unaff_x24;
        func_0x00010bf529e0();
        _objc_release(unaff_x24);
        unaff_x25 = (undefined *)0x0;
        if (lVar10 == 0) {
LAB_106f3982c:
          func_0x00010befa120(puVar2,param_2,unaff_x23);
        }
        else {
          unaff_x24 = unaff_x23;
          func_0x00010bf6eec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x24;
          func_0x00010bf4b900(unaff_x24,param_2,unaff_x25);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          if ((int)unaff_x26 != 0) goto LAB_106f3982c;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar7 = auStack_f0;
      uVar9 = 0x10;
      lVar1 = param_4;
      ppuVar5 = &puStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  lVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar6 = &puStack_250;
    pcStack_138 = FUN_106f398b0;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    lStack_170 = unaff_x24;
    lStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    uStack_158 = param_3;
    puStack_150 = puVar2;
    lStack_148 = param_4;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar5);
    func_0x00010be75420(lVar1,param_2,uVar9,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    puStack_250 = (undefined *)0x0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain();
    ppuVar8 = apuStack_208;
    lVar11 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&puStack_250,ppuVar8,0x10);
    if (lVar11 != 0) {
      lVar12 = *plStack_240;
      do {
        lVar10 = 0;
        do {
          if (*plStack_240 != lVar12) {
            _objc_enumerationMutation(lVar1);
          }
          puVar2 = *(undefined **)(lStack_248 + lVar10 * 8);
          ppuVar6 = ppuVar5;
          func_0x00010c101c80(puVar2,param_2,ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar1;
          if (puVar2 != (undefined *)0x0) goto LAB_106f399f8;
          lVar10 = lVar10 + 1;
        } while (lVar11 != lVar10);
        ppuVar8 = apuStack_208;
        lVar11 = lVar1;
        ppuVar6 = &puStack_250;
        func_0x00010bf52a60(lVar1,param_2,&puStack_250,ppuVar8,0x10);
      } while (lVar11 != 0);
    }
    _objc_release(lVar1);
    if (ppuVar5 == (undefined **)0x0) {
      puVar2 = PTR_PTR_1126d34b0;
      _objc_opt_new(PTR_PTR_1126d34b0);
      lVar4 = 0;
LAB_106f399f8:
      _objc_release(lVar4);
    }
    else if (param_6 == (undefined8 *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e877f8;
      ppuVar8 = &PTR____CFConstantStringClassReference_110e8e898;
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e877f8,
                          &PTR____CFConstantStringClassReference_110e8e898,0xb);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar2 = (undefined *)0x0;
      *param_6 = puVar3;
    }
    _objc_release(lVar1);
    _objc_release(ppuVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_retain(ppuVar6);
      if (ppuVar8 == (undefined **)0x9) {
        puVar2 = (undefined *)0x1;
      }
      else {
        puVar2 = (undefined *)0x1;
        puVar3 = PTR_PTR_1126d33e0;
        func_0x00010c2401e0(PTR_PTR_1126d33e0,param_2,ppuVar6,1,0);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = PTR_PTR_1126d33e0;
          func_0x00010c2401e0(PTR_PTR_1126d33e0,param_2,ppuVar6,0,0);
          puVar2 = (undefined *)0x2;
          if ((int)puVar3 == 0) {
            puVar2 = (undefined *)0x0;
          }
        }
      }
      _objc_release(ppuVar6);
      return puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 106f398b0; end: 106f39a67; -[SCPluginEffectSnapRendererImplV2 _pluginWithCTItem:plugins:destination:error:] */

undefined *
FUN_106f398b0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *apuStack_d8 [16];
  long lStack_58;
  
  ppuVar5 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be75420(param_1,param_2,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  puStack_120 = (undefined *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  ppuVar6 = apuStack_d8;
  lVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&puStack_120,ppuVar6,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        puVar2 = *(undefined **)(lStack_118 + lVar8 * 8);
        ppuVar5 = param_3;
        func_0x00010c101c80(puVar2,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        if (puVar2 != (undefined *)0x0) goto LAB_106f399f8;
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      ppuVar6 = apuStack_d8;
      lVar1 = param_1;
      ppuVar5 = &puStack_120;
      func_0x00010bf52a60(param_1,param_2,&puStack_120,ppuVar6,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  if (param_3 == (undefined **)0x0) {
    puVar2 = PTR_PTR_1126d34b0;
    _objc_opt_new(PTR_PTR_1126d34b0);
    lVar4 = 0;
LAB_106f399f8:
    _objc_release(lVar4);
  }
  else if (param_6 == (undefined8 *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e8e898;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e877f8,
                        &PTR____CFConstantStringClassReference_110e8e898,0xb);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar2 = (undefined *)0x0;
    *param_6 = puVar3;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    if (ppuVar6 == (undefined **)0x9) {
      puVar2 = (undefined *)0x1;
    }
    else {
      puVar2 = (undefined *)0x1;
      puVar3 = PTR_PTR_1126d33e0;
      func_0x00010c2401e0(PTR_PTR_1126d33e0,param_2,ppuVar5,1,0);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = PTR_PTR_1126d33e0;
        func_0x00010c2401e0(PTR_PTR_1126d33e0,param_2,ppuVar5,0,0);
        puVar2 = (undefined *)0x2;
        if ((int)puVar3 == 0) {
          puVar2 = (undefined *)0x0;
        }
      }
    }
    _objc_release(ppuVar5);
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 106f39a68; end: 106f39af3; -[SCPluginEffectSnapRendererImplV2 _renderingPathForSnapDoc:destination:] */

undefined8 FUN_106f39a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 9) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    puVar1 = PTR_PTR_1126d33e0;
    func_0x00010c2401e0(PTR_PTR_1126d33e0,param_2,param_3,1,0);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_1126d33e0;
      func_0x00010c2401e0(PTR_PTR_1126d33e0,param_2,param_3,0,0);
      uVar2 = 2;
      if ((int)puVar1 == 0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106f39af4; end: 106f39bb7; -[SCPluginEffectSnapRendererImplV2 _mediasFutureForSnapDoc:renderingPath:error:] */

void FUN_106f39af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
    uVar2 = 0;
  }
  else {
    if (param_4 != 1) {
      if (param_5 == (undefined8 *)0x0) {
        param_1 = 0;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110e877f8,
                            &PTR____CFConstantStringClassReference_110e8e8b8,0x1e);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        param_1 = 0;
        *param_5 = puVar1;
      }
      goto LAB_106f39b9c;
    }
    uVar2 = 1;
  }
  func_0x00010be5ee80(param_1,param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_106f39b9c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f39bb8; end: 106f39e03; -[SCPluginEffectSnapRendererImplV2 _durationMsForSnapDoc:renderingPath:error:] */

undefined *
FUN_106f39bb8(undefined **param_1,undefined8 param_2,undefined **param_3,long param_4,
             undefined8 *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined1 uStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
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
  lVar11 = param_4;
  _objc_retain(param_3);
  uVar8 = (undefined1)lVar11;
  puVar2 = PTR_PTR_1126d33e0;
  ppuVar9 = param_3;
  func_0x00010bf8b360();
  if ((param_4 == 2) && (puVar2 == (undefined *)0x0)) {
    puVar2 = param_1[0xc];
    func_0x000109127f70();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppuVar9 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = ppuVar9;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    ppuVar9 = &puStack_130;
    uVar8 = SUB81(auStack_f0,0);
    ppuVar3 = param_1;
    func_0x00010bf52a60();
    if (ppuVar3 == (undefined **)0x0) {
      _objc_release(param_1);
    }
    else {
      bVar1 = 0;
      lVar11 = *plStack_120;
      puStack_140 = param_5;
      ppuStack_138 = param_3;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_1);
          }
          uVar10 = *(ulong *)(lStack_128 + (long)ppuVar9 * 8);
          uVar4 = uVar10;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 != 0) {
            uVar5 = uVar10;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c27dd80();
            _objc_release(uVar5);
            _objc_release(uVar4);
            if ((int)uVar6 == 1) {
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar10;
              func_0x00010c0c4bc0();
              _objc_release(uVar10);
              if ((undefined *)(uVar4 & 0xffffffff) <= puVar2) {
                puVar2 = (undefined *)(uVar4 & 0xffffffff);
              }
              bVar1 = 1;
            }
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar3 != ppuVar9);
        ppuVar9 = &puStack_130;
        uVar8 = SUB81(auStack_f0,0);
        ppuVar3 = param_1;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
      _objc_release(param_1);
      param_3 = ppuStack_138;
      param_5 = puStack_140;
      if ((bool)(puVar2 == (undefined *)0x0 & bVar1)) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e877f8;
        uVar8 = 0xd8;
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar2 = (undefined *)0x0;
        *param_5 = puVar7;
      }
    }
  }
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106f39e04;
  ppuStack_170 = param_1;
  puStack_168 = puVar2;
  puStack_160 = param_5;
  ppuStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  puVar2 = PTR_PTR_1126d33e0;
  func_0x00010c066260(PTR_PTR_1126d33e0,param_2,ppuVar9,ppuVar3[1],ppuVar3[3]);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_106f39ed4;
  puStack_190 = &UNK_110984008;
  ppuStack_188 = ppuVar9;
  ppuStack_180 = ppuVar3;
  uStack_178 = uVar8;
  _objc_retain(ppuVar9);
  puVar7 = puVar2;
  func_0x00010bfb2660(puVar2,param_2,&puStack_1a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuStack_188);
  _objc_release(ppuVar9);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 106f39e04; end: 106f39ed3; -[SCPluginEffectSnapRendererImplV2 _mediasFutureForSnapDoc:imageOnly:] */

void FUN_106f39e04(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d33e0;
  func_0x00010c066260(PTR_PTR_1126d33e0,param_2,param_3,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f39ed4;
  puStack_50 = &UNK_110984008;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010bfb2660(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f39ed4; end: 106f3a8a3;  */

void FUN_106f39ed4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puStack_240;
  long lStack_208;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126d33e0;
  func_0x00010c0efca0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_2);
  lStack_208 = param_2;
  func_0x00010bf52a60();
  if (lStack_208 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar17 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        puVar16 = *(undefined **)(lStack_138 + lVar17 * 8);
        puVar2 = puVar16;
        func_0x00010c0c5980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260();
          _objc_retainAutoreleasedReturnValue();
          puStack_240 = PTR_PTR_1126ae558;
          func_0x00010bfe9c80();
          _objc_retainAutoreleasedReturnValue();
LAB_106f3a828:
          _objc_release(puVar2);
          _objc_release(param_2);
          goto LAB_106f3a838;
        }
        puVar2 = puVar16;
        func_0x00010c0c5980();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar16;
        func_0x00010c0c6c20();
        puVar3 = puVar16;
        func_0x00010c09d7e0();
        _objc_retainAutoreleasedReturnValue();
        if ((int)puVar4 == 1) {
          puVar4 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x70);
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 == (undefined *)0x0) {
LAB_106f3a0a4:
            puStack_148 = (undefined *)0x0;
            puVar4 = PTR_PTR_1126d33e0;
            func_0x00010c28f580(PTR_PTR_1126d33e0);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puStack_148;
            _objc_retain(puStack_148);
            if (puVar14 != (undefined *)0x0) {
LAB_106f3a7f0:
              puStack_240 = PTR_PTR_1126ae558;
              func_0x00010bfe9c80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar14);
              _objc_release(puVar4);
              _objc_release(puVar3);
              goto LAB_106f3a828;
            }
            puVar14 = puVar3;
            func_0x00010c08fa60();
            if (puVar14 != (undefined *)0x0) {
              func_0x00010c1d0560(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70));
            }
          }
          else {
            puVar14 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x00010bf69bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0f5800(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar14;
            func_0x00010bfacbe0();
            _objc_release(puVar5);
            _objc_release(puVar14);
            if (((ulong)puVar6 & 1) == 0) {
              _objc_release(puVar4);
              goto LAB_106f3a0a4;
            }
          }
          puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
          func_0x00010bf0b9e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR_PTR_1126d34a0;
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar8 = PTR_PTR_1126ae558;
          if (*(char *)(param_1 + 0x30) == '\x01') {
            puVar14 = *(undefined **)(param_1 + 0x28);
            func_0x00010c277f00(puVar16);
            func_0x00010c0df760(puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            if (puVar16 == (undefined *)0x0) {
              uStack_168 = 0;
              uStack_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
            }
            else {
              func_0x00010c26f620(&uStack_180,puVar16);
            }
            func_0x00010c297240();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010becbc60(puVar14);
            _objc_retainAutoreleasedReturnValue();
LAB_106f3a610:
            func_0x00010befa120(puVar1);
          }
          else {
            func_0x00010c299e60(puVar16);
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c277f00(puVar16);
            func_0x00010c0df760(puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            if (puVar16 == (undefined *)0x0) {
              uStack_168 = 0;
              uStack_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
            }
            else {
              func_0x00010c26f620(&uStack_180,puVar16);
            }
            func_0x00010c297240();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29bda0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe9ca0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(puVar8);
          }
          _objc_release(puVar14);
          _objc_release(puVar6);
          _objc_release(puVar7);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        else {
          puVar4 = puVar3;
          func_0x00010c08fa60();
          if ((puVar4 != (undefined *)0x0) &&
             (puVar4 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x68), puVar4 != (undefined *)0x0
             )) {
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126d34a0;
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar14 = PTR_PTR_1126ae558;
            if (puVar4 == (undefined *)0x0) goto LAB_106f3a1f8;
            func_0x00010c277f00(puVar16);
            func_0x00010c0df760();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            if (puVar16 == (undefined *)0x0) {
              uStack_168 = 0;
              uStack_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
            }
            else {
              func_0x00010c26f620(&uStack_180,puVar16);
            }
            func_0x00010c297240(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe9560();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe9ca0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106f3a610;
          }
LAB_106f3a1f8:
          puVar4 = puVar2;
          func_0x00010b7f5374();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar4 == (undefined *)0x0) ||
             (puVar14 = puVar4, func_0x00010c08fa60(), puVar14 == (undefined *)0x0)) {
            puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106f3a7f0;
          }
          puVar14 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010c14d040();
          _objc_retainAutoreleasedReturnValue();
          if (puVar14 == (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            puStack_240 = PTR_PTR_1126ae558;
            func_0x00010bfe9c80();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar5 = *(undefined **)(param_1 + 0x28);
            func_0x00010bf5c6c0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c277f00(puVar16);
            func_0x00010c0df760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar15;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            if (puVar7 == (undefined *)0x0) {
              puVar6 = puVar3;
              func_0x00010c08fa60();
              if ((puVar6 != (undefined *)0x0) && (*(long *)(*(long *)(param_1 + 0x28) + 0x68) != 0)
                 ) {
                func_0x00010c1d0560();
              }
              puVar11 = PTR_PTR_1126d34a0;
              puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              puVar6 = PTR_PTR_1126ae558;
              func_0x00010c277f00(puVar16);
              func_0x00010c0df760(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              if (puVar16 == (undefined *)0x0) {
                uStack_168 = 0;
                uStack_170 = 0;
                uStack_158 = 0;
                uStack_160 = 0;
                uStack_178 = 0;
                uStack_180 = 0;
              }
              else {
                func_0x00010c26f620(&uStack_180,puVar16);
              }
              func_0x00010c297240(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe9560(puVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe9ca0(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              _objc_release(puVar6);
              _objc_release(puVar11);
              _objc_release(puVar10);
            }
            else {
              func_0x00010c277f00();
              if (puVar16 == (undefined *)0x0) {
                uStack_168 = 0;
                uStack_170 = 0;
                uStack_158 = 0;
                uStack_160 = 0;
                uStack_178 = 0;
                uStack_180 = 0;
              }
              else {
                func_0x00010c26f620(&uStack_180,puVar16);
              }
              puVar16 = PTR_PTR_1126d33e0;
              uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
              func_0x00010c269d40(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ef9c0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(puVar5);
              _objc_retain(puVar3);
              puVar6 = puVar16;
              func_0x00010c0b8600(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              _objc_release(puVar6);
              _objc_release(puVar16);
              _objc_release(uVar9);
              _objc_release(puVar3);
              puVar8 = puVar5;
            }
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
          _objc_release(puVar5);
          _objc_release(puVar14);
          _objc_release(puVar4);
          _objc_release(puVar3);
          if (puVar14 == (undefined *)0x0) goto LAB_106f3a828;
        }
        _objc_release(puVar2);
        lVar17 = lVar17 + 1;
      } while (lStack_208 != lVar17);
      lStack_208 = param_2;
      func_0x00010bf52a60();
    } while (lStack_208 != 0);
  }
  _objc_release(param_2);
  puStack_240 = PTR_PTR_1126ae558;
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
LAB_106f3a838:
  _objc_release(puVar15);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(lVar12);
    puVar15 = *(undefined **)(param_2 + 0x20);
    _objc_retain(puVar15);
    puVar1 = puVar15;
    if (lVar12 != 0) {
      puVar1 = PTR_PTR_1126d33e0;
      func_0x00010bf89a80(PTR_PTR_1126d33e0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
    }
    lVar13 = *(long *)(param_2 + 0x28);
    func_0x00010c08fa60();
    if ((lVar13 != 0) && (*(long *)(*(long *)(param_2 + 0x30) + 0x68) != 0)) {
      func_0x00010c1d0560();
    }
    puStack_240 = PTR_PTR_1126d34a0;
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9560(puStack_240);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar15);
    _objc_release(puVar1);
    _objc_release(lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_240);
  return;
}



/* Entry: 106f3a8a4; end: 106f3a9db;  */

void FUN_106f3a8a4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar5 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar5);
  puVar1 = puVar5;
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126d33e0;
    func_0x00010bf89a80(PTR_PTR_1126d33e0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x68) != 0) {
      func_0x00010c1d0560();
    }
  }
  puVar5 = PTR_PTR_1126d34a0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9560(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f3a9dc; end: 106f3abd3; -[SCPluginEffectSnapRendererImplV2 _musicSelectionWithSnapDocEditor:] */

void FUN_106f3a9dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c0ff5a0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110984038);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  if (lVar3 == 0) {
    lVar5 = param_3;
    func_0x00010c0ff5a0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110984058);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar6 == 0) {
      func_0x00010bf43d60(puVar1,param_2,0);
      goto LAB_106f3ab70;
    }
    func_0x00010c0ff640(param_3,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e0a0(param_1,param_2,lVar2,puVar1);
  }
  else {
    lVar6 = param_3;
    func_0x00010c0ff640(param_3,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c7240(param_3,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar5);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106f3ac20;
    puStack_68 = &UNK_1108b9050;
    _objc_retain(puVar1);
    puStack_60 = puVar1;
    lStack_58 = param_1;
    func_0x00010c297260(lVar2,param_2,&puStack_80,*(undefined8 *)(param_1 + 0x18));
    _objc_release(puStack_60);
  }
  _objc_release(lVar2);
LAB_106f3ab70:
  _objc_release(lVar6);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f3abd4; end: 106f3ac17;  */

bool FUN_106f3abd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 2;
}



/* Entry: 106f3ac18; end: 106f3ac1f;  */

bool FUN_106f3ac18(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 4) {
    uVar2 = param_2;
    func_0x00010bf5cc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf96ee0();
    bVar1 = (int)uVar5 == 7;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106f3ac20; end: 106f3ad37;  */

void FUN_106f3ac20(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_opt_class(uVar3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135ea0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106f3ad38; end: 106f3ad43;  */

void FUN_106f3ad38(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106f3ad44; end: 106f3aff7; -[SCPluginEffectSnapRendererImplV2 _loadMusicSelectionWithMusicTrackPlaybackLayer:promise:] */

void FUN_106f3ad44(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf5cc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3a00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf939e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = puVar5;
  func_0x00010bf4db80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf43d60(param_4,param_2,0);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf92c80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf92c60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c09ae60(lVar6,param_2,puVar1,puVar2,puVar3,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar6);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar8 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e8e938);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar2,param_2,&PTR____CFConstantStringClassReference_110e877f8,puVar3,
                          0x1f);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010bf43ca0(param_4,param_2,puVar2);
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_106f3aff8;
      puStack_78 = &UNK_1108b9050;
      _objc_retain(param_3);
      puStack_70 = param_3;
      _objc_retain(param_4);
      uStack_68 = param_4;
      func_0x00010c297260(lVar8,param_2,&puStack_90,*(undefined8 *)(param_1 + 0x18));
      _objc_release(uStack_68);
      puVar2 = puStack_70;
    }
    _objc_release(puVar2);
    _objc_release(lVar8);
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f3aff8; end: 106f3b037;  */

void FUN_106f3aff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_106f3e64c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f3b038; end: 106f3b11b; -[SCPluginEffectSnapRendererImplV2 _overlayImageFromSnapDoc:] */

void FUN_106f3b038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b0018;
  _objc_alloc(PTR_PTR_1126b0018);
  func_0x00010c047840();
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f3b11c;
  puStack_48 = &UNK_110984078;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c13e8c0(puVar2,param_2,&puStack_60);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f3b11c; end: 106f3b217;  */

void FUN_106f3b11c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if ((param_2 == 0) || (param_4 != 0)) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0ef880();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    _objc_retain(0);
    uVar3 = uVar2;
    func_0x00010c1511c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106f3b218; end: 106f3b3b3; -[SCPluginEffectSnapRendererImplV2 _globalOverlayImageFutureForEditor:] */

void FUN_106f3b218(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfbf5a0();
  if ((uVar1 & 1) == 0) {
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c0ff5a0(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109840a8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      puVar6 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = PTR_PTR_1126ae560;
      _objc_opt_new();
      lVar5 = *(long *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010bfbfe00(0x4090e00000000000,0x409e000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar3 == 0) {
        func_0x00010bf43d60(puVar4,param_2,0);
      }
      else {
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_106f3b3d4;
        puStack_50 = &UNK_11086dbb8;
        _objc_retain(puVar4);
        puStack_48 = puVar4;
        func_0x00010c297260(lVar3,param_2,&puStack_68,*(undefined8 *)(param_1 + 0x18));
        _objc_release(puStack_48);
      }
      puVar6 = puVar4;
      func_0x00010bfbc3e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f3b3b4; end: 106f3b3d3;  */

bool FUN_106f3b3b4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c3a0(param_2);
  return (int)param_2 == 4;
}



/* Entry: 106f3b3d4; end: 106f3b3df;  */

void FUN_106f3b3d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106f3b3e0; end: 106f3b3f3; -[SCPluginEffectSnapRendererImplV2 _warmupFramesFromMedias:] */

void FUN_106f3b3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map_notFoundMarker__11260bba0,&PTR___NSConcreteGlobalBlock_1109840c8,0);
  return;
}



/* Entry: 106f3b3f4; end: 106f3b4ef;  */

void FUN_106f3b3f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106f331a0;
  uStack_30 = 0x106f331b0;
  uStack_28 = 0;
  func_0x00010c0be4e0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f3b4f0; end: 106f3b527;  */

void FUN_106f3b4f0(long param_1,undefined8 param_2)

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



/* Entry: 106f3b528; end: 106f3b5af;  */

void FUN_106f3b528(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe97a0(0x4086800000000000,0x4094000000000000,0x3ff0000000000000,puVar2,param_2,puVar1
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f3b5b0; end: 106f3b5c3; -[SCPluginEffectSnapRendererImplV2 _imagesFromMedias:] */

void FUN_106f3b5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map_notFoundMarker__11260bba0,&PTR___NSConcreteGlobalBlock_1109840e8,0);
  return;
}



/* Entry: 106f3b5c4; end: 106f3b6a3;  */

void FUN_106f3b5c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106f331a0;
  uStack_30 = 0x106f331b0;
  uStack_28 = 0;
  func_0x00010c0be4e0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f3b6a4; end: 106f3b6db;  */

void FUN_106f3b6a4(long param_1,undefined8 param_2)

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



/* Entry: 106f3b6dc; end: 106f3b6ef; -[SCPluginEffectSnapRendererImplV2 _videosFromMedias:] */

void FUN_106f3b6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map_notFoundMarker__11260bba0,&PTR___NSConcreteGlobalBlock_110984108,0);
  return;
}



/* Entry: 106f3b6f0; end: 106f3b7cf;  */

void FUN_106f3b6f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106f331a0;
  uStack_30 = 0x106f331b0;
  uStack_28 = 0;
  func_0x00010c0be4e0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f3b7d0; end: 106f3b807;  */

void FUN_106f3b7d0(long param_1,undefined8 param_2)

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



/* Entry: 106f3b808; end: 106f3bad3; -[SCPluginEffectSnapRendererImplV2 _thumbnailMediaFutureForAsset:videoURL:trackIndex:timeRange:] */

void FUN_106f3b808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0f5800(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = puVar7;
  func_0x00010bf0e880(puVar7,param_2,uVar8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  func_0x00010bf0b300(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c169b80(puVar2,param_2,1);
  uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar9 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_a0 = uVar9;
  uStack_98 = uVar10;
  uStack_90 = uVar8;
  func_0x00010c1ec3e0(puVar2,param_2,&uStack_a0);
  uStack_a0 = uVar9;
  uStack_98 = uVar10;
  uStack_90 = uVar8;
  func_0x00010c1ec3c0(puVar2,param_2,&uStack_a0);
  if (param_6 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_a0,param_6);
  }
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  uStack_b0 = uStack_90;
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106f3bad4;
  puStack_f0 = &UNK_110984128;
  puStack_e8 = puVar2;
  puStack_e0 = puVar7;
  uStack_d8 = param_1;
  lStack_d0 = param_5;
  lStack_c8 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  puVar5 = puVar4;
  func_0x00010bfbf180(puVar2,param_2,puVar4,&puStack_108);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar7;
  func_0x00010bfbc3e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lStack_c8);
  _objc_release(lStack_d0);
  _objc_release(puStack_e0);
  _objc_release(puStack_e8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((puVar5 == (undefined *)0x0) || (lVar6 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e8e958);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar7,param_2,&PTR____CFConstantStringClassReference_110e877f8,puVar2,0x1f)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf43ca0(*(undefined8 *)(puVar1 + 0x28),param_2,puVar7);
  }
  else {
    puVar7 = *(undefined **)(puVar1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5c6c0(puVar7,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)(puVar1 + 0x28);
    puVar2 = PTR_PTR_1126d34a0;
    func_0x00010bfe9560(PTR_PTR_1126d34a0,param_2,puVar7,*(undefined8 *)(puVar1 + 0x38),
                        *(undefined8 *)(puVar1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar8,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106f3bad4; end: 106f3bbe7;  */

void FUN_106f3bad4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_3 == 0) || (param_5 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e8e958);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar2,param_2,&PTR____CFConstantStringClassReference_110e877f8,puVar1,0x1f)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x30);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5c6c0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR_PTR_1126d34a0;
    func_0x00010bfe9560(PTR_PTR_1126d34a0,param_2,puVar2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106f3bbe8; end: 106f3bde7; -[SCPluginEffectSnapRendererImplV2 cropImageTo9_16:] */

void FUN_106f3bbe8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  if (ABS(0.5625 - param_1 / param_2) <= 0.01) {
    bVar1 = true;
    bVar2 = false;
    if (1080.0 <= param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_2)) {
        bVar1 = param_2 < 1920.0;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      bVar1 = false;
      bVar2 = true;
      if (param_1 <= 2160.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(param_2)) {
          bVar1 = param_2 == 3840.0;
          bVar2 = 3840.0 <= param_2;
        }
      }
      puVar5 = param_5;
      if (!bVar2 || bVar1) goto LAB_106f3bdc4;
    }
  }
  if (param_1 / param_2 <= 0.5625) {
    dVar7 = param_1 / 0.5625;
    dVar6 = param_1;
  }
  else {
    dVar6 = param_2 * 0.5625;
    dVar7 = param_2;
  }
  if (1080.0 <= dVar6) {
    dVar8 = 1.0;
    if (2160.0 < dVar6) {
      dVar8 = 2160.0 / dVar6;
    }
  }
  else {
    dVar8 = 1080.0 / dVar6;
  }
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5fe0(0x3ff0000000000000);
  func_0x00010c1d4c20(puVar3,param_4,1);
  func_0x00010c1e0260(puVar3,param_4,2);
  puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c046ac0(dVar6 * dVar8,dVar7 * dVar8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106f3bde8;
  puStack_90 = &UNK_1108e4d60;
  puStack_88 = param_5;
  dStack_80 = (param_1 - dVar6) * -0.5 * dVar8;
  dStack_78 = (param_2 - dVar7) * -0.5 * dVar8;
  dStack_70 = param_1 * dVar8;
  dStack_68 = param_2 * dVar8;
  _objc_retain(param_5);
  puVar5 = puVar4;
  func_0x00010bfe91c0(puVar4,param_4,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_88);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_106f3bdc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f3bde8; end: 106f3bdfb;  */

void FUN_106f3bde8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 106f3bdfc; end: 106f3bed3; -[SCPluginEffectSnapRendererImplV2 .cxx_destruct] */

void FUN_106f3bdfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 106f3bed4; end: 106f3bfbb;  */

undefined1 FUN_106f3bed4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  func_0x00010c0bc940(uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}


