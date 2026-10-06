/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050b6574; end: 1050b657b; -[SCProfileCharmsSection actionHandler] */

undefined8 FUN_1050b6574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1050b657c; end: 1050b65ab; -[SCProfileCharmsSection setActionHandler:] */

void FUN_1050b657c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1050b65ac; end: 1050b65b3; -[SCProfileCharmsSection charmsDataProvider] */

undefined8 FUN_1050b65ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1050b65b4; end: 1050b65cb; -[SCProfileCharmsSection charmsBlizzardLogger] */

void FUN_1050b65b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050b65cc; end: 1050b65d7; -[SCProfileCharmsSection setCharmsBlizzardLogger:] */

void FUN_1050b65cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 1050b65d8; end: 1050b65df; -[SCProfileCharmsSection useLegacySectionReloadOnCountTransition] */

undefined1 FUN_1050b65d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 1050b65e0; end: 1050b65e7; -[SCProfileCharmsSection setUseLegacySectionReloadOnCountTransition:] */

void FUN_1050b65e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1050b65e8; end: 1050b669b; -[SCProfileCharmsSection .cxx_destruct] */

void FUN_1050b65e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 1050b669c; end: 1050b6c33; -[SCProfileCharmsCardViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1050b669c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  
  puStack_90 = PTR_PTR_1126e5ff8;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126b48b8;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11271b9fc;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c17a300(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b48c0;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11271ba00;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c17a300(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    _objc_initWeak(auStack_a0,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1050b6c34;
    puStack_b0 = &UNK_110866290;
    _objc_copyWeak(auStack_a8,auStack_a0);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba04);
    *(undefined **)((long)puVar1 + (long)_DAT_11271ba04) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    puStack_f0 = puVar2;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1050b6c74;
    puStack_d8 = &UNK_1108662c0;
    _objc_copyWeak(auStack_d0,auStack_a0);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba08);
    *(undefined **)((long)puVar1 + (long)_DAT_11271ba08) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    puStack_118 = puVar2;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x1050b6cb4;
    puStack_100 = &UNK_1108662f0;
    _objc_copyWeak(auStack_f8,auStack_a0);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba0c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271ba0c) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    puStack_140 = puVar2;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x1050b6cf4;
    puStack_128 = &UNK_110866320;
    _objc_copyWeak(auStack_120,auStack_a0);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba10);
    *(undefined **)((long)puVar1 + (long)_DAT_11271ba10) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    puStack_168 = puVar2;
    uStack_160 = 0xc2000000;
    uStack_158 = 0x1050b6d34;
    puStack_150 = &UNK_110858d90;
    _objc_copyWeak(auStack_148,auStack_a0);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba14);
    *(undefined **)((long)puVar1 + (long)_DAT_11271ba14) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    puStack_190 = puVar2;
    uStack_188 = 0xc2000000;
    uStack_180 = 0x1050b6d74;
    puStack_178 = &UNK_110866320;
    _objc_copyWeak(auStack_170,auStack_a0);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba18);
    *(undefined **)((long)puVar1 + (long)_DAT_11271ba18) = puVar4;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b48c8;
    _objc_opt_new();
    lVar6 = (long)_DAT_11271ba1c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_copyWeak(auStack_198,auStack_a0);
    func_0x00010c1d4340(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010c18e180();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_198);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
  }
  return puVar1;
}



/* Entry: 1050b6c34; end: 1050b6db3;  */

void FUN_1050b6c34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be3b3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050b6db4; end: 1050b6e57;  */

void FUN_1050b6db4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1050b6e58;
  puStack_50 = &UNK_110849d70;
  _objc_copyWeak(auStack_48,param_3 + 0x20);
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1050b6e58; end: 1050b6e8b;  */

void FUN_1050b6e58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1c91c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050b6e8c; end: 1050b6ecb; -[SCProfileCharmsCardViewCell _isDarkMode] */

bool FUN_1050b6e8c(long param_1)

{
  long lVar1;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 1050b6ecc; end: 1050b788b; -[SCProfileCharmsCardViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b6ecc(double param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126e5ff8;
  puStack_a0 = param_3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_layoutSubviews_112600e60);
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar14 = param_1;
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010be3f740();
  if ((int)puVar1 == 0) {
    puVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    puVar2 = (undefined *)(ulong)(byte)param_3[_DAT_11271ba20];
    func_0x000106625410(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf31a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bf31a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  lVar8 = (long)_DAT_11271ba20;
  func_0x0001066253c4(param_3[lVar8]);
  puVar3 = param_3;
  func_0x00010bf31a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(dVar14,param_2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar10 = 6.0;
  if (param_3[lVar8] == '\0') {
    dVar10 = 5.0;
  }
  dVar14 = (dVar10 + (dVar14 + -107.0) * ((20.0 - dVar10) / 173.0)) * 0.5;
  puVar3 = param_3;
  func_0x00010bf31a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(dVar14);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  uVar11 = 0xbf741ff6878bfc73;
  dVar14 = (dVar14 + -107.0) * -0.004913294797687861 + 1.0;
  puVar3 = param_3;
  func_0x00010bf31a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(dVar14);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar14 = (dVar14 + -107.0) * 0.06936416184971098 + 10.0;
  puVar3 = param_3;
  func_0x00010bf31a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar14);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf31a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(puVar1);
  lVar7 = (long)_DAT_11271ba14;
  lVar4 = *(long *)(param_3 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar5 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202c80(dVar14,uVar11);
    _objc_release(uVar5);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    uVar5 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar14,uVar11);
    _objc_release(uVar5);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar14 = (dVar14 + -107.0) * 0.06936416184971098 + 10.0;
    uVar6 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar14);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(puVar1);
  }
  dVar10 = (param_1 + -107.0) * 0.005780346820809248 + 0.0;
  lVar7 = (long)_DAT_11271ba18;
  lVar4 = *(long *)(param_3 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar5 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202c80(dVar14,uVar11);
    _objc_release(uVar5);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    uVar5 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar14,uVar11);
    _objc_release(uVar5);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar14 = (dVar14 + -107.0) * 0.06936416184971098 + 10.0;
    uVar5 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar14);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(puVar1);
    uVar11 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11271ba24));
    _objc_release(uVar11);
    func_0x00010be3f740(param_3);
    uVar11 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar11);
  }
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x000106625528();
  lVar4 = (long)_DAT_11271b9fc;
  func_0x00010c202c80(*(undefined8 *)(param_3 + lVar4));
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34840();
  func_0x00010c17a840(*(undefined8 *)(param_3 + lVar4));
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar9 = (dVar14 + -107.0) * 0.046242774566473986 + 8.0;
  func_0x00010c2172c0(dVar9,*(undefined8 *)(param_3 + lVar4));
  _objc_release(puVar1);
  lVar7 = (long)_DAT_11271ba00;
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar7));
  func_0x00010c202c80(*(undefined8 *)(param_3 + lVar7));
  puVar1 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34840();
  func_0x00010c17a840(*(undefined8 *)(param_3 + lVar7));
  _objc_release(puVar1);
  func_0x00010bf1fec0(*(undefined8 *)(param_3 + lVar4));
  puVar1 = param_3;
  dVar14 = dVar9;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar12 = -0.023121387283236993;
  func_0x00010c2172c0(dVar9 + (dVar14 + -107.0) * -0.023121387283236993 + 8.0,
                      *(undefined8 *)(param_3 + lVar7));
  _objc_release(puVar1);
  dVar14 = dVar10;
  func_0x00010be490c0(param_3);
  lVar4 = (long)_DAT_11271ba28;
  dVar9 = dVar14;
  dVar13 = dVar12;
  if (*(long *)(param_3 + lVar4) != 0) {
    func_0x00010c0699c0();
    puVar1 = param_3;
    dVar9 = dVar14;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar13 = dVar9 + -107.0;
    _objc_release(puVar1);
    dVar9 = dVar9 * 0.5 - dVar14 * 0.5;
    dVar13 = (dVar13 * 0.31213872832369943 + 31.0 +
             dVar13 * 0.046242774566473986 + 8.0 + (dVar13 * 0.7167630057803468 + 70.0) * 0.5) -
             dVar12 * 0.5;
    func_0x00010c19f0e0(dVar9,dVar13,dVar14,dVar12,*(undefined8 *)(param_3 + lVar4));
  }
  lVar7 = (long)_DAT_11271ba0c;
  lVar4 = *(long *)(param_3 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = dVar9;
  if (lVar4 != 0) {
    uVar11 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01b40();
    dVar12 = dVar9;
    _objc_release(uVar11);
    _objc_release(lVar4);
    dVar14 = dVar12;
    if (dVar9 != 0.0) {
      uVar11 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0();
      dVar9 = dVar12;
      _objc_release(uVar11);
      puVar1 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5040();
      puVar3 = param_3;
      dVar14 = dVar9;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      dVar9 = dVar9 - ((dVar14 + -107.0) * 0.06358381502890173 + 5.0);
      dVar14 = dVar9 - dVar12;
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar1 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(puVar1);
      uVar11 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar14,(dVar9 + -107.0) * 0.06358381502890173 + 5.0,dVar12,dVar13);
      _objc_release(uVar11);
    }
  }
  lVar7 = (long)_DAT_11271ba10;
  lVar4 = *(long *)(param_3 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    dVar9 = dVar14 + -6.0;
    uVar11 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    dVar14 = dVar14 * 0.5;
    dVar9 = dVar9 - dVar14;
    uVar5 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    uVar6 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar9,dVar14 * 0.5 + 13.0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar11);
    _objc_release(puVar1);
    dVar14 = 0.0;
    if (param_3[lVar8] == '\0') {
      dVar14 = dVar10;
    }
    uVar11 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar14);
    _objc_release(uVar11);
  }
  return;
}



