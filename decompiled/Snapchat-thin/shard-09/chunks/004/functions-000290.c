/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d39200; end: 106d3934f;  */

void FUN_106d39200(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) == 0)) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,0,0);
  }
  else {
    lVar2 = lVar1;
    func_0x00010be4ef60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4c980(lVar1);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d39350; end: 106d3949f;  */

void FUN_106d39350(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x78,param_2 + 0x78);
  return;
}



/* Entry: 106d394a0; end: 106d3969b;  */

void FUN_106d394a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x120);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfbc8;
    func_0x00010bf586e0(PTR_PTR_1126bfbc8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    uStack_68 = *(undefined2 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    uStack_66 = *(undefined1 *)(param_1 + 0x5a);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar10);
    uStack_65 = *(undefined1 *)(param_1 + 0x5b);
    uVar5 = uVar2;
    func_0x00010c134cc0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106d3969c; end: 106d3995b;  */

void FUN_106d3969c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106d3995c;
    puStack_60 = &UNK_110849530;
    lVar3 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar3);
    lStack_58 = lVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    lVar3 = lStack_58;
  }
  else {
    uVar6 = *(ulong *)(lVar1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      func_0x00010bf4b900();
      _objc_release(uVar2);
      if ((uVar6 & 1) != 0) goto LAB_106d39930;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x106d39978;
      puStack_88 = &UNK_110849530;
      lVar3 = *(long *)(param_1 + 0x38);
      _objc_retain(lVar3);
      lStack_80 = lVar3;
      func_0x0001000d76cc("APPSTORE",&puStack_a0);
      lVar3 = lStack_80;
    }
    else {
      func_0x00010c12d360();
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 == 0) {
        lVar3 = lVar1;
        func_0x00010be12380();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar3);
      }
      if ((*(long *)(param_1 + 0x28) == 0) && (lVar3 != 0)) {
        func_0x00010be4df00(lVar1);
      }
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_106d39994;
      puStack_100 = &UNK_110977578;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lStack_f8 = lVar1;
      _objc_retain(uVar2);
      uStack_f0 = uVar2;
      lStack_e8 = lVar3;
      _objc_retain(param_2);
      uStack_a8 = *(undefined1 *)(param_1 + 0x5a);
      uStack_a7 = *(undefined2 *)(param_1 + 0x58);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      lStack_e0 = param_2;
      uStack_b8 = param_3;
      _objc_retain(uVar2);
      uStack_b0 = *(undefined8 *)(param_1 + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uStack_c8 = uVar2;
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uStack_d8 = uVar4;
      _objc_retain(uVar5);
      uStack_a5 = *(undefined1 *)(param_1 + 0x5b);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uStack_c0 = uVar5;
      _objc_retain(uVar2);
      uStack_d0 = uVar2;
      _objc_retain(lVar3);
      func_0x0001000d76cc("APPSTORE",&puStack_118);
      _objc_release(uStack_d0);
      _objc_release(uStack_c0);
      _objc_release(uStack_d8);
      _objc_release(uStack_c8);
      _objc_release(lStack_e0);
      _objc_release(lStack_e8);
      _objc_release(uStack_f0);
    }
  }
  _objc_release(lVar3);
LAB_106d39930:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106d3995c; end: 106d39993;  */

void FUN_106d3995c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d39974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,0);
  return;
}



/* Entry: 106d39994; end: 106d39a7b;  */

void FUN_106d39994(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be4ef60(uVar4,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),0,0,0,0 < *(long *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined1 *)(param_1 + 0x73);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c980(uVar1,param_2,uVar2,uVar3,uVar6,0,puVar5,*(undefined8 *)(param_1 + 0x58));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106d39a7c; end: 106d39ae7;  */

void FUN_106d39a7c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  return;
}



/* Entry: 106d39ae8; end: 106d39c7b;  */

void FUN_106d39ae8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar3,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar3,param_2,uVar1);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2dba0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      lVar2 = *(long *)(param_1 + 0x30);
      (**(code **)(lVar2 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,lVar2,uVar1);
      _objc_release(uVar1);
      _objc_release(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 106d39c7c; end: 106d3a1ab; -[SCGalleryOperaMediaManager _loadedPropertyForImageSnap:snapDetail:image:spectaclesMetadataToken:outputCommands:midOutputGLCommand:isFullResolution:shouldLoadDecorativeLayers:isPrivateSnap:isFromMiniCarousel:mediaOverlay:screenOverlay:musicAssetProvider:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d39c7c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,ulong param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined **ppuVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [8];
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  ulong uStack_358;
  long lStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  ulong uStack_318;
  long lStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  long lStack_1c0;
  long lStack_140;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  uVar19 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_13);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  _objc_release(uVar19);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cdc70;
  uVar19 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1201c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar19);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cdc70;
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1201c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x000109023a28();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c99e0;
  func_0x00010bf24b80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar15 = param_1;
  func_0x00010be0dd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 != 0) {
    puVar3 = PTR_PTR_1126c99e0;
    func_0x00010c281320(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar3);
  }
  if ((int)uVar1 != 0) {
    lVar8 = param_1;
    func_0x00010bdd7860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar7);
    _objc_release(lVar8);
  }
  lVar8 = param_1;
  uVar17 = param_11;
  func_0x00010bdd7ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar7);
  _objc_release(lVar8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar19);
  _objc_release(uVar1);
  _objc_release(puVar3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_5);
  uVar19 = *(undefined8 *)(param_1 + 0x98);
  uVar9 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010c1d0640(uVar19);
  _objc_release(param_6);
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x000107dc2fa4();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bef7f60(puVar7);
  _objc_release(uVar9);
  FUN_106d381b4(puVar7,param_13);
  _objc_release(param_13);
  if (param_9._1_1_ != '\0') {
    lStack_140 = param_16;
    uVar1 = (ulong)param_9._2_1_;
    uVar17 = (ulong)param_9._3_1_;
    uVar13 = param_3;
    func_0x00010be4cf40(param_1);
    uVar14 = param_14;
  }
  _objc_release(lVar15);
  _objc_release(puVar2);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar13);
  _objc_retain(uVar1);
  _objc_retain(uVar17);
  _objc_retain(uVar14);
  lVar15 = lStack_140;
  _objc_retain();
  _dispatch_group_create();
  uVar9 = uVar1;
  func_0x00010c06cde0();
  if ((uVar9 & 1) == 0) {
    ppuVar16 = (undefined **)0x0;
    (**(code **)(lStack_140 + 0x10))(lStack_140,0,0,0,0);
  }
  else {
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_110f0c978;
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuStack_1d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9028;
    ppuStack_1c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9040;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lStack_140 + 0x10))(lStack_140,puVar2,1,0,0);
    _objc_release(puVar2);
    _dispatch_group_enter(lVar15);
    puStack_208 = &uStack_210;
    uStack_210 = 0;
    uStack_200 = 0x3032000000;
    pcStack_1f8 = FUN_106d350dc;
    uStack_1f0 = 0x106d350ec;
    uStack_1e8 = 0;
    puStack_238 = &uStack_240;
    uStack_240 = 0;
    uStack_230 = 0x3032000000;
    pcStack_228 = FUN_106d350dc;
    uStack_220 = 0x106d350ec;
    uStack_218 = 0;
    puStack_268 = &uStack_270;
    uStack_270 = 0;
    uStack_260 = 0x3032000000;
    pcStack_258 = FUN_106d350dc;
    uStack_250 = 0x106d350ec;
    uStack_248 = 0;
    puStack_298 = &uStack_2a0;
    uStack_2a0 = 0;
    uStack_290 = 0x3032000000;
    pcStack_288 = FUN_106d350dc;
    uStack_280 = 0x106d350ec;
    uStack_278 = 0;
    puStack_2c8 = &uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c0 = 0x3032000000;
    pcStack_2b8 = FUN_106d350dc;
    uStack_2b0 = 0x106d350ec;
    uStack_2a8 = 0;
    puStack_2e8 = &uStack_2f0;
    uStack_2f0 = 0;
    uStack_2e0 = 0x2020000000;
    uStack_2d8 = 0;
    uVar10 = *(undefined8 *)(param_3 + 0x100);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar10;
    func_0x000108d4ad38();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_330 = 0xc2000000;
    pcStack_328 = FUN_106d3a798;
    puStack_320 = &UNK_110977608;
    puStack_308 = &uStack_2f0;
    puStack_300 = &uStack_2d0;
    _objc_retain(uVar13);
    uStack_318 = uVar13;
    _objc_retain(lVar15);
    puStack_2f8 = &uStack_210;
    lStack_310 = lVar15;
    func_0x00010c1346e0(uVar10);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar19);
    _objc_release(uVar10);
    _dispatch_group_enter(lVar15);
    uVar19 = *(undefined8 *)(param_3 + 0x100);
    func_0x00010c269d40(uVar19);
    _objc_retainAutoreleasedReturnValue();
    puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_370 = 0xc2000000;
    pcStack_368 = FUN_106d3a8b8;
    puStack_360 = &UNK_110977338;
    puStack_348 = &uStack_270;
    puStack_340 = &uStack_2a0;
    _objc_retain(uVar13);
    uStack_358 = uVar13;
    _objc_retain(lVar15);
    lStack_350 = lVar15;
    func_0x00010c136020(uVar19);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar19);
    uVar9 = param_3;
    func_0x00010be61760();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = auStack_380;
    _objc_initWeak(puVar11,param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_3f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3f0 = 0xc2000000;
    pcStack_3e8 = FUN_106d3a94c;
    puStack_3e0 = &UNK_110977668;
    _objc_copyWeak(auStack_388,auStack_380);
    puStack_3b8 = &uStack_2f0;
    _objc_retain(lStack_140);
    puStack_3b0 = &uStack_2d0;
    lStack_3c8 = lStack_140;
    _objc_retain(uVar13);
    uStack_3d8 = uVar13;
    _objc_retain(uVar14);
    puStack_3a8 = &uStack_210;
    puStack_3a0 = &uStack_240;
    puStack_398 = &uStack_270;
    puStack_390 = &uStack_2a0;
    uStack_3d0 = uVar14;
    uStack_3c0 = uVar9;
    _objc_retain(uVar9);
    ppuVar16 = &puStack_3f8;
    func_0x000100bc0718(lVar15,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uStack_3c0);
    _objc_release(uStack_3d0);
    _objc_release(uStack_3d8);
    _objc_release(lStack_3c8);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_388);
    _objc_destroyWeak(auStack_380);
    _objc_release(lStack_350);
    _objc_release(uStack_358);
    _objc_release(lStack_310);
    _objc_release(uStack_318);
    __Block_object_dispose(&uStack_2f0,8);
    __Block_object_dispose(&uStack_2d0,8);
    _objc_release(uStack_2a8);
    __Block_object_dispose(&uStack_2a0,8);
    _objc_release(uStack_278);
    __Block_object_dispose(&uStack_270,8);
    _objc_release(uStack_248);
    __Block_object_dispose(&uStack_240,8);
    _objc_release(uStack_218);
    __Block_object_dispose(&uStack_210,8);
    _objc_release(uStack_1e8);
  }
  _objc_release(lVar15);
  _objc_release(lStack_140);
  _objc_release(uVar14);
  _objc_release(uVar17);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_2f0,8);
  __Block_object_dispose(&uStack_2d0,8);
  __Block_object_dispose(&uStack_2a0,8);
  __Block_object_dispose(&uStack_270,8);
  __Block_object_dispose(&uStack_240,8);
  lVar15 = 8;
  __Block_object_dispose(&uStack_210);
  __Unwind_Resume();
  _objc_retain(lVar15);
  _objc_retain(ppuVar16);
  if (lVar15 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(uVar13 + 0x30) + 8) + 0x18) = 1;
    lVar18 = *(long *)(*(long *)(uVar13 + 0x38) + 8);
    _objc_retain(ppuVar16);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    *(undefined ***)(lVar18 + 0x28) = ppuVar16;
    _objc_release(uVar14);
    _dispatch_group_leave(*(undefined8 *)(uVar13 + 0x28));
  }
  else {
    lVar18 = *(long *)(*(long *)(uVar13 + 0x40) + 8);
    _objc_retain(lVar15);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    *(long *)(lVar18 + 0x28) = lVar15;
    _objc_release(uVar14);
    lVar18 = lVar15;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar18;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    if (lVar8 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(uVar13 + 0x30) + 8) + 0x18) = 1;
      lVar18 = *(long *)(*(long *)(uVar13 + 0x38) + 8);
      _objc_retain(ppuVar16);
      uVar14 = *(undefined8 *)(lVar18 + 0x28);
      *(undefined ***)(lVar18 + 0x28) = ppuVar16;
      _objc_release(uVar14);
    }
    _dispatch_group_leave(*(undefined8 *)(uVar13 + 0x28));
    _objc_release(lVar8);
  }
  _objc_release(ppuVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar15);
  return;
}



/* Entry: 106d3a1ac; end: 106d3a797; -[SCGalleryOperaMediaManager _loadGalleryVideoSnapFromLensMedia:lensMediaFile:originalCloudFile:shouldShowSoundPill:snapDetail:missingVideoTrackRetryCount:completion:] */

