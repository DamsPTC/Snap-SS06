/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107aa1600; end: 107aa1633; -[SCStoriesViewingSession _markCheetahSwipeLeftInterstitialCompleted] */

void FUN_107aa1600(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1907a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107aa1634; end: 107aa1903; -[SCStoriesViewingSession _extraPropertiesForStorySnap:pageProperties:] */

void FUN_107aa1634(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)(param_1 + 0x270) == 3) && (lVar2 = param_1, func_0x00010be40780(), (int)lVar2 != 0)
     ) {
    uVar3 = *(undefined8 *)(param_1 + 0x198);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2468;
    func_0x00010bf71b60(PTR_PTR_1126c2468);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f320();
    _objc_release(puVar4);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      lVar2 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08fa60();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar7 == 0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e4d098;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e4d098,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar8 = &PTR____CFConstantStringClassReference_110e4d098;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e4d098,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
      }
      func_0x00010c1d0640(puVar1);
      func_0x00010c1d0640(puVar1);
      puVar4 = PTR_PTR_1126d6300;
      _objc_alloc(PTR_PTR_1126d6300);
      uVar5 = param_3;
      func_0x00010c26df40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051ee0(puVar4);
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
      _objc_release(uVar5);
      uVar5 = param_3;
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(uVar5);
      _objc_release(ppuVar9);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
  }
  func_0x00010bf9eae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107aa1904; end: 107aa1a4f; -[SCStoriesViewingSession extraPropertiesForStorySnap:] */

