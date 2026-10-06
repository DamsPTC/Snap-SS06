/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060af1d4; end: 1060af24f; -[SCFeatureMusicFavoritesButtonImpl _iconBookmarkOutlineImage] */

void FUN_1060af1d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x5a,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060af250; end: 1060af25f; -[SCFeatureMusicFavoritesButtonImpl activated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060af250(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273eae0);
}



/* Entry: 1060af260; end: 1060af34b; -[SCFeatureMusicFavoritesButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060af260(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273eab8,0);
  _objc_storeStrong(param_1 + _DAT_11273ead0,0);
  _objc_storeStrong(param_1 + _DAT_11273eacc,0);
  _objc_storeStrong(param_1 + _DAT_11273eac8,0);
  _objc_storeStrong(param_1 + _DAT_11273eac0,0);
  _objc_storeStrong(param_1 + _DAT_11273eab4,0);
  _objc_storeStrong(param_1 + _DAT_11273eaa8,0);
  _objc_storeStrong(param_1 + _DAT_11273eaec,0);
  _objc_storeStrong(param_1 + _DAT_11273eab0,0);
  _objc_storeStrong(param_1 + _DAT_11273eaac,0);
  _objc_destroyWeak(param_1 + _DAT_11273eadc);
  _objc_storeStrong(param_1 + _DAT_11273ead8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273eabc,0);
  return;
}



/* Entry: 1060af34c; end: 1060af3c7;  */

void FUN_1060af34c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9c6a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c290aa0();
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060af3c8; end: 1060af413; -[SCFeatureMusicImpl dealloc] */