void FUN_106d3a1ac(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar8 = param_9;
  _objc_retain();
  _dispatch_group_create();
  uVar1 = param_4;
  func_0x00010c06cde0();
  if ((uVar1 & 1) == 0) {
    ppuVar9 = (undefined **)0x0;
    (**(code **)(param_9 + 0x10))(param_9,0,0,0,0);
  }
  else {
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0c978;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9028;
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9040;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,puVar2,1,0,0);
    _objc_release(puVar2);
    _dispatch_group_enter(lVar8);
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_106d350dc;
    uStack_b0 = 0x106d350ec;
    uStack_a8 = 0;
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_106d350dc;
    uStack_e0 = 0x106d350ec;
    uStack_d8 = 0;
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_106d350dc;
    uStack_110 = 0x106d350ec;
    uStack_108 = 0;
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x3032000000;
    pcStack_148 = FUN_106d350dc;
    uStack_140 = 0x106d350ec;
    uStack_138 = 0;
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_106d350dc;
    uStack_170 = 0x106d350ec;
    uStack_168 = 0;
    puStack_1a8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x2020000000;
    uStack_198 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108d4ad38();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_106d3a798;
    puStack_1e0 = &UNK_110977608;
    puStack_1c8 = &uStack_1b0;
    puStack_1c0 = &uStack_190;
    _objc_retain(param_3);
    lStack_1d8 = param_3;
    _objc_retain(lVar8);
    puStack_1b8 = &uStack_d0;
    lStack_1d0 = lVar8;
    func_0x00010c1346e0(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _dispatch_group_enter(lVar8);
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_106d3a8b8;
    puStack_220 = &UNK_110977338;
    puStack_208 = &uStack_130;
    puStack_200 = &uStack_160;
    _objc_retain(param_3);
    lStack_218 = param_3;
    _objc_retain(lVar8);
    lStack_210 = lVar8;
    func_0x00010c136020(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    lVar10 = param_1;
    func_0x00010be61760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = auStack_240;
    _objc_initWeak(puVar5,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b0 = 0xc2000000;
    pcStack_2a8 = FUN_106d3a94c;
    puStack_2a0 = &UNK_110977668;
    _objc_copyWeak(auStack_248,auStack_240);
    puStack_278 = &uStack_1b0;
    _objc_retain(param_9);
    puStack_270 = &uStack_190;
    lStack_288 = param_9;
    _objc_retain(param_3);
    lStack_298 = param_3;
    _objc_retain(param_7);
    puStack_268 = &uStack_d0;
    puStack_260 = &uStack_100;
    puStack_258 = &uStack_130;
    puStack_250 = &uStack_160;
    uStack_290 = param_7;
    lStack_280 = lVar10;
    _objc_retain(lVar10);
    ppuVar9 = &puStack_2b8;
    func_0x000100bc0718(lVar8,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lStack_280);
    _objc_release(uStack_290);
    _objc_release(lStack_298);
    _objc_release(lStack_288);
    _objc_release(lVar10);
    _objc_destroyWeak(auStack_248);
    _objc_destroyWeak(auStack_240);
    _objc_release(lStack_210);
    _objc_release(lStack_218);
    _objc_release(lStack_1d0);
    _objc_release(lStack_1d8);
    __Block_object_dispose(&uStack_1b0,8);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(uStack_168);
    __Block_object_dispose(&uStack_160,8);
    _objc_release(uStack_138);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(uStack_d8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
  }
  _objc_release(lVar8);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_190,8);
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_130,8);
  __Block_object_dispose(&uStack_100,8);
  lVar8 = 8;
  __Block_object_dispose(&uStack_d0);
  __Unwind_Resume();
  _objc_retain(lVar8);
  _objc_retain(ppuVar9);
  if (lVar8 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = 1;
    lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    _objc_retain(ppuVar9);
    uVar4 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined ***)(lVar10 + 0x28) = ppuVar9;
    _objc_release(uVar4);
    _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
  }
  else {
    lVar10 = *(long *)(*(long *)(param_3 + 0x40) + 8);
    _objc_retain(lVar8);
    uVar4 = *(undefined8 *)(lVar10 + 0x28);
    *(long *)(lVar10 + 0x28) = lVar8;
    _objc_release(uVar4);
    lVar10 = lVar8;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    if (lVar7 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = 1;
      lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      _objc_retain(ppuVar9);
      uVar4 = *(undefined8 *)(lVar10 + 0x28);
      *(undefined ***)(lVar10 + 0x28) = ppuVar9;
      _objc_release(uVar4);
    }
    _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
    _objc_release(lVar7);
  }
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 106d3a798; end: 106d3a8b7;  */

void FUN_106d3a798(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_3;
    _objc_release(uVar1);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar1);
    lVar3 = param_2;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar2 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = param_3;
      _objc_release(uVar1);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d3a8b8; end: 106d3a94b;  */

void FUN_106d3a8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c1511c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c0c5d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d3a94c; end: 106d3adbf;  */

void FUN_106d3a94c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined **unaff_x25;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  ppuVar6 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126cdc70;
  if (lVar1 != 0) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),0,0,0,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
    }
    else {
      unaff_x25 = &PTR_PTR_1126cd000;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c120460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar3 == (undefined *)0x0) {
        uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_60 = &PTR____CFConstantStringClassReference_110e84a18;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0,puVar5);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        func_0x00010c1d0640();
        func_0x00010c1d0640(puVar5);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0ef4a0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0efc0();
        _objc_release(uVar2);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar4);
        func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x60));
        puVar4 = PTR_PTR_1126cdc70;
        if (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28) != 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c241220(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0f640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x68));
          _objc_initWeak(auStack_70,lVar1);
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0xc2000000;
          pcStack_90 = FUN_106d3adc0;
          puStack_88 = &UNK_110977638;
          _objc_copyWeak(auStack_78,auStack_70);
          _objc_retain(puVar4);
          puStack_80 = puVar4;
          _objc_retainBlock(&puStack_a0);
          func_0x00010c1d0640(puVar5);
          _objc_release(ppuVar6);
          _objc_release(puStack_80);
          _objc_destroyWeak(auStack_78);
          _objc_destroyWeak(auStack_70);
          _objc_release(puVar4);
          unaff_x25 = &puStack_a0;
        }
        lVar8 = lVar1;
        func_0x00010bdd7ba0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar5);
        _objc_release(lVar8);
        lVar8 = lVar1;
        func_0x00010be0dd00(lVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126c99e0;
        func_0x00010c281320(PTR_PTR_1126c99e0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar4);
        _objc_release(lVar8);
        FUN_106d381b4(puVar5,*(undefined8 *)(param_1 + 0x38));
        lVar8 = *(long *)(param_1 + 0x30);
        puVar4 = puVar5;
        func_0x00010bf51e00();
        (**(code **)(lVar8 + 0x10))(lVar8,puVar4,1,0,0);
        _objc_release(puVar4);
      }
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  lVar1 = lVar1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010bdd12a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 106d3adc0; end: 106d3ae27;  */

void FUN_106d3adc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd12a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106d3ae28; end: 106d3af67;  */