/* Entry: 1050b788c; end: 1050b789b; -[SCProfileCharmsCardViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b788c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271b9fc),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 1050b789c; end: 1050b78d3; -[SCProfileCharmsCardViewCell setOnCharmFirstTappable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b789c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271ba2c);
  *(undefined8 *)(param_1 + _DAT_11271ba2c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050b78d4; end: 1050b7917; -[SCProfileCharmsCardViewCell shouldAdjustBackgroundColorForHighlightedState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1050b78d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271ba30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 1050b7918; end: 1050b7cbf; -[SCProfileCharmsCardViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b7918(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11271ba34;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_1050b7ca0;
    }
    puVar2 = PTR_PTR_1126b4888;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_11271ba2c;
    if (*(long *)(param_1 + lVar6) != 0) {
      (**(code **)(*(long *)(param_1 + lVar6) + 0x10))();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = 0;
      _objc_release(uVar3);
    }
    uVar1 = uVar5;
    func_0x00010c282d00();
    *(char *)(param_1 + _DAT_11271ba20) = (char)uVar1;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271b9fc);
    uVar1 = uVar5;
    func_0x00010bf4ddc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(uVar3);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271ba00);
    uVar1 = uVar5;
    func_0x00010c271800(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216660(uVar3);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271ba04);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf35b40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar1 = uVar5;
    func_0x00010c282d00();
    if ((int)uVar1 == 0) {
      lVar8 = (long)_DAT_11271ba10;
      lVar6 = *(long *)(param_1 + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar8));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      plVar7 = (long *)(param_1 + _DAT_11271ba0c);
      uVar3 = 0;
    }
    else {
      plVar7 = (long *)(param_1 + _DAT_11271ba0c);
      lVar6 = *plVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar3 = 0x3ff0000000000000;
      if (lVar6 == 0) {
        func_0x00010bf57500(*plVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    lVar6 = *plVar7;
    func_0x00010c269d40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar3);
    _objc_release(lVar6);
    uVar1 = uVar5;
    func_0x00010c262da0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c243540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    lVar8 = (long)_DAT_11271ba28;
    lVar6 = *(long *)(param_1 + lVar8);
    if (uVar4 == 0) {
      func_0x00010c12c960(lVar6);
    }
    else {
      if (lVar6 == 0) {
        puVar2 = PTR_PTR_1126b48d0;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar3 = *(undefined8 *)(param_1 + lVar8);
        *(undefined **)(param_1 + lVar8) = puVar2;
        _objc_release(uVar3);
        func_0x00010c17a300(*(undefined8 *)(param_1 + lVar8));
        lVar6 = *(long *)(param_1 + lVar8);
      }
      uVar1 = uVar5;
      func_0x00010c262da0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c243540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c20e500(lVar6);
      _objc_release(uVar4);
      _objc_release(uVar1);
      lVar6 = param_1;
      func_0x00010bf31be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar6);
    }
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
  }
  _objc_release(uVar5);
LAB_1050b7ca0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050b7cc0; end: 1050b7cd3; +[SCProfileCharmsCardViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_1050b7cc0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x405f000000000000;
  auVar1._0_8_ = 0x405ac00000000000;
  return auVar1;
}



/* Entry: 1050b7cd4; end: 1050b7e1f; -[SCProfileCharmsCardViewCell cardDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b7cd4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + _DAT_11271ba30;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_release(lVar2);
  if (lVar3 == 1) {
    lVar2 = (long)_DAT_11271b9fc;
    func_0x00010c222e60(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c228560(*(undefined8 *)(param_1 + lVar2));
    lVar3 = (long)_DAT_11271ba18;
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    lVar4 = (long)_DAT_11271ba14;
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bef9e00(param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
    return;
  }
  return;
}



/* Entry: 1050b7e20; end: 1050b7ee3; -[SCProfileCharmsCardViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b7e20(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e5ff8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010c12d200(param_1);
  func_0x00010c1c91c0(*(undefined8 *)PTR__UIOffsetZero_110345d40,
                      *(undefined8 *)(PTR__UIOffsetZero_110345d40 + 8),param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271ba14);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271ba18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050b7ee4; end: 1050b7feb; -[SCProfileCharmsCardViewCell cardWillDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b7ee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010c12d200(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11271ba1c));
  func_0x00010c1c91c0(*(undefined8 *)PTR__UIOffsetZero_110345d40,
                      *(undefined8 *)(PTR__UIOffsetZero_110345d40 + 8),param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271ba14);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271ba18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1050b7fec;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1050b8070;
  puStack_68 = &UNK_110841f20;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010bf03420(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58,
                      &puStack_80);
  return;
}



/* Entry: 1050b7fec; end: 1050b80ff;  */