void FUN_107aa1904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf9eae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010be0da00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf5eda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf9eae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x2d8);
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    uVar2 = param_3;
    func_0x00010853c4a4(param_3,*(undefined8 *)(param_1 + 0x2d8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(uVar2);
  }
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107aa1a50; end: 107aa1c83; -[SCStoriesViewingSession _extraToolTipsPropertiesForStorySnap:] */

void FUN_107aa1a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if ((((*(long *)(param_1 + 0x2d0) == 1) ||
       (lVar5 = *(long *)(param_1 + 0x140),
       lVar5 - 0x49U < 0x1a && (1L << (lVar5 - 0x49U & 0x3f) & 0x2020001U) != 0)) ||
      (uVar3 = lVar5 - 0x57U >> 1,
      (uVar3 | lVar5 - 0x57U << 0x3f) < 8 && (1L << (uVar3 & 0x3f) & 0xb1U) != 0)) ||
     ((lVar5 - 0x42U < 0x2a && ((1L << (lVar5 - 0x42U & 0x3f) & 0x3c000140711U) != 0)))) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0d278);
    _objc_release(puVar4);
    func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanFalse_11034ab60,
                        &PTR____CFConstantStringClassReference_110f0d298);
    goto LAB_107aa1b38;
  }
  lVar5 = param_1;
  func_0x00010be40780(param_1,param_2,param_3);
  if ((int)lVar5 == 0) {
LAB_107aa1bcc:
    lVar5 = param_1;
    func_0x00010beb5d60(param_1,param_2,param_3);
    if ((int)lVar5 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = PTR_PTR_1126c9ae8;
      func_0x00010bfc1c80(PTR_PTR_1126c9ae8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x180);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdb860();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_107aa1bcc;
    puVar4 = PTR_PTR_1126c9ae8;
    func_0x00010bfc1ca0(PTR_PTR_1126c9ae8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0d278);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xf4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0d298);
  _objc_release(puVar4);
LAB_107aa1b38:
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107aa1c84; end: 107aa1dd7; -[SCStoriesViewingSession _isFirstChunkWithStorySnap:] */

long FUN_107aa1c84(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    uVar1 = param_1 + 0x308;
    _objc_loadWeakRetained();
    _objc_retain();
    uVar2 = uVar1;
    func_0x00010c064160(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b5bc0;
    if (uVar3 == 0) {
      lVar6 = 0;
    }
    else {
      _objc_retain(uVar3);
      _objc_opt_class(puVar4);
      uVar2 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar1 = uVar3;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      if ((uVar2 & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar5 = param_3;
        func_0x00010c15f2e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c15f2e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0720c0(lVar5);
        _objc_release(uVar2);
        _objc_release(lVar5);
      }
      _objc_release(uVar1);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 107aa1dd8; end: 107aa23f7; -[SCStoriesViewingSession registeredEventsForOperaSession] */

void FUN_107aa1dd8(undefined8 param_1)

{
  int iVar1;
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
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined **ppuVar44;
  ulong uVar45;
  undefined *puVar46;
  undefined **ppuVar47;
  undefined *puVar48;
  ulong in_x4;
  undefined8 uVar49;
  ulong uVar50;
  ulong uVar51;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9c10;
  puStack_1d0 = puVar2;
  func_0x00010c0e92a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9c10;
  puStack_1c8 = puVar3;
  func_0x00010bf3dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = PTR_PTR_1126b2330;
  puStack_1c0 = puVar4;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_1b8 = puVar46;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_1b0 = puVar5;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_1a8 = puVar6;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2330;
  puStack_1a0 = puVar7;
  func_0x00010c29ef00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2330;
  puStack_198 = puVar8;
  func_0x00010c29eee0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2330;
  puStack_190 = puVar9;
  func_0x00010c29ef40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2330;
  puStack_188 = puVar10;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2330;
  puStack_180 = puVar11;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2338;
  puStack_178 = puVar12;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2338;
  puStack_170 = puVar13;
  func_0x00010c23c600();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b6128;
  puStack_168 = puVar14;
  func_0x00010c08c2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c95c8;
  puStack_160 = puVar15;
  func_0x00010bf98f20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126c9460;
  puStack_158 = puVar16;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126c9460;
  puStack_150 = puVar17;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c9460;
  puStack_148 = puVar18;
  func_0x00010c0f2600();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c9460;
  puStack_140 = puVar19;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126c9460;
  puStack_138 = puVar20;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126c9460;
  puStack_130 = puVar21;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2330;
  puStack_128 = puVar22;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126b2338;
  puStack_120 = puVar23;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126c9c10;
  puStack_118 = puVar24;
  func_0x00010bf1d800();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126c9c10;
  puStack_110 = puVar25;
  func_0x00010bf3de20();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126b2ea8;
  puStack_108 = puVar26;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126b2ea8;
  puStack_100 = puVar27;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126b2d30;
  puStack_f8 = puVar28;
  func_0x00010bfe1fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126b2d30;
  puStack_f0 = puVar29;
  func_0x00010c085a60();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR_PTR_1126c9460;
  puStack_e8 = puVar30;
  func_0x00010bf11320();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR_PTR_1126c9460;
  puStack_e0 = puVar31;
  func_0x00010c269c60();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126ca2c0;
  puStack_d8 = puVar32;
  func_0x00010c0ebf60();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR_PTR_1126b2338;
  puStack_d0 = puVar33;
  func_0x00010c29b4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR_PTR_1126c9a10;
  puStack_c8 = puVar34;
  func_0x00010c29dbc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ebeb98;
  puVar36 = PTR_PTR_1126d5300;
  puStack_c0 = puVar35;
  func_0x00010c06a5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR_PTR_1126b2ea8;
  puStack_b0 = puVar36;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = PTR_PTR_1126b2ea8;
  puStack_a8 = puVar37;
  func_0x00010c2685e0();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = PTR_PTR_1126b2638;
  puStack_a0 = puVar38;
  func_0x00010bf7b7a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ebebb8;
  puVar40 = PTR_PTR_1126c9460;
  puStack_98 = puVar39;
  func_0x00010c29ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR_PTR_1126b2e40;
  puStack_88 = puVar40;
  func_0x00010c24a1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR_PTR_1126b2e40;
  puStack_80 = puVar41;
  func_0x00010c24a180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar47 = &puStack_1d0;
  puVar48 = (undefined *)0x2c;
  puVar43 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar42;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
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
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar46);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar43);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar47);
  _objc_retain(puVar48);
  _objc_retain(in_x4);
  puVar3 = PTR_PTR_1126b2d30;
  func_0x00010bfe1fa0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar44 = ppuVar47;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)ppuVar44 != 0) {
    func_0x00010be2a780(puVar2);
    goto LAB_107aa2a10;
  }
  puVar3 = PTR_PTR_1126b2d30;
  func_0x00010c085a60(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar44 = ppuVar47;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)ppuVar44 != 0) {
    func_0x00010be2b0c0(puVar2);
    goto LAB_107aa2a10;
  }
  puVar3 = puVar48;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  puVar46 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar3);
  puVar3 = puVar4;
  if (((ulong)puVar46 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  if ((*(long *)(puVar2 + 0xd8) == 0) && (puVar3 != (undefined *)0x0)) {
    func_0x00010beafb80(puVar2);
  }
  func_0x00010bed6580(puVar2);
  ppuVar44 = ppuVar47;
  func_0x00010c0720c0();
  if ((int)ppuVar44 != 0) {
    uVar51 = in_x4;
    func_0x00010c0e00e0(in_x4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010bee37a0(puVar2);
    _objc_release(uVar51);
  }
  ppuVar44 = ppuVar47;
  func_0x00010c0720c0();
  if ((int)ppuVar44 != 0) {
    puVar46 = puVar2;
    func_0x00010bf5eda0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2030a0();
    _objc_release(puVar46);
  }
  puVar46 = PTR_PTR_1126c9a58;
  if (puVar3 != (undefined *)0x0) {
    puVar5 = puVar48;
    func_0x00010c118b40(puVar48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07fc00();
    if (((ulong)puVar46 & 1) == 0) {
      puVar46 = PTR_PTR_1126b2330;
      func_0x00010bf17ae0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar44 = ppuVar47;
      func_0x00010c0720c0();
      if (((ulong)ppuVar44 & 1) != 0) {
LAB_107aa26a0:
        _objc_release(puVar46);
        goto LAB_107aa26a8;
      }
      puVar6 = PTR_PTR_1126c9a10;
      func_0x00010c29dbc0(PTR_PTR_1126c9a10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar44 = ppuVar47;
      func_0x00010c0720c0();
      if (((ulong)ppuVar44 & 1) != 0) {
LAB_107aa2698:
        _objc_release(puVar6);
        goto LAB_107aa26a0;
      }
      puVar7 = PTR_PTR_1126b2ea8;
      func_0x00010c268600(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar44 = ppuVar47;
      func_0x00010c0720c0();
      if (((ulong)ppuVar44 & 1) != 0) {
        _objc_release(puVar7);
        goto LAB_107aa2698;
      }
      puVar8 = PTR_PTR_1126b2ea8;
      func_0x00010c2685e0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar44 = ppuVar47;
      func_0x00010c0720c0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar46);
      _objc_release(puVar5);
      if (((ulong)ppuVar44 & 1) == 0) goto LAB_107aa2a08;
    }
    else {
LAB_107aa26a8:
      _objc_release(puVar5);
    }
    func_0x000108535b00();
    _objc_retainAutoreleasedReturnValue();
    puVar46 = puVar48;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar46;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar46);
    func_0x00010beaf6c0(puVar2);
    puVar46 = puVar48;
    func_0x00010c118b40(puVar48);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar46;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar6);
    _objc_release(puVar46);
    func_0x00010bec1d60(puVar2);
    puVar46 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar44 = ppuVar47;
    func_0x00010c0720c0();
    _objc_release(puVar46);
    if ((int)ppuVar44 != 0) {
      *(undefined8 *)(puVar2 + 0x298) = 5;
      puVar46 = puVar2;
      func_0x00010be749e0();
      *(undefined **)(puVar2 + 0x130) = puVar46;
      func_0x00010bedc6e0(puVar2);
      goto LAB_107aa29ec;
    }
    puVar46 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar44 = ppuVar47;
    func_0x00010c0720c0();
    _objc_release(puVar46);
    puVar46 = puVar2;
    if ((int)ppuVar44 == 0) {
      puVar6 = PTR_PTR_1126b2330;
      func_0x00010c0e9c60(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar44 = ppuVar47;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      if ((int)ppuVar44 == 0) {
        puVar6 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        ppuVar44 = ppuVar47;
        func_0x00010c0720c0();
        _objc_release(puVar6);
        if ((int)ppuVar44 == 0) {
          puVar6 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          ppuVar44 = ppuVar47;
          func_0x00010c0720c0();
          _objc_release(puVar6);
          if ((int)ppuVar44 == 0) {
            puVar6 = PTR_PTR_1126b2330;
            func_0x00010bf3df20(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            ppuVar44 = ppuVar47;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            if ((int)ppuVar44 == 0) {
              puVar6 = PTR_PTR_1126b2330;
              func_0x00010c29ef00(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              ppuVar44 = ppuVar47;
              func_0x00010c0720c0();
              _objc_release(puVar6);
              if ((int)ppuVar44 == 0) {
                puVar6 = PTR_PTR_1126b2338;
                func_0x00010c23c600(PTR_PTR_1126b2338);
                _objc_retainAutoreleasedReturnValue();
                ppuVar44 = ppuVar47;
                func_0x00010c0720c0();
                if ((int)ppuVar44 != 0) {
                  uVar51 = *(long *)(puVar2 + 0x140) - 0x49;
                  if (((uVar51 < 0x1a) && ((1L << (uVar51 & 0x3f) & 0x2020001U) != 0)) ||
                     ((uVar50 = *(long *)(puVar2 + 0x140) - 0x57, uVar51 = uVar50 >> 1,
                      (uVar51 | uVar50 << 0x3f) < 8 && ((1L << (uVar51 & 0x3f) & 0xb1U) != 0)))) {
                    _objc_release(puVar6);
                    puVar2[0x101] = 1;
                    puVar7 = puVar2;
                    func_0x00010bf5eda0(puVar2);
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = puVar2 + 0x2f8;
                    _objc_loadWeakRetained(puVar6);
                    puVar8 = puVar6;
                    func_0x00010c0688c0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar8;
                    func_0x00010c089060();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c256b00(puVar7);
                    _objc_release(puVar9);
                    _objc_release(puVar8);
                    _objc_release(puVar6);
                    _objc_release(puVar7);
                    func_0x00010bf5eda0(puVar2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c256aa0();
                    goto LAB_107aa29e8;
                  }
                }
                _objc_release(puVar6);
                puVar6 = PTR_PTR_1126b2330;
                func_0x00010c29eee0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar44 = ppuVar47;
                func_0x00010c0720c0();
                _objc_release(puVar6);
                if ((int)ppuVar44 == 0) {
                  puVar6 = PTR_PTR_1126c9460;
                  func_0x00010c269c60(PTR_PTR_1126c9460);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar44 = ppuVar47;
                  func_0x00010c0720c0();
                  if ((int)ppuVar44 == 0) {
                    puVar7 = PTR_PTR_1126c9460;
                    func_0x00010bf11320(PTR_PTR_1126c9460);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar44 = ppuVar47;
                    func_0x00010c0720c0();
                    _objc_release(puVar7);
                    _objc_release(puVar6);
                    if ((int)ppuVar44 == 0) {
                      puVar6 = PTR_PTR_1126b6128;
                      func_0x00010c08c2c0(PTR_PTR_1126b6128);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar44 = ppuVar47;
                      func_0x00010c0720c0();
                      _objc_release(puVar6);
                      if ((int)ppuVar44 != 0) {
                        func_0x00010bf5eda0(puVar2);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf7c3e0();
                        goto LAB_107aa2f8c;
                      }
                      puVar6 = PTR_PTR_1126c9460;
                      func_0x00010c0f2600(PTR_PTR_1126c9460);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar44 = ppuVar47;
                      func_0x00010c0720c0();
                      _objc_release(puVar6);
                      if ((int)ppuVar44 == 0) {
                        puVar6 = PTR_PTR_1126c9460;
                        func_0x00010c0f25a0(PTR_PTR_1126c9460);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar44 = ppuVar47;
                        func_0x00010c0720c0();
                        _objc_release(puVar6);
                        if ((int)ppuVar44 == 0) {
                          puVar6 = PTR_PTR_1126b2330;
                          func_0x00010bf17ae0(PTR_PTR_1126b2330);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar44 = ppuVar47;
                          func_0x00010c0720c0();
                          _objc_release(puVar6);
                          if ((int)ppuVar44 != 0) goto LAB_107aa2b74;
                          puVar6 = PTR_PTR_1126c9c10;
                          func_0x00010c0e92a0(PTR_PTR_1126c9c10);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar44 = ppuVar47;
                          func_0x00010c0720c0();
                          _objc_release(puVar6);
                          if ((int)ppuVar44 != 0) {
                            puVar46 = puVar2 + 0x2f8;
                            _objc_loadWeakRetained(puVar46);
                            puVar6 = puVar46;
                            func_0x00010c29e000();
                            _objc_retainAutoreleasedReturnValue();
                            puVar7 = puVar2;
                            _objc_opt_class(puVar2);
                            _NSStringFromClass();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c0f6200(puVar6);
                            _objc_release(puVar7);
                            _objc_release(puVar6);
                            _objc_release(puVar46);
                            puVar46 = PTR_PTR_1126c9ae8;
                            puVar6 = puVar48;
                            func_0x00010c118b40(puVar48);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010bf4bb40();
                            _objc_release(puVar6);
                            if ((int)puVar46 == 0) goto LAB_107aa29ec;
LAB_107aa3168:
                            func_0x00010be5d280(puVar2);
                            goto LAB_107aa29ec;
                          }
                          puVar6 = PTR_PTR_1126c9c10;
                          func_0x00010bf3dbe0(PTR_PTR_1126c9c10);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar44 = ppuVar47;
                          func_0x00010c0720c0();
                          _objc_release(puVar6);
                          if ((int)ppuVar44 == 0) {
                            puVar6 = PTR_PTR_1126c9c10;
                            func_0x00010bf1d800(PTR_PTR_1126c9c10);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar44 = ppuVar47;
                            func_0x00010c0720c0();
                            _objc_release(puVar6);
                            if ((int)ppuVar44 != 0) {
                              puVar2[0xf4] = 1;
                              goto LAB_107aa32dc;
                            }
                            puVar6 = PTR_PTR_1126c9c10;
                            func_0x00010bf3de20(PTR_PTR_1126c9c10);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar44 = ppuVar47;
                            func_0x00010c0720c0();
                            _objc_release(puVar6);
                            if ((int)ppuVar44 != 0) {
                              uVar49 = *(undefined8 *)(puVar2 + 0x180);
                              func_0x00010c269d40(uVar49);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c1a6c40();
                              _objc_release(uVar49);
                              uVar49 = *(undefined8 *)(puVar2 + 0x180);
                              func_0x00010c269d40(uVar49);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c1fa8a0();
                              _objc_release(uVar49);
                              puVar46 = puVar2 + 0x2f8;
                              _objc_loadWeakRetained(puVar46);
                              puVar6 = puVar46;
                              func_0x00010c08f5e0();
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c18ebe0();
                              _objc_release(puVar6);
                              _objc_release(puVar46);
                              puVar2[0xf4] = 0;
                              goto LAB_107aa32dc;
                            }
                            puVar6 = PTR_PTR_1126c9460;
                            func_0x00010c0f25e0(PTR_PTR_1126c9460);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar44 = ppuVar47;
                            func_0x00010c0720c0();
                            if (((ulong)ppuVar44 & 1) != 0) {
LAB_107aa339c:
                              _objc_release(puVar6);
LAB_107aa33a4:
                              puVar46 = puVar2 + 0x2f8;
                              _objc_loadWeakRetained();
                              puVar6 = puVar46;
                              func_0x00010c0688c0();
                              _objc_retainAutoreleasedReturnValue();
                              puVar7 = puVar6;
                              func_0x00010c089060();
                              _objc_retainAutoreleasedReturnValue();
                              puVar8 = puVar7;
                              func_0x00010c27dd80();
                              if (puVar8 == (undefined *)0x7) {
                                _objc_release(puVar7);
                                _objc_release(puVar6);
                                _objc_release(puVar46);
LAB_107aa3468:
                                *(undefined8 *)(puVar2 + 0x130) = 3;
                              }
                              else {
                                puVar8 = puVar2 + 0x2f8;
                                _objc_loadWeakRetained();
                                puVar9 = puVar8;
                                func_0x00010c0688c0();
                                _objc_retainAutoreleasedReturnValue();
                                puVar10 = puVar9;
                                func_0x00010c089060();
                                _objc_retainAutoreleasedReturnValue();
                                puVar11 = puVar10;
                                func_0x00010c27dd80();
                                _objc_release(puVar10);
                                _objc_release(puVar9);
                                _objc_release(puVar8);
                                _objc_release(puVar7);
                                _objc_release(puVar6);
                                _objc_release(puVar46);
                                if (puVar11 == (undefined *)0x8) goto LAB_107aa3468;
                              }
                              puVar46 = puVar2 + 0x2f8;
                              _objc_loadWeakRetained();
                              puVar6 = puVar46;
                              func_0x00010c0688c0();
                              _objc_retainAutoreleasedReturnValue();
                              puVar7 = puVar6;
                              func_0x00010c089060();
                              _objc_retainAutoreleasedReturnValue();
                              puVar8 = puVar7;
                              func_0x00010c27dd80();
                              _objc_release(puVar7);
                              _objc_release(puVar6);
                              _objc_release(puVar46);
                              if (puVar8 != (undefined *)0x7) goto LAB_107aa29ec;
                              goto LAB_107aa3168;
                            }
                            puVar7 = PTR_PTR_1126c9460;
                            func_0x00010c0f2620(PTR_PTR_1126c9460);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar44 = ppuVar47;
                            func_0x00010c0720c0();
                            if (((ulong)ppuVar44 & 1) != 0) {
LAB_107aa3394:
                              _objc_release(puVar7);
                              goto LAB_107aa339c;
                            }
                            puVar8 = PTR_PTR_1126c9460;
                            func_0x00010c0f2580();
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar44 = ppuVar47;
                            func_0x00010c0720c0();
                            if ((int)ppuVar44 != 0) {
                              _objc_release(puVar8);
                              goto LAB_107aa3394;
                            }
                            puVar9 = PTR_PTR_1126c9460;
                            func_0x00010c0f2560(PTR_PTR_1126c9460);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar44 = ppuVar47;
                            func_0x00010c0720c0();
                            _objc_release(puVar9);
                            _objc_release(puVar8);
                            _objc_release(puVar7);
                            _objc_release(puVar6);
                            if (((ulong)ppuVar44 & 1) != 0) goto LAB_107aa33a4;
                            puVar6 = PTR_PTR_1126b2ea8;
                            func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar44 = ppuVar47;
                            func_0x00010c0720c0();
                            if ((int)ppuVar44 == 0) {
                              puVar7 = PTR_PTR_1126b2ea8;
                              func_0x00010c235940(PTR_PTR_1126b2ea8);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar7);
                              _objc_release(puVar6);
                              if ((int)ppuVar44 != 0) goto LAB_107aa358c;
                              puVar6 = PTR_PTR_1126ca2c0;
                              func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              if ((int)ppuVar44 != 0) {
                                puVar2[0x100] = 0;
                                func_0x00010befa120(*(undefined8 *)(puVar2 + 0x90));
                                func_0x00010be389c0(puVar2);
                                puVar6 = puVar2;
                                func_0x00010bf5eda0(puVar2);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010bf78080();
                                _objc_release(puVar6);
                                puVar6 = PTR_PTR_1126ca2c0;
                                func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar44 = ppuVar47;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)ppuVar44 != 0) {
                                  func_0x00010bf5eda0(puVar2);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010bf75020();
                                  goto LAB_107aa29e8;
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar6 = PTR_PTR_1126b2338;
                              func_0x00010c29b4c0(PTR_PTR_1126b2338);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              if ((int)ppuVar44 != 0) {
                                func_0x00010bf5eda0(puVar2);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c299d60();
                                goto LAB_107aa2f8c;
                              }
                              puVar6 = PTR_PTR_1126c9a10;
                              func_0x00010c29dbc0(PTR_PTR_1126c9a10);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              if ((int)ppuVar44 != 0) {
                                puVar46 = PTR_PTR_1126c9898;
                                func_0x00010c250a00(PTR_PTR_1126c9898);
                                _objc_retainAutoreleasedReturnValue();
                                uVar51 = in_x4;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release();
                                _objc_release(puVar46);
                                if (uVar51 != 0) {
                                  puVar46 = PTR_PTR_1126c9898;
                                  func_0x00010c250a00(PTR_PTR_1126c9898);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar51 = in_x4;
                                  func_0x00010c0e00e0(in_x4);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010bf885a0();
                                  *(undefined8 *)(puVar2 + 0x120) = param_1;
                                  _objc_release(uVar51);
                                  _objc_release(puVar46);
                                }
                                puVar46 = PTR_PTR_1126c9898;
                                func_0x00010c2299a0(PTR_PTR_1126c9898);
                                _objc_retainAutoreleasedReturnValue();
                                uVar51 = in_x4;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release();
                                _objc_release(puVar46);
                                if (uVar51 != 0) {
                                  puVar46 = PTR_PTR_1126c9898;
                                  func_0x00010c2299a0(PTR_PTR_1126c9898);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar51 = in_x4;
                                  func_0x00010c0e00e0(in_x4);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010bf885a0();
                                  *(undefined8 *)(puVar2 + 0x128) = param_1;
                                  _objc_release(uVar51);
                                  goto LAB_107aa29e8;
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar6 = PTR_PTR_1126b2ea8;
                              func_0x00010c268600(PTR_PTR_1126b2ea8);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              if ((int)ppuVar44 != 0) {
                                _objc_release(puVar6);
LAB_107aa38a0:
                                func_0x00010bee6ba0(puVar2);
                                goto LAB_107aa29ec;
                              }
                              puVar7 = PTR_PTR_1126b2ea8;
                              func_0x00010c2685e0(PTR_PTR_1126b2ea8);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar7);
                              _objc_release(puVar6);
                              if ((int)ppuVar44 != 0) goto LAB_107aa38a0;
                              puVar6 = PTR_PTR_1126b2638;
                              func_0x00010bf7b7a0(PTR_PTR_1126b2638);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              if ((int)ppuVar44 != 0) {
                                func_0x00010bf5eda0(puVar2);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c289d80();
                                goto LAB_107aa2f8c;
                              }
                              puVar6 = PTR_PTR_1126b2330;
                              func_0x00010bf96a00(PTR_PTR_1126b2330);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              if ((int)ppuVar44 != 0) {
                                if (puVar2[0x1d0] == '\x01') {
                                  func_0x00010c29e8e0(puVar2);
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar6 = PTR_PTR_1126b2330;
                              func_0x00010bf96940(PTR_PTR_1126b2330);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              if ((int)ppuVar44 != 0) {
                                if (puVar2[0x1d0] == '\x01') {
                                  func_0x00010be68520(puVar2);
                                  func_0x00010be6c6c0(puVar2);
                                  func_0x00010c29c960(puVar2);
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar6 = PTR_PTR_1126c9460;
                              func_0x00010c29ae40(PTR_PTR_1126c9460);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar44 = ppuVar47;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              if ((int)ppuVar44 == 0) {
                                puVar6 = PTR_PTR_1126b2e40;
                                func_0x00010c24a1a0(PTR_PTR_1126b2e40);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar44 = ppuVar47;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)ppuVar44 == 0) {
                                  puVar6 = PTR_PTR_1126b2e40;
                                  func_0x00010c24a180(PTR_PTR_1126b2e40);
                                  _objc_retainAutoreleasedReturnValue();
                                  ppuVar44 = ppuVar47;
                                  func_0x00010c0720c0();
                                  _objc_release(puVar6);
                                  if ((int)ppuVar44 != 0) goto LAB_107aa2dcc;
                                }
                                else {
                                  func_0x00010be68520(puVar2);
                                  func_0x00010be6c6c0(puVar2);
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar46 = PTR_PTR_1126c9cf8;
                              func_0x00010bf9a340(PTR_PTR_1126c9cf8);
                              _objc_retainAutoreleasedReturnValue();
                              uVar50 = in_x4;
                              func_0x00010c0e00e0();
                              _objc_retainAutoreleasedReturnValue();
                              _objc_release(puVar46);
                              puVar46 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                              _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                              uVar45 = uVar50;
                              _objc_opt_isKindOfClass(uVar50,puVar46);
                              uVar51 = uVar50;
                              if ((uVar45 & 1) == 0) {
                                uVar51 = 0;
                              }
                              _objc_retain(uVar51);
                              _objc_release(uVar50);
                              uVar50 = uVar51;
                              func_0x00010c0720c0();
                              _objc_release(uVar51);
                              if ((int)uVar50 == 0) goto LAB_107aa29ec;
                              puVar46 = *(undefined **)(puVar2 + 0x198);
                              func_0x00010c269d40();
                              _objc_retainAutoreleasedReturnValue();
                              puVar6 = puVar46;
                              func_0x00010bf90b60();
                              if ((int)puVar6 != 0) {
                                puVar6 = PTR_PTR_1126b2348;
                                func_0x00010c156fa0(PTR_PTR_1126b2348);
                                _objc_retainAutoreleasedReturnValue();
                                uVar51 = in_x4;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                if (uVar51 == 0) {
                                  _objc_release(puVar6);
                                }
                                else {
                                  puVar7 = PTR_PTR_1126b2348;
                                  func_0x00010c1570c0(PTR_PTR_1126b2348);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar50 = in_x4;
                                  func_0x00010c0e00e0();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar45 = uVar50;
                                  func_0x00010bf1f3c0();
                                  _objc_release(uVar50);
                                  _objc_release(puVar7);
                                  _objc_release(uVar51);
                                  _objc_release(puVar6);
                                  _objc_release(puVar46);
                                  if ((uVar45 & 1) != 0) goto LAB_107aa29ec;
                                  puVar46 = puVar2;
                                  func_0x00010bf5eda0(puVar2);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010bf782a0();
                                }
                              }
                            }
                            else {
                              _objc_release(puVar6);
LAB_107aa358c:
                              puVar6 = puVar48;
                              func_0x00010c118b40(puVar48);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010be88620(puVar2);
                              _objc_release(puVar6);
                              func_0x00010bf5eda0(puVar2);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010bf77d40();
                            }
                          }
                          else {
                            puVar46 = puVar2 + 0x2f8;
                            _objc_loadWeakRetained(puVar46);
                            puVar6 = puVar46;
                            func_0x00010c29e000();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c13d1c0();
                            _objc_release(puVar6);
                            _objc_release(puVar46);
                            uVar49 = *(undefined8 *)(puVar2 + 0x180);
                            func_0x00010c269d40(uVar49);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1a6a40();
                            _objc_release(uVar49);
LAB_107aa32dc:
                            puVar46 = puVar2 + 0x2e8;
                            _objc_loadWeakRetained(puVar46);
                            puVar6 = puVar5;
                            func_0x00010bf3cf60(puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c288420(puVar46);
                            _objc_release(puVar6);
                          }
LAB_107aa2f8c:
                          _objc_release(puVar46);
                        }
                        else {
                          puVar46 = puVar2;
                          func_0x00010bf5eda0(puVar2);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf73480();
                          _objc_release(puVar46);
                          puVar2[0x280] = 0;
                        }
                      }
                      else {
                        puVar46 = puVar2;
                        func_0x00010bf5eda0(puVar2);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf73480();
                        _objc_release(puVar46);
                        puVar2[0x280] = 1;
                      }
                      goto LAB_107aa29ec;
                    }
                  }
                  else {
                    _objc_release(puVar6);
                  }
                  func_0x00010bf5eda0(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar2 + 0x2f8;
                  _objc_loadWeakRetained();
                  puVar7 = puVar6;
                  func_0x00010c0688c0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar7;
                  func_0x00010c089060();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2a57a0(puVar46);
                  _objc_release(puVar8);
                  _objc_release(puVar7);
                  _objc_release(puVar6);
                  goto LAB_107aa29e8;
                }
                iVar1 = (int)*(undefined8 *)(puVar2 + 0x188);
                func_0x00010c0720c0();
                if ((iVar1 != 0) && (*(long *)(puVar2 + 0x140) != 0xb)) {
                  uVar49 = *(undefined8 *)(puVar2 + 0x2e0);
                  puVar6 = PTR_PTR_1126b2ce8;
                  func_0x00010c0e9720(PTR_PTR_1126b2ce8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0eb7c0(uVar49);
                  _objc_release(puVar6);
                }
                if (puVar2[0x101] == '\x01') {
LAB_107aa2dcc:
                  puVar2[0x101] = 0;
                  puVar6 = puVar2;
                  func_0x00010bf5eda0(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c251960();
                  _objc_release(puVar6);
                  func_0x00010bf5eda0(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = PTR_PTR_1126b2340;
                  puVar7 = puVar48;
                  func_0x00010c118b40(puVar48);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0771a0(puVar6);
                  func_0x00010c250a60(puVar46);
                  _objc_release(puVar7);
                  goto LAB_107aa2d18;
                }
              }
              else if (((puVar2[0x1d0] & 1) == 0) || ((puVar2[0xf3] & 1) == 0)) {
                func_0x00010be6c6c0(puVar2);
              }
            }
            else {
LAB_107aa2b74:
              func_0x00010c2569c0(puVar2);
            }
          }
          else if (((puVar2[0x1d0] & 1) == 0) || ((puVar2[0xf3] & 1) == 0)) {
            func_0x00010be68520(puVar2);
          }
        }
        else {
          func_0x00010be00820(puVar2);
        }
      }
      else {
        puVar2[0xf2] = 0;
        func_0x00010c27c0a0(puVar2);
        puVar46 = puVar5;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar46;
        func_0x00010c27dd80();
        if ((puVar6 + 1 < (undefined *)0x1c) &&
           ((1L << ((ulong)(puVar6 + 1) & 0x3f) & 0xd8de5fdU) != 0)) goto LAB_107aa29e8;
LAB_107aa2d18:
        _objc_release(puVar46);
        func_0x00010be00820(puVar2);
      }
    }
    else {
      puVar6 = PTR_PTR_1126b2348;
      func_0x00010c0c5ec0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar51 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar49 = *(undefined8 *)(puVar2 + 0x2d8);
      *(ulong *)(puVar2 + 0x2d8) = uVar51;
      _objc_release(uVar49);
      _objc_release(puVar6);
      func_0x00010c1c4ee0(*(undefined8 *)(puVar2 + 0xd8));
      puVar6 = puVar2 + 0x2e8;
      _objc_loadWeakRetained(puVar6);
      puVar7 = puVar5;
      func_0x00010bf3cf60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c288420(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126b2340;
      puVar7 = puVar48;
      func_0x00010c118b40(puVar48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      puVar2[0x281] = (char)puVar6;
      _objc_release(puVar7);
      if ((puVar2[0x100] & 1) == 0) {
        puVar6 = puVar2;
        func_0x00010bf5eda0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf78080();
        _objc_release(puVar6);
      }
      puVar6 = PTR_PTR_1126b2340;
      puVar7 = puVar48;
      func_0x00010c118b40(puVar48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c076c60();
      puVar2[0xf2] = (char)puVar6;
      _objc_release(puVar7);
      if (puVar2[0xf2] == '\x01') {
        *(long *)(puVar2 + 0x2b8) = *(long *)(puVar2 + 0x2b8) + 1;
        puVar6 = puVar2;
        func_0x00010bf5eda0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c250aa0();
        _objc_release(puVar6);
      }
      func_0x00010bf5eda0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2030a0();
LAB_107aa29e8:
      _objc_release(puVar46);
    }
LAB_107aa29ec:
    func_0x00010beab800(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
LAB_107aa2a08:
  _objc_release(puVar3);
LAB_107aa2a10:
  _objc_release(in_x4);
  _objc_release(puVar48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar47);
  return;
}



/* Entry: 107aa23f8; end: 107aa3c17; -[SCStoriesViewingSession operaViewDidSendEvent:page:params:] */

void FUN_107aa23f8(undefined8 param_1,undefined *param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5,ulong param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bfe1fa0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar15 != 0) {
    func_0x00010be2a780(param_2);
    goto LAB_107aa2a10;
  }
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c085a60(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar15 != 0) {
    func_0x00010be2b0c0(param_2);
    goto LAB_107aa2a10;
  }
  puVar2 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  puVar12 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar12 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  if ((*(long *)(param_2 + 0xd8) == 0) && (puVar2 != (undefined *)0x0)) {
    func_0x00010beafb80(param_2);
  }
  func_0x00010bed6580(param_2);
  uVar15 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar15 != 0) {
    uVar15 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010bee37a0(param_2);
    _objc_release(uVar15);
  }
  uVar15 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar15 != 0) {
    puVar12 = param_2;
    func_0x00010bf5eda0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2030a0();
    _objc_release(puVar12);
  }
  puVar12 = PTR_PTR_1126c9a58;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07fc00();
    if (((ulong)puVar12 & 1) == 0) {
      puVar12 = PTR_PTR_1126b2330;
      func_0x00010bf17ae0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_4;
      func_0x00010c0720c0();
      if ((uVar15 & 1) != 0) {
LAB_107aa26a0:
        _objc_release(puVar12);
        goto LAB_107aa26a8;
      }
      puVar5 = PTR_PTR_1126c9a10;
      func_0x00010c29dbc0(PTR_PTR_1126c9a10);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_4;
      func_0x00010c0720c0();
      if ((uVar15 & 1) != 0) {
LAB_107aa2698:
        _objc_release(puVar5);
        goto LAB_107aa26a0;
      }
      puVar6 = PTR_PTR_1126b2ea8;
      func_0x00010c268600(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_4;
      func_0x00010c0720c0();
      if ((uVar15 & 1) != 0) {
        _objc_release(puVar6);
        goto LAB_107aa2698;
      }
      puVar7 = PTR_PTR_1126b2ea8;
      func_0x00010c2685e0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar12);
      _objc_release(puVar4);
      if ((uVar15 & 1) == 0) goto LAB_107aa2a08;
    }
    else {
LAB_107aa26a8:
      _objc_release(puVar4);
    }
    func_0x000108535b00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    func_0x00010beaf6c0(param_2);
    puVar12 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar5);
    _objc_release(puVar12);
    func_0x00010bec1d60(param_2);
    puVar12 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar12);
    if ((int)uVar15 != 0) {
      *(undefined8 *)(param_2 + 0x298) = 5;
      puVar12 = param_2;
      func_0x00010be749e0();
      *(undefined **)(param_2 + 0x130) = puVar12;
      func_0x00010bedc6e0(param_2);
      goto LAB_107aa29ec;
    }
    puVar12 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar12);
    puVar12 = param_2;
    if ((int)uVar15 == 0) {
      puVar5 = PTR_PTR_1126b2330;
      func_0x00010c0e9c60(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      if ((int)uVar15 == 0) {
        puVar5 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        if ((int)uVar15 == 0) {
          puVar5 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          if ((int)uVar15 == 0) {
            puVar5 = PTR_PTR_1126b2330;
            func_0x00010bf3df20(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = param_4;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            if ((int)uVar15 == 0) {
              puVar5 = PTR_PTR_1126b2330;
              func_0x00010c29ef00(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              uVar15 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar5);
              if ((int)uVar15 == 0) {
                puVar5 = PTR_PTR_1126b2338;
                func_0x00010c23c600(PTR_PTR_1126b2338);
                _objc_retainAutoreleasedReturnValue();
                uVar15 = param_4;
                func_0x00010c0720c0();
                if ((int)uVar15 != 0) {
                  uVar15 = *(long *)(param_2 + 0x140) - 0x49;
                  if (((uVar15 < 0x1a) && ((1L << (uVar15 & 0x3f) & 0x2020001U) != 0)) ||
                     ((uVar14 = *(long *)(param_2 + 0x140) - 0x57, uVar15 = uVar14 >> 1,
                      (uVar15 | uVar14 << 0x3f) < 8 && ((1L << (uVar15 & 0x3f) & 0xb1U) != 0)))) {
                    _objc_release(puVar5);
                    param_2[0x101] = 1;
                    puVar6 = param_2;
                    func_0x00010bf5eda0(param_2);
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = param_2 + 0x2f8;
                    _objc_loadWeakRetained(puVar5);
                    puVar7 = puVar5;
                    func_0x00010c0688c0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar7;
                    func_0x00010c089060();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c256b00(puVar6);
                    _objc_release(puVar10);
                    _objc_release(puVar7);
                    _objc_release(puVar5);
                    _objc_release(puVar6);
                    func_0x00010bf5eda0(param_2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c256aa0();
                    goto LAB_107aa29e8;
                  }
                }
                _objc_release(puVar5);
                puVar5 = PTR_PTR_1126b2330;
                func_0x00010c29eee0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar15 = param_4;
                func_0x00010c0720c0();
                _objc_release(puVar5);
                if ((int)uVar15 == 0) {
                  puVar5 = PTR_PTR_1126c9460;
                  func_0x00010c269c60(PTR_PTR_1126c9460);
                  _objc_retainAutoreleasedReturnValue();
                  uVar15 = param_4;
                  func_0x00010c0720c0();
                  if ((int)uVar15 == 0) {
                    puVar6 = PTR_PTR_1126c9460;
                    func_0x00010bf11320(PTR_PTR_1126c9460);
                    _objc_retainAutoreleasedReturnValue();
                    uVar15 = param_4;
                    func_0x00010c0720c0();
                    _objc_release(puVar6);
                    _objc_release(puVar5);
                    if ((int)uVar15 == 0) {
                      puVar5 = PTR_PTR_1126b6128;
                      func_0x00010c08c2c0(PTR_PTR_1126b6128);
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = param_4;
                      func_0x00010c0720c0();
                      _objc_release(puVar5);
                      if ((int)uVar15 != 0) {
                        func_0x00010bf5eda0(param_2);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf7c3e0();
                        goto LAB_107aa2f8c;
                      }
                      puVar5 = PTR_PTR_1126c9460;
                      func_0x00010c0f2600(PTR_PTR_1126c9460);
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = param_4;
                      func_0x00010c0720c0();
                      _objc_release(puVar5);
                      if ((int)uVar15 == 0) {
                        puVar5 = PTR_PTR_1126c9460;
                        func_0x00010c0f25a0(PTR_PTR_1126c9460);
                        _objc_retainAutoreleasedReturnValue();
                        uVar15 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar5);
                        if ((int)uVar15 == 0) {
                          puVar5 = PTR_PTR_1126b2330;
                          func_0x00010bf17ae0(PTR_PTR_1126b2330);
                          _objc_retainAutoreleasedReturnValue();
                          uVar15 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar5);
                          if ((int)uVar15 != 0) goto LAB_107aa2b74;
                          puVar5 = PTR_PTR_1126c9c10;
                          func_0x00010c0e92a0(PTR_PTR_1126c9c10);
                          _objc_retainAutoreleasedReturnValue();
                          uVar15 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar5);
                          if ((int)uVar15 != 0) {
                            puVar12 = param_2 + 0x2f8;
                            _objc_loadWeakRetained(puVar12);
                            puVar5 = puVar12;
                            func_0x00010c29e000();
                            _objc_retainAutoreleasedReturnValue();
                            puVar6 = param_2;
                            _objc_opt_class(param_2);
                            _NSStringFromClass();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c0f6200(puVar5);
                            _objc_release(puVar6);
                            _objc_release(puVar5);
                            _objc_release(puVar12);
                            puVar12 = PTR_PTR_1126c9ae8;
                            puVar5 = param_5;
                            func_0x00010c118b40(param_5);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010bf4bb40();
                            _objc_release(puVar5);
                            if ((int)puVar12 == 0) goto LAB_107aa29ec;
LAB_107aa3168:
                            func_0x00010be5d280(param_2);
                            goto LAB_107aa29ec;
                          }
                          puVar5 = PTR_PTR_1126c9c10;
                          func_0x00010bf3dbe0(PTR_PTR_1126c9c10);
                          _objc_retainAutoreleasedReturnValue();
                          uVar15 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar5);
                          if ((int)uVar15 == 0) {
                            puVar5 = PTR_PTR_1126c9c10;
                            func_0x00010bf1d800(PTR_PTR_1126c9c10);
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar5);
                            if ((int)uVar15 != 0) {
                              param_2[0xf4] = 1;
                              goto LAB_107aa32dc;
                            }
                            puVar5 = PTR_PTR_1126c9c10;
                            func_0x00010bf3de20(PTR_PTR_1126c9c10);
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar5);
                            if ((int)uVar15 != 0) {
                              uVar13 = *(undefined8 *)(param_2 + 0x180);
                              func_0x00010c269d40(uVar13);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c1a6c40();
                              _objc_release(uVar13);
                              uVar13 = *(undefined8 *)(param_2 + 0x180);
                              func_0x00010c269d40(uVar13);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c1fa8a0();
                              _objc_release(uVar13);
                              puVar12 = param_2 + 0x2f8;
                              _objc_loadWeakRetained(puVar12);
                              puVar5 = puVar12;
                              func_0x00010c08f5e0();
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c18ebe0();
                              _objc_release(puVar5);
                              _objc_release(puVar12);
                              param_2[0xf4] = 0;
                              goto LAB_107aa32dc;
                            }
                            puVar5 = PTR_PTR_1126c9460;
                            func_0x00010c0f25e0(PTR_PTR_1126c9460);
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = param_4;
                            func_0x00010c0720c0();
                            if ((uVar15 & 1) != 0) {
LAB_107aa339c:
                              _objc_release(puVar5);
LAB_107aa33a4:
                              puVar12 = param_2 + 0x2f8;
                              _objc_loadWeakRetained();
                              puVar5 = puVar12;
                              func_0x00010c0688c0();
                              _objc_retainAutoreleasedReturnValue();
                              puVar6 = puVar5;
                              func_0x00010c089060();
                              _objc_retainAutoreleasedReturnValue();
                              puVar7 = puVar6;
                              func_0x00010c27dd80();
                              if (puVar7 == (undefined *)0x7) {
                                _objc_release(puVar6);
                                _objc_release(puVar5);
                                _objc_release(puVar12);
LAB_107aa3468:
                                *(undefined8 *)(param_2 + 0x130) = 3;
                              }
                              else {
                                puVar7 = param_2 + 0x2f8;
                                _objc_loadWeakRetained();
                                puVar10 = puVar7;
                                func_0x00010c0688c0();
                                _objc_retainAutoreleasedReturnValue();
                                puVar8 = puVar10;
                                func_0x00010c089060();
                                _objc_retainAutoreleasedReturnValue();
                                puVar9 = puVar8;
                                func_0x00010c27dd80();
                                _objc_release(puVar8);
                                _objc_release(puVar10);
                                _objc_release(puVar7);
                                _objc_release(puVar6);
                                _objc_release(puVar5);
                                _objc_release(puVar12);
                                if (puVar9 == (undefined *)0x8) goto LAB_107aa3468;
                              }
                              puVar12 = param_2 + 0x2f8;
                              _objc_loadWeakRetained();
                              puVar5 = puVar12;
                              func_0x00010c0688c0();
                              _objc_retainAutoreleasedReturnValue();
                              puVar6 = puVar5;
                              func_0x00010c089060();
                              _objc_retainAutoreleasedReturnValue();
                              puVar7 = puVar6;
                              func_0x00010c27dd80();
                              _objc_release(puVar6);
                              _objc_release(puVar5);
                              _objc_release(puVar12);
                              if (puVar7 != (undefined *)0x7) goto LAB_107aa29ec;
                              goto LAB_107aa3168;
                            }
                            puVar6 = PTR_PTR_1126c9460;
                            func_0x00010c0f2620(PTR_PTR_1126c9460);
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = param_4;
                            func_0x00010c0720c0();
                            if ((uVar15 & 1) != 0) {
LAB_107aa3394:
                              _objc_release(puVar6);
                              goto LAB_107aa339c;
                            }
                            puVar7 = PTR_PTR_1126c9460;
                            func_0x00010c0f2580();
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = param_4;
                            func_0x00010c0720c0();
                            if ((int)uVar15 != 0) {
                              _objc_release(puVar7);
                              goto LAB_107aa3394;
                            }
                            puVar10 = PTR_PTR_1126c9460;
                            func_0x00010c0f2560(PTR_PTR_1126c9460);
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar10);
                            _objc_release(puVar7);
                            _objc_release(puVar6);
                            _objc_release(puVar5);
                            if ((uVar15 & 1) != 0) goto LAB_107aa33a4;
                            puVar5 = PTR_PTR_1126b2ea8;
                            func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = param_4;
                            func_0x00010c0720c0();
                            if ((int)uVar15 == 0) {
                              puVar6 = PTR_PTR_1126b2ea8;
                              func_0x00010c235940(PTR_PTR_1126b2ea8);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              _objc_release(puVar5);
                              if ((int)uVar15 != 0) goto LAB_107aa358c;
                              puVar5 = PTR_PTR_1126ca2c0;
                              func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar5);
                              if ((int)uVar15 != 0) {
                                param_2[0x100] = 0;
                                func_0x00010befa120(*(undefined8 *)(param_2 + 0x90));
                                func_0x00010be389c0(param_2);
                                puVar5 = param_2;
                                func_0x00010bf5eda0(param_2);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010bf78080();
                                _objc_release(puVar5);
                                puVar5 = PTR_PTR_1126ca2c0;
                                func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
                                _objc_retainAutoreleasedReturnValue();
                                uVar15 = param_4;
                                func_0x00010c0720c0();
                                _objc_release(puVar5);
                                if ((int)uVar15 != 0) {
                                  func_0x00010bf5eda0(param_2);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010bf75020();
                                  goto LAB_107aa29e8;
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar5 = PTR_PTR_1126b2338;
                              func_0x00010c29b4c0(PTR_PTR_1126b2338);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar5);
                              if ((int)uVar15 != 0) {
                                func_0x00010bf5eda0(param_2);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c299d60();
                                goto LAB_107aa2f8c;
                              }
                              puVar5 = PTR_PTR_1126c9a10;
                              func_0x00010c29dbc0(PTR_PTR_1126c9a10);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar5);
                              if ((int)uVar15 != 0) {
                                puVar12 = PTR_PTR_1126c9898;
                                func_0x00010c250a00(PTR_PTR_1126c9898);
                                _objc_retainAutoreleasedReturnValue();
                                uVar15 = param_6;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release();
                                _objc_release(puVar12);
                                if (uVar15 != 0) {
                                  puVar12 = PTR_PTR_1126c9898;
                                  func_0x00010c250a00(PTR_PTR_1126c9898);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar15 = param_6;
                                  func_0x00010c0e00e0(param_6);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010bf885a0();
                                  *(undefined8 *)(param_2 + 0x120) = param_1;
                                  _objc_release(uVar15);
                                  _objc_release(puVar12);
                                }
                                puVar12 = PTR_PTR_1126c9898;
                                func_0x00010c2299a0(PTR_PTR_1126c9898);
                                _objc_retainAutoreleasedReturnValue();
                                uVar15 = param_6;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release();
                                _objc_release(puVar12);
                                if (uVar15 != 0) {
                                  puVar12 = PTR_PTR_1126c9898;
                                  func_0x00010c2299a0(PTR_PTR_1126c9898);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar15 = param_6;
                                  func_0x00010c0e00e0(param_6);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010bf885a0();
                                  *(undefined8 *)(param_2 + 0x128) = param_1;
                                  _objc_release(uVar15);
                                  goto LAB_107aa29e8;
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar5 = PTR_PTR_1126b2ea8;
                              func_0x00010c268600(PTR_PTR_1126b2ea8);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              if ((int)uVar15 != 0) {
                                _objc_release(puVar5);
LAB_107aa38a0:
                                func_0x00010bee6ba0(param_2);
                                goto LAB_107aa29ec;
                              }
                              puVar6 = PTR_PTR_1126b2ea8;
                              func_0x00010c2685e0(PTR_PTR_1126b2ea8);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar6);
                              _objc_release(puVar5);
                              if ((int)uVar15 != 0) goto LAB_107aa38a0;
                              puVar5 = PTR_PTR_1126b2638;
                              func_0x00010bf7b7a0(PTR_PTR_1126b2638);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar5);
                              if ((int)uVar15 != 0) {
                                func_0x00010bf5eda0(param_2);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c289d80();
                                goto LAB_107aa2f8c;
                              }
                              puVar5 = PTR_PTR_1126b2330;
                              func_0x00010bf96a00(PTR_PTR_1126b2330);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar5);
                              if ((int)uVar15 != 0) {
                                if (param_2[0x1d0] == '\x01') {
                                  func_0x00010c29e8e0(param_2);
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar5 = PTR_PTR_1126b2330;
                              func_0x00010bf96940(PTR_PTR_1126b2330);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar5);
                              if ((int)uVar15 != 0) {
                                if (param_2[0x1d0] == '\x01') {
                                  func_0x00010be68520(param_2);
                                  func_0x00010be6c6c0(param_2);
                                  func_0x00010c29c960(param_2);
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar5 = PTR_PTR_1126c9460;
                              func_0x00010c29ae40(PTR_PTR_1126c9460);
                              _objc_retainAutoreleasedReturnValue();
                              uVar15 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar5);
                              if ((int)uVar15 == 0) {
                                puVar5 = PTR_PTR_1126b2e40;
                                func_0x00010c24a1a0(PTR_PTR_1126b2e40);
                                _objc_retainAutoreleasedReturnValue();
                                uVar15 = param_4;
                                func_0x00010c0720c0();
                                _objc_release(puVar5);
                                if ((int)uVar15 == 0) {
                                  puVar5 = PTR_PTR_1126b2e40;
                                  func_0x00010c24a180(PTR_PTR_1126b2e40);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar15 = param_4;
                                  func_0x00010c0720c0();
                                  _objc_release(puVar5);
                                  if ((int)uVar15 != 0) goto LAB_107aa2dcc;
                                }
                                else {
                                  func_0x00010be68520(param_2);
                                  func_0x00010be6c6c0(param_2);
                                }
                                goto LAB_107aa29ec;
                              }
                              puVar12 = PTR_PTR_1126c9cf8;
                              func_0x00010bf9a340(PTR_PTR_1126c9cf8);
                              _objc_retainAutoreleasedReturnValue();
                              uVar14 = param_6;
                              func_0x00010c0e00e0();
                              _objc_retainAutoreleasedReturnValue();
                              _objc_release(puVar12);
                              puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                              _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                              uVar11 = uVar14;
                              _objc_opt_isKindOfClass(uVar14,puVar12);
                              uVar15 = uVar14;
                              if ((uVar11 & 1) == 0) {
                                uVar15 = 0;
                              }
                              _objc_retain(uVar15);
                              _objc_release(uVar14);
                              uVar14 = uVar15;
                              func_0x00010c0720c0();
                              _objc_release(uVar15);
                              if ((int)uVar14 == 0) goto LAB_107aa29ec;
                              puVar12 = *(undefined **)(param_2 + 0x198);
                              func_0x00010c269d40();
                              _objc_retainAutoreleasedReturnValue();
                              puVar5 = puVar12;
                              func_0x00010bf90b60();
                              if ((int)puVar5 != 0) {
                                puVar5 = PTR_PTR_1126b2348;
                                func_0x00010c156fa0(PTR_PTR_1126b2348);
                                _objc_retainAutoreleasedReturnValue();
                                uVar15 = param_6;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                if (uVar15 == 0) {
                                  _objc_release(puVar5);
                                }
                                else {
                                  puVar6 = PTR_PTR_1126b2348;
                                  func_0x00010c1570c0(PTR_PTR_1126b2348);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar14 = param_6;
                                  func_0x00010c0e00e0();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar11 = uVar14;
                                  func_0x00010bf1f3c0();
                                  _objc_release(uVar14);
                                  _objc_release(puVar6);
                                  _objc_release(uVar15);
                                  _objc_release(puVar5);
                                  _objc_release(puVar12);
                                  if ((uVar11 & 1) != 0) goto LAB_107aa29ec;
                                  puVar12 = param_2;
                                  func_0x00010bf5eda0(param_2);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010bf782a0();
                                }
                              }
                            }
                            else {
                              _objc_release(puVar5);
LAB_107aa358c:
                              puVar5 = param_5;
                              func_0x00010c118b40(param_5);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010be88620(param_2);
                              _objc_release(puVar5);
                              func_0x00010bf5eda0(param_2);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010bf77d40();
                            }
                          }
                          else {
                            puVar12 = param_2 + 0x2f8;
                            _objc_loadWeakRetained(puVar12);
                            puVar5 = puVar12;
                            func_0x00010c29e000();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c13d1c0();
                            _objc_release(puVar5);
                            _objc_release(puVar12);
                            uVar13 = *(undefined8 *)(param_2 + 0x180);
                            func_0x00010c269d40(uVar13);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1a6a40();
                            _objc_release(uVar13);
LAB_107aa32dc:
                            puVar12 = param_2 + 0x2e8;
                            _objc_loadWeakRetained(puVar12);
                            puVar5 = puVar4;
                            func_0x00010bf3cf60(puVar4);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c288420(puVar12);
                            _objc_release(puVar5);
                          }
LAB_107aa2f8c:
                          _objc_release(puVar12);
                        }
                        else {
                          puVar12 = param_2;
                          func_0x00010bf5eda0(param_2);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf73480();
                          _objc_release(puVar12);
                          param_2[0x280] = 0;
                        }
                      }
                      else {
                        puVar12 = param_2;
                        func_0x00010bf5eda0(param_2);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf73480();
                        _objc_release(puVar12);
                        param_2[0x280] = 1;
                      }
                      goto LAB_107aa29ec;
                    }
                  }
                  else {
                    _objc_release(puVar5);
                  }
                  func_0x00010bf5eda0(param_2);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = param_2 + 0x2f8;
                  _objc_loadWeakRetained();
                  puVar6 = puVar5;
                  func_0x00010c0688c0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar6;
                  func_0x00010c089060();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2a57a0(puVar12);
                  _objc_release(puVar7);
                  _objc_release(puVar6);
                  _objc_release(puVar5);
                  goto LAB_107aa29e8;
                }
                iVar1 = (int)*(undefined8 *)(param_2 + 0x188);
                func_0x00010c0720c0();
                if ((iVar1 != 0) && (*(long *)(param_2 + 0x140) != 0xb)) {
                  uVar13 = *(undefined8 *)(param_2 + 0x2e0);
                  puVar5 = PTR_PTR_1126b2ce8;
                  func_0x00010c0e9720(PTR_PTR_1126b2ce8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0eb7c0(uVar13);
                  _objc_release(puVar5);
                }
                if (param_2[0x101] == '\x01') {
LAB_107aa2dcc:
                  param_2[0x101] = 0;
                  puVar5 = param_2;
                  func_0x00010bf5eda0(param_2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c251960();
                  _objc_release(puVar5);
                  func_0x00010bf5eda0(param_2);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR_PTR_1126b2340;
                  puVar6 = param_5;
                  func_0x00010c118b40(param_5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0771a0(puVar5);
                  func_0x00010c250a60(puVar12);
                  _objc_release(puVar6);
                  goto LAB_107aa2d18;
                }
              }
              else if (((param_2[0x1d0] & 1) == 0) || ((param_2[0xf3] & 1) == 0)) {
                func_0x00010be6c6c0(param_2);
              }
            }
            else {
LAB_107aa2b74:
              func_0x00010c2569c0(param_2);
            }
          }
          else if (((param_2[0x1d0] & 1) == 0) || ((param_2[0xf3] & 1) == 0)) {
            func_0x00010be68520(param_2);
          }
        }
        else {
          func_0x00010be00820(param_2);
        }
      }
      else {
        param_2[0xf2] = 0;
        func_0x00010c27c0a0(param_2);
        puVar12 = puVar4;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar12;
        func_0x00010c27dd80();
        if ((puVar5 + 1 < (undefined *)0x1c) &&
           ((1L << ((ulong)(puVar5 + 1) & 0x3f) & 0xd8de5fdU) != 0)) goto LAB_107aa29e8;
LAB_107aa2d18:
        _objc_release(puVar12);
        func_0x00010be00820(param_2);
      }
    }
    else {
      puVar5 = PTR_PTR_1126b2348;
      func_0x00010c0c5ec0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_2 + 0x2d8);
      *(ulong *)(param_2 + 0x2d8) = uVar15;
      _objc_release(uVar13);
      _objc_release(puVar5);
      func_0x00010c1c4ee0(*(undefined8 *)(param_2 + 0xd8));
      puVar5 = param_2 + 0x2e8;
      _objc_loadWeakRetained(puVar5);
      puVar6 = puVar4;
      func_0x00010bf3cf60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c288420(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126b2340;
      puVar6 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      param_2[0x281] = (char)puVar5;
      _objc_release(puVar6);
      if ((param_2[0x100] & 1) == 0) {
        puVar5 = param_2;
        func_0x00010bf5eda0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf78080();
        _objc_release(puVar5);
      }
      puVar5 = PTR_PTR_1126b2340;
      puVar6 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c076c60();
      param_2[0xf2] = (char)puVar5;
      _objc_release(puVar6);
      if (param_2[0xf2] == '\x01') {
        *(long *)(param_2 + 0x2b8) = *(long *)(param_2 + 0x2b8) + 1;
        puVar5 = param_2;
        func_0x00010bf5eda0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c250aa0();
        _objc_release(puVar5);
      }
      func_0x00010bf5eda0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2030a0();
LAB_107aa29e8:
      _objc_release(puVar12);
    }
LAB_107aa29ec:
    func_0x00010beab800(param_2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
LAB_107aa2a08:
  _objc_release(puVar2);
LAB_107aa2a10:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107aa3c18; end: 107aa3c33; -[SCStoriesViewingSession _updateViewLocationIfNeeded:withPage:] */

void FUN_107aa3c18(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != -1) && (param_3 != *(long *)(param_1 + 0x140))) {
    *(long *)(param_1 + 0x140) = param_3;
    *(long *)(param_1 + 0x148) = param_3;
  }
  return;
}



/* Entry: 107aa3c34; end: 107aa3c37; -[SCStoriesViewingSession triggerPaginationIfNecessary:] */

void FUN_107aa3c34(void)

{
  return;
}



/* Entry: 107aa3c38; end: 107aa3cdf; -[SCStoriesViewingSession viewWillEnterForeground] */

void FUN_107aa3c38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x110) != 0) {
    func_0x00010c069d00();
  }
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__editionDoesDisplaySinceForegrou_112537ae8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  *(undefined **)(param_1 + 0x110) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38);
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + 0xf3) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aa3ce0; end: 107aa3d47; -[SCStoriesViewingSession viewDidEnterBackground] */

void FUN_107aa3ce0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xf3) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x2a8);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  _objc_release(uVar2);
  func_0x00010be70ec0(param_1);
  func_0x00010be593e0(param_1);
  if (*(char *)(param_1 + 0x118) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010becb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__teardownForegroundDisplayLink_1125905a8);
    return;
  }
  return;
}



/* Entry: 107aa3d48; end: 107aa3eff; -[SCStoriesViewingSession _startTrackingFriendStoryViewTimeIfNecessaryWithEvent:page:] */

void FUN_107aa3d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  if (*(char *)(param_1 + 0x208) == '\x01') {
    func_0x00010c29eee0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(char *)(param_1 + 0x209) != '\x01') goto LAB_107aa3de0;
    func_0x00010c29ef40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  puVar1 = puVar2;
LAB_107aa3de0:
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar3 != 0) {
    uVar3 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010bf5eda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2340;
    uVar3 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0(puVar2,param_2,uVar3);
    func_0x00010c250a60(param_1,param_2,uVar4,puVar2,uVar6);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa3f00; end: 107aa40b7; -[SCStoriesViewingSession _onCloseViewWithCurrentStorySnap:page:params:] */

void FUN_107aa3f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x2f8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 5) {
    lVar1 = param_1;
    func_0x00010bf5eda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23e440();
    _objc_release(lVar1);
  }
  lVar2 = param_1;
  func_0x00010bf5eda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x2f8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 1;
  func_0x00010c256b00(lVar2,param_2,param_3,param_4,param_5,lVar4,*(undefined1 *)(param_1 + 0x100),1
                      ,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar1 = param_1;
  func_0x00010bf9ba60();
  if (lVar1 - 0xcU < 2) {
    uVar5 = 2;
  }
  else if (lVar1 != 7) {
    if (lVar1 == 2) {
      uVar5 = 3;
    }
    else {
      uVar5 = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x298) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa40b8; end: 107aa4337; -[SCStoriesViewingSession _onViewerDidDisappearWithCurrentStorySnap:page:params:] */

void FUN_107aa40b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar10 = *(long *)(param_1 + 0x140);
  if ((0x19 < lVar10 - 0x49U || (1L << (lVar10 - 0x49U & 0x3f) & 0x2020001U) == 0) &&
     (uVar3 = lVar10 - 0x57U >> 1,
     (7 < (uVar3 | lVar10 - 0x57U << 0x3f) || (1L << (uVar3 & 0x3f) & 0xb1U) == 0) && lVar10 != 0x15
     )) goto LAB_107aa4304;
  puVar2 = PTR_PTR_1126c9a20;
  func_0x00010bf43ba0(PTR_PTR_1126c9a20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  if ((uVar4 & 1) != 0) goto LAB_107aa4304;
  uVar5 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000108f4e0a0();
  _objc_release(uVar5);
  if (((int)uVar6 == 0) || (*(char *)(param_1 + 0xf3) == '\x01')) {
    lVar10 = param_1 + 0x2f8;
    _objc_loadWeakRetained();
    lVar7 = lVar10;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c27dd80();
    if (lVar9 != 2) {
      bVar1 = *(byte *)(param_1 + 0x101);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar10);
      goto joined_r0x000107aa423c;
    }
    _objc_release(lVar8);
    _objc_release(lVar7);
    param_1 = lVar10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x101);
joined_r0x000107aa423c:
    if ((bVar1 & 1) != 0) goto LAB_107aa4304;
    *(undefined1 *)(param_1 + 0x101) = 1;
    lVar7 = param_1;
    func_0x00010bf5eda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + 0x2f8;
    _objc_loadWeakRetained(lVar10);
    lVar8 = lVar10;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256b00(lVar7);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(lVar7);
    func_0x00010bf5eda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256aa0();
  }
  _objc_release(param_1);
LAB_107aa4304:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa4338; end: 107aa438b; -[SCStoriesViewingSession _editionDoesDisplaySinceForegroundedApp] */

void FUN_107aa4338(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xf1) = 0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x110));
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  _objc_release(uVar1);
  func_0x00010bf5eda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aa438c; end: 107aa43b7; -[SCStoriesViewingSession _teardownForegroundDisplayLink] */

void FUN_107aa438c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x110));
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107aa43b8; end: 107aa43bf; -[SCStoriesViewingSession hasSessionEnded] */

undefined1 FUN_107aa43b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf1);
}



