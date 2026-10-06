/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af70260; end: 10af702c3; -[SCTweakConfigurationMarshaller getBinaryValue:] */

void FUN_10af70260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dec68;
  func_0x00010bdc1360();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c119600(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af702c4; end: 10af70327; -[SCTweakConfigurationMarshaller getBooleanValue:] */

void FUN_10af702c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dec68;
  func_0x00010bdc1360();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f480(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af70328; end: 10af7038b; -[SCTweakConfigurationMarshaller getIntegerValue:] */

void FUN_10af70328(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dec68;
  func_0x00010bdc1360();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c067f40(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af7038c; end: 10af70397; -[SCTweakConfigurationMarshaller .cxx_destruct] */

void FUN_10af7038c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af70398; end: 10af7039f; -[SCCompositeConfigurationDelegate systemType] */

undefined8 FUN_10af70398(void)

{
  return 4;
}



/* Entry: 10af703a0; end: 10af703c3; -[SCCompositeConfigurationDelegate getConfigurationState] */

void FUN_10af703a0(void)

{
  _objc_alloc(PTR_PTR_1126ba000);
  func_0x00010bfff5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af703c4; end: 10af70473; -[SCCompositeConfigurationDelegate boolValueForKey:] */

void FUN_10af703c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10af70474(param_3,0,0x28,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    pcVar3 = *(code **)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0f3900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*pcVar3)();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10af70474; end: 10af70663;  */

long FUN_10af70474(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [128];
  
  _objc_retain();
  lVar3 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  _CFStringGetCStringPtr();
  if (lVar2 == 0) {
    lVar4 = param_1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar2 != 0) goto LAB_10af70514;
  }
  else {
    _objc_release(lVar3);
LAB_10af70514:
    lVar3 = lVar2;
    _strchr(lVar2,0x1f);
    if (lVar3 != 0) {
      lVar4 = lVar3 - lVar2;
      lStack_e8 = 0x80;
      uStack_f0 = 0;
      puStack_f8 = auStack_e0;
      func_0x0001080e44e0(&puStack_f8,lVar4 + 1,&UNK_10e53f0f1);
      _memcpy(puStack_f8,lVar2,lVar4);
      puStack_f8[lVar4] = 0;
      puVar1 = puStack_f8;
      _bsearch(puStack_f8,param_4,param_5,0x10,0x10af70938);
      if ((puVar1 == (undefined1 *)0x0) || (lVar2 = *(long *)(puVar1 + 8), lVar2 == 0)) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar3 + 1;
        _bsearch(lVar3,*(undefined8 *)(lVar2 + param_2),*(undefined8 *)(lVar2 + param_3),0x10,
                 0x10af70940);
      }
      if ((lStack_e8 != 0) && (auStack_e0 != puStack_f8)) {
        __ZdlPv();
      }
      goto LAB_10af705e0;
    }
  }
  lVar3 = 0;
LAB_10af705e0:
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10af70664; end: 10af70713; -[SCCompositeConfigurationDelegate intValueForKey:] */

void FUN_10af70664(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10af70474(param_3,8,0x30,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    pcVar3 = *(code **)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0f3900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*pcVar3)();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10af70714; end: 10af707c3; -[SCCompositeConfigurationDelegate floatValueForKey:] */

void FUN_10af70714(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10af70474(param_3,0x10,0x38,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    pcVar3 = *(code **)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0f3900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*pcVar3)();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10af707c4; end: 10af70873; -[SCCompositeConfigurationDelegate stringValueForKey:] */

void FUN_10af707c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10af70474(param_3,0x18,0x40,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    pcVar3 = *(code **)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0f3900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*pcVar3)();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10af70874; end: 10af70923; -[SCCompositeConfigurationDelegate protoValueForKey:] */

void FUN_10af70874(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10af70474(param_3,0x20,0x48,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    pcVar3 = *(code **)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0f3900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*pcVar3)();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10af70924; end: 10af7092b; -[SCCompositeConfigurationDelegate getGrapheneContextBytes] */

undefined8 FUN_10af70924(void)

{
  return 0;
}



/* Entry: 10af7092c; end: 10af70953; -[SCCompositeConfigurationDelegate .cxx_destruct] */

void FUN_10af7092c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af70954; end: 10af7095b; -[SCCompositeConfiguration systemType] */

undefined8 FUN_10af70954(void)

{
  return 4;
}



/* Entry: 10af7095c; end: 10af7097f; -[SCCompositeConfiguration getConfigurationState] */

void FUN_10af7095c(void)

{
  _objc_alloc(PTR_PTR_1126ba000);
  func_0x00010bfff5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af70980; end: 10af70c8f; -[SCCompositeConfiguration boolValueForKey:] */

long FUN_10af70980(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong unaff_x26;
  long unaff_x27;
  long lVar12;
  long unaff_x28;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_460;
  long lStack_450;
  long lStack_448;
  ulong uStack_440;
  long lStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 **ppuStack_400;
  code *pcStack_3f8;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_310;
  long lStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  puVar11 = param_3;
  func_0x00010c267420();
  if (puVar11 == (undefined8 *)0x4) {
    lVar1 = *(long *)(param_1 + 0x10);
    puVar7 = param_3;
    func_0x00010bf1f480();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_retain(param_3);
      puVar2 = PTR_PTR_1126dec60;
      _objc_opt_class(PTR_PTR_1126dec60);
      puVar11 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      unaff_x20 = param_3;
      if (((ulong)puVar11 & 1) == 0) {
        unaff_x20 = (undefined8 *)0x0;
      }
      _objc_retain(unaff_x20);
      _objc_release(param_3);
      puVar11 = unaff_x20;
      puStack_140 = unaff_x20;
      func_0x00010bf46860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lStack_148 = lVar1;
      if (puVar11 == (undefined8 *)0x0) {
        lVar12 = 0;
        unaff_x23 = (undefined8 *)0x0;
      }
      else {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        puStack_120 = (undefined8 *)0x0;
        unaff_x23 = unaff_x20;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = &uStack_130;
        unaff_x24 = unaff_x23;
        func_0x00010bf52a60();
        if (unaff_x24 == (undefined8 *)0x0) {
          lVar12 = 0;
        }
        else {
          unaff_x20 = (undefined8 *)*puStack_120;
          puStack_138 = unaff_x23;
          do {
            puVar11 = (undefined8 *)0x0;
            do {
              if ((undefined8 *)*puStack_120 != unaff_x20) {
                _objc_enumerationMutation(puStack_138);
              }
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              puVar7 = *(undefined8 **)(lStack_128 + (long)puVar11 * 8);
              unaff_x28 = *(long *)(param_1 + 8);
              func_0x00010c267420(puVar7);
              func_0x00010c0df780(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x28;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x28);
              _objc_release(puVar2);
              lVar12 = unaff_x27;
              func_0x00010bf1f480();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = (ulong)(lVar12 == 0);
              _objc_release(unaff_x27);
              unaff_x23 = puStack_138;
              if (lVar12 != 0) goto LAB_10af70b9c;
              puVar11 = (undefined8 *)((long)puVar11 + 1);
            } while (unaff_x24 != puVar11);
            puVar7 = &uStack_130;
            unaff_x24 = puStack_138;
            func_0x00010bf52a60();
          } while (unaff_x24 != (undefined8 *)0x0);
          lVar12 = 0;
          unaff_x23 = puStack_138;
        }
LAB_10af70b9c:
        _objc_release(unaff_x23);
      }
      _objc_release(puStack_140);
      lVar1 = lStack_148;
    }
    else {
      _objc_retain(lVar1);
      lVar12 = lVar1;
    }
    _objc_release(lVar1);
  }
  else {
    lVar12 = 0;
  }
  puVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puStack_138);
    _objc_release(puStack_140);
    _objc_release(param_3);
    puVar3 = puVar11;
    __Unwind_Resume();
    pcStack_158 = FUN_10af70c90;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar7;
    lStack_1b0 = unaff_x28;
    lStack_1a8 = unaff_x27;
    uStack_1a0 = unaff_x26;
    lStack_198 = lVar12;
    puStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    lStack_180 = param_1;
    puStack_178 = puVar11;
    puStack_170 = unaff_x20;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar11 = puVar7;
    func_0x00010c267420();
    if (puVar11 == (undefined8 *)0x4) {
      lVar1 = puVar3[2];
      puVar10 = puVar7;
      func_0x00010c067f40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        _objc_retain(puVar7);
        puVar2 = PTR_PTR_1126dec60;
        _objc_opt_class(PTR_PTR_1126dec60);
        puVar11 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar2);
        unaff_x20 = puVar7;
        if (((ulong)puVar11 & 1) == 0) {
          unaff_x20 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x20);
        _objc_release(puVar7);
        puVar11 = unaff_x20;
        puStack_290 = unaff_x20;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lStack_298 = lVar1;
        if (puVar11 == (undefined8 *)0x0) {
          lVar12 = 0;
          unaff_x23 = (undefined8 *)0x0;
        }
        else {
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          uStack_250 = 0;
          lStack_278 = 0;
          uStack_280 = 0;
          uStack_268 = 0;
          puStack_270 = (undefined8 *)0x0;
          unaff_x23 = unaff_x20;
          func_0x00010bf46860();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = &uStack_280;
          unaff_x24 = unaff_x23;
          func_0x00010bf52a60();
          if (unaff_x24 == (undefined8 *)0x0) {
            lVar12 = 0;
          }
          else {
            unaff_x20 = (undefined8 *)*puStack_270;
            puStack_288 = unaff_x23;
            do {
              puVar11 = (undefined8 *)0x0;
              do {
                if ((undefined8 *)*puStack_270 != unaff_x20) {
                  _objc_enumerationMutation(puStack_288);
                }
                puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                puVar10 = *(undefined8 **)(lStack_278 + (long)puVar11 * 8);
                unaff_x28 = puVar3[1];
                func_0x00010c267420(puVar10);
                func_0x00010c0df780(puVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x28;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x28);
                _objc_release(puVar2);
                lVar12 = unaff_x27;
                func_0x00010c067f40();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = (ulong)(lVar12 == 0);
                _objc_release(unaff_x27);
                unaff_x23 = puStack_288;
                if (lVar12 != 0) goto LAB_10af70eac;
                puVar11 = (undefined8 *)((long)puVar11 + 1);
              } while (unaff_x24 != puVar11);
              puVar10 = &uStack_280;
              unaff_x24 = puStack_288;
              func_0x00010bf52a60();
            } while (unaff_x24 != (undefined8 *)0x0);
            lVar12 = 0;
            unaff_x23 = puStack_288;
          }
LAB_10af70eac:
          _objc_release(unaff_x23);
        }
        _objc_release(puStack_290);
        lVar1 = lStack_298;
      }
      else {
        _objc_retain(lVar1);
        lVar12 = lVar1;
      }
      _objc_release(lVar1);
    }
    else {
      lVar12 = 0;
    }
    puVar11 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      _objc_release(puStack_288);
      _objc_release(puStack_290);
      _objc_release(puVar7);
      puVar8 = puVar11;
      __Unwind_Resume();
      pcStack_2a8 = FUN_10af70fa0;
      lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = puVar10;
      lStack_300 = unaff_x28;
      lStack_2f8 = unaff_x27;
      uStack_2f0 = unaff_x26;
      lStack_2e8 = lVar12;
      puStack_2e0 = unaff_x24;
      puStack_2d8 = unaff_x23;
      puStack_2d0 = puVar3;
      puStack_2c8 = puVar11;
      puStack_2c0 = unaff_x20;
      puStack_2b8 = puVar7;
      ppuStack_2b0 = &puStack_160;
      _objc_retain(puVar10);
      puVar7 = puVar10;
      func_0x00010c267420();
      if (puVar7 == (undefined8 *)0x4) {
        lVar1 = puVar8[2];
        puVar9 = puVar10;
        func_0x00010bfb2d00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          _objc_retain(puVar10);
          puVar2 = PTR_PTR_1126dec60;
          _objc_opt_class(PTR_PTR_1126dec60);
          puVar7 = puVar10;
          _objc_opt_isKindOfClass(puVar10,puVar2);
          unaff_x20 = puVar10;
          if (((ulong)puVar7 & 1) == 0) {
            unaff_x20 = (undefined8 *)0x0;
          }
          _objc_retain(unaff_x20);
          _objc_release(puVar10);
          puVar7 = unaff_x20;
          puStack_3e0 = unaff_x20;
          func_0x00010bf46860();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          lStack_3e8 = lVar1;
          if (puVar7 == (undefined8 *)0x0) {
            lVar12 = 0;
            unaff_x23 = (undefined8 *)0x0;
          }
          else {
            uStack_3a8 = 0;
            uStack_3b0 = 0;
            uStack_398 = 0;
            uStack_3a0 = 0;
            lStack_3c8 = 0;
            uStack_3d0 = 0;
            uStack_3b8 = 0;
            puStack_3c0 = (undefined8 *)0x0;
            unaff_x23 = unaff_x20;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = &uStack_3d0;
            unaff_x24 = unaff_x23;
            func_0x00010bf52a60();
            if (unaff_x24 == (undefined8 *)0x0) {
              lVar12 = 0;
            }
            else {
              unaff_x20 = (undefined8 *)*puStack_3c0;
              puStack_3d8 = unaff_x23;
              do {
                puVar7 = (undefined8 *)0x0;
                do {
                  if ((undefined8 *)*puStack_3c0 != unaff_x20) {
                    _objc_enumerationMutation(puStack_3d8);
                  }
                  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  puVar9 = *(undefined8 **)(lStack_3c8 + (long)puVar7 * 8);
                  unaff_x28 = puVar8[1];
                  func_0x00010c267420(puVar9);
                  func_0x00010c0df780(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = unaff_x28;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x28);
                  _objc_release(puVar2);
                  lVar12 = unaff_x27;
                  func_0x00010bfb2d00();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x26 = (ulong)(lVar12 == 0);
                  _objc_release(unaff_x27);
                  unaff_x23 = puStack_3d8;
                  if (lVar12 != 0) goto LAB_10af711bc;
                  puVar7 = (undefined8 *)((long)puVar7 + 1);
                } while (unaff_x24 != puVar7);
                puVar9 = &uStack_3d0;
                unaff_x24 = puStack_3d8;
                func_0x00010bf52a60();
              } while (unaff_x24 != (undefined8 *)0x0);
              lVar12 = 0;
              unaff_x23 = puStack_3d8;
            }
LAB_10af711bc:
            _objc_release(unaff_x23);
          }
          _objc_release(puStack_3e0);
          lVar1 = lStack_3e8;
        }
        else {
          _objc_retain(lVar1);
          lVar12 = lVar1;
        }
        _objc_release(lVar1);
      }
      else {
        lVar12 = 0;
      }
      puVar7 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_310) {
        ___stack_chk_fail();
        _objc_release(puStack_3d8);
        _objc_release(puStack_3e0);
        _objc_release(puVar10);
        puVar3 = puVar7;
        __Unwind_Resume();
        pcStack_3f8 = FUN_10af712b0;
        lStack_460 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar11 = puVar9;
        lStack_450 = unaff_x28;
        lStack_448 = unaff_x27;
        uStack_440 = unaff_x26;
        lStack_438 = lVar12;
        puStack_430 = unaff_x24;
        puStack_428 = unaff_x23;
        puStack_420 = puVar8;
        puStack_418 = puVar7;
        puStack_410 = unaff_x20;
        puStack_408 = puVar10;
        ppuStack_400 = &ppuStack_2b0;
        _objc_retain(puVar9);
        puVar7 = puVar9;
        func_0x00010c267420();
        if (puVar7 == (undefined8 *)0x4) {
          lVar1 = puVar3[2];
          puVar11 = puVar9;
          func_0x00010c25d7e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar1 == 0) {
            _objc_retain(puVar9);
            puVar2 = PTR_PTR_1126dec60;
            _objc_opt_class(PTR_PTR_1126dec60);
            puVar7 = puVar9;
            _objc_opt_isKindOfClass(puVar9,puVar2);
            puStack_530 = puVar9;
            if (((ulong)puVar7 & 1) == 0) {
              puStack_530 = (undefined8 *)0x0;
            }
            _objc_retain(puStack_530);
            _objc_release(puVar9);
            puVar7 = puStack_530;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar7 == (undefined8 *)0x0) {
              lVar12 = 0;
            }
            else {
              uStack_4f8 = 0;
              uStack_500 = 0;
              uStack_4e8 = 0;
              uStack_4f0 = 0;
              lStack_518 = 0;
              uStack_520 = 0;
              uStack_508 = 0;
              plStack_510 = (long *)0x0;
              puVar7 = puStack_530;
              func_0x00010bf46860();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = &uStack_520;
              puVar10 = puVar7;
              func_0x00010bf52a60();
              if (puVar10 == (undefined8 *)0x0) {
                lVar12 = 0;
              }
              else {
                lVar5 = *plStack_510;
                do {
                  puVar8 = (undefined8 *)0x0;
                  do {
                    if (*plStack_510 != lVar5) {
                      _objc_enumerationMutation(puVar7);
                    }
                    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    puVar11 = *(undefined8 **)(lStack_518 + (long)puVar8 * 8);
                    lVar12 = puVar3[1];
                    func_0x00010c267420(puVar11);
                    func_0x00010c0df780(puVar2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar4 = lVar12;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar12);
                    _objc_release(puVar2);
                    lVar12 = lVar4;
                    func_0x00010c25d7e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar4);
                    puStack_528 = puVar7;
                    if (lVar12 != 0) goto LAB_10af714cc;
                    puVar8 = (undefined8 *)((long)puVar8 + 1);
                  } while (puVar10 != puVar8);
                  puVar11 = &uStack_520;
                  puVar10 = puVar7;
                  func_0x00010bf52a60();
                } while (puVar10 != (undefined8 *)0x0);
                lVar12 = 0;
              }
LAB_10af714cc:
              _objc_release(puVar7);
            }
            _objc_release(puStack_530);
          }
          else {
            _objc_retain(lVar1);
            lVar12 = lVar1;
          }
          _objc_release(lVar1);
        }
        else {
          lVar12 = 0;
        }
        puVar7 = puVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_460) {
          ___stack_chk_fail();
          _objc_release(puStack_528);
          _objc_release(puStack_530);
          _objc_release(puVar9);
          __Unwind_Resume();
          lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(puVar11);
          puVar10 = puVar11;
          func_0x00010c267420();
          if (puVar10 == (undefined8 *)0x4) {
            lVar5 = puVar7[2];
            func_0x00010c119600();
            _objc_retainAutoreleasedReturnValue();
            if (lVar5 == 0) {
              _objc_retain(puVar11);
              puVar2 = PTR_PTR_1126dec60;
              _objc_opt_class(PTR_PTR_1126dec60);
              puVar10 = puVar11;
              _objc_opt_isKindOfClass(puVar11,puVar2);
              puStack_680 = puVar11;
              if (((ulong)puVar10 & 1) == 0) {
                puStack_680 = (undefined8 *)0x0;
              }
              _objc_retain(puStack_680);
              _objc_release(puVar11);
              puVar10 = puStack_680;
              func_0x00010bf46860();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar10 == (undefined8 *)0x0) {
                lVar12 = 0;
              }
              else {
                puVar10 = puStack_680;
                func_0x00010bf46860();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar10;
                func_0x00010bf52a60();
                lVar4 = lRam0000000000000000;
                if (puVar3 == (undefined8 *)0x0) {
                  lVar12 = 0;
                }
                else {
                  do {
                    puVar9 = (undefined8 *)0x0;
                    do {
                      if (lRam0000000000000000 != lVar4) {
                        _objc_enumerationMutation(puVar10);
                      }
                      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      lVar12 = puVar7[1];
                      func_0x00010c267420(*(undefined8 *)((long)puVar9 * 8));
                      func_0x00010c0df780(puVar2);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0e00e0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar6 = lVar12;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(lVar12);
                      _objc_release(puVar2);
                      lVar12 = lVar6;
                      func_0x00010c119600();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(lVar6);
                      puStack_678 = puVar10;
                      if (lVar12 != 0) goto LAB_10af717dc;
                      puVar9 = (undefined8 *)((long)puVar9 + 1);
                    } while (puVar3 != puVar9);
                    puVar3 = puVar10;
                    func_0x00010bf52a60();
                  } while (puVar3 != (undefined8 *)0x0);
                  lVar12 = 0;
                }
LAB_10af717dc:
                _objc_release(puVar10);
              }
              _objc_release(puStack_680);
            }
            else {
              _objc_retain(lVar5);
              lVar12 = lVar5;
            }
            _objc_release(lVar5);
          }
          else {
            lVar12 = 0;
          }
          puVar7 = puVar11;
          _objc_release(puVar11);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
            ___stack_chk_fail();
            _objc_release(puStack_678);
            _objc_release(puStack_680);
            _objc_release(puVar11);
            __Unwind_Resume(puVar7);
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return lVar12;
}