void FUN_1050b7fec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf31be0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050b8100; end: 1050b81a3; -[SCProfileCharmsCardViewCell handleTapCollectionViewOrOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b8100(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_11271ba30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271ba38),param_2,param_1,puVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1050b81a4; end: 1050b834f; -[SCProfileCharmsCardViewCell handleCharmViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b81a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_11271ba30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_release(lVar1);
  if ((lVar2 == 1) && (*(char *)(param_1 + _DAT_11271ba20) == '\x01')) {
    lVar2 = (long)_DAT_11271ba10;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1050b82a8;
    puStack_40 = &UNK_110842e18;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1050b8350;
    puStack_68 = &UNK_110841f20;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010bf03420(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58,
                        &puStack_80);
  }
  return;
}



/* Entry: 1050b8350; end: 1050b83cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b8350(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  _CGAffineTransformMakeScale(auStack_50,0x3ff0000000000000,0x3ff0000000000000);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271ba0c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  func_0x00010be33360(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1050b83cc; end: 1050b843b; -[SCProfileCharmsCardViewCell handleContentViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b83cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11271ba30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_release(lVar1);
  if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c222e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11271b9fc),PTR_s_setViewed__1126665c0,1);
    return;
  }
  return;
}



/* Entry: 1050b843c; end: 1050b84ab; -[SCProfileCharmsCardViewCell _initializeDescription] */

void FUN_1050b843c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b48d8;
  _objc_alloc(PTR_PTR_1126b48d8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c17a300();
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050b84ac; end: 1050b8513; -[SCProfileCharmsCardViewCell _initializeSpacer] */

void FUN_1050b84ac(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b48e0;
  _objc_alloc(PTR_PTR_1126b48e0);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050b8514; end: 1050b8583; -[SCProfileCharmsCardViewCell _initializeNewBadge] */

void FUN_1050b8514(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b48e8;
  _objc_alloc(PTR_PTR_1126b48e8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c17a300();
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050b8584; end: 1050b86db; -[SCProfileCharmsCardViewCell _initializeActionButton] */

void FUN_1050b8584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar2 = puVar1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d0ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c202c80(0x4040000000000000,0x4040000000000000,puVar1);
  func_0x00010c21e900(puVar1,param_2,1);
  func_0x00010c1677c0(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar2);
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050b86dc; end: 1050b8793; -[SCProfileCharmsCardViewCell _initializeShadowView] */

void FUN_1050b86dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = param_1;
  func_0x00010be3f740();
  uVar1 = 0x28;
  if ((int)uVar3 != 0) {
    uVar1 = 0x29;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050b8794; end: 1050b89b7; -[SCProfileCharmsCardViewCell _initializeGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b8794(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0648;
  _objc_alloc_init();
  func_0x00010c1aa9a0();
  puVar2 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010bfe8280(PTR_PTR_1126ae6b8,param_2,&PTR____CFConstantStringClassReference_110dc4ef8,
                      puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c17d4c0(puVar1,param_2,1);
  func_0x00010c182220(puVar1,param_2,0);
  func_0x00010c1677c0(0,puVar1);
  lVar8 = param_1;
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(lVar8);
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11271ba24;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar3;
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar8),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar3);
  func_0x00010be3f740(param_1);
  func_0x00010c1a7f60(puVar1,param_2,param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar2 + _DAT_11271ba30;
  _objc_loadWeakRetained();
  puVar3 = puVar1;
  func_0x00010c252440();
  _objc_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(puVar2 + _DAT_11271ba38),param_2,puVar2,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050b89b8; end: 1050b8a57; -[SCProfileCharmsCardViewCell _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b89b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_11271ba30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271ba38),param_2,param_1,puVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1050b8a58; end: 1050b8afb; -[SCProfileCharmsCardViewCell _handleSwipeDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b8a58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_11271ba30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271ba38),param_2,param_1,puVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1050b8afc; end: 1050b8c27; -[SCProfileCharmsCardViewCell _handleTapActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b8afc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = param_1 + _DAT_11271ba30;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b4888;
  if (lVar3 == 1) {
    uVar6 = *(ulong *)(param_1 + _DAT_11271ba34);
    _objc_retain(uVar6);
    _objc_opt_class(puVar4);
    uVar5 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar4);
    uVar1 = uVar6;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    if (uVar1 != 0) {
      puVar4 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010bf35be0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar4);
      _objc_release(uVar6);
      func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271ba38));
      _objc_release(puVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1050b8c28; end: 1050b8d13; -[SCProfileCharmsCardViewCell _handleViewedAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b8c28(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b4888;
  uVar4 = *(ulong *)(param_1 + _DAT_11271ba34);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010bf35be0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar2);
    _objc_release(uVar4);
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271ba38));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050b8d14; end: 1050b91f7; -[SCProfileCharmsCardViewCell _layoutDescriptionAndSpacerViewWithExpandProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b8d14(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  
  lVar10 = (long)_DAT_11271ba04;
  dVar13 = param_1;
  if (param_1 == 0.0) {
    lVar2 = *(long *)(param_2 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      return;
    }
  }
  lVar2 = *(long *)(param_2 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_2 + lVar10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b4888;
    uVar9 = *(ulong *)(param_2 + _DAT_11271ba34);
    _objc_retain(uVar9);
    _objc_opt_class(puVar4);
    uVar5 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar4);
    uVar1 = uVar9;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar9);
    uVar5 = uVar1;
    func_0x00010bf35b40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c212f20(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  func_0x00010bf1fec0(*(undefined8 *)(param_2 + _DAT_11271ba00));
  lVar2 = param_2;
  dVar11 = dVar13;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar11 = (dVar11 + -107.0) * 0.06936416184971098 + 0.0;
  dVar13 = dVar13 + dVar11;
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fec0();
  dVar14 = dVar11 - dVar13;
  lVar7 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  uVar12 = 0x3fa7ad2208e0ecc3;
  dVar14 = dVar14 - ((dVar11 + -107.0) * 0.046242774566473986 + 8.0);
  _objc_release(lVar7);
  _objc_release(lVar2);
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
  }
  func_0x00010bf6e5c0(dVar14,uVar3);
  uVar6 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202c80(dVar14,uVar12);
  _objc_release(uVar6);
  _objc_release(uVar3);
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34840();
  uVar3 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a840(dVar14);
  _objc_release(uVar3);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2172c0(dVar13);
  _objc_release(uVar3);
  dVar14 = (double)(ulong)(uint)(float)param_1;
  uVar6 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0();
  _objc_release(uVar3);
  _objc_release(uVar6);
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fec0();
  uVar3 = *(undefined8 *)(param_2 + lVar10);
  dVar13 = dVar14;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fec0();
  _objc_release(uVar3);
  _objc_release(lVar2);
  dVar11 = 0.0;
  if (60.0 <= dVar14 - dVar13) {
    dVar11 = param_1;
  }
  dVar11 = (double)(ulong)(uint)(float)dVar11;
  lVar2 = (long)_DAT_11271ba08;
  uVar6 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(dVar11);
  _objc_release(uVar3);
  _objc_release(uVar6);
  if (dVar14 - dVar13 < 60.0) {
    lVar7 = *(long *)(param_2 + lVar2);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      return;
    }
  }
  lVar7 = *(long *)(param_2 + lVar2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_2 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar7 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x0001066256b4();
  uVar3 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202c80(dVar11,uVar12);
  _objc_release(uVar3);
  _objc_release(lVar7);
  lVar7 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34840();
  lVar8 = param_2;
  dVar13 = dVar11;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fec0();
  uVar3 = *(undefined8 *)(param_2 + lVar10);
  dVar14 = dVar13;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fec0();
  uVar12 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar11,(dVar13 + dVar14) * 0.5);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1050b91f8; end: 1050b93a3; -[SCProfileCharmsCardViewCell setMotionOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b91f8(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pdVar1 = (double *)(param_3 + _DAT_11271ba3c);
  bVar2 = false;
  if ((param_1 == *pdVar1) && (bVar2 = false, !NAN(param_2) && !NAN(pdVar1[1]))) {
    bVar2 = param_2 == pdVar1[1];
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    func_0x00010c287d40(param_1,param_2,*(undefined8 *)(param_3 + _DAT_11271b9fc));
    dStack_f8 = param_2 * 0.6;
    dStack_108 = param_1 * 0.6;
    dVar5 = (((dStack_f8 * dStack_f8 + dStack_108 * dStack_108) * 0.5) / -0.017134729863002355) *
            1.2 + 1.2;
    dStack_100 = 1.0;
    if (dVar5 <= 1.0) {
      dStack_100 = dVar5;
    }
    lVar3 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    uStack_c0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    uStack_b0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_e0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_88 = 0xbf43a92a30553261;
    uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    func_0x00010c20f020();
    _objc_release(lVar4);
    _objc_release(lVar3);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1050b93a4;
    puStack_118 = &UNK_110866380;
    lStack_110 = param_3;
    dStack_f0 = param_1;
    dStack_e8 = param_2;
    func_0x00010bf03440(0x3fb999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_4,0x30002,
                        &puStack_130,0);
  }
  return;
}



/* Entry: 1050b93a4; end: 1050b961f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1050b93a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CATransform3DMakeRotation(&uStack_e8,-*(double *)(param_1 + 0x28),0,0x3ff0000000000000,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf31be0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uStack_a0;
  uStack_130 = uStack_a8;
  uStack_118 = uStack_90;
  uStack_120 = uStack_98;
  uStack_108 = uStack_80;
  uStack_110 = uStack_88;
  uStack_f8 = uStack_70;
  uStack_100 = uStack_78;
  uStack_168 = uStack_e0;
  uStack_170 = uStack_e8;
  uStack_158 = uStack_d0;
  uStack_160 = uStack_d8;
  uStack_148 = uStack_c0;
  uStack_150 = uStack_c8;
  uStack_138 = uStack_b0;
  uStack_140 = uStack_b8;
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_170);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c6a0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dbf258,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar4;
  _objc_alloc();
  func_0x00010c062fe0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x30));
  puVar4 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11271ba24;
  func_0x00010c17eb60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  dVar8 = ABS(*(double *)(param_1 + 0x38));
  dVar9 = ABS(*(double *)(param_1 + 0x28));
  if (dVar9 <= dVar8) {
    dVar9 = dVar8;
  }
  if (dVar9 != 0.0) {
    func_0x00010c209760(0.5 - (*(double *)(param_1 + 0x28) / dVar9) * 0.5,
                        0.5 - (*(double *)(param_1 + 0x38) / dVar9) * 0.5,
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7));
    func_0x00010c196020((*(double *)(param_1 + 0x28) / dVar9) * 0.5 + 0.5,
                        (*(double *)(param_1 + 0x38) / dVar9) * 0.5 + 0.5,
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7));
  }
  _CGAffineTransformMakeTranslation
            (&uStack_1a0,*(double *)(param_1 + 0x40) * 8.0,*(double *)(param_1 + 0x48) * 8.0);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271ba14);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uStack_198;
  uStack_170 = uStack_1a0;
  uStack_158 = uStack_188;
  uStack_160 = uStack_190;
  uStack_148 = uStack_178;
  uStack_150 = uStack_180;
  func_0x00010c219960();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar7;
  }
  ___stack_chk_fail();
  return *(long *)(lVar7 + _DAT_11271ba38);
}



/* Entry: 1050b9620; end: 1050b962f; -[SCProfileCharmsCardViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050b9620(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ba38);
}



/* Entry: 1050b9630; end: 1050b966f; -[SCProfileCharmsCardViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b9630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ba38;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050b9670; end: 1050b967f; -[SCProfileCharmsCardViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050b9670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ba34);
}



/* Entry: 1050b9680; end: 1050b969f; -[SCProfileCharmsCardViewCell collectionViewCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b9680(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ba30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050b96a0; end: 1050b96b3; -[SCProfileCharmsCardViewCell setCollectionViewCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b96a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ba30,param_3);
  return;
}



/* Entry: 1050b96b4; end: 1050b97bf; -[SCProfileCharmsCardViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b96b4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ba30);
  _objc_storeStrong(param_1 + _DAT_11271ba34,0);
  _objc_storeStrong(param_1 + _DAT_11271ba38,0);
  _objc_storeStrong(param_1 + _DAT_11271ba2c,0);
  _objc_storeStrong(param_1 + _DAT_11271ba1c,0);
  _objc_storeStrong(param_1 + _DAT_11271ba24,0);
  _objc_storeStrong(param_1 + _DAT_11271ba18,0);
  _objc_storeStrong(param_1 + _DAT_11271ba14,0);
  _objc_storeStrong(param_1 + _DAT_11271ba10,0);
  _objc_storeStrong(param_1 + _DAT_11271ba0c,0);
  _objc_storeStrong(param_1 + _DAT_11271ba08,0);
  _objc_storeStrong(param_1 + _DAT_11271ba04,0);
  _objc_storeStrong(param_1 + _DAT_11271ba00,0);
  _objc_storeStrong(param_1 + _DAT_11271ba28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b9fc,0);
  return;
}



/* Entry: 1050b97c0; end: 1050b9a3b; -[SCProfileCharmsCardViewCellContentView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1050b97c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e6000;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR_PTR_1126b48f0;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar5 = (long)_DAT_11271ba40;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1ec940(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar6 = (long)_DAT_11271ba44;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = puVar1;
    func_0x00010be3b620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba48);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11271ba48) = puVar3;
    _objc_release(uVar4);
    func_0x00010c1c2ca0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR_PTR_1126b48f0;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar5 = (long)_DAT_11271ba4c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0);
    _objc_release(uVar4);
    func_0x00010c1ec940(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba50);
    *(undefined **)((long)puVar1 + (long)_DAT_11271ba50) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_initWeak(auStack_78,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba54);
    *(undefined **)((long)puVar1 + (long)_DAT_11271ba54) = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  return puVar1;
}



/* Entry: 1050b9a3c; end: 1050b9a7b;  */

void FUN_1050b9a3c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be3b620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050b9a7c; end: 1050b9d07; -[SCProfileCharmsCardViewCellContentView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b9a7c(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126e6000;
  lStack_90 = param_3;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010c2a5040(param_3);
  dVar7 = param_1 * 0.5;
  func_0x00010bfe0640(param_3);
  dVar8 = param_1 * 0.5;
  lVar2 = (long)_DAT_11271ba58;
  lVar4 = param_3 + lVar2;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c23d0a0();
  func_0x000106625564();
  dVar6 = param_1;
  _objc_release(lVar4);
  lVar3 = (long)_DAT_11271ba40;
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8ca0();
  dVar9 = dVar6;
  _objc_release(uVar1);
  lVar4 = param_3 + lVar2;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c23d0a0();
  dVar9 = (dVar9 + -107.0) * -0.005780346820809248 + 1.0;
  _objc_release(lVar4);
  fVar5 = (float)dVar9;
  if (dVar9 <= (double)SUB84(dVar6,0)) {
    fVar5 = SUB84(dVar6,0);
  }
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8ca0();
  dVar9 = param_2 * 0.5;
  dVar6 = param_1 * 0.5;
  if (fVar5 != 0.0) {
    dVar9 = param_2;
    dVar6 = param_1;
  }
  func_0x00010c202c80(dVar6,dVar9,*(undefined8 *)(param_3 + lVar3));
  _objc_release(uVar1);
  dVar6 = dVar7;
  func_0x00010c17a6a0(dVar7,dVar8,*(undefined8 *)(param_3 + lVar3));
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11271ba44));
  lVar4 = (long)_DAT_11271ba4c;
  uVar1 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8ca0();
  dVar9 = dVar6;
  _objc_release(uVar1);
  lVar2 = param_3 + lVar2;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c23d0a0();
  dVar9 = (dVar9 + -107.0) * 0.005780346820809248 + 0.0;
  _objc_release(lVar2);
  fVar5 = SUB84(dVar6,0);
  if (dVar9 <= (double)SUB84(dVar6,0)) {
    fVar5 = (float)dVar9;
  }
  uVar1 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8ca0();
  dVar9 = param_2 * 0.5;
  dVar6 = param_1 * 0.5;
  if (fVar5 != 0.0) {
    dVar9 = param_2;
    dVar6 = param_1;
  }
  func_0x00010c202c80(dVar6,dVar9,*(undefined8 *)(param_3 + lVar4));
  _objc_release(uVar1);
  func_0x00010c17a6a0(dVar7,dVar8,*(undefined8 *)(param_3 + lVar4));
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar4));
  func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11271ba50));
  return;
}



/* Entry: 1050b9d08; end: 1050b9d67; -[SCProfileCharmsCardViewCellContentView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b9d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271ba40);
  _objc_retain(param_3);
  func_0x00010c1aa200(uVar1,param_2,param_3);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_11271ba4c),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050b9d68; end: 1050ba1ef; -[SCProfileCharmsCardViewCellContentView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050b9d68(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11271ba5c;
  uVar6 = *(ulong *)(param_1 + lVar8);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  uVar5 = param_3;
  if (uVar6 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar1 = uVar6;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar6);
      if ((uVar1 & 1) != 0) goto LAB_1050ba1a4;
    }
    puVar2 = PTR_PTR_1126b4868;
    uVar7 = *(ulong *)(param_1 + lVar8);
    _objc_retain(uVar7);
    _objc_opt_class(puVar2);
    uVar1 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar6 = uVar7;
    if ((uVar1 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126b4868;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = param_3;
    _objc_release(uVar3);
    uVar1 = uVar5;
    func_0x00010c09ce80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11271ba40;
    func_0x00010c1bec20(*(undefined8 *)(param_1 + lVar8));
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010c252ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c252ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(uVar7);
    if (uVar1 == uVar7) {
      _objc_release(uVar7);
      _objc_release(uVar1);
      _objc_release(uVar7);
      _objc_release(uVar1);
    }
    else {
      if (uVar7 == 0) {
        _objc_release();
        _objc_release(uVar1);
      }
      else {
        uVar4 = uVar1;
        func_0x00010c071ae0();
        _objc_release(uVar7);
        _objc_release(uVar1);
        _objc_release(uVar7);
        _objc_release(uVar1);
        if ((uVar4 & 1) != 0) goto LAB_1050ba01c;
      }
      _objc_initWeak(auStack_68,param_1);
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      uVar1 = uVar5;
      func_0x00010c252ba0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1050ba1f0;
      puStack_78 = &UNK_1108663e0;
      _objc_retain(uVar5);
      uStack_70 = uVar5;
      _objc_copyWeak(auStack_98,auStack_68);
      func_0x00010c1cc220(uVar3);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_98);
      _objc_release(uStack_70);
      _objc_destroyWeak(auStack_68);
    }
LAB_1050ba01c:
    uVar1 = uVar6;
    func_0x00010bf1ba40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf1ba40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(uVar7);
    if (uVar1 == uVar7) {
      _objc_release(uVar7);
      _objc_release(uVar1);
      _objc_release(uVar7);
      _objc_release(uVar1);
    }
    else {
      if (uVar7 == 0) {
        _objc_release();
        _objc_release(uVar1);
      }
      else {
        uVar4 = uVar1;
        func_0x00010c071ae0();
        _objc_release(uVar7);
        _objc_release(uVar1);
        _objc_release(uVar7);
        _objc_release(uVar1);
        if ((uVar4 & 1) != 0) goto LAB_1050ba198;
      }
      uVar1 = uVar6;
      func_0x00010bf1ba40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 == 0) {
        func_0x00010befbb60(param_1);
      }
      else {
        uVar1 = uVar5;
        func_0x00010bf1ba40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar1 == 0) {
          func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11271ba4c));
        }
      }
      *(undefined1 *)(param_1 + _DAT_11271ba60) = 0;
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4bc0(0x3f800000);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11271ba4c);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4bc0(0);
      _objc_release(uVar3);
      func_0x00010c1cbe20(param_1);
      func_0x00010c08cdc0(param_1);
    }
  }
LAB_1050ba198:
  _objc_release(uVar5);
  _objc_release(uVar6);
LAB_1050ba1a4:
  _objc_release(param_3);
  return;
}



/* Entry: 1050ba1f0; end: 1050ba2ef;  */

void FUN_1050ba1f0(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010c07c2c0();
  if (iVar1 == 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
  }
  else {
    func_0x00010c23d0a0(param_3);
    dVar5 = param_1 / 1.266;
    func_0x00010c23d0a0(param_3);
    dVar4 = dVar5 * 0.5;
    dVar6 = param_1 * 0.5 - dVar4;
    func_0x00010c23d0a0(param_3);
    uVar2 = param_3;
    func_0x00010bf5c7a0(dVar6,(dVar4 * 11.0) / 100.0,dVar5,dVar5,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5c7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x0001066258d0(dVar5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050ba2f0; end: 1050ba323;  */

void FUN_1050ba2f0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec26e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ba324; end: 1050ba4fb; -[SCProfileCharmsCardViewCellContentView setupBitmojiImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ba324(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar5 = &DAT_11271ba4c;
  *(undefined1 *)(param_1 + _DAT_11271ba60) = 0;
  puVar2 = PTR_PTR_1126b4868;
  uVar6 = *(ulong *)(param_1 + _DAT_11271ba5c);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  lVar8 = (long)_DAT_11271ba4c;
  lVar4 = *(long *)(param_1 + lVar8);
  func_0x00010c0d7b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
LAB_1050ba3d4:
    uVar3 = uVar1;
    func_0x00010bf1ba40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      _objc_release(puVar5);
      _objc_release(lVar4);
    }
    if (uVar3 != 0) goto LAB_1050ba410;
  }
  else {
    puVar5 = *(undefined **)(param_1 + lVar8);
    func_0x00010bf869a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) goto LAB_1050ba3d4;
    _objc_release(lVar4);
  }
  func_0x00010c1cc200(*(undefined8 *)(param_1 + lVar8));
LAB_1050ba410:
  uVar3 = uVar1;
  func_0x00010bf1ba40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    uVar3 = uVar1;
    func_0x00010bf1ba40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1cc220(uVar7);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1050ba4fc; end: 1050ba52f;  */

void FUN_1050ba4fc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd47a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ba530; end: 1050ba53f; -[SCProfileCharmsCardViewCellContentView setViewed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ba530(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271ba64) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec2730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__staticToBitmojiTransition_11258e370);
  return;
}



/* Entry: 1050ba540; end: 1050ba5c3; -[SCProfileCharmsCardViewCellContentView updateMotionOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ba540(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bed9740(param_3,param_4,*(undefined8 *)(param_3 + _DAT_11271ba48),
                      *(undefined8 *)(param_3 + _DAT_11271ba44));
  uVar1 = *(undefined8 *)(param_3 + _DAT_11271ba54);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed9740(param_1,param_2,param_3,param_4,uVar1,
                      *(undefined8 *)(param_3 + _DAT_11271ba50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050ba5c4; end: 1050ba6ef; -[SCProfileCharmsCardViewCellContentView _staticToBitmojiTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ba5c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*(char *)(param_3 + _DAT_11271ba64) == '\x01') &&
     (*(char *)(param_3 + _DAT_11271ba60) == '\x01')) {
    lVar4 = (long)_DAT_11271ba58;
    lVar1 = param_3 + lVar4;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf40680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252440();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 1) {
      lVar4 = param_3 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c23d0a0();
      func_0x000106625564();
      _objc_release(lVar4);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1050ba6f0;
      puStack_70 = &UNK_110858dc0;
      lStack_68 = param_3;
      uStack_60 = param_1;
      uStack_58 = param_2;
      func_0x00010bf03460(0x3fe0000000000000,0,0x3fe8000000000000,0,
                          PTR__OBJC_CLASS___UIView_1126aec20,param_4,0x30002,&puStack_88,0);
    }
  }
  return;
}



/* Entry: 1050ba6f0; end: 1050ba7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ba6f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  
  lVar2 = (long)_DAT_11271ba4c;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar1);
  func_0x00010c202c80(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  auVar4 = NEON_fmov(0x3fe0000000000000,8);
  dVar5 = auVar4._8_8_;
  dVar3 = auVar4._0_8_;
  func_0x00010c17a6a0(*(double *)(param_1 + 0x28) * dVar3,*(double *)(param_1 + 0x30) * dVar5,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  lVar2 = (long)_DAT_11271ba40;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  func_0x00010c202c80(*(double *)(param_1 + 0x28) * dVar3,*(double *)(param_1 + 0x30) * dVar5,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c17a6a0(*(double *)(param_1 + 0x28) * dVar3,*(double *)(param_1 + 0x30) * dVar5,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1050ba7f0; end: 1050ba97f; -[SCProfileCharmsCardViewCellContentView _initializeImageFilteredMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ba7f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be160b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1050ba980; end: 1050ba997; -[SCProfileCharmsCardViewCellContentView _staticImageDownloadCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ba980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be160b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__filterImageFromNetworkImageView_1125631c8,
             *(undefined8 *)(param_1 + _DAT_11271ba40),*(undefined8 *)(param_1 + _DAT_11271ba44));
  return;
}



/* Entry: 1050ba998; end: 1050bab2b; -[SCProfileCharmsCardViewCellContentView _bitmojiImageDownloadCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ba998(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar5;
  
  puVar3 = PTR_PTR_1126b4868;
  uVar8 = *(ulong *)(param_1 + _DAT_11271ba5c);
  _objc_retain(uVar8);
  _objc_opt_class(puVar3);
  uVar4 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar3);
  uVar1 = uVar8;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar4 = uVar1;
  func_0x00010bf1ba40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(ulong *)(param_1 + _DAT_11271ba4c);
  func_0x00010c0d7b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  _objc_retain(uVar8);
  if (uVar4 == uVar8) {
    uVar2 = 1;
  }
  else if (uVar8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar5 = uVar4;
    func_0x00010c071ae0();
    uVar2 = (undefined1)uVar5;
  }
  _objc_release(uVar8);
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + _DAT_11271ba60) = uVar2;
  _objc_release(uVar8);
  _objc_release(uVar4);
  lVar9 = (long)_DAT_11271ba54;
  lVar6 = *(long *)(param_1 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ca0(*(undefined8 *)(param_1 + _DAT_11271ba50));
  _objc_release(uVar7);
  func_0x00010be160a0(param_1);
  func_0x00010bec2720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050bab2c; end: 1050bac57; -[SCProfileCharmsCardViewCellContentView _filterImageFromNetworkImageView:toImageView:] */

void FUN_1050bab2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1677c0(0,param_4);
  lVar1 = param_3;
  func_0x00010bf869a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae790;
  if (lVar1 != 0) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar2,param_2,0x15,param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1050bac58;
    puStack_48 = &UNK_110841f80;
    _objc_retain(lVar1);
    lStack_40 = lVar1;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010c0f7fc0(puVar2,param_2,&puStack_60);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(uStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1050bac58; end: 1050bada7;  */

void FUN_1050bac58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = 0x4071800000000000;
  uVar6 = 0x4078700000000000;
  func_0x000106625564();
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc();
  func_0x00010c0469e0(uVar5,uVar6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1050bb0a0;
  puStack_80 = &UNK_110866440;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  _objc_retain(uVar4);
  puVar3 = puVar2;
  func_0x00010bfe91c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(uVar4);
  _objc_release(puVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1050bada8;
  puStack_b0 = &UNK_110841f80;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_a8 = uVar4;
  puStack_a0 = puVar3;
  _objc_retain(puVar3);
  func_0x000100162d98("APPSTORE",&puStack_c8);
  _objc_release(puStack_a0);
  _objc_release(uStack_a8);
  _objc_release(puVar3);
  return;
}



/* Entry: 1050bada8; end: 1050bae2f;  */

void FUN_1050bada8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1050bae30;
  puStack_30 = &UNK_110842e18;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010bf03400(0x3ff0000000000000,puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1050bae30; end: 1050bae3b;  */

void FUN_1050bae30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1050bae3c; end: 1050bafbf; -[SCProfileCharmsCardViewCellContentView _updateImageFilteredMask:forImageView:withMotionOffset:] */

void FUN_1050bae3c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_5 != 0) {
    dVar2 = 1.0;
    dVar3 = (param_1 + 1.0) * 0.5;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar4 = 1.0;
    if (dVar3 <= 1.0) {
      dVar4 = dVar3;
    }
    dVar3 = (param_2 + 1.0) * 0.5;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar1 = 1.0;
    if (dVar3 <= 1.0) {
      dVar1 = dVar3;
    }
    dVar6 = 1.0 - dVar1;
    dVar3 = SQRT(param_1 * param_1 + param_2 * param_2) * 3.0;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar5 = 1.0;
    if (dVar3 <= 1.0) {
      dVar5 = dVar3;
    }
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c1677c0(dVar5,param_6);
    _CGAffineTransformMakeRotation(&uStack_70,dVar4 * 1.5707963267948966 + -0.7853981633974483);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(param_5,param_4,&uStack_a0);
    func_0x00010bf20c00(param_6);
    dVar3 = dVar2 * 0.5;
    func_0x00010bf20c00(param_6);
    func_0x00010c17a6a0(dVar3,dVar6 * dVar1,param_5);
    func_0x00010bf20c00(param_6);
    dVar3 = dVar2;
    func_0x00010bf20c00(param_6);
    dVar2 = dVar2 + dVar1;
    func_0x00010bf20c00(param_6);
    func_0x00010bf20c00(param_6);
    _objc_release(param_6);
    if (dVar1 <= dVar3) {
      dVar1 = dVar3;
    }
    func_0x00010c1739e0(0,0,dVar1 + dVar1,dVar2 * 0.5 * 0.3,param_5);
    _objc_release(param_5);
  }
  return;
}



/* Entry: 1050bafc0; end: 1050bafcf; -[SCProfileCharmsCardViewCellContentView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050bafc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ba5c);
}



/* Entry: 1050bafd0; end: 1050bafef; -[SCProfileCharmsCardViewCellContentView cell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bafd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ba58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050baff0; end: 1050bb003; -[SCProfileCharmsCardViewCellContentView setCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050baff0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ba58,param_3);
  return;
}



/* Entry: 1050bb004; end: 1050bb09f; -[SCProfileCharmsCardViewCellContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bb004(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ba58);
  _objc_storeStrong(param_1 + _DAT_11271ba5c,0);
  _objc_storeStrong(param_1 + _DAT_11271ba54,0);
  _objc_storeStrong(param_1 + _DAT_11271ba50,0);
  _objc_storeStrong(param_1 + _DAT_11271ba4c,0);
  _objc_storeStrong(param_1 + _DAT_11271ba48,0);
  _objc_storeStrong(param_1 + _DAT_11271ba44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ba40,0);
  return;
}



/* Entry: 1050bb0a0; end: 1050bb1fb;  */

void FUN_1050bb0a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010bdc1000(param_4);
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  uVar4 = 0;
  uVar5 = 0;
  _AVMakeRectWithAspectRatioInsideRect();
  _CGContextTranslateCTM(0,*(undefined8 *)(param_3 + 0x30),param_4);
  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,param_4);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc1020();
  _CGContextDrawImage(param_1,param_2,uVar4,uVar5,param_4,uVar1);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc1020();
  _CGContextClipToMask(param_1,param_2,uVar4,uVar5,param_4,uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3feccccccccccccd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _CGContextSetBlendMode(param_4,3);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050bb1fc; end: 1050bb393; -[SCProfileCharmsCardViewCellDescriptionView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050bb1fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6008;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be3b3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba68);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11271ba68) = puVar2;
    _objc_release(uVar4);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be3b400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11271ba6c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined1 **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be3b3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba70);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11271ba70) = puVar2;
    _objc_release(uVar4);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be3b400();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11271ba74;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined1 **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11271ba78;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(uVar4);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050bb394; end: 1050bb3d3; -[SCProfileCharmsCardViewCellDescriptionView _isDarkMode] */

bool FUN_1050bb394(long param_1)

{
  long lVar1;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 1050bb3d4; end: 1050bb41b; -[SCProfileCharmsCardViewCellDescriptionView traitCollectionDidChange:] */

void FUN_1050bb3d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6008;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010be92dc0(param_1);
  return;
}



/* Entry: 1050bb41c; end: 1050bb4a7; -[SCProfileCharmsCardViewCellDescriptionView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bb41c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6008;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271ba78));
  func_0x00010be490e0(param_1);
  func_0x00010be490e0(param_1);
  func_0x00010be92dc0(param_1);
  return;
}



/* Entry: 1050bb4a8; end: 1050bb517; -[SCProfileCharmsCardViewCellDescriptionView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bb4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bea84c0(param_1);
  func_0x00010bea84c0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1050bb518; end: 1050bb5ab; -[SCProfileCharmsCardViewCellDescriptionView descriptionSizeWithHeightLimit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1050bb518(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_4 + _DAT_11271ba7c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  dVar2 = 8.0;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + _DAT_11271ba68));
  if (dVar2 <= param_1) {
    param_1 = dVar2;
  }
  _objc_release(lVar1);
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = param_3 + ((param_3 + -107.0) * 0.046242774566473986 + 8.0) * -2.0;
  return auVar3;
}



/* Entry: 1050bb5ac; end: 1050bb653; -[SCProfileCharmsCardViewCellDescriptionView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bb5ac(undefined8 param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  double dVar2;
  
  func_0x00010bf4cdc0(param_6);
  func_0x00010c1822e0(*(undefined8 *)(param_4 + _DAT_11271ba74));
  func_0x00010bf20c00(param_4);
  if (param_3 == 248.0) {
    lVar1 = (long)_DAT_11271ba6c;
    func_0x00010bf4d5e0(*(undefined8 *)(param_4 + lVar1));
    dVar2 = 0.0;
    if (param_2 != 0.0) {
      func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar1));
      dVar2 = param_2;
      func_0x00010bf4d5e0(*(undefined8 *)(param_4 + lVar1));
      dVar2 = param_2 / dVar2;
    }
    *(double *)(param_4 + _DAT_11271ba80) = dVar2;
                    /* WARNING: Could not recover jumptable at 0x00010be92dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s__resetGradientView_112582510);
    return;
  }
  return;
}



/* Entry: 1050bb654; end: 1050bb953; -[SCProfileCharmsCardViewCellDescriptionView _resetGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bb654(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11271ba6c;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar9));
  _CGRectGetHeight();
  func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar9));
  if (param_2 + -0.99 <= param_1) {
    lVar9 = (long)_DAT_11271ba78;
    func_0x00010c1d4bc0(0,*(undefined8 *)(param_3 + lVar9));
  }
  else {
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar9));
    dVar10 = 0.99;
    if (param_2 <= 0.99) {
      uVar12 = 0x3ff0000000000000;
      uVar13 = 0;
    }
    else {
      func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar9));
      dVar11 = param_2;
      func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar9));
      func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar9));
      _CGRectGetHeight();
      uVar13 = 0x3ff0000000000000;
      uVar12 = 0x3ff0000000000000;
      if ((dVar11 - dVar10) + -0.99 <= param_2) {
        uVar12 = 0;
      }
    }
    lVar9 = (long)_DAT_11271ba78;
    func_0x00010c1d4bc0(0x3f800000,*(undefined8 *)(param_3 + lVar9));
    uVar1 = param_3;
    func_0x00010be3f740();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((uVar1 & 1) == 0) {
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = puVar2;
    func_0x00010bf414e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar2;
    puStack_a8 = puVar4;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar2;
    puStack_a0 = puVar4;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = puVar2;
    puStack_98 = puVar4;
    func_0x00010bf414e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_a8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)(param_3 + lVar9),param_4,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bebd0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x3fc0a3d70a3d70a4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c0 = puVar3;
    func_0x00010c0df720(0x3febd70a3d70a3d7);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bebe8;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&ppuStack_c8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00(*(undefined8 *)(param_3 + lVar9),param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  func_0x00010c12aaa0(*(undefined8 *)(param_3 + lVar9));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0720c0();
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c127e40();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(puVar2,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x0001066255e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_4,puVar3);
  _objc_release(puVar3);
  func_0x00010c1cfce0(puVar2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050bb954; end: 1050bba5b; -[SCProfileCharmsCardViewCellDescriptionView _initializeDescription] */

void FUN_1050bb954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c127e40();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x0001066255e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050bba5c; end: 1050bbabb; -[SCProfileCharmsCardViewCellDescriptionView _initializeDescriptionScrollView] */

void FUN_1050bba5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2026e0();
  func_0x00010c2025c0(puVar1,param_2,0);
  func_0x00010c1f7e20(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050bbabc; end: 1050bbb57; -[SCProfileCharmsCardViewCellDescriptionView _setText:toDescription:] */

void FUN_1050bbabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c212f20(param_4,param_2,param_3);
  func_0x00010c19f0e0(0,0,0x406f000000000000,0x7fefffffffffffff,param_4);
  uVar1 = 0x4034000000000000;
  func_0x000106625718(0x4034000000000000,param_4);
  func_0x00010c23d620(param_4);
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  func_0x00010c19f0e0(0,0,0x406f000000000000,uVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050bbb58; end: 1050bbc6b; -[SCProfileCharmsCardViewCellDescriptionView _layoutDescriptionScrollView:withDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bbb58(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bf20c00(param_5);
  dVar2 = param_3;
  dVar1 = param_4;
  func_0x00010bf20c00(param_8);
  _CGRectGetWidth();
  dVar3 = 0.0;
  if (param_1 != 0.0) {
    dVar3 = param_3 / 248.0;
  }
  _CGAffineTransformMakeScale(&uStack_80,dVar3,dVar3);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(param_7,param_6,&uStack_b0);
  func_0x00010bf20c00(param_8);
  func_0x00010c1827c0(dVar2,dVar1,param_7);
  dVar3 = *(double *)(param_5 + _DAT_11271ba80);
  func_0x00010bf4d5e0(param_7);
  func_0x00010c1822e0(0,dVar3 * dVar1,param_7);
  func_0x00010c19f0e0(0,0,param_3,param_4,param_7);
  _objc_release(param_7);
  _objc_release(param_8);
  return;
}



/* Entry: 1050bbc6c; end: 1050bbc8b; -[SCProfileCharmsCardViewCellDescriptionView cell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bbc6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ba7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050bbc8c; end: 1050bbc9f; -[SCProfileCharmsCardViewCellDescriptionView setCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bbc8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ba7c,param_3);
  return;
}



/* Entry: 1050bbca0; end: 1050bbd1b; -[SCProfileCharmsCardViewCellDescriptionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bbca0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ba7c);
  _objc_storeStrong(param_1 + _DAT_11271ba78,0);
  _objc_storeStrong(param_1 + _DAT_11271ba74,0);
  _objc_storeStrong(param_1 + _DAT_11271ba70,0);
  _objc_storeStrong(param_1 + _DAT_11271ba6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ba68,0);
  return;
}



/* Entry: 1050bbd1c; end: 1050bc037; -[SCProfileCharmsCardViewCellNewBadgeView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050bbd1c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126e6010;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar6 = (long)_DAT_11271ba84;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    uVar8 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar9 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(uVar8,uVar9);
    _objc_release(uVar5);
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc4f38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4f38,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    if (ppuVar4 < (undefined **)0x5) {
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
      _objc_release(puVar2);
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4028000000000000);
      _objc_release(uVar5);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
      _objc_release(puVar2);
      func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
      func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
      func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar6));
      dVar7 = 0.5;
      func_0x00010c1b6b20(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
      func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar6));
      func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar6));
      _CGRectGetWidth();
      dVar7 = dVar7 + 16.0;
      uVar5 = 0x4038000000000000;
    }
    else {
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4020000000000000);
      _objc_release(uVar5);
      dVar7 = 16.0;
      uVar5 = 0x4030000000000000;
    }
    func_0x00010c19f0e0(0,0,dVar7,uVar5,*(undefined8 *)((long)puVar1 + lVar6));
    uVar8 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x000106625628();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar8);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e19999a);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3fe0000000000000);
    _objc_release(uVar5);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010662561c();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1fe740(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar8);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x3fe0000000000000);
    _objc_release(uVar5);
    func_0x00010befbb60(puVar1);
    _objc_release(ppuVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050bc038; end: 1050bc113; -[SCProfileCharmsCardViewCellNewBadgeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc038(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_80 [48];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e6010;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_4 + _DAT_11271ba88;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  dVar2 = (param_3 + -107.0) / 173.0;
  dVar3 = 0.0;
  if (0.0 <= dVar2) {
    dVar3 = dVar2;
  }
  dVar3 = dVar3 * 0.33333333333333337 + 0.6666666666666666;
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_80,dVar3,dVar3);
  func_0x00010c219960(*(undefined8 *)(param_4 + _DAT_11271ba84));
  return;
}



/* Entry: 1050bc114; end: 1050bc1bb; -[SCProfileCharmsCardViewCellNewBadgeView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1050bc114(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_5 + _DAT_11271ba88;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  dVar2 = (param_3 + -107.0) / 173.0;
  dVar3 = 0.0;
  if (0.0 <= dVar2) {
    dVar3 = dVar2;
  }
  dVar2 = 0.33333333333333337;
  dVar3 = dVar3 * 0.33333333333333337 + 0.6666666666666666;
  _objc_release(lVar1);
  lVar1 = (long)_DAT_11271ba84;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  auVar4._8_8_ = dVar3 * param_4;
  auVar4._0_8_ = dVar2 * dVar3;
  return auVar4;
}



/* Entry: 1050bc1bc; end: 1050bc1db; -[SCProfileCharmsCardViewCellNewBadgeView cell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc1bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ba88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050bc1dc; end: 1050bc1ef; -[SCProfileCharmsCardViewCellNewBadgeView setCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ba88,param_3);
  return;
}



/* Entry: 1050bc1f0; end: 1050bc22b; -[SCProfileCharmsCardViewCellNewBadgeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc1f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ba88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ba84,0);
  return;
}



/* Entry: 1050bc22c; end: 1050bc3ff; -[SCProfileCharmsCardViewCellSnapStreakBadgeView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050bc22c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ca8;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11271ba8c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c1842e0(0x4028000000000000,uVar3);
    func_0x000106625610();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1795e0(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(uVar3);
    func_0x0001066255f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(uVar3);
    func_0x00010c1fe7a0(0,0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1fe800(0x3fb999999999999a,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1fe840(0x4000000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11271ba90;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x0001066255fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x000106625610();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050bc400; end: 1050bc4eb; -[SCProfileCharmsCardViewCellSnapStreakBadgeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc400(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_80 [48];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e6018;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5 + _DAT_11271ba94;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  dVar2 = 0.0024772914946325354;
  dVar3 = (param_3 + -107.0) * 0.0024772914946325354 + 0.5714285714285714;
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_80,dVar3,dVar3);
  lVar1 = (long)_DAT_11271ba8c;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c17a6a0(dVar2 * 0.5,param_4 * 0.5,*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 1050bc4ec; end: 1050bc67f; -[SCProfileCharmsCardViewCellSnapStreakBadgeView setStreakValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1050bc4ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  dVar5 = 20.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(puVar2,param_2,puVar3);
  dVar9 = dVar5;
  func_0x00010b816218();
  dVar9 = (double)(long)(dVar5 * dVar9) / dVar9;
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar4 = (long)_DAT_11271ba90;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  func_0x00010c19f0e0(0x4025000000000000,0x3ff0000000000000,dVar9,0x403c000000000000,
                      *(undefined8 *)(param_1 + lVar4));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
  dVar9 = dVar9 + 21.0;
  uVar6 = 0;
  uVar7 = 0;
  dVar5 = 28.0;
  func_0x00010c1739e0(0,0,dVar9,0x403c000000000000,*(undefined8 *)(param_1 + _DAT_11271ba8c));
  func_0x00010c1cbe20(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar10._8_8_ = uVar7;
    auVar10._0_8_ = uVar6;
    return auVar10;
  }
  ___stack_chk_fail();
  puVar1 = puVar2 + _DAT_11271ba94;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf20c00();
  dVar8 = 0.0024772914946325354;
  dVar9 = (dVar9 + -107.0) * 0.0024772914946325354 + 0.5714285714285714;
  _objc_release(puVar1);
  lVar4 = (long)_DAT_11271ba8c;
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + lVar4));
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + lVar4));
  auVar11._8_8_ = dVar9 * dVar5;
  auVar11._0_8_ = dVar9 * dVar8;
  return auVar11;
}



/* Entry: 1050bc680; end: 1050bc70f; -[SCProfileCharmsCardViewCellSnapStreakBadgeView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1050bc680(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_5 + _DAT_11271ba94;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  dVar2 = 0.0024772914946325354;
  dVar3 = (param_3 + -107.0) * 0.0024772914946325354 + 0.5714285714285714;
  _objc_release(lVar1);
  lVar1 = (long)_DAT_11271ba8c;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  auVar4._8_8_ = dVar3 * param_4;
  auVar4._0_8_ = dVar3 * dVar2;
  return auVar4;
}



/* Entry: 1050bc710; end: 1050bc72f; -[SCProfileCharmsCardViewCellSnapStreakBadgeView cell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc710(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ba94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050bc730; end: 1050bc743; -[SCProfileCharmsCardViewCellSnapStreakBadgeView setCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc730(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ba94,param_3);
  return;
}



/* Entry: 1050bc744; end: 1050bc78f; -[SCProfileCharmsCardViewCellSnapStreakBadgeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc744(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ba94);
  _objc_storeStrong(param_1 + _DAT_11271ba90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ba8c,0);
  return;
}