/* Entry: 107aa43c0; end: 107aa44d7; -[SCStoriesViewingSession _didStartPlayingStorySnap:storiesPlaybackSequence:] */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_107aa43c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  else {
    _objc_retain(param_4);
    lVar2 = param_1 + 0x2e8;
    _objc_loadWeakRetained();
    lVar3 = param_4;
    func_0x000108535b00(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar4 = lVar2;
    func_0x00010c076060();
    *(char *)(param_1 + 0x158) = (char)lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar3 = param_1;
  func_0x00010bf5eda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x2f8;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fe80(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar6);
  iVar1 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar1 != 0) {
    puVar7 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c14fb00();
    _objc_release(puVar7);
    if (((ulong)puVar8 & 1) != 0) {
      ppuVar9 = &PTR___NSConcreteGlobalBlock_110d5b230;
      goto SUB_1000d76cc;
    }
  }
  func_0x00010c22b6a0(PTR_PTR_1126e06c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar9 = &PTR___NSConcreteGlobalBlock_110d5b250;
SUB_1000d76cc:
  puVar7 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(ppuVar9);
  func_0x000107c4a02c();
  if ((int)puVar7 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar9);
  return;
}



/* Entry: 107aa44d8; end: 107aa4657; -[SCStoriesViewingSession _setupChromeInteractionSession] */

void FUN_107aa44d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  if ((((*(long *)(param_1 + 0xa8) == 0) &&
       (pcVar8 = *(code **)(param_1 + 0xe0), pcVar8 != (code *)0x0)) &&
      (*(long *)(param_1 + 0x38) != 0)) && (*(long *)(param_1 + 0x40) != 0)) {
    lVar1 = param_1 + 0x2f8;
    _objc_loadWeakRetained();
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c0d6760(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf81b80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    (*pcVar8)(lVar1,uVar7,uVar6,lVar3,uVar4,0,*(undefined8 *)(param_1 + 0x1b0),
              *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 400),
              *(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x200),
              *(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x240),
              *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa8) = lVar5;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x2e0);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c127820(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 107aa4658; end: 107aa478f; -[SCStoriesViewingSession _handleJoinGroupStoryEventWithPage:params:] */

void FUN_107aa4658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_1 + 0x2f8;
  _objc_loadWeakRetained();
  _objc_release();
  if (((lVar5 != 0) && (*(long *)(param_1 + 200) != 0)) && (*(long *)(param_1 + 0xd0) != 0)) {
    lVar5 = *(long *)(param_1 + 0xb8);
    if (lVar5 == 0) {
      puVar2 = PTR_PTR_1126d6308;
      _objc_alloc();
      lVar5 = param_1 + 0x2f8;
      _objc_loadWeakRetained(lVar5);
      uVar4 = *(undefined8 *)(param_1 + 200);
      uVar1 = *(undefined8 *)(param_1 + 0xd0);
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c031c40(puVar2,param_2,lVar5,uVar4,uVar1,uVar6,uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined **)(param_1 + 0xb8) = puVar2;
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar5);
      lVar5 = *(long *)(param_1 + 0xb8);
    }
    puVar2 = PTR_PTR_1126b2d30;
    func_0x00010c085a60(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(lVar5,param_2,puVar2,param_3,param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa4790; end: 107aa48c7; -[SCStoriesViewingSession _handleHideGroupStoryEventWithPage:params:] */

void FUN_107aa4790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_1 + 0x2f8;
  _objc_loadWeakRetained();
  _objc_release();
  if (((lVar5 != 0) && (*(long *)(param_1 + 200) != 0)) && (*(long *)(param_1 + 0xd0) != 0)) {
    lVar5 = *(long *)(param_1 + 0xb8);
    if (lVar5 == 0) {
      puVar2 = PTR_PTR_1126d6308;
      _objc_alloc();
      lVar5 = param_1 + 0x2f8;
      _objc_loadWeakRetained(lVar5);
      uVar4 = *(undefined8 *)(param_1 + 200);
      uVar1 = *(undefined8 *)(param_1 + 0xd0);
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c031c40(puVar2,param_2,lVar5,uVar4,uVar1,uVar6,uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined **)(param_1 + 0xb8) = puVar2;
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar5);
      lVar5 = *(long *)(param_1 + 0xb8);
    }
    puVar2 = PTR_PTR_1126b2d30;
    func_0x00010bfe1fa0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(lVar5,param_2,puVar2,param_3,param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa48c8; end: 107aa4a13; -[SCStoriesViewingSession _setupReportSession] */

void FUN_107aa48c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 400);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110eabc78,0,0);
  puVar2 = PTR_PTR_1126d6310;
  _objc_alloc();
  lVar3 = param_1 + 0x2f8;
  _objc_loadWeakRetained(lVar3);
  uVar6 = 0;
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x140);
  uVar11 = *(undefined8 *)(param_1 + 0x1a0);
  if ((int)uVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x1c8);
  }
  lVar4 = param_1 + 0x308;
  _objc_loadWeakRetained();
  lVar5 = param_1 + 0x210;
  _objc_loadWeakRetained();
  func_0x00010c031c80(puVar2,param_2,lVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar6,lVar4,lVar5,
                      *(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x220));
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar2;
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x2e0);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = uVar6;
  func_0x00010c127820(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar7,param_2,uVar6,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107aa4a14; end: 107aa4b9f; -[SCStoriesViewingSession _setupSharingSession] */

void FUN_107aa4a14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((*(long *)(param_1 + 0xd8) == 0) &&
     (pcVar9 = *(code **)(param_1 + 0xe8), pcVar9 != (code *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x140);
    lVar1 = param_1 + 0x2f8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + 0x2e8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + 0x308;
    _objc_loadWeakRetained(lVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    uVar8 = *(undefined8 *)(param_1 + 0x1b0);
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    uVar13 = *(undefined8 *)(param_1 + 0x1e0);
    uVar12 = *(undefined8 *)(param_1 + 0x1d8);
    uVar10 = *(undefined8 *)(param_1 + 0x1f0);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf81b80();
    _objc_retainAutoreleasedReturnValue();
    (*pcVar9)(uVar5,uVar6,lVar1,lVar2,lVar3,uVar7,uVar8,uVar11,uVar12,uVar13,uVar10,uVar4,
              *(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x38),
              *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
              *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x218));
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar8 = *(undefined8 *)(param_1 + 0x2e0);
    uVar7 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c127820(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  return;
}



/* Entry: 107aa4ba0; end: 107aa4c63; -[SCStoriesViewingSession _updateOperaNavigationTypeWithParams:] */

void FUN_107aa4ba0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c9a20;
  _objc_retain(param_3);
  func_0x00010c0d6c60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  *(ulong *)(param_1 + 0x2d0) = (ulong)(uVar3 != 0);
  return;
}



/* Entry: 107aa4c64; end: 107aa4cb7; -[SCStoriesViewingSession currentFriendStoryViewingSession] */

void FUN_107aa4c64(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x2a8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = 0x98;
  if (lVar2 != 0) {
    lVar1 = 0x2a8;
  }
  func_0x00010c089820(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aa4cb8; end: 107aa4d47; -[SCStoriesViewingSession currentFriendStoriesAbsoluteIndex] */

long FUN_107aa4cb8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5eda0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2589c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108535b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x2e8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfecd00();
  _objc_release(param_1);
  _objc_release(lVar3);
  return lVar1;
}



/* Entry: 107aa4d48; end: 107aa4d6f; -[SCStoriesViewingSession currentFriendStoriesRelativeIndex] */

long FUN_107aa4d48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf5ed00();
  return lVar1 - *(long *)(param_1 + 0x108);
}



/* Entry: 107aa4d70; end: 107aa553b; -[SCStoriesViewingSession _updateCurrentFriendStoryViewingSessionsWithEvent:page:] */

void FUN_107aa4d70(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

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
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar13 != 0) {
    puVar1 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    puVar1 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
    puVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar2 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    puVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c067fc0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_4;
    puStack_70 = puVar5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bf5eda0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2589c0();
    _objc_retainAutoreleasedReturnValue();
    if ((((puVar4 == (undefined *)0x0) || (puVar4 != puVar1)) &&
        ((puVar4 != (undefined *)0x0 ||
         ((puVar1 != (undefined *)0x0 || (puVar2 != (undefined *)0x0)))))) &&
       (puVar5 = param_1, func_0x00010be41e60(), ((ulong)puVar5 & 1) == 0)) {
      if ((puVar3 != (undefined *)0x0) &&
         (puVar5 = param_1, func_0x00010be41f60(), ((ulong)puVar5 & 1) == 0)) {
        func_0x00010be41f60(param_1);
        func_0x00010c256ac0(puVar3);
        puVar5 = puVar3;
        func_0x00010c2589c0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x2f0);
        *(undefined **)(param_1 + 0x2f0) = puVar5;
        _objc_release(uVar13);
        puVar5 = param_1;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x2b0);
        *(undefined **)(param_1 + 0x2b0) = puVar5;
        _objc_release(uVar13);
        func_0x00010be8c280(param_1);
      }
      if (puVar1 != (undefined *)0x0 || puVar2 != (undefined *)0x0) {
        puVar5 = puVar1;
        func_0x000108535b00();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          uVar13 = *(undefined8 *)(param_1 + 8);
          func_0x00010c2923e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          puStack_f0 = puVar2;
          func_0x00010853acb4(puVar2,uVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
        }
        else {
          _objc_retain(puVar5);
          puStack_f0 = puVar5;
        }
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126b2340;
        puVar6 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079440();
        param_1[0x100] = (char)puVar5;
        _objc_release(puVar6);
        if ((param_1[0x100] & 1) == 0) {
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x90));
          func_0x00010be389c0(param_1);
        }
        puVar5 = param_1;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        if ((*(long *)(param_1 + 0x2d0) == 1) &&
           (puVar6 = puVar5, func_0x00010c27dd80(), puVar6 == (undefined *)0x5)) {
          puStack_f8 = PTR_PTR_1126c98a0;
          func_0x00010c0689a0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puStack_f8 = puVar5;
          if (*(undefined **)(param_1 + 0x2b0) != (undefined *)0x0) {
            puStack_f8 = *(undefined **)(param_1 + 0x2b0);
          }
          _objc_retain();
        }
        func_0x00010c0bdf40(puVar1);
        func_0x00010bea1180(param_1);
        func_0x00010bee37a0(param_1);
        puVar6 = *(undefined **)(param_1 + 0x278);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          puVar7 = puVar6;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126d0040;
          _objc_alloc();
          uVar13 = *(undefined8 *)(param_1 + 0x198);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = param_1 + 0x2f8;
          _objc_loadWeakRetained();
          puVar10 = puVar9;
          func_0x00010c0eb3e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = param_1 + 0x2f8;
          _objc_loadWeakRetained();
          puVar12 = puVar11;
          func_0x00010c0e9f80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c013640(puVar8);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(uVar13);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x278));
          _objc_release(puVar7);
        }
        else {
          _objc_retain(puVar6);
          puVar8 = puVar6;
        }
        puVar9 = puVar8;
        func_0x00010c25b960(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c187c00(*(undefined8 *)(param_1 + 0xd8));
        _objc_release(puVar9);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x2a8));
        func_0x00010c251960(puVar8);
        uVar13 = *(undefined8 *)(param_1 + 0x2b0);
        *(undefined8 *)(param_1 + 0x2b0) = 0;
        _objc_release(uVar13);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puStack_f8);
        _objc_release(puStack_f0);
      }
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107aa553c; end: 107aa55db;  */