void FUN_106d3ae28(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 106d3af68; end: 106d3b9f3; -[SCGalleryOperaMediaManager _loadGalleryVideoSnap:shouldShowSoundPill:snapDetail:missingVideoTrackRetryCount:completion:] */

void FUN_106d3af68(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined *puStack_748;
  undefined8 uStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  code *pcStack_6e8;
  undefined *puStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_628;
  undefined **ppuStack_620;
  long lStack_618;
  undefined *puStack_558;
  undefined8 uStack_550;
  code *pcStack_548;
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined1 auStack_4b0 [8];
  undefined8 uStack_4a8;
  undefined1 uStack_4a0;
  undefined1 auStack_498 [8];
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  long lStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  code *pcStack_448;
  undefined *puStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar17 = param_7;
  _objc_retain();
  _dispatch_group_create();
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c06cde0(uVar10);
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0c978;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f0bc38;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9028;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9040;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_7 + 0x10))(param_7,puVar4,1,0,0);
  _objc_release(puVar4);
  _dispatch_group_enter(lVar17);
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_106d350dc;
  uStack_b0 = 0x106d350ec;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_106d350dc;
  uStack_e0 = 0x106d350ec;
  uStack_d8 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3810000000;
  pcStack_120 = "";
  uStack_110 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar21 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_106d350dc;
  uStack_148 = 0x106d350ec;
  uStack_140 = 0;
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x3032000000;
  pcStack_180 = FUN_106d350dc;
  uStack_178 = 0x106d350ec;
  uStack_170 = 0;
  puStack_1c0 = &uStack_1c8;
  uStack_1c8 = 0;
  uStack_1b8 = 0x3032000000;
  pcStack_1b0 = FUN_106d350dc;
  uStack_1a8 = 0x106d350ec;
  uStack_1a0 = 0;
  puStack_1f0 = &uStack_1f8;
  uStack_1f8 = 0;
  uStack_1e8 = 0x3032000000;
  pcStack_1e0 = FUN_106d350dc;
  uStack_1d8 = 0x106d350ec;
  uStack_1d0 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x3032000000;
  pcStack_210 = FUN_106d350dc;
  uStack_208 = 0x106d350ec;
  uStack_200 = 0;
  puStack_250 = &uStack_258;
  uStack_258 = 0;
  uStack_248 = 0x3032000000;
  pcStack_240 = FUN_106d350dc;
  uStack_238 = 0x106d350ec;
  uStack_230 = 0;
  puStack_280 = &uStack_288;
  uStack_288 = 0;
  uStack_278 = 0x3032000000;
  pcStack_270 = FUN_106d350dc;
  uStack_268 = 0x106d350ec;
  uStack_260 = 0;
  puStack_2b0 = &uStack_2b8;
  uStack_2b8 = 0;
  uStack_2a8 = 0x3032000000;
  pcStack_2a0 = FUN_106d350dc;
  uStack_298 = 0x106d350ec;
  uStack_290 = 0;
  puStack_2e0 = &uStack_2e8;
  uStack_2e8 = 0;
  uStack_2d8 = 0x3032000000;
  pcStack_2d0 = FUN_106d350dc;
  uStack_2c8 = 0x106d350ec;
  uStack_2c0 = 0;
  puStack_300 = &uStack_308;
  uStack_308 = 0;
  uStack_2f8 = 0x2020000000;
  uStack_2f0 = 0;
  puStack_320 = &uStack_328;
  uStack_328 = 0;
  uStack_318 = 0x2020000000;
  uStack_310 = 0;
  uStack_118 = uVar21;
  func_0x00010be20780(param_1);
  uVar3 = param_3;
  func_0x000107ffa190(param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000108d4ad38();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_3d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3c8 = 0xc2000000;
  pcStack_3c0 = FUN_106d3b9f4;
  puStack_3b8 = &UNK_110977758;
  puStack_380 = &uStack_308;
  puStack_378 = &uStack_258;
  _objc_retain(param_3);
  uStack_3b0 = param_3;
  _objc_retain(lVar17);
  puStack_370 = &uStack_d0;
  puStack_368 = &uStack_328;
  lStack_3a8 = lVar17;
  lStack_3a0 = param_1;
  uStack_330 = param_6;
  _objc_retain(uVar10);
  uStack_398 = uVar10;
  _objc_retain(param_5);
  uStack_390 = param_5;
  _objc_retain(uVar3);
  puStack_360 = &uStack_228;
  puStack_358 = &uStack_2e8;
  puStack_350 = &uStack_2b8;
  puStack_348 = &uStack_1c8;
  puStack_340 = &uStack_288;
  puStack_338 = &uStack_1f8;
  uStack_388 = uVar3;
  func_0x00010c1346c0(uVar5);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _dispatch_group_enter(lVar17);
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_418 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_410 = 0xc2000000;
  pcStack_408 = FUN_106d3ca80;
  puStack_400 = &UNK_110977788;
  _objc_retain(param_3);
  puStack_3e0 = &uStack_168;
  uStack_3f8 = param_3;
  _objc_retain(param_5);
  puStack_3d8 = &uStack_198;
  uStack_3f0 = param_5;
  _objc_retain(lVar17);
  lStack_3e8 = lVar17;
  func_0x00010c136020(uVar6);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c13a8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010c06cde0();
  if ((int)uVar6 != 0) {
    _dispatch_group_enter(lVar17);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_458 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_450 = 0xc2000000;
    pcStack_448 = FUN_106d3cc04;
    puStack_440 = &UNK_1109777b8;
    puStack_428 = &uStack_100;
    puStack_420 = &uStack_138;
    _objc_retain(param_3);
    uStack_438 = param_3;
    _objc_retain(lVar17);
    lVar8 = param_1;
    lStack_430 = lVar17;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135240(uVar7);
    _objc_release(lVar8);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(lStack_430);
    _objc_release(uStack_438);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c13a8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar6;
  func_0x00010c06cde0();
  if (((int)uVar7 != 0) && (puStack_f8[5] == 0)) {
    _dispatch_group_enter(lVar17);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puStack_490 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_488 = 0xc2000000;
    uStack_480 = 0x106d3cd04;
    puStack_478 = &UNK_1109777e8;
    puStack_468 = &uStack_100;
    puStack_460 = &uStack_138;
    _objc_retain(lVar17);
    lStack_470 = lVar17;
    func_0x00010c135260(uVar9);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(lStack_470);
  }
  _objc_initWeak(auStack_498,param_1);
  puStack_558 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_550 = 0xc2000000;
  pcStack_548 = FUN_106d3cda4;
  puStack_540 = &UNK_110977818;
  _objc_copyWeak(auStack_4b0,auStack_498);
  puStack_518 = &uStack_328;
  puStack_510 = &uStack_258;
  puStack_520 = &uStack_308;
  puStack_508 = &uStack_288;
  puStack_500 = &uStack_d0;
  puStack_4f8 = &uStack_100;
  puStack_4f0 = &uStack_138;
  puStack_4e8 = &uStack_2b8;
  puStack_4e0 = &uStack_1c8;
  puStack_4d8 = &uStack_198;
  puStack_4d0 = &uStack_168;
  puStack_4c8 = &uStack_1f8;
  puStack_4c0 = &uStack_228;
  puStack_4b8 = &uStack_2e8;
  uStack_538 = param_3;
  uStack_530 = param_5;
  lStack_528 = param_7;
  uStack_4a8 = param_6;
  uStack_4a0 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  puVar4 = PTR___dispatch_main_q_11034be20;
  ppuVar15 = &puStack_558;
  func_0x000100bc0718(lVar17,PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(uStack_530);
  _objc_release(lStack_528);
  _objc_release(uStack_538);
  _objc_destroyWeak(auStack_4b0);
  _objc_destroyWeak(auStack_498);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lStack_3e8);
  _objc_release(uStack_3f0);
  _objc_release(uStack_3f8);
  _objc_release(uStack_388);
  _objc_release(uStack_390);
  _objc_release(uStack_398);
  _objc_release(lStack_3a8);
  _objc_release(uStack_3b0);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_328,8);
  __Block_object_dispose(&uStack_308,8);
  __Block_object_dispose(&uStack_2e8,8);
  _objc_release(uStack_2c0);
  __Block_object_dispose(&uStack_2b8,8);
  _objc_release(uStack_290);
  __Block_object_dispose(&uStack_288,8);
  _objc_release(uStack_260);
  __Block_object_dispose(&uStack_258,8);
  _objc_release(uStack_230);
  __Block_object_dispose(&uStack_228,8);
  _objc_release(uStack_200);
  __Block_object_dispose(&uStack_1f8,8);
  _objc_release(uStack_1d0);
  __Block_object_dispose(&uStack_1c8,8);
  _objc_release(uStack_1a0);
  __Block_object_dispose(&uStack_198,8);
  _objc_release(uStack_170);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_328,8);
  __Block_object_dispose(&uStack_308,8);
  __Block_object_dispose(&uStack_2e8,8);
  __Block_object_dispose(&uStack_2b8,8);
  __Block_object_dispose(&uStack_288,8);
  __Block_object_dispose(&uStack_258,8);
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_1f8,8);
  __Block_object_dispose(&uStack_1c8,8);
  __Block_object_dispose(&uStack_198,8);
  __Block_object_dispose(&uStack_168,8);
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_100,8);
  lVar14 = 8;
  __Block_object_dispose(&uStack_d0);
  __Unwind_Resume();
  lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = lVar14;
  _objc_retain(lVar14);
  _objc_retain(ppuVar15);
  if (lVar14 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(lVar17 + 0x50) + 8) + 0x18) = 1;
    lVar18 = *(long *)(*(long *)(lVar17 + 0x58) + 8);
    _objc_retain(ppuVar15);
    uVar10 = *(undefined8 *)(lVar18 + 0x28);
    *(undefined ***)(lVar18 + 0x28) = ppuVar15;
    _objc_release(uVar10);
    _dispatch_group_leave(*(undefined8 *)(lVar17 + 0x28));
    goto LAB_106d3c028;
  }
  lVar18 = *(long *)(*(long *)(lVar17 + 0x60) + 8);
  _objc_retain(lVar14);
  uVar10 = *(undefined8 *)(lVar18 + 0x28);
  *(long *)(lVar18 + 0x28) = lVar14;
  _objc_release(uVar10);
  if (*(long *)(*(long *)(*(long *)(lVar17 + 0x60) + 8) + 0x28) == 0) {
    puVar4 = PTR_PTR_1126b2438;
    func_0x00010c0da540(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)(*(long *)(lVar17 + 0x30) + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(puVar11);
  }
  lVar18 = lVar14;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar18;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  if (lVar16 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(lVar17 + 0x50) + 8) + 0x18) = 1;
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (ppuVar15 == (undefined **)0x0) {
      uStack_628 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_620 = &PTR____CFConstantStringClassReference_110e84a78;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      ppuVar15 = ppuVar12;
    }
    if (2 < *(ulong *)(lVar17 + 0xa0)) {
      uVar1 = (undefined1)*(undefined8 *)(lVar17 + 0x30);
      func_0x00010bdddec0();
      *(undefined1 *)(*(long *)(*(long *)(lVar17 + 0x68) + 8) + 0x18) = uVar1;
      if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x68) + 8) + 0x18) & 1) != 0) {
        uVar10 = *(undefined8 *)(lVar17 + 0x38);
        func_0x00010bfad280(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) {
          lVar18 = *(long *)(*(long *)(lVar17 + 0x58) + 8);
          _objc_retain(ppuVar15);
          uVar3 = *(undefined8 *)(lVar18 + 0x28);
          *(undefined ***)(lVar18 + 0x28) = ppuVar15;
          _objc_release(uVar3);
        }
        puVar11 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        _objc_alloc();
        func_0x00010c0082a0();
        lVar18 = *(long *)(*(long *)(lVar17 + 0x60) + 8);
        uVar3 = *(undefined8 *)(lVar18 + 0x28);
        *(undefined **)(lVar18 + 0x28) = puVar11;
        _objc_release(uVar3);
        if (*(long *)(*(long *)(*(long *)(lVar17 + 0x60) + 8) + 0x28) == 0) {
          lVar18 = *(long *)(*(long *)(lVar17 + 0x58) + 8);
          _objc_retain(ppuVar15);
          uVar3 = *(undefined8 *)(lVar18 + 0x28);
          *(undefined ***)(lVar18 + 0x28) = ppuVar15;
          _objc_release(uVar3);
          puVar11 = PTR_PTR_1126b2438;
          func_0x00010c0da540(PTR_PTR_1126b2438);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar11;
          func_0x00010c2ac460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          uVar6 = *(undefined8 *)(*(long *)(lVar17 + 0x30) + 0x170);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c0c8b00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec2a0();
          _objc_release(uVar3);
          _objc_release(uVar6);
          _objc_release(puVar13);
        }
        _objc_release(puVar4);
        _objc_release(uVar10);
        uVar10 = func_0x00010c0d5d20(0);
        uStack_678 = 0;
        uStack_680 = 0;
        uStack_668 = 0;
        uStack_670 = 0;
        uStack_688 = 0;
        uStack_690 = 0;
        goto LAB_106d3bb5c;
      }
      lVar18 = *(long *)(*(long *)(lVar17 + 0x58) + 8);
      _objc_retain(ppuVar15);
      uVar10 = *(undefined8 *)(lVar18 + 0x28);
      *(undefined ***)(lVar18 + 0x28) = ppuVar15;
      _objc_release(uVar10);
    }
    _dispatch_group_leave(*(undefined8 *)(lVar17 + 0x28));
  }
  else {
    uVar10 = func_0x00010c0d5d20(lVar16);
    func_0x00010c106f40(&uStack_690,lVar16);
LAB_106d3bb5c:
    uStack_658 = uStack_688;
    uStack_660 = uStack_690;
    uStack_648 = uStack_678;
    uStack_650 = uStack_680;
    uStack_638 = uStack_668;
    uStack_640 = uStack_670;
    uVar3 = 0;
    _CGRectApplyAffineTransform(0,&uStack_660);
    iVar2 = (int)*(undefined8 *)(lVar17 + 0x20);
    func_0x000109024080();
    if (iVar2 != 0) {
      uVar10 = func_0x000107dc323c();
      uVar21 = uVar3;
    }
    _dispatch_group_enter(*(undefined8 *)(lVar17 + 0x28));
    puVar11 = PTR_PTR_1126bf6d0;
    _objc_alloc();
    uVar3 = *(undefined8 *)(lVar17 + 0x40);
    func_0x00010c0ef4a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_6f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_6f0 = 0xc2000000;
    pcStack_6e8 = FUN_106d3c07c;
    puStack_6e0 = &UNK_1109776f8;
    uStack_6b0 = *(undefined8 *)(lVar17 + 0x70);
    uVar6 = *(undefined8 *)(lVar17 + 0x20);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(lVar17 + 0x40);
    uStack_6d8 = uVar6;
    _objc_retain(uVar5);
    uStack_6c8 = *(undefined8 *)(lVar17 + 0x30);
    uStack_6d0 = uVar5;
    _objc_retain(lVar14);
    uStack_6a8 = *(undefined8 *)(lVar17 + 0x78);
    uStack_6a0 = *(undefined8 *)(lVar17 + 0x80);
    uVar6 = *(undefined8 *)(lVar17 + 0x28);
    lStack_6c0 = lVar14;
    _objc_retain(uVar6);
    uStack_698 = *(undefined8 *)(lVar17 + 0x60);
    uStack_6b8 = uVar6;
    func_0x00010c0328a0(uVar10,uVar21);
    _objc_release(uVar3);
    lVar18 = *(long *)(lVar17 + 0x30) + 0x130;
    _objc_loadWeakRetained(lVar18);
    func_0x00010bf9d620();
    _objc_release(lVar18);
    iVar2 = (int)*(undefined8 *)(lVar17 + 0x20);
    func_0x000109023a28();
    uVar10 = *(undefined8 *)(lVar17 + 0x28);
    if (iVar2 == 0) {
      _dispatch_group_leave(uVar10);
    }
    else {
      lVar18 = *(long *)(*(long *)(lVar17 + 0x30) + 0x28);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_748 = puVar4;
      uStack_740 = 0xc2000000;
      pcStack_738 = FUN_106d3c69c;
      puStack_730 = &UNK_110977728;
      uStack_718 = *(undefined8 *)(lVar17 + 0x88);
      uStack_728 = *(undefined8 *)(lVar17 + 0x30);
      uVar3 = *(undefined8 *)(lVar17 + 0x20);
      _objc_retain(uVar3);
      uStack_710 = *(undefined8 *)(lVar17 + 0x60);
      uStack_708 = *(undefined8 *)(lVar17 + 0x90);
      uStack_700 = *(undefined8 *)(lVar17 + 0x98);
      lVar8 = lVar18;
      uStack_720 = uVar3;
      func_0x000104c62d88(uVar10,lVar18,&puStack_748);
      _objc_release(lVar18);
      _dispatch_group_leave(*(undefined8 *)(lVar17 + 0x28));
      _objc_release(uStack_720);
    }
    _objc_release(puVar11);
    _objc_release(uStack_6b8);
    _objc_release(lStack_6c0);
    _objc_release(uStack_6d0);
    _objc_release(uStack_6d8);
  }
  _objc_release(lVar16);
LAB_106d3c028:
  _objc_release(ppuVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_618) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  lVar17 = *(long *)(*(long *)(lVar14 + 0x48) + 8);
  _objc_retain(lVar8);
  uVar10 = *(undefined8 *)(lVar17 + 0x28);
  *(long *)(lVar17 + 0x28) = lVar8;
  _objc_release(uVar10);
  puVar4 = PTR_PTR_1126bfb98;
  uVar10 = *(undefined8 *)(lVar14 + 0x28);
  func_0x00010c0ef4a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230960();
  _objc_release(uVar10);
  puVar11 = PTR_PTR_1126bfb98;
  if ((int)puVar4 == 0) {
    uVar10 = *(undefined8 *)(lVar14 + 0x28);
    func_0x00010c0ef4a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2308c0();
    _objc_release(uVar10);
    if ((int)puVar11 != 0) {
      uVar6 = *(undefined8 *)(lVar14 + 0x28);
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010bf10220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      FUN_106d2f8b8();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = *(long *)(*(long *)(lVar14 + 0x58) + 8);
      uVar5 = *(undefined8 *)(lVar17 + 0x28);
      *(undefined8 *)(lVar17 + 0x28) = uVar3;
      _objc_release(uVar5);
      _objc_release(uVar10);
      _objc_release(uVar6);
    }
    lVar18 = *(long *)(lVar14 + 0x28);
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar18;
    func_0x00010bf20900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar18);
    if (lVar17 != 0) {
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x60) + 8) + 0x28);
      func_0x00010bf51e00(uVar6);
      uVar5 = *(undefined8 *)(lVar14 + 0x28);
      func_0x00010c0ef4a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010bf20900();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010c0e1c40();
      _objc_retainAutoreleasedReturnValue();
      fVar19 = (float)func_0x00010bfb2c80();
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(uVar5);
      lVar17 = *(long *)(*(long *)(lVar14 + 0x30) + 200);
      func_0x00010bf209a0((double)fVar19);
      _objc_retainAutoreleasedReturnValue();
      iVar2 = (int)*(undefined8 *)(*(long *)(lVar14 + 0x30) + 0xc0);
      func_0x000108ec1714();
      if ((iVar2 == 0) || (lVar17 != 0)) {
        lVar18 = lVar17;
        func_0x00010c0d9500();
        lVar16 = *(long *)(*(long *)(lVar14 + 0x60) + 8);
        uVar10 = *(undefined8 *)(lVar16 + 0x28);
        *(long *)(lVar16 + 0x28) = lVar18;
      }
      else {
        lVar18 = *(long *)(*(long *)(lVar14 + 0x60) + 8);
        uVar3 = *(undefined8 *)(lVar18 + 0x28);
        _objc_retain(uVar3);
        uVar10 = *(undefined8 *)(lVar18 + 0x28);
        *(undefined8 *)(lVar18 + 0x28) = uVar3;
      }
      _objc_release(uVar10);
      if (*(long *)(*(long *)(*(long *)(lVar14 + 0x60) + 8) + 0x28) == 0) {
        puVar4 = PTR_PTR_1126b2438;
        func_0x00010c0da540(PTR_PTR_1126b2438);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar4;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar3 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x170);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(uVar10);
        _objc_release(uVar3);
        _objc_release(puVar11);
      }
      _objc_release(lVar17);
      _objc_release(uVar6);
    }
    _dispatch_group_leave(*(undefined8 *)(lVar14 + 0x40));
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x28);
    uVar6 = *(undefined8 *)(lVar14 + 0x20);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(lVar14 + 0x38);
    _objc_retain(uVar5);
    auVar20 = *(undefined1 (*) [16])(lVar14 + 0x28);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(lVar14 + 0x28));
    auVar20 = NEON_ext(auVar20,auVar20,8,1);
    uVar10 = *(undefined8 *)(lVar14 + 0x40);
    _objc_retain(uVar10);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar10);
    _objc_release(auVar20._8_8_);
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
  _objc_release(lVar8);
  return;
}



/* Entry: 106d3b9f4; end: 106d3c07b;  */