/* Entry: 10af70c90; end: 10af70f9f; -[SCCompositeConfiguration intValueForKey:] */

long FUN_10af70c90(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong unaff_x26;
  long unaff_x27;
  long lVar12;
  long unaff_x28;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_310;
  long lStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  puVar7 = param_3;
  func_0x00010c267420();
  if (puVar7 == (undefined8 *)0x4) {
    lVar1 = *(long *)(param_1 + 0x10);
    puVar9 = param_3;
    func_0x00010c067f40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_retain(param_3);
      puVar2 = PTR_PTR_1126dec60;
      _objc_opt_class(PTR_PTR_1126dec60);
      puVar7 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      unaff_x20 = param_3;
      if (((ulong)puVar7 & 1) == 0) {
        unaff_x20 = (undefined8 *)0x0;
      }
      _objc_retain(unaff_x20);
      _objc_release(param_3);
      puVar7 = unaff_x20;
      puStack_140 = unaff_x20;
      func_0x00010bf46860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lStack_148 = lVar1;
      if (puVar7 == (undefined8 *)0x0) {
        lVar12 = 0;
        unaff_x23 = (undefined8 *)0x0;
      }
      else {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        puStack_120 = (undefined8 *)0x0;
        unaff_x23 = unaff_x20;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = &uStack_130;
        unaff_x24 = unaff_x23;
        func_0x00010bf52a60();
        if (unaff_x24 == (undefined8 *)0x0) {
          lVar12 = 0;
        }
        else {
          unaff_x20 = (undefined8 *)*puStack_120;
          puStack_138 = unaff_x23;
          do {
            puVar7 = (undefined8 *)0x0;
            do {
              if ((undefined8 *)*puStack_120 != unaff_x20) {
                _objc_enumerationMutation(puStack_138);
              }
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              puVar9 = *(undefined8 **)(lStack_128 + (long)puVar7 * 8);
              unaff_x28 = *(long *)(param_1 + 8);
              func_0x00010c267420(puVar9);
              func_0x00010c0df780(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x28;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x28);
              _objc_release(puVar2);
              lVar12 = unaff_x27;
              func_0x00010c067f40();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = (ulong)(lVar12 == 0);
              _objc_release(unaff_x27);
              unaff_x23 = puStack_138;
              if (lVar12 != 0) goto LAB_10af70eac;
              puVar7 = (undefined8 *)((long)puVar7 + 1);
            } while (unaff_x24 != puVar7);
            puVar9 = &uStack_130;
            unaff_x24 = puStack_138;
            func_0x00010bf52a60();
          } while (unaff_x24 != (undefined8 *)0x0);
          lVar12 = 0;
          unaff_x23 = puStack_138;
        }
LAB_10af70eac:
        _objc_release(unaff_x23);
      }
      _objc_release(puStack_140);
      lVar1 = lStack_148;
    }
    else {
      _objc_retain(lVar1);
      lVar12 = lVar1;
    }
    _objc_release(lVar1);
  }
  else {
    lVar12 = 0;
  }
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puStack_138);
    _objc_release(puStack_140);
    _objc_release(param_3);
    puVar8 = puVar7;
    __Unwind_Resume();
    pcStack_158 = FUN_10af70fa0;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar9;
    lStack_1b0 = unaff_x28;
    lStack_1a8 = unaff_x27;
    uStack_1a0 = unaff_x26;
    lStack_198 = lVar12;
    puStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    lStack_180 = param_1;
    puStack_178 = puVar7;
    puStack_170 = unaff_x20;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    puVar7 = puVar9;
    func_0x00010c267420();
    if (puVar7 == (undefined8 *)0x4) {
      lVar1 = puVar8[2];
      puVar10 = puVar9;
      func_0x00010bfb2d00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        _objc_retain(puVar9);
        puVar2 = PTR_PTR_1126dec60;
        _objc_opt_class(PTR_PTR_1126dec60);
        puVar7 = puVar9;
        _objc_opt_isKindOfClass(puVar9,puVar2);
        unaff_x20 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          unaff_x20 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x20);
        _objc_release(puVar9);
        puVar7 = unaff_x20;
        puStack_290 = unaff_x20;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lStack_298 = lVar1;
        if (puVar7 == (undefined8 *)0x0) {
          lVar12 = 0;
          unaff_x23 = (undefined8 *)0x0;
        }
        else {
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          uStack_250 = 0;
          lStack_278 = 0;
          uStack_280 = 0;
          uStack_268 = 0;
          puStack_270 = (undefined8 *)0x0;
          unaff_x23 = unaff_x20;
          func_0x00010bf46860();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = &uStack_280;
          unaff_x24 = unaff_x23;
          func_0x00010bf52a60();
          if (unaff_x24 == (undefined8 *)0x0) {
            lVar12 = 0;
          }
          else {
            unaff_x20 = (undefined8 *)*puStack_270;
            puStack_288 = unaff_x23;
            do {
              puVar7 = (undefined8 *)0x0;
              do {
                if ((undefined8 *)*puStack_270 != unaff_x20) {
                  _objc_enumerationMutation(puStack_288);
                }
                puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                puVar10 = *(undefined8 **)(lStack_278 + (long)puVar7 * 8);
                unaff_x28 = puVar8[1];
                func_0x00010c267420(puVar10);
                func_0x00010c0df780(puVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x28;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x28);
                _objc_release(puVar2);
                lVar12 = unaff_x27;
                func_0x00010bfb2d00();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = (ulong)(lVar12 == 0);
                _objc_release(unaff_x27);
                unaff_x23 = puStack_288;
                if (lVar12 != 0) goto LAB_10af711bc;
                puVar7 = (undefined8 *)((long)puVar7 + 1);
              } while (unaff_x24 != puVar7);
              puVar10 = &uStack_280;
              unaff_x24 = puStack_288;
              func_0x00010bf52a60();
            } while (unaff_x24 != (undefined8 *)0x0);
            lVar12 = 0;
            unaff_x23 = puStack_288;
          }
LAB_10af711bc:
          _objc_release(unaff_x23);
        }
        _objc_release(puStack_290);
        lVar1 = lStack_298;
      }
      else {
        _objc_retain(lVar1);
        lVar12 = lVar1;
      }
      _objc_release(lVar1);
    }
    else {
      lVar12 = 0;
    }
    puVar7 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      _objc_release(puStack_288);
      _objc_release(puStack_290);
      _objc_release(puVar9);
      puVar3 = puVar7;
      __Unwind_Resume();
      pcStack_2a8 = FUN_10af712b0;
      lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar11 = puVar10;
      lStack_300 = unaff_x28;
      lStack_2f8 = unaff_x27;
      uStack_2f0 = unaff_x26;
      lStack_2e8 = lVar12;
      puStack_2e0 = unaff_x24;
      puStack_2d8 = unaff_x23;
      puStack_2d0 = puVar8;
      puStack_2c8 = puVar7;
      puStack_2c0 = unaff_x20;
      puStack_2b8 = puVar9;
      ppuStack_2b0 = &puStack_160;
      _objc_retain(puVar10);
      puVar9 = puVar10;
      func_0x00010c267420();
      if (puVar9 == (undefined8 *)0x4) {
        lVar1 = puVar3[2];
        puVar11 = puVar10;
        func_0x00010c25d7e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          _objc_retain(puVar10);
          puVar2 = PTR_PTR_1126dec60;
          _objc_opt_class(PTR_PTR_1126dec60);
          puVar9 = puVar10;
          _objc_opt_isKindOfClass(puVar10,puVar2);
          puStack_3e0 = puVar10;
          if (((ulong)puVar9 & 1) == 0) {
            puStack_3e0 = (undefined8 *)0x0;
          }
          _objc_retain(puStack_3e0);
          _objc_release(puVar10);
          puVar9 = puStack_3e0;
          func_0x00010bf46860();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar9 == (undefined8 *)0x0) {
            lVar12 = 0;
          }
          else {
            uStack_3a8 = 0;
            uStack_3b0 = 0;
            uStack_398 = 0;
            uStack_3a0 = 0;
            lStack_3c8 = 0;
            uStack_3d0 = 0;
            uStack_3b8 = 0;
            plStack_3c0 = (long *)0x0;
            puVar9 = puStack_3e0;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = &uStack_3d0;
            puVar7 = puVar9;
            func_0x00010bf52a60();
            if (puVar7 == (undefined8 *)0x0) {
              lVar12 = 0;
            }
            else {
              lVar5 = *plStack_3c0;
              do {
                puVar8 = (undefined8 *)0x0;
                do {
                  if (*plStack_3c0 != lVar5) {
                    _objc_enumerationMutation(puVar9);
                  }
                  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  puVar11 = *(undefined8 **)(lStack_3c8 + (long)puVar8 * 8);
                  lVar12 = puVar3[1];
                  func_0x00010c267420(puVar11);
                  func_0x00010c0df780(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar12;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar12);
                  _objc_release(puVar2);
                  lVar12 = lVar4;
                  func_0x00010c25d7e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar4);
                  puStack_3d8 = puVar9;
                  if (lVar12 != 0) goto LAB_10af714cc;
                  puVar8 = (undefined8 *)((long)puVar8 + 1);
                } while (puVar7 != puVar8);
                puVar11 = &uStack_3d0;
                puVar7 = puVar9;
                func_0x00010bf52a60();
              } while (puVar7 != (undefined8 *)0x0);
              lVar12 = 0;
            }