void FUN_107aa553c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c29d360();
  if (lVar1 != -1) {
    lVar1 = param_2;
    func_0x00010c29d360();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107aa55dc; end: 107aa55f3;  */

void FUN_107aa55dc(void)

{
  return;
}



/* Entry: 107aa55f4; end: 107aa5697; -[SCStoriesViewingSession _isMidrollAd:] */

undefined4 FUN_107aa55f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((*(byte *)(param_1 + 0x102) & 1) != 0) {
    return 0;
  }
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c06b7e0(param_3);
  lVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110f0d3d8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = 0;
  if (lVar4 == 0xc) {
    uVar5 = (undefined4)lVar1;
  }
  return uVar5;
}



/* Entry: 107aa5698; end: 107aa576b; -[SCStoriesViewingSession _isMergedMapStoryWithPrevStoriesPlaybackSequence:currentStoriesPlaybackSequence:] */

long FUN_107aa5698(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = 0;
  if ((param_3 != 0) && (*(long *)(param_1 + 0x140) == 0x15)) {
    lVar3 = param_3;
    func_0x000108536cbc();
    if (((int)lVar3 == 0) || (uVar1 = param_4, func_0x000108536cbc(), (int)uVar1 == 0)) {
      lVar3 = 0;
    }
    else {
      lVar2 = param_3;
      func_0x000108535b00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_4;
      func_0x000108535b00(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0(lVar2,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107aa576c; end: 107aa57df; -[SCStoriesViewingSession _removeFriendStoryViewingSession:] */

void FUN_107aa576c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c280700();
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + lVar1;
  lVar1 = param_3;
  func_0x00010c277040();
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + lVar1;
  lVar1 = param_3;
  func_0x00010c276940();
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + lVar1;
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x2a8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa57e0; end: 107aa582f; -[SCStoriesViewingSession _userDidTakeScreenshotWithPage:] */

void FUN_107aa57e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5eda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aa5830; end: 107aa5943; -[SCStoriesViewingSession _sendViewLocationUpdateIfNeeded:withPage:] */

long FUN_107aa5830(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if ((param_3 != -1) && (param_3 != *(long *)(param_1 + 0x140))) {
    uVar6 = *(undefined8 *)(param_1 + 0x2e0);
    ppuStack_58 = &PTR____CFConstantStringClassReference_110ebebd8;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar6,param_2,&PTR____CFConstantStringClassReference_110ebeb98,param_4,
                        puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_4 + 0xf2) & 1) != 0) {
    return 0xe;
  }
  if ((*(byte *)(param_4 + 0xf3) & 1) != 0) {
    return 6;
  }
  param_4 = param_4 + 0x2f8;
  _objc_loadWeakRetained(param_4);
  lVar3 = param_4;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  return lVar5;
}



/* Entry: 107aa5944; end: 107aa59d7; -[SCStoriesViewingSession exitReason] */

long FUN_107aa5944(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0xf2) & 1) != 0) {
    return 0xe;
  }
  if ((*(byte *)(param_1 + 0xf3) & 1) != 0) {
    return 6;
  }
  param_1 = param_1 + 0x2f8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 107aa59d8; end: 107aa5a37; -[SCStoriesViewingSession lastInteraction] */

void FUN_107aa59d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x2f8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107aa5a38; end: 107aa5a3f; -[SCStoriesViewingSession _uniqueViewedStoriesCount] */

void FUN_107aa5a38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x90),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107aa5a40; end: 107aa5b53; -[SCStoriesViewingSession _uniqueViewedSnapsCount] */