void FUN_106d3b9f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x18) = 1;
    lVar11 = *(long *)(*(long *)(param_3 + 0x58) + 8);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = param_5;
    _objc_release(uVar3);
    _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
    goto LAB_106d3c028;
  }
  lVar11 = *(long *)(*(long *)(param_3 + 0x60) + 8);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(lVar11 + 0x28);
  *(long *)(lVar11 + 0x28) = param_4;
  _objc_release(uVar3);
  if (*(long *)(*(long *)(*(long *)(param_3 + 0x60) + 8) + 0x28) == 0) {
    puVar4 = PTR_PTR_1126b2438;
    func_0x00010c0da540(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
  lVar11 = param_4;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  if (lVar8 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x18) = 1;
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_5 == (undefined *)0x0) {
      uStack_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e84a78;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      param_5 = puVar4;
    }
    if (2 < *(ulong *)(param_3 + 0xa0)) {
      uVar1 = (undefined1)*(undefined8 *)(param_3 + 0x30);
      func_0x00010bdddec0();
      *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x68) + 8) + 0x18) = uVar1;
      if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x68) + 8) + 0x18) & 1) != 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x38);
        func_0x00010bfad280(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) {
          lVar11 = *(long *)(*(long *)(param_3 + 0x58) + 8);
          _objc_retain(param_5);
          uVar6 = *(undefined8 *)(lVar11 + 0x28);
          *(undefined **)(lVar11 + 0x28) = param_5;
          _objc_release(uVar6);
        }
        puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        _objc_alloc();
        func_0x00010c0082a0();
        lVar11 = *(long *)(*(long *)(param_3 + 0x60) + 8);
        uVar6 = *(undefined8 *)(lVar11 + 0x28);
        *(undefined **)(lVar11 + 0x28) = puVar5;
        _objc_release(uVar6);
        if (*(long *)(*(long *)(*(long *)(param_3 + 0x60) + 8) + 0x28) == 0) {
          lVar11 = *(long *)(*(long *)(param_3 + 0x58) + 8);
          _objc_retain(param_5);
          uVar6 = *(undefined8 *)(lVar11 + 0x28);
          *(undefined **)(lVar11 + 0x28) = param_5;
          _objc_release(uVar6);
          puVar5 = PTR_PTR_1126b2438;
          func_0x00010c0da540(PTR_PTR_1126b2438);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010c2ac460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x170);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar12;
          func_0x00010c0c8b00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec2a0();
          _objc_release(uVar6);
          _objc_release(uVar12);
          _objc_release(puVar7);
        }
        _objc_release(puVar4);
        _objc_release(uVar3);
        uVar3 = func_0x00010c0d5d20(0);
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        goto LAB_106d3bb5c;
      }
      lVar11 = *(long *)(*(long *)(param_3 + 0x58) + 8);
      _objc_retain(param_5);
      uVar3 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined **)(lVar11 + 0x28) = param_5;
      _objc_release(uVar3);
    }
    _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
  }
  else {
    uVar3 = func_0x00010c0d5d20(lVar8);
    func_0x00010c106f40(&uStack_110,lVar8);
LAB_106d3bb5c:
    uStack_d8 = uStack_108;
    uStack_e0 = uStack_110;
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    uVar6 = 0;
    _CGRectApplyAffineTransform(0,&uStack_e0);
    iVar2 = (int)*(undefined8 *)(param_3 + 0x20);
    func_0x000109024080();
    if (iVar2 != 0) {
      uVar3 = func_0x000107dc323c();
      param_2 = uVar6;
    }
    _dispatch_group_enter(*(undefined8 *)(param_3 + 0x28));
    puVar5 = PTR_PTR_1126bf6d0;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c0ef4a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_106d3c07c;
    puStack_160 = &UNK_1109776f8;
    uStack_130 = *(undefined8 *)(param_3 + 0x70);
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_3 + 0x40);
    uStack_158 = uVar12;
    _objc_retain(uVar13);
    uStack_148 = *(undefined8 *)(param_3 + 0x30);
    uStack_150 = uVar13;
    _objc_retain(param_4);
    uStack_128 = *(undefined8 *)(param_3 + 0x78);
    uStack_120 = *(undefined8 *)(param_3 + 0x80);
    uVar12 = *(undefined8 *)(param_3 + 0x28);
    lStack_140 = param_4;
    _objc_retain(uVar12);
    uStack_118 = *(undefined8 *)(param_3 + 0x60);
    uStack_138 = uVar12;
    func_0x00010c0328a0(uVar3,param_2);
    _objc_release(uVar6);
    lVar11 = *(long *)(param_3 + 0x30) + 0x130;
    _objc_loadWeakRetained(lVar11);
    func_0x00010bf9d620();
    _objc_release(lVar11);
    iVar2 = (int)*(undefined8 *)(param_3 + 0x20);
    func_0x000109023a28();
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    if (iVar2 == 0) {
      _dispatch_group_leave(uVar3);
    }
    else {
      lVar11 = *(long *)(*(long *)(param_3 + 0x30) + 0x28);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c8 = puVar4;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_106d3c69c;
      puStack_1b0 = &UNK_110977728;
      uStack_198 = *(undefined8 *)(param_3 + 0x88);
      uStack_1a8 = *(undefined8 *)(param_3 + 0x30);
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      _objc_retain(uVar6);
      uStack_190 = *(undefined8 *)(param_3 + 0x60);
      uStack_188 = *(undefined8 *)(param_3 + 0x90);
      uStack_180 = *(undefined8 *)(param_3 + 0x98);
      lVar9 = lVar11;
      uStack_1a0 = uVar6;
      func_0x000104c62d88(uVar3,lVar11,&puStack_1c8);
      _objc_release(lVar11);
      _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
      _objc_release(uStack_1a0);
    }
    _objc_release(puVar5);
    _objc_release(uStack_138);
    _objc_release(lStack_140);
    _objc_release(uStack_150);
    _objc_release(uStack_158);
  }
  _objc_release(lVar8);
LAB_106d3c028:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  lVar11 = *(long *)(*(long *)(param_4 + 0x48) + 8);
  _objc_retain(lVar9);
  uVar3 = *(undefined8 *)(lVar11 + 0x28);
  *(long *)(lVar11 + 0x28) = lVar9;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126bfb98;
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  func_0x00010c0ef4a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230960();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126bfb98;
  if ((int)puVar4 == 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x28);
    func_0x00010c0ef4a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2308c0();
    _objc_release(uVar3);
    if ((int)puVar5 != 0) {
      uVar12 = *(undefined8 *)(param_4 + 0x28);
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar12;
      func_0x00010bf10220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      FUN_106d2f8b8();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_4 + 0x58) + 8);
      uVar13 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)(lVar11 + 0x28) = uVar6;
      _objc_release(uVar13);
      _objc_release(uVar3);
      _objc_release(uVar12);
    }
    lVar8 = *(long *)(param_4 + 0x28);
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x00010bf20900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x60) + 8) + 0x28);
      func_0x00010bf51e00(uVar12);
      uVar13 = *(undefined8 *)(param_4 + 0x28);
      func_0x00010c0ef4a0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar13;
      func_0x00010bf20900();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0e1c40();
      _objc_retainAutoreleasedReturnValue();
      fVar14 = (float)func_0x00010bfb2c80();
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar13);
      lVar11 = *(long *)(*(long *)(param_4 + 0x30) + 200);
      func_0x00010bf209a0((double)fVar14);
      _objc_retainAutoreleasedReturnValue();
      iVar2 = (int)*(undefined8 *)(*(long *)(param_4 + 0x30) + 0xc0);
      func_0x000108ec1714();
      if ((iVar2 == 0) || (lVar11 != 0)) {
        lVar8 = lVar11;
        func_0x00010c0d9500();
        lVar10 = *(long *)(*(long *)(param_4 + 0x60) + 8);
        uVar3 = *(undefined8 *)(lVar10 + 0x28);
        *(long *)(lVar10 + 0x28) = lVar8;
      }
      else {
        lVar8 = *(long *)(*(long *)(param_4 + 0x60) + 8);
        uVar6 = *(undefined8 *)(lVar8 + 0x28);
        _objc_retain(uVar6);
        uVar3 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar8 + 0x28) = uVar6;
      }
      _objc_release(uVar3);
      if (*(long *)(*(long *)(*(long *)(param_4 + 0x60) + 8) + 0x28) == 0) {
        puVar4 = PTR_PTR_1126b2438;
        func_0x00010c0da540(PTR_PTR_1126b2438);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x30) + 0x170);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(uVar3);
        _objc_release(uVar6);
        _objc_release(puVar5);
      }
      _objc_release(lVar11);
      _objc_release(uVar12);
    }
    _dispatch_group_leave(*(undefined8 *)(param_4 + 0x40));
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x30) + 0x28);
    uVar12 = *(undefined8 *)(param_4 + 0x20);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_4 + 0x38);
    _objc_retain(uVar13);
    auVar15 = *(undefined1 (*) [16])(param_4 + 0x28);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_4 + 0x28));
    auVar15 = NEON_ext(auVar15,auVar15,8,1);
    uVar3 = *(undefined8 *)(param_4 + 0x40);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(uVar3);
    _objc_release(auVar15._8_8_);
    _objc_release(uVar13);
    _objc_release(uVar12);
  }
  _objc_release(lVar9);
  return;
}



/* Entry: 106d3c07c; end: 106d3c443;  */

void FUN_106d3c07c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  _objc_retain(param_2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = param_2;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bfb98;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ef4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230960();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bfb98;
  if ((int)puVar3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0ef4a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2308c0();
    _objc_release(uVar2);
    if ((int)puVar4 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar9;
      func_0x00010bf10220();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      FUN_106d2f8b8();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 8);
      uVar10 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = uVar8;
      _objc_release(uVar10);
      _objc_release(uVar2);
      _objc_release(uVar9);
    }
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf20900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
      func_0x00010bf51e00(uVar9);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0ef4a0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar10;
      func_0x00010bf20900();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c0e1c40();
      _objc_retainAutoreleasedReturnValue();
      fVar11 = (float)func_0x00010bfb2c80();
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_release(uVar10);
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 200);
      func_0x00010bf209a0((double)fVar11);
      _objc_retainAutoreleasedReturnValue();
      iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xc0);
      func_0x000108ec1714();
      if ((iVar1 == 0) || (lVar7 != 0)) {
        lVar5 = lVar7;
        func_0x00010c0d9500();
        lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 8);
        uVar2 = *(undefined8 *)(lVar6 + 0x28);
        *(long *)(lVar6 + 0x28) = lVar5;
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 8);
        uVar8 = *(undefined8 *)(lVar5 + 0x28);
        _objc_retain(uVar8);
        uVar2 = *(undefined8 *)(lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x28) = uVar8;
      }
      _objc_release(uVar2);
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) == 0) {
        puVar3 = PTR_PTR_1126b2438;
        func_0x00010c0da540(PTR_PTR_1126b2438);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar8;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(uVar2);
        _objc_release(uVar8);
        _objc_release(puVar4);
      }
      _objc_release(lVar7);
      _objc_release(uVar9);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar10);
    auVar12 = *(undefined1 (*) [16])(param_1 + 0x28);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x28));
    auVar12 = NEON_ext(auVar12,auVar12,8,1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar8);
    _objc_release(uVar2);
    _objc_release(auVar12._8_8_);
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106d3c444; end: 106d3c617;  */

void FUN_106d3c444(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x158);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106d3c524;
  puStack_70 = &UNK_110977698;
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar6;
  _objc_retain(uVar5);
  uStack_58 = uVar5;
  FUN_106d2f4c0(uVar4,uVar1,uVar2,uVar3,PTR___dispatch_main_q_11034be20,&puStack_88);
  _objc_release(uVar4);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  return;
}



/* Entry: 106d3c618; end: 106d3c69b;  */