LAB_10af714cc:
            _objc_release(puVar9);
          }
          _objc_release(puStack_3e0);
        }
        else {
          _objc_retain(lVar1);
          lVar12 = lVar1;
        }
        _objc_release(lVar1);
      }
      else {
        lVar12 = 0;
      }
      puVar9 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_310) {
        ___stack_chk_fail();
        _objc_release(puStack_3d8);
        _objc_release(puStack_3e0);
        _objc_release(puVar10);
        __Unwind_Resume();
        lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar11);
        puVar7 = puVar11;
        func_0x00010c267420();
        if (puVar7 == (undefined8 *)0x4) {
          lVar5 = puVar9[2];
          func_0x00010c119600();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            _objc_retain(puVar11);
            puVar2 = PTR_PTR_1126dec60;
            _objc_opt_class(PTR_PTR_1126dec60);
            puVar7 = puVar11;
            _objc_opt_isKindOfClass(puVar11,puVar2);
            puStack_530 = puVar11;
            if (((ulong)puVar7 & 1) == 0) {
              puStack_530 = (undefined8 *)0x0;
            }
            _objc_retain(puStack_530);
            _objc_release(puVar11);
            puVar7 = puStack_530;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar7 == (undefined8 *)0x0) {
              lVar12 = 0;
            }
            else {
              puVar7 = puStack_530;
              func_0x00010bf46860();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar7;
              func_0x00010bf52a60();
              lVar4 = lRam0000000000000000;
              if (puVar10 == (undefined8 *)0x0) {
                lVar12 = 0;
              }
              else {
                do {
                  puVar8 = (undefined8 *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar4) {
                      _objc_enumerationMutation(puVar7);
                    }
                    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    lVar12 = puVar9[1];
                    func_0x00010c267420(*(undefined8 *)((long)puVar8 * 8));
                    func_0x00010c0df780(puVar2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar6 = lVar12;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar12);
                    _objc_release(puVar2);
                    lVar12 = lVar6;
                    func_0x00010c119600();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar6);
                    puStack_528 = puVar7;
                    if (lVar12 != 0) goto LAB_10af717dc;
                    puVar8 = (undefined8 *)((long)puVar8 + 1);
                  } while (puVar10 != puVar8);
                  puVar10 = puVar7;
                  func_0x00010bf52a60();
                } while (puVar10 != (undefined8 *)0x0);
                lVar12 = 0;
              }
