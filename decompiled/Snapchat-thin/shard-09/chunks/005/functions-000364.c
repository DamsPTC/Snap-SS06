/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e907a8; end: 106e907af; -[SCSpectaclesContent animatedThumbnailFile] */

undefined8 FUN_106e907a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106e907b0; end: 106e907df; -[SCSpectaclesContent setAnimatedThumbnailFile:] */

void FUN_106e907b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106e907e0; end: 106e907e7; -[SCSpectaclesContent genericAssetMetadata] */

undefined8 FUN_106e907e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106e907e8; end: 106e90817; -[SCSpectaclesContent setGenericAssetMetadata:] */

void FUN_106e907e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e90818; end: 106e9081f; -[SCSpectaclesContent genericAssetFiles] */

undefined8 FUN_106e90818(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106e90820; end: 106e9084f; -[SCSpectaclesContent setGenericAssetFiles:] */

void FUN_106e90820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e90850; end: 106e90857; -[SCSpectaclesContent multisnapContent] */

undefined8 FUN_106e90850(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106e90858; end: 106e9085f; -[SCSpectaclesContent setMultisnapContent:] */

void FUN_106e90858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106e90860; end: 106e90867; -[SCSpectaclesContent synced] */

undefined1 FUN_106e90860(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e90868; end: 106e9086f; -[SCSpectaclesContent setSynced:] */

void FUN_106e90868(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106e90870; end: 106e90973; -[SCSpectaclesContent .cxx_destruct] */

void FUN_106e90870(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 106e90974; end: 106e909f3; -[SCSpectaclesContentStore init] */

undefined1 * FUN_106e90974(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7a30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e909f4; end: 106e90a4f; -[SCSpectaclesContentStore encodeWithCoder:] */

void FUN_106e909f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110dbdd78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e90a50; end: 106e90b83; -[SCSpectaclesContentStore initWithCoder:] */

undefined1 * FUN_106e90a50(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7a30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_106e90b64;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
  *(undefined **)((long)puVar1 + 0x10) = puVar2;
  _objc_release(uVar5);
  puVar2 = param_3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_alloc();
      func_0x00010bff4000();
      goto LAB_106e90b2c;
    }
  }
  else {
    puVar3 = puVar2;
    func_0x00010c0d3c80();
LAB_106e90b2c:
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)((long)puVar1 + 8);
  *(undefined8 *)((long)puVar1 + 8) = uVar5;
  _objc_release(uVar6);
  _objc_release(puVar2);
LAB_106e90b64:
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e90b84; end: 106e90c07; -[SCSpectaclesContentStore undownloadedContentForComponent:] */

void FUN_106e90b84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e90c08; end: 106e90c9f;  */

uint FUN_106e90c08(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010be15900();
  _objc_retainAutoreleasedReturnValue();
  if (((uVar1 == 0) || (uVar2 = param_2, func_0x00010c06ee80(), (int)uVar2 == 0)) ||
     (uVar2 = param_2, func_0x00010c080760(), (uVar2 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c070dc0(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 106e90ca0; end: 106e90d37; -[SCSpectaclesContentStore addContent:] */

void FUN_106e90ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c069220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c069220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181b40(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e90d38; end: 106e90dd7; -[SCSpectaclesContentStore removeContent:] */

void FUN_106e90d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0bbc00(param_3);
  uVar1 = param_1;
  func_0x00010c069220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c069220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181b40(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e90dd8; end: 106e90ecf; -[SCSpectaclesContentStore removeAllContent] */

undefined1 * FUN_106e90dd8(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  long lStack_288;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar8 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar6 = *plStack_100;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(puVar8);
        }
        func_0x00010c12b900(param_1,param_2,*(undefined8 *)(lStack_108 + (long)puVar9 * 8));
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
      puVar1 = puVar8;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar6 = *plStack_230;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar6) {
          _objc_enumerationMutation(puVar8);
        }
        puVar7 = *(undefined1 **)(lStack_238 + (long)puVar9 * 8);
        puVar2 = puVar7;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar7);
          goto LAB_106e90fd8;
        }
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
      puVar1 = puVar8;
      func_0x00010bf52a60(puVar8,param_2,&uStack_240,auStack_1f8,0x10);
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar7 = (undefined1 *)0x0;
LAB_106e90fd8:
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  puVar8 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    lVar6 = *plStack_340;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_340 != lVar6) {
          _objc_enumerationMutation(puVar4);
        }
        uVar5 = *(ulong *)(lStack_348 + (long)puVar8 * 8);
        func_0x00010c266960();
        if ((uVar5 & 1) != 0) {
          puVar8 = (undefined1 *)0x1;
          goto LAB_106e910e8;
        }
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar1 = (undefined1 *)puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_350,auStack_308,0x10);
    } while (puVar1 != (undefined1 *)0x0);
    puVar8 = (undefined1 *)0x0;
  }
LAB_106e910e8:
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return puVar8;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return (undefined1 *)puVar4;
}



/* Entry: 106e90ed0; end: 106e91027; -[SCSpectaclesContentStore contentWithName:] */

ulong FUN_106e90ed0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(ulong *)(lStack_128 + lVar6 * 8);
        uVar4 = uVar3;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((uVar1 & 1) != 0) {
          _objc_retain(uVar3);
          goto LAB_106e90fd8;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  uVar3 = 0;
LAB_106e90fd8:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return uVar3;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf52a60();
  uVar4 = 0;
  if (uVar1 != 0) {
    lVar2 = *plStack_230;
    do {
      uVar4 = 0;
      do {
        if (*plStack_230 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(ulong *)(lStack_238 + uVar4 * 8);
        func_0x00010c266960();
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_106e910e8;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
      uVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_240,auStack_1f8,0x10);
    } while (uVar1 != 0);
    uVar4 = 0;
  }
LAB_106e910e8:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return uVar4;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return param_3;
}



/* Entry: 106e91028; end: 106e91127; -[SCSpectaclesContentStore hasMarkedSyncedContent] */

long FUN_106e91028(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar4 * 8);
        func_0x00010c266960();
        if ((uVar2 & 1) != 0) {
          lVar3 = 1;
          goto LAB_106e910e8;
        }
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    lVar3 = 0;
  }
LAB_106e910e8:
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar3;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return param_1;
}



/* Entry: 106e91128; end: 106e91133; -[SCSpectaclesContentStore content] */

void FUN_106e91128(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 106e91134; end: 106e9113b; -[SCSpectaclesContentStore setContent:] */

void FUN_106e91134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 106e9113c; end: 106e91143; -[SCSpectaclesContentStore internalContent] */

undefined8 FUN_106e9113c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e91144; end: 106e91173; -[SCSpectaclesContentStore setInternalContent:] */

void FUN_106e91144(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106e91174; end: 106e911a3; -[SCSpectaclesContentStore .cxx_destruct] */

void FUN_106e91174(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e911a4; end: 106e91443; -[SCSpectaclesLongContentGenerator longContentWithContentList:] */

void FUN_106e911a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110981cf0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  lVar3 = param_1;
  func_0x00010be5ae00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be15b60(param_1,param_2,&PTR____CFConstantStringClassReference_110e8a618);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdd7520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bdc2e80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc();
  lVar5 = param_1;
  func_0x00010bde4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4280(puVar8,param_2,lVar5,
                      *(undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8);
  _objc_release(lVar5);
  puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7200(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  func_0x00010c1d6fc0(puVar8,param_2,*(undefined8 *)PTR__AVFileTypeQuickTimeMovie_110348020);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x106e914c8;
  puStack_90 = &UNK_11085fb98;
  puStack_88 = puVar8;
  lStack_80 = param_1;
  uStack_78 = param_3;
  puStack_70 = puVar2;
  lStack_68 = lVar7;
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  _objc_retain(lVar4);
  _objc_retain(lVar3);
  _objc_retain(lVar7);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  _objc_retain(puVar8);
  func_0x00010bf9cee0(puVar8,param_2,&puStack_a8);
  puVar9 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lStack_58);
  _objc_release(lStack_60);
  _objc_release(lStack_68);
  _objc_release(puStack_70);
  _objc_release(uStack_78);
  _objc_release(puStack_88);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106e91444; end: 106e915db;  */

undefined8 FUN_106e91444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c26f500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26f500(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106e915dc; end: 106e916af; -[SCSpectaclesLongContentGenerator _fileSizeAtPath:] */

undefined * FUN_106e915dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_3);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0e00e0(puVar1,param_2,*(undefined8 *)PTR__NSFileSize_110345448);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c0b4ca0(puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 106e916b0; end: 106e9170f; -[SCSpectaclesLongContentGenerator _unknownError] */

void FUN_106e916b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar1,param_2,param_1,0xffffffffffffffff,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e91710; end: 106e9176f; -[SCSpectaclesLongContentGenerator _segment] */

void FUN_106e91710(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d2f58;
  _objc_opt_class(PTR_PTR_1126d2f58);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e91770; end: 106e917ef; -[SCSpectaclesLongContentGenerator _cache] */

void FUN_106e91770(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010be9d4c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c137620(param_1);
    lVar1 = param_1;
    func_0x00010be15900(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf262a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106e917f0; end: 106e918c3; -[SCSpectaclesLongContentGenerator _filenameWithPathExtension:] */

void FUN_106e917f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010be9d4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8a638);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25ce20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e918c4; end: 106e9194b; -[SCSpectaclesLongContentGenerator _assetFromContent:] */

void FUN_106e918c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c137620(param_3);
  lVar2 = param_3;
  func_0x00010bf63a60(param_3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x00010c0082a0();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e9194c; end: 106e91c63; -[SCSpectaclesLongContentGenerator _longContent] */

void FUN_106e9194c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010be9d4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d2f58;
    _objc_alloc(PTR_PTR_1126d2f58);
    lVar2 = lVar1;
    func_0x00010bf4cca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02d640(puVar5,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf16f40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f800(puVar5,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c27dd80(lVar1);
    func_0x00010c21acc0(puVar5,param_2,lVar2);
    lVar2 = lVar1;
    func_0x00010c0c5040(lVar1);
    func_0x00010c1c4760(puVar5,param_2,lVar2);
    lVar2 = lVar1;
    func_0x00010c0c6c20(lVar1);
    func_0x00010c1c5440(puVar5,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010be06ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221580(puVar5,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0d2900(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9b80(puVar5,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf258e0(lVar1);
    func_0x00010c174a00(puVar5,param_2,lVar2);
    lVar2 = lVar1;
    func_0x00010c26f500(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214e00(puVar5,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c086560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puVar5,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bdc1800(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9620(puVar5,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c09ea00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf6c0(puVar5,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1c9b60(puVar5,param_2,*(undefined8 *)(param_1 + 8));
    lVar2 = param_1;
    func_0x00010be85e80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be15b20(param_1,param_2,lVar2,&PTR____CFConstantStringClassReference_110e8a658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c74a0(puVar5,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010becbac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be15b20(param_1,param_2,lVar3,&PTR____CFConstantStringClassReference_110e8a678);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214060(puVar5,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010be37e00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010be15b20(param_1,param_2,lVar4,&PTR____CFConstantStringClassReference_110e8a698);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ab540(puVar5,param_2,param_1);
      _objc_release(param_1);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e91c64; end: 106e91d5b; -[SCSpectaclesLongContentGenerator _fileWithData:pathExtension:] */

void FUN_106e91c64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2f50;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bdd7520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15b60(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010bffa720(puVar1,param_2,uVar2,param_1,0,lVar3,0);
  _objc_release(param_1);
  _objc_release(uVar2);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010bf06b00(puVar1,param_2,param_3,0,lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e91d5c; end: 106e91e93; -[SCSpectaclesLongContentGenerator _duration] */

void FUN_106e91d5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
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
  dVar7 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    dVar8 = 0.0;
  }
  else {
    lVar5 = *plStack_110;
    dVar8 = 0.0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010c299d80(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar8 = dVar8 + dVar7;
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010be9d4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e91e94; end: 106e91edb; -[SCSpectaclesLongContentGenerator _thumbnail] */

void FUN_106e91e94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be9d4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf63a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e91edc; end: 106e91f1f; -[SCSpectaclesLongContentGenerator _rawMetadata] */

void FUN_106e91edc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be9d4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1202e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e91f20; end: 106e9211b; -[SCSpectaclesLongContentGenerator _imuData] */

void FUN_106e91f20(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  func_0x00010be9d4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar12 = *(long *)(param_1 + 8);
  _objc_retain(lVar12);
  puVar10 = &uStack_130;
  puVar11 = auStack_e8;
  lVar6 = lVar12;
  func_0x00010bf52a60(lVar12,param_2,puVar10,puVar11,0x10);
  uVar2 = (uint)puVar11;
  if (lVar6 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar12);
        }
        lVar7 = *(long *)(lStack_128 + lVar14 * 8);
        func_0x00010bf63a60(lVar7,param_2,3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          puVar8 = param_1;
          func_0x00010be37e80(param_1,param_2,lVar7,puVar4);
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 != (undefined *)0x0) {
            func_0x00010befa120(puVar5,param_2,puVar8);
          }
          _objc_release(puVar8);
        }
        _objc_release(lVar7);
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
      puVar10 = &uStack_130;
      puVar11 = auStack_e8;
      lVar6 = lVar12;
      func_0x00010bf52a60(lVar12,param_2,puVar10,puVar11,0x10);
      uVar2 = (uint)puVar11;
    } while (lVar6 != 0);
  }
  _objc_release(lVar12);
  puVar8 = puVar5;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    param_1 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined8 *)PTR_PTR_1126d2f60;
    _objc_alloc();
    func_0x00010c000cc0();
    puVar10 = puVar9;
    puVar8 = puVar4;
    func_0x00010bdf7ca0(param_1,param_2,puVar9);
    uVar2 = (uint)puVar8;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar10);
  func_0x00010c0c6c20();
  param_1 = (undefined *)0x0;
  if (uVar2 < 9) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x4c) == 0) {
      puVar4 = PTR_PTR_1126d2f60;
      if ((uVar1 & 0x30) == 0) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x180U) == 0) goto LAB_106e921ec;
        _objc_alloc();
        func_0x00010c02f940();
        puVar5 = puVar4;
        func_0x00010c0804a0();
        iVar3 = (int)puVar5;
      }
      else {
        _objc_alloc();
        func_0x00010c028180();
        puVar5 = puVar4;
        func_0x00010c080480();
        iVar3 = (int)puVar5;
      }
      param_1 = puVar4;
      if (iVar3 == 0) {
        param_1 = (undefined *)0x0;
      }
      _objc_retain(param_1);
      _objc_release(puVar4);
    }
    else {
      param_1 = PTR_PTR_1126d2f60;
      _objc_alloc(PTR_PTR_1126d2f60);
      func_0x00010c021600();
    }
  }
LAB_106e921ec:
  _objc_release(puVar10);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106e9211c; end: 106e92207; -[SCSpectaclesLongContentGenerator _imuDataSetWithData:segment:] */

void FUN_106e9211c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010c0c6c20();
  puVar4 = (undefined *)0x0;
  if (param_4 < 9) {
    uVar1 = 1 << (ulong)(param_4 & 0x1f);
    if ((uVar1 & 0x4c) == 0) {
      puVar3 = PTR_PTR_1126d2f60;
      if ((uVar1 & 0x30) == 0) {
        if ((1 << (ulong)(param_4 & 0x1f) & 0x180U) == 0) goto LAB_106e921ec;
        _objc_alloc();
        func_0x00010c02f940();
        puVar4 = puVar3;
        func_0x00010c0804a0();
        iVar2 = (int)puVar4;
      }
      else {
        _objc_alloc();
        func_0x00010c028180();
        puVar4 = puVar3;
        func_0x00010c080480();
        iVar2 = (int)puVar4;
      }
      puVar4 = puVar3;
      if (iVar2 == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar3);
    }
    else {
      puVar4 = PTR_PTR_1126d2f60;
      _objc_alloc(PTR_PTR_1126d2f60);
      func_0x00010c021600();
    }
  }
LAB_106e921ec:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e92208; end: 106e922b7; -[SCSpectaclesLongContentGenerator _dataFromConcatenatedImuDataSet:segment:] */

void FUN_106e92208(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0c6c20();
  uVar2 = 0;
  if (param_4 < 9) {
    uVar1 = 1 << (ulong)(param_4 & 0x1f);
    if ((uVar1 & 0x4c) == 0) {
      if ((uVar1 & 0x30) == 0) {
        if ((1 << (ulong)(param_4 & 0x1f) & 0x180U) != 0) {
          uVar2 = param_3;
          func_0x00010c0d9780(param_3);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        uVar2 = param_3;
        func_0x00010c0b7ba0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      uVar2 = param_3;
      func_0x00010c087ae0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e922b8; end: 106e926ab; -[SCSpectaclesLongContentGenerator _composition] */

void FUN_106e922b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_2d0;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  func_0x00010bf45600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar16 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar11 = *(long *)(param_1 + 8);
  uStack_190 = uVar16;
  uStack_188 = uVar17;
  uStack_180 = uVar9;
  _objc_retain(lVar11);
  lStack_2d0 = lVar11;
  func_0x00010bf52a60();
  if (lStack_2d0 != 0) {
    lVar10 = *plStack_1c0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1c0 != lVar10) {
          _objc_enumerationMutation(lVar11);
        }
        lVar4 = param_1;
        func_0x00010bdcf8c0();
        _objc_retainAutoreleasedReturnValue();
        lStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        plStack_200 = (long *)0x0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        lVar5 = lVar4;
        func_0x00010c2791a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          lVar15 = *plStack_200;
          do {
            lVar13 = 0;
            do {
              if (*plStack_200 != lVar15) {
                _objc_enumerationMutation(lVar5);
              }
              uVar14 = *(undefined8 *)(lStack_208 + lVar13 * 8);
              uVar7 = uVar14;
              func_0x00010c0c6c20();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c0720c0();
              _objc_release(uVar7);
              if ((int)uVar8 == 0) {
                func_0x00010c0c6c20();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar14;
                func_0x00010c0720c0();
                _objc_release(uVar14);
                if ((int)uVar7 != 0) {
                  if (lVar4 == 0) {
                    uStack_260 = 0;
                    uStack_258 = 0;
                    uStack_250 = 0;
                  }
                  else {
                    func_0x00010bf8b160(&uStack_260,lVar4);
                  }
                  uStack_280 = uVar16;
                  uStack_278 = uVar17;
                  uStack_270 = uVar9;
                  _CMTimeRangeMake(&uStack_240,&uStack_280,&uStack_260);
                  uStack_258 = uStack_188;
                  uStack_260 = uStack_190;
                  uStack_250 = uStack_180;
                  func_0x00010c067160(puVar3);
                  goto LAB_106e92594;
                }
              }
              else {
                if (lVar4 == 0) {
                  uStack_260 = 0;
                  uStack_258 = 0;
                  uStack_250 = 0;
                }
                else {
                  func_0x00010bf8b160(&uStack_260,lVar4);
                }
                uStack_280 = uVar16;
                uStack_278 = uVar17;
                uStack_270 = uVar9;
                _CMTimeRangeMake(&uStack_240,&uStack_280,&uStack_260);
                uStack_258 = uStack_188;
                uStack_260 = uStack_190;
                uStack_250 = uStack_180;
                func_0x00010c067160(puVar2);
LAB_106e92594:
                _objc_retain(0);
                _objc_release(0);
              }
              lVar13 = lVar13 + 1;
            } while (lVar6 != lVar13);
            lVar6 = lVar5;
            func_0x00010bf52a60();
          } while (lVar6 != 0);
        }
        _objc_release(lVar5);
        if (lVar4 == 0) {
          uStack_240 = 0;
          uStack_238 = 0;
          uStack_230 = 0;
        }
        else {
          func_0x00010bf8b160(&uStack_240,lVar4);
        }
        uStack_258 = uStack_188;
        uStack_260 = uStack_190;
        uStack_250 = uStack_180;
        _CMTimeAdd(&uStack_190,&uStack_260,&uStack_240);
        _objc_release(lVar4);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lStack_2d0);
      lStack_2d0 = lVar11;
      func_0x00010bf52a60();
    } while (lStack_2d0 != 0);
  }
  _objc_release(lVar11);
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 106e926ac; end: 106e926b7; -[SCSpectaclesLongContentGenerator .cxx_destruct] */

void FUN_106e926ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e926b8; end: 106e927b3; -[SCSpectaclesProgressiveContentLoader initWithDevice:dataFlowsManager:] */

undefined8 *
FUN_106e926b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puStack_40 = PTR_PTR_1126f7a38;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  return puVar1;
}



/* Entry: 106e927b4; end: 106e929cb; -[SCSpectaclesProgressiveContentLoader createAssetWithSpecsRemoteFileName:fileSize:] */

void FUN_106e927b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = param_3;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8a6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar5 = PTR_PTR_1126d2f68;
  _objc_alloc(PTR_PTR_1126d2f68);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c04ade0(puVar5,param_2,param_3,param_4,lVar6,*(undefined8 *)(param_1 + 0x10),puVar4);
  _objc_release(lVar6);
  puVar7 = puVar2;
  func_0x00010c13b360(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c11de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b640(puVar7,param_2,puVar5,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126bcb80;
  _objc_alloc(PTR_PTR_1126bcb80);
  func_0x00010bfefc40();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar5,puVar3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,puVar7);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106e929cc; end: 106e92c97; -[SCSpectaclesProgressiveContentLoader removeAsset:] */

void FUN_106e929cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lStack_138;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar3 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar6 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c255780();
      _objc_release(uVar7);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
      lVar8 = *(long *)(param_1 + 0x20);
      func_0x00010bf51e00();
      lVar6 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar8);
          }
          uVar12 = *(ulong *)(lVar11 * 8);
          func_0x00010c0d5720();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
          _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
          uVar5 = uVar12;
          _objc_opt_isKindOfClass(uVar12,puVar4);
          uVar1 = uVar12;
          if ((uVar5 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar12);
          if (uVar1 != 0) {
            uVar5 = uVar12;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar5;
            func_0x00010c071ae0();
            _objc_release(uVar5);
            if ((int)uVar9 != 0) {
              func_0x00010bf2e6a0(uVar12);
              func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20));
            }
          }
          _objc_release(uVar1);
          lVar11 = lVar11 + 1;
        } while (lVar6 != lVar11);
        lVar6 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
    }
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    lStack_138 = param_1;
  }
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lStack_138);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3 + 8);
  return;
}



/* Entry: 106e92c98; end: 106e92cdb; -[SCSpectaclesProgressiveContentLoader .cxx_destruct] */

void FUN_106e92c98(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106e92cdc; end: 106e92e07; -[SCSpectaclesProgressiveContentLoaderDelegate initWithSpecsRemoteFileName:fileSize:device:dataFlowsManager:performer:] */

undefined8 *
FUN_106e92cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_50 = PTR_PTR_1126f7a40;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 2,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_6);
    uVar3 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[4];
    puVar1[4] = uVar3;
    _objc_release(uVar4);
    puVar1[5] = param_4;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e92e08; end: 106e92e0b; -[SCSpectaclesProgressiveContentLoaderDelegate delloc] */

void FUN_106e92e08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 106e92e0c; end: 106e92e0f; -[SCSpectaclesProgressiveContentLoaderDelegate stop] */

void FUN_106e92e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 106e92e10; end: 106e92eab; -[SCSpectaclesProgressiveContentLoaderDelegate resourceLoader:shouldWaitForLoadingOfRequestedResource:] */

undefined8 FUN_106e92e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf4c7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be27d20(param_1,param_2,param_4);
    }
  }
  else {
    func_0x00010be276a0(param_1,param_2,param_4);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106e92eac; end: 106e92eaf; -[SCSpectaclesProgressiveContentLoaderDelegate resourceLoader:didCancelLoadingRequest:] */

void FUN_106e92eac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 106e92eb0; end: 106e92f6f; -[SCSpectaclesProgressiveContentLoaderDelegate _handleContentInfoRequest:] */

undefined8 FUN_106e92eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4c7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf4c7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174ca0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf4c7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182140();
  _objc_release(uVar1);
  func_0x00010bfaf920(param_3);
  _objc_release(param_3);
  return 1;
}



/* Entry: 106e92f70; end: 106e931e7; -[SCSpectaclesProgressiveContentLoaderDelegate _handleDataRequest:] */

undefined1 * FUN_106e92f70(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bddf3e0(param_1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bf64280();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c1373c0();
  if ((int)lVar9 == 0) {
    lVar9 = lVar2;
    func_0x00010c137280();
  }
  else {
    lVar9 = *(long *)(param_1 + 0x28);
    lVar10 = lVar2;
    func_0x00010c1372a0();
    lVar9 = lVar9 - lVar10;
  }
  func_0x00010c1372a0(lVar2);
  puVar3 = PTR_PTR_1126d2f70;
  _objc_alloc();
  func_0x00010c03e000();
  puVar4 = PTR_PTR_1126b6720;
  _objc_alloc();
  lVar10 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar10);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c100();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar4;
  _objc_release(uVar1);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_initWeak(auStack_78,puVar3);
  _objc_retain(param_3);
  puVar8 = auStack_78;
  _objc_copyWeak(auStack_88,puVar8);
  lStack_80 = lVar9;
  func_0x00010c191200(puVar3);
  func_0x00010c064d40(*(undefined8 *)(param_1 + 0x18));
  _objc_destroyWeak(auStack_88);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)0x1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(puVar8);
  uVar7 = *(ulong *)(param_3 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar7 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf64280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b6c0();
    _objc_release(uVar1);
    lVar2 = param_3 + 0x28;
    _objc_loadWeakRetained();
    lVar9 = lVar2;
    func_0x00010bfab7e0();
    lVar10 = *(long *)(param_3 + 0x30);
    _objc_release(lVar2);
    if (lVar10 <= lVar9) {
      func_0x00010bfaf920(*(undefined8 *)(param_3 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return puVar8;
}



/* Entry: 106e931e8; end: 106e93283;  */

void FUN_106e931e8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf64280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b6c0();
    _objc_release(uVar2);
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bfab7e0();
    lVar5 = *(long *)(param_1 + 0x30);
    _objc_release(lVar3);
    if (lVar5 <= lVar4) {
      func_0x00010bfaf920(*(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e93284; end: 106e93307; -[SCSpectaclesProgressiveContentLoaderDelegate _taskDataChunk] */

void FUN_106e93284(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c064540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126d2f70;
    _objc_opt_class(PTR_PTR_1126d2f70);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e93308; end: 106e93367; -[SCSpectaclesProgressiveContentLoaderDelegate _cleanup] */

void FUN_106e93308(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bf2e1e0(*(undefined8 *)(param_1 + 0x18));
    lVar1 = param_1;
    func_0x00010becabe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e93368; end: 106e93383; -[SCSpectaclesProgressiveContentLoaderDelegate dataFlowsRequest:failedToExecutedTask:error:] */

void FUN_106e93368(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (*(long *)(param_1 + 0x30) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfaf970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_finishLoadingWithError__1125c9800,param_5);
  return;
}



/* Entry: 106e93384; end: 106e9339f; -[SCSpectaclesProgressiveContentLoaderDelegate dataFlowsRequest:failedWithError:] */

void FUN_106e93384(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + 0x30) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfaf970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_finishLoadingWithError__1125c9800,param_4);
  return;
}



/* Entry: 106e933a0; end: 106e933fb; -[SCSpectaclesProgressiveContentLoaderDelegate .cxx_destruct] */

void FUN_106e933a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e933fc; end: 106e9349f; -[SCSpectaclesProximityUnlockManager initWithConnectionHub:deviceSerialNumber:] */

undefined1 *
FUN_106e933fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7a48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e934a0; end: 106e93507; -[SCSpectaclesProximityUnlockManager openProximityUnlockChannelWithLagunaId:] */

void FUN_106e934a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2f78;
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c021620();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e93508; end: 106e9357b; -[SCSpectaclesProximityUnlockManager handleResponse:] */

void FUN_106e93508(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bfdac00();
  if ((param_3 != 0) && (lVar1 = *(long *)(param_1 + 0x18), lVar1 != 0)) {
    func_0x00010bfc9fe0(lVar1,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010be72480(param_1,param_2,lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106e9357c; end: 106e93583; -[SCSpectaclesProximityUnlockManager responseMonitorState] */

undefined8 FUN_106e9357c(void)

{
  return 0;
}



/* Entry: 106e93584; end: 106e935c7; -[SCSpectaclesProximityUnlockManager _performProximityUnlockWithPasscode:] */

void FUN_106e93584(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c0f8d40(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e935c8; end: 106e93603; -[SCSpectaclesProximityUnlockManager .cxx_destruct] */

void FUN_106e935c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e93604; end: 106e9366f; -[SCSpectaclesDevice emoji] */

void FUN_106e93604(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c0c78;
  uVar1 = param_1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70cc0(param_1);
  func_0x00010bf8e400(puVar2,param_2,uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e93670; end: 106e936ff; -[SCSpectaclesDevice displayNameWithoutEmoji] */

void FUN_106e93670(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08fa60();
  uVar3 = uVar1;
  func_0x00010c260c00(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c25d0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e93700; end: 106e93767; -[SCSpectaclesDevice bleDisplayName] */

void FUN_106e93700(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074be0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010c22d240(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e93768; end: 106e9376b; -[SCSpectaclesDevice bluetoothDisplayName] */

void FUN_106e93768(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 106e9376c; end: 106e9380f; -[SCSpectaclesDevice wifiDisplayName] */

void FUN_106e9376c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e93810; end: 106e939b7; -[SCSpectaclesDevice initInternal] */

undefined1 * FUN_106e93810(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7a50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d2f80;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1a8);
    *(undefined **)((long)puVar1 + 0x1a8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d2f88;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1a0);
    *(undefined **)((long)puVar1 + 0x1a0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x188);
    *(undefined **)((long)puVar1 + 0x188) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d2f90;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1c0);
    *(undefined **)((long)puVar1 + 0x1c0) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x50) = 1;
    *(undefined1 *)((long)puVar1 + 0x52) = 0;
    *(undefined8 *)((long)puVar1 + 0x160) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x108) = 999;
    *(undefined8 *)((long)puVar1 + 0x100) = 999;
    *(undefined8 *)((long)puVar1 + 0x118) = 999;
    *(undefined8 *)((long)puVar1 + 0x110) = 999;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1e8);
    *(undefined ***)((long)puVar1 + 0x1e8) = &PTR____CFConstantStringClassReference_110e8a6f8;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d2f98;
    _objc_alloc();
    func_0x00010c00bc80();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1f8);
    *(undefined **)((long)puVar1 + 0x1f8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d2fa0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1b0);
    *(undefined **)((long)puVar1 + 0x1b0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d2fa8;
    _objc_alloc();
    func_0x00010c002100();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1b8);
    *(undefined **)((long)puVar1 + 0x1b8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d2fb0;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e939b8; end: 106e93b6f; -[SCSpectaclesDevice initWithSerialNumber:displayName:color:firstPairedTimestamp:lastPairedStatusUpdatedTimestamp:lastNameUpdatedTimestamp:deviceNumber:firmwareVersion:hardwareVersion:backgroundTaskWrapper:] */

long FUN_106e939b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010bfeee40();
  if (param_1 != 0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126c0c78;
    func_0x00010c22d260(PTR_PTR_1126c0c78,param_2,param_9,param_11);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined **)(param_1 + 0x1c8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar1);
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0xc0) = param_5;
    func_0x00010beabfe0(param_1,param_2,param_11);
    *(undefined8 *)(param_1 + 0xb8) = param_9;
    *(undefined8 *)(param_1 + 200) = param_6;
    *(undefined8 *)(param_1 + 0xd0) = param_7;
    *(undefined8 *)(param_1 + 0xe0) = param_8;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = param_10;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_11;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_12;
    _objc_release(uVar4);
    func_0x00010bddd580(param_1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e93b70; end: 106e93bfb; -[SCSpectaclesDevice initWithBabyDevice:performer:] */

long FUN_106e93b70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfeee40();
  if (param_1 != 0) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x188) = param_4;
    _objc_release(uVar1);
    func_0x00010bdc96c0(param_1,param_2,param_3);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e93bfc; end: 106e93e8f; -[SCSpectaclesDevice setupWithCentralManager:deviceFeatureScopeExposer:deviceFeatureScopeServices:clientControllerScopeExposer:clientControllerScopeServices:] */

void FUN_106e93bfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126d2fb8;
    _objc_alloc();
    func_0x00010c00c000();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar3);
    func_0x00010be65e40(param_1);
  }
  func_0x00010befb0c0(*(undefined8 *)(param_1 + 0x1c0));
  if (*(long *)(param_1 + 0x1f0) != 0) {
    func_0x00010c12e0c0(*(undefined8 *)(param_1 + 0x1c0));
  }
  puVar1 = PTR_PTR_1126d2fc0;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bfe0();
  uVar3 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined **)(param_1 + 0x1f0) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010befb0c0(*(undefined8 *)(param_1 + 0x1c0));
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12e0c0(*(undefined8 *)(param_1 + 0x1c0));
  }
  lVar2 = param_1;
  func_0x00010c263a60();
  if ((int)lVar2 != 0) {
    puVar1 = PTR_PTR_1126d2fc8;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010c15e740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002180();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    func_0x00010befb0c0(*(undefined8 *)(param_1 + 0x1c0));
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x188);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e93e90; end: 106e93fb3;  */

void FUN_106e93e90(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010bf026c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(lVar2 + 0x30);
    uVar4 = *(undefined8 *)(lVar2 + 0x38);
    _objc_copyWeak(auStack_68,param_1 + 0x20);
    func_0x00010bf23060(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(uVar1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106e93fb4; end: 106e9400f;  */

void FUN_106e93fb4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 0x170,param_2);
    func_0x00010bf70420(*(undefined8 *)(param_1 + 0x1a8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e94010; end: 106e9417f; -[SCSpectaclesDevice setupFirstWithPerformer:analyticsLogger:progressMonitor:backgroundTaskWrapper:] */

void FUN_106e94010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c1da9c0(param_1);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_6;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f88c0(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e94180; end: 106e941bf;  */

void FUN_106e94180(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c167c20();
  func_0x00010c1e47c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e941c0; end: 106e942b7; -[SCSpectaclesDevice setupContentWithCache:] */

void FUN_106e941c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e942b8; end: 106e943eb;  */

void FUN_106e942b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = lVar1;
  func_0x00010bf4d760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c229b60(*(undefined8 *)(lStack_118 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
      lVar6 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106e943ec;
  lStack_150 = lVar6;
  lStack_148 = lVar2;
  lStack_140 = lVar1;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  lVar1 = lVar3;
  func_0x00010c263a60();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_158,lVar3);
    func_0x00010c0f98a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_160,auStack_158);
    _objc_retain(puVar4);
    func_0x00010c0f88c0(lVar3);
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
  }
  _objc_release(puVar4);
  return;
}



/* Entry: 106e943ec; end: 106e944ef; -[SCSpectaclesDevice openProximityUnlockChannelWithLagunaId:] */

void FUN_106e943ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c263a60();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f88c0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e944f0; end: 106e94527;  */

void FUN_106e944f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010c0e9600(*(undefined8 *)(lVar1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e94528; end: 106e9457b; -[SCSpectaclesDevice setDisplayName:] */

void FUN_106e94528(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x68);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9457c; end: 106e9461f; -[SCSpectaclesDevice isEqual:] */

ulong FUN_106e9457c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c15e740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15e740(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0(uVar2);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106e94620; end: 106e9465b; -[SCSpectaclesDevice hash] */

undefined8 FUN_106e94620(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e9465c; end: 106e9471f; -[SCSpectaclesDevice hasHdContentToDownload] */

bool FUN_106e9465c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x00010bfdaf80();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf4d760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27f940();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    func_0x00010bf4d760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c27f940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    bVar1 = lVar4 + lVar6 != 0;
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 106e94720; end: 106e947d3; -[SCSpectaclesDevice undownloadedHdContent] */

void FUN_106e94720(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bf4d760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27f940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d760(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c27f940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf09f80(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106e947d4; end: 106e947fb; -[SCSpectaclesDevice connectionState] */

void FUN_106e947d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e947fc; end: 106e947ff; -[SCSpectaclesDevice name] */

void FUN_106e947fc(void)

{
  return;
}



/* Entry: 106e94800; end: 106e94803; -[SCSpectaclesDevice internalDevice] */

void FUN_106e94800(void)

{
  return;
}



/* Entry: 106e94804; end: 106e9482b; -[SCSpectaclesDevice dataFlowsManager] */

void FUN_106e94804(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e9482c; end: 106e94853; -[SCSpectaclesDevice batteryLevel] */

void FUN_106e9482c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e94854; end: 106e9487b; -[SCSpectaclesDevice guppyBatteryLevel] */

void FUN_106e94854(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e9487c; end: 106e94883; -[SCSpectaclesDevice coulombCounterTemperature] */

undefined8 FUN_106e9487c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 106e94884; end: 106e9488b; -[SCSpectaclesDevice socTemperature] */

undefined8 FUN_106e94884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 106e9488c; end: 106e94893; -[SCSpectaclesDevice batteryLevelStatus] */

undefined8 FUN_106e9488c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106e94894; end: 106e9489b; -[SCSpectaclesDevice temperatureStatus] */

undefined8 FUN_106e94894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 106e9489c; end: 106e948a3; -[SCSpectaclesDevice storagelevelStatus] */

undefined8 FUN_106e9489c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}