void FUN_106d3c618(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 106d3c69c; end: 106d3c8d3;  */

void FUN_106d3c69c(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  func_0x00010bf0b480();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bf9ee60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar9 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar5;
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar1);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xa8);
  func_0x00010c1306e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07c3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
    lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    puVar7 = *(undefined **)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = puVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
  }
  else {
    puVar7 = PTR_PTR_1126bfb80;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
    func_0x00010c1307e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a1a0();
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010bfb2080();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar10 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = puVar6;
    _objc_release(uVar10);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(puVar7 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(puVar7 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(puVar7 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(puVar7 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(puVar7 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(puVar7 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(puVar7 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(puVar7 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  __Block_object_assign(puVar7 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(puVar7 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  return;
}



/* Entry: 106d3c8d4; end: 106d3ca7f;  */

void FUN_106d3c8d4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  return;
}



/* Entry: 106d3ca80; end: 106d3cc03;  */

void FUN_106d3ca80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar6 = param_4;
  func_0x00010c1511c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000107ff7990();
  _objc_release(uVar4);
  if ((int)uVar6 != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000109023974(*(undefined8 *)(param_3 + 0x20));
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c2a5040(uVar2);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfe0640(uVar3);
    uVar6 = uVar4;
    func_0x000107ff7d2c(param_1,param_2,(double)(int)uVar2,(double)(int)uVar3,uVar4,
                        *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x38) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar6;
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
  func_0x00010b5fa7fc();
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_4;
    func_0x00010c0c5d00();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_3 + 0x40) + 8);
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  _objc_release(uVar4);
  if (iVar1 != 0) {
    _objc_release(uVar6);
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d3cc04; end: 106d3cda3;  */

void FUN_106d3cc04(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    lVar3 = param_2;
    func_0x00010bf0ef80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0082a0();
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    if (param_2 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_48,param_2);
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(undefined8 *)(lVar3 + 0x28) = uStack_40;
    *(undefined8 *)(lVar3 + 0x20) = uStack_48;
    *(undefined8 *)(lVar3 + 0x30) = uStack_38;
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  return;
}



/* Entry: 106d3cda4; end: 106d3d6b3;  */

void FUN_106d3cda4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *unaff_x25;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    if ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) & 1) == 0)) {
      if (*(ulong *)(param_1 + 0xb0) < 3) {
        func_0x00010be4d660(lVar4);
        goto LAB_106d3d640;
      }
      lVar5 = *(long *)(param_1 + 0x30);
      lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    }
    else {
      lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
      if (lVar14 == 0) {
        if ((*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28) != 0) &&
           (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) != 0)) {
          lVar14 = *(long *)(param_1 + 0x20);
          func_0x00010b5fa088();
          if (10 < lVar14 - 2U) {
            plVar16 = (long *)(param_1 + 0x58);
            uVar6 = *(undefined8 *)(*(long *)(*plVar16 + 8) + 0x28);
            lVar14 = *(long *)(*(long *)(param_1 + 0x68) + 8);
            uStack_d8 = *(undefined8 *)(lVar14 + 0x28);
            dStack_e0 = *(double *)(lVar14 + 0x20);
            uStack_d0 = *(undefined8 *)(lVar14 + 0x30);
            func_0x000107fb6aa8(uVar6,*(undefined8 *)
                                       (*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28),&dStack_e0)
            ;
            _objc_retainAutoreleasedReturnValue();
            uVar15 = *(undefined8 *)(*(long *)(*plVar16 + 8) + 0x28);
            *(undefined8 *)(*(long *)(*plVar16 + 8) + 0x28) = uVar6;
            _objc_release(uVar15);
            if (*(long *)(*(long *)(*plVar16 + 8) + 0x28) == 0) {
              puVar7 = PTR_PTR_1126b2438;
              func_0x00010c0da540(PTR_PTR_1126b2438);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c2ac460();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              uVar15 = *(undefined8 *)(lVar4 + 0x170);
              func_0x00010c269d40(uVar15);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar15;
              func_0x00010c0c8b00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfec2a0();
              _objc_release(uVar6);
              _objc_release(uVar15);
              _objc_release(puVar8);
            }
            lVar14 = *(long *)(*(long *)(param_1 + 0x70) + 8);
            uVar6 = *(undefined8 *)(lVar14 + 0x28);
            *(undefined8 *)(lVar14 + 0x28) = 0;
            _objc_release(uVar6);
          }
        }
        puVar9 = PTR_PTR_1126cdc70;
        puVar17 = (undefined8 *)(param_1 + 0x20);
        uVar6 = *puVar17;
        func_0x00010c241220(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c120460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        func_0x00010c1d0640(*(undefined8 *)(lVar4 + 0x60));
        uVar15 = *(undefined8 *)(lVar4 + 0x98);
        uVar6 = *puVar17;
        func_0x00010c241220(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(uVar6);
        puVar8 = PTR_PTR_1126bfb98;
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_c0 = &PTR____CFConstantStringClassReference_110f0c298;
        ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0bc38;
        ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9010;
        ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0c578;
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        puStack_a0 = puVar9;
        func_0x00010c0ef4a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137480(puVar8);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126bfb98;
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_a8 = &PTR____CFConstantStringClassReference_110e9e918;
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        puStack_90 = puVar7;
        func_0x00010c0ef4a0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0efc0(puVar10);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_88 = puVar8;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0d3c80();
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(uVar15);
        _objc_release(puVar7);
        _objc_release(uVar6);
        iVar1 = (int)*puVar17;
        func_0x00010c2a5040();
        iVar2 = (int)*puVar17;
        func_0x00010bfe0640();
        iVar3 = (int)*puVar17;
        func_0x000109024080();
        if ((iVar3 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x80) + 8) + 0x28) != 0)) {
          func_0x000107dc323c();
          func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 8) + 0x28));
          uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 8) + 0x28);
          func_0x00010bf5c840();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = *(long *)(*(long *)(param_1 + 0x80) + 8);
          uVar15 = *(undefined8 *)(lVar14 + 0x28);
          *(undefined8 *)(lVar14 + 0x28) = uVar6;
          _objc_release(uVar15);
        }
        uVar12 = *(ulong *)(param_1 + 0x20);
        func_0x000109023714();
        if ((uVar12 & 1) == 0) {
          dStack_f0 = (double)iVar1;
          dStack_e8 = (double)iVar2;
          puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(puVar7);
        }
        lVar14 = *(long *)(param_1 + 0x20);
        func_0x00010b5fa088();
        if ((lVar14 - 2U < 0xb) && (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) != 0)
           ) {
          _objc_initWeak(&dStack_e0,lVar4);
          puVar7 = PTR_PTR_1126cdc70;
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0f640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          func_0x00010c1d0640(*(undefined8 *)(lVar4 + 0x68));
          puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_118 = 0xc2000000;
          pcStack_110 = FUN_106d3d6b4;
          puStack_108 = &UNK_110977638;
          _objc_copyWeak(auStack_f8,&dStack_e0);
          _objc_retain(puVar7);
          ppuVar13 = &puStack_120;
          puStack_100 = puVar7;
          _objc_retainBlock(ppuVar13);
          func_0x00010c1d0640(puVar11);
          _objc_release(ppuVar13);
          _objc_release(puStack_100);
          _objc_destroyWeak(auStack_f8);
          _objc_release(puVar7);
          _objc_destroyWeak(&dStack_e0);
        }
        unaff_x25 = (undefined8 *)(param_1 + 0x20);
        lVar14 = lVar4;
        func_0x00010be0dd00(lVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126c99e0;
        func_0x00010c281320(PTR_PTR_1126c99e0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar11);
        _objc_release(puVar7);
        _objc_release(lVar14);
        lVar14 = lVar4;
        func_0x00010bdd7ba0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar11);
        _objc_release(lVar14);
        lVar14 = lVar4;
        func_0x00010bdd7860(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar11);
        _objc_release(lVar14);
        lVar14 = lVar4;
        func_0x00010bdd75a0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar11);
        _objc_release(lVar14);
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0ef4a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar4;
        func_0x00010be1b180(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar11);
        _objc_release(lVar14);
        _objc_release(uVar6);
        uVar6 = *unaff_x25;
        func_0x000107dc2fa4(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar11);
        _objc_release(uVar6);
        if (*(long *)(lVar4 + 0xd8) != 0) {
          func_0x00010c1d0640(puVar11);
        }
        func_0x00010c1d0640(puVar11);
        func_0x00010c1d0640(puVar11);
        func_0x00010c1d0640(puVar11);
        func_0x00010c1d0640(puVar11);
        func_0x00010be4c980(lVar4);
        _objc_release(puVar11);
        _objc_release(puVar9);
        goto LAB_106d3d640;
      }
      lVar5 = *(long *)(param_1 + 0x30);
    }
    (**(code **)(lVar5 + 0x10))(lVar5,0,0,1,lVar14);
  }
LAB_106d3d640:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(&dStack_e0);
  __Unwind_Resume();
  lVar4 = lVar4 + 0x28;
  _objc_loadWeakRetained(lVar4);
  lVar14 = lVar4;
  func_0x00010bdd12a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar14;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106d3d6b4; end: 106d3d71b;  */

void FUN_106d3d6b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd12a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106d3d71c; end: 106d3d923;  */

void FUN_106d3d71c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
  __Block_object_assign(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0xa8,param_2 + 0xa8);
  return;
}



/* Entry: 106d3d924; end: 106d3da63; -[SCGalleryOperaMediaManager _musicAssetProviderForSnap:] */

void FUN_106d3d924(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar4 = &puStack_80;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar3 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c06cde0();
    if ((int)uVar1 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106d3da64;
      puStack_68 = &UNK_110977848;
      _objc_copyWeak(auStack_50,auStack_48);
      lStack_60 = lVar3;
      _objc_retain(param_3);
      lStack_58 = param_3;
      _objc_retainBlock(&puStack_80);
      _objc_release(lStack_58);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106d3da64; end: 106d3dbd7;  */

void FUN_106d3da64(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_106d3dbb0;
  }
  lVar2 = lVar1;
  func_0x00010be61820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    lVar3 = lVar2;
    func_0x00010bf0ef80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0082a0(puVar5);
    _objc_release(lVar3);
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x28));
    if (SUB84(param_1,0) <= 0.0) {
      func_0x00010bfe9640(PTR_PTR_1126bfd68);
      if (lVar2 == 0) goto LAB_106d3db6c;
LAB_106d3db38:
      func_0x00010bf0ffa0(&uStack_68,lVar2);
    }
    else {
      func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x28));
      param_1 = (double)SUB84(param_1,0);
      if (lVar2 != 0) goto LAB_106d3db38;
LAB_106d3db6c:
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    _CMTimeMakeWithSeconds(auStack_80,param_1,600);
    puVar6 = puVar5;
    func_0x000107fb6940(puVar5,&uStack_68,auStack_80);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
LAB_106d3dbb0:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d3dbd8; end: 106d3ddcb; -[SCGalleryOperaMediaManager _musicSelectionForSnap:] */

void FUN_106d3dbd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c06cde0();
    if ((int)uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      pcStack_58 = FUN_106d350dc;
      uStack_50 = 0x106d350ec;
      uStack_48 = 0;
      puStack_98 = &uStack_a0;
      uStack_a0 = 0;
      uStack_90 = 0x3032000000;
      pcStack_88 = FUN_106d350dc;
      uStack_80 = 0x106d350ec;
      uStack_78 = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135240(uVar1);
      _objc_release(param_1);
      _objc_release(lVar3);
      _objc_release(uVar1);
      lVar3 = puStack_68[5];
      if (lVar3 != 0) {
        _objc_retain(lVar3);
      }
      __Block_object_dispose(&uStack_a0,8);
      _objc_release(uStack_78);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uStack_48);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106d3ddcc; end: 106d3de3f;  */

void FUN_106d3ddcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d3de40; end: 106d3dfe7; -[SCGalleryOperaMediaManager _asyncMusicSelectionForSnap:completion:] */