long FUN_107aa5a40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x2a8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar2 = *(long *)(lStack_118 + lVar7 * 8);
        func_0x00010c280700();
        lVar5 = lVar2 + lVar5;
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return *(long *)(param_1 + 0x78) + lVar5;
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
  lVar5 = *(long *)(lVar4 + 0x2a8);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = *plStack_230;
    do {
      lVar2 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        lVar3 = *(long *)(lStack_238 + lVar2 * 8);
        func_0x00010c277040();
        lVar6 = lVar3 + lVar6;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    plStack_350 = (long *)0x0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    lVar4 = *(long *)(lVar5 + 0x2a8);
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_360,auStack_318,0x10);
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar7 = *plStack_350;
      do {
        lVar2 = 0;
        do {
          if (*plStack_350 != lVar7) {
            _objc_enumerationMutation(lVar4);
          }
          lVar3 = *(long *)(lStack_358 + lVar2 * 8);
          func_0x00010c276940(lVar3);
          lVar6 = lVar3 + lVar6;
          lVar2 = lVar2 + 1;
        } while (lVar1 != lVar2);
        lVar1 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_360,auStack_318,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
      ___stack_chk_fail();
      return 0;
    }
    return *(long *)(lVar5 + 0x88) + lVar6;
  }
  return *(long *)(lVar4 + 0x80) + lVar6;
}



