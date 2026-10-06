/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c193e0; end: 105c19453; -[SCMemoriesFeaturedStoryBackgroundPrefetchConfigurationProvider initWithCircumstanceEngine:] */

undefined1 * FUN_105c193e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c19454; end: 105c195ff; -[SCMemoriesFeaturedStoryBackgroundPrefetchConfigurationProvider featuredStoryBackgroundPrefetchConfiguration] */

void FUN_105c19454(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_58;
  
  puVar7 = *(undefined **)(param_1 + 8);
  if (puVar7 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126c32b0;
    _objc_alloc_init(PTR_PTR_1126c32b0);
    func_0x00010c1c43e0();
    puVar1 = PTR_PTR_1126bc058;
    _objc_alloc_init(PTR_PTR_1126bc058);
    func_0x00010c1e0560();
    func_0x00010c195460(puVar1,param_2,1);
    func_0x00010c1e0460(puVar7,param_2,puVar1);
    lVar2 = param_1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126af7d0;
      _objc_opt_new(PTR_PTR_1126af7d0);
      puVar4 = puVar7;
      func_0x00010bf63640(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010bf398e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c1195e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      puVar4 = PTR_PTR_1126c32b0;
      _objc_alloc();
      lVar6 = lVar5;
      func_0x00010c296d80(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lStack_58 = 0;
      func_0x00010c008360(puVar4,param_2,lVar6,&lStack_58);
      lVar2 = lStack_58;
      _objc_release(lVar6);
      if ((lVar2 == 0) && (puVar4 != (undefined *)0x0)) {
        _objc_retain(puVar4);
        _objc_release(puVar7);
        puVar7 = puVar4;
      }
      _objc_release(puVar4);
      _objc_release(lVar5);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105c19600; end: 105c19607; -[SCMemoriesFeaturedStoryBackgroundPrefetchConfigurationProvider featuredStoryBackgroundPrefetchConfig] */

undefined8 FUN_105c19600(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c19608; end: 105c19637; -[SCMemoriesFeaturedStoryBackgroundPrefetchConfigurationProvider setFeaturedStoryBackgroundPrefetchConfig:] */

void FUN_105c19608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c19638; end: 105c1963f; -[SCMemoriesFeaturedStoryBackgroundPrefetchConfigurationProvider circumstanceEngine] */

undefined8 FUN_105c19638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c19640; end: 105c1966f; -[SCMemoriesFeaturedStoryBackgroundPrefetchConfigurationProvider setCircumstanceEngine:] */

void FUN_105c19640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c19670; end: 105c1969f; -[SCMemoriesFeaturedStoryBackgroundPrefetchConfigurationProvider .cxx_destruct] */

void FUN_105c19670(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c196a0; end: 105c19707; +[FeaturedStoryBackgroundPrefetchConfig descriptor] */

void FUN_105c196a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a919f0,
                        &PTR____CFConstantStringClassReference_110e22b98,&PTR_DAT_11311ede0,
                        &PTR_DAT_11311edf8,3,0x18,0x1c);
    puRam00000001136c1ce0 = puVar1;
  }
  return;
}



/* Entry: 105c19708; end: 105c1977b; -[SCGrapheneOnDeviceMLModelsPrefetchMetric2 init] */

undefined1 * FUN_105c19708(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec618;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c1977c; end: 105c197f3;  */

void FUN_105c1977c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108dd3a8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c197f4; end: 105c19967;  */

void FUN_105c197f4(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
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
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108dd3f8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105c19968;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108dd448,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_105c19adc;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108dd498,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 105c19968; end: 105c19adb;  */

void FUN_105c19968(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108dd448,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105c19adc;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108dd498,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105c19adc; end: 105c19b53;  */

void FUN_105c19adc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108dd498,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c19b54; end: 105c19cc7;  */

void FUN_105c19b54(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long **pplVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  char *unaff_x22;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 auStack_288 [2];
  char cStack_271;
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  char acStack_208 [24];
  char *pcStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  long alStack_170 [3];
  long *plStack_158;
  long **applStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 *puStack_130;
  long *plStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108dd4e8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    unaff_x22 = acStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
      unaff_x22 = acStack_80;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  pcStack_88 = FUN_105c19cc8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar10 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108dd538,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar7;
    param_4 = pcVar3;
    unaff_x22 = acStack_100;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar7;
      param_4 = pcVar3;
      unaff_x22 = acStack_100;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar3;
  __Unwind_Resume();
  plVar8 = alStack_170;
  pcStack_108 = FUN_105c19e3c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  pcVar7 = pcVar6;
  puStack_130 = unaff_x22;
  plStack_128 = plVar10;
  pcStack_120 = pcVar3;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_150,pcVar1);
    alStack_170[0] = 0;
    alStack_170[1] = 0;
    alStack_170[2] = 0;
    func_0x00010007e1e8(alStack_170,applStack_150,&lStack_138,1);
    pcVar5 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108dd588,alStack_170,pcVar6);
    pplVar4 = &plStack_158;
    plStack_158 = alStack_170;
    func_0x00010007e5dc();
    pcVar7 = (char *)plVar8;
    param_4 = pcVar6;
    plVar10 = alStack_170;
    if (cStack_139 < '\0') {
      pplVar4 = applStack_150[0];
      __ZdlPv();
      pcVar7 = (char *)plVar8;
      param_4 = pcVar6;
      plVar10 = alStack_170;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  plStack_158 = plVar10;
  func_0x00010007e5dc(&plStack_158);
  if (cStack_139 < '\0') {
    __ZdlPv(applStack_150[0]);
  }
  __Unwind_Resume();
  pcStack_178 = FUN_105c19f54;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar3 = pcVar7;
  pcVar2 = param_4;
  pppuStack_180 = &ppuStack_110;
  _objc_retain(pcVar7);
  if (pplVar4 != (long **)0x0) {
    plVar10 = pplVar4[1];
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1d0,pcVar1);
    acStack_208[0] = '\0';
    acStack_208[1] = '\0';
    acStack_208[2] = '\0';
    acStack_208[3] = '\0';
    acStack_208[4] = '\0';
    acStack_208[5] = '\0';
    acStack_208[6] = '\0';
    acStack_208[7] = '\0';
    acStack_208[8] = '\0';
    acStack_208[9] = '\0';
    acStack_208[10] = '\0';
    acStack_208[0xb] = '\0';
    acStack_208[0xc] = '\0';
    acStack_208[0xd] = '\0';
    acStack_208[0xe] = '\0';
    acStack_208[0xf] = '\0';
    acStack_208[0x10] = '\0';
    acStack_208[0x11] = '\0';
    acStack_208[0x12] = '\0';
    acStack_208[0x13] = '\0';
    acStack_208[0x14] = '\0';
    acStack_208[0x15] = '\0';
    acStack_208[0x16] = '\0';
    acStack_208[0x17] = '\0';
    func_0x00010007e1e8(acStack_208,auStack_1e8,&lStack_1b8,2);
    pcVar1 = "";
    pcVar3 = acStack_208;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108dd5d8,pcVar3,param_4);
    pcStack_1f0 = acStack_208;
    func_0x00010007e5dc(&pcStack_1f0);
    lVar9 = 0;
    pcVar2 = param_4;
    do {
      if ((&cStack_1b9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar5 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_1d1 < '\0') {
    __ZdlPv(auStack_1e8[0]);
  }
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcStack_218 = FUN_105c1a140;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pppuStack_220 = &pppuStack_180;
  _objc_retain(pcVar3);
  if (pcVar5 != (char *)0x0) {
    plVar10 = *(long **)(pcVar5 + 8);
    pcVar5 = "true";
    if ((int)pcVar1 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_288,pcVar5);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_270,pcVar1);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    func_0x00010007e1e8(&uStack_2a8,auStack_288,&lStack_258,2);
    pcVar6 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108dd628,&uStack_2a8,pcVar2);
    puStack_290 = &uStack_2a8;
    func_0x00010007e5dc(&puStack_290);
    lVar9 = 0;
    do {
      if ((&cStack_259)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_271 < '\0') {
    __ZdlPv(auStack_288[0]);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  puStack_2d8 = (undefined1 *)&uStack_2f0;
  pcStack_2b8 = FUN_105c1a32c;
  if (pcVar2 != (char *)0x0) {
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    pcStack_2d0 = pcVar1;
    pcStack_2c8 = pcVar3;
    pppuStack_2c0 = &pppuStack_220;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_1108dd678,&uStack_2f0,pcVar6);
    func_0x00010007e5dc(&puStack_2d8);
  }
  return;
}



/* Entry: 105c19cc8; end: 105c19e3b;  */

void FUN_105c19cc8(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long **pplVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  char *unaff_x22;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  char *pcStack_250;
  char *pcStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  char acStack_188 [24];
  char *pcStack_170;
  undefined8 auStack_168 [2];
  char cStack_151;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  _objc_retain(param_2);
  plVar9 = (long *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108dd538,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar5 = pcVar2;
    param_4 = param_3;
    unaff_x22 = acStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar2;
      param_4 = param_3;
      unaff_x22 = acStack_80;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  plVar7 = alStack_f0;
  pcStack_88 = FUN_105c19e3c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  pcVar6 = pcVar5;
  puStack_b0 = unaff_x22;
  plStack_a8 = plVar9;
  pcStack_a0 = pcVar2;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(applStack_d0,pcVar2);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108dd588,alStack_f0,pcVar5);
    pplVar4 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x00010007e5dc();
    pcVar6 = (char *)plVar7;
    param_4 = pcVar5;
    plVar9 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar4 = applStack_d0[0];
      __ZdlPv();
      pcVar6 = (char *)plVar7;
      param_4 = pcVar5;
      plVar9 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar9;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  pcStack_f8 = FUN_105c19f54;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar2 = pcVar6;
  pcVar3 = param_4;
  ppuStack_100 = &puStack_90;
  _objc_retain(pcVar6);
  if (pplVar4 != (long **)0x0) {
    plVar9 = pplVar4[1];
    pcVar5 = "true";
    if ((int)pcVar1 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_168,pcVar5);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_150,pcVar1);
    acStack_188[0] = '\0';
    acStack_188[1] = '\0';
    acStack_188[2] = '\0';
    acStack_188[3] = '\0';
    acStack_188[4] = '\0';
    acStack_188[5] = '\0';
    acStack_188[6] = '\0';
    acStack_188[7] = '\0';
    acStack_188[8] = '\0';
    acStack_188[9] = '\0';
    acStack_188[10] = '\0';
    acStack_188[0xb] = '\0';
    acStack_188[0xc] = '\0';
    acStack_188[0xd] = '\0';
    acStack_188[0xe] = '\0';
    acStack_188[0xf] = '\0';
    acStack_188[0x10] = '\0';
    acStack_188[0x11] = '\0';
    acStack_188[0x12] = '\0';
    acStack_188[0x13] = '\0';
    acStack_188[0x14] = '\0';
    acStack_188[0x15] = '\0';
    acStack_188[0x16] = '\0';
    acStack_188[0x17] = '\0';
    func_0x00010007e1e8(acStack_188,auStack_168,&lStack_138,2);
    pcVar5 = "";
    pcVar2 = acStack_188;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108dd5d8,pcVar2,param_4);
    pcStack_170 = acStack_188;
    func_0x00010007e5dc(&pcStack_170);
    lVar8 = 0;
    pcVar3 = param_4;
    do {
      if ((&cStack_139)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_151 < '\0') {
    __ZdlPv(auStack_168[0]);
  }
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcStack_198 = FUN_105c1a140;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  pppuStack_1a0 = &ppuStack_100;
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    plVar9 = *(long **)(pcVar1 + 8);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_1f0,pcVar1);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    func_0x00010007e1e8(&uStack_228,auStack_208,&lStack_1d8,2);
    pcVar6 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108dd628,&uStack_228,pcVar3);
    puStack_210 = &uStack_228;
    func_0x00010007e5dc(&puStack_210);
    lVar8 = 0;
    do {
      if ((&cStack_1d9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  _objc_release(pcVar2);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  puStack_258 = (undefined1 *)&uStack_270;
  pcStack_238 = FUN_105c1a32c;
  if (pcVar5 != (char *)0x0) {
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    pcStack_250 = pcVar1;
    pcStack_248 = pcVar2;
    pppuStack_240 = &pppuStack_1a0;
    (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
              (*(long **)(pcVar5 + 8),&UNK_1108dd678,&uStack_270,pcVar6);
    func_0x00010007e5dc(&puStack_258);
  }
  return;
}



/* Entry: 105c19e3c; end: 105c19f53;  */

void FUN_105c19e3c(long param_1,undefined *param_2,char *param_3,char *param_4)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  char *unaff_x21;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_108 [24];
  char *pcStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  pcVar2 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  pcVar4 = param_3;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    pcVar4 = "true";
    if ((int)param_2 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar4);
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    acStack_70[5] = '\0';
    acStack_70[6] = '\0';
    acStack_70[7] = '\0';
    acStack_70[8] = '\0';
    acStack_70[9] = '\0';
    acStack_70[10] = '\0';
    acStack_70[0xb] = '\0';
    acStack_70[0xc] = '\0';
    acStack_70[0xd] = '\0';
    acStack_70[0xe] = '\0';
    acStack_70[0xf] = '\0';
    acStack_70[0x10] = '\0';
    acStack_70[0x11] = '\0';
    acStack_70[0x12] = '\0';
    acStack_70[0x13] = '\0';
    acStack_70[0x14] = '\0';
    acStack_70[0x15] = '\0';
    acStack_70[0x16] = '\0';
    acStack_70[0x17] = '\0';
    func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108dd588;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108dd588,acStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    pcVar4 = pcVar2;
    param_4 = param_3;
    unaff_x21 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      pcVar4 = pcVar2;
      param_4 = param_3;
      unaff_x21 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_105c19f54;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  pcVar2 = pcVar4;
  pcVar5 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar4);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar8 = (long *)ppuVar1[1];
    pcVar2 = "true";
    if ((int)param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_e8,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_d0,pcVar2);
    acStack_108[0] = '\0';
    acStack_108[1] = '\0';
    acStack_108[2] = '\0';
    acStack_108[3] = '\0';
    acStack_108[4] = '\0';
    acStack_108[5] = '\0';
    acStack_108[6] = '\0';
    acStack_108[7] = '\0';
    acStack_108[8] = '\0';
    acStack_108[9] = '\0';
    acStack_108[10] = '\0';
    acStack_108[0xb] = '\0';
    acStack_108[0xc] = '\0';
    acStack_108[0xd] = '\0';
    acStack_108[0xe] = '\0';
    acStack_108[0xf] = '\0';
    acStack_108[0x10] = '\0';
    acStack_108[0x11] = '\0';
    acStack_108[0x12] = '\0';
    acStack_108[0x13] = '\0';
    acStack_108[0x14] = '\0';
    acStack_108[0x15] = '\0';
    acStack_108[0x16] = '\0';
    acStack_108[0x17] = '\0';
    func_0x00010007e1e8(acStack_108,auStack_e8,&lStack_b8,2);
    puVar6 = &UNK_1108dd5d8;
    pcVar2 = acStack_108;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108dd5d8,pcVar2,param_4);
    pcStack_f0 = acStack_108;
    func_0x00010007e5dc(&pcStack_f0);
    lVar9 = 0;
    pcVar5 = param_4;
    do {
      if ((&cStack_b9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar3 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcStack_118 = FUN_105c1a140;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  ppuStack_120 = &puStack_80;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    pcVar4 = "true";
    if ((int)puVar6 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(auStack_188,pcVar4);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar4 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_170,pcVar4);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    func_0x00010007e1e8(&uStack_1a8,auStack_188,&lStack_158,2);
    puVar7 = &UNK_1108dd628;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108dd628,&uStack_1a8,pcVar5);
    puStack_190 = &uStack_1a8;
    func_0x00010007e5dc(&puStack_190);
    lVar9 = 0;
    do {
      if ((&cStack_159)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  _objc_release(pcVar2);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  puStack_1d8 = (undefined1 *)&uStack_1f0;
  pcStack_1b8 = FUN_105c1a32c;
  if (pcVar5 != (char *)0x0) {
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    pcStack_1d0 = pcVar4;
    pcStack_1c8 = pcVar2;
    pppuStack_1c0 = &ppuStack_120;
    (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
              (*(long **)(pcVar5 + 8),&UNK_1108dd678,&uStack_1f0,puVar7);
    func_0x00010007e5dc(&puStack_1d8);
  }
  return;
}



/* Entry: 105c19f54; end: 105c1a13f;  */

void FUN_105c19f54(long param_1,undefined *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
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
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  pcVar1 = param_3;
  uVar6 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    puVar4 = &UNK_1108dd5d8;
    pcVar1 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108dd5d8,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  pcVar2 = param_3;
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
  __Unwind_Resume();
  pcStack_a8 = FUN_105c1a140;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if ((int)puVar4 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar5 = &UNK_1108dd628;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108dd628,&uStack_138,uVar6);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar7 = 0;
    do {
      if ((&cStack_e9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_168 = (undefined1 *)&uStack_180;
  pcStack_148 = FUN_105c1a32c;
  if (pcVar3 != (char *)0x0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    pcStack_160 = pcVar2;
    pcStack_158 = pcVar1;
    ppuStack_150 = &puStack_b0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108dd678,&uStack_180,puVar5);
    func_0x00010007e5dc(&puStack_168);
  }
  return;
}



/* Entry: 105c1a140; end: 105c1a32b;  */

void FUN_105c1a140(long param_1,undefined *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  puVar3 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_1108dd628;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108dd628,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  pcVar1 = param_3;
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
  pcVar2 = pcVar1;
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_105c1a32c;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = pcVar1;
    pcStack_b8 = param_3;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_1108dd678,&uStack_e0,puVar3);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 105c1a32c; end: 105c1a3a3;  */

void FUN_105c1a32c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108dd678,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c1a3a4; end: 105c1a517;  */

void FUN_105c1a3a4(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
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
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108dd6c8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105c1a518;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108dd718,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_105c1a68c;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108dd768,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 105c1a518; end: 105c1a68b;  */

void FUN_105c1a518(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108dd718,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105c1a68c;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108dd768,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105c1a68c; end: 105c1a703;  */

void FUN_105c1a68c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108dd768,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c1a704; end: 105c1a877;  */

void FUN_105c1a704(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108dd7b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105c1a878;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108dd808,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105c1a878; end: 105c1a8ef;  */

void FUN_105c1a878(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108dd808,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c1a8f0; end: 105c1a9d3; +[OnDeviceMLModelsCacheClearanceConfig descriptor] */

void FUN_105c1a8f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a91ae0,
                        &PTR____CFConstantStringClassReference_110e22bb8,&PTR_DAT_11311ee58,
                        &PTR_s_enabled_11311ee70,6,0x10,0x1c);
    puRam00000001136c1ce8 = puVar1;
  }
  return;
}



/* Entry: 105c1a9d4; end: 105c1a9df;  */

bool FUN_105c1a9d4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105c1a9e0; end: 105c1aa5b;  */

undefined * FUN_105c1a9e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1cf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e22bf8,
                        &UNK_10ddcb428,&UNK_10ddcb44c,3,FUN_105c1aa5c,0);
    do {
      if (puRam00000001136c1cf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1cf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1cf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1cf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1cf8;
}



/* Entry: 105c1aa5c; end: 105c1aa67;  */

bool FUN_105c1aa5c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105c1aa68; end: 105c1aae3;  */

undefined * FUN_105c1aa68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1d00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e22c18,
                        &UNK_10ddcb490,&UNK_10ddcb458,2,FUN_105c1aae4,0);
    do {
      if (puRam00000001136c1d00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1d00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1d00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1d00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1d00;
}



/* Entry: 105c1aae4; end: 105c1aaef;  */

bool FUN_105c1aae4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 105c1aaf0; end: 105c1ab6b;  */

undefined * FUN_105c1aaf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1d08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e22c38,
                        &UNK_10ddcb460,&UNK_10ddcb47c,5,FUN_105c1ab6c,0);
    do {
      if (puRam00000001136c1d08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1d08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1d08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1d08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1d08;
}



/* Entry: 105c1ab6c; end: 105c1ab77;  */

bool FUN_105c1ab6c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105c1ab78; end: 105c1abdf; +[OnDeviceMLModelsPrefetchConfig descriptor] */

void FUN_105c1ab78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a91b80,
                        &PTR____CFConstantStringClassReference_110e22c58,&PTR_DAT_11311ef30,
                        &PTR_DAT_11311efc8,0x19,0x48,0x1c);
    puRam00000001136c1d10 = puVar1;
  }
  return;
}



/* Entry: 105c1abe0; end: 105c1ac5b; +[OnDeviceMLModelsPrefetchConfig_OnDeviceMLModelAsset descriptor] */

undefined * FUN_105c1abe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a91bd0,
                        &PTR____CFConstantStringClassReference_110e22c78,&PTR_DAT_11311ef30,
                        &PTR_s_id_p_11311ef48,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c1d18 = puVar1;
  }
  return puRam00000001136c1d18;
}



/* Entry: 105c1ac5c; end: 105c1accf; -[SCPreviewCameraRollSnapSavingJobProcessor initWithCameraRollSnapSavingCoordinator:] */

undefined1 * FUN_105c1ac5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec620;
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



/* Entry: 105c1acd0; end: 105c1aec7; -[SCPreviewCameraRollSnapSavingJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_105c1acd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc();
    func_0x00010bfeea60();
    _objc_release(param_4);
    _objc_retain(0);
    func_0x00010c1ec620(puVar1);
    puVar2 = puVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0218;
    _objc_opt_class(PTR_PTR_1126c0218);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      (**(code **)(param_6 + 0x10))(param_6,2,0);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c085840(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      _objc_retain(param_3);
      _objc_retain(param_6);
      func_0x00010c0856c0(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(param_6);
      _objc_release(param_3);
      _objc_release(puVar3);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(0);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return 0;
}



/* Entry: 105c1aec8; end: 105c1aee7;  */

void FUN_105c1aec8(long param_1,byte param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 & param_3 == 0) == 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000105c1aee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1);
  return;
}



/* Entry: 105c1aee8; end: 105c1aef3; -[SCPreviewCameraRollSnapSavingJobProcessor .cxx_destruct] */

void FUN_105c1aee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c1aef4; end: 105c1b65b; -[SCSendFlowEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c1aef4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined *puVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar1 = param_1 + _DAT_1127325bc;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c15aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127325c0;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c08d860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c32c8;
  _objc_alloc();
  lVar50 = (long)_DAT_1127325c4;
  lVar1 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_1127325c8;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + _DAT_1127325cc;
  _objc_loadWeakRetained();
  lVar7 = lVar55;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127325d0;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_1127325d8;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_1127325dc;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c15d560();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112732674;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_1127325e4;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_1127325e8;
  lVar15 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c244b20();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_1127325ec;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar23 = lVar53;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = (long)_DAT_1127325f0;
  lVar24 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar26 = lVar54;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_1127325f4;
  _objc_loadWeakRetained();
  lVar51 = (long)_DAT_1127325f8;
  lVar28 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_1127325fc;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c258780();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c08d8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112732600;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112732604;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c11a940();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112732608;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c0ba020();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_11273260c;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c15d240();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112732610;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c252360();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_112732614;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112732618;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_11273261c;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010bf46900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0442a0();
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar54);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar53);
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
  _objc_release(lVar55);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar49 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_1 + _DAT_112732620);
  *(undefined **)(param_1 + _DAT_112732620) = puVar49;
  _objc_release(uVar52);
  puVar49 = PTR_PTR_1126c32d0;
  _objc_alloc();
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar51 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar3 = lVar51;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112732624;
  _objc_loadWeakRetained();
  func_0x00010c044280();
  lVar55 = (long)_DAT_112732628;
  uVar52 = *(undefined8 *)(param_1 + lVar55);
  *(undefined **)(param_1 + lVar55) = puVar49;
  _objc_release(uVar52);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar51);
  _objc_release(lVar50);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar55));
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  return;
}