LAB_10af717dc:
              _objc_release(puVar7);
            }
            _objc_release(puStack_530);
          }
          else {
            _objc_retain(lVar5);
            lVar12 = lVar5;
          }
          _objc_release(lVar5);
        }
        else {
          lVar12 = 0;
        }
        puVar9 = puVar11;
        _objc_release(puVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
          ___stack_chk_fail();
          _objc_release(puStack_528);
          _objc_release(puStack_530);
          _objc_release(puVar11);
          __Unwind_Resume(puVar9);
          return 0;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return lVar12;
}



/* Entry: 10af70fa0; end: 10af712af; -[SCCompositeConfiguration floatValueForKey:] */

long FUN_10af70fa0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong unaff_x26;
  long unaff_x27;
  long lVar12;
  long unaff_x28;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  puVar7 = param_3;
  func_0x00010c267420();
  if (puVar7 == (undefined8 *)0x4) {
    lVar1 = *(long *)(param_1 + 0x10);
    puVar10 = param_3;
    func_0x00010bfb2d00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_retain(param_3);
      puVar2 = PTR_PTR_1126dec60;
      _objc_opt_class(PTR_PTR_1126dec60);
      puVar7 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      unaff_x20 = param_3;
      if (((ulong)puVar7 & 1) == 0) {
        unaff_x20 = (undefined8 *)0x0;
      }
      _objc_retain(unaff_x20);
      _objc_release(param_3);
      puVar7 = unaff_x20;
      puStack_140 = unaff_x20;
      func_0x00010bf46860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lStack_148 = lVar1;
      if (puVar7 == (undefined8 *)0x0) {
        lVar12 = 0;
        unaff_x23 = (undefined8 *)0x0;
      }
      else {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        puStack_120 = (undefined8 *)0x0;
        unaff_x23 = unaff_x20;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = &uStack_130;
        unaff_x24 = unaff_x23;
        func_0x00010bf52a60();
        if (unaff_x24 == (undefined8 *)0x0) {
          lVar12 = 0;
        }
        else {
          unaff_x20 = (undefined8 *)*puStack_120;
          puStack_138 = unaff_x23;
          do {
            puVar7 = (undefined8 *)0x0;
            do {
              if ((undefined8 *)*puStack_120 != unaff_x20) {
                _objc_enumerationMutation(puStack_138);
              }
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              puVar10 = *(undefined8 **)(lStack_128 + (long)puVar7 * 8);
              unaff_x28 = *(long *)(param_1 + 8);
              func_0x00010c267420(puVar10);
              func_0x00010c0df780(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x28;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x28);
              _objc_release(puVar2);
              lVar12 = unaff_x27;
              func_0x00010bfb2d00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = (ulong)(lVar12 == 0);
              _objc_release(unaff_x27);
              unaff_x23 = puStack_138;
              if (lVar12 != 0) goto LAB_10af711bc;
              puVar7 = (undefined8 *)((long)puVar7 + 1);
            } while (unaff_x24 != puVar7);
            puVar10 = &uStack_130;
            unaff_x24 = puStack_138;
            func_0x00010bf52a60();
          } while (unaff_x24 != (undefined8 *)0x0);
          lVar12 = 0;
          unaff_x23 = puStack_138;
        }
LAB_10af711bc:
        _objc_release(unaff_x23);
      }
      _objc_release(puStack_140);
      lVar1 = lStack_148;
    }
    else {
      _objc_retain(lVar1);
      lVar12 = lVar1;
    }
    _objc_release(lVar1);
  }
  else {
    lVar12 = 0;
  }
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puStack_138);
    _objc_release(puStack_140);
    _objc_release(param_3);
    puVar3 = puVar7;
    __Unwind_Resume();
    pcStack_158 = FUN_10af712b0;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar10;
    lStack_1b0 = unaff_x28;
    lStack_1a8 = unaff_x27;
    uStack_1a0 = unaff_x26;
    lStack_198 = lVar12;
    puStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    lStack_180 = param_1;
    puStack_178 = puVar7;
    puStack_170 = unaff_x20;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    puVar7 = puVar10;
    func_0x00010c267420();
    if (puVar7 == (undefined8 *)0x4) {
      lVar1 = puVar3[2];
      puVar11 = puVar10;
      func_0x00010c25d7e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        _objc_retain(puVar10);
        puVar2 = PTR_PTR_1126dec60;
        _objc_opt_class(PTR_PTR_1126dec60);
        puVar7 = puVar10;
        _objc_opt_isKindOfClass(puVar10,puVar2);
        puStack_290 = puVar10;
        if (((ulong)puVar7 & 1) == 0) {
          puStack_290 = (undefined8 *)0x0;
        }
        _objc_retain(puStack_290);
        _objc_release(puVar10);
        puVar7 = puStack_290;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 == (undefined8 *)0x0) {
          lVar12 = 0;
        }
        else {
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          uStack_250 = 0;
          lStack_278 = 0;
          uStack_280 = 0;
          uStack_268 = 0;
          plStack_270 = (long *)0x0;
          puVar7 = puStack_290;
          func_0x00010bf46860();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = &uStack_280;
          puVar9 = puVar7;
          func_0x00010bf52a60();
          if (puVar9 == (undefined8 *)0x0) {
            lVar12 = 0;
          }
          else {
            lVar5 = *plStack_270;
            do {
              puVar8 = (undefined8 *)0x0;
              do {
                if (*plStack_270 != lVar5) {
                  _objc_enumerationMutation(puVar7);
                }
                puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                puVar11 = *(undefined8 **)(lStack_278 + (long)puVar8 * 8);
                lVar12 = puVar3[1];
                func_0x00010c267420(puVar11);
                func_0x00010c0df780(puVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar12;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar12);
                _objc_release(puVar2);
                lVar12 = lVar4;
                func_0x00010c25d7e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar4);
                puStack_288 = puVar7;
                if (lVar12 != 0) goto LAB_10af714cc;
                puVar8 = (undefined8 *)((long)puVar8 + 1);
              } while (puVar9 != puVar8);
              puVar11 = &uStack_280;
              puVar9 = puVar7;
              func_0x00010bf52a60();
            } while (puVar9 != (undefined8 *)0x0);
            lVar12 = 0;
          }
LAB_10af714cc:
          _objc_release(puVar7);
        }
        _objc_release(puStack_290);
      }
      else {
        _objc_retain(lVar1);
        lVar12 = lVar1;
      }
      _objc_release(lVar1);
    }
    else {
      lVar12 = 0;
    }
    puVar7 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      _objc_release(puStack_288);
      _objc_release(puStack_290);
      _objc_release(puVar10);
      __Unwind_Resume();
      lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar11);
      puVar10 = puVar11;
      func_0x00010c267420();
      if (puVar10 == (undefined8 *)0x4) {
        lVar5 = puVar7[2];
        func_0x00010c119600();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          _objc_retain(puVar11);
          puVar2 = PTR_PTR_1126dec60;
          _objc_opt_class(PTR_PTR_1126dec60);
          puVar10 = puVar11;
          _objc_opt_isKindOfClass(puVar11,puVar2);
          puStack_3e0 = puVar11;
          if (((ulong)puVar10 & 1) == 0) {
            puStack_3e0 = (undefined8 *)0x0;
          }
          _objc_retain(puStack_3e0);
          _objc_release(puVar11);
          puVar10 = puStack_3e0;
          func_0x00010bf46860();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar10 == (undefined8 *)0x0) {
            lVar12 = 0;
          }
          else {
            puVar10 = puStack_3e0;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar10;
            func_0x00010bf52a60();
            lVar4 = lRam0000000000000000;
            if (puVar3 == (undefined8 *)0x0) {
              lVar12 = 0;
            }
            else {
              do {
                puVar9 = (undefined8 *)0x0;
                do {
                  if (lRam0000000000000000 != lVar4) {
                    _objc_enumerationMutation(puVar10);
                  }
                  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  lVar12 = puVar7[1];
                  func_0x00010c267420(*(undefined8 *)((long)puVar9 * 8));
                  func_0x00010c0df780(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar12;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar12);
                  _objc_release(puVar2);
                  lVar12 = lVar6;
                  func_0x00010c119600();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar6);
                  puStack_3d8 = puVar10;
                  if (lVar12 != 0) goto LAB_10af717dc;
                  puVar9 = (undefined8 *)((long)puVar9 + 1);
                } while (puVar3 != puVar9);
                puVar3 = puVar10;
                func_0x00010bf52a60();
              } while (puVar3 != (undefined8 *)0x0);
              lVar12 = 0;
            }
LAB_10af717dc:
            _objc_release(puVar10);
          }
          _objc_release(puStack_3e0);
        }
        else {
          _objc_retain(lVar5);
          lVar12 = lVar5;
        }
        _objc_release(lVar5);
      }
      else {
        lVar12 = 0;
      }
      puVar10 = puVar11;
      _objc_release(puVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
        ___stack_chk_fail();
        _objc_release(puStack_3d8);
        _objc_release(puStack_3e0);
        _objc_release(puVar11);
        __Unwind_Resume(puVar10);
        return 0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return lVar12;
}



/* Entry: 10af712b0; end: 10af715bf; -[SCCompositeConfiguration stringValueForKey:] */

