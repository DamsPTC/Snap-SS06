/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c349f4; end: 105c34b6f;  */

void FUN_105c349f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1c5ce0(lVar1,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c282800(lVar2);
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010c282800(lVar3);
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010c282800(lVar4);
    func_0x00010c0df880(puVar5,param_2,lVar3 + lVar2 + lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c520(lVar1,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    func_0x00010c282800(uVar6);
    func_0x00010c0df880(puVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bac80(lVar1,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
    func_0x00010c282800(lVar2);
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
    func_0x00010c282800(lVar3);
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
    func_0x00010c282800(lVar4);
    func_0x00010c0df880(puVar5,param_2,lVar3 + lVar2 + lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8260(lVar1,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010bed2ea0(lVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c34b70; end: 105c34caf;  */

void FUN_105c34b70(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 105c34cb0; end: 105c34d03; +[SCClearCacheManager _fileSizeToMB:] */

void FUN_105c34cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c282800();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e23498);
  return;
}



/* Entry: 105c34d04; end: 105c34d47; -[SCClearCacheManager rawCacheSizeByFeature:] */

void FUN_105c34d04(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 6) {
    uVar1 = *(undefined8 *)(param_1 + *(long *)(&UNK_10ddcb578 + (ulong)param_3 * 8));
    _objc_retain(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c34d48; end: 105c34da3; -[SCClearCacheManager cacheSizeByFeature:] */

void FUN_105c34d48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c120020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c3420;
    func_0x00010be15a60(PTR_PTR_1126c3420,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c34da4; end: 105c3510b; -[SCClearCacheManager clearAllCache:] */

void FUN_105c34da4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_4;
  _objc_retain();
  _CACurrentMediaTime();
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105c3510c;
  puStack_70 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_68 = uVar3;
  func_0x00010bf3aa80(param_2);
  _dispatch_group_enter(uVar3);
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105c35114;
  puStack_98 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  func_0x00010bf3b8e0(param_2);
  _dispatch_group_enter(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar2;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x105c3511c;
  puStack_c0 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_b8 = uVar3;
  func_0x00010bf3c200(uVar4);
  _objc_release(uVar4);
  _dispatch_group_enter(uVar3);
  puStack_100 = puVar2;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x105c35124;
  puStack_e8 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_e0 = uVar3;
  func_0x00010bf3b740(param_2);
  _dispatch_group_enter(uVar3);
  puStack_128 = puVar2;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x105c3512c;
  puStack_110 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_108 = uVar3;
  func_0x00010bf3bfa0(param_2);
  _dispatch_group_enter(uVar3);
  puStack_150 = puVar2;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x105c35134;
  puStack_138 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_130 = uVar3;
  func_0x00010bf3b640(param_2);
  _dispatch_group_enter(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar2;
  uStack_170 = 0xc2000000;
  uStack_168 = 0x105c3513c;
  puStack_160 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_158 = uVar3;
  func_0x00010bf3b1e0(uVar4);
  _objc_release(uVar4);
  _dispatch_group_enter(uVar3);
  puStack_1a0 = puVar2;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x105c35144;
  puStack_188 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_180 = uVar3;
  func_0x00010bf3adc0(param_2);
  _dispatch_group_enter(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = puVar2;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x105c3514c;
  puStack_1b0 = &UNK_110842e18;
  uStack_1a8 = uVar3;
  _objc_retain(uVar3);
  func_0x00010bf3a7a0(uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar1);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = puVar2;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_105c35154;
  puStack_1e8 = &UNK_11085b7b0;
  uStack_1e0 = uVar1;
  uStack_1d8 = param_4;
  uStack_1d0 = param_1;
  _objc_retain(param_4);
  func_0x000100bc0718(uVar3,uVar4,&puStack_200);
  _objc_release(uVar4);
  _objc_release(uStack_1d8);
  _objc_release(uVar1);
  _objc_release(uStack_1a8);
  _objc_release(uStack_180);
  _objc_release(uStack_158);
  _objc_release(uStack_130);
  _objc_release(uStack_108);
  _objc_release(uStack_e0);
  _objc_release(uStack_b8);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(uVar3);
  return;
}



/* Entry: 105c3510c; end: 105c35153;  */

void FUN_105c3510c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105c35154; end: 105c351af;  */

void FUN_105c35154(double param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
  }
  _CACurrentMediaTime();
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_110cccd78,&uStack_40,
                 (long)((param_1 - *(double *)(param_2 + 0x30)) * 1000.0));
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x000107c278ac(&puStack_28);
    }
    return;
  }
  return;
}



/* Entry: 105c351b0; end: 105c351bb; -[SCClearCacheManager clearBrowserCache:] */

void FUN_105c351b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4f58,PTR_s_clearBrowserCachesAndCookiesWith_1125ac458);
  return;
}



/* Entry: 105c351bc; end: 105c3530f; -[SCClearCacheManager clearMemoriesCache:] */

void FUN_105c351bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_3;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105c35310;
  puStack_70 = &UNK_110842e18;
  uStack_68 = uVar3;
  _objc_retain(uVar3);
  ppuVar4 = &puStack_88;
  _objc_retainBlock(ppuVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106fd77b0(0,uVar1,uVar6,uVar5,ppuVar4);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105c35318;
  puStack_98 = &UNK_110849530;
  uStack_90 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar3,uVar6,&puStack_b0);
  _objc_release(uVar6);
  _objc_release(uStack_90);
  _objc_release(ppuVar4);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(uVar3);
  return;
}



/* Entry: 105c35310; end: 105c3532b;  */

void FUN_105c35310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105c3532c; end: 105c3548f; -[SCClearCacheManager clearLensCache:] */

void FUN_105c3532c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    _dispatch_group_enter(uVar2);
    puStack_78 = puVar1;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105c35490;
    puStack_60 = &UNK_110842e18;
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    func_0x00010bf3ac80(lVar3);
    _objc_release(uStack_58);
  }
  _dispatch_group_enter(uVar2);
  uVar4 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105c35498;
  puStack_88 = &UNK_110842e18;
  uStack_80 = uVar2;
  _objc_retain(uVar2);
  func_0x00010007380c(uVar4,&puStack_a0);
  _objc_release(uVar4);
  uVar4 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bc0718(uVar2,uVar4,param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uStack_80);
  _objc_release(uVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 105c35490; end: 105c35497;  */

void FUN_105c35490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105c35498; end: 105c35537;  */

void FUN_105c35498(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3450;
  func_0x00010c098380(PTR_PTR_1126c3450);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010c12cc40(puVar1,param_2,puVar2,0);
    func_0x00010bf55d80(puVar1,param_2,puVar2,1,0,0);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c35538; end: 105c35593; -[SCClearCacheManager clearSearchCache:] */

void FUN_105c35538(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138360();
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c35594; end: 105c355ef; -[SCClearCacheManager clearLagunaLocationsCache:] */

void FUN_105c35594(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b840();
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c355f0; end: 105c3568f; -[SCClearCacheManager clearCameosCache:] */

void FUN_105c355f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c35690;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c12ace0(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c35690; end: 105c356a3;  */

void FUN_105c35690(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c3569c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c356a4; end: 105c35743; -[SCClearCacheManager clearPublicContentFeeds:] */

void FUN_105c356a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c35744;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf3bdc0(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c35744; end: 105c35757;  */

void FUN_105c35744(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c35750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c35758; end: 105c35777; -[SCClearCacheManager _warmupSearchCache] */

void FUN_105c35758(long param_1)

{
  func_0x00010c269d40(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c35778; end: 105c3590f; -[SCClearCacheManager _appRestartPrompt] */

void FUN_105c35778(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e234b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e234b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e234d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e234d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105c35910; end: 105c35987;  */

void FUN_105c35910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c35988; end: 105c35ba3; -[SCClearCacheManager presentClearDataAlertWithTitle:description:actionTitle:clearBlock:parentView:] */

void FUN_105c35988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126af178;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af180;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010beb8530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_6 + 0x20),PTR_s__showClearProgress_parentView__11258baf0,
             *(undefined8 *)(param_6 + 0x30),*(undefined8 *)(param_6 + 0x28));
  return;
}



/* Entry: 105c35ba4; end: 105c35bc3;  */

void FUN_105c35ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showClearProgress_parentView__11258baf0,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c35bc4; end: 105c35eb7; -[SCClearCacheManager _showClearProgress:parentView:] */

void FUN_105c35bc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  _objc_alloc();
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010befbb60(param_4);
  _objc_retain(param_4);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afd30;
  _objc_alloc();
  func_0x00010bfffc60();
  func_0x00010befbb60(puVar1);
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24dbc0(puVar2);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4036000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3);
  _objc_release(puVar4);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e234f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e234f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3);
  _objc_release(ppuVar5);
  func_0x00010c23d620(puVar3);
  func_0x00010befbb60(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c35eb8; end: 105c35f87;  */

void FUN_105c35eb8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c35f88; end: 105c360af;  */

void FUN_105c35f88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4038000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c360b0; end: 105c36157; -[SCClearCacheManager appClearBlackViewAndRestart:] */

void FUN_105c360b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c36158;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fe0(0x3ff0000000000000,uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105c36158; end: 105c3617f;  */

void FUN_105c36158(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdccd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__appRestartPrompt_112550cf8);
  return;
}



/* Entry: 105c36180; end: 105c36187; -[SCClearCacheManager browserCacheSize] */

undefined8 FUN_105c36180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105c36188; end: 105c361b7; -[SCClearCacheManager setBrowserCacheSize:] */

void FUN_105c36188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c361b8; end: 105c361bf; -[SCClearCacheManager memoriesCacheSize] */

undefined8 FUN_105c361b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105c361c0; end: 105c361ef; -[SCClearCacheManager setMemoriesCacheSize:] */

void FUN_105c361c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c361f0; end: 105c361f7; -[SCClearCacheManager storiesCacheSize] */

undefined8 FUN_105c361f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105c361f8; end: 105c36227; -[SCClearCacheManager setStoriesCacheSize:] */

void FUN_105c361f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c36228; end: 105c3622f; -[SCClearCacheManager lensCacheSize] */

undefined8 FUN_105c36228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105c36230; end: 105c3625f; -[SCClearCacheManager setLensCacheSize:] */

void FUN_105c36230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c36260; end: 105c36267; -[SCClearCacheManager searchCacheSize] */

undefined8 FUN_105c36260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105c36268; end: 105c36297; -[SCClearCacheManager setSearchCacheSize:] */

void FUN_105c36268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c36298; end: 105c3629f; -[SCClearCacheManager stickersCacheSize] */

undefined8 FUN_105c36298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105c362a0; end: 105c362a7; -[SCClearCacheManager allCacheSize] */

undefined8 FUN_105c362a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105c362a8; end: 105c362d7; -[SCClearCacheManager setAllCacheSize:] */

void FUN_105c362a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c362d8; end: 105c362df; -[SCClearCacheManager contentManagerCacheSize] */

undefined8 FUN_105c362d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105c362e0; end: 105c3630f; -[SCClearCacheManager setContentManagerCacheSize:] */

void FUN_105c362e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c36310; end: 105c36327; -[SCClearCacheManager userSession] */

void FUN_105c36310(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c36328; end: 105c36333; -[SCClearCacheManager setUserSession:] */

void FUN_105c36328(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 105c36334; end: 105c36443; -[SCClearCacheManager .cxx_destruct] */

void FUN_105c36334(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
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



/* Entry: 105c36444; end: 105c3650f; -[SCComposerDynamicDeliverySettingsRowProvider initWithComposerServices:composerFrameworkServices:circumstanceEngine:] */

undefined1 *
FUN_105c36444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec690;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c36510; end: 105c3651f; -[SCComposerDynamicDeliverySettingsRowProvider sectionRow] */

void FUN_105c36510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_actionsWithRow__112599718,99);
  return;
}



/* Entry: 105c36520; end: 105c365a3; -[SCComposerDynamicDeliverySettingsRowProvider rowViewModel] */

void FUN_105c36520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae750;
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010be06bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c365a4; end: 105c3665b; -[SCComposerDynamicDeliverySettingsRowProvider handleWithContext:] */

void FUN_105c365a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c3460;
  _objc_alloc(PTR_PTR_1126c3460);
  func_0x00010c0008c0();
  func_0x00010c18b5e0();
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c3665c; end: 105c36667; -[SCComposerDynamicDeliverySettingsRowProvider composerDynamicDeliveryDidDismiss] */

void FUN_105c3665c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105c36668; end: 105c366af; -[SCComposerDynamicDeliverySettingsRowProvider _dynamicDeliveryRowProvider] */

void FUN_105c36668(void)

{
  _objc_alloc(PTR_PTR_1126aeaf0);
  func_0x00010c053ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c366b0; end: 105c366f7; -[SCComposerDynamicDeliverySettingsRowProvider .cxx_destruct] */

void FUN_105c366b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c366f8; end: 105c366ff; -[SCComposerDynamicDeliveryViewController pageViewName] */

undefined8 FUN_105c366f8(void)

{
  return 0x114;
}



/* Entry: 105c36700; end: 105c369a7; -[SCComposerDynamicDeliveryViewController initWithComposerServices:composerFrameworkServices:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c36700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126ec698;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar9 = (long)_DAT_1127329e8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_5;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_1127329ec;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3468;
    _objc_alloc_init(PTR_PTR_1126c3468);
    _objc_initWeak(auStack_88,puVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105c369a8;
    puStack_98 = &UNK_1108434b0;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c1d2140(puVar3);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010c1d2940(puVar3);
    puVar4 = PTR_PTR_1126c3470;
    _objc_alloc();
    puVar5 = puVar1;
    func_0x00010c0b7ae0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c295440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127329f0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127329f0) = puVar4;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_b8);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c369a8; end: 105c36a4b;  */

void FUN_105c369a8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105c36a20;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c36a4c; end: 105c36cb7;  */

void FUN_105c36a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105c36cb8;
  uStack_80 = 0x105c36cc8;
  uStack_78 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf44b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c142e80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105c36cd0;
  puStack_b0 = &UNK_1108de2b8;
  puStack_a8 = &uStack_a0;
  func_0x00010c284760();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  if (puStack_98[5] == 0) {
    func_0x00010bfbb700(puVar2);
    _objc_retain(puVar2);
  }
  else {
    uVar5 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_105c36da8;
    puStack_100 = &UNK_1108bab48;
    puStack_d8 = &uStack_a0;
    _objc_retain(param_2);
    uStack_f8 = param_2;
    _objc_retain(param_3);
    uStack_f0 = param_3;
    _objc_retain(param_4);
    uStack_e8 = param_4;
    _objc_retain(puVar2);
    puStack_e0 = puVar2;
    _objc_copyWeak(auStack_d0,param_1 + 0x28);
    func_0x00010007380c(uVar5,&puStack_118);
    _objc_release(uVar5);
    _objc_retain(puVar2);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c36cb8; end: 105c36ccf;  */

void FUN_105c36cb8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c36cd0; end: 105c36da7;  */

void FUN_105c36cd0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf61960();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf61960();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6d30;
    _objc_opt_class(PTR_PTR_1126b6d30);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) {
      uVar1 = param_2;
      func_0x00010bf61960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf8b760();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(ulong *)(lVar6 + 0x28) = uVar2;
      _objc_release(uVar5);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c36da8; end: 105c36e7f;  */

void FUN_105c36da8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010c09ade0(uVar1,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c36e80;
  puStack_50 = &UNK_110848218;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_copyWeak(auStack_38,param_1 + 0x48);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c36e80; end: 105c36efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c36e80(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e23558;
  if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x28);
  }
  func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x20),param_2,ppuVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c0b7ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_1127329f0),param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c36efc; end: 105c3745b; -[SCComposerDynamicDeliveryViewController makeViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c36efc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
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
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127329e8);
  func_0x00010c1195e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e23578,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3478;
  _objc_alloc();
  uVar4 = uVar2;
  func_0x00010c296d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_70 = 0;
  func_0x00010c008360();
  lVar1 = lStack_70;
  _objc_retain(lStack_70);
  _objc_release(uVar4);
  if (lVar1 == 0) {
    puVar5 = puVar3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010c08fa60();
    if (puVar12 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar3;
      func_0x00010c229e60();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010c08fa60();
      if (puVar12 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar3;
        func_0x00010bf5a4a0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar7;
        func_0x00010c08fa60();
        if (puVar12 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar3;
          func_0x00010bfde3e0();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if ((int)puVar12 == 0) goto LAB_105c36fa0;
          puVar12 = puVar3;
          func_0x00010c298be0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b6e20();
          puVar6 = puVar3;
          func_0x00010c298be0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ce7c0();
          puVar7 = puVar3;
          func_0x00010c298be0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bfda060();
          if ((int)puVar8 != 0) {
            puStack_1c8 = puVar3;
            func_0x00010c298be0();
            _objc_retainAutoreleasedReturnValue();
            puStack_1d0 = puStack_1c8;
            func_0x00010c0f5760();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
          }
          puVar9 = puVar3;
          func_0x00010c298be0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8b740();
          func_0x00010c14de00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          if ((int)puVar8 != 0) {
            _objc_release(puStack_1d0);
            _objc_release(puStack_1c8);
          }
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar12);
          puVar12 = PTR_PTR_1126c3480;
          _objc_alloc(PTR_PTR_1126c3480);
          puVar6 = puVar3;
          func_0x00010bdc2b80(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c229e60(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010bf5a4a0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05a2a0(puVar12);
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
  }
  else {
LAB_105c36fa0:
    puVar12 = (undefined *)0x0;
  }
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105c36cb8;
  uStack_80 = 0x105c36cc8;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_105c36cb8;
  uStack_b0 = 0x105c36cc8;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_105c36cb8;
  uStack_e0 = 0x105c36cc8;
  uStack_d8 = 0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_105c36cb8;
  uStack_110 = 0x105c36cc8;
  uStack_108 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_105c36cb8;
  uStack_140 = 0x105c36cc8;
  uStack_138 = 0;
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127329ec);
  func_0x00010bf44b20(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010c142e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284760();
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar10);
  puVar5 = PTR_PTR_1126c3490;
  _objc_alloc_init(PTR_PTR_1126c3490);
  func_0x00010c1870e0();
  func_0x00010c1be940(puVar5);
  func_0x00010c16a160(puVar5);
  func_0x00010c1be9e0(puVar5);
  func_0x00010c18baa0(puVar5);
  func_0x00010c1d7900(puVar5);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105c3745c; end: 105c377eb;  */

void FUN_105c3745c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  uVar9 = param_2;
  func_0x00010bf61960();
  _objc_retainAutoreleasedReturnValue();
  if (uVar9 == 0) goto LAB_105c377c8;
  uVar1 = param_2;
  func_0x00010bf61960();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6d30;
  _objc_opt_class(PTR_PTR_1126b6d30);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  _objc_release(uVar9);
  if ((uVar3 & 1) == 0) goto LAB_105c377c8;
  uVar9 = param_2;
  func_0x00010bf61960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf8b760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126c3488;
  _objc_alloc();
  uVar9 = uVar1;
  func_0x00010bf095c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf09720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf660e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf096c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf09760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e400();
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar2;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  uVar9 = uVar1;
  func_0x00010bf6d220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(ulong *)(lVar8 + 0x28) = uVar9;
  _objc_release(uVar7);
  uVar9 = uVar1;
  func_0x00010c0f0180();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(ulong *)(lVar8 + 0x28) = uVar9;
  _objc_release(uVar7);
  uVar9 = uVar1;
  func_0x00010c28f4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
LAB_105c377b8:
    _objc_release(uVar9);
  }
  else {
    uVar3 = uVar1;
    func_0x00010bfde9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    _objc_release(uVar9);
    if (uVar4 != 0) {
      puVar2 = PTR_PTR_1126c3480;
      _objc_alloc();
      uVar9 = uVar1;
      func_0x00010c28f4c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bfde9e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf66100();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf5aae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05a2a0();
      lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar7 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined **)(lVar8 + 0x28) = puVar2;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar9);
      uVar3 = uVar1;
      func_0x00010c0d0b40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar9 = *(ulong *)(lVar8 + 0x28);
      *(ulong *)(lVar8 + 0x28) = uVar3;
      goto LAB_105c377b8;
    }
  }
  _objc_release(uVar1);
LAB_105c377c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c377ec; end: 105c3782b; -[SCComposerDynamicDeliveryViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c377ec(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c3782c; end: 105c3786f; -[SCComposerDynamicDeliveryViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c3782c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127329f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c37870; end: 105c3787b; -[SCComposerDynamicDeliveryViewController supportedInterfaceOrientations] */

undefined8 FUN_105c37870(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105c3787c; end: 105c37883; -[SCComposerDynamicDeliveryViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_105c3787c(void)

{
  return 1;
}



/* Entry: 105c37884; end: 105c3788b; -[SCComposerDynamicDeliveryViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_105c37884(void)

{
  return 0;
}



/* Entry: 105c3788c; end: 105c378a3; -[SCComposerDynamicDeliveryViewController accessibilityPerformEscape] */

undefined8 FUN_105c3788c(void)

{
  func_0x00010be05440();
  return 1;
}



/* Entry: 105c378a4; end: 105c378d3; -[SCComposerDynamicDeliveryViewController _doDismiss] */

void FUN_105c378a4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c378d4; end: 105c378df; -[SCComposerDynamicDeliveryViewController defaultProjectNameV3] */

void FUN_105c378d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_settings_112667a08);
  return;
}



/* Entry: 105c378e0; end: 105c378eb; -[SCComposerDynamicDeliveryViewController defaultProjectNameV2] */

void FUN_105c378e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_settings_112667a08);
  return;
}



/* Entry: 105c378ec; end: 105c3790b; -[SCComposerDynamicDeliveryViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c378ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127329f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c3790c; end: 105c3791f; -[SCComposerDynamicDeliveryViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c3790c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127329f4,param_3);
  return;
}



/* Entry: 105c37920; end: 105c3797b; -[SCComposerDynamicDeliveryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c37920(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127329f4);
  _objc_storeStrong(param_1 + _DAT_1127329ec,0);
  _objc_storeStrong(param_1 + _DAT_1127329e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127329f0,0);
  return;
}



/* Entry: 105c3797c; end: 105c37987; +[SCCDynamicDeliveryDebugView componentPath] */

undefined ** FUN_105c3797c(void)

{
  return &PTR____CFConstantStringClassReference_110e23618;
}



/* Entry: 105c37988; end: 105c379bb; -[SCCDynamicDeliveryDebugView initWithViewModel:componentContext:runtime:] */

void FUN_105c37988(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec6a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105c379bc; end: 105c37a0b; -[SCCDynamicDeliveryDebugView setViewModel:] */

void FUN_105c379bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c37a0c; end: 105c37a4f; -[SCCDynamicDeliveryDebugView viewModel] */

void FUN_105c37a0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c37a50; end: 105c37a83; -[SCCDynamicDeliveryDebugContext init] */

void FUN_105c37a50(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec6a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105c37a84; end: 105c37a93; +[SCCDynamicDeliveryDebugContext valdiMarshallableObjectDescriptor] */

void FUN_105c37a84(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108de348;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c37a94; end: 105c37acb; -[SCCDynamicDeliveryDebugDynamicDeliveryArchiveAvailability initWithDownloadStatus:readyOnDisk:downloadedArchive:matchesMetadata:size:] */

void FUN_105c37a94(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105c37b88(PTR_PTR_1126ec6b0);
  func_0x000105c37b98(auStack_20);
  return;
}



/* Entry: 105c37acc; end: 105c37adb; +[SCCDynamicDeliveryDebugDynamicDeliveryArchiveAvailability valdiMarshallableObjectDescriptor] */

void FUN_105c37acc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108de390;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c37adc; end: 105c37b0f; -[SCCDynamicDeliveryDebugDynamicDeliveryConfig initWithUrl:sha256:version:creationTime:] */

void FUN_105c37adc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105c37b88(PTR_PTR_1126ec6b8);
  func_0x000105c37b98(auStack_20);
  return;
}



/* Entry: 105c37b10; end: 105c37b1f; +[SCCDynamicDeliveryDebugDynamicDeliveryConfig valdiMarshallableObjectDescriptor] */

void FUN_105c37b10(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_url_1108de420;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c37b20; end: 105c37b5b; -[SCCDynamicDeliveryDebugDynamicDeliveryDebugViewModel initWithLoadedModules:] */

void FUN_105c37b20(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105c37b88(PTR_PTR_1126ec6c0);
  func_0x000105c37b98(auStack_20);
  return;
}



/* Entry: 105c37b5c; end: 105c37b9f; +[SCCDynamicDeliveryDebugDynamicDeliveryDebugViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c37b5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108de498;
  param_1[1] = &PTR_DAT_1108de540;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c37ba0; end: 105c37c1f; -[SCDynamicDeliveryModuleProvider initWithDynamicDeliveryManager:] */

undefined1 * FUN_105c37ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec6c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  func_0x000105c37e70();
  return (undefined1 *)puVar1;
}



/* Entry: 105c37c20; end: 105c37e53; -[SCDynamicDeliveryModuleProvider customModuleDataForPath:error:] */

undefined * FUN_105c37c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x23;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c09bb80(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    unaff_x23 = puVar1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000105c37e68();
    if (unaff_x23 == (undefined *)0x0) {
      *param_4 = 0;
      puVar4 = puVar1;
      func_0x00010c13ca20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105c37da0;
    }
  }
  puVar4 = puVar1;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar4 = puVar2;
    func_0x00010bf98a20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&uStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105c37e78();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = puVar2;
    func_0x00010bf98a40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98940(puVar2);
    func_0x00010bf99240(puVar4,param_2,puVar3,puVar2,unaff_x23);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar4;
    func_0x000105c37e78();
    _objc_release(unaff_x23);
    func_0x000105c37e68();
  }
  puVar4 = (undefined *)0x0;
LAB_105c37da0:
  puVar2 = puVar1;
  _objc_release();
  func_0x000105c37e70();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  func_0x000105c37e68();
  _objc_release(puVar1);
  func_0x000105c37e70();
  __Unwind_Resume();
  return *(undefined **)(puVar2 + 8);
}



/* Entry: 105c37e54; end: 105c37e5b; -[SCDynamicDeliveryModuleProvider dynamicDeliveryManager] */

undefined8 FUN_105c37e54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c37e5c; end: 105c37e7f; -[SCDynamicDeliveryModuleProvider .cxx_destruct] */

void FUN_105c37e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c37e80; end: 105c37ef7; -[SCNComposerDynamicDeliveryBufferedContentFetcherProviderCppProxy initWithCpp:] */

undefined1 * FUN_105c37e80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126ec6d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_105c38394();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105c3836c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c37ef8; end: 105c37f4b; -[SCNComposerDynamicDeliveryBufferedContentFetcherProviderCppProxy provide] */

void FUN_105c37ef8(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_30);
  func_0x00010b0f0090(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c383b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c37f4c; end: 105c38047;  */

void FUN_105c37f4c(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126c3498;
    _objc_opt_class(PTR_PTR_1126c3498);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_1108de5b0;
      uStack_40 = param_2;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_105c380e4);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_105c38344(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_105c38394();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105c38048; end: 105c380a3; -[SCNComposerDynamicDeliveryBufferedContentFetcherProviderCppProxy .cxx_destruct] */

void FUN_105c38048(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108de680;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105c3836c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105c380a4; end: 105c380e3; -[SCNComposerDynamicDeliveryBufferedContentFetcherProviderCppProxy .cxx_construct] */

undefined8 * FUN_105c380a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_105c38394();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105c380e4; end: 105c381d7;  */

void FUN_105c380e4(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_1108de5f0;
  puVar1[3] = &PTR_DAT_1108de668;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_105c38394();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_1108de640;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_105c38344(&uStack_50);
  return;
}



/* Entry: 105c381d8; end: 105c381db;  */

void FUN_105c381d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108de5f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