/* Entry: 105c1b65c; end: 105c1b69b;  */

void FUN_105c1b65c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeff60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c1b69c; end: 105c1bce3; -[SCSendFlowEntryPoint _createMediaSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c1b69c(long param_1,undefined8 param_2)

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
  long lVar19;
  long lVar20;
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
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  
  puVar1 = PTR_PTR_1126c32d8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127325c4;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11273262c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127325c8;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112732630;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c2431e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112732634;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112732638;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf89de0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11273263c;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c25ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112732640;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf9e360();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_1127325f0;
  lVar18 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_112732644;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bfb8c00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_1127325f4;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112732600;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112732648;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_1127325e8;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11273264c;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112732650;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112732654;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112732658;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c0c4860();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar37 = lVar56;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_11273265c;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_112732660;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_112732664;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010c08ef00();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = (long)_DAT_112732618;
  lVar44 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010bfdac40();
  lVar48 = param_1 + _DAT_1127325f8;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_112732668;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c15d360();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_11273266c;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_112732624;
  _objc_loadWeakRetained();
  lVar55 = param_1 + _DAT_112732670;
  _objc_loadWeakRetained();
  param_1 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar57 = param_1;
  func_0x00010c0bc3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044240(puVar1,param_2,lVar2,lVar4,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,lVar18,
                      lVar20,lVar22,lVar24,lVar26,lVar28,lVar30,lVar32,lVar34,lVar36,lVar37,lVar39,
                      lVar41,lVar43,(char)lVar47);
  _objc_release(lVar57);
  _objc_release(param_1);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar56);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
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
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c1bce4; end: 105c1bf53; -[SCSendFlowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c1bce4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127325c0);
  _objc_destroyWeak(param_1 + _DAT_11273261c);
  _objc_destroyWeak(param_1 + _DAT_112732670);
  _objc_destroyWeak(param_1 + _DAT_112732624);
  _objc_destroyWeak(param_1 + _DAT_11273266c);
  _objc_destroyWeak(param_1 + _DAT_112732668);
  _objc_destroyWeak(param_1 + _DAT_112732614);
  _objc_destroyWeak(param_1 + _DAT_112732610);
  _objc_destroyWeak(param_1 + _DAT_11273260c);
  _objc_destroyWeak(param_1 + _DAT_112732608);
  _objc_destroyWeak(param_1 + _DAT_112732644);
  _objc_destroyWeak(param_1 + _DAT_112732638);
  _objc_destroyWeak(param_1 + _DAT_11273263c);
  _objc_destroyWeak(param_1 + _DAT_1127325bc);
  _objc_storeStrong(param_1 + _DAT_1127325e0,0);
  _objc_storeStrong(param_1 + _DAT_1127325d4,0);
  _objc_destroyWeak(param_1 + _DAT_1127325d8);
  _objc_destroyWeak(param_1 + _DAT_112732664);
  _objc_destroyWeak(param_1 + _DAT_1127325fc);
  _objc_destroyWeak(param_1 + _DAT_112732678);
  _objc_destroyWeak(param_1 + _DAT_112732618);
  _objc_destroyWeak(param_1 + _DAT_112732660);
  _objc_destroyWeak(param_1 + _DAT_11273265c);
  _objc_destroyWeak(param_1 + _DAT_112732658);
  _objc_destroyWeak(param_1 + _DAT_1127325f8);
  _objc_destroyWeak(param_1 + _DAT_1127325f0);
  _objc_destroyWeak(param_1 + _DAT_1127325ec);
  _objc_destroyWeak(param_1 + _DAT_1127325e4);
  _objc_destroyWeak(param_1 + _DAT_112732648);
  _objc_destroyWeak(param_1 + _DAT_112732654);
  _objc_destroyWeak(param_1 + _DAT_112732604);
  _objc_destroyWeak(param_1 + _DAT_112732600);
  _objc_destroyWeak(param_1 + _DAT_1127325f4);
  _objc_destroyWeak(param_1 + _DAT_1127325e8);
  _objc_destroyWeak(param_1 + _DAT_112732650);
  _objc_destroyWeak(param_1 + _DAT_11273264c);
  _objc_destroyWeak(param_1 + _DAT_11273262c);
  _objc_destroyWeak(param_1 + _DAT_112732674);
  _objc_destroyWeak(param_1 + _DAT_1127325dc);
  _objc_destroyWeak(param_1 + _DAT_112732640);
  _objc_destroyWeak(param_1 + _DAT_112732634);
  _objc_destroyWeak(param_1 + _DAT_112732630);
  _objc_destroyWeak(param_1 + _DAT_1127325d0);
  _objc_destroyWeak(param_1 + _DAT_1127325c4);
  _objc_destroyWeak(param_1 + _DAT_1127325cc);
  _objc_destroyWeak(param_1 + _DAT_1127325c8);
  _objc_storeStrong(param_1 + _DAT_112732620,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732628,0);
  return;
}