void FUN_1060af3c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be3d8c0();
  func_0x00010c256420(param_1);
  puStack_28 = PTR_PTR_1126ef890;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1060af414; end: 1060af42b; -[SCFeatureMusicImpl isCameraModeActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060af414(long param_1)

{
  return *(long *)(param_1 + _DAT_11273ebb4) != 0;
}



/* Entry: 1060af42c; end: 1060af433; -[SCFeatureMusicImpl cameraModeType] */

undefined8 FUN_1060af42c(void)

{
  return 2;
}



/* Entry: 1060af434; end: 1060afebf; -[SCFeatureMusicImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060af434(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11273eb40;
  uVar1 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11273eb18));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11273eb20));
  _objc_initWeak(auStack_98,param_1);
  lVar18 = (long)_DAT_11273eb08;
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf75dc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1060afec0;
  puStack_a8 = &UNK_110846510;
  _objc_copyWeak(auStack_a0,auStack_98);
  uVar2 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2a6a00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1060b0030;
  puStack_d0 = &UNK_110846510;
  _objc_copyWeak(auStack_c8,auStack_98);
  uVar2 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf72840(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1060b00f8;
  puStack_f8 = &UNK_110846510;
  _objc_copyWeak(auStack_f0,auStack_98);
  uVar2 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273eb0c);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1060b0140;
  puStack_120 = &UNK_11084e590;
  _objc_copyWeak(auStack_118,auStack_98);
  uVar2 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273eb10);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1060b02b0;
  puStack_148 = &UNK_11090b470;
  _objc_copyWeak(auStack_140,auStack_98);
  uVar2 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  puVar9 = PTR_PTR_1126ae6b8;
  lVar18 = (long)_DAT_11273eaf4;
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uStack_90 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c159b00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf65f60(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1060b0430;
  puStack_170 = &UNK_11084eff0;
  _objc_copyWeak(auStack_168,auStack_98);
  puVar12 = puVar11;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273ebb0);
  func_0x00010c0d4100();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c0e0ea0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x1060b0490;
  puStack_198 = &UNK_110842a38;
  _objc_copyWeak(auStack_190,auStack_98);
  uVar5 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273eb88);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x1060b04e8;
  puStack_1c0 = &UNK_110842a38;
  _objc_copyWeak(auStack_1b8,auStack_98);
  uVar2 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar7);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eba4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c291a20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_1060b0540;
  puStack_1e8 = &UNK_11090c968;
  _objc_copyWeak(auStack_1e0,auStack_98);
  uVar2 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11273eb58) == 0xb) {
    uVar13 = *(ulong *)(param_1 + _DAT_11273eb38);
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010befb820();
    _objc_release(uVar14);
    _objc_release(uVar13);
    if ((uVar15 & 1) == 0) goto LAB_1060afc94;
  }
  func_0x00010bdf39e0(param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273ebc8);
  func_0x00010c2471c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_208,auStack_98);
  uVar2 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_208);
LAB_1060afc94:
  func_0x00010beae2c0(param_1);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  puVar16 = auStack_98;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  puVar16 = puVar16 + 0x20;
  _objc_loadWeakRetained();
  if (puVar16 != (undefined1 *)0x0) {
    puVar17 = puVar16;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f88c0();
    _objc_release(puVar17);
  }
  _objc_release(puVar16);
  return;
}



/* Entry: 1060afec0; end: 1060aff47;  */

void FUN_1060afec0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f88c0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1060aff48; end: 1060b00f7;  */

/* WARNING: Possible PIC construction at 0x0001060affa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060affa8) */
/* WARNING: Removing unreachable block (ram,0x0001060b0008) */
/* WARNING: Removing unreachable block (ram,0x00010bdfa360) */
/* WARNING: Removing unreachable block (ram,0x0001060afff8) */
/* WARNING: Removing unreachable block (ram,0x00010be70d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060aff48(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be3fa60();
  lVar2 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    if ((*(byte *)(lVar2 + _DAT_11273ebb8) & 1) == 0) {
      func_0x00010c078380();
      if ((int)lVar2 == 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x20);
    }
  }
  else {
    func_0x00010be02a00();
    lVar2 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be030d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__dismissPickerIfNeeded_11255e5d0);
  return;
}



/* Entry: 1060b00f8; end: 1060b013f;  */

void FUN_1060b00f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    func_0x00010be87cc0(uVar1);
    uVar2 = uVar1;
    func_0x00010c078380();
    if ((uVar2 & 1) == 0) {
      func_0x00010be95320(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060b0140; end: 1060b0243;  */

void FUN_1060b0140(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1060b024c;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1060b0244; end: 1060b024b;  */

void FUN_1060b0244(void)

{
  return;
}



/* Entry: 1060b024c; end: 1060b027b;  */

void FUN_1060b024c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee93e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b027c; end: 1060b027f;  */

void FUN_1060b027c(void)

{
  return;
}



/* Entry: 1060b0280; end: 1060b02af;  */

void FUN_1060b0280(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee93e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b02b0; end: 1060b03ab;  */

void FUN_1060b02b0(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1060b03ac;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1060b03ac; end: 1060b0427;  */

void FUN_1060b03ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee93e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b0428; end: 1060b042f;  */

void FUN_1060b0428(void)

{
  return;
}



/* Entry: 1060b0430; end: 1060b053f;  */

void FUN_1060b0430(long param_1,undefined8 param_2)

{
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c06c2e0();
  func_0x00010bdfc200(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b0540; end: 1060b05db;  */

void FUN_1060b0540(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010be405c0(), (int)lVar1 != 0)) {
    uVar2 = param_2;
    func_0x00010bf9e140(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe5e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebfe60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b05dc; end: 1060b0633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b05dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273eb30));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b0634; end: 1060b0797; -[SCFeatureMusicImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b0634(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7b68;
  func_0x00010bf25980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_11273ebd0));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7b68;
  puStack_70 = puVar2;
  func_0x00010bf92880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar3;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(long *)(param_1 + _DAT_11273ebb4) != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c7b68;
  puStack_68 = puVar4;
  func_0x00010c15a2e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)(param_1 + _DAT_11273ebd4);
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&puStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  func_0x00010be3d440();
  return;
}



/* Entry: 1060b0798; end: 1060b07b7; -[SCFeatureMusicImpl configureWithTrackId:sourcePageType:startOffsetSeconds:shouldSkipEditor:pickerSessionId:shouldAutoPlay:] */

void FUN_1060b0798(void)

{
  func_0x00010be3d440();
  return;
}



/* Entry: 1060b07b8; end: 1060b08bf; -[SCFeatureMusicImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b07b8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11273ebd8) = 0;
  *(undefined1 *)(param_1 + _DAT_11273ebdc) = 0;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11273ebe0));
  func_0x00010be030c0(param_1);
  lVar3 = (long)_DAT_11273ebbc;
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010be8a660(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ebb4);
  *(undefined8 *)(param_1 + _DAT_11273ebb4) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11273ebe4) = 0xffffffffffffffff;
  func_0x00010bee25a0(param_1);
  func_0x00010bed4e40(param_1);
  func_0x00010be78e60(param_1);
  func_0x00010be02a00(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eb24);
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  lVar3 = param_1 + _DAT_11273ebe8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0d2d00();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be0e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__featureDidUpdate_1125613d0);
  return;
}



/* Entry: 1060b08c0; end: 1060b08ef; -[SCFeatureMusicImpl isMusicUIActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060b08c0(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11273ebec) & 1) != 0) {
    return true;
  }
  return *(long *)(param_1 + _DAT_11273ebf0) != 0;
}



/* Entry: 1060b08f0; end: 1060b08ff; -[SCFeatureMusicImpl isMusicPickerPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060b08f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273ebec);
}



/* Entry: 1060b0900; end: 1060b0927; -[SCFeatureMusicImpl presentMusicPickerOrEditorWithCurrentSelectionAndSourcePageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b0900(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + _DAT_11273ebb4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed74d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateEditorForSelection_source_1125936d8,
               *(long *)(param_1 + _DAT_11273ebb4),0x76,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentPickerIfNeededWithSource_11257cea8,param_3);
  return;
}



/* Entry: 1060b0928; end: 1060b092b; -[SCFeatureMusicImpl presentMusicPickerWithSourcePageType:] */

void FUN_1060b0928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPickerIfNeededWithSource_11257cea8);
  return;
}



/* Entry: 1060b092c; end: 1060b092f; -[SCFeatureMusicImpl onTimelineVideoTotalDurationChanged] */

void FUN_1060b092c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be78e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__preparePlayerIfNeeded_11257bd38);
  return;
}



/* Entry: 1060b0930; end: 1060b0993; -[SCFeatureMusicImpl setMusicFeatureEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b0930(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  *(char *)(param_1 + _DAT_11273eb7c) = (char)(param_3 ^ 1);
  if ((param_3 & 1) == 0) {
    lVar1 = param_1 + _DAT_11273ebf4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1ca100();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed6ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisabled__112593558,param_3 ^ 1);
  return;
}



/* Entry: 1060b0994; end: 1060b09c3; -[SCFeatureMusicImpl shouldDisableAudioCaptureWhileRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060b0994(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11273ebf8) & 1) != 0) {
    return false;
  }
  return *(long *)(param_1 + _DAT_11273ebb4) != 0;
}



/* Entry: 1060b09c4; end: 1060b0b1f; -[SCFeatureMusicImpl shouldSyncVideoAndMusicPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1060b09c4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar1 = param_1;
  func_0x00010c22ed20();
  if ((int)lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + _DAT_11273eb90);
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5fe60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0ef240();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c104100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = uVar7;
    func_0x00010c0720c0(uVar7,param_2,*(undefined8 *)PTR__AVAudioSessionPortHeadphones_11034cee8);
    if (((((uVar3 & 1) == 0) &&
         (uVar3 = uVar7,
         func_0x00010c0720c0(uVar7,param_2,
                             *(undefined8 *)PTR__AVAudioSessionPortBluetoothA2DP_11034ceb0),
         (uVar3 & 1) == 0)) &&
        (uVar3 = uVar7,
        func_0x00010c0720c0(uVar7,param_2,
                            *(undefined8 *)PTR__AVAudioSessionPortBluetoothHFP_11034ceb8),
        (uVar3 & 1) == 0)) &&
       (uVar3 = uVar7,
       func_0x00010c0720c0(uVar7,param_2,*(undefined8 *)PTR__AVAudioSessionPortBluetoothLE_11034cec0
                          ), (uVar3 & 1) == 0)) {
      uVar3 = uVar7;
      func_0x00010c0720c0(uVar7,param_2,*(undefined8 *)PTR__AVAudioSessionPortCarAudio_11034cee0);
      uVar8 = (uint)uVar3 ^ 1;
    }
    else {
      uVar8 = 0;
    }
    _objc_release(uVar7);
  }
  return uVar8;
}



/* Entry: 1060b0b20; end: 1060b0cf3; -[SCFeatureMusicImpl handleDeepLink:] */

void FUN_1060b0b20(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  FUN_1060bd810();
  if ((int)puVar1 != 0) {
    puVar1 = param_3;
    func_0x0001060bd88c();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = param_3;
      func_0x0001060bda9c();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar3 = param_3;
        func_0x0001060bd9fc();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          func_0x00010be7d420(param_1,param_2,0x91);
        }
        else {
          puVar4 = PTR_PTR_1126c7b70;
          _objc_alloc(PTR_PTR_1126c7b70);
          func_0x00010c00bae0();
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110dc4658);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c196660(puVar4,param_2,puVar5);
          _objc_release(puVar5);
          func_0x00010be7d440(param_1,param_2,0x91,puVar4);
          _objc_release(puVar4);
        }
      }
      else {
        puVar3 = PTR_PTR_1126c7b70;
        _objc_alloc(PTR_PTR_1126c7b70);
        func_0x00010c00bae0();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110dc4658);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c196660(puVar3,param_2,puVar4);
        _objc_release(puVar4);
        func_0x00010be7d440(param_1,param_2,0x91,puVar3);
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      puVar2 = puVar1;
      func_0x00010c282800(puVar1);
      func_0x00010be3d440(param_1,param_2,puVar2,0x91,0,0,0,0,0);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b0cf4; end: 1060b0d0b; -[SCFeatureMusicImpl enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060b0cf4(long param_1)

{
  return *(long *)(param_1 + _DAT_11273ebb4) != 0;
}



/* Entry: 1060b0d0c; end: 1060b0dab; -[SCFeatureMusicImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:] */

undefined8 FUN_1060b0d0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf2ae40();
  if (((((uint)uVar1 >> 4 & 1) == 0) || (uVar1 = param_3, func_0x00010c0d3a20(), uVar1 == 0)) ||
     (uVar1 = param_3, func_0x00010bf2ae40(), ((uint)uVar1 >> 1 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0d3a20(param_3);
    uVar2 = param_3;
    func_0x00010bf2ae40(param_3);
    func_0x00010bf47ca0(param_1,param_2,uVar1,0x75,0,uVar2 >> 6 & 1,0,0);
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1060b0dac; end: 1060b0dcf; -[SCFeatureMusicImpl shortcutDisable] */

void FUN_1060b0dac(undefined8 param_1)

{
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdfa370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteMusicPlaybackLayer_11255c278);
  return;
}



/* Entry: 1060b0dd0; end: 1060b0dd7; -[SCFeatureMusicImpl cameraShortcutFeatureType] */

undefined8 FUN_1060b0dd0(void)

{
  return 0;
}



/* Entry: 1060b0dd8; end: 1060b0ddf; -[SCFeatureMusicImpl cameraShortcutFeatureOption] */

undefined8 FUN_1060b0dd8(void)

{
  return 0x10;
}



/* Entry: 1060b0de0; end: 1060b0de7; -[SCFeatureMusicImpl hasPendingContent] */

undefined8 FUN_1060b0de0(void)

{
  return 0;
}



/* Entry: 1060b0de8; end: 1060b0df3; -[SCFeatureMusicImpl cameraShortcutFeatureName] */

undefined ** FUN_1060b0de8(void)

{
  return &PTR____CFConstantStringClassReference_110e33d18;
}



/* Entry: 1060b0df4; end: 1060b0f8f; -[SCFeatureMusicImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b0df4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  lVar6 = (long)_DAT_11273ec0c;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060b0f90; end: 1060b12b7;  */

void FUN_1060b0f90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1060b12b8;
  puStack_88 = &UNK_110872b00;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1060b12e4;
  puStack_b0 = &UNK_11090b530;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1060b1310;
  puStack_d8 = &UNK_11090b560;
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  func_0x00010c0e7c40(param_2);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1060b13c8;
  puStack_100 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_f8,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1060b1448;
  puStack_128 = &UNK_11090b530;
  _objc_copyWeak(auStack_120,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1060b14b0;
  puStack_150 = &UNK_11084e3d0;
  _objc_copyWeak(auStack_148,param_1 + 0x20);
  func_0x00010c0e37e0(param_2);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1060b14f8;
  puStack_178 = &UNK_11090ca68;
  _objc_copyWeak(auStack_170,param_1 + 0x20);
  func_0x00010c0e7be0(param_2);
  _objc_copyWeak(auStack_198,param_1 + 0x20);
  func_0x00010c0e3860(param_2);
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_2);
  return;
}



/* Entry: 1060b12b8; end: 1060b130f;  */

void FUN_1060b12b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeaee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b1310; end: 1060b13c7;  */

void FUN_1060b1310(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010beeb0c0(param_1,param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b13c8; end: 1060b14af;  */

void FUN_1060b13c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdac0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b14b0; end: 1060b14f7;  */

void FUN_1060b14b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc300();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b14f8; end: 1060b155f;  */

void FUN_1060b14f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeaf20();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b1560; end: 1060b15a7;  */

void FUN_1060b1560(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc6c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b15a8; end: 1060b15db; -[SCFeatureMusicImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b15a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ec0c;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060b15dc; end: 1060b1637; -[SCFeatureMusicImpl _didBeginVideoRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b15dc(long param_1)

{
  long lVar1;
  
  if ((((*(byte *)(param_1 + _DAT_11273ebf8) & 1) == 0) &&
      (*(char *)(param_1 + _DAT_11273ebb8) == '\x01')) &&
     (lVar1 = param_1, func_0x00010c234de0(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bebf7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startAudioPlayer_11258d798);
    return;
  }
  return;
}



/* Entry: 1060b1638; end: 1060b16bb; -[SCFeatureMusicImpl _startAudioPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1638(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = (long)_DAT_11273ec10;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bea5ba0(param_1);
  func_0x00010bdd12c0(param_1);
  uStack_48 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  func_0x00010c0fea60(*(undefined8 *)(param_1 + _DAT_11273ebbc),param_2,&uStack_50);
  return;
}



/* Entry: 1060b16bc; end: 1060b1813; -[SCFeatureMusicImpl _setMusicSyncInfoOnCapturer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b16bc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_2 + _DAT_11273eb2c);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_60 = false;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf9a440();
    uStack_60 = lVar2 == 0;
  }
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11273ebbc);
  func_0x00010c0f9980();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  uVar4 = uVar3;
  uStack_68 = param_1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + _DAT_11273ec10);
  *(undefined8 *)(param_2 + _DAT_11273ec10) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  return;
}



/* Entry: 1060b1814; end: 1060b1953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1814(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7b78;
    _objc_alloc(PTR_PTR_1126c7b78);
    _CACurrentMediaTime();
    lVar3 = *(long *)(lVar1 + _DAT_11273ebb4);
    dVar6 = param_1;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_68,lVar3);
    }
    _CMTimeGetSeconds(&uStack_68);
    func_0x00010c0372a0(param_1,dVar6 * 1000.0,*(undefined8 *)(param_2 + 0x28),puVar2,param_3,
                        *(undefined1 *)(param_2 + 0x30));
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(lVar1 + _DAT_11273eb40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c299660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca340();
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar3 = (long)_DAT_11273ec10;
    func_0x00010bf86d40(*(undefined8 *)(lVar1 + lVar3));
    uVar5 = *(undefined8 *)(lVar1 + lVar3);
    *(undefined8 *)(lVar1 + lVar3) = 0;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1060b1954; end: 1060b1b3f; -[SCFeatureMusicImpl _willBeginVideoRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1954(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (((*(byte *)(param_1 + (long)_DAT_11273ebf8) & 1) == 0) &&
     (*(char *)(param_1 + (long)_DAT_11273ebb8) == '\x01')) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + (long)_DAT_11273ebe0));
    uVar1 = param_1;
    func_0x00010be3fa60();
    if ((int)uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010bdd9460();
      lVar4 = (long)_DAT_11273ebb4;
      if ((int)uVar1 == 0) {
        func_0x00010bedaa20(param_1);
      }
      else {
        func_0x00010bee0240(param_1);
      }
    }
    else {
      lVar4 = (long)_DAT_11273ebb4;
    }
    if (*(long *)(param_1 + lVar4) != 0) {
      *(undefined1 *)(param_1 + (long)_DAT_11273ebd8) = 1;
      if ((*(long *)(param_1 + (long)_DAT_11273eb58) != 0xb) &&
         (uVar1 = param_1, func_0x00010be3f360(), (uVar1 & 1) == 0)) {
        func_0x00010be92380(param_1);
      }
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11273eb44);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbfa0(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 1060b1b40; end: 1060b1d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1b40(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uStack_78 = param_4[1];
    uStack_80 = *param_4;
    uStack_70 = param_4[2];
    uStack_98 = param_3[1];
    uStack_a0 = *param_3;
    uStack_90 = param_3[2];
    _CMTimeSubtract(&uStack_68,&uStack_80,&uStack_a0);
    _CMTimeMakeWithSeconds(&uStack_a0,param_1,600);
    uStack_b8 = uStack_60;
    uStack_c0 = uStack_68;
    uStack_b0 = uStack_58;
    _CMTimeSubtract(&uStack_80,&uStack_c0,&uStack_a0);
    uVar8 = uStack_68;
    func_0x00010bdd12c0(uVar1);
    uVar2 = uVar1;
    func_0x00010be9e3e0();
    iVar7 = _DAT_11273ebbc;
    if ((uVar2 & 1) != 0) {
      uVar3 = *(ulong *)(uVar1 + (long)_DAT_11273eb8c);
      func_0x00010bf62b80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0797e0();
      _objc_release(uVar2);
      _objc_release(uVar3);
      iVar7 = _DAT_11273ebbc;
      if ((uVar4 & 1) == 0) {
        func_0x00010c2241a0((float)(*(byte *)(uVar1 + (long)_DAT_11273ebc0) ^ 1),
                            *(undefined8 *)(uVar1 + (long)_DAT_11273ebbc));
      }
    }
    func_0x00010c2009a0(*(undefined8 *)(uVar1 + (long)iVar7));
    uVar2 = uVar1;
    func_0x00010c234de0();
    if ((uVar2 & 1) == 0) {
      func_0x00010bea5ba0(uVar1);
      uStack_98 = uStack_78;
      uStack_a0 = uStack_80;
      uStack_90 = uStack_70;
      func_0x00010c0fea60(uVar8,*(undefined8 *)(uVar1 + (long)iVar7));
    }
    lVar5 = uVar1 + (long)_DAT_11273eb74;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uStack_78;
    uStack_a0 = uStack_80;
    uStack_90 = uStack_70;
    _CMTimeGetSeconds(&uStack_a0);
    func_0x00010c0a1fc0(lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1060b1d3c; end: 1060b1d97; -[SCFeatureMusicImpl _audioPlaybackRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1060b1d3c(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11273eafc);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249d20();
  _objc_release(uVar1);
  dVar2 = 1.0 / param_1;
  if (param_1 <= 0.0) {
    dVar2 = 1.0;
  }
  return dVar2;
}



/* Entry: 1060b1d98; end: 1060b1db7; -[SCFeatureMusicImpl _willFinishRecording:session:recordedVideoFuture:videoSize:placeholderImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1d98(long param_1)

{
  if (*(char *)(param_1 + _DAT_11273ebd8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdfe190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__didFinishCapturingWithSuccess__11255d200,1);
    return;
  }
  return;
}



/* Entry: 1060b1db8; end: 1060b1e2b; -[SCFeatureMusicImpl _didFailRecording:session:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1db8(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11273ebd8) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273eb94);
    func_0x00010bf7ff80();
    if (iVar1 != 0) {
      lVar2 = param_1 + _DAT_11273ebf4;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1c9fc0();
      _objc_release(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdfe190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__didFinishCapturingWithSuccess__11255d200,0);
    return;
  }
  return;
}



/* Entry: 1060b1e2c; end: 1060b1e9f; -[SCFeatureMusicImpl _didCancelRecording:session:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1e2c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11273ebd8) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273eb94);
    func_0x00010bf7ff80();
    if (iVar1 != 0) {
      lVar2 = param_1 + _DAT_11273ebf4;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1c9fc0();
      _objc_release(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdfe190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__didFinishCapturingWithSuccess__11255d200,0);
    return;
  }
  return;
}



/* Entry: 1060b1ea0; end: 1060b1f63; -[SCFeatureMusicImpl _willCapturePhoto:sampleMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((*(byte *)(param_1 + _DAT_11273ebf8) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_11273ebb8) == '\x01')) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11273ebe0));
    lVar1 = param_1;
    func_0x00010bdd9460(param_1,param_2,1);
    lVar2 = (long)_DAT_11273ebb4;
    if ((int)lVar1 == 0) {
      func_0x00010bedaa20(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
    }
    else {
      func_0x00010bee0240(param_1);
    }
    if (*(long *)(param_1 + lVar2) != 0) {
      *(undefined1 *)(param_1 + _DAT_11273ebd8) = 1;
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b1f64; end: 1060b1f83; -[SCFeatureMusicImpl _didCapturePhoto:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1f64(long param_1)

{
  if (*(char *)(param_1 + _DAT_11273ebd8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdfe190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__didFinishCapturingWithSuccess__11255d200,1);
    return;
  }
  return;
}



/* Entry: 1060b1f84; end: 1060b2037; -[SCFeatureMusicImpl _didAppendVideoSampleBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b1f84(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if ((*(char *)(param_1 + _DAT_11273ebd8) == '\x01') &&
     (lVar2 = *(long *)(param_1 + _DAT_11273ec14), lVar2 != 0)) {
    if (param_3 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010c10f7a0(&uStack_48,param_3);
    }
    func_0x00010c297200(puVar1,param_2,&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060b2038; end: 1060b2057; -[SCFeatureMusicImpl musicAudioPlayerDidSuspend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b2038(long param_1,undefined8 param_2,int param_3)

{
  if ((param_3 != 0) && (*(char *)(param_1 + _DAT_11273ebb8) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be95330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restartAutoplayPlaybackIfNeeded_112582e68)
    ;
    return;
  }
  return;
}



/* Entry: 1060b2058; end: 1060b21a7; -[SCFeatureMusicImpl addSoundPillScopeDidSelectRemoveTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b2058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_11273ebdc) = 0;
  lVar5 = (long)_DAT_11273ebb4;
  if ((*(long *)(param_1 + lVar5) != 0) && (lVar1 = param_1, func_0x00010be9e3e0(), (int)lVar1 != 0)
     ) {
    lVar1 = param_1;
    func_0x00010bdf6720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11273eb80),param_2,lVar1);
    }
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010bf5cba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11273eb64);
      func_0x00010bfa1820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf5cba0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12dee0(uVar3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273eb38);
    func_0x00010c106880(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287de0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar1);
  }
  func_0x00010bedf7a0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b21a8; end: 1060b21f3; -[SCFeatureMusicImpl addSoundPillScope:didSelectAppliedTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b21a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be7b240(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010be9e3e0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be92390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetAudioPlayerSeek_112582280);
    return;
  }
  return;
}



/* Entry: 1060b21f4; end: 1060b21fb; -[SCFeatureMusicImpl addSoundPillScopeDidSelectAddSound:] */

void FUN_1060b21f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentMusicPickerWithSourcePage_112620ea0,0x51);
  return;
}



/* Entry: 1060b21fc; end: 1060b2257; -[SCFeatureMusicImpl addSoundPillScope:didSelectRecommendedTrack:] */

void FUN_1060b21fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000108420984(param_4,0xa8,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010bedf7a0(param_1);
    func_0x00010be2c7a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060b2258; end: 1060b22e3; -[SCFeatureMusicImpl _pausePlaybackForPickerV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060b2258(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + _DAT_11273eb2c);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11273ebbc;
  uVar3 = *(ulong *)(param_1 + lVar5);
  func_0x00010c07a400();
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = lVar2;
      func_0x00010bf9a440(lVar2);
      bVar1 = lVar4 == 0;
    }
  }
  else {
    bVar1 = true;
  }
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1060b22e4; end: 1060b238b; -[SCFeatureMusicImpl _handlePickerDismissalRestoringPlayback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b22e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273eb50;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010be73c60(param_1);
  func_0x00010bee25a0(param_1);
  if (((int)param_3 != 0) && (lVar1 = param_1, func_0x00010be9e3e0(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be95bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeAutoplayPlaybackIfNeeded_112583098);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentEditorForCurrentSelectio_11257c638,1,param_3);
  return;
}



/* Entry: 1060b238c; end: 1060b2437; -[SCFeatureMusicImpl musicPickerDidUpdateSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b238c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_11273ebdc) = 0;
  func_0x00010be73c60(param_1);
  func_0x00010bedf7a0(param_1,param_2,param_3);
  lVar2 = (long)_DAT_11273eb50;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(char *)(param_1 + _DAT_11273ebb8) == '\x01') {
    func_0x00010be2c7a0(param_1,param_2,param_3,0x76);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b2438; end: 1060b243f; -[SCFeatureMusicImpl musicPickerDidDismiss] */

void FUN_1060b2438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2def0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePickerDismissalRestoringP_112569158,0)
  ;
  return;
}



/* Entry: 1060b2440; end: 1060b25d3; -[SCFeatureMusicImpl musicEditorDidConfirmSelection:selectedMusicStickerData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b2440(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + _DAT_11273ebdc) = 0;
  if (param_3 == 0) {
    lVar5 = (long)_DAT_11273ebb4;
    lVar1 = param_1;
    func_0x00010be9e3e0(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bdf6720();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11273eb80),param_2,lVar1);
      }
      lVar2 = *(long *)(param_1 + lVar5);
      func_0x00010bf5cba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_11273eb64);
        func_0x00010bfa1820(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010bf5cba0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12dee0(uVar3,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      uVar4 = *(undefined8 *)(param_1 + _DAT_11273eb38);
      func_0x00010c106880(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c287de0();
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(lVar1);
    }
  }
  lVar1 = param_3;
  func_0x00010c0fbb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedf7a0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be3fa60();
  if ((int)lVar1 != 0) {
    func_0x00010be02a00(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b25d4; end: 1060b274b; -[SCFeatureMusicImpl musicEditorDidUpdateStartOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b25d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  lVar9 = (long)_DAT_11273ebb4;
  lVar1 = *(long *)(param_2 + lVar9);
  if (lVar1 != 0) {
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    _CMTimeMakeWithSeconds(auStack_78,param_1,600);
    lVar2 = lVar1;
    func_0x0001084532b0(lVar1,auStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b2f20;
    _objc_alloc(PTR_PTR_1126b2f20);
    uVar4 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010c277f60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010beff2a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010c260ce0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010c0c1aa0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010bf0a480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043d40(puVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010bedf7a0(param_2);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1060b274c; end: 1060b2767; -[SCFeatureMusicImpl musicEditorDidTapChangeMusicButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b274c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11273ebf0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentPickerIfNeededWithSource_11257cea8,0x76);
    return;
  }
  return;
}



/* Entry: 1060b2768; end: 1060b27c7; -[SCFeatureMusicImpl musicEditorCurrentTimeObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b2768(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273ec14;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1060b27c8; end: 1060b27d7; -[SCFeatureMusicImpl musicEditorDidSendPlaybackEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b27c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273eb2c),PTR_s_next__112614028);
  return;
}



/* Entry: 1060b27d8; end: 1060b2983; -[SCFeatureMusicImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060b27d8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(ulong *)(param_3 + (long)_DAT_11273ebc8);
  func_0x00010c247200();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010c074c20(), (uVar2 & 1) != 0)) {
LAB_1060b28a4:
    lVar6 = (long)_DAT_11273ebf0;
    if (*(long *)(param_3 + lVar6) == 0) {
LAB_1060b295c:
      uVar4 = 0;
      goto LAB_1060b2960;
    }
    uVar2 = param_3;
    func_0x00010be3fa60();
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + lVar6);
      func_0x00010c29bf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3 + (long)_DAT_11273ebcc;
      _objc_loadWeakRetained(lVar5);
      func_0x00010bf51200(param_1,param_2,uVar4,param_4,lVar5);
      _objc_release(lVar5);
      _objc_release(uVar4);
      lVar5 = *(long *)(param_3 + lVar6);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfe3a40(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar6 == 0) goto LAB_1060b295c;
    }
  }
  else {
    lVar5 = (long)_DAT_11273ebcc;
    lVar6 = param_3 + lVar5;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar6 == 0) goto LAB_1060b28a4;
    uVar2 = param_3 + lVar5;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bfe3a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if ((uVar3 == 0) ||
       ((uVar3 != uVar1 &&
        (uVar2 = uVar3, func_0x00010c070780(uVar3,param_4,uVar1), (uVar2 & 1) == 0)))) {
      _objc_release(uVar3);
      goto LAB_1060b28a4;
    }
    _objc_release(uVar3);
  }
  uVar4 = 1;
LAB_1060b2960:
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1060b2984; end: 1060b298b; -[SCFeatureMusicImpl _handleMusicSelection:fromSourcePageType:] */

void FUN_1060b2984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed74d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateEditorForSelection_source_1125936d8,param_3,param_4,0);
  return;
}



/* Entry: 1060b298c; end: 1060b2a1f; -[SCFeatureMusicImpl _isTouchAtPoint:withinSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1060b298c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  if (param_5 != 0) {
    lVar1 = (long)_DAT_11273ebcc;
    _objc_retain(param_5);
    param_3 = param_3 + lVar1;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf512a0(param_1,param_2);
    lVar1 = param_5;
    func_0x00010c102b20(param_5,param_4,0);
    _objc_release(param_5);
    _objc_release(param_3);
    return lVar1;
  }
  return 0;
}



/* Entry: 1060b2a20; end: 1060b2a2f; -[SCFeatureMusicImpl setCameraUIVisible:animated:arbitrator:] */

void FUN_1060b2a20(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentEditorForCurrentSelectio_11257c630,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be02a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEditorIfNeeded_11255e420);
  return;
}



/* Entry: 1060b2a30; end: 1060b2b07; -[SCFeatureMusicImpl _configureWithDeferredTrackIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b2a30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11273ec18);
  if (lVar1 != 0) {
    func_0x00010c2827c0();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273ec1c);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273ec20);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273ec24);
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    func_0x00010bea3540(param_1,param_2,0,0,0xffffffffffffffff,0);
    func_0x00010be3d440(param_1,param_2,lVar1,uVar3,uVar2,0,uVar4,0,0);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1060b2b08; end: 1060b2be7; -[SCFeatureMusicImpl _setDeferredTrackInfoWithTrackID:startOffsetSeconds:sourcePageType:pickerSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b2b08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ec18);
  *(undefined8 *)(param_1 + _DAT_11273ec18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ec1c);
  *(undefined8 *)(param_1 + _DAT_11273ec1c) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11273ec20) = param_5;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ec24);
  *(undefined8 *)(param_1 + _DAT_11273ec24) = param_6;
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  param_1 = param_1 + _DAT_11273ebf4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1ca2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b2be8; end: 1060b30f3; -[SCFeatureMusicImpl _internalConfigureWithTrackId:sourcePageType:startOffsetSeconds:shouldSkipEditor:pickerSessionId:shouldAutoPlay:ctContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b2be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,byte param_6,undefined8 param_7,undefined1 param_8,undefined8 param_9
                  )

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  byte bStack_c8;
  undefined1 uStack_c7;
  byte bStack_c6;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar18 = (long)_DAT_11273ebcc;
  lVar3 = param_1 + lVar18;
  _objc_loadWeakRetained();
  if ((lVar3 == 0) ||
     (bVar1 = *(byte *)(param_1 + _DAT_11273ebb8), _objc_release(), (bVar1 & 1) == 0)) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3540(param_1);
    _objc_release(ppuVar4);
  }
  else {
    *(undefined8 *)(param_1 + _DAT_11273ebe4) = param_4;
    lVar3 = param_1;
    func_0x00010beb6940();
    ppuVar4 = *(undefined ***)(param_1 + _DAT_11273eb34);
    func_0x00010c15a860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    if (ppuVar5 != (undefined **)0x0) {
      puVar6 = PTR_PTR_1126b2798;
      _objc_opt_new();
      lVar17 = (long)_DAT_11273ebe0;
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar17));
      _objc_retain(puVar6);
      uVar7 = *(undefined8 *)(param_1 + lVar17);
      *(undefined **)(param_1 + lVar17) = puVar6;
      _objc_release(uVar7);
      puVar8 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfffb60();
      func_0x00010c24dbc0();
      lVar17 = param_1 + lVar18;
      _objc_loadWeakRetained(lVar17);
      func_0x00010befbb60();
      _objc_release(lVar17);
      func_0x00010c219b60(puVar8);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar9 = puVar8;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1 + lVar18;
      _objc_loadWeakRetained();
      lVar10 = lVar17;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar8;
      puStack_90 = puVar11;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_1 + lVar18;
      _objc_loadWeakRetained(lVar18);
      lVar13 = lVar18;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(lVar13);
      _objc_release(lVar18);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lVar10);
      _objc_release(lVar17);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126afd78;
      _objc_alloc();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_1060b30f4;
      puStack_a0 = &UNK_110842e18;
      _objc_retain(puVar8);
      puStack_98 = puVar8;
      func_0x00010bffae00();
      func_0x00010bef7460(puVar6);
      _objc_initWeak(auStack_c0,param_1);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_120 = puVar2;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_1060b311c;
      puStack_108 = &UNK_11090caf8;
      ppuVar4 = &puStack_120;
      _objc_copyWeak(auStack_d8,auStack_c0);
      _objc_retain(puVar9);
      puStack_100 = puVar9;
      _objc_retain(puVar6);
      puStack_f8 = puVar6;
      uStack_d0 = param_4;
      _objc_retain(param_7);
      uStack_f0 = param_7;
      _objc_retain(param_5);
      lStack_e8 = param_5;
      _objc_retain(param_9);
      uStack_e0 = param_9;
      ppuVar16 = ppuVar5;
      bStack_c8 = (param_6 | (byte)lVar3) & 1;
      uStack_c7 = param_8;
      bStack_c6 = (byte)lVar3;
      func_0x00010c09c160(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      func_0x00010bef7460(puVar6);
      _objc_release(ppuVar16);
      _objc_release(uStack_e0);
      _objc_release(lStack_e8);
      _objc_release(uStack_f0);
      _objc_release(puStack_f8);
      _objc_release(puStack_100);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_c0);
      _objc_release(puVar9);
      _objc_release(puStack_98);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
    _objc_release(ppuVar5);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar4 + 9);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
  func_0x00010c2558c0(*(undefined8 *)(param_5 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1060b30f4; end: 1060b311b;  */

void FUN_1060b30f4(long param_1)

{
  func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1060b311c; end: 1060b32a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b311c(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar5 = param_2;
  if (lVar1 != 0) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11273ebe0);
    *(undefined8 *)(lVar1 + _DAT_11273ebe0) = 0;
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c06e0e0();
    puVar4 = PTR_PTR_1126afca8;
    if ((((uVar3 & 1) == 0) && ((*(byte *)(lVar1 + _DAT_11273ebd8) & 1) == 0)) &&
       (*(char *)(lVar1 + _DAT_11273ebb8) == '\x01')) {
      if (param_3 == 0) {
        puVar5 = PTR_PTR_1126c7b80;
        func_0x00010c0d32e0(PTR_PTR_1126c7b80);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        func_0x00010bedf7a0(lVar1);
        if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
          func_0x00010bed74c0(lVar1);
        }
        else if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
          lVar6 = (long)_DAT_11273ebbc;
          func_0x00010c2009a0(*(undefined8 *)(lVar1 + lVar6));
          func_0x00010c0fe360(*(undefined8 *)(lVar1 + lVar6));
        }
      }
      else {
        func_0x000107e480a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237520(puVar4);
        _objc_release(uVar3);
        uVar2 = *(undefined8 *)(lVar1 + _DAT_11273eb24);
        puVar4 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar2);
        _objc_release(puVar4);
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1060b32a8; end: 1060b33db; -[SCFeatureMusicImpl _updateCapturer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b32a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((*(char *)(param_1 + _DAT_11273ebb8) == '\x01') &&
      ((*(byte *)(param_1 + _DAT_11273ebf8) & 1) == 0)) &&
     (*(long *)(param_1 + _DAT_11273ebb4) != 0)) {
    lVar1 = param_1 + _DAT_11273eb48;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d3ec0();
  }
  else {
    lVar1 = param_1 + _DAT_11273eb48;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2818c0();
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar3 = (long)_DAT_11273ebf4;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  if ((*(byte *)(param_1 + _DAT_11273ebf8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273ebb4);
  }
  else {
    uVar2 = 0;
  }
  func_0x00010c1c9fc0(lVar1,param_2,uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1ca2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b33dc; end: 1060b346b; -[SCFeatureMusicImpl _updateDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b33dc(long param_1,undefined8 param_2,uint param_3)

{
  if ((((param_3 & 1) != 0) || ((*(byte *)(param_1 + _DAT_11273eb7c) & 1) == 0)) &&
     (*(byte *)(param_1 + _DAT_11273ebf8) != param_3)) {
    *(char *)(param_1 + _DAT_11273ebf8) = (char)param_3;
    if (param_3 == 0) {
      func_0x00010be7b240(param_1,param_2,1);
    }
    else {
      func_0x00010be01f80();
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11273ebe0));
      func_0x00010be02a00(param_1);
    }
    func_0x00010bee25a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCapturer_112592d38);
    return;
  }
  return;
}



/* Entry: 1060b346c; end: 1060b374f; -[SCFeatureMusicImpl _viewControllerVisibilityDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b346c(ulong param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*(byte *)(param_1 + (long)_DAT_11273ebb8) == param_3) {
    return;
  }
  *(char *)(param_1 + (long)_DAT_11273ebb8) = (char)param_3;
  if (param_3 == 0) {
    func_0x00010be01f80(param_1);
    func_0x00010be92380(param_1);
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + (long)_DAT_11273ebe0));
    func_0x00010be02a00(param_1);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + (long)_DAT_11273eb20));
    func_0x00010bdeaba0(param_1);
    goto LAB_1060b3738;
  }
  lVar1 = param_1 + (long)_DAT_11273ebf4;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(lVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010bde5f00(param_1);
  uVar4 = param_1;
  func_0x00010be3fa60();
  uVar6 = param_1;
  if ((int)uVar4 == 0) {
LAB_1060b3604:
    uVar4 = param_1;
    func_0x00010be3fa80();
    if ((int)uVar4 != 0) {
      uVar8 = *(ulong *)(param_1 + (long)_DAT_11273ebb4);
      func_0x00010bdc8420();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c0d32a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar8);
      _objc_retain(uVar4);
      if (uVar8 != uVar4) {
        if (uVar4 == 0) {
          _objc_release(uVar8);
          _objc_release(uVar6);
        }
        else {
          uVar7 = uVar8;
          func_0x00010c071ae0();
          _objc_release(uVar4);
          _objc_release(uVar8);
          _objc_release(uVar4);
          _objc_release(uVar6);
          if ((uVar7 & 1) != 0) goto LAB_1060b371c;
        }
        uVar6 = param_1;
        func_0x00010bdc8420(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1060b36ec;
      }
      _objc_release(uVar4);
      _objc_release(uVar8);
      goto LAB_1060b370c;
    }
  }
  else {
    uVar7 = *(ulong *)(param_1 + (long)_DAT_11273ebb4);
    uVar4 = param_1;
    func_0x00010be61580();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c0d32a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    if (uVar7 == uVar8) {
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar4);
      goto LAB_1060b3604;
    }
    if (uVar8 == 0) {
      _objc_release(uVar7);
      _objc_release(uVar4);
    }
    else {
      uVar5 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) goto LAB_1060b3604;
    }
    func_0x00010be61580(param_1);
    _objc_retainAutoreleasedReturnValue();
LAB_1060b36ec:
    uVar4 = uVar6;
    func_0x00010c0d32a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedf7a0(param_1);
LAB_1060b370c:
    _objc_release(uVar4);
    _objc_release(uVar6);
  }
LAB_1060b371c:
  func_0x00010be78e60(param_1);
  func_0x00010be7b240(param_1);
  func_0x00010beb9160(param_1);
LAB_1060b3738:
                    /* WARNING: Could not recover jumptable at 0x00010bed4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCapturer_112592d38);
  return;
}



/* Entry: 1060b3750; end: 1060b380b; -[SCFeatureMusicImpl _isFavoritedSoundsEducationEligibleForUpdateJob:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1060b3750(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf33240();
  if ((((lVar1 == 1) && (lVar1 = param_3, func_0x00010c085920(), lVar1 == 1)) &&
      (lVar1 = param_3, func_0x00010c252440(), lVar1 == 3)) &&
     ((*(byte *)(param_1 + _DAT_11273ebf8) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273eba0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdb940();
    func_0x00010beb6a60(param_1,param_2,uVar3);
    _objc_release(uVar2);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1060b380c; end: 1060b397f; -[SCFeatureMusicImpl _startFavoritedSoundsEducationForTrackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b380c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_11273ebf8) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273eba0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfdb940();
    lVar2 = param_1;
    func_0x00010beb6a60(param_1,param_2,uVar3);
    _objc_release(uVar1);
    if ((int)lVar2 != 0) {
      if (*(char *)(param_1 + _DAT_11273ec28) == '\x01') {
        func_0x00010beb9160(param_1);
      }
      else {
        *(undefined1 *)(param_1 + _DAT_11273ec28) = 1;
        uVar3 = *(undefined8 *)(param_1 + _DAT_11273ec2c);
        *(undefined8 *)(param_1 + _DAT_11273ec2c) = 0;
        _objc_release(uVar3);
        *(undefined1 *)(param_1 + _DAT_11273ec30) = 0;
        lVar2 = *(long *)(param_1 + _DAT_11273ec34) + 1;
        *(long *)(param_1 + _DAT_11273ec34) = lVar2;
        func_0x00010beb9160(param_1);
        lVar6 = param_3;
        func_0x00010c0b4ca0();
        lVar7 = (long)_DAT_11273ebb4;
        lVar4 = *(long *)(param_1 + lVar7);
        if (lVar4 != 0) {
          func_0x00010c15a4a0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c277e80();
          _objc_release(lVar4);
          if (lVar5 == lVar6) {
            lVar6 = *(long *)(param_1 + lVar7);
            func_0x00010beff2a0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 != 0) {
              func_0x00010be4d300(param_1,param_2,lVar6,lVar2);
              _objc_release(lVar6);
              goto LAB_1060b3964;
            }
          }
        }
        func_0x00010be0f300(param_1,param_2,param_3,lVar2);
      }
    }
  }
LAB_1060b3964:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b3980; end: 1060b399b; -[SCFeatureMusicImpl _favoritedSoundsEducationAlbumArtEveryFavoriteEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beff290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c7b88,PTR_s_albumArtEveryFavoriteEnabledWith_11259d648,
             *(undefined8 *)(param_1 + _DAT_11273eb78));
  return;
}



/* Entry: 1060b399c; end: 1060b39ab; -[SCFeatureMusicImpl _shouldStartFavoritedSoundsEducationForSeenTooltip:] */

undefined8 FUN_1060b399c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__favoritedSoundsEducationAlbumAr_112561370)
    ;
    return param_1;
  }
  return 1;
}