/* Entry: 107aa5b54; end: 107aa5c67; -[SCStoriesViewingSession _totalViewedSnapsCount] */

long FUN_107aa5b54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x2a8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar2 = *(long *)(lStack_118 + lVar7 * 8);
        func_0x00010c277040();
        lVar5 = lVar2 + lVar5;
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return *(long *)(param_1 + 0x80) + lVar5;
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
  lVar5 = *(long *)(lVar4 + 0x2a8);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = *plStack_230;
    do {
      lVar2 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        lVar3 = *(long *)(lStack_238 + lVar2 * 8);
        func_0x00010c276940(lVar3);
        lVar6 = lVar3 + lVar6;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    return 0;
  }
  return *(long *)(lVar4 + 0x88) + lVar6;
}



/* Entry: 107aa5c68; end: 107aa5d7b; -[SCStoriesViewingSession totalOpenedSnapsCount] */

long FUN_107aa5c68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 0x2a8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar2 = *(long *)(lStack_118 + lVar6 * 8);
        func_0x00010c276940(lVar2);
        lVar4 = lVar2 + lVar4;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return 0;
  }
  return *(long *)(param_1 + 0x88) + lVar4;
}



/* Entry: 107aa5d7c; end: 107aa5d83; -[SCStoriesViewingSession totalViewedAdSnapsCount] */

undefined8 FUN_107aa5d7c(void)

{
  return 0;
}



/* Entry: 107aa5d84; end: 107aa5d8b; -[SCStoriesViewingSession _playSourceUponOpenOpera] */

undefined8 FUN_107aa5d84(void)

{
  return 2;
}



/* Entry: 107aa5d8c; end: 107aa5e8f; -[SCStoriesViewingSession _buildStoryStorySessionLogParameters] */