void FUN_106d3de40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13a8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c06cde0();
  if ((uVar1 & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135240(uVar3);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d3dfe8; end: 106d3dffb;  */

void FUN_106d3dfe8(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106d3dff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106d3dffc; end: 106d3e41f; -[SCGalleryOperaMediaManager _loadSnapDocSnap:shouldShowSoundPill:isFromMiniCarousel:snapDoc:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d3dffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x00010bebca00();
  puVar6 = PTR_PTR_1126cdc70;
  if ((int)lVar1 == 0) {
    puVar2 = param_6;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    _objc_retain(param_3);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010c0f7fc0(uVar7);
    func_0x00010be4c980(param_1);
    func_0x00010be4d600(param_1);
    lVar3 = *(long *)(param_1 + 0xe0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0f1ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0f1980();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0d3c80();
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
    if (lVar5 == 0) {
      (**(code **)(param_9 + 0x10))(param_9,0,0,0,0);
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      func_0x00010c1d0640(lVar5);
      func_0x00010c1d0640(lVar5);
      func_0x00010beb3460();
      if ((int)param_1 != 0) {
        puVar6 = PTR_PTR_1126c99e0;
        func_0x00010c233ac0(PTR_PTR_1126c99e0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar5);
        _objc_release(puVar6);
      }
    }
    func_0x00010c1d0640(lVar5);
    lVar1 = lVar5;
    func_0x00010bf51e00(lVar5);
    (**(code **)(param_9 + 0x10))(param_9,lVar1,1,0,0);
    _objc_release(lVar1);
    _objc_release(lVar5);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126ba158;
    func_0x00010bf3efe0(PTR_PTR_1126ba158);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ce20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,puVar6,1,0,0);
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 106d3e420; end: 106d3e507; -[SCGalleryOperaMediaManager _globalOverlayForSnapDoc:] */

void FUN_106d3e420(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126b0018;
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047840(puVar1,param_2,uVar2,param_3);
    _objc_release(param_3);
    _objc_release(uVar2);
    lStack_38 = 0;
    puVar3 = puVar1;
    func_0x00010c13e8e0(puVar1,param_2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    if ((lStack_38 == 0) && (puVar3 != (undefined *)0x0)) {
      puVar4 = PTR_PTR_1126bcdd8;
      _objc_alloc(PTR_PTR_1126bcdd8);
      func_0x00010c0206e0();
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d3e508; end: 106d3e6cf; -[SCGalleryOperaMediaManager _generateGLVideoPagePropertiesFromSnap:snapOverlay:] */

void FUN_106d3e508(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  puVar4 = &uStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = param_3;
  func_0x000107dc2f48();
  puVar1 = PTR_PTR_1126bfb98;
  if ((int)lVar8 == 0) {
    func_0x00010be20780(param_1,param_2,param_3);
    func_0x00010c29f720(&uStack_b0,puVar1,param_2,param_4,param_3);
  }
  else {
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f0c438;
  func_0x00010c100560(PTR_PTR_1126bfb98,param_2,param_4);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f0c5f8;
  puVar2 = PTR_PTR_1126bfb98;
  puStack_60 = puVar1;
  func_0x00010c07cac0(PTR_PTR_1126bfb98,param_2,param_4);
  func_0x00010c0df6e0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f0c618;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  puStack_58 = puVar3;
  _NSStringFromCGAffineTransform();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_60;
  pppuVar7 = &ppuStack_78;
  lVar8 = 3;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = (undefined1 *)puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    _objc_retain(pppuVar7);
    _objc_retain(lVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cdc70;
    if (pppuVar7 != (undefined ***)0x0) {
      ppuVar5 = ppuVar6;
      func_0x00010c241220(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0f900(puVar1,param_2,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      func_0x00010c1d0640(puVar3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f0c5b8);
      func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x80),param_2,pppuVar7,puVar1);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126cdc70;
    if (lVar8 != 0) {
      ppuVar5 = ppuVar6;
      func_0x00010c241220(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13ffa0(puVar1,param_2,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      func_0x00010c1d0640(puVar3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f0c5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x88),param_2,lVar8,puVar1);
      _objc_release(puVar1);
    }
    puVar2 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
    _objc_release(lVar8);
    _objc_release(pppuVar7);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d3e6d0; end: 106d3e84b; -[SCGalleryOperaMediaManager _cacheAudioMixAndGeneratePagePropertiesForSnap:audioProcessorMix:reverseAudioData:] */

void FUN_106d3e6d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cdc70;
  if (param_4 != 0) {
    uVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0f900(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0c5b8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80),param_2,param_4,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126cdc70;
  if (param_5 != 0) {
    uVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13ffa0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0c5d8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88),param_2,param_5,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d3e84c; end: 106d3e9c7; -[SCGalleryOperaMediaManager _cacheOverlayAndGeneratePagePropertiesForSnap:screenOverlayImage:mediaOverlayImage:] */

void FUN_106d3e84c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cdc70;
  if (param_4 != 0) {
    uVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1511e0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0c098);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,param_4,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126cdc70;
  if (param_5 != 0) {
    uVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5d20(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0c0d8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,param_5,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d3e9c8; end: 106d3eba3; -[SCGalleryOperaMediaManager _cacheGLCommandsAndGeneratePagePropertiesForSnap:midOutputGLCommand:outputGLCommands:] */

void FUN_106d3e9c8(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cdc70;
  if (param_4 != 0) {
    puVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cd240(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0c6f8);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,puVar4,puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126cdc70;
  if (param_5 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eed60(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0c718);
    puVar2 = param_5;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,param_5,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(puVar2);
  func_0x00010c0e00e0(uVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010c0e00e0(uVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar5);
  func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x38),param_2,puVar2);
  uVar5 = *(undefined8 *)(param_3 + 0xe8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d940();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106d3eba4; end: 106d3ec53; -[SCGalleryOperaMediaManager _cancelPendingGallerySnapRequestsIfNecessary:] */

void FUN_106d3eba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d940();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d3ec54; end: 106d3ec8b; -[SCGalleryOperaMediaManager _cancelAllPendingGallerySnapRequests] */

/* WARNING: Possible PIC construction at 0x000106d3ec70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d3ec74) */

void FUN_106d3ec54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_enumerateKeysAndObjectsUsingBloc_1125c38e0,
             &PTR___NSConcreteGlobalBlock_1109778c8);
  return;
}



/* Entry: 106d3ec8c; end: 106d3ec9b;  */

void FUN_106d3ec8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106d3ec9c; end: 106d3f0f3; -[SCGalleryOperaMediaManager _removeExistingLoadedGallerySnapMedias:] */

void FUN_106d3ec9c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long unaff_x26;
  undefined1 auStack_3f0 [8];
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined1 uStack_3df;
  undefined1 uStack_3de;
  undefined1 auStack_3d8 [8];
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_328 [128];
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 **ppuStack_270;
  code *pcStack_268;
  undefined **ppuStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010c1201c0(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010c120460(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010bf0f640(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010c1511e0(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010c0c5d20(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010bfb12a0(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010c09cbe0(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010c1304c0(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010c0eacc0(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_140 = param_3;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar21;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  lVar3 = *(long *)(param_1 + 0x58);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar18);
  puVar11 = auStack_e8;
  lVar3 = lVar18;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar20 = *plStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != lVar20) {
          _objc_enumerationMutation(lVar18);
        }
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar3 != unaff_x26);
      puVar11 = auStack_e8;
      lVar3 = lVar18;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar18);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puVar21 = PTR_PTR_1126cdc70;
  func_0x00010c0cd240(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar21);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puVar21 = PTR_PTR_1126cdc70;
  func_0x00010c0eed60(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar21);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  puVar21 = PTR_PTR_1126cdc70;
  func_0x00010bf0f900(PTR_PTR_1126cdc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
  _objc_release(puVar21);
  puVar17 = *(undefined **)(param_1 + 0x88);
  puVar21 = PTR_PTR_1126cdc70;
  func_0x00010c13ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(puVar17);
  _objc_release(puVar21);
  puVar7 = param_3;
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x98));
  _objc_release(lVar18);
  _objc_release(puVar2);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_188 = &PTR_PTR_1126cd000;
  pcStack_148 = FUN_106d3f0f4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x26;
  puStack_180 = puVar21;
  puStack_178 = puVar17;
  lStack_170 = lVar18;
  puStack_168 = puVar2;
  lStack_160 = param_1;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar11);
  _objc_initWeak(auStack_1b0,puVar4);
  uVar1 = *(undefined8 *)(puVar4 + 0x120);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_106d3f438;
  puStack_1d0 = &UNK_110977458;
  _objc_copyWeak(auStack_1b8,auStack_1b0);
  _objc_retain(puVar7);
  puStack_1c8 = puVar7;
  _objc_retain(puVar11);
  uStack_200 = 0;
  uVar14 = 1;
  uVar15 = 1;
  puVar16 = PTR___dispatch_main_q_11034be20;
  ppuStack_1f8 = &puStack_1e8;
  puStack_1c0 = puVar11;
  func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f0c978;
  ppuStack_1a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9028;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  (**(code **)(puVar11 + 0x10))(puVar11,puVar2,1,0,0);
  _objc_release(puVar2);
  if (*(long *)(puVar4 + 0x90) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(puVar4 + 0x90);
    *(undefined **)(puVar4 + 0x90) = puVar2;
    _objc_release(uVar1);
  }
  puVar5 = puVar7;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    lVar18 = *(long *)(puVar4 + 0x90);
    puVar2 = puVar7;
    func_0x00010c0c5180(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined *)(ulong)(lVar18 == 0);
    _objc_release();
    _objc_release(puVar2);
    if (lVar18 == 0) {
      uVar6 = *(undefined8 *)(puVar4 + 0xd0);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bf4c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      func_0x00010bef9660(uVar1);
      puVar21 = *(undefined **)(puVar4 + 0x90);
      puVar17 = puVar7;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar21);
      _objc_release(puVar17);
      _objc_release(uVar1);
    }
    puVar2 = puVar7;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee0700(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puStack_1c0);
  _objc_release(puStack_1c8);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_1b0);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_1b0);
  puVar5 = puVar7;
  __Unwind_Resume();
  pcStack_208 = FUN_106d3f438;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_240 = puVar21;
  puStack_238 = puVar17;
  puStack_230 = puVar2;
  puStack_228 = puVar4;
  puStack_220 = puVar11;
  puStack_218 = puVar7;
  ppuStack_210 = &puStack_150;
  _objc_retain(puVar8);
  puVar4 = puVar5 + 0x30;
  _objc_loadWeakRetained();
  puVar7 = PTR_PTR_1126cdc70;
  if (puVar4 != (undefined *)0x0) {
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(*(long *)(puVar5 + 0x28) + 0x10))(*(long *)(puVar5 + 0x28),0,0,0,0);
    }
    else {
      uVar1 = *(undefined8 *)(puVar5 + 0x20);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09cbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      ppuStack_258 = &PTR____CFConstantStringClassReference_110f0c898;
      puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_250 = puVar7;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar8;
      func_0x000108544668(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(puVar4 + 0x58));
      _objc_release(puVar21);
      (**(code **)(*(long *)(puVar5 + 0x28) + 0x10))(*(long *)(puVar5 + 0x28),puVar17,1,0,0);
      _objc_release(puVar17);
      _objc_release(puVar7);
      puVar2 = puVar7;
    }
  }
  _objc_release(puVar4);
  puVar7 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_370;
  pcStack_268 = FUN_106d3f5b4;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lVar3 = *(long *)(puVar7 + 0x90);
  puStack_2a0 = puVar21;
  puStack_298 = puVar17;
  puStack_290 = puVar2;
  puStack_288 = puVar5;
  puStack_280 = puVar4;
  puStack_278 = puVar8;
  ppuStack_270 = &ppuStack_210;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = SUB81(auStack_328,0);
  uVar12 = 0x10;
  lVar18 = lVar3;
  func_0x00010bf52a60();
  uVar13 = (undefined1)uVar14;
  if (lVar18 != 0) {
    lVar20 = *plStack_360;
    do {
      lVar19 = 0;
      do {
        if (*plStack_360 != lVar20) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c12cd40(*(undefined8 *)(lStack_368 + lVar19 * 8));
        lVar19 = lVar19 + 1;
      } while (lVar18 != lVar19);
      uVar10 = SUB81(auStack_328,0);
      uVar12 = 0x10;
      lVar18 = lVar3;
      puVar9 = &uStack_370;
      func_0x00010bf52a60();
      uVar13 = (undefined1)uVar14;
    } while (lVar18 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = uStack_370;
  _objc_retain(puVar9);
  _objc_retain(puVar16);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_3d8,lVar3);
  uVar14 = *(undefined8 *)(lVar3 + 0x28);
  _objc_copyWeak(auStack_3f0,auStack_3d8);
  _objc_retain(puVar9);
  uStack_3e8 = uVar15;
  uStack_3e0 = uVar10;
  uStack_3df = uVar12;
  uStack_3de = uVar13;
  _objc_retain(puVar16);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar14);
  _objc_release(uVar1);
  _objc_release(puVar16);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_3f0);
  _objc_destroyWeak(auStack_3d8);
  _objc_release(uVar1);
  _objc_release(puVar16);
  _objc_release(puVar9);
  return;
}



/* Entry: 106d3f0f4; end: 106d3f437; -[SCGalleryOperaMediaManager startToLoadTransferringSpectaclesSnap:completion:] */

void FUN_106d3f0f4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *unaff_x23;
  long lVar17;
  long lVar18;
  undefined *unaff_x24;
  undefined1 auStack_2b0 [8];
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined1 uStack_29f;
  undefined1 uStack_29e;
  undefined1 auStack_298 [8];
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106d3f438;
  puStack_90 = &UNK_110977458;
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_3);
  puStack_88 = param_3;
  _objc_retain(param_4);
  uStack_c0 = 0;
  uVar13 = 1;
  uVar14 = 1;
  puVar15 = PTR___dispatch_main_q_11034be20;
  ppuStack_b8 = &puStack_a8;
  lStack_80 = param_4;
  func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f0c978;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9028;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  (**(code **)(param_4 + 0x10))(param_4,puVar2,1,0,0);
  _objc_release(puVar2);
  if (*(long *)(param_1 + 0x90) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar2;
    _objc_release(uVar1);
  }
  puVar3 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    lVar17 = *(long *)(param_1 + 0x90);
    puVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = (undefined *)(ulong)(lVar17 == 0);
    _objc_release();
    _objc_release(puVar2);
    if (lVar17 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf4c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bef9660(uVar1);
      unaff_x24 = *(undefined **)(param_1 + 0x90);
      unaff_x23 = param_3;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(uVar1);
    }
    puVar2 = param_3;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee0700(param_1);
    _objc_release(puVar2);
  }
  _objc_release(lStack_80);
  _objc_release(puStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  puVar5 = param_3;
  __Unwind_Resume();
  pcStack_c8 = FUN_106d3f438;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = unaff_x24;
  puStack_f8 = unaff_x23;
  puStack_f0 = puVar2;
  lStack_e8 = param_1;
  lStack_e0 = param_4;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puVar3 = puVar5 + 0x30;
  _objc_loadWeakRetained();
  puVar6 = PTR_PTR_1126cdc70;
  if (puVar3 != (undefined *)0x0) {
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(*(long *)(puVar5 + 0x28) + 0x10))(*(long *)(puVar5 + 0x28),0,0,0,0);
    }
    else {
      uVar1 = *(undefined8 *)(puVar5 + 0x20);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09cbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      ppuStack_118 = &PTR____CFConstantStringClassReference_110f0c898;
      unaff_x23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_110 = puVar6;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar8;
      func_0x000108544668(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(puVar3 + 0x58));
      _objc_release(unaff_x24);
      (**(code **)(*(long *)(puVar5 + 0x28) + 0x10))(*(long *)(puVar5 + 0x28),unaff_x23,1,0,0);
      _objc_release(unaff_x23);
      _objc_release(puVar6);
      puVar2 = puVar6;
    }
  }
  _objc_release(puVar3);
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_230;
  pcStack_128 = FUN_106d3f5b4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar7 = *(long *)(puVar6 + 0x90);
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar2;
  puStack_148 = puVar5;
  puStack_140 = puVar3;
  puStack_138 = puVar8;
  ppuStack_130 = &puStack_d0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = SUB81(auStack_1e8,0);
  uVar11 = 0x10;
  lVar17 = lVar7;
  func_0x00010bf52a60();
  uVar12 = (undefined1)uVar13;
  if (lVar17 != 0) {
    lVar16 = *plStack_220;
    do {
      lVar18 = 0;
      do {
        if (*plStack_220 != lVar16) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010c12cd40(*(undefined8 *)(lStack_228 + lVar18 * 8));
        lVar18 = lVar18 + 1;
      } while (lVar17 != lVar18);
      uVar10 = SUB81(auStack_1e8,0);
      uVar11 = 0x10;
      lVar17 = lVar7;
      puVar9 = &uStack_230;
      func_0x00010bf52a60();
      uVar12 = (undefined1)uVar13;
    } while (lVar17 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = uStack_230;
  _objc_retain(puVar9);
  _objc_retain(puVar15);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_298,lVar7);
  uVar13 = *(undefined8 *)(lVar7 + 0x28);
  _objc_copyWeak(auStack_2b0,auStack_298);
  _objc_retain(puVar9);
  uStack_2a8 = uVar14;
  uStack_2a0 = uVar10;
  uStack_29f = uVar11;
  uStack_29e = uVar12;
  _objc_retain(puVar15);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar13);
  _objc_release(uVar1);
  _objc_release(puVar15);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_298);
  _objc_release(uVar1);
  _objc_release(puVar15);
  _objc_release(puVar9);
  return;
}



/* Entry: 106d3f438; end: 106d3f5b3;  */

void FUN_106d3f438(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *unaff_x22;
  long lVar9;
  undefined *unaff_x23;
  long lVar10;
  long unaff_x24;
  undefined8 uVar11;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [128];
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126cdc70;
  if (lVar1 != 0) {
    if (param_2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,0,0);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09cbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      ppuStack_58 = &PTR____CFConstantStringClassReference_110f0c898;
      unaff_x23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_50 = puVar3;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_2;
      func_0x000108544668(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x58));
      _objc_release(unaff_x24);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),unaff_x23,1,0,0);
      _objc_release(unaff_x23);
      _objc_release(puVar3);
      unaff_x22 = puVar3;
    }
  }
  _objc_release(lVar1);
  lVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_170;
  pcStack_68 = FUN_106d3f5b4;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar4 = *(long *)(lVar4 + 0x90);
  lStack_a0 = unaff_x24;
  puStack_98 = unaff_x23;
  puStack_90 = unaff_x22;
  lStack_88 = param_1;
  lStack_80 = lVar1;
  lStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = SUB81(auStack_128,0);
  uVar7 = 0x10;
  lVar1 = lVar4;
  func_0x00010bf52a60();
  uVar8 = (undefined1)in_x5;
  if (lVar1 != 0) {
    lVar9 = *plStack_160;
    do {
      lVar10 = 0;
      do {
        if (*plStack_160 != lVar9) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c12cd40(*(undefined8 *)(lStack_168 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      uVar6 = SUB81(auStack_128,0);
      uVar7 = 0x10;
      lVar1 = lVar4;
      puVar5 = &uStack_170;
      func_0x00010bf52a60();
      uVar8 = (undefined1)in_x5;
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = uStack_170;
  _objc_retain(puVar5);
  _objc_retain(in_x7);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_1d8,lVar4);
  uVar11 = *(undefined8 *)(lVar4 + 0x28);
  _objc_copyWeak(auStack_1f0,auStack_1d8);
  _objc_retain(puVar5);
  uStack_1e8 = in_x6;
  uStack_1e0 = uVar6;
  uStack_1df = uVar7;
  uStack_1de = uVar8;
  _objc_retain(in_x7);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar11);
  _objc_release(uVar2);
  _objc_release(in_x7);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(uVar2);
  _objc_release(in_x7);
  _objc_release(puVar5);
  return;
}



/* Entry: 106d3f5b4; end: 106d3f6af; -[SCGalleryOperaMediaManager _clearContentLoaders] */

void FUN_106d3f5b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined1 auStack_178 [8];
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
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = SUB81(auStack_c8,0);
  uVar6 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  uVar7 = (undefined1)in_x5;
  if (lVar3 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c12cd40(*(undefined8 *)(lStack_108 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      uVar5 = SUB81(auStack_c8,0);
      uVar6 = 0x10;
      lVar3 = lVar2;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
      uVar7 = (undefined1)in_x5;
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = uStack_110;
  _objc_retain(puVar4);
  _objc_retain(in_x7);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_178,lVar2);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  _objc_copyWeak(auStack_190,auStack_178);
  _objc_retain(puVar4);
  uStack_188 = in_x6;
  uStack_180 = uVar5;
  uStack_17f = uVar6;
  uStack_17e = uVar7;
  _objc_retain(in_x7);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar10);
  _objc_release(uVar1);
  _objc_release(in_x7);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_178);
  _objc_release(uVar1);
  _objc_release(in_x7);
  _objc_release(puVar4);
  return;
}



/* Entry: 106d3f6b0; end: 106d3f80f; -[SCGalleryOperaMediaManager _refetchVideoSnapDetailIfNeeded:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d3f6b0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  uStack_78 = param_7;
  uStack_70 = param_4;
  uStack_6f = param_5;
  uStack_6e = param_6;
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return;
}



/* Entry: 106d3f810; end: 106d3f95b;  */

void FUN_106d3f810(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined2 uStack_37;
  
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010be12380();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126bf8f8;
      func_0x00010c2aebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106d3f95c;
    puStack_70 = &UNK_110977198;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = puVar1;
    _objc_retain(uVar4);
    uStack_38 = *(undefined1 *)(param_1 + 0x48);
    uStack_37 = *(undefined2 *)(param_1 + 0x49);
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = uVar4;
    puStack_58 = puVar2;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = uVar5;
    _objc_retain(uVar4);
    uStack_48 = uVar4;
    _objc_retain(puVar2);
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(puStack_58);
    _objc_release(uStack_60);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106d3f95c; end: 106d3f997;  */

void FUN_106d3f95c(long param_1,undefined8 param_2)

{
  func_0x00010be4d5e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x51),
                      *(undefined1 *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106d3f998; end: 106d3fa9f; -[SCGalleryOperaMediaManager _checkMediaIsUnencrypted:] */

undefined * FUN_106d3f998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bfad280(param_3,param_2,&PTR____CFConstantStringClassReference_110f726f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64ac0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c0082a0();
    puVar4 = puVar2;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar2;
      func_0x00010c07a2c0(puVar2);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 106d3faa0; end: 106d3fe4b; -[SCGalleryOperaMediaManager _extractUnlockableSnapInfo:snapDetail:] */

void FUN_106d3faa0(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  double dVar14;
  undefined *puStack_3f8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  _objc_retain(param_5);
  puStack_3f8 = (undefined *)0x0;
  if ((param_4 == (undefined *)0x0) || (param_5 == (undefined *)0x0)) goto LAB_106d3fdfc;
  puVar1 = PTR_PTR_1126c0328;
  _objc_alloc_init();
  puVar2 = param_5;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar13;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x000107cd87b8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bfaec00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010befa120();
    _objc_release(puVar2);
  }
  puVar2 = param_5;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar13;
  func_0x00010c0b4ca0();
  _objc_release(puVar13);
  _objc_release(puVar2);
  if (puVar10 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d24c8;
    _objc_alloc_init();
    func_0x00010c21bbe0();
    puVar13 = puVar1;
    func_0x00010c098320(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010befa120();
    _objc_release(puVar13);
    _objc_release(puVar2);
  }
  puVar2 = param_5;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010bf529e0();
  _objc_release(puVar13);
  _objc_release(puVar2);
  if (puVar4 == (undefined *)0x0) {
    if (puVar10 != (undefined *)0x0 || puVar3 != (undefined *)0x0) goto LAB_106d3fd8c;
    puStack_3f8 = (undefined *)0x0;
  }
  else {
    param_1 = 0.0;
    puVar8 = param_5;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    param_6 = 0x10;
    puVar8 = puVar2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        lVar11 = *(long *)((long)puVar13 * 8);
        lVar12 = lVar11;
        func_0x00010c2540c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar12 != 0) {
          puVar10 = PTR_PTR_1126d24d0;
          _objc_opt_new();
          func_0x00010c2540c0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          func_0x00010c21bbe0(puVar10);
          _objc_release(lVar11);
          puVar4 = puVar1;
          func_0x00010c255400();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar4);
          _objc_release(puVar10);
        }
        puVar13 = puVar13 + 1;
      } while (puVar8 != puVar13);
      param_6 = 0x10;
      puVar8 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
LAB_106d3fd8c:
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar1);
    _objc_release(puVar2);
    func_0x00010c2056c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    puStack_3f8 = puVar2;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_106d3fdfc:
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar8);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    puVar1 = puVar8;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x1) {
      puVar1 = puVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126bf788;
      _objc_alloc();
      func_0x00010c017ba0();
      puStack_3f8 = puVar1;
      func_0x00010bf89240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else {
      uVar5 = 1;
      _dispatch_semaphore_create();
      puStack_268 = &uStack_270;
      uStack_270 = 0;
      uStack_260 = 0x3032000000;
      pcStack_258 = FUN_106d350dc;
      uStack_250 = 0x106d350ec;
      uStack_248 = 0;
      puStack_288 = &uStack_290;
      uStack_290 = 0;
      uStack_280 = 0x2020000000;
      uStack_278 = 0;
      puStack_2a8 = &uStack_2b0;
      uStack_2b0 = 0;
      uStack_2a0 = 0x2020000000;
      uStack_298 = 0;
      puVar1 = puVar8;
      func_0x00010bf529e0();
      puStack_3f8 = PTR_PTR_1126b2798;
      _objc_opt_new();
      puVar2 = puStack_3f8;
      _dispatch_group_create();
      lStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      plStack_2e0 = (long *)0x0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      _objc_retain(puVar8);
      puVar13 = puVar8;
      func_0x00010bf52a60();
      if (puVar13 != (undefined *)0x0) {
        lVar9 = *plStack_2e0;
        do {
          puVar10 = (undefined *)0x0;
          do {
            if (*plStack_2e0 != lVar9) {
              _objc_enumerationMutation(puVar8);
            }
            lVar12 = *(long *)(lStack_2e8 + (long)puVar10 * 8);
            lVar6 = lVar12;
            func_0x00010c06cde0();
            if ((int)lVar6 == 0) {
              uStack_310 = 0;
              uStack_300 = 0x2020000000;
              uStack_2f8 = 0;
              puStack_308 = &uStack_310;
              _dispatch_group_enter(puVar2);
              puVar3 = PTR_PTR_1126bf788;
              _objc_alloc();
              func_0x00010c017ba0();
              puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_350 = 0xc2000000;
              pcStack_348 = FUN_106d40398;
              puStack_340 = &UNK_110977958;
              _objc_retain(uVar5);
              puStack_328 = &uStack_2b0;
              uStack_338 = uVar5;
              puStack_320 = &uStack_310;
              _objc_retain(param_7);
              uVar7 = 0x15;
              uStack_330 = param_7;
              puStack_318 = puVar1;
              func_0x0001000819a8(0x15,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_398 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_390 = 0xc2000000;
              pcStack_388 = FUN_106d40434;
              puStack_380 = &UNK_110977988;
              _objc_retain(uVar5);
              puStack_368 = &uStack_270;
              puStack_360 = &uStack_290;
              uStack_378 = uVar5;
              _objc_retain(puVar2);
              puStack_370 = puVar2;
              func_0x00010bf89240();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar7);
              _objc_release(puVar3);
              if (lVar12 != 0) {
                func_0x00010bef7460(puStack_3f8);
              }
              _objc_release(lVar12);
              _objc_release(puStack_370);
              _objc_release(uStack_378);
              _objc_release(uStack_330);
              _objc_release(uStack_338);
              __Block_object_dispose(&uStack_310,8);
            }
            else {
              _dispatch_semaphore_wait(uVar5,0xffffffffffffffff);
              puStack_2a8[3] = (double)puStack_2a8[3] + 1.0;
              _dispatch_semaphore_signal(uVar5);
            }
            puVar10 = puVar10 + 1;
          } while (puVar13 != puVar10);
          puVar13 = puVar8;
          func_0x00010bf52a60();
        } while (puVar13 != (undefined *)0x0);
      }
      _objc_release(puVar8);
      puStack_3d0 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 1.60807493534087e-314;
      uStack_3c8 = 0xc2000000;
      pcStack_3c0 = FUN_106d404d4;
      puStack_3b8 = &UNK_110849cb0;
      _objc_retain(param_9);
      puStack_3a8 = &uStack_290;
      puStack_3a0 = &uStack_270;
      uStack_3b0 = param_9;
      func_0x000100bc0718(puVar2,param_8,&puStack_3d0);
      _objc_release(uStack_3b0);
      _objc_release(puVar2);
      __Block_object_dispose(&uStack_2b0,8);
      __Block_object_dispose(&uStack_290,8);
      __Block_object_dispose(&uStack_270,8);
      _objc_release(uStack_248);
      _objc_release(uVar5);
    }
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      __Block_object_dispose(&uStack_2b0,8);
      __Block_object_dispose(&uStack_290,8);
      __Block_object_dispose(&uStack_270,8);
      __Unwind_Resume();
      _dispatch_semaphore_wait(*(undefined8 *)(puVar8 + 0x20),0xffffffffffffffff);
      *(double *)(*(long *)(*(long *)(puVar8 + 0x30) + 8) + 0x18) =
           (param_1 - *(double *)(*(long *)(*(long *)(puVar8 + 0x38) + 8) + 0x18)) +
           *(double *)(*(long *)(*(long *)(puVar8 + 0x30) + 8) + 0x18);
      _dispatch_semaphore_signal(*(undefined8 *)(puVar8 + 0x20));
      *(double *)(*(long *)(*(long *)(puVar8 + 0x38) + 8) + 0x18) = param_1;
      if (*(long *)(puVar8 + 0x28) != 0) {
        dVar14 = (double)NEON_ucvtf(*(undefined8 *)(puVar8 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000106d40420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(puVar8 + 0x28) + 0x10))
                  (*(double *)(*(long *)(*(long *)(puVar8 + 0x30) + 8) + 0x18) / dVar14);
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_3f8);
  return;
}



/* Entry: 106d3fe4c; end: 106d40397; +[SCGalleryOperaMediaManager _downloadCloudFiles:isFeaturedSnap:progressQueue:progressHandler:resultQueue:resultHandler:] */

void FUN_106d3fe4c(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined *puStack_2c8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_4;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x1) {
    puVar1 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bf788;
    _objc_alloc();
    func_0x00010c017ba0();
    puStack_2c8 = puVar1;
    func_0x00010bf89240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  else {
    uVar2 = 1;
    _dispatch_semaphore_create();
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x3032000000;
    pcStack_128 = FUN_106d350dc;
    uStack_120 = 0x106d350ec;
    uStack_118 = 0;
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 0;
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x2020000000;
    uStack_168 = 0;
    puVar1 = param_4;
    func_0x00010bf529e0();
    puStack_2c8 = PTR_PTR_1126b2798;
    _objc_opt_new();
    puVar3 = puStack_2c8;
    _dispatch_group_create();
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(param_4);
    puVar4 = param_4;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar10 = *plStack_1b0;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar10) {
            _objc_enumerationMutation(param_4);
          }
          lVar9 = *(long *)(lStack_1b8 + (long)puVar8 * 8);
          lVar5 = lVar9;
          func_0x00010c06cde0();
          if ((int)lVar5 == 0) {
            uStack_1e0 = 0;
            uStack_1d0 = 0x2020000000;
            uStack_1c8 = 0;
            puStack_1d8 = &uStack_1e0;
            _dispatch_group_enter(puVar3);
            puVar6 = PTR_PTR_1126bf788;
            _objc_alloc();
            func_0x00010c017ba0();
            puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_220 = 0xc2000000;
            pcStack_218 = FUN_106d40398;
            puStack_210 = &UNK_110977958;
            _objc_retain(uVar2);
            puStack_1f8 = &uStack_180;
            uStack_208 = uVar2;
            puStack_1f0 = &uStack_1e0;
            _objc_retain(param_7);
            uVar7 = 0x15;
            uStack_200 = param_7;
            puStack_1e8 = puVar1;
            func_0x0001000819a8(0x15,0);
            _objc_retainAutoreleasedReturnValue();
            puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_260 = 0xc2000000;
            pcStack_258 = FUN_106d40434;
            puStack_250 = &UNK_110977988;
            _objc_retain(uVar2);
            puStack_238 = &uStack_140;
            puStack_230 = &uStack_160;
            uStack_248 = uVar2;
            _objc_retain(puVar3);
            puStack_240 = puVar3;
            func_0x00010bf89240();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            _objc_release(puVar6);
            if (lVar9 != 0) {
              func_0x00010bef7460(puStack_2c8);
            }
            _objc_release(lVar9);
            _objc_release(puStack_240);
            _objc_release(uStack_248);
            _objc_release(uStack_200);
            _objc_release(uStack_208);
            __Block_object_dispose(&uStack_1e0,8);
          }
          else {
            _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
            puStack_178[3] = (double)puStack_178[3] + 1.0;
            _dispatch_semaphore_signal(uVar2);
          }
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar4 = param_4;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(param_4);
    puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_298 = 0xc2000000;
    pcStack_290 = FUN_106d404d4;
    puStack_288 = &UNK_110849cb0;
    _objc_retain(param_9);
    puStack_278 = &uStack_160;
    puStack_270 = &uStack_140;
    uStack_280 = param_9;
    func_0x000100bc0718(puVar3,param_8,&puStack_2a0);
    _objc_release(uStack_280);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_180,8);
    __Block_object_dispose(&uStack_160,8);
    __Block_object_dispose(&uStack_140,8);
    _objc_release(uStack_118);
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_2c8);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_180,8);
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_140,8);
  __Unwind_Resume();
  _dispatch_semaphore_wait(*(undefined8 *)(param_4 + 0x20),0xffffffffffffffff);
  *(double *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x18) =
       (param_1 - *(double *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x18)) +
       *(double *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x18);
  _dispatch_semaphore_signal(*(undefined8 *)(param_4 + 0x20));
  *(double *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x18) = param_1;
  if (*(long *)(param_4 + 0x28) != 0) {
    dVar11 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000106d40420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x28) + 0x10))
              (*(double *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x18) / dVar11);
    return;
  }
  return;
}