/* Entry: 105c1bf54; end: 105c1c5c3; -[SCSendFlowMediaSender initWithSendFlowScope:conversationParser:userId:snapSender:textMessageSender:drawerMediaSender:storyReplySender:externalMediaPreparer:storiesServices:friendStoriesNonFriendStoriesCombinedPlaybackDataProvider:usernameProvider:myStoriesDataCoordinator:storiesGrapheneMetricsEmitter:snapchatterFetcher:userBlizzard:sendObservabilityLogger:networkConnectivityMonitor:lazyMediaDataIngestor:lazyStoriesMediaCoordinator:notificationPool:SCStoryPrivacySettingManager:legacyEphemeralMediaFactory:hasPublicProfile:circumstanceEngine:sendToMassSnapNotificationService:pageLauncher:spotlightAutoShareService:spotlightTileServices:massSnapPostSignalService:] */

undefined8 *
FUN_105c1bf54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined4 param_23,undefined4 param_24,
             undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_25);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  puStack_80 = PTR_PTR_1126ec628;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_10;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c247520();
    puVar1[4] = uVar2;
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[7];
    puVar1[7] = param_13;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c258d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_11;
    func_0x00010bf62080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c32e0;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[8];
    puVar1[8] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    uVar2 = param_19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1d) = param_26;
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_33;
    _objc_release(uVar2);
    uVar2 = puVar1[5];
    func_0x00010bf45e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0c0220(uVar2);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_22);
  _objc_release(param_21);
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



/* Entry: 105c1c5c4; end: 105c1c64b;  */

void FUN_105c1c5c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xea) = 1;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c110980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c1c64c; end: 105c1c657;  */

void FUN_105c1c64c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xea) = 0;
  return;
}



/* Entry: 105c1c658; end: 105c1ca5f; -[SCSendFlowMediaSender sendSnapMediaWithMetadata:] */