void FUN_107aa5d8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d6318;
  func_0x00010c25b400(PTR_PTR_1126d6318);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba760();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bed1360(param_1);
  func_0x00010c2ba7a0(puVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010becda80(param_1);
  func_0x00010c2b9880(puVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bed1340(param_1);
  func_0x00010c2b98c0(puVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf9ba60(param_1);
  func_0x00010c2ad720(puVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x148);
  func_0x000108534aa8(uVar3);
  func_0x00010c2bc940(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b09e0(puVar1,param_2,*(undefined1 *)(param_1 + 0x158));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107aa5e90; end: 107aa5ecf; +[SCStoriesViewingSession announcerIdentifier] */

void FUN_107aa5e90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e280f8);
  return;
}



/* Entry: 107aa5ed0; end: 107aa6a63; -[SCStoriesViewingSession initWithUserSession:startChatDelegate:storiesPlaybackDataProvider:storiesMediaCoordinator:storyPlayMode:viewLocation:viewingType:storyViewingActionContext:playSource:startingEntryEvent:navigationServices:storiesBlizzardLogger:unlockableBlizzardLogger:loggingInfo:unlockableViewTracker:snapchatterFetcher:snapchatterPublicInfoFetcher:discoverFeedEventsController:discoverFeedInteractionHistoryManager:spotlightShareSender:spotlightPlatformAnalyticsCreator:discoverFeedDataFetcher:chromeInteractionSessionBuildingFunc:storiesSharingSessionBuildingFunc:storiesUsageLogger:readReceiptCoordinator:circumstanceEngine:storiesConfigProvider:firstStoryId:grapheneMetricsEmitter:legacyStoriesTooltipsService:safetyReportScopeExposer:externalLinkSendingService:grapheneRegistry:subscriptionWorkflowStarter:boostCoordinator:bloopsReportScopeExposer:temporaryFileWriter:notificationOSSettingsRetriever:offPlatformShareServices:pageType:triggeringSection:contentRemovalDelegate:shareNotificationService:mapContentFilter:contentSharerUserId:contentSharerMischiefId:contentShareId:imageFetchingService:thumbnailCoordinator:searchSessionId:searchQueryId:searchActionId:searchResultRankingId:source:nativeSessionManager:customStoriesDataFetcher:conversationUpdatesPublisher:] */

undefined8 ***
FUN_107aa5ed0(undefined8 ***param_1,undefined8 param_2,undefined8 **param_3,long param_4,
             undefined8 **param_5,undefined8 **param_6,undefined8 **param_7,undefined8 **param_8,
             undefined8 **param_9,undefined8 **param_10,undefined8 **param_11,undefined8 **param_12,
             undefined8 **param_13,undefined8 **param_14,undefined8 **param_15,undefined8 **param_16
             ,undefined8 **param_17,undefined8 **param_18,undefined8 **param_19,
             undefined8 **param_20,undefined8 **param_21,undefined8 **param_22,undefined8 **param_23
             ,undefined8 **param_24,undefined8 **param_25,undefined8 **param_26,
             undefined8 **param_27,undefined8 **param_28,undefined8 **param_29,undefined8 **param_30
             ,undefined8 **param_31,undefined8 **param_32,undefined8 **param_33,
             undefined8 **param_34,undefined8 **param_35,undefined8 **param_36,undefined8 **param_37
             ,undefined8 **param_38,undefined8 **param_39,undefined8 **param_40,
             undefined8 **param_41,undefined8 **param_42,undefined8 **param_43,undefined8 **param_44
             ,long param_45,undefined8 **param_46,undefined8 **param_47,undefined8 **param_48,
             undefined8 **param_49,undefined8 **param_50,undefined8 **param_51,undefined8 **param_52
             ,undefined8 **param_53,undefined8 **param_54,undefined8 **param_55,
             undefined8 **param_56,undefined8 **param_57,undefined8 **param_58,undefined8 **param_59
             ,undefined8 param_60)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  undefined *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
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
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  if (param_3 == (undefined8 **)0x0) {
    pppuVar6 = (undefined8 ***)0x0;
  }
  else {
    puStack_70 = PTR_PTR_1126f9a08;
    pppuVar6 = &ppuStack_78;
    ppuStack_78 = param_1;
    _objc_msgSendSuper2(pppuVar6,PTR_s_init_1125d9248);
    if (pppuVar6 != (undefined8 ***)0x0) {
      _objc_retain(param_3);
      ppuVar2 = pppuVar6[1];
      pppuVar6[1] = param_3;
      _objc_release(ppuVar2);
      _objc_retain(param_27);
      ppuVar2 = pppuVar6[2];
      pppuVar6[2] = param_27;
      _objc_release(ppuVar2);
      _objc_retain(param_14);
      ppuVar2 = pppuVar6[4];
      pppuVar6[4] = param_14;
      _objc_release(ppuVar2);
      _objc_retain(param_16);
      ppuVar2 = pppuVar6[5];
      pppuVar6[5] = param_16;
      _objc_release(ppuVar2);
      _objc_retain(param_15);
      ppuVar2 = pppuVar6[6];
      pppuVar6[6] = param_15;
      _objc_release(ppuVar2);
      _objc_retain(param_17);
      ppuVar2 = pppuVar6[3];
      pppuVar6[3] = param_17;
      _objc_release(ppuVar2);
      ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = pppuVar6[0x12];
      pppuVar6[0x12] = ppuVar2;
      _objc_release(ppuVar4);
      pppuVar6[0x27] = (undefined8 **)0x0;
      ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = pppuVar6[0x55];
      pppuVar6[0x55] = ppuVar2;
      _objc_release(ppuVar4);
      if (param_4 != 0) {
        _objc_storeWeak(pppuVar6 + 0xc,param_4);
      }
      _objc_retain(param_5);
      ppuVar2 = pppuVar6[0xd];
      pppuVar6[0xd] = param_5;
      _objc_release(ppuVar2);
      _objc_retain(param_6);
      ppuVar2 = pppuVar6[0xe];
      pppuVar6[0xe] = param_6;
      _objc_release(ppuVar2);
      pppuVar6[0xf] = (undefined8 **)0x0;
      pppuVar6[0x10] = (undefined8 **)0x0;
      pppuVar6[0x11] = (undefined8 **)0x0;
      pppuVar6[0x58] = param_11;
      pppuVar6[0x59] = param_12;
      pppuVar6[0x5a] = (undefined8 **)0xffffffffffffffff;
      pppuVar6[0x29] = param_8;
      pppuVar6[0x2a] = param_7;
      pppuVar6[0x28] = param_8;
      pppuVar6[0x57] = (undefined8 **)0x0;
      pppuVar6[0x51] = param_9;
      pppuVar6[0x54] = param_10;
      _objc_retain(param_13);
      ppuVar2 = pppuVar6[0x1f];
      pppuVar6[0x1f] = param_13;
      _objc_release(ppuVar2);
      _objc_retain(param_18);
      ppuVar2 = pppuVar6[0x2c];
      pppuVar6[0x2c] = param_18;
      _objc_release(ppuVar2);
      _objc_retain(param_19);
      ppuVar2 = pppuVar6[0x2d];
      pppuVar6[0x2d] = param_19;
      _objc_release(ppuVar2);
      pppuVar6[0x1c] = param_25;
      pppuVar6[0x1d] = param_26;
      _objc_retain(param_20);
      ppuVar2 = pppuVar6[7];
      pppuVar6[7] = param_20;
      _objc_release(ppuVar2);
      _objc_retain(param_21);
      ppuVar2 = pppuVar6[8];
      pppuVar6[8] = param_21;
      _objc_release(ppuVar2);
      _objc_retain(param_22);
      ppuVar2 = pppuVar6[10];
      pppuVar6[10] = param_22;
      _objc_release(ppuVar2);
      _objc_retain(param_23);
      ppuVar2 = pppuVar6[0xb];
      pppuVar6[0xb] = param_23;
      _objc_release(ppuVar2);
      _objc_retain(param_24);
      ppuVar2 = pppuVar6[9];
      pppuVar6[9] = param_24;
      _objc_release(ppuVar2);
      _objc_retain(param_28);
      ppuVar2 = pppuVar6[0x2e];
      pppuVar6[0x2e] = param_28;
      _objc_release(ppuVar2);
      _objc_retain(param_31);
      ppuVar2 = pppuVar6[0x31];
      pppuVar6[0x31] = param_31;
      _objc_release(ppuVar2);
      _objc_retain(param_29);
      ppuVar2 = pppuVar6[0x32];
      pppuVar6[0x32] = param_29;
      _objc_release(ppuVar2);
      _objc_retain(param_30);
      ppuVar2 = pppuVar6[0x33];
      pppuVar6[0x33] = param_30;
      _objc_release(ppuVar2);
      _objc_retain(param_32);
      ppuVar2 = pppuVar6[0x2f];
      pppuVar6[0x2f] = param_32;
      _objc_release(ppuVar2);
      _objc_retain(param_33);
      ppuVar2 = pppuVar6[0x30];
      pppuVar6[0x30] = param_33;
      _objc_release(ppuVar2);
      _objc_retain(param_34);
      ppuVar2 = pppuVar6[0x34];
      pppuVar6[0x34] = param_34;
      _objc_release(ppuVar2);
      _objc_retain(param_35);
      ppuVar2 = pppuVar6[0x35];
      pppuVar6[0x35] = param_35;
      _objc_release(ppuVar2);
      _objc_retain(param_40);
      ppuVar2 = pppuVar6[0x3b];
      pppuVar6[0x3b] = param_40;
      _objc_release(ppuVar2);
      _objc_retain(param_41);
      ppuVar2 = pppuVar6[0x3c];
      pppuVar6[0x3c] = param_41;
      _objc_release(ppuVar2);
      ppuVar2 = pppuVar6[0x5b];
      pppuVar6[0x5b] = (undefined8 **)0x0;
      _objc_release(ppuVar2);
      _objc_retain(param_36);
      ppuVar2 = pppuVar6[0x36];
      pppuVar6[0x36] = param_36;
      _objc_release(ppuVar2);
      _objc_retain(param_37);
      ppuVar2 = pppuVar6[0x37];
      pppuVar6[0x37] = param_37;
      _objc_release(ppuVar2);
      _objc_retain(param_38);
      ppuVar2 = pppuVar6[0x38];
      pppuVar6[0x38] = param_38;
      _objc_release(ppuVar2);
      _objc_retain(param_39);
      ppuVar2 = pppuVar6[0x39];
      pppuVar6[0x39] = param_39;
      _objc_release(ppuVar2);
      uVar1 = SUB81(pppuVar6[0x32],0);
      func_0x00010bf1f440();
      *(undefined1 *)(pppuVar6 + 0x3a) = uVar1;
      ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = pppuVar6[0x3d];
      pppuVar6[0x3d] = ppuVar2;
      _objc_release(ppuVar4);
      _objc_retain(param_42);
      ppuVar2 = pppuVar6[0x3e];
      pppuVar6[0x3e] = param_42;
      _objc_release(ppuVar2);
      pppuVar6[0x3f] = param_43;
      pppuVar6[0x40] = param_44;
      if (param_45 != 0) {
        _objc_storeWeak(pppuVar6 + 0x42);
      }
      _objc_retain(param_46);
      ppuVar2 = pppuVar6[0x43];
      pppuVar6[0x43] = param_46;
      _objc_release(ppuVar2);
      uVar1 = SUB81(pppuVar6[0x32],0);
      func_0x00010bf1f440();
      *(undefined1 *)((long)pppuVar6 + 0x102) = uVar1;
      _objc_retain(param_47);
      ppuVar2 = pppuVar6[0x44];
      pppuVar6[0x44] = param_47;
      _objc_release(ppuVar2);
      _objc_retain(param_48);
      ppuVar2 = pppuVar6[0x45];
      pppuVar6[0x45] = param_48;
      _objc_release(ppuVar2);
      _objc_retain(param_49);
      ppuVar2 = pppuVar6[0x46];
      pppuVar6[0x46] = param_49;
      _objc_release(ppuVar2);
      _objc_retain(param_50);
      ppuVar2 = pppuVar6[0x47];
      pppuVar6[0x47] = param_50;
      _objc_release(ppuVar2);
      _objc_retain(param_51);
      ppuVar2 = pppuVar6[0x48];
      pppuVar6[0x48] = param_51;
      _objc_release(ppuVar2);
      _objc_retain(param_52);
      ppuVar2 = pppuVar6[0x49];
      pppuVar6[0x49] = param_52;
      _objc_release(ppuVar2);
      _objc_retain(param_53);
      ppuVar2 = pppuVar6[0x4a];
      pppuVar6[0x4a] = param_53;
      _objc_release(ppuVar2);
      pppuVar6[0x4b] = param_54;
      _objc_retain(param_55);
      ppuVar2 = pppuVar6[0x4c];
      pppuVar6[0x4c] = param_55;
      _objc_release(ppuVar2);
      _objc_retain(param_56);
      ppuVar2 = pppuVar6[0x4d];
      pppuVar6[0x4d] = param_56;
      _objc_release(ppuVar2);
      pppuVar6[0x4e] = param_57;
      _objc_retain(param_58);
      ppuVar2 = pppuVar6[0x19];
      pppuVar6[0x19] = param_58;
      _objc_release(ppuVar2);
      _objc_retain(param_59);
      ppuVar2 = pppuVar6[0x1a];
      pppuVar6[0x1a] = param_59;
      _objc_release(ppuVar2);
      ppuVar2 = (undefined8 **)PTR_PTR_1126d6320;
      _objc_alloc();
      ppuVar4 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c007600();
      ppuVar5 = pppuVar6[0x18];
      pppuVar6[0x18] = ppuVar2;
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      func_0x00010beacb20(pppuVar6);
      if (((ulong)pppuVar6[0x3a] & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa240();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa240();
        _objc_release(puVar3);
      }
      ppuVar4 = pppuVar6[0x33];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c11f8;
      func_0x00010c25b020(PTR_PTR_1126c11f8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar4;
      func_0x00010bf1f320();
      _objc_release(puVar3);
      _objc_release(ppuVar4);
      if ((int)ppuVar2 != 0) {
        ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = pppuVar6[0x4f];
        pppuVar6[0x4f] = ppuVar2;
        _objc_release(ppuVar4);
      }
      ppuVar4 = pppuVar6[0x33];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c11f8;
      func_0x00010bfb53c0(PTR_PTR_1126c11f8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar4;
      func_0x00010bf1f320();
      *(char *)(pppuVar6 + 0x23) = (char)ppuVar2;
      _objc_release(puVar3);
      _objc_release(ppuVar4);
    }
    _objc_retain(pppuVar6);
    param_1 = pppuVar6;
  }
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_24);
  _objc_release(param_23);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return pppuVar6;
}



/* Entry: 107aa6a64; end: 107aa6af7; -[SCStoriesViewingSession setEventAnnouncing:] */

void FUN_107aa6a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x2e0) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c12cf80(*(long *)(param_1 + 0x2e0),param_2,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x2e0);
  }
  *(undefined8 *)(param_1 + 0x2e0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x2e0);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar2,param_2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aa6af8; end: 107aa6b53; -[SCStoriesViewingSession setOperaPageProvider:] */

void FUN_107aa6af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x2e8,param_3);
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bfba540();
  _objc_release(param_3);
  *(undefined8 *)(param_1 + 0x300) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa6b54; end: 107aa6b7b; -[SCStoriesViewingSession updateOperaConfiguration:] */

void FUN_107aa6b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107aa6b7c; end: 107aa6cc3; -[SCStoriesViewingSession setPlaylistItemController:] */

void FUN_107aa6b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c101260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfecde0();
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x308,param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1c5b40(*(undefined8 *)(param_1 + 0xc0));
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107aa6cc4; end: 107aa6d37;  */

void FUN_107aa6cc4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_1 + 0x308;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c101400();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107aa6d38; end: 107aa6d77; -[SCStoriesViewingSession setOperaControlling:] */