long FUN_10af712b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
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
  puVar10 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c267420();
  if (puVar1 == (undefined8 *)0x4) {
    lVar2 = *(long *)(param_1 + 0x10);
    puVar10 = param_3;
    func_0x00010c25d7e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_retain(param_3);
      puVar3 = PTR_PTR_1126dec60;
      _objc_opt_class(PTR_PTR_1126dec60);
      puVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      puStack_140 = param_3;
      if (((ulong)puVar1 & 1) == 0) {
        puStack_140 = (undefined8 *)0x0;
      }
      _objc_retain(puStack_140);
      _objc_release(param_3);
      puVar1 = puStack_140;
      func_0x00010bf46860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 == (undefined8 *)0x0) {
        lVar11 = 0;
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
        puVar1 = puStack_140;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = &uStack_130;
        puVar4 = puVar1;
        func_0x00010bf52a60();
        if (puVar4 == (undefined8 *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar6 = *plStack_120;
          do {
            puVar8 = (undefined8 *)0x0;
            do {
              if (*plStack_120 != lVar6) {
                _objc_enumerationMutation(puVar1);
              }
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              puVar10 = *(undefined8 **)(lStack_128 + (long)puVar8 * 8);
              lVar11 = *(long *)(param_1 + 8);
              func_0x00010c267420(puVar10);
              func_0x00010c0df780(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar11;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar11);
              _objc_release(puVar3);
              lVar11 = lVar5;
              func_0x00010c25d7e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar5);
              puStack_138 = puVar1;
              if (lVar11 != 0) goto LAB_10af714cc;
              puVar8 = (undefined8 *)((long)puVar8 + 1);
            } while (puVar4 != puVar8);
            puVar10 = &uStack_130;
            puVar4 = puVar1;
            func_0x00010bf52a60();
          } while (puVar4 != (undefined8 *)0x0);
          lVar11 = 0;
        }
LAB_10af714cc:
        _objc_release(puVar1);
      }
      _objc_release(puStack_140);
    }
    else {
      _objc_retain(lVar2);
      lVar11 = lVar2;
    }
    _objc_release(lVar2);
  }
  else {
    lVar11 = 0;
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puStack_138);
    _objc_release(puStack_140);
    _objc_release(param_3);
    __Unwind_Resume();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar10);
    puVar4 = puVar10;
    func_0x00010c267420();
    if (puVar4 == (undefined8 *)0x4) {
      lVar6 = puVar1[2];
      func_0x00010c119600();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        _objc_retain(puVar10);
        puVar3 = PTR_PTR_1126dec60;
        _objc_opt_class(PTR_PTR_1126dec60);
        puVar4 = puVar10;
        _objc_opt_isKindOfClass(puVar10,puVar3);
        puStack_290 = puVar10;
        if (((ulong)puVar4 & 1) == 0) {
          puStack_290 = (undefined8 *)0x0;
        }
        _objc_retain(puStack_290);
        _objc_release(puVar10);
        puVar4 = puStack_290;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar4 == (undefined8 *)0x0) {
          lVar11 = 0;
        }
        else {
          puVar4 = puStack_290;
          func_0x00010bf46860();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar4;
          func_0x00010bf52a60();
          lVar5 = lRam0000000000000000;
          if (puVar8 == (undefined8 *)0x0) {
            lVar11 = 0;
          }
          else {
            do {
              puVar9 = (undefined8 *)0x0;
              do {
                if (lRam0000000000000000 != lVar5) {
                  _objc_enumerationMutation(puVar4);
                }
                puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                lVar11 = puVar1[1];
                func_0x00010c267420(*(undefined8 *)((long)puVar9 * 8));
                func_0x00010c0df780(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar11;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar11);
                _objc_release(puVar3);
                lVar11 = lVar7;
                func_0x00010c119600();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar7);
                puStack_288 = puVar4;
                if (lVar11 != 0) goto LAB_10af717dc;
                puVar9 = (undefined8 *)((long)puVar9 + 1);
              } while (puVar8 != puVar9);
              puVar8 = puVar4;
              func_0x00010bf52a60();
            } while (puVar8 != (undefined8 *)0x0);
            lVar11 = 0;
          }
LAB_10af717dc:
          _objc_release(puVar4);
        }
        _objc_release(puStack_290);
      }
      else {
        _objc_retain(lVar6);
        lVar11 = lVar6;
      }
      _objc_release(lVar6);
    }
    else {
      lVar11 = 0;
    }
    puVar1 = puVar10;
    _objc_release(puVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
      ___stack_chk_fail();
      _objc_release(puStack_288);
      _objc_release(puStack_290);
      _objc_release(puVar10);
      __Unwind_Resume(puVar1);
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return lVar11;
}



/* Entry: 10af715c0; end: 10af718cf; -[SCCompositeConfiguration protoValueForKey:] */

long FUN_10af715c0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_140;
  ulong uStack_138;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c267420();
  if (uVar2 == 4) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c119600();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_retain(param_3);
      puVar4 = PTR_PTR_1126dec60;
      _objc_opt_class(PTR_PTR_1126dec60);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      uStack_140 = param_3;
      if ((uVar2 & 1) == 0) {
        uStack_140 = 0;
      }
      _objc_retain(uStack_140);
      _objc_release(param_3);
      uVar2 = uStack_140;
      func_0x00010bf46860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 == 0) {
        lVar9 = 0;
      }
      else {
        uVar2 = uStack_140;
        func_0x00010bf46860();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (uVar5 == 0) {
          lVar9 = 0;
        }
        else {
          do {
            uVar8 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(uVar2);
              }
              puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              lVar9 = *(long *)(param_1 + 8);
              func_0x00010c267420(*(undefined8 *)(uVar8 * 8));
              func_0x00010c0df780(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar9;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar9);
              _objc_release(puVar4);
              lVar9 = lVar6;
              func_0x00010c119600();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar6);
              uStack_138 = uVar2;
              if (lVar9 != 0) goto LAB_10af717dc;
              uVar8 = uVar8 + 1;
            } while (uVar5 != uVar8);
            uVar5 = uVar2;
            func_0x00010bf52a60();
          } while (uVar5 != 0);
          lVar9 = 0;
        }
LAB_10af717dc:
        _objc_release(uVar2);
      }
      _objc_release(uStack_140);
    }
    else {
      _objc_retain(lVar3);
      lVar9 = lVar3;
    }
    _objc_release(lVar3);
  }
  else {
    lVar9 = 0;
  }
  uVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    _objc_release(param_3);
    __Unwind_Resume(uVar2);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return lVar9;
}



/* Entry: 10af718d0; end: 10af718d7; -[SCCompositeConfiguration getGrapheneContextBytes] */

undefined8 FUN_10af718d0(void)

{
  return 0;
}



/* Entry: 10af718d8; end: 10af71907; -[SCCompositeConfiguration .cxx_destruct] */

void FUN_10af718d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af71908; end: 10af7194f; +[SCQuickPerfloggerQuickPerfLoggerEventCallback onEventDidEnd:] */

void FUN_10af71908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010bffada0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af71950; end: 10af719c7; -[SCQuickPerfloggerQuickPerfLoggerEventCallback initWithCallback:] */

undefined1 * FUN_10af71950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702f00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af719c8; end: 10af719d7; -[SCQuickPerfloggerQuickPerfLoggerEventCallback onEventDidEnd:] */

void FUN_10af719c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010af719d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 10af719d8; end: 10af719e3; -[SCQuickPerfloggerQuickPerfLoggerEventCallback .cxx_destruct] */

void FUN_10af719d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af719e4; end: 10af71a23; -[SCQuickPerfLoggerImplementation startTopicWithTopic:backgroundPolicy:] */

void FUN_10af719e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010af72090();
                    /* WARNING: Could not recover jumptable at 0x00010c251350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startTopic_topicStartTimestampIn_112671ef8,param_3,
             lVar1,param_4);
  return;
}



/* Entry: 10af71a24; end: 10af71a2b; -[SCQuickPerfLoggerImplementation dropTopicWithTopic:instanceKey:] */

void FUN_10af71a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dropTopic_instanceKey__1125c0450);
  return;
}



/* Entry: 10af71a2c; end: 10af71a33; -[SCQuickPerfLoggerImplementation isTopicOnWithTopic:instanceKey:] */

void FUN_10af71a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0814b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isTopicOn_instanceKey__1125fdf38);
  return;
}



/* Entry: 10af71a34; end: 10af71a7b; -[SCQuickPerfLoggerImplementation addPointWithTopic:instanceKey:pointId:] */

void FUN_10af71a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010af72090();
                    /* WARNING: Could not recover jumptable at 0x00010befaa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addPoint_instanceKey_pointId_poi_11259c440,param_3,
             param_4,param_5,lVar1);
  return;
}



/* Entry: 10af71a7c; end: 10af71b57; -[SCQuickPerfLoggerImplementation endTopicWithTopic:instanceKey:state:errorCode:] */

void FUN_10af71a7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar1 = param_6;
  _objc_retain(param_6);
  func_0x00010af72090();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af71b58;
  puStack_60 = &UNK_110c99bb8;
  puVar2 = PTR_PTR_1126dec78;
  lStack_58 = param_1;
  func_0x00010c0e3fc0(PTR_PTR_1126dec78,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf958c0(uVar3,param_2,param_3,param_4,uVar1,param_5,param_6,puVar2);
  _objc_release(param_6);
  _objc_release(puVar2);
  return;
}



/* Entry: 10af71b58; end: 10af71b63;  */

void FUN_10af71b58(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logEvent__112572488,param_2);
  return;
}



/* Entry: 10af71b64; end: 10af71b6b; -[SCQuickPerfLoggerImplementation addAnnotationWithTopic:instanceKey:annotationKey:annotationValue:] */

void FUN_10af71b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addAnnotation_instanceKey_annota_11259b4e8);
  return;
}



/* Entry: 10af71b6c; end: 10af71c07; -[SCQuickPerfLoggerImplementation applicationDidEnterBackground] */