void FUN_105c1c658(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0xe9) = 0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = param_3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  _objc_release(uVar2);
  lVar3 = param_3;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010bf529e0();
  if (lVar10 == 0) {
    _objc_release(lVar3);
LAB_105c1c710:
    lVar3 = param_3;
    func_0x00010bf36e80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar10 == 0) {
      lVar10 = 0;
      bVar12 = true;
    }
    else {
      lVar3 = param_3;
      func_0x00010bf36e80();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c4660();
      bVar12 = true;
      _objc_release(lVar10);
      _objc_release(lVar3);
      lVar10 = 0;
    }
  }
  else {
    lVar10 = param_1;
    func_0x00010be0ace0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar10 == 0) goto LAB_105c1c710;
    func_0x00010c0830a0();
    bVar12 = false;
  }
  lVar3 = param_3;
  func_0x00010bf429e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar11 = param_3;
    func_0x00010bf429e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247520();
    _objc_release(lVar11);
  }
  _objc_release(lVar3);
  if (bVar12) {
    lVar11 = 0;
  }
  else {
    lVar3 = lVar10;
    func_0x00010bf3cf60(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c15cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0af260();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  _objc_release(uVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  if ((*(ulong *)(param_1 + 0x20) < 0xd) &&
     ((1L << (*(ulong *)(param_1 + 0x20) & 0x3f) & 0x1801U) != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
    func_0x00010c07c560();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
      func_0x00010c081a80();
      if (iVar1 != 0) {
        uVar7 = *(ulong *)(param_1 + 0xf0);
        func_0x00010c11e8a0();
        if ((uVar7 & 1) == 0) {
          func_0x00010bea0f60(param_1);
          goto LAB_105c1ca30;
        }
      }
    }
    func_0x00010bea03a0(param_1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c15db60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be42d00();
    _objc_release(lVar3);
    if (((int)lVar5 != 0) &&
       ((*(ulong *)(param_1 + 0x20) < 9 &&
        ((1L << (*(ulong *)(param_1 + 0x20) & 0x3f) & 0x148U) != 0)))) {
      lVar3 = param_3;
      func_0x00010c15db60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc4e60(param_1);
      _objc_release(lVar3);
      puVar8 = PTR____NSArray0__struct_11034ab48;
      func_0x0001086063f4(PTR____NSArray0__struct_11034ab48,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea0360(param_1);
      _objc_release(puVar8);
    }
    func_0x00010be9eb60(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c32e8;
    func_0x00010bf36ec0(PTR_PTR_1126c32e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b5a0(uVar2);
    _objc_release(puVar8);
    _objc_release(uVar2);
  }
LAB_105c1ca30:
  _objc_release(lVar11);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c1ca60; end: 105c1ce53; -[SCSendFlowMediaSender _sendChatMediaWithMetadata:] */

void FUN_105c1ca60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beb6600();
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afde0;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1f218;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340(uVar3);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(uVar3);
  }
  lVar2 = param_1;
  func_0x00010be42d00();
  if ((int)lVar2 != 0) {
    func_0x00010bdc4e60(param_1);
    puVar5 = PTR____NSArray0__struct_11034ab48;
    func_0x0001086063f4(PTR____NSArray0__struct_11034ab48,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea0360(param_1);
    _objc_release(puVar5);
  }
  lVar2 = param_3;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x000105c247c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c0bc3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  lVar8 = lVar2;
  func_0x00010bf529e0();
  if (lVar7 + lVar8 != 0) {
    lVar7 = lVar1;
    func_0x00010c122f00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x000100504554();
    _objc_release(lVar7);
    lVar7 = lVar1;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x000108605670(lVar7,lVar8,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar7);
    lVar7 = lVar1;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010bf529e0();
    lVar11 = lVar9;
    func_0x00010c0de0e0();
    _objc_release(lVar7);
    lVar7 = lVar2;
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      _objc_initWeak(auStack_68,param_1);
      uVar12 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar12;
      func_0x00010c246920();
      _objc_retainAutoreleasedReturnValue();
      lStack_70 = lVar11 + lVar10;
      _objc_retain(lVar9);
      _objc_copyWeak(auStack_78,auStack_68);
      lVar7 = param_3;
      _objc_retain(param_3);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar3);
      _objc_release(lVar7);
      _objc_release(uVar3);
      _objc_release(uVar12);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_78);
      _objc_release(lVar9);
      _objc_destroyWeak(auStack_68);
    }
    else {
      lVar7 = lVar2;
      func_0x00010bf529e0(lVar2);
      puVar5 = PTR____NSArray0__struct_11034ab48;
      func_0x0001086063f4(PTR____NSArray0__struct_11034ab48,lVar7,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9eb40(param_1);
      _objc_release(puVar5);
    }
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105c1ce54; end: 105c1ce5b;  */

void FUN_105c1ce54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 105c1ce5c; end: 105c1cf4f;  */

void FUN_105c1ce5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_2;
      func_0x00010bf026a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x0001086063f4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_2;
      func_0x00010bf50b20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9eb40(param_1);
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c1cf50; end: 105c1d177; -[SCSendFlowMediaSender _sendSnapMediaWithMetadata:] */

void FUN_105c1cf50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc4e60(param_1);
  uVar2 = uVar1;
  func_0x00010c122f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000108605670(uVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0de0e0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c15db60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000105c247c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  uVar7 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c1d178; end: 105c1d17f;  */

void FUN_105c1d178(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 105c1d180; end: 105c1d23f;  */

void FUN_105c1d180(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x0001086063f4(uVar2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0360(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c1d240; end: 105c1d6af; -[SCSendFlowMediaSender _sendSnapMediaToConversationIds:metadata:destinationInfo:] */

void FUN_105c1d240(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010c0c5580(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bebcfc0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010bf529e0();
  _objc_release(uVar12);
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      uVar4 = param_1;
      func_0x00010be0ace0(param_1,param_2,uVar12,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_4;
      func_0x00010c15db60(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c15bd40(param_4);
      uVar6 = param_4;
      func_0x00010c15d060(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c15cf20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c15d5c0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_4;
      func_0x00010c0713e0();
      func_0x00010bed7940(param_1,param_2,uVar4,param_5,uVar13,uVar3,uVar5 == 2,uVar8,(char)uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar13);
      _objc_release(uVar4);
      uVar12 = uVar12 + 1;
      uVar4 = param_4;
      func_0x00010c0c5580();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
    } while (uVar12 < uVar13);
  }
  uVar12 = uVar2;
  func_0x00010c0bc3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010bf529e0();
  uVar4 = uVar12;
  func_0x00010bf529e0();
  uVar13 = uVar2;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bf529e0();
  _objc_release(uVar13);
  uVar13 = uVar2;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010bf529e0();
  if (uVar6 == 0) {
    _objc_release(uVar13);
LAB_105c1d4b0:
    uVar13 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 200);
    func_0x000108faa300();
    _objc_release(uVar13);
    if (iVar1 == 0) goto LAB_105c1d4b0;
    uVar13 = uVar2;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = param_4;
  func_0x00010c15db60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010be42d00(param_1,param_2,uVar6);
  _objc_release(uVar6);
  lVar11 = param_3;
  func_0x00010bf529e0();
  if (((lVar11 == 0) && ((uVar7 & 1) == 0)) && (uVar6 = uVar13, func_0x00010bf529e0(), uVar6 == 0))
  {
    uVar6 = uVar12;
    func_0x00010bf529e0();
    if (uVar6 == 0) {
      uVar6 = uVar2;
      func_0x00010c2584a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_4;
      func_0x00010bf429e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be00500(param_1,param_2,uVar4 + lVar10,uVar5,param_4,0,uVar6,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      func_0x00010be00560(param_1);
      func_0x00010be004c0(param_1,param_2,0,0,0);
      goto LAB_105c1d5d4;
    }
  }
  uVar6 = uVar2;
  func_0x00010c2584a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b750();
  uVar8 = uVar2;
  func_0x00010bf24f00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar8);
  _objc_release(uVar6);
  func_0x00010bea0340(param_1,param_2,param_4,param_3,uVar12,uVar13,param_5,uVar3);
  uVar6 = uVar2;
  func_0x00010c2584a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf429e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be00500(param_1,param_2,uVar4 + lVar10,uVar5,param_4,uVar7 & 0xffffffff,uVar6,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar6);
LAB_105c1d5d4:
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c1d6b0; end: 105c1dbf7; -[SCSendFlowMediaSender _sendChatMediaToConversationIds:metadata:destinationInfo:] */

void FUN_105c1d6b0(undefined *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010bf36e80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100504554();
  _objc_release(lVar2);
  func_0x00010c15bd40();
  lVar2 = param_4;
  func_0x00010bf429e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1;
  func_0x00010bddd080(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c15d060(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c15cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar15;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar2);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar3);
      }
      puVar5 = puVar14;
      func_0x00010c294d60(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be79640(param_1);
      _objc_release(puVar5);
      lVar13 = lVar13 + 1;
    } while (lVar2 != lVar13);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  lVar2 = lVar3;
  puVar5 = puVar14;
  FUN_105c2420c(lVar3,puVar14,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 200));
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_4;
  func_0x00010c15db60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar15;
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf37880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar15);
  _objc_release(uVar6);
  lVar15 = param_4;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar15;
  func_0x00010c0bc3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_4;
  func_0x00010c15db60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be42d00();
  _objc_release(lVar15);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar13);
  func_0x00010c15c260(uVar6);
  _objc_release(uVar6);
  lVar15 = 0;
  if (*(long *)(param_1 + 0x20) == 9) {
    lVar8 = param_4;
    func_0x00010bf429e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar8;
    func_0x000107fdc0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  _objc_retain(lVar15);
  lVar8 = lVar15;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar15);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar6);
      lVar16 = lVar16 + 1;
    } while (lVar8 != lVar16);
    lVar8 = lVar15;
    func_0x00010bf52a60();
  }
  _objc_release(lVar15);
  func_0x00010be00560(param_1);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar13);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(puVar14);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(ulong *)(*(long *)(param_3 + 0x20) + 0x20);
  _objc_retain(puVar5);
  puVar14 = (undefined *)0x0;
  if (uVar9 < 0xb) {
    if ((1L << (uVar9 & 0x3f) & 0x648U) == 0) {
      if (uVar9 != 8) goto LAB_105c24b58;
      puVar14 = PTR_PTR_1126c33b0;
      _objc_alloc(PTR_PTR_1126c33b0);
      puVar11 = puVar5;
      FUN_1067ae6a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c028fa0(puVar14);
    }
    else {
      puVar14 = PTR_PTR_1126c33b0;
      _objc_alloc(PTR_PTR_1126c33b0);
      puVar11 = puVar14;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      func_0x000106e0c1a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c028fa0(puVar14);
      _objc_release(puVar10);
    }
    _objc_release(puVar11);
  }
LAB_105c24b58:
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105c1dbf8; end: 105c1dc03;  */

void FUN_105c1dbf8(long param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_2);
  puVar4 = (undefined *)0x0;
  if (uVar1 < 0xb) {
    if ((1L << (uVar1 & 0x3f) & 0x648U) == 0) {
      if (uVar1 != 8) goto LAB_105c24b58;
      puVar4 = PTR_PTR_1126c33b0;
      _objc_alloc(PTR_PTR_1126c33b0);
      puVar3 = param_2;
      FUN_1067ae6a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c028fa0(puVar4);
    }
    else {
      puVar4 = PTR_PTR_1126c33b0;
      _objc_alloc(PTR_PTR_1126c33b0);
      puVar3 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
      func_0x000106e0c1a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c028fa0(puVar4);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
  }
LAB_105c24b58:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c1dc04; end: 105c1dc4b;  */

void FUN_105c1dc04(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be004d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__didSendCompleteWithSuccess_toCh_11255dad0,param_2 == 0,uVar2,lVar3 != 0);
  return;
}



/* Entry: 105c1dc4c; end: 105c1e553; -[SCSendFlowMediaSender _updateEphemeralCommonLoggingParameters:destinationInfo:senderData:multiMediaBundleId:fromSendTo:sendToSessionId:isEligibleForCrossPostingSpotlightToStories:] */

void FUN_105c1dc4c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8,char param_9)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined *puStack_280;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar24 = param_6;
  uVar19 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar20 = param_5;
  func_0x00010c2584a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b750();
  lVar1 = param_5;
  func_0x00010bf24f00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(lVar20);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba560();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_4;
  func_0x00010bfbb520();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar20;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010bf0a3a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2bd100(uVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    func_0x00010c2bd100(uVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar20);
  _objc_release(uVar23);
  lVar20 = param_5;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105440();
  _objc_release(lVar20);
  lVar20 = param_5;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar20;
  func_0x00010c0d4ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(lVar1);
  _objc_release(lVar20);
  lVar20 = param_5;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar20;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar20);
  puVar17 = auStack_f0;
  uVar18 = 0x10;
  lVar20 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar20 != 0) {
    lVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar23 = *(ulong *)(lVar22 * 8);
      func_0x00010c071ae0();
      if ((uVar23 & 1) == 0) {
        func_0x00010c071ae0();
      }
      lVar22 = lVar22 + 1;
    } while (lVar20 != lVar22);
    puVar17 = auStack_f0;
    uVar18 = 0x10;
    lVar20 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd000();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bcfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bcfa0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010c2584a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105440();
  func_0x00010c2bcf60(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010c2584a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105460();
  func_0x00010c2bd0a0(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd160();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010c2584a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b638();
  func_0x00010c2bd080(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010c2584a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b6bc();
  func_0x00010c2bd040(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010bf24f00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba380(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010c2584a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar20;
  func_0x00010c0d4ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd020(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010c2584a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar20;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd060(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_4;
  func_0x00010bfbb520(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  lVar1 = param_5;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108605534();
  lVar10 = param_4;
  func_0x00010bf0a3a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2b68e0(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf0d6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c2bcf20(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae860();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd0e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22dd20();
  func_0x00010c2b6ba0(uVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(uVar23);
  uVar23 = param_3;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  func_0x00010c2b8260();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar23);
  if (param_9 != '\0') {
    uVar23 = param_3;
    func_0x00010bf42a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar23;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2ab720(uVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar23);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar2);
  _objc_retain(puVar17);
  _objc_retain(uVar18);
  _objc_retain(uVar24);
  _objc_retain(param_7);
  _objc_retain(uVar19);
  uVar23 = param_3;
  func_0x00010be4a3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar23;
  func_0x00010c135b60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    puStack_280 = (undefined *)0x0;
  }
  else {
    puStack_280 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = uVar2;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010c105440();
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar5;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uVar6 = uVar2;
      func_0x00010c15db60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf24f00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf529e0();
      if (uVar8 == 0) {
        uVar9 = *(undefined8 *)(param_3 + 0xb0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25aac0();
        _objc_release(uVar9);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(uVar4);
  }
  puVar21 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar21);
  uVar4 = uVar2;
  func_0x00010c15db60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bdde340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c24c6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar7 != 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x118);
    func_0x00010c28ec40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c23fe00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28eb80(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar9);
  }
  uVar4 = uVar2;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar19);
  _objc_retain(param_7);
  _objc_retain(puStack_280);
  _objc_retain(uVar24);
  _objc_retain(uVar18);
  _objc_retain(puVar17);
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  func_0x00010bf97e80(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(param_7);
  _objc_release(puStack_280);
  _objc_release(uVar24);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(param_7);
  _objc_release(puStack_280);
  _objc_release(uVar24);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)(uVar23 + 0x20);
  func_0x00010be0ace0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = *(long *)(uVar23 + 0x28);
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar22;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar20;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(lVar22);
  if (lVar1 != 0) {
    lVar20 = lVar10;
    func_0x00010bf4e840(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar20;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar22;
    func_0x00010bf0cb00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010846a70c(lVar1,lVar11,*(undefined1 *)(*(long *)(uVar23 + 0x20) + 0xe8));
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(uVar23 + 0x30);
    lVar13 = lVar12;
    func_0x00010846a2f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar24);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar22);
    _objc_release(lVar20);
  }
  lVar20 = lVar10;
  func_0x00010bf9dee0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010bf529e0();
  if (lVar22 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = PTR_PTR_1126be7b0;
    _objc_alloc_init();
  }
  _objc_release(lVar20);
  _objc_retain(lVar10);
  lVar20 = lVar10;
  func_0x00010c09dd60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar20 == 0) {
    lVar22 = lVar10;
    func_0x00010bf9dee0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar22;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar22);
  }
  else {
    _objc_retain(lVar20);
    lVar11 = lVar20;
  }
  _objc_release(lVar20);
  _objc_release(lVar10);
  lVar20 = *(long *)(uVar23 + 0x30);
  func_0x00010bf529e0();
  uVar24 = *(undefined8 *)(uVar23 + 0x20);
  uVar18 = *(undefined8 *)(uVar23 + 0x28);
  if (lVar20 == 0) {
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010bea0320(*(undefined8 *)(uVar23 + 0x68),uVar24);
  }
  else {
    func_0x00010c15db60(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar18;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c24c6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99fa0(uVar24);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uVar18);
    puVar16 = PTR_PTR_1126c32f0;
    _objc_alloc(PTR_PTR_1126c32f0);
    uVar24 = *(undefined8 *)(uVar23 + 0x20);
    uVar18 = *(undefined8 *)(uVar23 + 0x28);
    func_0x00010c15db60(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb6540(uVar24);
    func_0x00010c0106c0(puVar16);
    _objc_release(uVar18);
    lVar20 = lVar1;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar20 == 0) {
      func_0x00010c0713e0();
    }
    _objc_release(lVar20);
    func_0x00010bea0380(*(undefined8 *)(uVar23 + 0x68),*(undefined8 *)(uVar23 + 0x20));
    uVar24 = *(undefined8 *)(*(long *)(uVar23 + 0x20) + 0x70);
    func_0x00010c269d40(uVar24);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar10;
    func_0x00010bf3cf60(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066ea0(uVar24);
    _objc_release(lVar20);
    _objc_release(uVar24);
    lVar20 = lVar10;
    func_0x00010bf3cf60(lVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(*(long *)(uVar23 + 0x20) + 0x88);
    func_0x00010c269d40(uVar24);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(*(long *)(uVar23 + 0x20) + 0x70);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010846b3d4(lVar20,uVar24,uVar18);
    _objc_release(uVar18);
    _objc_release(uVar24);
    _objc_release(lVar20);
  }
  _objc_release(puVar16);
  _objc_release(lVar11);
  _objc_release(puVar21);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 105c1e554; end: 105c1e9ab; -[SCSendFlowMediaSender _sendSnapMediaToChatAndStories:conversationIds:massSnapRecipients:phoneNumbers:destinationInfo:multiMediaBundleId:] */

void FUN_105c1e554(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puStack_110;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010be4a3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010c135b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    puStack_110 = (undefined *)0x0;
  }
  else {
    puStack_110 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_3;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c105440();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar3;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar4 = param_3;
      func_0x00010c15db60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf24f00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      if (uVar6 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25aac0();
        _objc_release(uVar7);
      }
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar20);
  uVar2 = param_3;
  func_0x00010c15db60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bdde340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c24c6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar4 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c28ec40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c23fe00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28eb80(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar7);
  }
  uVar2 = param_3;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(puStack_110);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(lVar8);
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar2);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puStack_110);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puStack_110);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    lVar8 = *(long *)(lVar1 + 0x20);
    func_0x00010be0ace0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(lVar1 + 0x28);
    func_0x00010c15db60();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar9;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar13;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(lVar9);
    if (lVar19 != 0) {
      lVar13 = lVar8;
      func_0x00010bf4e840(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar13;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf0cb00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar19;
      func_0x00010846a70c(lVar19,lVar10,*(undefined1 *)(*(long *)(lVar1 + 0x20) + 0xe8));
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      lVar12 = lVar11;
      func_0x00010846a2f4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar13);
    }
    lVar13 = lVar8;
    func_0x00010bf9dee0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar13;
    func_0x00010bf529e0();
    if (lVar9 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = PTR_PTR_1126be7b0;
      _objc_alloc_init();
    }
    _objc_release(lVar13);
    _objc_retain(lVar8);
    lVar13 = lVar8;
    func_0x00010c09dd60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
      lVar9 = lVar8;
      func_0x00010bf9dee0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
    else {
      _objc_retain(lVar13);
      lVar10 = lVar13;
    }
    _objc_release(lVar13);
    _objc_release(lVar8);
    lVar13 = *(long *)(lVar1 + 0x30);
    func_0x00010bf529e0();
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar18 = *(undefined8 *)(lVar1 + 0x28);
    if (lVar13 == 0) {
      puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      func_0x00010bea0320(*(undefined8 *)(lVar1 + 0x68),uVar7);
    }
    else {
      func_0x00010c15db60(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar18;
      func_0x00010c2584a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c0ee3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c24c6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be99fa0(uVar7);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar18);
      puVar17 = PTR_PTR_1126c32f0;
      _objc_alloc(PTR_PTR_1126c32f0);
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      uVar18 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c15db60(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb6540(uVar7);
      func_0x00010c0106c0(puVar17);
      _objc_release(uVar18);
      lVar13 = lVar19;
      func_0x00010bf24ec0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar13 == 0) {
        func_0x00010c0713e0();
      }
      _objc_release(lVar13);
      func_0x00010bea0380(*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x20));
      uVar7 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x70);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar8;
      func_0x00010bf3cf60(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066ea0(uVar7);
      _objc_release(lVar13);
      _objc_release(uVar7);
      lVar13 = lVar8;
      func_0x00010bf3cf60(lVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x88);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x70);
      func_0x00010c269d40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010846b3d4(lVar13,uVar7,uVar18);
      _objc_release(uVar18);
      _objc_release(uVar7);
      _objc_release(lVar13);
    }
    _objc_release(puVar17);
    _objc_release(lVar10);
    _objc_release(puVar20);
    _objc_release(lVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
  return;
}



/* Entry: 105c1e9ac; end: 105c1ee43;  */

void FUN_105c1e9ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be0ace0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar7 = lVar1;
    func_0x00010bf4e840(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf0cb00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010846a70c(lVar3,lVar4,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0xe8));
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    lVar6 = lVar5;
    func_0x00010846a2f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar14);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar7);
  }
  lVar7 = lVar1;
  func_0x00010bf9dee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126be7b0;
    _objc_alloc_init();
  }
  _objc_release(lVar7);
  _objc_retain(lVar1);
  lVar7 = lVar1;
  func_0x00010c09dd60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar2 = lVar1;
    func_0x00010bf9dee0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    _objc_retain(lVar7);
    lVar4 = lVar7;
  }
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  if (lVar7 == 0) {
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010bea0320(*(undefined8 *)(param_1 + 0x68),uVar14);
  }
  else {
    func_0x00010c15db60(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c24c6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99fa0(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar12);
    puVar11 = PTR_PTR_1126c32f0;
    _objc_alloc(PTR_PTR_1126c32f0);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15db60(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb6540(uVar14);
    func_0x00010c0106c0(puVar11);
    _objc_release(uVar12);
    lVar7 = lVar3;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      func_0x00010c0713e0();
    }
    _objc_release(lVar7);
    func_0x00010bea0380(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x20));
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf3cf60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066ea0(uVar14);
    _objc_release(lVar7);
    _objc_release(uVar14);
    lVar7 = lVar1;
    func_0x00010bf3cf60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010846b3d4(lVar7,uVar14,uVar12);
    _objc_release(uVar12);
    _objc_release(uVar14);
    _objc_release(lVar7);
  }
  _objc_release(puVar11);
  _objc_release(lVar4);
  _objc_release(puVar13);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c1ee44; end: 105c1ee47;  */