/* Entry: 1060b39ac; end: 1060b3a6f; -[SCFeatureMusicImpl _isFavoritedSoundsEducationPresentationEligibleToShow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1060b39ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((((*(char *)(param_1 + _DAT_11273ebb8) == '\x01') &&
       ((*(byte *)(param_1 + _DAT_11273ebf8) & 1) == 0)) &&
      ((*(byte *)(param_1 + _DAT_11273ebec) & 1) == 0)) &&
     ((*(char *)(param_1 + _DAT_11273ec28) == '\x01' &&
      (puVar1 = PTR_PTR_1126c7b88,
      func_0x00010bf92b60(PTR_PTR_1126c7b88,param_2,*(undefined8 *)(param_1 + _DAT_11273eb78)),
      (int)puVar1 != 0)))) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273eba0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdb940();
    func_0x00010beb6a60(param_1,param_2,uVar3);
    _objc_release(uVar2);
    return param_1;
  }
  return 0;
}



/* Entry: 1060b3a70; end: 1060b3a8b; -[SCFeatureMusicImpl _favoritedSoundsEducationTooltipDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c7b88,PTR_s_tooltipDurationWithCircumstanceE_11267a9a8,
             *(undefined8 *)(param_1 + _DAT_11273eb78));
  return;
}



/* Entry: 1060b3a8c; end: 1060b3ae3; -[SCFeatureMusicImpl _discardPendingFavoritedSoundsEducationTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3a8c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdda840();
  if (*(char *)(param_1 + _DAT_11273ec28) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11273ec28) = 0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273ec2c);
    *(undefined8 *)(param_1 + _DAT_11273ec2c) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_11273ec30) = 0;
  }
  return;
}



/* Entry: 1060b3ae4; end: 1060b3b5b; -[SCFeatureMusicImpl _hideFavoritedSoundsEducationTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3ae4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11273ec04;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf25540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bfe1a20(lVar2);
  func_0x00010bfe2060(lVar2);
  func_0x00010bde0500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060b3b5c; end: 1060b3ba7; -[SCFeatureMusicImpl _clearFavoritedSoundsEducationTapRouting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3b5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ec38;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11273ec3c) = 0;
  return;
}



/* Entry: 1060b3ba8; end: 1060b3c17; -[SCFeatureMusicImpl _invalidateFavoritedSoundsEducationTimers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3ba8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ec40;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11273ec44;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11273ec38;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060b3c18; end: 1060b3c6f; -[SCFeatureMusicImpl _cancelFavoritedSoundsEducationTooltipPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3c18(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be35740();
  func_0x00010be3d8c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ec2c);
  *(undefined8 *)(param_1 + _DAT_11273ec2c) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11273ec30) = 0;
  *(long *)(param_1 + _DAT_11273ec34) = *(long *)(param_1 + _DAT_11273ec34) + 1;
  return;
}