void FUN_10af71b6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010af72090();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10af71c08;
  puStack_40 = &UNK_110c99bb8;
  puVar2 = PTR_PTR_1126dec78;
  lStack_38 = param_1;
  func_0x00010c0e3fc0(PTR_PTR_1126dec78,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e380(uVar3,param_2,lVar1,puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 10af71c08; end: 10af71c13;  */

void FUN_10af71c08(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logEvent__112572488,param_2);
  return;
}



/* Entry: 10af71c14; end: 10af71c67; -[SCQuickPerfLoggerImplementation _logEvent:] */

void FUN_10af71c14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bde95a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af71c68; end: 10af71cdb; -[SCQuickPerfLoggerImplementation _convertToBlizzardEvent:] */

void FUN_10af71c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c275280();
  if ((uint)uVar1 < 3) {
    puVar2 = PTR_PTR_1126dec80;
    _objc_opt_new(PTR_PTR_1126dec80);
    func_0x00010bde6e60(param_1,param_2,puVar2,param_3);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af71cdc; end: 10af71fb7; -[SCQuickPerfLoggerImplementation _constructPlatformLoggerEvent:rawEvent:] */

void FUN_10af71cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf8b280(param_4);
  func_0x00010c192de0(param_3);
  func_0x00010c275280(param_4);
  func_0x00010c217a00(param_3);
  func_0x00010bf954e0(param_4);
  func_0x00010c196100(param_3);
  uVar5 = param_4;
  func_0x00010bf98940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_4;
    func_0x00010bf98940(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196fe0(param_3);
    _objc_release(uVar5);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar5 = param_4;
  func_0x00010c102f20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0(puVar1);
  _objc_release(uVar5);
  uVar5 = param_4;
  func_0x00010c102f20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      puVar3 = PTR_PTR_1126dec88;
      _objc_opt_new(PTR_PTR_1126dec88);
      uVar2 = param_4;
      func_0x00010c102f20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c1de940(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c102f40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1d0c40(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010befa120(puVar1);
      _objc_release(puVar3);
      uVar5 = uVar5 + 1;
      uVar2 = param_4;
      func_0x00010c102f20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
    } while (uVar5 < uVar4);
  }
  func_0x00010c1de980(param_3);
  uVar5 = param_4;
  func_0x00010bf043a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af71fb8;
  puStack_60 = &UNK_110948be0;
  uStack_58 = param_4;
  _objc_retain(param_4);
  uVar4 = uVar2;
  func_0x000107c31908(uVar2,&puStack_78);
  func_0x00010c197640(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af71fb8; end: 10af7205f;  */

void FUN_10af71fb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dec90;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c067ec0(param_2);
  func_0x00010c168460(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf043a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c220160(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af72060; end: 10af720ff; -[SCQuickPerfLoggerImplementation .cxx_destruct] */

void FUN_10af72060(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af72100; end: 10af7210b; -[SCAsyncQueueServices .cxx_destruct] */

void FUN_10af72100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af7210c; end: 10af722df;  */

void FUN_10af7210c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c275280();
  uVar2 = param_2;
  func_0x00010c067b60();
  uVar3 = param_2;
  func_0x00010bf8b280();
  uVar4 = param_2;
  func_0x00010bf954e0(param_2);
  uVar5 = param_2;
  func_0x00010c251100(param_2);
  uVar6 = param_2;
  func_0x00010bf142a0(param_2);
  uVar7 = param_2;
  func_0x00010bf98940(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28124();
  func_0x00010bf043a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28734(auStack_88);
  uVar8 = param_2;
  func_0x00010c102f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108619534(auStack_a0);
  func_0x00010c102f40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861e7a8(auStack_b8);
  FUN_10af7241c(param_1,uVar1 & 0xffffffff,uVar2 & 0xffffffff,uVar3,uVar4,uVar5,uVar6,
                uVar7 & 0xffffffffff,auStack_88,auStack_a0,auStack_b8);
  func_0x000107c27ae4(auStack_b8);
  _objc_release(param_2);
  func_0x000107c27a18(auStack_a0);
  _objc_release(uVar8);
  func_0x000107c286c8(auStack_88);
  FUN_10af724b0();
  func_0x00010af724c0();
  func_0x00010af724b8();
  return;
}



/* Entry: 10af722e0; end: 10af7241b;  */

void FUN_10af722e0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar5 = PTR_PTR_1126dec98;
  _objc_alloc(PTR_PTR_1126dec98);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar9 = *(undefined8 *)(param_1 + 2);
  iVar3 = param_1[4];
  uVar10 = *(undefined8 *)(param_1 + 6);
  iVar4 = param_1[8];
  puVar6 = param_1 + 9;
  func_0x000107c28128();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1 + 0xc;
  func_0x0001086411d8();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1 + 0x16;
  func_0x000107c285a8();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x1c;
  func_0x00010863360c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054420(puVar5,param_2,uVar1,uVar2,uVar9,(long)iVar3,uVar10,(long)iVar4,puVar6,puVar7,
                      puVar8,param_1);
  func_0x00010af724b8();
  func_0x00010af724b0();
  func_0x00010af724c0();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10af7241c; end: 10af724af;  */

undefined4 *
FUN_10af7241c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = param_4;
  param_1[4] = param_5;
  *(undefined8 *)(param_1 + 6) = param_6;
  param_1[8] = param_7;
  *(undefined8 *)(param_1 + 9) = param_8;
  func_0x000107c28720(param_1 + 0xc,param_9);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  uVar1 = *param_10;
  *(undefined8 *)(param_1 + 0x18) = param_10[1];
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = param_10[2];
  *param_10 = 0;
  param_10[1] = 0;
  param_10[2] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = *param_11;
  *(undefined8 *)(param_1 + 0x1e) = param_11[1];
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_11[2];
  *param_11 = 0;
  param_11[1] = 0;
  param_11[2] = 0;
  return param_1;
}



/* Entry: 10af724b0; end: 10af724c7;  */

void FUN_10af724b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af724c8; end: 10af7253f; -[SCNQuickPerfloggerQuickPerfLoggerEventCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10af724c8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112702f18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10af72a80();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010af72a58(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af72540; end: 10af725fb; -[SCNQuickPerfloggerQuickPerfLoggerEventCallbackCppProxy onEventDidEnd:] */

void FUN_10af72540(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_b8 [136];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10af7210c(auStack_b8,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_b8);
  func_0x00010af7278c(auStack_b8);
  func_0x00010af72a98();
  return;
}



/* Entry: 10af725fc; end: 10af726ef;  */

void FUN_10af725fc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126deca0;
    _objc_opt_class(PTR_PTR_1126deca0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110c99c40;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10af727c0);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10af72a30(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10af72a80();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010af72a98();
  return;
}



/* Entry: 10af726f0; end: 10af7274b; -[SCNQuickPerfloggerQuickPerfLoggerEventCallbackCppProxy .cxx_destruct] */

void FUN_10af726f0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110c99d10;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010af72a58((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10af7274c; end: 10af727bf; -[SCNQuickPerfloggerQuickPerfLoggerEventCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10af7274c(undefined8 *param_1)

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
      FUN_10af72a80();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10af727c0; end: 10af728b7;  */

void FUN_10af727c0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c99c80;
  puVar1[3] = &PTR_DAT_110c99cf8;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10af72a80();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110c99cd0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10af72a30(&uStack_50);
  return;
}



/* Entry: 10af728b8; end: 10af728bb;  */

void FUN_10af728b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c99c80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10af728bc; end: 10af728cf;  */

void FUN_10af728bc(void)

{
  FUN_10af72a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af728d0; end: 10af728db;  */

long FUN_10af728d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110c99c40;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10af728dc; end: 10af72917;  */

void FUN_10af728dc(void)

{
  func_0x00010af72aa0();
  return;
}



/* Entry: 10af72918; end: 10af7298b;  */

void FUN_10af72918(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10af722e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3fc0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10af7298c; end: 10af72a1f;  */

long FUN_10af7298c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110c99c40;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10af72a20; end: 10af72a2f;  */

void FUN_10af72a20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c99c80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10af72a30; end: 10af72a7f;  */

long FUN_10af72a30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10af72a80; end: 10af72aab;  */

void FUN_10af72a80(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10af72aac; end: 10af72b03; -[SCNQuickPerfloggerQuickPerfLoggerEventManager startTopic:topicStartTimestampInMicroSeconds:backgroundPolicy:] */

void FUN_10af72aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long extraout_x8;
  
  FUN_10af72f84();
  (**(code **)(extraout_x8 + 0x10))(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 10af72b04; end: 10af72b57; -[SCNQuickPerfloggerQuickPerfLoggerEventManager dropTopic:instanceKey:] */

void FUN_10af72b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long extraout_x8;
  
  FUN_10af72f84();
  (**(code **)(extraout_x8 + 0x18))(param_1,param_2,param_4);
  return;
}



/* Entry: 10af72b58; end: 10af72bab; -[SCNQuickPerfloggerQuickPerfLoggerEventManager isTopicOn:instanceKey:] */

void FUN_10af72b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long extraout_x8;
  
  FUN_10af72f84();
  (**(code **)(extraout_x8 + 0x20))(param_1,param_2,param_4);
  return;
}



/* Entry: 10af72bac; end: 10af72cbf; -[SCNQuickPerfloggerQuickPerfLoggerEventManager endTopic:instanceKey:topicEndTimestampInMicroSeconds:endState:errorCode:eventEndCallback:] */

void FUN_10af72bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 auStack_60 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c28124(param_7);
  FUN_10af725fc(auStack_60,param_8);
  (**(code **)(*plVar1 + 0x28))
            (plVar1,param_3,param_4,param_5,param_6,param_7 & 0xffffffffff,auStack_60);
  func_0x00010af72fac();
  _objc_release(param_8);
  func_0x00010af72f9c();
  return;
}



/* Entry: 10af72cc0; end: 10af72d1b; -[SCNQuickPerfloggerQuickPerfLoggerEventManager addPoint:instanceKey:pointId:pointStartTimestampInMicroSeconds:] */

void FUN_10af72cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long extraout_x8;
  
  FUN_10af72f84();
  (**(code **)(extraout_x8 + 0x30))(param_1,param_2,param_4,param_5,param_6);
  return;
}



/* Entry: 10af72d1c; end: 10af72def; -[SCNQuickPerfloggerQuickPerfLoggerEventManager addAnnotation:instanceKey:annotationKey:annotationValue:] */

void FUN_10af72d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_58 [24];
  
  _objc_retain(param_6);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_58,param_6);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_3,param_4,param_5,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010af72f9c();
  return;
}



/* Entry: 10af72df0; end: 10af72ea3; -[SCNQuickPerfloggerQuickPerfLoggerEventManager cancelEventsOnBackground:eventEndCallback:] */

void FUN_10af72df0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10af725fc(auStack_40,param_4);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_3,auStack_40);
  func_0x00010af72fac();
  func_0x00010af72f9c();
  return;
}



/* Entry: 10af72ea4; end: 10af72f2f; -[SCNQuickPerfloggerQuickPerfLoggerEventManager getEvent:instanceKey:] */

void FUN_10af72ea4(void)

{
  long extraout_x8;
  undefined1 auStack_a8 [136];
  
  FUN_10af72f84();
  (**(code **)(extraout_x8 + 0x48))(auStack_a8);
  FUN_10af722e0(auStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af72fb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af72f30; end: 10af72f83; -[SCNQuickPerfloggerQuickPerfLoggerEventManager .cxx_destruct] */

void FUN_10af72f30(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110c99d20;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2bbcc((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10af72f84; end: 10af72fd7;  */

void FUN_10af72f84(void)

{
  return;
}



/* Entry: 10af72fd8; end: 10af73057; -[SCNQuickPerfloggerQuickPerfLoggerEventManagerProvider initWithCpp:] */

undefined1 * FUN_10af72fd8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_112702f28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x00010af73100(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10af73058; end: 10af730b3; -[SCNQuickPerfloggerQuickPerfLoggerEventManagerProvider .cxx_destruct] */

void FUN_10af73058(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110c99d30;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010af73100((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10af730b4; end: 10af7312b; -[SCNQuickPerfloggerQuickPerfLoggerEventManagerProvider .cxx_construct] */

undefined8 * FUN_10af730b4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10af7312c; end: 10af7360f;  */

/* WARNING: Type propagation algorithm not settling */

uint FUN_10af7312c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *extraout_x8;
  long *plVar9;
  undefined1 *extraout_x9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long alStack_118 [11];
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  func_0x00010af74058();
  uVar1 = *(uint *)(param_1 + 0x48);
  alStack_118[8] = 0;
  alStack_118[7] = 0;
  alStack_118[10] = 0;
  alStack_118[9] = 0;
  uStack_c0 = 0x3f800000;
  alStack_118[4] = 0;
  alStack_118[5] = 0;
  alStack_118[6] = 0;
  alStack_118[1] = 0;
  alStack_118[2] = 0;
  alStack_118[3] = 0;
  lVar6 = 0x88;
  __Znwm();
  func_0x000107c28744(&plStack_88,alStack_118 + 7);
  func_0x000107c28bb4(auStack_a0,alStack_118 + 4);
  puVar16 = auStack_b8;
  func_0x000107c291e8(auStack_b8,alStack_118 + 1);
  puVar15 = (undefined1 *)((long)(int)param_2 | (ulong)uVar1 << 0x20);
  FUN_10af7241c(lVar6,param_2,uVar1,0,0,param_3,param_4,0,&plStack_88,auStack_a0,puVar16);
  alStack_118[0] = lVar6;
  func_0x000107c27ae4(auStack_b8);
  func_0x000107c27a18(auStack_a0);
  func_0x000107c286c8(&plStack_88);
  puVar14 = *(undefined1 **)(param_1 + 0x58);
  if (puVar14 != (undefined1 *)0x0) {
    puVar8 = puVar14 + -1;
    if (((ulong)puVar14 & (ulong)puVar8) == 0) {
      puVar16 = (undefined1 *)((ulong)puVar8 & (ulong)puVar15);
    }
    else {
      puVar16 = puVar15;
      if (puVar14 <= puVar15) {
        uVar2 = 0;
        if (puVar14 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar15 / (ulong)puVar14;
        }
        puVar16 = puVar15 + -(uVar2 * (long)puVar14);
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x50) + (long)puVar16 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10af7329c;
          puVar10 = (undefined1 *)plVar9[1];
          if (puVar10 != puVar15) break;
          if ((undefined1 *)plVar9[2] == puVar15) goto LAB_10af73540;
        }
        if (((ulong)puVar14 & (ulong)puVar8) == 0) {
          puVar10 = (undefined1 *)((ulong)puVar10 & (ulong)puVar8);
        }
        else if (puVar14 <= puVar10) {
          uVar2 = 0;
          if (puVar14 != (undefined1 *)0x0) {
            uVar2 = (ulong)puVar10 / (ulong)puVar14;
          }
          puVar10 = puVar10 + -(uVar2 * (long)puVar14);
        }
      } while (puVar10 == puVar16);
    }
  }
LAB_10af7329c:
  plVar7 = (long *)0x20;
  __Znwm();
  plVar9 = (long *)(param_1 + 0x60);
  uStack_78 = 1;
  *plVar7 = 0;
  plVar7[1] = (long)puVar15;
  alStack_118[0] = 0;
  plVar7[2] = (long)puVar15;
  plVar7[3] = lVar6;
  plStack_80 = plVar9;
  if ((puVar14 != (undefined1 *)0x0) &&
     ((float)(*(long *)(param_1 + 0x68) + 1) <= *(float *)(param_1 + 0x70) * (float)puVar14))
  goto LAB_10af734c8;
  bVar4 = (undefined1 *)0x2 < puVar14;
  bVar5 = puVar14 == (undefined1 *)0x3;
  plStack_88 = plVar7;
  func_0x00010af74080((long)puVar14 << 1);
  puVar16 = extraout_x8;
  if (!bVar4 || bVar5) {
    puVar16 = extraout_x9;
  }
  if (puVar16 + -1 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar16 & (ulong)(puVar16 + -1)) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar14 = *(undefined1 **)(param_1 + 0x58);
  }
  if (puVar14 < puVar16) {
LAB_10af7333c:
    if ((ulong)puVar16 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10af7359c);
      (*pcVar3)();
    }
    lVar6 = (long)puVar16 << 3;
    __Znwm(lVar6);
    FUN_10af73bc0(param_1 + 0x50,lVar6);
    *(undefined1 **)(param_1 + 0x58) = puVar16;
    lVar6 = *(long *)(param_1 + 0x50);
    for (puVar14 = (undefined1 *)0x0; puVar16 != puVar14; puVar14 = puVar14 + 1) {
      *(undefined8 *)(lVar6 + (long)puVar14 * 8) = 0;
    }
    plVar11 = (long *)*plVar9;
    puVar14 = puVar16;
    if (plVar11 != (long *)0x0) {
      puVar10 = (undefined1 *)plVar11[1];
      puVar8 = puVar16 + -1;
      uVar2 = 0;
      if (puVar16 != (undefined1 *)0x0) {
        uVar2 = (ulong)puVar10 / (ulong)puVar16;
      }
      puVar13 = puVar10;
      if (puVar16 <= puVar10) {
        puVar13 = puVar10 + -(uVar2 * (long)puVar16);
      }
      if (((ulong)puVar16 & (ulong)puVar8) == 0) {
        puVar13 = (undefined1 *)((ulong)puVar10 & (ulong)puVar8);
      }
      *(long **)(lVar6 + (long)puVar13 * 8) = plVar9;
      while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
        puVar10 = (undefined1 *)plVar11[1];
        if (((ulong)puVar16 & (ulong)puVar8) == 0) {
          puVar10 = (undefined1 *)((ulong)puVar10 & (ulong)puVar8);
        }
        else if (puVar16 <= puVar10) {
          uVar2 = 0;
          if (puVar16 != (undefined1 *)0x0) {
            uVar2 = (ulong)puVar10 / (ulong)puVar16;
          }
          puVar10 = puVar10 + -(uVar2 * (long)puVar16);
        }
        if (puVar10 != puVar13) {
          if (*(long *)(lVar6 + (long)puVar10 * 8) == 0) {
            *(long **)(lVar6 + (long)puVar10 * 8) = plVar12;
            puVar13 = puVar10;
          }
          else {
            *plVar12 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar6 + (long)puVar10 * 8);
            **(long **)(lVar6 + (long)puVar10 * 8) = (long)plVar11;
            plVar11 = plVar12;
          }
        }
      }
    }
  }
  else if (puVar16 < puVar14) {
    puVar8 = (undefined1 *)(long)((float)*(ulong *)(param_1 + 0x68) / *(float *)(param_1 + 0x70));
    if ((puVar14 < (undefined1 *)0x3) || (((ulong)puVar14 & (ulong)(puVar14 + -1)) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((undefined1 *)0x1 < puVar8) {
      puVar8 = (undefined1 *)(1L << (-LZCOUNT(puVar8 + -1) & 0x3fU));
    }
    if (puVar16 <= puVar8) {
      puVar16 = puVar8;
    }
    if (puVar16 < puVar14) {
      if (puVar16 != (undefined1 *)0x0) goto LAB_10af7333c;
      FUN_10af73bc0(param_1 + 0x50,0);
      *(undefined8 *)(param_1 + 0x58) = 0;
      puVar14 = (undefined1 *)0x0;
    }
    else {
      puVar14 = *(undefined1 **)(param_1 + 0x58);
    }
  }
  if (((ulong)puVar14 & (ulong)(puVar14 + -1)) == 0) {
    puVar16 = (undefined1 *)((ulong)(puVar14 + -1) & (ulong)puVar15);
  }
  else {
    puVar16 = puVar15;
    if (puVar14 <= puVar15) {
      uVar2 = 0;
      if (puVar14 != (undefined1 *)0x0) {
        uVar2 = (ulong)puVar15 / (ulong)puVar14;
      }
      puVar16 = puVar15 + -(uVar2 * (long)puVar14);
    }
  }
LAB_10af734c8:
  lVar6 = *(long *)(param_1 + 0x50);
  plVar11 = *(long **)(lVar6 + (long)puVar16 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar6 + (long)puVar16 * 8) = plVar9;
    if (*plVar7 != 0) {
      puVar16 = *(undefined1 **)(*plVar7 + 8);
      if (((ulong)puVar14 & (ulong)(puVar14 + -1)) == 0) {
        puVar16 = (undefined1 *)((ulong)puVar16 & (ulong)(puVar14 + -1));
      }
      else if (puVar14 <= puVar16) {
        uVar2 = 0;
        if (puVar14 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar16 / (ulong)puVar14;
        }
        puVar16 = puVar16 + -(uVar2 * (long)puVar14);
      }
      *(long **)(lVar6 + (long)puVar16 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar11;
    *plVar11 = (long)plVar7;
  }
  plStack_88 = (long *)0x0;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  FUN_10af73bd8(&plStack_88);
LAB_10af73540:
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  FUN_10af73b90(alStack_118);
  func_0x000107c27ae4(alStack_118 + 1);
  func_0x000107c27a18(alStack_118 + 4);
  func_0x000107c286c8(alStack_118 + 7);
  func_0x00010af74050();
  return uVar1;
}



/* Entry: 10af73610; end: 10af7368b;  */

void FUN_10af73610(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010af74058((long)param_2);
  func_0x00010af74074();
  if (lVar1 != 0) {
    FUN_10af73cb4(param_1 + 0x50,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 10af7368c; end: 10af7370b;  */

void FUN_10af7368c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x00010af74058();
  FUN_10af7370c(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 10af7370c; end: 10af737af;  */

void FUN_10af7370c(long param_1,int param_2,long param_3,long param_4,undefined4 param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  plVar3 = (long *)(param_1 + 0x50);
  FUN_10af73c1c(plVar3,(long)param_2 | param_3 << 0x20);
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar4 = plVar3[3];
  *(undefined4 *)(lVar4 + 0x10) = param_5;
  *(long *)(lVar4 + 8) = param_4 - *(long *)(lVar4 + 0x18);
  *(int *)(lVar4 + 0x24) = (int)param_6;
  *(char *)(lVar4 + 0x28) = (char)((ulong)param_6 >> 0x20);
  (**(code **)(*(long *)*param_7 + 0x10))((long *)*param_7,plVar3[3]);
  uVar6 = *(ulong *)(param_1 + 0x58);
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar8 = uVar6 - 1;
  if ((uVar6 & uVar8) == 0) {
    uVar5 = uVar8 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x50);
  plVar2 = *(long **)(lVar9 + uVar5 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar3);
  if (plVar7 == (long *)(param_1 + 0x60)) {
LAB_10af73d3c:
    if (lVar4 == 0) {
LAB_10af73d6c:
      *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10af73d74;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_10af73d6c;
  }
  else {
    uVar10 = plVar7[1];
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_10af73d3c;
LAB_10af73d74:
    if (lVar4 == 0) goto LAB_10af73dac;
  }
  uVar10 = *(ulong *)(lVar4 + 8);
  if ((uVar6 & uVar8) == 0) {
    uVar10 = uVar10 & uVar8;
  }
  else if (uVar6 <= uVar10) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar10 / uVar6;
    }
    uVar10 = uVar10 - uVar8 * uVar6;
  }
  if (uVar10 != uVar5) {
    *(long **)(lVar9 + uVar10 * 8) = plVar7;
    lVar4 = *plVar3;
  }
LAB_10af73dac:
  *plVar7 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
  FUN_10af73bd8(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 10af737b0; end: 10af738bf;  */

void FUN_10af737b0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uStack_6c;
  ulong *puStack_68;
  long *plStack_60;
  long *plStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  
  uStack_6c = param_4;
  FUN_10af74040();
  func_0x00010af74060();
  if (param_1 != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    func_0x0001090f89cc(*(long *)(param_1 + 0x18) + 0x58,&uStack_6c);
    param_5 = param_5 - lVar5;
    lVar5 = *(long *)(param_1 + 0x18);
    plVar6 = *(long **)(lVar5 + 0x78);
    puVar4 = (ulong *)(lVar5 + 0x80);
    if (plVar6 < (long *)*puVar4) {
      plVar7 = plVar6 + 1;
      *plVar6 = param_5;
    }
    else {
      lVar3 = lVar5 + 0x70;
      func_0x000107c27ae0(lVar3,((long)plVar6 - *(long *)(lVar5 + 0x70) >> 3) + 1);
      lVar1 = *(long *)(lVar5 + 0x70);
      lVar2 = *(long *)(lVar5 + 0x78);
      puStack_48 = puVar4;
      if (lVar3 == 0) {
        puStack_68 = (ulong *)0x0;
      }
      else {
        func_0x000107c27ad4();
        puStack_68 = puVar4;
      }
      plStack_60 = (long *)((long)puStack_68 + (lVar2 - lVar1));
      puStack_50 = puStack_68 + lVar3;
      plStack_58 = plStack_60 + 1;
      *plStack_60 = param_5;
      func_0x000107c27ad0(lVar5 + 0x70,&puStack_68);
      plVar7 = *(long **)(lVar5 + 0x78);
      func_0x000107c27ad8(&puStack_68);
    }
    *(long **)(lVar5 + 0x78) = plVar7;
  }
  func_0x00010af74050();
  return;
}



/* Entry: 10af738c0; end: 10af73927;  */

void FUN_10af738c0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uStack_34;
  
  uStack_34 = param_4;
  FUN_10af74040();
  func_0x00010af74060();
  if (param_1 != 0) {
    FUN_10af73928(*(long *)(param_1 + 0x18) + 0x30,&uStack_34);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  func_0x00010af74050();
  return;
}



/* Entry: 10af73928; end: 10af7395b;  */

long FUN_10af73928(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10af73de8(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 10af7395c; end: 10af73a33;  */

void FUN_10af7395c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010af74058();
  puStack_58 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  plVar4 = (long *)(param_1 + 0x60);
  uStack_48 = 0;
  while (puVar1 = puStack_50, plVar4 = (long *)*plVar4, puVar5 = puStack_58, plVar4 != (long *)0x0)
  {
    func_0x000107c28944(&puStack_58,plVar4 + 2);
  }
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    lVar2 = param_1 + 0x50;
    FUN_10af73c1c(lVar2,*puVar5);
    if ((lVar2 != 0) && (puVar3 = *(undefined4 **)(lVar2 + 0x18), puVar3[8] == 1)) {
      FUN_10af7370c(param_1,*puVar3,puVar3[1],param_2,3,0,param_3);
    }
  }
  func_0x000107c27ae4(&puStack_58);
  func_0x00010af74050();
  return;
}



/* Entry: 10af73a34; end: 10af73acf;  */

void FUN_10af73a34(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_2;
  FUN_10af74040();
  func_0x00010af74060();
  puVar2 = *(undefined8 **)(lVar1 + 0x18);
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  uVar7 = *(undefined8 *)((long)puVar2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)puVar2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar7;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  func_0x000107c28744(param_1 + 6,puVar2 + 6);
  func_0x000107c28bb4(param_1 + 0xb,puVar2 + 0xb);
  func_0x000107c291e8(param_1 + 0xe,puVar2 + 0xe);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 8);
  return;
}



/* Entry: 10af73ad0; end: 10af73ad3;  */

undefined8 * FUN_10af73ad0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c99d50;
  plVar1 = (long *)param_1[0xc];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10af73b90(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[10];
  param_1[10] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10af73ad4; end: 10af73ae7;  */

void FUN_10af73ad4(void)

{
  FUN_10af73ae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af73ae8; end: 10af73b57;  */

undefined8 * FUN_10af73ae8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c99d50;
  plVar1 = (long *)param_1[0xc];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10af73b90(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[10];
  param_1[10] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10af73b58; end: 10af73b5b;  */

void FUN_10af73b58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c99dd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10af73b5c; end: 10af73b6f;  */

void FUN_10af73b5c(void)

{
  func_0x00010af73b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af73b70; end: 10af73b8f;  */

void FUN_10af73b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af73b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10af73b90; end: 10af73bbf;  */

long * FUN_10af73b90(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010af7278c();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10af73bc0; end: 10af73bd7;  */

void FUN_10af73bc0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10af73bd8; end: 10af73c1b;  */

long * FUN_10af73bd8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10af73b90(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10af73c1c; end: 10af73cb3;  */

long FUN_10af73c1c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 10af73cb4; end: 10af73de7;  */

void FUN_10af73cb4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_28;
  long *plStack_20;
  undefined1 uStack_18;
  undefined4 uStack_17;
  undefined3 uStack_13;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *param_1;
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  plStack_20 = param_1 + 2;
  if (plVar6 == plStack_20) {
LAB_10af73d3c:
    if (lVar3 == 0) {
LAB_10af73d6c:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10af73d74;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10af73d6c;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10af73d3c;
LAB_10af73d74:
    if (lVar3 == 0) goto LAB_10af73dac;
  }
  uVar9 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *param_2;
  }
LAB_10af73dac:
  *plVar6 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_18 = 1;
  uStack_17 = 0;
  uStack_13 = 0;
  plStack_28 = param_2;
  FUN_10af73bd8(&plStack_28);
  return;
}



/* Entry: 10af73de8; end: 10af73fe3;  */

undefined1  [16] FUN_10af73de8(long *param_1,int *param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x9;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  long *aplStack_58 [3];
  
  uVar9 = (ulong)*param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar5 = uVar11 - 1;
    if ((uVar11 & uVar5) == 0) {
      unaff_x23 = uVar5 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar7 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10af73e94;
          uVar7 = plVar10[1];
          if (uVar7 != uVar9) break;
          if ((int)plVar10[2] == *param_2) {
            uVar4 = 0;
            goto LAB_10af73fb4;
          }
        }
        if ((uVar11 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar11 <= uVar7) {
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar7 / uVar11;
          }
          uVar7 = uVar7 - uVar1 * uVar11;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_10af73e94:
  FUN_10af73fe4(aplStack_58,param_1,uVar9);
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    bVar2 = 2 < uVar11;
    bVar3 = uVar11 == 3;
    func_0x00010af74080(uVar11 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    func_0x000107c28738(param_1,uVar4);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar5 * uVar11;
      }
    }
  }
  plVar10 = aplStack_58[0];
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
    *(long **)(lVar6 + unaff_x23 * 8) = plVar8;
    if (*aplStack_58[0] != 0) {
      uVar9 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar9 = uVar9 & uVar11 - 1;
      }
      else if (uVar11 <= uVar9) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar9 / uVar11;
        }
        uVar9 = uVar9 - uVar5 * uVar11;
      }
      *(long **)(lVar6 + uVar9 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x000107c2873c(aplStack_58);
  uVar4 = 1;
LAB_10af73fb4:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10af73fe4; end: 10af7403f;  */

void FUN_10af73fe4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)*param_5;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10af74040; end: 10af74093;  */

void FUN_10af74040(long param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)((long)param_2,param_1 + 8);
  return;
}



/* Entry: 10af74094; end: 10af744bb; -[SCMainAppSnapTokenAuthenticatedRequestsProvider submitPostRequestWithEndpoint:data:completionPerformer:successBlock:failureBlock:] */

void FUN_10af74094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b8670;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf10920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  func_0x00010c1d0640();
  puVar1 = PTR_PTR_1126b7218;
  func_0x00010c134680(PTR_PTR_1126b7218);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2b3f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2bc200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b9840();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b0180();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2a95e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar10 = puVar9;
  func_0x00010c2af6a0(puVar9,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  uVar12 = param_1;
  func_0x00010bfe4d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0d0520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  func_0x00010c290040(uVar13,param_2,&PTR____CFConstantStringClassReference_110dd6998);
  uVar12 = uVar13;
  func_0x00010c137100(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar5 = PTR_PTR_1126b7220;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar5;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2af9a0(puVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bfe4c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  func_0x00010c11de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10af744bc;
  puStack_78 = &UNK_11089e820;
  uStack_70 = param_6;
  uStack_68 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c25f600(param_1,param_2,uVar12,puVar10,uVar14,&puStack_90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(param_1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar10);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10af744bc; end: 10af74577;  */

void FUN_10af744bc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_5);
  }
  else {
    if (param_4 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_4;
      func_0x00010c252ee0(param_4);
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar1,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10af74578; end: 10af745bf; -[SCMainAppSnapTokenAuthenticatedRequestsProvider deviceId] */

void FUN_10af74578(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