void FUN_105c1ee44(void)

{
  return;
}



/* Entry: 105c1ee48; end: 105c1f2f3; -[SCSendFlowMediaSender _didSendSnapMediaRecipientsCount:groupCount:metadata:postingStory:storiesConfig:commonLoggingParams:] */

void FUN_105c1ee48(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  int param_6,undefined *param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
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
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 < 1) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar21 = param_5;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar21;
    func_0x00010bf529e0();
    _objc_release(uVar21);
    if (uVar4 != 0) {
      uVar21 = 0;
      do {
        lVar22 = param_1;
        func_0x00010be0ace0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar22;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar5);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(lVar22);
        func_0x00010c0df780(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar7);
        _objc_release(lVar22);
        uVar21 = uVar21 + 1;
        uVar4 = param_5;
        func_0x00010c0c5580();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
      } while (uVar21 < uVar6);
    }
    puVar7 = *(undefined **)(param_1 + 0x28);
    func_0x00010bf6b020(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c32e8;
    puVar8 = param_7;
    func_0x00010c0d9740();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_7;
    func_0x00010846ba3c();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010bf51e00();
    puVar11 = puVar3;
    func_0x00010bf51e00();
    puVar12 = param_7;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_7;
    func_0x00010c11a9e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_7;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c24c6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c130480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0713e0();
    func_0x00010c25bb20(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b5a0(puVar7);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010bf6b020(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c32e8;
    puVar3 = param_7;
    func_0x00010846ba3c(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c243f80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b5a0(puVar2);
  }
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)(param_1 + 0x20) - 5U < 2) {
    lVar22 = param_8;
    func_0x000107fdc0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar22 = 0;
  }
  if (param_6 != 0) {
    _objc_retain(lVar22);
    lVar5 = lVar22;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar23 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar22);
        }
        uVar19 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c269d40(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar19);
        lVar23 = lVar23 + 1;
      } while (lVar5 != lVar23);
      lVar5 = lVar22;
      func_0x00010bf52a60();
    }
    _objc_release(lVar22);
  }
  _objc_release(lVar22);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    if (*(long *)(param_5 + 0x130) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c1f300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_5 + 0x130) + 0x10))();
      return;
    }
    return;
  }
  return;
}



/* Entry: 105c1f2f4; end: 105c1f307; -[SCSendFlowMediaSender _didSendTriggered] */

void FUN_105c1f2f4(long param_1)