void FUN_107aa6d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_storeWeak(param_1 + 0x2f8,param_3);
  lVar1 = param_1 + 0x2e8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfba540();
  *(long *)(param_1 + 0x300) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aa6d78; end: 107aa7157; -[SCStoriesViewingSession extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107aa6d78(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5b38;
  func_0x00010c08f700(PTR_PTR_1126c5b38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar3 = param_4;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c5b38;
    func_0x00010c258f40(PTR_PTR_1126c5b38);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((uVar12 & 1) == 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,0);
      goto LAB_107aa711c;
    }
  }
  else {
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be0d9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bef7f60(puVar2);
  uVar3 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b47a0;
  _objc_opt_class(PTR_PTR_1126b47a0);
  uVar3 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar4);
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar12);
    uVar12 = 0;
  }
  uVar3 = uVar1;
  func_0x00010853a834();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(param_1 + 0xc0);
  _objc_retain(lVar11);
  if (lVar11 != 0) {
    puVar4 = PTR_PTR_1126d6320;
    func_0x00010c0737a0();
    if (((int)puVar4 != 0) && (uVar6 = uVar3, func_0x00010c08fa60(), uVar6 != 0)) {
      uVar6 = uVar1;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      if ((uVar9 & 1) == 0) {
        uVar6 = param_5;
        func_0x00010c118b40(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar11;
        func_0x00010c0cad60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if (lVar10 == 0) {
          uVar6 = uVar1;
          func_0x00010bf3cf60(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf96820(lVar11);
          _objc_release(uVar6);
        }
        else {
          func_0x00010bef7f60(puVar2);
        }
        _objc_release(lVar10);
      }
    }
  }
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  (**(code **)(param_6 + 0x10))(param_6,puVar4,PTR____NSDictionary0__struct_11034ab58);
  _objc_release(puVar4);
  _objc_release(lVar11);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
LAB_107aa711c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa7158; end: 107aa733b; -[SCStoriesViewingSession _refreshFriendOfGroupStoryMembershipForStorySnap:pageProperties:] */

void FUN_107aa7158(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b47a0;
    _objc_opt_class(PTR_PTR_1126b47a0);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) == 0) {
      _objc_release(param_4);
      param_4 = 0;
    }
    puVar1 = PTR_PTR_1126d6320;
    func_0x00010c0737a0();
    if ((int)puVar1 != 0) {
      uVar2 = param_3;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar5 & 1) == 0) {
        uVar2 = param_3;
        func_0x00010853a834();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c08fa60();
        if (uVar3 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0xc0);
          uVar3 = param_3;
          func_0x00010bf3cf60(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf96820(uVar4);
          _objc_release(uVar3);
          lVar6 = param_1 + 0x308;
          _objc_loadWeakRetained();
          if (lVar6 != 0) {
            uVar3 = param_3;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010c08fa60();
            _objc_release(uVar3);
            _objc_release(lVar6);
            if (uVar5 != 0) {
              param_1 = param_1 + 0x308;
              _objc_loadWeakRetained(param_1);
              uVar3 = param_3;
              func_0x00010bf3cf60(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c101400(param_1);
              _objc_release(uVar3);
              _objc_release(param_1);
            }
          }
        }
        _objc_release(uVar2);
      }
    }
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa733c; end: 107aa7343; -[SCStoriesViewingSession shouldUseExtendedResetToCamera] */

undefined8 FUN_107aa733c(void)

{
  return 0;
}



/* Entry: 107aa7344; end: 107aa7393; -[SCStoriesViewingSession _setupFriendStoryViewTimeFixConfigs] */

void FUN_107aa7344(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 400);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110eabc58,0,0);
  if (0 < (int)uVar2) {
    lVar1 = 0x208;
    if ((uVar2 & 1) == 0) {
      lVar1 = 0x209;
    }
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 107aa7394; end: 107aa739b; -[SCStoriesViewingSession viewingType] */

undefined8 FUN_107aa7394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



/* Entry: 107aa739c; end: 107aa73a3; -[SCStoriesViewingSession setViewingType:] */

void FUN_107aa739c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x288) = param_3;
  return;
}



/* Entry: 107aa73a4; end: 107aa73ab; -[SCStoriesViewingSession liveStoriesCount] */

undefined8 FUN_107aa73a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x290);
}



/* Entry: 107aa73ac; end: 107aa73b3; -[SCStoriesViewingSession setLiveStoriesCount:] */

void FUN_107aa73ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x290) = param_3;
  return;
}



/* Entry: 107aa73b4; end: 107aa73bb; -[SCStoriesViewingSession entryReason] */

undefined8 FUN_107aa73b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Entry: 107aa73bc; end: 107aa73c3; -[SCStoriesViewingSession setEntryReason:] */

void FUN_107aa73bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x298) = param_3;
  return;
}



/* Entry: 107aa73c4; end: 107aa73cb; -[SCStoriesViewingSession defaultStoryViewingActionContext] */

undefined8 FUN_107aa73c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Entry: 107aa73cc; end: 107aa73d3; -[SCStoriesViewingSession setDefaultStoryViewingActionContext:] */

void FUN_107aa73cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2a0) = param_3;
  return;
}



/* Entry: 107aa73d4; end: 107aa73db; -[SCStoriesViewingSession currentFriendStoriesViewingSessions] */

undefined8 FUN_107aa73d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



/* Entry: 107aa73dc; end: 107aa73e3; -[SCStoriesViewingSession lastFriendStoryInteraction] */

undefined8 FUN_107aa73dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}



/* Entry: 107aa73e4; end: 107aa73eb; -[SCStoriesViewingSession isTopSnap] */

undefined1 FUN_107aa73e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x280);
}



/* Entry: 107aa73ec; end: 107aa73f3; -[SCStoriesViewingSession loadingScreenCount] */

undefined8 FUN_107aa73ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b8);
}



/* Entry: 107aa73f4; end: 107aa73fb; -[SCStoriesViewingSession isViewingLongform] */

undefined1 FUN_107aa73f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x281);
}



/* Entry: 107aa73fc; end: 107aa7403; -[SCStoriesViewingSession playSource] */

undefined8 FUN_107aa73fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c0);
}



/* Entry: 107aa7404; end: 107aa740b; -[SCStoriesViewingSession startingEntryEvent] */

undefined8 FUN_107aa7404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c8);
}



/* Entry: 107aa740c; end: 107aa7413; -[SCStoriesViewingSession operaNavigationType] */

undefined8 FUN_107aa740c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d0);
}



/* Entry: 107aa7414; end: 107aa741b; -[SCStoriesViewingSession mediaPlaybackSessionId] */

undefined8 FUN_107aa7414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d8);
}



/* Entry: 107aa741c; end: 107aa7423; -[SCStoriesViewingSession eventAnnouncing] */

undefined8 FUN_107aa741c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2e0);
}



/* Entry: 107aa7424; end: 107aa743b; -[SCStoriesViewingSession operaPageProvider] */

void FUN_107aa7424(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x2e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aa743c; end: 107aa7443; -[SCStoriesViewingSession previousStoriesPlaybackSequenceDisplayed] */

undefined8 FUN_107aa743c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2f0);
}



/* Entry: 107aa7444; end: 107aa745b; -[SCStoriesViewingSession operaControlling] */

void FUN_107aa7444(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x2f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aa745c; end: 107aa7463; -[SCStoriesViewingSession initialFriendsPlayListCount] */

undefined8 FUN_107aa745c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x300);
}



/* Entry: 107aa7464; end: 107aa747b; -[SCStoriesViewingSession playlistItemController] */

void FUN_107aa7464(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aa747c; end: 107aa7813; -[SCStoriesViewingSession .cxx_destruct] */

void FUN_107aa747c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x308);
  _objc_destroyWeak(param_1 + 0x2f8);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_destroyWeak(param_1 + 0x2e8);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_destroyWeak(param_1 + 0x210);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0xf8,0);
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
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 107aa7814; end: 107aa79ff;  */

void FUN_107aa7814(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c182a00(param_1);
  uVar1 = param_3;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar1;
  if (uVar3 != 0) {
    uVar6 = uVar3;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  uVar1 = uVar4;
  func_0x00010c08fa60();
  if (uVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___AVAssetResourceLoadingContentInformationRequest_1126d6328;
    func_0x00010bde7ec0(PTR__OBJC_CLASS___AVAssetResourceLoadingContentInformationRequest_1126d6328)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0de9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c0b4ca0(puVar7);
    func_0x00010c182140(param_1);
    _objc_release(puVar7);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aa7a00; end: 107aa7a9b; -[SCNeoPlayerResourceLoadingDataRequest initWithloadDataChunk:chunkSize:completion:] */

long FUN_107aa7a00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  func_0x00010bfee200();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_4;
    *(undefined8 *)(param_1 + 0x28) = param_3;
    *(undefined8 *)(param_1 + 0x30) = param_3;
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar3 = param_5;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar3;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 107aa7a9c; end: 107aa7aa3; -[SCNeoPlayerResourceLoadingDataRequest respondWithData:] */

void FUN_107aa7a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_appendData__11259f460);
  return;
}



/* Entry: 107aa7aa4; end: 107aa7abb; -[SCNeoPlayerResourceLoadingDataRequest finishLoading] */

void FUN_107aa7aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107aa7ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0,0xffffffffffffffff);
  return;
}



/* Entry: 107aa7abc; end: 107aa7b37; -[SCNeoPlayerResourceLoadingDataRequest finishLoadingWithError:] */

void FUN_107aa7abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar2,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aa7b38; end: 107aa7b3f; -[SCNeoPlayerResourceLoadingDataRequest requestedLength] */

undefined8 FUN_107aa7b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107aa7b40; end: 107aa7b47; -[SCNeoPlayerResourceLoadingDataRequest requestedOffset] */

undefined8 FUN_107aa7b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107aa7b48; end: 107aa7b4f; -[SCNeoPlayerResourceLoadingDataRequest requestsAllDataToEndOfResource] */

undefined1 FUN_107aa7b48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 107aa7b50; end: 107aa7b57; -[SCNeoPlayerResourceLoadingDataRequest currentOffset] */

undefined8 FUN_107aa7b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107aa7b58; end: 107aa7b87; -[SCNeoPlayerResourceLoadingDataRequest .cxx_destruct] */

void FUN_107aa7b58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aa7b88; end: 107aa7c3b; -[SCNeoPlayerResourceLoadingRequest initWithloadDataChunk:chunkSize:requestId:completion:] */

long FUN_107aa7b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  func_0x00010bfee200();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126d6330;
    _objc_alloc();
    func_0x00010c063940();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return param_1;
}



/* Entry: 107aa7c3c; end: 107aa7c43; -[SCNeoPlayerResourceLoadingRequest finishLoading] */

void FUN_107aa7c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_finishLoading_1125c97f0)
  ;
  return;
}



/* Entry: 107aa7c44; end: 107aa7c4b; -[SCNeoPlayerResourceLoadingRequest finishLoadingWithError:] */

void FUN_107aa7c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_finishLoadingWithError__1125c9800);
  return;
}



/* Entry: 107aa7c4c; end: 107aa7c73; -[SCNeoPlayerResourceLoadingRequest dataRequest] */

void FUN_107aa7c4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107aa7c74; end: 107aa7c7b; -[SCNeoPlayerResourceLoadingRequest requestId] */

undefined8 FUN_107aa7c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107aa7c7c; end: 107aa7cab; -[SCNeoPlayerResourceLoadingRequest .cxx_destruct] */

void FUN_107aa7c7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aa7cac; end: 107aa7ec3; -[SCResourceLoaderCMWriteStream initWithLoadingRequest:firstChunk:mediaId:contentLength:maxFetchBytes:enablePartialResponseFromFirstChunk:avoidBytesCopying:queue:completion:] */

undefined8 *
FUN_107aa7cac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,ulong param_7,undefined1 param_8,undefined1 param_9,
             undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f9a10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar7 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar7);
    puVar1[4] = param_6;
    uVar2 = param_12;
    _objc_retainBlock();
    uVar7 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar7);
    *(undefined1 *)(puVar1 + 7) = 0;
    *(undefined4 *)((long)puVar1 + 0x3c) = 0;
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 0x49) = param_9;
    lVar3 = param_3;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1373c0();
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c1372a0();
    lVar6 = param_3;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar4 == 0) {
      param_6 = lVar6;
      func_0x00010c137280();
    }
    else {
      lVar4 = lVar6;
      func_0x00010c1372a0();
      param_6 = param_6 - lVar4;
    }
    puVar1[10] = lVar5;
    puVar1[0xb] = param_6;
    _objc_release(lVar6);
    _objc_release(lVar3);
    if ((param_7 != 0) && (param_7 < (ulong)puVar1[0xb])) {
      puVar1[0xb] = param_7;
    }
    lVar3 = param_3;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1372a0();
    puVar1[0xc] = lVar4;
    puVar1[0xd] = 0;
    _objc_release(lVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107aa7ec4; end: 107aa803f; -[SCResourceLoaderCMWriteStream initStreamForContentResult:] */

void FUN_107aa7ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar6 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar6;
  func_0x00010bf64280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5f600();
  lVar1 = *(long *)(param_1 + 0x50);
  lVar2 = *(long *)(param_1 + 0x58);
  _objc_release(uVar3);
  _objc_release(uVar6);
  if ((uVar4 < (ulong)(lVar2 + lVar1)) && (*(ulong *)(param_1 + 0x50) < *(ulong *)(param_1 + 0x20)))
  {
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010c08fa60();
    _NSIntersectionRange(0,lVar5,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x58);
    uVar6 = *(ulong *)(param_1 + 0x10);
    func_0x00010c08fa60();
    if (uVar6 < (ulong)(lVar2 + lVar1)) {
      if ((*(char *)(param_1 + 0x48) == '\x01') && (lVar5 != 0)) {
        func_0x00010be84fe0(param_1);
        puVar7 = PTR_PTR_1126bff98;
        func_0x00010bf60700();
        *(undefined **)(param_1 + 0x70) = puVar7;
      }
      else {
        puVar7 = PTR_PTR_1126bff98;
        func_0x00010bf60700();
        *(undefined **)(param_1 + 0x70) = puVar7;
      }
      uVar8 = param_3;
      func_0x00010c11c020();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = uVar8;
      _objc_release(uVar9);
    }
    else {
      func_0x00010be84fe0(param_1);
    }
  }
  else {
    func_0x00010be17220(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa8040; end: 107aa81ef; -[SCResourceLoaderCMWriteStream putBytesSlice:] */

void FUN_107aa8040(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c23e860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24d960();
  _objc_release(uVar2);
  uVar4 = param_3;
  func_0x00010c23e860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf940a0();
  _objc_release(uVar4);
  if ((-1 < (long)uVar3) && ((long)uVar3 <= (long)uVar2)) {
    uVar4 = param_3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    puVar6 = PTR_PTR_1126bff98;
    func_0x00010bf60700();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c06fc80();
    if (iVar1 == 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      _objc_copyWeak(auStack_78,auStack_58);
      _objc_retain(uVar4);
      uStack_70 = uVar3;
      lStack_68 = uVar2 - uVar3;
      puStack_60 = puVar6;
      func_0x00010c0f7fc0(uVar7);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_58);
    }
    else {
      func_0x00010be84fe0(param_1);
    }
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107aa81f0; end: 107aa8233;  */

void FUN_107aa81f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be84fe0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