/* Entry: 106d40398; end: 106d40433;  */

void FUN_106d40398(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_2 + 0x20),0xffffffffffffffff);
  lVar1 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  *(double *)(lVar1 + 0x18) =
       (param_1 - *(double *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x18)) +
       *(double *)(lVar1 + 0x18);
  _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x20));
  *(double *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x18) = param_1;
  if (*(long *)(param_2 + 0x28) != 0) {
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000106d40420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
              (*(double *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) / dVar2);
    return;
  }
  return;
}



/* Entry: 106d40434; end: 106d404d3;  */

void FUN_106d40434(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _dispatch_semaphore_wait(uVar3,0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar1 = param_3;
  if (*(long *)(lVar4 + 0x28) != 0) {
    lVar1 = *(long *)(lVar4 + 0x28);
  }
  _objc_retain(lVar1);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar1;
  _objc_release(uVar3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(ulong *)(lVar1 + 0x18);
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  *(ulong *)(lVar1 + 0x18) = uVar2;
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d404d4; end: 106d404ff;  */

void FUN_106d404d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106d404f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    return;
  }
  return;
}



/* Entry: 106d40500; end: 106d4059b; -[SCGalleryOperaMediaManager imageForKey:completion:] */

void FUN_106d40500(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar2);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d4059c; end: 106d40643; -[SCGalleryOperaMediaManager videoAssetForKey:] */

void FUN_106d4059c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x60);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126bcb80;
      _objc_alloc(PTR_PTR_1126bcb80);
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfefc40(puVar3,param_2,uVar2);
      _objc_release(uVar2);
      goto LAB_106d40628;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106d40628:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d40644; end: 106d40693; -[SCGalleryOperaMediaManager videoAssetFutureForKey:] */