{
  if (*(long *)(param_1 + 0x130) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c1f300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x130) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c1f308; end: 105c1f49b; -[SCSendFlowMediaSender _didSendCompleteWithSuccess:toChatOnly:toMassSnap:] */

/* WARNING: Possible PIC construction at 0x000105c1f3a0: Changing call to branch */

void FUN_105c1f308(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  if ((*(byte *)(param_1 + 0xe9) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xe9) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b420();
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0xea) == '\x01') {
    uVar2 = *(ulong *)(param_1 + 0xf0);
    func_0x00010c07f4c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0xf0);
      func_0x00010c0775a0();
      if ((param_4 != 0) && ((uVar2 & 1) != 0)) goto LAB_105c1f3d8;
    }
    else if (param_4 != 0) {
LAB_105c1f3d8:
      ppuVar3 = &PTR____CFConstantStringClassReference_110dbbb98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107240204(ppuVar3,puVar4,&PTR____CFConstantStringClassReference_110e22c98);
      _objc_release(puVar4);
      _objc_release(ppuVar3);
    }
    if ((int)param_3 != 0) {
      func_0x00010beb8cc0(param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    _objc_release(uVar1);
  }
  else if (*(long *)(param_1 + 0x20) == 6) goto code_r0x00010bebb2a0;
  if (param_5 == 0) {
    return;
  }
  if ((int)param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  param_3 = 1;
code_r0x00010bebb2a0:
                    /* WARNING: Could not recover jumptable at 0x00010bebb2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showStatusMessage__11258c650,param_3);
  return;
}



/* Entry: 105c1f49c; end: 105c1f6eb; -[SCSendFlowMediaSender _captureEditResendSnapDocIfEligible:conversationIds:postingToChatOnly:toMassSnap:] */

void FUN_105c1f49c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,int param_5,
                  ulong param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((((*(char *)(param_1 + 0xea) != '\x01') ||
       (*(long *)(param_1 + 0x20) != 0xb && *(long *)(param_1 + 0x20) != 0)) || ((param_6 & 1) != 0)
      ) || (param_5 == 0)) goto LAB_105c1f6c4;
  uVar5 = param_3;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  if (uVar6 != 1) goto LAB_105c1f6c4;
  lVar7 = *(long *)(param_1 + 200);
  func_0x0001084237c8();
  uVar8 = *(ulong *)(param_1 + 200);
  func_0x000108423840();
  uVar9 = *(ulong *)(param_1 + 200);
  func_0x0001084238b8();
  uVar5 = param_3;
  func_0x00010bf429e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  if (uVar5 == 0) {
    _objc_release();
    lVar13 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    bVar2 = lVar13 == 0xb;
    bVar3 = lVar13 == 0;
LAB_105c1f5f0:
    bVar1 = false;
  }
  else {
    uVar10 = param_3;
    func_0x00010bf429e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c247520();
    _objc_release(uVar10);
    _objc_release(uVar5);
    lVar13 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    bVar2 = lVar13 == 0xb;
    bVar3 = lVar13 == 0;
    bVar1 = true;
    if (((1 < uVar11) && (uVar11 != 9)) && (uVar11 != 0x48)) goto LAB_105c1f5f0;
  }
  if (lVar7 < 3) {
    bVar3 = bVar1;
    if ((lVar7 != 1) && (bVar3 = bVar2, lVar7 != 2)) goto LAB_105c1f6c4;
  }
  else if (lVar7 == 3) {
    bVar3 = (bool)(bVar2 | bVar1);
  }
  else if (lVar7 != 4) {
    if (lVar7 != 5) goto LAB_105c1f6c4;
    bVar3 = (bool)(bVar3 | bVar2);
  }
  if ((uVar9 != 0 || uVar8 != 0) && (bVar3)) {
    if ((uVar6 <= uVar9) && (uVar8 == 0xffffffffffffffff || uVar8 <= uVar6)) {
      iVar4 = (int)*(undefined8 *)(param_1 + 200);
      func_0x000108423930();
      if (iVar4 != 0) {
        lVar13 = *(long *)(param_1 + 0xf8);
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar13;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        lVar13 = lVar7;
        func_0x00010c08fa60();
        if (lVar13 != 0) {
          _objc_retain(lVar7);
          uVar12 = *(undefined8 *)(param_1 + 0x128);
          *(long *)(param_1 + 0x128) = lVar7;
          _objc_release(uVar12);
        }
        _objc_release(lVar7);
      }
    }
  }
LAB_105c1f6c4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c1f6ec; end: 105c1fae3; -[SCSendFlowMediaSender _sendSnapMediaToStories:atIndex:conversationIds:phoneNumbers:messagingLocalMediaReferences:destinationInfo:storyPostingInfo:sendStartTime:multiMediaBundleId:shouldIncludeLocationData:shouldSaveStories:externalContentMetadata:localPlatformData:] */

void FUN_105c1f6ec(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  if (param_11 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c32f8;
    _objc_alloc();
    lVar1 = param_4;
    func_0x00010c0c5580(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bff9aa0();
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010be0ace0();
  _objc_retainAutoreleasedReturnValue();
  if (param_12._1_1_ != '\0') {
    lVar9 = param_4;
    func_0x00010c15db60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebc900(param_1,param_2);
    func_0x00010be3c9c0(param_2);
    _objc_release(lVar9);
  }
  func_0x00010c0ac880(*(undefined8 *)(param_2 + 0x48));
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar9 = param_4;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c24c6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x80);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  lVar9 = param_4;
  func_0x00010c15db60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfcd340();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x000107a0667c(lVar1,0,(undefined1)param_12,uVar8,uVar10,lVar4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  if (lVar5 == 0) {
    lVar9 = 0;
  }
  else {
    lVar3 = lVar5;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c23fe00(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x000107d6ae7c(lVar3,lVar4,0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  func_0x00010bea0320(param_1,param_2);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(puVar7);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c1fae4; end: 105c20823; -[SCSendFlowMediaSender _sendSnapMedia:atIndex:conversationIds:massSnapRecipients:phoneNumbers:messagingLocalMediaReferences:spotlightTileMediaReference:destinationInfo:storyPostingInfo:incidentalAttachments:sendStartTime:multiMediaBundleId:shouldIncludeLocationData:externalContentMetadata:localPlatformData:] */

void FUN_105c1fae4(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9,undefined8 param_10,
                  undefined8 param_11,long param_12,undefined8 param_13,long param_14,byte param_15,
                  undefined4 param_16,undefined8 param_17,undefined8 param_18)

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
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  long lStack_2d8;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  byte bStack_1e0;
  undefined1 uStack_1df;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  dVar26 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  lVar20 = param_2;
  func_0x00010be0ace0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bec4940();
  _objc_retainAutoreleasedReturnValue();
  if ((param_15 & 1) == 0) {
    lVar2 = lVar20;
    func_0x00010c2311e0();
    dVar27 = 0.0;
    if ((int)lVar2 == 0) goto LAB_105c1fc70;
  }
  lVar2 = lVar20;
  func_0x00010c1048c0(lVar20);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(lVar3);
  _objc_release(lVar2);
  dVar27 = dVar26;
LAB_105c1fc70:
  lVar2 = lVar20;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  param_1 = param_1 + (double)param_5 * 0.01;
  lVar2 = param_4;
  lStack_2d8 = lVar20;
  if (param_14 == 0) {
    func_0x00010c15db60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107a05454(param_1,dVar27,lVar20,lVar1,lVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = lVar3;
    func_0x00010c0d2360();
    lVar5 = lVar3;
    func_0x00010c0d2380(lVar3);
    func_0x00010c0c5580(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar2;
    func_0x00010bf529e0();
    lVar24 = lVar3;
    func_0x00010c27c860(lVar3);
    lVar7 = param_4;
    func_0x00010c15db60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar8;
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107a06358(param_1,dVar27,lVar20,param_14,lVar4,lVar5,lVar25,param_5,lVar24,lVar1,lVar6
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  lVar2 = lVar20;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010bf529e0();
  if ((((lVar7 != 0) || (lVar7 = param_12, func_0x00010bf529e0(), lVar7 != 0)) ||
      (lVar7 = param_8, func_0x00010bf529e0(), lVar7 != 0)) ||
     (lVar7 = param_7, func_0x00010bf529e0(), lVar7 != 0)) {
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c3300;
    _objc_alloc();
    func_0x00010c00bb80();
    lVar7 = lVar20;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c60a0();
    func_0x00010846b19c();
    _objc_release(lVar7);
    lVar7 = param_4;
    func_0x00010c15db60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010be42d00();
    _objc_release(lVar7);
    lVar7 = param_7;
    func_0x00010bf529e0();
    func_0x00010bddb600(param_2);
    puVar15 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_105c20824;
    puStack_1f0 = &UNK_1108ddac8;
    ppuVar11 = &puStack_208;
    lStack_1e8 = param_2;
    bStack_1e0 = (byte)lVar8 ^ 1;
    uStack_1df = lVar7 != 0;
    _objc_retainBlock();
    lVar8 = param_4;
    func_0x00010c15db60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bdd87a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puVar12 = PTR_PTR_1126c3308;
    func_0x00010c241d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3e20(puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar22 = (undefined8 *)(param_2 + 0xf0);
    uVar13 = *puVar22;
    func_0x00010c2421a0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9520(puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar13);
    uVar13 = *puVar22;
    func_0x00010c11ecc0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b66c0(puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar13);
    uVar23 = *puVar22;
    _objc_retain(uVar23);
    uStack_1b0 = 0;
    uStack_1a0 = 0x3032000000;
    pcStack_198 = FUN_105c223c8;
    uStack_190 = 0x105c223d8;
    uStack_188 = 0;
    uVar13 = uVar23;
    puStack_1a8 = &uStack_1b0;
    func_0x00010c131bc0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar15;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x105c23fd4;
    puStack_1c0 = &UNK_11084eb40;
    puStack_1b8 = &uStack_1b0;
    func_0x00010c0bcaa0();
    _objc_release(uVar13);
    uVar14 = puStack_1a8[5];
    _objc_retain();
    __Block_object_dispose(&uStack_1b0,8);
    _objc_release(uStack_188);
    _objc_release(uVar23);
    uVar13 = uVar14;
    func_0x00010c25ade0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba600(puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar13);
    puVar15 = puVar12;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    func_0x00010c0713e0();
    if ((int)lVar8 == 0) {
      puVar16 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      lVar8 = param_4;
      func_0x00010c15db60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c2584a0();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar5;
      func_0x00010beffdc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar8);
      lVar8 = lVar25;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar24 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar25);
          }
          lVar21 = *(long *)(lVar24 * 8);
          lVar6 = lVar21;
          func_0x00010c27dd80();
          if (lVar6 == 10) {
            lVar6 = lVar21;
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar6;
            func_0x00010c08fa60();
            _objc_release(lVar6);
            if (lVar17 != 0) {
              func_0x00010c11ac00(lVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar16);
              _objc_release(lVar21);
            }
          }
          lVar24 = lVar24 + 1;
        } while (lVar8 != lVar24);
        lVar8 = lVar25;
        func_0x00010bf52a60();
      }
      _objc_release(lVar25);
      puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(param_12);
      func_0x00010bf71fe0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_12);
      lVar8 = param_12;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar25 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(param_12);
          }
          func_0x00010bf4b900();
          puVar19 = PTR_PTR_1126c3310;
          _objc_alloc(PTR_PTR_1126c3310);
          lVar24 = param_12;
          func_0x00010c0e00e0(param_12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c02bae0(puVar19);
          func_0x00010c1d0640(puVar18);
          _objc_release(puVar19);
          _objc_release(lVar24);
          lVar25 = lVar25 + 1;
        } while (lVar8 != lVar25);
        lVar8 = param_12;
        func_0x00010bf52a60();
      }
      _objc_release(param_12);
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15ca40();
      _objc_release(uVar13);
      if ((lVar7 != 0) && (*(long *)(param_2 + 0x120) != 0)) {
        lVar7 = lVar20;
        func_0x00010c26e020(lVar20);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c0c4980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lVar2;
        if (param_14 != 0) {
          lVar7 = param_14;
        }
        _objc_retain(lVar7);
        lVar5 = lStack_2d8;
        func_0x00010bf63640(lStack_2d8);
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar20;
        func_0x00010c0c3fe0(lVar20);
        _objc_retainAutoreleasedReturnValue();
        lVar24 = lVar25;
        func_0x00010c0c4980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar25);
        func_0x00010c0830a0(lVar20);
        puVar19 = PTR_PTR_1126c3318;
        _objc_alloc(PTR_PTR_1126c3318);
        func_0x00010c028ac0();
        _objc_release(lVar7);
        uVar13 = *(undefined8 *)(param_2 + 0x120);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8dee0();
        _objc_release(uVar13);
        _objc_release(puVar19);
        _objc_release(lVar24);
        _objc_release(lVar5);
        _objc_release(lVar8);
      }
      if (param_5 == 0) {
        func_0x00010be00560(param_2);
      }
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    else {
      uVar13 = *(undefined8 *)(param_2 + 0x88);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(param_2 + 0x70);
      func_0x00010c269d40(uVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010846b3d4(lVar2,uVar13,uVar23);
      _objc_release(uVar23);
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(param_2 + 0x110);
      lVar7 = param_4;
      func_0x00010c15db60();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c2584a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar20;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar5;
      func_0x00010c0c4980();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar20;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar24;
      func_0x00010c0ef740();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar20;
      func_0x00010bf5caa0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar21;
      func_0x00010c25a3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5cae0(uVar13);
      _objc_release(lVar17);
      _objc_release(lVar21);
      _objc_release(lVar6);
      _objc_release(lVar24);
      _objc_release(lVar25);
      _objc_release(lVar5);
      _objc_release(lVar8);
      _objc_release(lVar7);
      if (param_5 == 0) {
        func_0x00010be00560(param_2);
      }
    }
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(puVar12);
    _objc_release(lVar4);
    _objc_release(ppuVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  _objc_release(lVar2);
  _objc_release(lStack_2d8);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar20);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = 8;
  __Block_object_dispose(&uStack_1b0,8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010be004d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 0x20),PTR_s__didSendCompleteWithSuccess_toCh_11255dad0,
             lVar20 == 0,*(undefined1 *)(param_4 + 0x28),*(undefined1 *)(param_4 + 0x29));
  return;
}



/* Entry: 105c20824; end: 105c2083f;  */

void FUN_105c20824(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be004d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didSendCompleteWithSuccess_toCh_11255dad0,
             param_2 == 0,*(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29));
  return;
}



/* Entry: 105c20840; end: 105c20c73; -[SCSendFlowMediaSender _checkStoryPostingInfo:] */

undefined ** FUN_105c20840(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uStack_200;
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
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar8 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x00010c105440();
  _objc_release(uVar8);
  if (((int)uVar14 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar8 = param_3;
    func_0x00010c2584a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010c0d4ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar14;
    func_0x00010c067fc0();
    _objc_release(uVar14);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c2584a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010c0d4bc0();
    func_0x00010846a47c(uVar13,uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar15);
    _objc_release(uVar13);
    _objc_release(uVar8);
  }
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uVar8 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar14;
  func_0x00010bf52a60();
  if (uVar8 != 0) {
    lVar12 = *plStack_1a0;
    do {
      uVar13 = 0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(uVar14);
        }
        uVar16 = *(undefined8 *)(lStack_1a8 + uVar13 * 8);
        uVar2 = uVar16;
        func_0x00010c11ac00(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf62820(uVar16);
        uVar3 = uVar2;
        func_0x00010846a570(uVar2,uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar15);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
      uVar8 = uVar14;
      func_0x00010bf52a60();
    } while (uVar8 != 0);
  }
  _objc_release(uVar14);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uVar8 = param_3;
  func_0x00010bf24f00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = &uStack_1f0;
  puVar11 = auStack_170;
  uStack_200 = uVar8;
  func_0x00010bf52a60();
  if (uStack_200 != 0) {
    lVar12 = *plStack_1e0;
    do {
      uVar14 = 0;
      do {
        if (*plStack_1e0 != lVar12) {
          _objc_enumerationMutation(uVar8);
        }
        puVar17 = *(undefined **)(lStack_1e8 + uVar14 * 8);
        puVar4 = puVar17;
        func_0x00010c08fa60();
        if (puVar4 != (undefined *)0x0) {
          uVar13 = param_3;
          func_0x00010c2584a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar13;
          func_0x00010bf252c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar13);
          if (uVar6 == 0) {
            puVar4 = puVar17;
            _objc_retain(puVar17);
            puVar18 = puVar17;
          }
          else {
            puVar4 = PTR_PTR_1126c3320;
            func_0x00010c271d40(PTR_PTR_1126c3320);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar4;
          }
          func_0x000108f49898();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = param_3;
          func_0x00010c2584a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar13;
          func_0x00010bf24f40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010846b038(puVar17,puVar4,uVar7,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar15);
          _objc_release(puVar17);
          _objc_release(uVar7);
          _objc_release(uVar5);
          _objc_release(uVar13);
          _objc_release(puVar4);
          _objc_release(puVar18);
          _objc_release(uVar6);
        }
        uVar14 = uVar14 + 1;
      } while (uStack_200 != uVar14);
      puVar10 = &uStack_1f0;
      puVar11 = auStack_170;
      uStack_200 = uVar8;
      func_0x00010bf52a60();
    } while (uStack_200 != 0);
  }
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
    return ppuVar15;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  uVar8 = *(ulong *)(param_3 + 0xf0);
  func_0x00010c078580();
  if ((uVar8 & 1) != 0) {
    ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3388;
    goto LAB_105c20d10;
  }
  iVar1 = (int)*(undefined8 *)(param_3 + 0xf0);
  func_0x00010c06ee60();
  if ((iVar1 == 0) || (uVar8 = param_3, func_0x00010be44da0(), (uVar8 & 1) == 0)) {
    iVar1 = (int)*(undefined8 *)(param_3 + 0xf0);
    func_0x00010c07c560();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_3 + 0xf0);
      func_0x00010c081a80();
      if (iVar1 == 0) goto LAB_105c20d08;
    }
    puVar9 = puVar11;
    func_0x000107d66158();
    ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c33a0;
    if ((int)puVar9 == 0) {
      ppuVar15 = (undefined **)0x0;
    }
  }
  else {
LAB_105c20d08:
    ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c33a0;
  }
LAB_105c20d10:
  _objc_release(puVar11);
  _objc_release(puVar10);
  return ppuVar15;
}



/* Entry: 105c20c74; end: 105c20d33; -[SCSendFlowMediaSender _calculateMessageBehaviorHint:snapDoc:] */

undefined ** FUN_105c20c74(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c078580();
  if ((uVar2 & 1) != 0) {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3388;
    goto LAB_105c20d10;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
  func_0x00010c06ee60();
  if ((iVar1 == 0) ||
     (uVar2 = param_1, func_0x00010be44da0(param_1,param_2,param_3), (uVar2 & 1) == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
    func_0x00010c07c560();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
      func_0x00010c081a80();
      if (iVar1 == 0) goto LAB_105c20d08;
    }
    uVar3 = param_4;
    func_0x000107d66158();
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c33a0;
    if ((int)uVar3 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
  }
  else {
LAB_105c20d08:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c33a0;
  }
LAB_105c20d10:
  _objc_release(param_4);
  _objc_release(param_3);
  return ppuVar4;
}



/* Entry: 105c20d34; end: 105c218af; -[SCSendFlowMediaSender _insertStorySnapsIntoStoriesWithEphemeralMedia:senderData:creationTimestamp:multiSnapInfo:] */

void FUN_105c20d34(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = param_2;
  func_0x00010bec4940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_5;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c105440();
  if ((int)puVar6 != 0) {
    lVar7 = *(long *)(param_2 + 0x30);
    func_0x00010c08fa60();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c2fc8;
    if (lVar7 == 0) goto LAB_105c20f90;
    uVar19 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar19);
    _objc_alloc(puVar5);
    puVar6 = param_5;
    func_0x00010c2584a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4bc0();
    func_0x00010c0559e0(puVar5);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c2fd0;
    func_0x00010c293b20(PTR_PTR_1126c2fd0);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_2 + 0x30);
    puVar21 = param_5;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar21;
    func_0x00010c0d4bc0();
    func_0x00010846b274();
    puVar20 = param_5;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar20;
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x000107a06ccc(param_1,param_4,lVar4,uVar19,uVar3,uVar23,puVar6,puVar8,param_6,puVar9,
                        *(undefined8 *)(param_2 + 200));
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar8);
    _objc_release(uVar2);
    _objc_release(uVar19);
    _objc_release(puVar9);
    _objc_release(puVar20);
    _objc_release(puVar21);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
LAB_105c20f90:
  puVar5 = param_5;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar6);
      }
      uVar23 = *(undefined8 *)((long)puVar21 * 8);
      uVar2 = uVar23;
      func_0x00010c11ac00(uVar23);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126c3328;
      _objc_alloc();
      func_0x00010c27dd80(uVar23);
      func_0x00010bf62820(uVar23);
      func_0x00010c1143e0(uVar23);
      func_0x00010c04dca0();
      puVar20 = PTR_PTR_1126c2fd0;
      func_0x00010bf62300();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf62820(uVar23);
      func_0x00010846b274();
      puVar9 = param_5;
      func_0x00010c2584a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c15a0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = param_4;
      func_0x000107a06ccc(param_1,param_4,lVar4,uVar2,uVar3,uVar18,puVar20,uVar23,param_6,puVar10,
                          *(undefined8 *)(param_2 + 200));
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar11);
      _objc_release(uVar19);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar20);
      _objc_release(puVar8);
      _objc_release(uVar2);
      puVar21 = puVar21 + 1;
    } while (puVar5 != puVar21);
    puVar5 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  puVar5 = param_5;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010c259bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar6;
    func_0x00010c0ee300(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f41ba8();
    _objc_release(puVar21);
    puVar21 = puVar6;
    func_0x00010c0ee300(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f41bb4();
    _objc_release(puVar21);
    puVar21 = PTR_PTR_1126c3330;
    _objc_alloc();
    func_0x00010c04d900();
    puVar8 = PTR_PTR_1126c2fd0;
    func_0x00010c0ee380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uRam000000011325c068;
    uVar23 = *(undefined8 *)(param_2 + 0x30);
    puVar20 = param_5;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar20;
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_4;
    func_0x000107a06ccc(param_1,param_4,lVar4,puVar5,uVar3,uVar23,puVar8,uVar2,param_6,puVar9,
                        *(undefined8 *)(param_2 + 200));
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar10);
    _objc_release(uVar19);
    _objc_release(puVar9);
    _objc_release(puVar20);
    _objc_release(puVar8);
    _objc_release(puVar21);
    _objc_release(puVar5);
  }
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066ca0();
    _objc_release(uVar2);
  }
  puVar5 = param_5;
  func_0x00010bf24f00();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  if (puVar21 != (undefined *)0x0) {
    uVar2 = param_4;
    FUN_105c218b0(param_4,3,3);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar8 = param_5;
    func_0x00010bf24f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(puVar8);
        }
        puVar22 = *(undefined **)((long)puVar20 * 8);
        _objc_retain(puVar22);
        puVar9 = param_5;
        func_0x00010c2584a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf252c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar11 == (undefined *)0x0) {
          _objc_retain(puVar22);
          puVar12 = puVar22;
        }
        else {
          puVar12 = PTR_PTR_1126c3320;
          func_0x00010c271d40();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        puVar9 = param_5;
        func_0x00010c2584a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf24f40();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar10);
        _objc_release(puVar9);
        if (puVar11 == (undefined *)0x0) {
          lVar14 = 0;
        }
        else {
          puVar9 = param_5;
          func_0x00010c2584a0(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010bf24f40();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          puVar9 = param_5;
          func_0x00010c2584a0(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010bf24f40();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar11;
          func_0x00010c067ec0();
          lVar14 = (long)(int)puVar13;
          func_0x00010846b274(lVar14);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        puVar9 = PTR_PTR_1126c2fc8;
        _objc_alloc();
        func_0x00010c0559e0();
        puVar10 = PTR_PTR_1126c2fd0;
        func_0x00010c293b20();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)(param_2 + 0x30);
        puVar11 = param_5;
        func_0x00010c2584a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        func_0x00010c15a0e0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = param_4;
        func_0x000107a06ccc(param_1,param_4,lVar4,puVar22,uVar3,uVar23,puVar10,lVar14,param_6,
                            puVar13,*(undefined8 *)(param_2 + 200));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar11);
        puVar11 = PTR_PTR_1126c3338;
        _objc_alloc(PTR_PTR_1126c3338);
        uVar23 = param_4;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_opt_new();
        uVar18 = param_4;
        func_0x00010bf30620();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = param_5;
        func_0x00010c2584a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010bfcd340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffefc0(puVar11);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(uVar18);
        _objc_release(puVar13);
        _objc_release(uVar23);
        func_0x00010c1d0640(puVar21);
        _objc_release(puVar11);
        _objc_release(uVar19);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar12);
        _objc_release(puVar22);
        puVar20 = puVar20 + 1;
      } while (puVar5 != puVar20);
      puVar5 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    uVar19 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066c80();
    _objc_release(uVar19);
    _objc_release(puVar21);
    _objc_release(uVar2);
  }
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar3 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  uVar3 = param_4;
  func_0x00010bf98340(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010bf98320(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar5);
  _objc_release(uVar19);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3390;
  _objc_alloc(PTR_PTR_1126c3390);
  func_0x00010c27dd80(param_4);
  uVar3 = param_4;
  func_0x00010c0c3fe0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0efce0(uVar3);
  func_0x00010bffa840(puVar6);
  _objc_release(uVar3);
  puVar21 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 105c218b0; end: 105c21a77;  */

void FUN_105c218b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  uVar1 = param_1;
  func_0x00010bf98340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf98320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3390;
  _objc_alloc(PTR_PTR_1126c3390);
  func_0x00010c27dd80(param_1);
  uVar1 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0efce0(uVar1);
  func_0x00010bffa840(puVar6);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105c21a78; end: 105c21a8b; -[SCSendFlowMediaSender _shouldShowSendingToast] */

bool FUN_105c21a78(long param_1)

{
  return *(long *)(param_1 + 0x20) != 5 && *(long *)(param_1 + 0x20) != 10;
}



/* Entry: 105c21a8c; end: 105c21aff; -[SCSendFlowMediaSender _shouldShowResultToast:] */

ulong FUN_105c21a8c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  if ((*(ulong *)(param_1 + 0x20) | 2) == 6) {
    param_1 = 1;
  }
  else {
    uVar1 = param_1;
    func_0x00010be6cce0(param_1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010be42d00(param_1,param_2,param_3);
    }
    else {
      param_1 = 0;
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105c21b00; end: 105c21b8b; -[SCSendFlowMediaSender _isPostingToStory:] */

bool FUN_105c21b00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010846b590();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bf24f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    bVar1 = uVar4 != 0;
    _objc_release(uVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105c21b8c; end: 105c21b97; -[SCSendFlowMediaSender _onlyPostingToSpotlightAndPublicStoryOrSnapMapOrSharedStoryOrMyStory:] */

uint FUN_105c21b8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar6 = *(ulong *)(param_1 + 200);
  _objc_retain();
  _objc_retain(uVar6);
  lVar1 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_105c2490c:
    lVar1 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) goto LAB_105c24a64;
    }
    lVar1 = param_3;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) goto LAB_105c24a64;
    }
    lVar1 = param_3;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c2584a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ee3a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