void FUN_106d40644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c2991c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d40694; end: 106d40697; -[SCGalleryOperaMediaManager resetVideoAssetForKey:] */

void FUN_106d40694(void)

{
  return;
}



/* Entry: 106d40698; end: 106d4073f; -[SCGalleryOperaMediaManager _audioOverrideAssetForKey:] */

void FUN_106d40698(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126bcb80;
      _objc_alloc(PTR_PTR_1126bcb80);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfefc40(puVar3,param_2,uVar2);
      _objc_release(uVar2);
      goto LAB_106d40724;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106d40724:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d40740; end: 106d407db; -[SCGalleryOperaMediaManager livePhotoForKey:completion:] */

void FUN_106d40740(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar2);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d407dc; end: 106d4085b; -[SCGalleryOperaMediaManager glCommandsForKey:] */

void FUN_106d407dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106d40840;
    }
  }
  uVar2 = 0;
LAB_106d40840:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d4085c; end: 106d408db; -[SCGalleryOperaMediaManager glAudioProcessorMixForKey:] */

void FUN_106d4085c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x80);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106d408c0;
    }
  }
  uVar2 = 0;
LAB_106d408c0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d408dc; end: 106d4095b; -[SCGalleryOperaMediaManager glReverseAudioDataForKey:] */

void FUN_106d408dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x88);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106d40940;
    }
  }
  uVar2 = 0;
LAB_106d40940:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d4095c; end: 106d40b1f; -[SCGalleryOperaMediaManager _updateSpectaclesTransferProgress:] */

void FUN_106d4095c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_2);
  uVar3 = uVar1;
  func_0x00010c06eea0();
  if ((int)uVar3 == 0) {
    uVar3 = uVar1;
    func_0x00010c06eea0();
    if ((int)uVar3 == 0) goto LAB_106d40ac0;
    func_0x00010c27a2e0(uVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    puVar2 = auStack_90;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(uVar1);
    uStack_88 = param_1;
    func_0x00010c0f7fc0(uVar3);
    uVar3 = uVar1;
  }
  else {
    func_0x00010c27a2e0(uVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106d40b20;
    puStack_68 = &UNK_110842a68;
    puVar2 = auStack_58;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(uVar1);
    uStack_60 = uVar1;
    uStack_50 = param_1;
    func_0x00010c0f7fc0(uVar3);
    uVar3 = uStack_60;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar2);
LAB_106d40ac0:
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 106d40b20; end: 106d40bef;  */

void FUN_106d40b20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x1b8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79380(*(undefined8 *)(param_1 + 0x30),uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d40bf0; end: 106d40c3f; -[SCGalleryOperaMediaManager didReceiveDataForContentComponent:forContent:] */

void FUN_106d40bf0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 - 1U < 2) {
    func_0x00010bdc3540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee0700(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 106d40c40; end: 106d40c43; -[SCGalleryOperaMediaManager didFinishDownloadForContentComponent:forContent:] */

void FUN_106d40c40(void)

{
  return;
}



/* Entry: 106d40c44; end: 106d40c47; -[SCGalleryOperaMediaManager didPauseForContentComponent:forContent:] */

void FUN_106d40c44(void)

{
  return;
}



/* Entry: 106d40c48; end: 106d40c4b; -[SCGalleryOperaMediaManager didInterruptDownloadForContentComponent:forContent:] */

void FUN_106d40c48(void)

{
  return;
}



/* Entry: 106d40c4c; end: 106d40c4f; -[SCGalleryOperaMediaManager didCancelDownloadForContentComponent:forContent:] */

void FUN_106d40c4c(void)

{
  return;
}



/* Entry: 106d40c50; end: 106d40c9f; -[SCGalleryOperaMediaManager didFinishWithScope:] */

void FUN_106d40c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x130;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d40ca0; end: 106d40d1f; -[SCGalleryOperaMediaManager _fetchLocalSnapDetailForSnap:] */

void FUN_106d40ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc7b8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar1,param_2,param_3,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d40d20; end: 106d40f3b; -[SCGalleryOperaMediaManager _shouldDisplaySnapDocLoadingIndicator:] */

uint FUN_106d40d20(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000107e61fac();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09aa40();
    _objc_release(uVar2);
    if (((int)uVar3 == 0) || (uVar1 = param_3, func_0x00010c0d73c0(), (uVar1 & 1) == 0)) {
      uVar1 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar4;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      if (uVar1 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          uVar11 = 0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(uVar4);
            }
            uVar5 = *(undefined8 *)(uVar11 * 8);
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar3;
            func_0x00010c0cc820();
            _objc_release(uVar3);
            _objc_release(uVar5);
            uVar10 = (int)uVar2 == 6 | uVar10;
            uVar11 = uVar11 + 1;
          } while (uVar1 != uVar11);
          uVar1 = uVar4;
          func_0x00010bf52a60();
        } while (uVar1 != 0);
      }
      _objc_release(uVar4);
      uVar1 = param_3;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf0d800();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x00010bf04920();
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar10 = (uint)uVar11 | uVar10;
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    func_0x00010bf4e080(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010bf4e420();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    func_0x00010c26b020();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c26afc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar9);
    _objc_release(param_2);
    return (uint)(lVar8 != 0);
  }
  return uVar10 & 1;
}



/* Entry: 106d40f3c; end: 106d40fd7;  */

bool FUN_106d40f3c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf4e080(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar4 != 0;
}



/* Entry: 106d40fd8; end: 106d40ff3; -[SCGalleryOperaMediaManager _loadAndAddMusicRecommendationsPropertiesWithSnap:shouldShowSoundPill:snapDetail:snapDoc:loadedProperties:completion:] */

void FUN_106d40fd8(void)

{
  undefined8 in_x6;
  long in_x7;
  
                    /* WARNING: Could not recover jumptable at 0x000106d40ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x7 + 0x10))(in_x7,in_x6,1,0,0);
  return;
}



/* Entry: 106d40ff4; end: 106d410b3; -[SCGalleryOperaMediaManager _getMediaRenderSizeForSnap:] */

undefined1  [16]
FUN_106d40ff4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR_PTR_1126bf720;
  _objc_retain(param_5);
  func_0x00010c0c2640(puVar1);
  uVar2 = param_5;
  func_0x00010bfe0640();
  uVar3 = param_5;
  func_0x00010c2a5040();
  _objc_release(param_5);
  fVar4 = (float)(int)uVar2 / (float)(int)uVar3;
  fVar5 = ABS(fVar4 + 1.3333334) * 1.1920929e-07;
  if (fVar5 <= 1.1754944e-38) {
    fVar5 = 1.1754944e-38;
  }
  dVar6 = param_1 * 1.3333333730697632;
  if (fVar5 <= ABS(fVar4 + -1.3333334)) {
    dVar6 = param_2;
  }
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 106d410b4; end: 106d410bb; -[SCGalleryOperaMediaManager loadingProgressProvider] */

undefined8 FUN_106d410b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 106d410bc; end: 106d4134b; -[SCGalleryOperaMediaManager .cxx_destruct] */

void FUN_106d410bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_destroyWeak(param_1 + 0x130);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
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
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 106d4134c; end: 106d4135b; +[SCGalleryOperaMediaManagerHelper firstFrameImageForContent:] */

void FUN_106d4134c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84c38);
  return;
}



/* Entry: 106d4135c; end: 106d4136b; +[SCGalleryOperaMediaManagerHelper loadingBackgroundImageKeyForSnap:] */

void FUN_106d4135c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84c58);
  return;
}



/* Entry: 106d4136c; end: 106d4137b; +[SCGalleryOperaMediaManagerHelper rawVideoAssetKeyForSnap:] */

void FUN_106d4136c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84b58);
  return;
}



/* Entry: 106d4137c; end: 106d4138b; +[SCGalleryOperaMediaManagerHelper screenOverlayImageKeyForSnap:] */

void FUN_106d4137c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84b98);
  return;
}



/* Entry: 106d4138c; end: 106d4139b; +[SCGalleryOperaMediaManagerHelper renderedImageKeyForSnap:] */

void FUN_106d4138c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84d38);
  return;
}



/* Entry: 106d4139c; end: 106d413ab; +[SCGalleryOperaMediaManagerHelper publisherLogoKeyForSnap:] */

void FUN_106d4139c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84d58);
  return;
}



/* Entry: 106d413ac; end: 106d413bb; +[SCGalleryOperaMediaManagerHelper mediaOverlayImageKeyForSnap:] */

void FUN_106d413ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84bb8);
  return;
}



/* Entry: 106d413bc; end: 106d413ef; +[SCGalleryOperaMediaManagerHelper animatedStickerImageKeyForSticker:snapId:] */

void FUN_106d413bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c25cde0(param_4,param_2,&PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 106d413f0; end: 106d41423; +[SCGalleryOperaMediaManagerHelper rawImageKeyForSnap:seqNum:] */

void FUN_106d413f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c25cde0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc8c58);
  return;
}



/* Entry: 106d41424; end: 106d41457; +[SCGalleryOperaMediaManagerHelper rawImageKeyForCameraRoll:seqNum:] */

void FUN_106d41424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c25cde0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc8c58);
  return;
}



/* Entry: 106d41458; end: 106d4148b; +[SCGalleryOperaMediaManagerHelper rawLivePhotoKeyForCameraRoll:seqNum:] */

void FUN_106d41458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c25cde0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc8c58);
  return;
}



/* Entry: 106d4148c; end: 106d4149b; +[SCGalleryOperaMediaManagerHelper rawVideoKeyForCameraRoll:] */

void FUN_106d4148c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84c18);
  return;
}



/* Entry: 106d4149c; end: 106d414ab; +[SCGalleryOperaMediaManagerHelper intermediateGLCommandsKeyForSnap:] */

void FUN_106d4149c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84c78);
  return;
}



/* Entry: 106d414ac; end: 106d414bb; +[SCGalleryOperaMediaManagerHelper midOutputGLCommandsKeyForSnap:] */

void FUN_106d414ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84c98);
  return;
}



/* Entry: 106d414bc; end: 106d414cb; +[SCGalleryOperaMediaManagerHelper outputGLCommandsKeyForSnap:] */

void FUN_106d414bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84cb8);
  return;
}



/* Entry: 106d414cc; end: 106d414db; +[SCGalleryOperaMediaManagerHelper audioProcessorMixKeyForSnap:] */

void FUN_106d414cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84cd8);
  return;
}



/* Entry: 106d414dc; end: 106d414eb; +[SCGalleryOperaMediaManagerHelper reverseAudioDataKeyForSnap:] */

void FUN_106d414dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84cf8);
  return;
}



/* Entry: 106d414ec; end: 106d414fb; +[SCGalleryOperaMediaManagerHelper audioOverrideAssetKeyForSnap:] */

void FUN_106d414ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84d18);
  return;
}



/* Entry: 106d414fc; end: 106d4150b; +[SCGalleryOperaMediaManagerHelper operaPresentAnimationFrameKeyForSnap:] */

void FUN_106d414fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e84d98);
  return;
}



/* Entry: 106d4150c; end: 106d41537; +[SCGalleryOperaMediaManagerHelper shouldLoadFirstFrameForSnap:] */

uint FUN_106d4150c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010b5fa088(param_3);
  return (uint)(param_3 < 0xd) & 0x15e6U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 106d41538; end: 106d417c3; +[SCGalleryOperaMediaManagerHelper loadingErrorPropertiesWithError:] */

void FUN_106d41538(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c14d160();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0(PTR_PTR_1126ba158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0720c0();
    if (((ulong)puVar3 & 1) == 0) {
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else {
      puVar3 = param_3;
      func_0x00010bf3ec40();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (puVar3 == (undefined *)0x66) goto LAB_106d41578;
    }
    puVar1 = param_3;
    func_0x00010b88c2c4();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e84db8;
    if (puVar1 != (undefined *)0x3) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc3e98;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110daeb18;
    if (puVar1 != (undefined *)0x3) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db9c98;
    }
  }
  else {
LAB_106d41578:
    ppuVar4 = &PTR____CFConstantStringClassReference_110e49a78;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e49a98;
  }
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  _objc_retain(param_3);
  puVar2 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    func_0x00010b5f7a24(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010bf657a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c25d400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010c22d3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c25d400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