LAB_105c24a90:
        uVar7 = 0;
      }
      else {
        lVar3 = lVar1;
        func_0x00010c0ee3a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0ee300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar4 == 0) goto LAB_105c24a90;
        lVar2 = lVar1;
        func_0x00010846ba3c();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf4b900();
        if (((int)lVar3 == 0) ||
           ((lVar3 = lVar2, func_0x00010bf529e0(), lVar3 == 1 &&
            (uVar5 = uVar6, func_0x000108f483a4(), (uVar5 & 1) != 0)))) {
          uVar7 = 0;
        }
        else {
          uVar5 = uVar6;
          func_0x000108f483b8(uVar6);
          uVar7 = (uint)uVar5 ^ 1;
        }
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
      goto LAB_105c24a68;
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_105c2490c;
  }
LAB_105c24a64:
  uVar7 = 0;
LAB_105c24a68:
  _objc_release(uVar6);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105c21b98; end: 105c21c13; -[SCSendFlowMediaSender _storyFraming] */

void FUN_105c21b98(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(long *)(param_2 + 0x20) - 1;
  if ((uVar2 < 10) && ((0x223U >> (ulong)((uint)uVar2 & 0x1f) & 1) != 0)) {
    uVar3 = *(undefined8 *)(&UNK_10ddcb4a0 + uVar2 * 8);
    puVar1 = PTR_PTR_1126c3340;
    _objc_alloc(PTR_PTR_1126c3340);
    func_0x00010c26f320(0);
    func_0x00010c0066c0(puVar1,param_3,(long)(param_1 * 1000.0),uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c21c14; end: 105c21df3; -[SCSendFlowMediaSender _saveStoryThumbnailDataToThumbnailCoordinatorIfPossible:spotlightCoverTile:] */

void FUN_105c21c14(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c4980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    lVar2 = param_3;
    FUN_105c218b0(param_3,1,3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c26e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c4980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbec0(uVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c130480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 200);
    func_0x000108faa2d8();
    if (iVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      lVar2 = param_3;
      FUN_105c218b0(param_3,3,2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010c130480(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbec0(uVar6);
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c21df4; end: 105c21e07; -[SCSendFlowMediaSender _snapCreationTimeAtIndex:sendStartTime:] */

double FUN_105c21df4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  return param_1 + (double)param_4 * 0.01;
}



/* Entry: 105c21e08; end: 105c21f97; -[SCSendFlowMediaSender _ephemeralMediaAtIndex:metadata:] */

void FUN_105c21e08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,PTR_DAT_1126a50c0);
  lVar1 = lVar3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010010fab4(lVar2,PTR_DAT_1126a50c8);
    _objc_release(lVar2);
    lVar3 = 0;
    if (((int)lVar1 != 0) && (lVar2 != 0)) {
      lVar1 = param_4;
      func_0x00010c0c5580();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar2 = lVar3;
      func_0x00010010fab4(lVar3,PTR_DAT_1126a50c8);
      lVar1 = lVar3;
      if ((int)lVar2 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      _objc_release(lVar3);
      lVar2 = *(long *)(param_1 + 0xb8);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08ef20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c21f98; end: 105c22057; -[SCSendFlowMediaSender _snapMultiMediaBundleIdWithMediaList:] */

void FUN_105c21f98(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0xf0);
  func_0x00010c078120();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf529e0();
    bVar1 = 1 < uVar3;
  }
  if (*(char *)(param_1 + 0xea) == '\x01') {
    uVar3 = *(ulong *)(param_1 + 200);
    func_0x000109127f98();
    if ((int)uVar3 == 0) {
      if (!bVar1) {
        uVar3 = *(ulong *)(param_1 + 0xf0);
        func_0x00010c0811c0();
        if ((uVar3 & 1) == 0) {
          uVar3 = *(ulong *)(param_1 + 0xf0);
          func_0x00010c06d080();
          if ((int)uVar3 == 0) goto LAB_105c22038;
        }
      }
    }
    else if (!bVar1) {
      uVar3 = *(ulong *)(param_1 + 0xf0);
      func_0x00010c0811c0();
      if ((uVar3 & 1) == 0) goto LAB_105c22038;
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_105c22038:
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c22058; end: 105c22103; -[SCSendFlowMediaSender _lensAssetsUploadInfo:] */

void FUN_105c22058(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
  func_0x00010c081a80();
  if (iVar1 == 0) {
LAB_105c220c0:
    if (*(char *)(param_1 + 0xea) == '\x01') {
      uVar3 = *(undefined8 *)(param_1 + 0xf0);
      func_0x00010c090020(uVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105c220e8;
    }
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
    func_0x00010c07c560();
    if (iVar1 == 0) goto LAB_105c220c0;
    uVar3 = param_3;
    func_0x00010c15db60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be44da0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    if ((int)lVar2 != 0) goto LAB_105c220c0;
  }
  uVar3 = 0;
LAB_105c220e8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c22104; end: 105c222cb; -[SCSendFlowMediaSender _activatePublicStoriesIfNeeded:] */

void FUN_105c22104(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar4 = uVar5;
        func_0x00010c075620();
        if ((int)uVar4 != 0) {
          puVar3 = PTR_PTR_1126c2698;
          _objc_alloc(PTR_PTR_1126c2698);
          uVar4 = uVar5;
          func_0x00010c11ac00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80(uVar5);
          uStack_140 = 0;
          func_0x00010c03bfe0(puVar3);
          _objc_release(uVar4);
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c284e20();
          _objc_release(uVar4);
          _objc_release(puVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105c222cc;
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  pcStack_178 = FUN_105c223c8;
  uStack_170 = 0x105c223d8;
  uStack_168 = 0;
  uVar4 = *(undefined8 *)(lVar2 + 0xf0);
  lStack_160 = lVar1;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c131bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcaa0();
  _objc_release(uVar4);
  uVar4 = puStack_188[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105c222cc; end: 105c223c7; -[SCSendFlowMediaSender _promptLensReplyParameters] */

void FUN_105c222cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105c223c8;
  uStack_30 = 0x105c223d8;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c131bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcaa0();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c223c8; end: 105c223df;  */

void FUN_105c223c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c223e0; end: 105c22457;  */

void FUN_105c223e0(long param_1)

{
  long lVar1;
  long in_x7;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(in_x7);
  lVar1 = in_x7;
  func_0x00010c118700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = in_x7;
    func_0x00010c118700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x7);
  return;
}



/* Entry: 105c22458; end: 105c227f3; -[SCSendFlowMediaSender _sendTurnBasedSnapMediaWithMetadata:] */

undefined * FUN_105c22458(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
  func_0x00010c11e8a0();
  puVar8 = PTR_PTR_1126c3348;
  if (iVar1 != 0) {
    puVar7 = (undefined8 *)param_3;
    func_0x00010bea03a0(param_1,param_2,param_3);
    goto LAB_105c227b0;
  }
  puVar2 = param_3;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  lVar10 = param_1;
  func_0x00010be83260();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c15db60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be42d00(param_1,param_2,puVar3);
  func_0x00010c15e400(puVar8,param_2,puVar2,uVar9,lVar10,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar10);
  _objc_release(puVar2);
  if (puVar8 == (undefined *)0x0) {
LAB_105c2279c:
    puVar7 = (undefined8 *)param_3;
    func_0x00010bea03a0(param_1,param_2,param_3);
  }
  else {
    puVar2 = puVar8;
    func_0x00010c118820();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar8;
      func_0x00010bfd9d60();
      _objc_release(puVar2);
      if (((ulong)puVar3 & 1) == 0) goto LAB_105c2279c;
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar2 = param_3;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar10 = *plStack_120;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          uVar5 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
          func_0x00010bf4e840();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar5;
          func_0x00010c27f9c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bb340();
          _objc_release(uVar9);
          _objc_release(uVar5);
          puVar11 = puVar11 + 1;
        } while (puVar3 != puVar11);
        puVar3 = puVar2;
        puVar7 = &uStack_130;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar2 = puVar8;
    func_0x00010c118820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = puVar8;
      func_0x00010c118820(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcaa0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      puVar7 = (undefined8 *)param_3;
      func_0x00010bea03a0(param_1,param_2,param_3);
    }
    puVar2 = puVar8;
    func_0x00010c0edf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c3350;
      _objc_opt_new();
      puVar3 = param_3;
      func_0x00010c15d060(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fc460(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010c0c5580(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4a80(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010bfbb9e0(param_3);
      func_0x00010c1a15c0(puVar2);
      puVar3 = param_3;
      func_0x00010bf429e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17f520(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010c15bd40(param_3);
      func_0x00010c1fc120(puVar2,param_2,puVar3);
      puVar3 = puVar8;
      func_0x00010c0edf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcaa0(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar7 = (undefined8 *)puVar2;
      func_0x00010bea03a0(param_1,param_2,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar8);
LAB_105c227b0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar6 = *(ulong *)(param_3 + 0xf0);
  func_0x00010c11e8a0();
  puVar8 = PTR_PTR_1126c3348;
  if ((uVar6 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x30);
    puVar2 = param_3;
    func_0x00010be83260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be42d00(param_3,param_2,puVar7);
    func_0x00010c081a00(puVar8,param_2,puVar7,uVar9,puVar2,param_3);
    _objc_release(puVar2);
  }
  else {
    puVar8 = (undefined *)0x1;
  }
  _objc_release(puVar7);
  return puVar8;
}



/* Entry: 105c227f4; end: 105c2289b; -[SCSendFlowMediaSender _isTurnBasedOpponentOnlyRecipient:] */

undefined * FUN_105c227f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c11e8a0();
  puVar3 = PTR_PTR_1126c3348;
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = param_1;
    func_0x00010be83260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be42d00(param_1,param_2,param_3);
    func_0x00010c081a00(puVar3,param_2,param_3,uVar4,lVar2,param_1);
    _objc_release(lVar2);
  }
  else {
    puVar3 = (undefined *)0x1;
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105c2289c; end: 105c22aeb; -[SCSendFlowMediaSender _sendStoryReplyMessageWithPromptLensParameters:externalMedia:conversationId:platformAnalytics:completion:] */

undefined1 *
FUN_105c2289c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = param_3;
  func_0x00010c118520();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_3;
  func_0x00010c118520();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_78;
  _objc_copyWeak(auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c2589a0(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  _objc_retain(puVar8);
  puVar1 = param_3 + 0x50;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar2);
    puVar5 = puVar4;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6078;
    if (puVar5 == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0xb;
      (**(code **)(*(long *)(param_3 + 0x48) + 0x10))(*(long *)(param_3 + 0x48),0xb);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9e400(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar7 = *(undefined8 *)(puVar1 + 0xd8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15cd40();
      _objc_release(uVar7);
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x00010c15f2e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar8 + 0x20);
  func_0x00010c25afa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010c0720c0(puVar9);
  _objc_release(uVar2);
  _objc_release(puVar9);
  return puVar8;
}



/* Entry: 105c22aec; end: 105c22ca3;  */

long FUN_105c22aec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar9);
    lVar3 = lVar2;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b6078;
    if (lVar3 == 0) {
      lVar7 = 0xb;
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0xb);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9e400(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar6 = *(undefined8 *)(lVar1 + 0xd8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15cd40();
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
    _objc_release(lVar3);
    _objc_release(uVar9);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010c15f2e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c25afa0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c0720c0(lVar7);
  _objc_release(uVar9);
  _objc_release(lVar7);
  return lVar1;
}



/* Entry: 105c22ca4; end: 105c22d13;  */

undefined8 FUN_105c22ca4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c15f2e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25afa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105c22d14; end: 105c22f0b; -[SCSendFlowMediaSender _chatSendPlatformAnalyticsWithSource:commonLoggingParams:destinationInfo:isForwardMessage:uuid:containsExternalContent:sendUiType:] */

void FUN_105c22d14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b1a40;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1,param_2,0xffffffffffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0820(puVar1,param_2,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bddd040(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3c60(puVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bddd020(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2a9e40(puVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c2bc480(puVar1,param_2,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2aad40(puVar1,param_2,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8280(puVar1,param_2,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010c2b8220(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c22f0c; end: 105c23017; -[SCSendFlowMediaSender _chatSendMemoriesMetricsInfo:] */

void FUN_105c22f0c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126c3358;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 6) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c04a720();
    _objc_release(param_3);
    puVar5 = PTR_PTR_1126c3360;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    func_0x00010c048240(puVar5,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release();
    param_1 = puVar1;
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c3368;
    if (*(long *)(param_1 + 0x20) == 9) {
      _objc_retain(param_3);
      _objc_alloc(puVar5);
      puVar1 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c096ca0(param_3);
      puVar3 = param_3;
      func_0x00010c091c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      puVar4 = puVar3;
      func_0x00010b06f648(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0246a0(puVar5,param_2,puVar1,puVar2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105c23018; end: 105c230f7; -[SCSendFlowMediaSender _chatSendCameraRollCameraMetricsInfo:] */

void FUN_105c23018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126c3368;
  if (*(long *)(param_1 + 0x20) == 9) {
    _objc_retain(param_3);
    _objc_alloc(puVar5);
    uVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c096ca0(param_3);
    uVar3 = param_3;
    func_0x00010c091c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar4 = uVar3;
    func_0x00010b06f648(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0246a0(puVar5,param_2,uVar1,uVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105c230f8; end: 105c232fb; -[SCSendFlowMediaSender _prepareUploadForChatMedia:trackingId:captureSessionId:conversationIds:] */

void FUN_105c230f8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = param_3;
  if (lVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0xa0);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5900(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c10a360(lVar5,param_2,lVar4,lVar6,param_4,param_5,param_6);
    lVar1 = param_4;
    param_4 = param_5;
  }
  else {
    lVar4 = param_3;
    func_0x00010c23fe00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0xa0);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c240200(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c10a380(lVar4,param_2,lVar6,lVar1,lVar5,param_4,param_5,param_6);
    _objc_release(param_6);
    param_6 = param_5;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105c232fc; end: 105c235a7; -[SCSendFlowMediaSender _editResendToastContent] */

void FUN_105c232fc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  lVar1 = *(long *)(param_1 + 200);
  func_0x000108423944();
  puVar2 = PTR_PTR_1126c3370;
  _objc_alloc(PTR_PTR_1126c3370);
  if (lVar1 == 3) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1c5f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e22d38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22d38,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR_PTR_1126b15a0;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e22d58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22d58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf25a60(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03a0c0(puVar2);
  }
  else {
    if (lVar1 == 2) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1c5f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e22cf8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22cf8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b15a0;
      ppuVar6 = &PTR____CFConstantStringClassReference_110db2cf8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c266fa0(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf25a60(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 == 1) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e22cb8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22cb8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110e22cd8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22cd8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03a0c0(puVar2);
        goto LAB_105c23580;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1c5f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e22d78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22d78,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b15a0;
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c266fa0(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bfe77e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf255e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c03a0c0(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
LAB_105c23580:
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c235a8; end: 105c23967; -[SCSendFlowMediaSender _showEditAndResendToastWithSnapDocData:] */

void FUN_105c235a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3042000000;
    pcStack_80 = FUN_105c23968;
    uStack_78 = 0x105c23974;
    _objc_initWeak(auStack_70,0);
    puVar5 = PTR_PTR_1126c3378;
    puVar4 = PTR_PTR_1126ae558;
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe56a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010be06fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_105c27e7c(*(undefined8 *)(param_1 + 0x50),&PTR____CFConstantStringClassReference_110e1de58,
                  &PTR____CFConstantStringClassReference_110daafd8,1);
    uVar6 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c096b40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c096a60();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar15);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105c2397c;
    puStack_d0 = &UNK_1108ddbd8;
    puStack_a0 = &uStack_98;
    _objc_retain(uVar15);
    uStack_c8 = uVar15;
    _objc_retain(param_3);
    lStack_c0 = param_3;
    _objc_retain(uVar8);
    uStack_b8 = uVar8;
    _objc_retain(uVar7);
    uStack_b0 = uVar7;
    _objc_retain(uVar6);
    ppuVar9 = &puStack_e8;
    uStack_a8 = uVar6;
    _objc_retainBlock();
    lVar10 = *(long *)(param_1 + 200);
    func_0x0001084237a0(lVar10);
    puVar4 = PTR_PTR_1126b0ae0;
    lVar11 = lVar1;
    func_0x00010c113080(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010c155120(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1;
    func_0x00010beee0c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57e80((double)lVar10,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_storeWeak(puStack_90 + 5,puVar4);
    uVar14 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar14);
    _objc_release(puVar4);
    _objc_release(ppuVar9);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(lStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uVar15);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar1);
    _objc_release(puVar5);
    __Block_object_dispose(&uStack_98,8);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c23968; end: 105c2397b;  */

void FUN_105c23968(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 105c2397c; end: 105c23d1b;  */

void FUN_105c2397c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf84200();
  _objc_release(lVar3);
  FUN_105c27e7c(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e22dd8,
                &PTR____CFConstantStringClassReference_110daafd8,1);
  puVar4 = PTR_PTR_1126b0ea8;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126c3380;
  _objc_opt_new(PTR_PTR_1126c3380);
  func_0x00010c204260(puVar4);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c240640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203f40();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c240640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2071a0();
  _objc_release(puVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(puVar4);
  func_0x00010c0bf660(uVar1);
  func_0x00010c08c020(*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105c23d1c; end: 105c23d1f;  */

void FUN_105c23d1c(void)

{
  return;
}



/* Entry: 105c23d20; end: 105c23dfb; -[SCSendFlowMediaSender _showStatusMessage:] */

void FUN_105c23d20(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c25f340(uVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


